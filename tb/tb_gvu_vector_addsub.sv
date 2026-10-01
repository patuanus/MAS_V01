`timescale 1ns/1ps
module tb_gvu_vector_addsub;
 import gvu_pkg::*;
 logic req_valid, add_not_sub, req_ready, rsp_valid, rsp_error;
 gvu_data_format_t format;
 logic [V32_I32_BITS-1:0] a, b, y, expected;
 gvu_vector_addsub dut(.*);

 task automatic run_case(input integer test_id, input gvu_data_format_t f, input logic do_add);
  integer i, w; logic [31:0] av, bv;
  begin
   format=f; add_not_sub=do_add; a='0; b='0; expected='0;
   w=(f==GVU_FMT_I8)?8:(f==GVU_FMT_I16)?16:32;
   for(i=0;i<GVU_LANES;i++) begin
    av = (i==0) ? 32'h00000000 : (i==1) ? 32'h7fffffff :
         (i==2) ? 32'h80000000 : (32'h80010003 + i*32'h01010101);
    bv = (i==0) ? 0 : (i==1) ? 1 : (i==2) ? 32'hffffffff : (i*7+3);
    if(w==8) begin a[i*8+:8]=av[7:0]; b[i*8+:8]=bv[7:0]; expected[i*8+:8]=do_add?av[7:0]+bv[7:0]:av[7:0]-bv[7:0]; end
    else if(w==16) begin a[i*16+:16]=av[15:0]; b[i*16+:16]=bv[15:0]; expected[i*16+:16]=do_add?av[15:0]+bv[15:0]:av[15:0]-bv[15:0]; end
    else begin a[i*32+:32]=av; b[i*32+:32]=bv; expected[i*32+:32]=do_add?av+bv:av-bv; end
   end
   #1;
   $display("[ADD_SUB][TC%0d] format=%0d operation=%s", test_id, f, do_add ? "ADD" : "SUB");
   $display("[ADD_SUB][TC%0d] GOLDEN_RESULT = %h", test_id, expected);
   $display("[ADD_SUB][TC%0d] ACTUAL_RESULT = %h", test_id, y);
   if(!req_ready || !rsp_valid || rsp_error || y!==expected) $fatal(1,"addsub mismatch f=%0d add=%0d",f,do_add);
   $display("[ADD_SUB][TC%0d] PASS", test_id);
  end
 endtask
 initial begin
  req_valid=1;
  run_case(1, GVU_FMT_I8,  1'b1); // add, includes 8-bit wrap cases
  run_case(2, GVU_FMT_I16, 1'b0); // subtract, includes two's-complement data
  run_case(3, GVU_FMT_I32, 1'b1); // add, includes 32-bit wrap boundary
  $display("PASS: tb_gvu_vector_addsub (3 testcases)"); $finish;
 end
endmodule
