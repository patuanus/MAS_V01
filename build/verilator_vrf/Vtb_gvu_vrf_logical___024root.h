// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gvu_vrf_logical.h for the primary calling header

#ifndef VERILATED_VTB_GVU_VRF_LOGICAL___024ROOT_H_
#define VERILATED_VTB_GVU_VRF_LOGICAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gvu_vrf_logical__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_vrf_logical___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gvu_vrf_logical__DOT__clk;
    CData/*0:0*/ tb_gvu_vrf_logical__DOT__rst_n;
    CData/*1:0*/ __Vfunc_gvu_rows_per_vector__109__fmt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gvu_vrf_logical__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_gvu_vrf_logical__DOT__dut__DOT____VlemCall_2__gvu_rows_per_vector;
    IData/*31:0*/ tb_gvu_vrf_logical__DOT__dut__DOT____VlemCall_1__gvu_rows_per_vector;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<73>/*2312:0*/ tb_gvu_vrf_logical__DOT__req;
    VlWide<65>/*2049:0*/ tb_gvu_vrf_logical__DOT__rsp;
    VlUnpacked<VlWide<8>/*255:0*/, 32> tb_gvu_vrf_logical__DOT__ref_rows;
    VlUnpacked<VlWide<8>/*255:0*/, 32> tb_gvu_vrf_logical__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__0__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__8__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__16__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__24__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__32__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__40__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__48__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__58__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__66__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__69__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__77__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__87__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__95__name;
    std::string __Vtask_tb_gvu_vrf_logical__DOT__read_check__103__name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h40d25f37__0;
    VlTriggerScheduler __VtrigSched_h40d25fdb__0;

    // INTERNAL VARIABLES
    Vtb_gvu_vrf_logical__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_gvu_vrf_logical___024root(Vtb_gvu_vrf_logical__Syms* symsp, const char* namep);
    ~Vtb_gvu_vrf_logical___024root();
    VL_UNCOPYABLE(Vtb_gvu_vrf_logical___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
