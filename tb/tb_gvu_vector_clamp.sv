`timescale 1ns/1ps
module tb_gvu_vector_clamp;
 import gvu_pkg::*;
 logic req_valid,signed_mode,req_ready,rsp_valid,rsp_error; gvu_data_format_t format;
 logic [V32_I32_BITS-1:0] a,lo,hi,y,expected;
 gvu_vector_clamp dut(.*);
 task automatic run_case(input integer test_id,input gvu_data_format_t f,input logic is_signed);
  integer i,w; logic [31:0] v,l,h; logic signed [31:0] sv,sl,sh;
  begin
   format=f;signed_mode=is_signed;a='0;lo='0;hi='0;expected='0;w=(f==GVU_FMT_I8)?8:(f==GVU_FMT_I16)?16:32;
   for(i=0;i<GVU_LANES;i++) begin
    l=is_signed ? -10 : 10; h=is_signed ? 10 : 100;
    v=(i%5==0)?l-1:(i%5==1)?l:(i%5==2)?0:(i%5==3)?h:h+1;
    sv=$signed(v<<(32-w)) >>> (32-w);sl=$signed(l<<(32-w)) >>> (32-w);sh=$signed(h<<(32-w)) >>> (32-w);
    if(w==8) begin a[i*8+:8]=v[7:0];lo[i*8+:8]=l[7:0];hi[i*8+:8]=h[7:0];expected[i*8+:8]=(is_signed?(sv<sl):(v[7:0]<l[7:0]))?l[7:0]:(is_signed?(sv>sh):(v[7:0]>h[7:0]))?h[7:0]:v[7:0];end
    else if(w==16) begin a[i*16+:16]=v[15:0];lo[i*16+:16]=l[15:0];hi[i*16+:16]=h[15:0];expected[i*16+:16]=(is_signed?(sv<sl):(v[15:0]<l[15:0]))?l[15:0]:(is_signed?(sv>sh):(v[15:0]>h[15:0]))?h[15:0]:v[15:0];end
    else begin a[i*32+:32]=v;lo[i*32+:32]=l;hi[i*32+:32]=h;expected[i*32+:32]=(is_signed?(sv<sl):(v<l))?l:(is_signed?(sv>sh):(v>h))?h:v;end
   end
   #1;
   $display("[CLAMP][TC%0d] format=%0d signed_mode=%0d",test_id,f,is_signed);
   $display("[CLAMP][TC%0d] GOLDEN_RESULT = %h",test_id,expected);
   $display("[CLAMP][TC%0d] ACTUAL_RESULT = %h",test_id,y);
   if(!req_ready||!rsp_valid||rsp_error||y!==expected)$fatal(1,"clamp mismatch f=%0d signed=%0d",f,is_signed);
   $display("[CLAMP][TC%0d] PASS",test_id);
  end
 endtask
 initial begin
  req_valid=1;
  run_case(1,GVU_FMT_I8, 1'b1); // signed, negative min/max limits
  run_case(2,GVU_FMT_I16,1'b0); // unsigned, positive min/max limits
  run_case(3,GVU_FMT_I32,1'b1); // signed, all five below/edge/inside/edge/above cases
  $display("PASS: tb_gvu_vector_clamp (3 testcases)");$finish;
 end
endmodule
