`timescale 1ns/1ps
// L=0 behavioral primitive.  Each format describes 32 logical V32 lanes;
// result bits above the selected format's V32 width are zero.
module gvu_vector_addsub(
 input logic req_valid, input logic add_not_sub,
 input gvu_pkg::gvu_data_format_t format,
 input logic [gvu_pkg::V32_I32_BITS-1:0] a, b,
 output logic req_ready, rsp_valid, rsp_error,
 output logic [gvu_pkg::V32_I32_BITS-1:0] y
);
 import gvu_pkg::*;
 integer i;
 integer width_bits;
 logic [31:0] lane_a, lane_b;

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
    lane_b = b >> (i * width_bits);
    if (width_bits == 8)
      y[i*8 +: 8] = add_not_sub ? lane_a[7:0] + lane_b[7:0]
                                  : lane_a[7:0] - lane_b[7:0];
    else if (width_bits == 16)
      y[i*16 +: 16] = add_not_sub ? lane_a[15:0] + lane_b[15:0]
                                    : lane_a[15:0] - lane_b[15:0];
    else
      y[i*32 +: 32] = add_not_sub ? lane_a + lane_b : lane_a - lane_b;
   end
  end
 end
endmodule
