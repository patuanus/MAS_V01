`timescale 1ns/1ps
module tb_gvu_vrf_logical;
 import gvu_pkg::*;
 logic clk=0,rst_n=0; gvu_vrf_access_req_t req; gvu_vrf_access_rsp_t rsp;
 logic [VRF_ROW_BITS-1:0] ref_rows[0:VRF_ROWS-1];
 integer i,j,check_id;
 gvu_vrf_logical dut(.clk,.rst_n,.req,.rsp);
 always #5 clk=~clk;
 function automatic integer rows_for(input gvu_data_format_t fmt);
  rows_for=gvu_rows_per_vector(fmt);
 endfunction
 function automatic logic [VRF_ROW_BITS-1:0] row_pattern(input logic [4:0] base,input integer row_offset,input logic [7:0] tag);
  integer byte_index;
  begin
   row_pattern='0;
   for(byte_index=0;byte_index<VRF_ROW_BYTES;byte_index=byte_index+1)
    row_pattern[byte_index*8+:8]=tag+base+row_offset+byte_index;
  end
 endfunction
 task automatic write_logical(input gvu_data_format_t fmt,input logic [4:0] base,input logic [7:0] tag);
  integer row_count,row;
  begin
   row_count=rows_for(fmt); req='0;req.valid=1;req.write=1;req.format=fmt;req.base_row=base;
   for(row=0;row<row_count;row=row+1) begin
    req.write_data[row*VRF_ROW_BITS+:VRF_ROW_BITS]=row_pattern(base,row,tag);
    req.write_mask[row*VRF_ROW_BYTES+:VRF_ROW_BYTES]={VRF_ROW_BYTES{1'b1}};
   end
   #1;if(!rsp.valid||!rsp.legal)$fatal(1,"legal write rejected fmt=%0d base=%0d",fmt,base);
   @(posedge clk);for(row=0;row<row_count;row=row+1)ref_rows[base+row]=row_pattern(base,row,tag);
   @(negedge clk);req='0;
  end
 endtask
 task automatic read_check(input gvu_data_format_t fmt,input logic [4:0] base,input string name);
  integer row_count,row; logic [V32_MAX_BITS-1:0] expected;
  begin
   row_count=rows_for(fmt);expected='0;
   for(row=0;row<row_count;row=row+1)expected[row*VRF_ROW_BITS+:VRF_ROW_BITS]=ref_rows[base+row];
   @(negedge clk);req='0;req.valid=1;req.write=0;req.format=fmt;req.base_row=base;#1;
   check_id=check_id+1;
   $display("[VRF][CHECK%0d] %s (fmt=%0d base_row=%0d)",check_id,name,fmt,base);
   $display("[VRF][CHECK%0d] GOLDEN_VALID=%0d GOLDEN_LEGAL=%0d",check_id,1'b1,1'b1);
   $display("[VRF][CHECK%0d] ACTUAL_VALID=%0d ACTUAL_LEGAL=%0d",check_id,rsp.valid,rsp.legal);
   $display("[VRF][CHECK%0d] GOLDEN_RESULT=0x%0h",check_id,expected);
   $display("[VRF][CHECK%0d] ACTUAL_RESULT=0x%0h",check_id,rsp.read_data);
   if(!rsp.valid||!rsp.legal)$fatal(1,"%s legal read rejected",name);
   if(rsp.read_data!==expected)$fatal(1,"%s gather mismatch golden=%h actual=%h",name,expected,rsp.read_data);
   $display("[VRF][CHECK%0d] PASS",check_id);
   @(negedge clk);req='0;
  end
 endtask
 task automatic illegal_check(input gvu_data_format_t fmt,input logic [4:0] base,input logic write_dir);
  begin
   @(negedge clk);req='0;req.valid=1;req.write=write_dir;req.format=fmt;req.base_row=base;#1;
   check_id=check_id+1;
   $display("[VRF][CHECK%0d] illegal %s (fmt=%0d base_row=%0d)",check_id,write_dir ? "write" : "read",fmt,base);
   $display("[VRF][CHECK%0d] GOLDEN_VALID=%0d GOLDEN_LEGAL=%0d",check_id,1'b1,1'b0);
   $display("[VRF][CHECK%0d] ACTUAL_VALID=%0d ACTUAL_LEGAL=%0d",check_id,rsp.valid,rsp.legal);
   $display("[VRF][CHECK%0d] GOLDEN_RESULT=0x%0h",check_id,{V32_MAX_BITS{1'b0}});
   $display("[VRF][CHECK%0d] ACTUAL_RESULT=0x%0h",check_id,rsp.read_data);
   if(!rsp.valid||rsp.legal||rsp.read_data!=='0)$fatal(1,"illegal range behavior mismatch fmt=%0d base=%0d",fmt,base);
   $display("[VRF][CHECK%0d] PASS",check_id);
   @(posedge clk);@(negedge clk);req='0;
  end
 endtask
 initial begin
  req='0;check_id=0;for(i=0;i<VRF_ROWS;i=i+1)ref_rows[i]='0;
  // The logical model explicitly clears all 32 physical rows while rst_n=0.
  repeat(2)@(posedge clk);read_check(GVU_FMT_I64,0,"reset V32I64 zero gather");rst_n=1;
  if(dut.NUM_V32I64_PORTS!=2||dut.NUM_V32I32_PORTS!=3||dut.NUM_V32I16_PORTS!=2||dut.NUM_V32I8_PORTS!=2)$fatal(1,"VRF port-requirement defaults changed");

  // I8: row 0, middle row, and max legal row 31.
  write_logical(GVU_FMT_I8,0,8'h10);read_check(GVU_FMT_I8,0,"I8 row0");
  write_logical(GVU_FMT_I8,16,8'h20);read_check(GVU_FMT_I8,16,"I8 middle");
  write_logical(GVU_FMT_I8,31,8'h30);read_check(GVU_FMT_I8,31,"I8 boundary31");

  // I16 uses two rows.  Both a conventional base and base 7 prove that no
  // alignment rule is imposed by this logical mapping model.
  write_logical(GVU_FMT_I16,4,8'h38);read_check(GVU_FMT_I16,4,"I16 normal");
  write_logical(GVU_FMT_I16,7,8'h40);read_check(GVU_FMT_I16,7,"I16 unaligned legal");
  write_logical(GVU_FMT_I16,30,8'h50);read_check(GVU_FMT_I16,30,"I16 boundary30");
  illegal_check(GVU_FMT_I16,31,0);illegal_check(GVU_FMT_I16,31,1);

  // I32 uses four rows; cross-format reads below inspect its scatter ordering.
  write_logical(GVU_FMT_I32,12,8'h58);read_check(GVU_FMT_I32,12,"I32 normal");
  write_logical(GVU_FMT_I32,13,8'h60);read_check(GVU_FMT_I32,13,"I32 middle unaligned");
  for(i=0;i<4;i=i+1)read_check(GVU_FMT_I8,13+i,$sformatf("I32-to-I8 row%0d",i));
  write_logical(GVU_FMT_I32,28,8'h70);read_check(GVU_FMT_I32,28,"I32 boundary28");
  illegal_check(GVU_FMT_I32,29,0);illegal_check(GVU_FMT_I32,31,1);

  // I64 proves the corrected 2048-bit V32 logical gather/scatter mapping.
  write_logical(GVU_FMT_I64,8,8'h78);read_check(GVU_FMT_I64,8,"I64 normal");
  write_logical(GVU_FMT_I64,9,8'h80);read_check(GVU_FMT_I64,9,"I64 middle unaligned");
  write_logical(GVU_FMT_I64,24,8'h90);read_check(GVU_FMT_I64,24,"I64 boundary24");
  illegal_check(GVU_FMT_I64,25,0);illegal_check(GVU_FMT_I64,31,1);

//  display("PASS:tbgvuvrflogicalcurrentV32mapping/gather/scattercontract");finish;
 end
endmodule
