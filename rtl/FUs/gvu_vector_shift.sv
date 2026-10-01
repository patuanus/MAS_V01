`timescale 1ns/1ps
// L=0 behavioral primitive.  All shifts are independently applied to 32 lanes.
module gvu_vector_shift(
 input logic req_valid, input gvu_pkg::gvu_data_format_t format,
 input gvu_pkg::gvu_shift_op_t op, input logic [5:0] amount,
 input logic [gvu_pkg::V32_I32_BITS-1:0] a,
 output logic req_ready, rsp_valid, rsp_error,
 output logic [gvu_pkg::V32_I32_BITS-1:0] y
);
 import gvu_pkg::*;
 integer i;
 integer width_bits;
 logic [31:0] lane_a;
 logic signed [31:0] signed_lane_a;

 always_comb begin
  req_ready = 1'b1;
  rsp_valid = req_valid;
  rsp_error = (format == GVU_FMT_I64);
  y = '0;
  width_bits = (format == GVU_FMT_I8) ? 8 :
               (format == GVU_FMT_I16) ? 16 : 32;
  for (i = 0; i < GVU_LANES; i = i + 1) begin
   if (!rsp_error) begin
    lane_a = a >> (i * width_bits);
    signed_lane_a = $signed(lane_a << (32 - width_bits)) >>> (32 - width_bits);
    if (width_bits == 8) begin
     case (op)
      GVU_SHIFT_LEFT:          y[i*8 +: 8] = lane_a[7:0] << amount;
      GVU_SHIFT_RIGHT_LOGICAL: y[i*8 +: 8] = lane_a[7:0] >> amount;
      default:                 y[i*8 +: 8] = signed_lane_a >>> amount;
     endcase
    end else if (width_bits == 16) begin
     case (op)
      GVU_SHIFT_LEFT:          y[i*16 +: 16] = lane_a[15:0] << amount;
      GVU_SHIFT_RIGHT_LOGICAL: y[i*16 +: 16] = lane_a[15:0] >> amount;
      default:                 y[i*16 +: 16] = signed_lane_a >>> amount;
     endcase
    end else begin
     case (op)
      GVU_SHIFT_LEFT:          y[i*32 +: 32] = lane_a << amount;
      GVU_SHIFT_RIGHT_LOGICAL: y[i*32 +: 32] = lane_a >> amount;
      default:                 y[i*32 +: 32] = signed_lane_a >>> amount;
     endcase
    end
   end
  end
 end
endmodule
