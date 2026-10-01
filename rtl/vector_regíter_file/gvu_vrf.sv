`timescale 1ns/1ps
// Physical storage only: 32 rows x 256 bits = 1 KiB. This is not the final
// source-specified multi-port/arbitrated VRF; all addresses are physical rows.
module gvu_vrf_physical (
 input logic clk, rst_n, input logic [4:0] p_ra0, p_ra1, p_ra2,
 output logic [gvu_pkg::VRF_ROW_BITS-1:0] p_rd0, p_rd1, p_rd2,
 input logic p_we, input logic [4:0] p_wa, input logic [gvu_pkg::VRF_ROW_BITS-1:0] p_wd,
 input logic [gvu_pkg::VRF_ROW_BYTES-1:0] p_byte_we
);
 import gvu_pkg::*;
 logic [VRF_ROW_BITS-1:0] mem [0:VRF_ROWS-1]; integer i;
 always_comb begin p_rd0=mem[p_ra0]; p_rd1=mem[p_ra1]; p_rd2=mem[p_ra2]; end
 always_ff @(posedge clk) begin
  if (!rst_n) for(i=0;i<VRF_ROWS;i=i+1) mem[i]<='0;
  else if(p_we) for(i=0;i<VRF_ROW_BYTES;i=i+1) if(p_byte_we[i]) mem[p_wa][i*8 +: 8]<=p_wd[i*8 +: 8];
 end
endmodule

// Logical V32 mapping model: one logical read and one logical write. Final
// concurrent-port architecture and arbitration policy are SPEC TBD.
module gvu_vrf_logical #(
 parameter int NUM_V32I64_PORTS=gvu_pkg::GVU_VRF_RW_V32I64_PORTS,
 parameter int NUM_V32I32_PORTS=gvu_pkg::GVU_VRF_RW_V32I32_PORTS,
 parameter int NUM_V32I16_PORTS=gvu_pkg::GVU_VRF_RW_V32I16_PORTS,
 parameter int NUM_V32I8_PORTS=gvu_pkg::GVU_VRF_RW_V32I8_PORTS
) (
 input logic clk, rst_n, input gvu_pkg::gvu_vrf_access_req_t req,
 output gvu_pkg::gvu_vrf_access_rsp_t rsp
);
 import gvu_pkg::*;
 logic [VRF_ROW_BITS-1:0] mem [0:VRF_ROWS-1]; integer i,j;
 always_comb begin
  rsp.valid=req.valid;
  rsp.legal=(req.base_row+gvu_rows_per_vector(req.format)<=VRF_ROWS);
  rsp.read_data='0;
  if(req.valid && !req.write && rsp.legal) for(i=0;i<V32_MAX_ROWS;i=i+1) if(i<gvu_rows_per_vector(req.format)) rsp.read_data[i*VRF_ROW_BITS +: VRF_ROW_BITS]=mem[req.base_row+i];
 end
 always_ff @(posedge clk) begin
  if(!rst_n) for(i=0;i<VRF_ROWS;i=i+1) mem[i]<='0;
  else if(req.valid && req.write && rsp.legal) for(i=0;i<V32_MAX_ROWS;i=i+1) if(i<gvu_rows_per_vector(req.format)) for(j=0;j<VRF_ROW_BYTES;j=j+1) if(req.write_mask[i*VRF_ROW_BYTES+j]) mem[req.base_row+i][j*8 +: 8]<=req.write_data[i*VRF_ROW_BITS+j*8 +: 8];
 end
endmodule
