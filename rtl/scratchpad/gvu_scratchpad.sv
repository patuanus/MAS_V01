`timescale 1ns/1ps
// MAS 2026-09-17 Scratchpad wrapper. Each bank has two parameterized
// ping-pong buffers. Depth is a capacity placeholder, not a SW-tiling choice.
module gvu_scratchpad #(
 parameter int VECTOR_BITS=256, parameter int WORDS=1024,
 parameter int VBANK0_WORDS=WORDS, parameter int VBANK1_WORDS=WORDS,
 parameter int VBANK2_WORDS=WORDS, parameter int SBANK_WORDS=WORDS
) (
 input logic clk,
 // Legacy core access retained for top compatibility: a=vbank0, b=vbank1.
 input logic a_we, input logic [$clog2(WORDS)-1:0] a_addr, input logic [VECTOR_BITS-1:0] a_wdata, output logic [VECTOR_BITS-1:0] a_rdata,
 input logic b_we, input logic [$clog2(WORDS)-1:0] b_addr, input logic [VECTOR_BITS-1:0] b_wdata, output logic [VECTOR_BITS-1:0] b_rdata,
 input logic core_buffer_sel, dma_buffer_sel,
 // vbank2: one physical V32I8-row bank, logical P0=V32I32 and P1=V32I8.
 input logic vbank2_p0_valid, vbank2_p0_we, input logic [15:0] vbank2_p0_addr, input logic [gvu_pkg::V32_I32_BITS-1:0] vbank2_p0_wdata, output logic [gvu_pkg::V32_I32_BITS-1:0] vbank2_p0_rdata, output logic vbank2_p0_error,
 input logic vbank2_p1_valid, vbank2_p1_we, input logic [15:0] vbank2_p1_addr, input logic [gvu_pkg::VRF_ROW_BITS-1:0] vbank2_p1_wdata, output logic [gvu_pkg::VRF_ROW_BITS-1:0] vbank2_p1_rdata, output logic vbank2_p1_error,
 // sbank has its MAS-defined INT32 and INT8 logical ports.
 input logic sbank_p0_we, input logic [15:0] sbank_p0_addr, input logic [31:0] sbank_p0_wdata, output logic [31:0] sbank_p0_rdata,
 input logic sbank_p1_we, input logic [15:0] sbank_p1_addr, input logic [7:0] sbank_p1_wdata, output logic [7:0] sbank_p1_rdata,
 // DMA uses a physical vector-row transport; bank 3 uses sbank low 32 bits.
 input logic dma_valid, dma_we, input logic [1:0] dma_bank, input logic [15:0] dma_addr, input logic [gvu_pkg::VRF_ROW_BITS-1:0] dma_wdata, output logic [gvu_pkg::VRF_ROW_BITS-1:0] dma_rdata, output logic dma_error
);
 import gvu_pkg::*;
 logic [VRF_ROW_BITS-1:0] vbank0 [0:2*VBANK0_WORDS-1];
 logic [VRF_ROW_BITS-1:0] vbank1 [0:2*VBANK1_WORDS-1];
 logic [VRF_ROW_BITS-1:0] vbank2 [0:2*VBANK2_WORDS-1];
 logic [31:0] sbank [0:2*SBANK_WORDS-1];
 integer row;
 always_comb begin
  // No final arbitration policy is chosen: concurrent core P0/P1 is rejected.
  vbank2_p0_error=vbank2_p0_valid && (vbank2_p1_valid || (vbank2_p0_addr+3>=VBANK2_WORDS));
  vbank2_p1_error=vbank2_p1_valid && (vbank2_p0_valid || (vbank2_p1_addr>=VBANK2_WORDS));
  // Core and DMA must own opposite ping-pong buffers during active DMA.
  dma_error=dma_valid && ((dma_buffer_sel==core_buffer_sel) || ((dma_bank==0)&&(dma_addr>=VBANK0_WORDS)) || ((dma_bank==1)&&(dma_addr>=VBANK1_WORDS)) || ((dma_bank==2)&&(dma_addr>=VBANK2_WORDS)) || ((dma_bank==3)&&(dma_addr>=SBANK_WORDS)));
 end
 always_ff @(posedge clk) begin
  if(a_we) vbank0[(core_buffer_sel?VBANK0_WORDS:0)+a_addr]<=a_wdata;
  if(b_we) vbank1[(core_buffer_sel?VBANK1_WORDS:0)+b_addr]<=b_wdata;
  a_rdata<=vbank0[(core_buffer_sel?VBANK0_WORDS:0)+a_addr];
  b_rdata<=vbank1[(core_buffer_sel?VBANK1_WORDS:0)+b_addr];
  if(vbank2_p0_valid && !vbank2_p0_error) for(row=0;row<4;row=row+1) begin
   if(vbank2_p0_we) vbank2[(core_buffer_sel?VBANK2_WORDS:0)+vbank2_p0_addr+row]<=vbank2_p0_wdata[row*VRF_ROW_BITS+:VRF_ROW_BITS];
   vbank2_p0_rdata[row*VRF_ROW_BITS+:VRF_ROW_BITS]<=vbank2[(core_buffer_sel?VBANK2_WORDS:0)+vbank2_p0_addr+row];
  end
  if(vbank2_p1_valid && !vbank2_p1_error) begin
   if(vbank2_p1_we) vbank2[(core_buffer_sel?VBANK2_WORDS:0)+vbank2_p1_addr]<=vbank2_p1_wdata;
   vbank2_p1_rdata<=vbank2[(core_buffer_sel?VBANK2_WORDS:0)+vbank2_p1_addr];
  end
  if(sbank_p0_we && sbank_p0_addr<SBANK_WORDS) sbank[(core_buffer_sel?SBANK_WORDS:0)+sbank_p0_addr]<=sbank_p0_wdata;
  if(sbank_p1_we && sbank_p1_addr<SBANK_WORDS) sbank[(core_buffer_sel?SBANK_WORDS:0)+sbank_p1_addr][7:0]<=sbank_p1_wdata;
  if(sbank_p0_addr<SBANK_WORDS) sbank_p0_rdata<=sbank[(core_buffer_sel?SBANK_WORDS:0)+sbank_p0_addr];
  if(sbank_p1_addr<SBANK_WORDS) sbank_p1_rdata<=sbank[(core_buffer_sel?SBANK_WORDS:0)+sbank_p1_addr][7:0];
  if(dma_valid && !dma_error) case(dma_bank)
   0: begin if(dma_we)vbank0[(dma_buffer_sel?VBANK0_WORDS:0)+dma_addr]<=dma_wdata; dma_rdata<=vbank0[(dma_buffer_sel?VBANK0_WORDS:0)+dma_addr]; end
   1: begin if(dma_we)vbank1[(dma_buffer_sel?VBANK1_WORDS:0)+dma_addr]<=dma_wdata; dma_rdata<=vbank1[(dma_buffer_sel?VBANK1_WORDS:0)+dma_addr]; end
   2: begin if(dma_we)vbank2[(dma_buffer_sel?VBANK2_WORDS:0)+dma_addr]<=dma_wdata; dma_rdata<=vbank2[(dma_buffer_sel?VBANK2_WORDS:0)+dma_addr]; end
   default: begin if(dma_we)sbank[(dma_buffer_sel?SBANK_WORDS:0)+dma_addr]<=dma_wdata[31:0]; dma_rdata<={{(VRF_ROW_BITS-32){1'b0}},sbank[(dma_buffer_sel?SBANK_WORDS:0)+dma_addr]}; end
  endcase
 end
endmodule
