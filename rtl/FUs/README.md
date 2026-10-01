# GVU Vector Add/Sub, Shift, and Clamp RTL README

## 1. Tổng quan chức năng

Ba block là các **Vector Functional Unit (FU)** dùng lại được trong GVU. Mỗi
block thực hiện phép toán độc lập trên **32 logical lanes** (`V32`) và là
behavioral primitive có độ trễ logic **L=0**:

- `req_ready` luôn bằng `1`.
- Khi `req_valid=1`, `rsp_valid=1` trong cùng chu kỳ combinational.
- `GVU_FMT_I8`, `GVU_FMT_I16`, `GVU_FMT_I32` được hỗ trợ.
- `GVU_FMT_I64` không được hỗ trợ trong ba FU này: `rsp_error=1` và `y=0`.
- Transport của các FU là `V32I32_BITS = 1024` bit. Với I8/I16, phần bit cao
  không thuộc logical vector được đặt bằng zero.

| RTL | Module | Testbench |
|---|---|---|
| `rtl/gvu_vector_addsub.sv` | `gvu_vector_addsub` | `tb/tb_gvu_vector_addsub.sv` |
| `rtl/gvu_vector_shift.sv` | `gvu_vector_shift` | `tb/tb_gvu_vector_shift.sv` |
| `rtl/gvu_vector_clamp.sv` | `gvu_vector_clamp` | `tb/tb_gvu_vector_clamp.sv` |

## 2. Feature của từng module

### `gvu_vector_addsub`

- Thực hiện ADD hoặc SUB theo `add_not_sub` (`1`: add, `0`: sub).
- Xử lý 32 lane I8, I16, hoặc I32 độc lập.
- Arithmetic là fixed-width: overflow/underflow wrap theo độ rộng lane.
- Không diễn giải packed mode ngoài semantics V32 hiện tại.

### `gvu_vector_shift`

- Thực hiện logical left shift: `GVU_SHIFT_LEFT`.
- Thực hiện logical right shift: `GVU_SHIFT_RIGHT_LOGICAL`.
- Thực hiện arithmetic right shift: `GVU_SHIFT_RIGHT_ARITH`.
- `amount[5:0]` là shift amount dùng chung cho 32 lane.
- Arithmetic right shift sign-extend theo đúng độ rộng lane I8/I16/I32.

### `gvu_vector_clamp`

- Clamp độc lập theo từng lane: nếu `a < lo` trả `lo`; nếu `a > hi` trả `hi`;
  còn lại trả `a`.
- `signed_mode=1`: so sánh signed two's-complement.
- `signed_mode=0`: so sánh unsigned.
- `lo` và `hi` là vector bounds per-lane; không hard-code Q-format hoặc một
  pipeline Requant cụ thể.

## 3. Interface và hành vi dữ liệu

Ba block dùng handshake combinational hiện có của project. Tên port trong RTL
hiện tại là legacy interface và được giữ để tương thích với consumer hiện có.

| Module | Input điều khiển | Input dữ liệu | Output |
|---|---|---|---|
| Add/Sub | `req_valid`, `add_not_sub`, `format` | `a`, `b` (1024 bit) | `req_ready`, `rsp_valid`, `rsp_error`, `y` |
| Shift | `req_valid`, `format`, `op`, `amount` | `a` (1024 bit) | `req_ready`, `rsp_valid`, `rsp_error`, `y` |
| Clamp | `req_valid`, `signed_mode`, `format` | `a`, `lo`, `hi` (1024 bit) | `req_ready`, `rsp_valid`, `rsp_error`, `y` |

Logical widths cho mỗi format:

| Format | Lane count | Lane width | Meaningful result bits |
|---|---:|---:|---:|
| V32I8 | 32 | 8 | 256 |
| V32I16 | 32 | 16 | 512 |
| V32I32 | 32 | 32 | 1024 |

## 4. Phương pháp test

Mỗi TB là self-checking và tạo `expected` bằng reference calculation độc lập
trong testbench, sau đó so sánh toàn bộ vector DUT `y` với golden result.
Mismatch hoặc handshake/error không đúng gọi `$fatal`. Mỗi testcase in:

```text
[ADD_SUB|SHIFT|CLAMP][TC<n>] GOLDEN_RESULT = ...
[ADD_SUB|SHIFT|CLAMP][TC<n>] ACTUAL_RESULT = ...
[ADD_SUB|SHIFT|CLAMP][TC<n>] PASS
```

| TB | Testcase hiện có | Phủ hành vi |
|---|---|---|
| Add/Sub | TC1 I8 ADD; TC2 I16 SUB; TC3 I32 ADD | zero, signed/two's-complement values, lane-dependent values, fixed-width wrap boundary |
| Shift | TC1 I8 SHL amount 1; TC2 I16 logical SHR amount 5; TC3 I32 arithmetic SHR amount 31 | zero, one, MSB set, all ones, signed-positive/negative patterns, lane independence |
| Clamp | TC1 I8 signed; TC2 I16 unsigned; TC3 I32 signed | below low bound, equal low, inside range, equal high, above high across 32 lanes |

Các TB hiện có là directed functional tests. Kết quả PASS chỉ được kết luận
sau khi có simulator log thực tế.

## 5. Cách chạy bằng Verilator

Yêu cầu Verilator có trong `PATH`:

```bash
verilator --version
```

Tại root của project (`/home/tuan.pham/test_rtl/gvu`), build và chạy từng TB.
`gvu_pkg.sv` phải đứng trước RTL/TB vì chứa type và enum dùng chung.

```bash
mkdir -p logs

verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vector_addsub \
  --Mdir build/verilator_addsub \
  rtl/gvu_pkg.sv rtl/gvu_vector_addsub.sv tb/tb_gvu_vector_addsub.sv
./build/verilator_addsub/Vtb_gvu_vector_addsub | tee logs/gvu_vector_addsub.log
```

```bash
verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vector_shift \
  --Mdir build/verilator_shift \
  rtl/gvu_pkg.sv rtl/gvu_vector_shift.sv tb/tb_gvu_vector_shift.sv
./build/verilator_shift/Vtb_gvu_vector_shift | tee logs/gvu_vector_shift.log
```

```bash
verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vector_clamp \
  --Mdir build/verilator_clamp \
  rtl/gvu_pkg.sv rtl/gvu_vector_clamp.sv tb/tb_gvu_vector_clamp.sv
./build/verilator_clamp/Vtb_gvu_vector_clamp | tee logs/gvu_vector_clamp.log
```

Xem gold/actual result trong log:

```bash
rg 'GOLDEN_RESULT|ACTUAL_RESULT|PASS|%Error' logs/gvu_vector_*.log
```

Nếu cần clean một build trước khi chạy lại, chỉ xóa đúng thư mục build tương
ứng, ví dụ: `rm -rf build/verilator_addsub`.


