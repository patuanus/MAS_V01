`timescale 1ns/1ps
module tb_gvu_vector_shift;
 import gvu_pkg::*;
 logic req_valid, req_ready, rsp_valid, rsp_error; logic [5:0] amount;
 gvu_data_format_t format; gvu_shift_op_t op;
 logic [V32_I32_BITS-1:0] a,y,expected;
 gvu_vector_shift dut(.*);
 task automatic run_case(input integer test_id,input gvu_data_format_t f,input gvu_shift_op_t operation,input logic [5:0] sh);
  integer i,w; logic [31:0] v; logic signed [31:0] sv;
  begin
   format=f;op=operation;amount=sh;a='0;expected='0;w=(f==GVU_FMT_I8)?8:(f==GVU_FMT_I16)?16:32;
   for(i=0;i<GVU_LANES;i++) begin
    v=(i==0)?0:(i==1)?1:(i==2)?32'h80000000:(i==3)?32'hffffffff:(32'h12340000+i);
    sv=$signed(v<<(32-w)) >>> (32-w);
    if(w==8) begin a[i*8+:8]=v[7:0]; case(operation) GVU_SHIFT_LEFT: expected[i*8+:8]=v[7:0]<<sh; GVU_SHIFT_RIGHT_LOGICAL: expected[i*8+:8]=v[7:0]>>sh; default: expected[i*8+:8]=sv>>>sh; endcase end
    else if(w==16) begin a[i*16+:16]=v[15:0]; case(operation) GVU_SHIFT_LEFT: expected[i*16+:16]=v[15:0]<<sh; GVU_SHIFT_RIGHT_LOGICAL: expected[i*16+:16]=v[15:0]>>sh; default: expected[i*16+:16]=sv>>>sh; endcase end
    else begin a[i*32+:32]=v; case(operation) GVU_SHIFT_LEFT: expected[i*32+:32]=v<<sh; GVU_SHIFT_RIGHT_LOGICAL: expected[i*32+:32]=v>>sh; default: expected[i*32+:32]=sv>>>sh; endcase end
   end
   #1;
   $display("[SHIFT][TC%0d] format=%0d op=%0d amount=%0d",test_id,f,operation,sh);
   $display("[SHIFT][TC%0d] GOLDEN_RESULT = %h",test_id,expected);
   $display("[SHIFT][TC%0d] ACTUAL_RESULT = %h",test_id,y);
   if(!req_ready||!rsp_valid||rsp_error||y!==expected)$fatal(1,"shift mismatch f=%0d op=%0d sh=%0d",f,operation,sh);
   $display("[SHIFT][TC%0d] PASS",test_id);
  end
 endtask
 initial begin
  req_valid=1;
  run_case(1,GVU_FMT_I8, GVU_SHIFT_LEFT,          6'd1);
  run_case(2,GVU_FMT_I16,GVU_SHIFT_RIGHT_LOGICAL, 6'd5);
  run_case(3,GVU_FMT_I32,GVU_SHIFT_RIGHT_ARITH,   6'd31);
  $display("PASS: tb_gvu_vector_shift (3 testcases)");$finish;
 end
endmodule
