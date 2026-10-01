`ifndef GVU_PKG_SV
`define GVU_PKG_SV
package gvu_pkg;
  // Physical VRF organization defined by the source architecture.
  localparam int GVU_LANES = 32;
  localparam int VRF_ROW_BITS = 256;
  localparam int VRF_ROWS = 32;
  localparam int VRF_ROW_BYTES = VRF_ROW_BITS / 8;
  localparam int V32_I8_BITS = GVU_LANES * 8;
  localparam int V32_I16_BITS = GVU_LANES * 16;
  localparam int V32_I32_BITS = GVU_LANES * 32;
  localparam int V32_I64_BITS = GVU_LANES * 64;
  localparam int V32_MAX_BITS = V32_I64_BITS;
  localparam int V32_MAX_BYTES = V32_MAX_BITS / 8;
  localparam int V32_MAX_ROWS = V32_I64_BITS / VRF_ROW_BITS;
  // MAS 2026-09-17 logical VRF access requirements. These are capability
  // targets, not an implementation of concurrent ports/arbitration.
  localparam int GVU_VRF_RW_V32I64_PORTS = 2;
  localparam int GVU_VRF_RW_V32I32_PORTS = 3;
  localparam int GVU_VRF_RW_V32I16_PORTS = 2;
  localparam int GVU_VRF_RW_V32I8_PORTS  = 2;
  typedef enum logic [1:0] { GVU_FMT_I8=2'd0, GVU_FMT_I16=2'd1, GVU_FMT_I32=2'd2, GVU_FMT_I64=2'd3 } gvu_data_format_t;
  function automatic int unsigned gvu_rows_per_vector(input gvu_data_format_t fmt);
    case (fmt)
      GVU_FMT_I8: gvu_rows_per_vector=1; GVU_FMT_I16: gvu_rows_per_vector=2;
      GVU_FMT_I32: gvu_rows_per_vector=4; GVU_FMT_I64: gvu_rows_per_vector=8;
      default: gvu_rows_per_vector=0;
    endcase
  endfunction
  function automatic int unsigned gvu_vector_bits(input gvu_data_format_t fmt);
    case (fmt)
      GVU_FMT_I8: gvu_vector_bits=V32_I8_BITS; GVU_FMT_I16: gvu_vector_bits=V32_I16_BITS;
      GVU_FMT_I32: gvu_vector_bits=V32_I32_BITS; GVU_FMT_I64: gvu_vector_bits=V32_I64_BITS;
      default: gvu_vector_bits=0;
    endcase
  endfunction
  // Generic logical VRF transaction. It describes one request only; it does
  // not define source-required concurrency or an arbitration policy.
  typedef struct packed {
    logic valid;
    logic write;
    gvu_data_format_t format;
    logic [4:0] base_row;
    logic [V32_MAX_BITS-1:0] write_data;
    logic [V32_MAX_BYTES-1:0] write_mask;
  } gvu_vrf_access_req_t;
  typedef struct packed {
    logic valid;
    logic legal;
    logic [V32_MAX_BITS-1:0] read_data;
  } gvu_vrf_access_rsp_t;
  typedef enum logic [3:0] { GVU_REQUANT=4'd0, GVU_DEQUANT=4'd1, GVU_GEMM_FUSED=4'd2, GVU_SOFTMAX=4'd3, GVU_FUSED_ATTN=4'd4, GVU_LAYERNORM=4'd5, GVU_RESIDUAL=4'd6, GVU_MAXPOOL=4'd7, GVU_AVGPOOL=4'd8, GVU_ELEMWISE=4'd9 } gvu_opcode_t;
  typedef enum logic [2:0] { GVU_ADD=3'd0, GVU_SUB=3'd1, GVU_MUL=3'd2, GVU_SHL=3'd3, GVU_SHR=3'd4, GVU_MAX=3'd5, GVU_MIN=3'd6, GVU_PASS=3'd7 } gvu_alu_op_t;
  typedef enum logic [1:0] { GVU_SHIFT_LEFT=2'd0, GVU_SHIFT_RIGHT_LOGICAL=2'd1, GVU_SHIFT_RIGHT_ARITH=2'd2 } gvu_shift_op_t;
  // PROJECT IMPLEMENTATION CONTRACT: reusable V32I8 pairwise and reduction compare.
  typedef enum logic [1:0] { GVU_COMPARE_PAIR_MIN=2'd0, GVU_COMPARE_PAIR_MAX=2'd1,
                             GVU_COMPARE_REDUCE_MIN=2'd2, GVU_COMPARE_REDUCE_MAX=2'd3 } gvu_compare_op_t;
  // Compatibility names for pre-reduction pairwise consumers.
  localparam gvu_compare_op_t GVU_CMP_MIN=GVU_COMPARE_PAIR_MIN;
  localparam gvu_compare_op_t GVU_CMP_MAX=GVU_COMPARE_PAIR_MAX;
  // PWL transport/coefficients are intentionally not defined here. This enum
  // only reserves an architecture-neutral LUT mode selector.
  typedef enum logic [1:0] { GVU_LUT_DIRECT=2'd0, GVU_LUT_LOG_SCALE=2'd1,
                             GVU_LUT_PWL=2'd2 } gvu_lut_mode_t;
  // PROJECT IMPLEMENTATION CONTRACT: generic V32I64 right-shift rounding.
  typedef enum logic [1:0] { GVU_ROUND_TRUNCATE=2'd0, GVU_ROUND_HALF_AWAY_FROM_ZERO=2'd1,
                             GVU_ROUND_NEAREST_EVEN=2'd2, GVU_ROUND_UNSUPPORTED=2'd3 } gvu_round_mode_t;
  // Legacy temporary name now has unambiguous negative-value semantics.
  localparam gvu_round_mode_t GVU_ROUND_TEMP_HALF_UP=GVU_ROUND_HALF_AWAY_FROM_ZERO;
  // INTERNAL IMPLEMENTATION ARCHITECTURE, not firmware-visible encoding.
  typedef struct packed {
    gvu_data_format_t src_format, dst_format;
    logic signed_arithmetic; logic [6:0] input_fractional_bits, output_fractional_bits;
    logic signed [7:0] effective_shift; gvu_round_mode_t rounding_mode;
    logic saturation_enable; logic [V32_I64_BITS-1:0] clamp_min, clamp_max;
  } gvu_fixed_point_cfg_t;
endpackage
`endif
