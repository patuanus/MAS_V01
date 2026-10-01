# GVU Vector Register File (VRF) README

## 1. Tổng quan chức năng

`rtl/gvu_vrf.sv` cung cấp mô hình Vector Register File cho GVU. VRF là shared
storage nằm giữa controller, vector functional units và fixed pipeline
templates. Mô hình hiện tại phân biệt rõ physical row storage với logical V32
access:

- Physical storage: 32 rows × 256 bit = 8192 bit = 1 KiB.
- `gvu_vrf_physical`: physical-row model, có 3 read ports 256-bit và 1
  byte-masked write port.
- `gvu_vrf_logical`: one-request logical V32 gather/scatter model dùng cho
  verification của I8/I16/I32/I64.
- Reset synchronous active-low: khi `rst_n=0` tại `posedge clk`, tất cả 32
  physical row được clear về zero.

| RTL | Module | Dedicated testbench |
|---|---|---|
| `rtl/gvu_vrf.sv` | `gvu_vrf_physical`, `gvu_vrf_logical` | `tb/tb_gvu_vrf_logical.sv` |

## 2. Feature và logical-to-physical mapping

`V32` luôn có **32 logical lanes**, không giảm số lane khi tăng độ rộng phần
tử. Logical wrapper ánh xạ một vector rộng sang các physical row liên tiếp:

| Format | Logical vector | Rows required | Mapping at base N | Max legal base |
|---|---:|---:|---|---:|
| V32I8 | 32 × 8 = 256 bit | 1 | N | 31 |
| V32I16 | 32 × 16 = 512 bit | 2 | N, N+1 | 30 |
| V32I32 | 32 × 32 = 1024 bit | 4 | N..N+3 | 28 |
| V32I64 | 32 × 64 = 2048 bit | 8 | N..N+7 | 24 |

Feature hiện có:

- Logical **write/scatter**: consecutive 256-bit chunks được ghi vào rows liên
  tiếp tại `posedge clk`.
- Logical **read/gather**: physical rows được ghép theo đúng thứ tự vào
  `read_data` 2048-bit combinational.
- Cross-format aliasing: tất cả format dùng chung physical row storage; không
  có memory riêng theo datatype.
- Legality rule: `base_row + required_rows <= 32`.
- Không có alignment restriction hiện tại: I16 base 7, I32 base 13 và I64
  base 9 là legal nếu không vượt boundary.
- Aggregate logical-port target: I64=2 R/W, I32=3 R/W, I16=2 R/W, I8=2 R/W.
  Đây là requirement, chưa phải final physical port implementation.

## 3. Interface và hành vi dữ liệu

`gvu_vrf_logical` dùng package types trong `rtl/gvu_pkg.sv`:

| Structure / signal | Ý nghĩa |
|---|---|
| `gvu_vrf_access_req_t` | `valid`, `write`, `format`, `base_row`, 2048-bit `write_data`, byte `write_mask` |
| `gvu_vrf_access_rsp_t` | `valid`, `legal`, 2048-bit `read_data` |
| `req.valid` | Kích hoạt một logical request |
| `req.write=1` | Scatter write; commit tại rising edge nếu legal |
| `req.write=0` | Gather read; data trả combinational nếu legal |
| `rsp.valid` | Mirror của `req.valid` |
| `rsp.legal` | Kết quả range check theo format/base row |

Với illegal request, contract hiện tại là:

```text
rsp.valid     = 1
rsp.legal     = 0
rsp.read_data = 0x0
```

`write_mask` là 256-byte mask trên maximum 2048-bit transport. Chỉ byte thuộc
các row dùng bởi format hiện tại được áp dụng. Final same-cycle read/write
collision semantics, physical banking, replication, arbitration và SRAM macro
binding chưa được định nghĩa.

## 4. Phương pháp test

`tb/tb_gvu_vrf_logical.sv` là self-checking testbench. TB giữ independent
physical golden model:

```text
ref_rows[0:31]    // mỗi entry là một physical row 256-bit
```

Logical write cập nhật 1/2/4/8 reference rows. Logical read tự gather các row
đó vào expected 2048-bit vector rồi so sánh toàn bộ với `rsp.read_data`.
Mismatch gọi `$fatal`.

| Test group | Coverage hiện có |
|---|---|
| Reset | V32I64 gather sau reset, kiểm tra tám row đều zero |
| V32I8 | Base 0, 16, 31 |
| V32I16 | Normal base 4, unaligned base 7, boundary 30, illegal 31 |
| V32I32 | Normal base 12, unaligned base 13, boundary 28, illegal 29/31 |
| V32I64 | Normal base 8, unaligned base 9, boundary 24, illegal 25/31 |
| Gather/scatter | So sánh full 256/512/1024/2048-bit logical vectors |
| Cross-format alias | Write I32 at base 13 rồi read I8 tại rows 13..16 |
| Port baseline | Parameter check: I64/I32/I16/I8 = 2/3/2/2 |

Mỗi read/illegal check in golden và actual result:

```text
[VRF][CHECK<n>] <testcase>
[VRF][CHECK<n>] GOLDEN_RESULT=0x...
[VRF][CHECK<n>] ACTUAL_RESULT=0x...
| Testcase | Actual | Golden |
[VRF][CHECK<n>] PASS
```

## 5. Cách chạy bằng Verilator

Kiểm tra Verilator trong `PATH`:

```bash
verilator --version
```

Tại root project (`/home/tuan.pham/test_rtl/gvu`), build đúng source order:

```bash
mkdir -p logs

verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vrf_logical \
  --Mdir build/verilator_vrf \
  rtl/gvu_pkg.sv \
  rtl/gvu_vrf.sv \
  tb/tb_gvu_vrf_logical.sv
```

Chạy simulation và lưu log:

```bash
./build/verilator_vrf/Vtb_gvu_vrf_logical \
  | tee logs/gvu_vrf_sim.log
```

Lấy bảng actual/golden trực tiếp từ log:

```bash
rg '^\|' logs/gvu_vrf_sim.log
```

Lọc chi tiết check, golden/actual và PASS/failure:

```bash
rg '
VRF
|PASS|%Error|\$fatal' logs/gvu_vrf_sim.log
```

Expected final line khi toàn bộ TB pass:

```text
PASS: tb_gvu_vrf_logical current V32 mapping/gather/scatter contract
```

Nếu cần clean build riêng của VRF trước khi compile lại:

```bash
rm -rf build/verilator_vrf
```
