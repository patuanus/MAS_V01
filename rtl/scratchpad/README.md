# GVU Scratchpad 4-Bank Wrapper README

## 1. Tổng quan chức năng

`rtl/gvu_scratchpad.sv` là wrapper Scratchpad SRAM behavioral theo cấu trúc
MAS 4-bank. Block lưu metadata/tạm thời cho compute pipeline, đồng thời cung
cấp ping-pong (double buffer) để core và DMA có thể làm việc trên hai buffer
khác nhau.

- Mỗi bank có buffer 0 và buffer 1 độc lập.
- Dung lượng là parameter (`WORDS`, `VBANK0_WORDS`, `VBANK1_WORDS`,
  `VBANK2_WORDS`, `SBANK_WORDS`), chưa phải final SW tiling capacity.
- Read/write là synchronous: thực hiện/sampled tại `posedge clk`.
- Đây là architectural wrapper behavioral; chưa phải SRAM macro, AGU, DMA
  protocol hoặc arbitration implementation cuối cùng.

| RTL | Module | Dedicated testbench |
|---|---|---|
| `rtl/gvu_scratchpad.sv` | `gvu_scratchpad` | `tb/tb_gvu_scratchpad.sv` |

## 2. Feature và tổ chức từng bank

| Bank | Dữ liệu vật lý | Logical access hiện có | Feature chính |
|---|---:|---|---|
| `vbank0` | V32I8, 256 bit/row | Legacy core `a_*`, DMA | Single-row vector storage, ping-pong buffer 0/1 |
| `vbank1` | V32I8, 256 bit/row | Legacy core `b_*`, DMA | Single-row vector storage, ping-pong buffer 0/1 |
| `vbank2` | V32I8, 256 bit/row | P1 V32I8; P0 V32I32; DMA | P0 gather/scatter 4 physical rows; P1 accesses 1 row |
| `sbank` | INT32, 32 bit/word | P0 INT32; P1 INT8; DMA | P1 accesses byte `[7:0]`; DMA uses low 32 bits |

`vbank2` mapping là điểm quan trọng nhất:

```text
P0 V32I32 (1024 bit) at base N
    <-> physical V32I8 rows N, N+1, N+2, N+3

P1 V32I8 (256 bit) at address N
    <-> one physical row N
```

Khi `vbank2_p0_valid` và `vbank2_p1_valid` cùng active, wrapper không chọn
priority: cả `vbank2_p0_error` và `vbank2_p1_error` được assert. Khi DMA
active, `dma_buffer_sel` phải khác `core_buffer_sel`; nếu giống nhau,
`dma_error=1` và DMA request bị từ chối.

## 3. Interface và hành vi dữ liệu

| Interface | Chức năng | Timing / error hiện tại |
|---|---|---|
| `a_*` | Core read/write vbank0 | Synchronous; không có range-error output riêng |
| `b_*` | Core read/write vbank1 | Synchronous; không có range-error output riêng |
| `vbank2_p0_*` | V32I32 1024-bit gather/scatter | P0 error nếu P1 active hoặc base+3 out of range |
| `vbank2_p1_*` | V32I8 256-bit access | P1 error nếu P0 active hoặc address out of range |
| `sbank_p0_*` | INT32 scalar access | Synchronous; legal address expected by caller |
| `sbank_p1_*` | INT8 scalar access | Synchronous; accesses low byte of current INT32 word |
| `dma_*` | 256-bit physical row DMA transport | `dma_bank`: 0=vbank0, 1=vbank1, 2=vbank2, 3=sbank |

Buffer select offsets are applied internally per bank:

```text
buffer 0 -> storage rows [0 .. DEPTH-1]
buffer 1 -> storage rows [DEPTH .. 2*DEPTH-1]
```

Invalid-address behavior is explicitly checked for vbank2 and DMA. Legacy
core `a_*`/`b_*` ports have no range-error output, so invalid legacy addresses
do not currently have a defined architectural response contract.

## 4. Phương pháp test

`tb/tb_gvu_scratchpad.sv` instantiates depth `DEPTH=8` only for compact,
deterministic boundary testing. It maintains independent golden memories:

```text
ref_vb0[buffer][row]
ref_vb1[buffer][row]
ref_vb2[buffer][row]
ref_sb[buffer][word]
```

Every accepted write updates the reference model. Every DUT read compares
against the corresponding golden value and terminates via `$fatal` on a
mismatch. Each check prints:

```text
[SPM][CHECK<n>] <testcase>
[SPM][CHECK<n>] GOLDEN_RESULT = ...
[SPM][CHECK<n>] ACTUAL_RESULT = ...
[SPM][CHECK<n>] PASS
```

| Test group | Coverage |
|---|---|
| vbank0/vbank1 | Address 0 and depth-1, different patterns, address isolation, ping-pong isolation, cross-bank isolation |
| vbank2 P1 | V32I8 read/write through both ping-pong buffers |
| vbank2 P0 | V32I32 1024-bit scatter/gather and P1 inspection of physical rows N..N+3 |
| vbank2 conflict | Same-cycle P0/P1 conflict/error and data-preservation check |
| sbank | P0 INT32, P1 INT8, current low-byte alias, buffer-1 boundary |
| core/DMA | Valid opposite-buffer ownership in both directions for all four banks |
| error/boundary | vbank2 P0/P1 invalid addresses, DMA invalid address, core/DMA same-buffer error |

The testbench is self-checking. Functional PASS may only be claimed after an
actual simulator log is produced.

## 5. Cách chạy bằng Verilator

Kiểm tra Verilator trước:

```bash
verilator --version
```

Từ project root (`/home/tuan.pham/test_rtl/gvu`), compile theo thứ tự package
trước, rồi DUT, rồi testbench:

```bash
mkdir -p logs

verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_scratchpad \
  --Mdir build/verilator_scratchpad \
  rtl/gvu_pkg.sv \
  rtl/gvu_scratchpad.sv \
  tb/tb_gvu_scratchpad.sv
```

Chạy và lưu log:

```bash
./build/verilator_scratchpad/Vtb_gvu_scratchpad \
  | tee logs/gvu_scratchpad_sim.log
```

Lọc golden/actual/PASS để review:

```bash
rg 'GOLDEN_RESULT|ACTUAL_RESULT|PASS|%Error|\$fatal' \
  logs/gvu_scratchpad_sim.log
```

Expected final line khi tất cả testcase pass:

```text
PASS: tb_gvu_scratchpad -- current 4-bank/ping-pong wrapper contract
```

Nếu cần rebuild sạch, chỉ xóa thư mục build của Scratchpad:

```bash
rm -rf build/verilator_scratchpad
```
