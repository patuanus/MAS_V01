# GVU Package (`gvu_pkg.sv`) README

## 1. Tổng quan và vai trò

`rtl/gvu_pkg.sv` là SystemVerilog package trung tâm của GVU. File này không
phải một hardware module độc lập; nó định nghĩa các constant, enum, struct và
helper function dùng chung cho RTL/TB. Các block sử dụng package qua:

```systemverilog
import gvu_pkg::*;
```

Ý nghĩa chính của package là bảo đảm tất cả block dùng cùng một định nghĩa V32,
format dữ liệu, logical VRF access và operation encoding. `gvu_pkg.sv` phải
được compile **trước** tất cả RTL/TB phụ thuộc vào nó.

| File | Vai trò | Có top-level simulation riêng? |
|---|---|---|
| `rtl/gvu_pkg.sv` | Shared type/constant/function package | Không |

## 2. Constants và ý nghĩa V32

Các localparam cơ bản:

| Constant | Giá trị | Ý nghĩa |
|---|---:|---|
| `GVU_LANES` | 32 | Một V32 luôn có 32 logical lanes |
| `VRF_ROW_BITS` | 256 | Độ rộng một physical VRF row |
| `VRF_ROWS` | 32 | Số physical VRF rows |
| `VRF_ROW_BYTES` | 32 | Số byte trên một physical row |
| `V32_I8_BITS` | 256 | 32 × 8-bit |
| `V32_I16_BITS` | 512 | 32 × 16-bit |
| `V32_I32_BITS` | 1024 | 32 × 32-bit |
| `V32_I64_BITS` | 2048 | 32 × 64-bit |
| `V32_MAX_BITS` | 2048 | Transport maximum cho logical V32 access |
| `V32_MAX_ROWS` | 8 | V32I64 dùng 8 physical 256-bit rows |

Điểm quan trọng: V32I16/I32/I64 **không** có 16/8/4 lane. Chúng vẫn luôn có
32 lane và do đó cần 2/4/8 physical row tương ứng.

Package cũng xác định baseline logical VRF port requirement:

```text
GVU_VRF_RW_V32I64_PORTS = 2
GVU_VRF_RW_V32I32_PORTS = 3
GVU_VRF_RW_V32I16_PORTS = 2
GVU_VRF_RW_V32I8_PORTS  = 2
```

Đây là capability target ở mức kiến trúc, không có nghĩa package hoặc VRF
hiện tại đã implement final concurrent physical arbitration.

## 3. Types, enum, struct và helper function

| Type / function | Ý nghĩa |
|---|---|
| `gvu_data_format_t` | Format I8/I16/I32/I64 (`GVU_FMT_I8` đến `GVU_FMT_I64`) |
| `gvu_rows_per_vector(format)` | Trả 1/2/4/8 physical rows cho I8/I16/I32/I64 |
| `gvu_vector_bits(format)` | Trả logical width 256/512/1024/2048 bit |
| `gvu_vrf_access_req_t` | One-request logical VRF descriptor: valid, read/write, format, base row, write data/mask |
| `gvu_vrf_access_rsp_t` | Logical VRF response: valid, legal, 2048-bit read data |
| `gvu_opcode_t` | Opcode dùng bởi controller/pipeline proof model |
| `gvu_alu_op_t` | Legacy/common ALU operation selector |
| `gvu_shift_op_t` | Shift left, logical right, arithmetic right |
| `gvu_compare_op_t` | Project contract: pairwise min/max và vector reduction min/max |
| `gvu_lut_mode_t` | DIRECT, LOG_SCALE, PWL; PWL numeric algorithm vẫn pending |
| `gvu_round_mode_t` | TRUNCATE, HALF_AWAY_FROM_ZERO, NEAREST_EVEN, UNSUPPORTED |
| `gvu_fixed_point_cfg_t` | Internal generic fixed-point configuration for reusable FUs |

`GVU_ROUND_TEMP_HALF_UP` là compatibility alias của
`GVU_ROUND_HALF_AWAY_FROM_ZERO`; nghĩa của negative half case vì vậy không còn
mơ hồ. `gvu_fixed_point_cfg_t` là internal implementation structure, không
được xem như firmware/ISA-visible final encoding.

## 4. Cách sử dụng và phương pháp kiểm tra

Ví dụ import package trong RTL:

```systemverilog
module example;
  import gvu_pkg::*;
  logic [V32_I32_BITS-1:0] data;
  gvu_data_format_t format;
  initial format = GVU_FMT_I32;
endmodule
```

Ví dụ dùng helper để kiểm tra logical VRF mapping:

```systemverilog
if (base_row + gvu_rows_per_vector(format) <= VRF_ROWS)
  // logical access is in range
```

Package không có standalone DUT behavior để tạo golden/actual result. Nó được
kiểm tra gián tiếp bởi TB của các consumer. Ví dụ:

| Consumer TB | Package content được kiểm tra gián tiếp |
|---|---|
| `tb/tb_gvu_vrf_logical.sv` | V32 width, 1/2/4/8 row mapping, `gvu_vrf_access_*_t`, 2/3/2/2 baseline |
| `tb/tb_gvu_vector_shift.sv` | `gvu_data_format_t`, `gvu_shift_op_t`, V32 widths |
| `tb/tb_gvu_vector_compare.sv` | `gvu_compare_op_t` |
| `tb/tb_gvu_vector_round.sv` | `gvu_round_mode_t`, `gvu_fixed_point_cfg_t` |
| `tb/tb_gvu_lut.sv` | `gvu_lut_mode_t` |

Static review cần xác nhận package compile first, V32 constants không bị sửa
sai, và enum/type được dùng nhất quán. Functional PASS chỉ được kết luận từ
log simulation của consumer TB, không phải do package được đọc bằng mắt.

## 5. Cách chạy bằng Verilator

Không thể chạy `gvu_pkg.sv` một mình vì file không có `module` top-level.
Thay vào đó, compile package trước một TB consumer. Ví dụ chạy logical VRF TB:

```bash
cd /home/tuan.pham/test_rtl/gvu
mkdir -p logs

verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vrf_logical \
  --Mdir build/verilator_vrf \
  rtl/gvu_pkg.sv \
  rtl/gvu_vrf.sv \
  tb/tb_gvu_vrf_logical.sv

./build/verilator_vrf/Vtb_gvu_vrf_logical \
  | tee logs/gvu_vrf_sim.log
```

Hoặc package được đặt đầu tiên cho Add/Sub:

```bash
verilator --binary --timing -sv -Wno-fatal \
  --top-module tb_gvu_vector_addsub \
  --Mdir build/verilator_addsub \
  rtl/gvu_pkg.sv \
  rtl/gvu_vector_addsub.sv \
  tb/tb_gvu_vector_addsub.sv

./build/verilator_addsub/Vtb_gvu_vector_addsub \
  | tee logs/gvu_vector_addsub.log
```

Nếu package bị đổi, rebuild consumer tương ứng. Một package compilation error
sẽ xuất hiện trước khi Verilator có thể elaborate DUT/TB; đây là expected
compile-time protection cho type/width mismatch.
