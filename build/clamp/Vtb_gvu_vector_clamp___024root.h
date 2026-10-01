// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gvu_vector_clamp.h for the primary calling header

#ifndef VERILATED_VTB_GVU_VECTOR_CLAMP___024ROOT_H_
#define VERILATED_VTB_GVU_VECTOR_CLAMP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gvu_vector_clamp__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_vector_clamp___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gvu_vector_clamp__DOT__req_valid;
    CData/*0:0*/ tb_gvu_vector_clamp__DOT__signed_mode;
    CData/*0:0*/ tb_gvu_vector_clamp__DOT__rsp_error;
    CData/*1:0*/ tb_gvu_vector_clamp__DOT__format;
    CData/*1:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f;
    CData/*0:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VlWide<32>/*1023:0*/ tb_gvu_vector_clamp__DOT__a;
    VlWide<32>/*1023:0*/ tb_gvu_vector_clamp__DOT__lo;
    VlWide<32>/*1023:0*/ tb_gvu_vector_clamp__DOT__hi;
    VlWide<32>/*1023:0*/ tb_gvu_vector_clamp__DOT__y;
    VlWide<32>/*1023:0*/ tb_gvu_vector_clamp__DOT__expected;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__lane_a;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__signed_a;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo;
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_gvu_vector_clamp__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_gvu_vector_clamp___024root(Vtb_gvu_vector_clamp__Syms* symsp, const char* namep);
    ~Vtb_gvu_vector_clamp___024root();
    VL_UNCOPYABLE(Vtb_gvu_vector_clamp___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
