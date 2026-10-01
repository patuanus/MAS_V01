`timescale 1ns/1ps
// L=0 generic clamp primitive. Bounds are per logical lane and not Q-format-specific.
// 
module gvu_vector_clamp(
 input logic req_valid, signed_mode, input gvu_pkg::gvu_data_format_t format,
 input logic [gvu_pkg::V32_I32_BITS-1:0] a, lo, hi,
 output logic req_ready, rsp_valid, rsp_error,
 output logic [gvu_pkg::V32_I32_BITS-1:0] y
);
 import gvu_pkg::*;
 integer i;
 // using width bit to identify operand bit width (8,16,32) based on format signal 
 // using rsp_error to protect if system require i64 format which unavailable
 integer width_bits; 
 logic [31:0] lane_a, lane_lo, lane_hi;
 logic signed [31:0] signed_a, signed_lo, signed_hi;

 always_comb begin
  req_ready = 1'b1;
  rsp_valid = req_valid;
  rsp_error = (format == GVU_FMT_I64);
  y = '0;
  width_bits = (format == GVU_FMT_I8) ? 8 :
               (format == GVU_FMT_I16) ? 16 : 32;
  // process parallel vector (simd processing): scan all the number of lanes (GVU_LANE). at each lanes
  // data will be extracted and by pass through mux hieraarchy system. mux will check result of comparotr
  // for deciding output sign is lo, hi, or get fixed lane_a
  for (i = 0; i < GVU_LANES; i = i + 1) begin
   if (!rsp_error) begin
    lane_a = a >> (i * width_bits);
    lane_lo = lo >> (i * width_bits);
    lane_hi = hi >> (i * width_bits);
    // ($signed(x << N) >>> N) (shift right collaspe with shift left) is sign extension technique 
    // usign this for logic reuse and create 32bit sign-operand for comparator unit.
    signed_a  = $signed(lane_a  << (32 - width_bits)) >>> (32 - width_bits);
    signed_lo = $signed(lane_lo << (32 - width_bits)) >>> (32 - width_bits);
    signed_hi = $signed(lane_hi << (32 - width_bits)) >>> (32 - width_bits);
    if (width_bits == 8)
      y[i*8 +: 8] = (signed_mode ? signed_a < signed_lo : lane_a[7:0] < lane_lo[7:0]) ? lane_lo[7:0] :
                    (signed_mode ? signed_a > signed_hi : lane_a[7:0] > lane_hi[7:0]) ? lane_hi[7:0] : lane_a[7:0];
    else if (width_bits == 16)
      y[i*16 +: 16] = (signed_mode ? signed_a < signed_lo : lane_a[15:0] < lane_lo[15:0]) ? lane_lo[15:0] :
                      (signed_mode ? signed_a > signed_hi : lane_a[15:0] > lane_hi[15:0]) ? lane_hi[15:0] : lane_a[15:0];
    else
      y[i*32 +: 32] = (signed_mode ? signed_a < signed_lo : lane_a < lane_lo) ? lane_lo :
                      (signed_mode ? signed_a > signed_hi : lane_a > lane_hi) ? lane_hi : lane_a;
   end
  end
 end
endmodule
