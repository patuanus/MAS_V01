`timescale 1ns/1ps
// Self-checking verification for the currently-defined MAS 4-bank wrapper.
module tb_gvu_scratchpad;
 import gvu_pkg::*;
 localparam int DEPTH=8;
 localparam int ADDR_W=$clog2(DEPTH);
 logic clk=0;
 logic a_we,b_we,core_buffer_sel,dma_buffer_sel;
 logic [ADDR_W-1:0] a_addr,b_addr;
 logic [VRF_ROW_BITS-1:0] a_wdata,b_wdata,a_rdata,b_rdata;
 logic p0_v,p0_we,p1_v,p1_we,p0_err,p1_err;
 logic [15:0] p0_addr,p1_addr;
 logic [V32_I32_BITS-1:0] p0_wdata,p0_rdata;
 logic [VRF_ROW_BITS-1:0] p1_wdata,p1_rdata;
 logic s0_we,s1_we; logic [15:0] s0_addr,s1_addr; logic [31:0] s0_wdata,s0_rdata; logic [7:0] s1_wdata,s1_rdata;
 logic dma_valid,dma_we,dma_error; logic [1:0] dma_bank; logic [15:0] dma_addr; logic [VRF_ROW_BITS-1:0] dma_wdata,dma_rdata;
 logic [VRF_ROW_BITS-1:0] ref_vb0[0:1][0:DEPTH-1],ref_vb1[0:1][0:DEPTH-1],ref_vb2[0:1][0:DEPTH-1];
 logic [31:0] ref_sb[0:1][0:DEPTH-1];
 integer i,j,check_id;
 always #5 clk=~clk;
 gvu_scratchpad #(.WORDS(DEPTH),.VBANK0_WORDS(DEPTH),.VBANK1_WORDS(DEPTH),.VBANK2_WORDS(DEPTH),.SBANK_WORDS(DEPTH)) dut(
  .clk,.a_we,.a_addr,.a_wdata,.a_rdata,.b_we,.b_addr,.b_wdata,.b_rdata,.core_buffer_sel,.dma_buffer_sel,
  .vbank2_p0_valid(p0_v),.vbank2_p0_we(p0_we),.vbank2_p0_addr(p0_addr),.vbank2_p0_wdata(p0_wdata),.vbank2_p0_rdata(p0_rdata),.vbank2_p0_error(p0_err),
  .vbank2_p1_valid(p1_v),.vbank2_p1_we(p1_we),.vbank2_p1_addr(p1_addr),.vbank2_p1_wdata(p1_wdata),.vbank2_p1_rdata(p1_rdata),.vbank2_p1_error(p1_err),
  .sbank_p0_we(s0_we),.sbank_p0_addr(s0_addr),.sbank_p0_wdata(s0_wdata),.sbank_p0_rdata(s0_rdata),.sbank_p1_we(s1_we),.sbank_p1_addr(s1_addr),.sbank_p1_wdata(s1_wdata),.sbank_p1_rdata(s1_rdata),
  .dma_valid,.dma_we,.dma_bank,.dma_addr,.dma_wdata,.dma_rdata,.dma_error);

 task automatic expect256(input logic [255:0] got,input logic [255:0] expected_value,input string name);
  begin
   check_id=check_id+1;
   $display("[SPM][CHECK%0d] %s",check_id,name);
   $display("[SPM][CHECK%0d] GOLDEN_RESULT = %h",check_id,expected_value);
   $display("[SPM][CHECK%0d] ACTUAL_RESULT = %h",check_id,got);
   if(got!==expected_value) $fatal(1,"%s mismatch",name);
   $display("[SPM][CHECK%0d] PASS",check_id);
  end
 endtask
 task automatic expect32(input logic [31:0] got,input logic [31:0] expected_value,input string name);
  begin check_id=check_id+1;$display("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h",check_id,name,expected_value,got);if(got!==expected_value)$fatal(1,"%s mismatch",name);$display("[SPM][CHECK%0d] PASS",check_id);end
 endtask
 task automatic expect8(input logic [7:0] got,input logic [7:0] expected_value,input string name);
  begin check_id=check_id+1;$display("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h",check_id,name,expected_value,got);if(got!==expected_value)$fatal(1,"%s mismatch",name);$display("[SPM][CHECK%0d] PASS",check_id);end
 endtask
 task automatic expect_flag(input logic got,input logic expected_value,input string name);
  begin check_id=check_id+1;$display("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b",check_id,name,expected_value,got);if(got!==expected_value)$fatal(1,"%s mismatch",name);$display("[SPM][CHECK%0d] PASS",check_id);end
 endtask
 task automatic core_vb0_write(input bit buffer_sel,input int addr,input logic [255:0] data);
  @(negedge clk); core_buffer_sel=buffer_sel;a_addr=addr;a_wdata=data;a_we=1; @(posedge clk); ref_vb0[buffer_sel][addr]=data; @(negedge clk);a_we=0;
 endtask
 task automatic core_vb0_read(input bit buffer_sel,input int addr);
  @(negedge clk);core_buffer_sel=buffer_sel;a_addr=addr;a_we=0;@(posedge clk);#1;expect256(a_rdata,ref_vb0[buffer_sel][addr],$sformatf("VBANK0 buffer=%0d addr=%0d",buffer_sel,addr));
 endtask
 task automatic core_vb1_write(input bit buffer_sel,input int addr,input logic [255:0] data);
  @(negedge clk);core_buffer_sel=buffer_sel;b_addr=addr;b_wdata=data;b_we=1;@(posedge clk);ref_vb1[buffer_sel][addr]=data;@(negedge clk);b_we=0;
 endtask
 task automatic core_vb1_read(input bit buffer_sel,input int addr);
  @(negedge clk);core_buffer_sel=buffer_sel;b_addr=addr;b_we=0;@(posedge clk);#1;expect256(b_rdata,ref_vb1[buffer_sel][addr],$sformatf("VBANK1 buffer=%0d addr=%0d",buffer_sel,addr));
 endtask
 task automatic p1_write(input bit buffer_sel,input int addr,input logic [255:0] data);
  @(negedge clk);core_buffer_sel=buffer_sel;p1_addr=addr;p1_wdata=data;p1_we=1;p1_v=1;@(posedge clk);ref_vb2[buffer_sel][addr]=data;@(negedge clk);p1_v=0;p1_we=0;
 endtask
 task automatic p1_read(input bit buffer_sel,input int addr);
  @(negedge clk);core_buffer_sel=buffer_sel;p1_addr=addr;p1_we=0;p1_v=1;@(posedge clk);#1;expect256(p1_rdata,ref_vb2[buffer_sel][addr],$sformatf("VBANK2 P1 buffer=%0d addr=%0d",buffer_sel,addr));@(negedge clk);p1_v=0;
 endtask
 task automatic p0_write(input bit buffer_sel,input int addr,input logic [1023:0] data);
  @(negedge clk);core_buffer_sel=buffer_sel;p0_addr=addr;p0_wdata=data;p0_we=1;p0_v=1;@(posedge clk);for(j=0;j<4;j++)ref_vb2[buffer_sel][addr+j]=data[j*256+:256];@(negedge clk);p0_v=0;p0_we=0;
 endtask
 task automatic p0_read(input bit buffer_sel,input int addr);
  logic [1023:0] expected_data;
  begin
   for(j=0;j<4;j++)expected_data[j*256+:256]=ref_vb2[buffer_sel][addr+j];
   @(negedge clk);core_buffer_sel=buffer_sel;p0_addr=addr;p0_we=0;p0_v=1;@(posedge clk);#1;
   check_id=check_id+1;$display("[SPM][CHECK%0d] VBANK2 P0 gather buffer=%0d base=%0d",check_id,buffer_sel,addr);$display("[SPM][CHECK%0d] GOLDEN_RESULT = %h",check_id,expected_data);$display("[SPM][CHECK%0d] ACTUAL_RESULT = %h",check_id,p0_rdata);
   if(p0_rdata!==expected_data)$fatal(1,"vbank2 P0 gather mismatch");$display("[SPM][CHECK%0d] PASS",check_id);
   @(negedge clk);p0_v=0;
  end
 endtask
 task automatic dma_write_read(input bit core_buf,input bit dma_buf,input logic [1:0] bank,input int addr,input logic [255:0] data);
  begin
   @(negedge clk);core_buffer_sel=core_buf;dma_buffer_sel=dma_buf;dma_bank=bank;dma_addr=addr;dma_wdata=data;dma_we=1;dma_valid=1;#1;
   if(dma_error)$fatal(1,"valid core/DMA ping-pong ownership rejected");
   @(posedge clk);
   case(bank) 0:ref_vb0[dma_buf][addr]=data;1:ref_vb1[dma_buf][addr]=data;2:ref_vb2[dma_buf][addr]=data;default:ref_sb[dma_buf][addr]=data[31:0];endcase
   @(negedge clk);dma_we=0;dma_valid=1;@(posedge clk);#1;
   case(bank) 0:expect256(dma_rdata,ref_vb0[dma_buf][addr],$sformatf("DMA VBANK0 buf=%0d addr=%0d",dma_buf,addr));1:expect256(dma_rdata,ref_vb1[dma_buf][addr],$sformatf("DMA VBANK1 buf=%0d addr=%0d",dma_buf,addr));2:expect256(dma_rdata,ref_vb2[dma_buf][addr],$sformatf("DMA VBANK2 buf=%0d addr=%0d",dma_buf,addr));default:expect256(dma_rdata,{{224{1'b0}},ref_sb[dma_buf][addr]},$sformatf("DMA SBANK buf=%0d addr=%0d",dma_buf,addr));endcase
   @(negedge clk);dma_valid=0;
  end
 endtask
 initial begin
  check_id=0;a_we=0;b_we=0;core_buffer_sel=0;dma_buffer_sel=1;p0_v=0;p0_we=0;p1_v=0;p1_we=0;s0_we=0;s1_we=0;dma_valid=0;dma_we=0;a_addr=0;b_addr=0;p0_addr=0;p1_addr=0;s0_addr=0;s1_addr=0;dma_addr=0;a_wdata='0;b_wdata='0;p0_wdata='0;p1_wdata='0;s0_wdata='0;s1_wdata='0;dma_wdata='0;dma_bank=0;
  for(i=0;i<2;i++)for(j=0;j<DEPTH;j++)begin ref_vb0[i][j]='0;ref_vb1[i][j]='0;ref_vb2[i][j]='0;ref_sb[i][j]='0;end

  // vbank0/vbank1: data, address and ping-pong isolation; address 0 and DEPTH-1 included.
  core_vb0_write(0,0,256'h000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f);
  core_vb0_write(0,DEPTH-1,256'hA0); core_vb0_read(0,0);core_vb0_read(0,DEPTH-1);
  core_vb0_write(1,0,256'hB0);core_vb0_read(0,0);core_vb0_read(1,0);
  core_vb1_write(0,0,256'hC1);core_vb1_write(0,DEPTH-1,256'hD1);core_vb1_write(1,0,256'hE1);core_vb1_read(0,0);core_vb1_read(0,DEPTH-1);core_vb1_read(1,0);core_vb0_read(0,0);

  // vbank2 P1, then P0 scatter/gather. P1 confirms physical row ordering.
  p1_write(0,0,256'h1122);p1_write(1,0,256'h3344);p1_read(0,0);p1_read(1,0);
  for(i=0;i<GVU_LANES;i++)p0_wdata[i*32+:32]=i*32'h11111111;
  p0_write(0,2,p0_wdata);p0_read(0,2);for(i=0;i<4;i++)p1_read(0,2+i);
  p0_wdata=~p0_wdata;p0_write(1,2,p0_wdata);p0_read(1,2);p0_read(0,2);

  // Defined P0/P1 conflict: errors asserted and no reference-memory update.
  @(negedge clk);core_buffer_sel=0;p0_addr=2;p0_we=1;p0_v=1;p1_addr=2;p1_we=1;p1_v=1;p1_wdata=256'hDEAD;#1;
  expect_flag(p0_err,1'b1,"VBANK2 simultaneous P0 error");expect_flag(p1_err,1'b1,"VBANK2 simultaneous P1 error");
  @(posedge clk);@(negedge clk);p0_v=0;p1_v=0;p0_we=0;p1_we=0;p0_read(0,2);p1_read(0,2);
  // Defined vbank2/DMA range errors use the instantiated DEPTH, not a magic capacity.
  @(negedge clk);p1_addr=DEPTH;p1_v=1;p1_we=0;#1;expect_flag(p1_err,1'b1,"VBANK2 P1 out-of-range error");p1_v=0;
  p0_addr=DEPTH-3;p0_v=1;p0_we=0;#1;expect_flag(p0_err,1'b1,"VBANK2 P0 out-of-range error");p0_v=0;

  // sbank: P0 INT32 and P1 INT8 share the current wrapper's low byte only.
  @(negedge clk);core_buffer_sel=0;s0_addr=0;s0_wdata=32'h12345678;s0_we=1;@(posedge clk);ref_sb[0][0]=32'h12345678;@(negedge clk);s0_we=0;s0_addr=0;@(posedge clk);#1;expect32(s0_rdata,ref_sb[0][0],"SBANK P0 buf0 addr0");
  @(negedge clk);s1_addr=0;s1_wdata=8'hEF;s1_we=1;@(posedge clk);ref_sb[0][0][7:0]=8'hEF;@(negedge clk);s1_we=0;s1_addr=0;@(posedge clk);#1;expect8(s1_rdata,8'hEF,"SBANK P1 low-byte");expect32(s0_rdata,ref_sb[0][0],"SBANK P0 after P1 alias");
  @(negedge clk);core_buffer_sel=1;s0_addr=DEPTH-1;s0_wdata=32'h89ABCDEF;s0_we=1;@(posedge clk);ref_sb[1][DEPTH-1]=32'h89ABCDEF;@(negedge clk);s0_we=0;@(posedge clk);#1;expect32(s0_rdata,ref_sb[1][DEPTH-1],"SBANK P0 buf1 boundary");

  // DMA accesses its opposite buffer; test both ownership directions and banks.
  dma_write_read(0,1,0,1,256'hD0);dma_write_read(1,0,1,1,256'hD1);dma_write_read(0,1,2,1,256'hD2);dma_write_read(1,0,3,1,256'h00000000_00000000_00000000_00000000_00000000_00000000_00000000_CAFEBABE);
  @(negedge clk);core_buffer_sel=0;dma_buffer_sel=1;dma_valid=1;dma_we=0;dma_bank=0;dma_addr=DEPTH;#1;expect_flag(dma_error,1'b1,"DMA out-of-range error");dma_valid=0;
  // Same selected buffer is explicitly rejected and must not update storage.
  @(negedge clk);core_buffer_sel=0;dma_buffer_sel=0;dma_valid=1;dma_we=1;dma_bank=0;dma_addr=0;dma_wdata=256'hBAD;#1;expect_flag(dma_error,1'b1,"DMA/core same-buffer error");@(posedge clk);@(negedge clk);dma_valid=0;core_vb0_read(0,0);
  $display("PASS: tb_gvu_scratchpad -- current 4-bank/ping-pong wrapper contract");$finish;
 end
endmodule


