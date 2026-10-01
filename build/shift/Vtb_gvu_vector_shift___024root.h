// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gvu_vector_shift.h for the primary calling header

#ifndef VERILATED_VTB_GVU_VECTOR_SHIFT___024ROOT_H_
#define VERILATED_VTB_GVU_VECTOR_SHIFT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gvu_vector_shift__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_vector_shift___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gvu_vector_shift__DOT__rsp_error;
    CData/*5:0*/ tb_gvu_vector_shift__DOT__amount;
    CData/*1:0*/ tb_gvu_vector_shift__DOT__format;
    CData/*1:0*/ tb_gvu_vector_shift__DOT__op;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VlWide<32>/*1023:0*/ tb_gvu_vector_shift__DOT__a;
    VlWide<32>/*1023:0*/ tb_gvu_vector_shift__DOT__y;
    IData/*31:0*/ tb_gvu_vector_shift__DOT__dut__DOT__lane_a;
    IData/*31:0*/ tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_gvu_vector_shift__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_gvu_vector_shift___024root(Vtb_gvu_vector_shift__Syms* symsp, const char* namep);
    ~Vtb_gvu_vector_shift___024root();
    VL_UNCOPYABLE(Vtb_gvu_vector_shift___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
