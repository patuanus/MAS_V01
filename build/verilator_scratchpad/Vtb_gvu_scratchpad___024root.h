// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gvu_scratchpad.h for the primary calling header

#ifndef VERILATED_VTB_GVU_SCRATCHPAD___024ROOT_H_
#define VERILATED_VTB_GVU_SCRATCHPAD___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gvu_scratchpad__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_scratchpad___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gvu_scratchpad__DOT__clk;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__a_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__b_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__core_buffer_sel;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__dma_buffer_sel;
    CData/*2:0*/ tb_gvu_scratchpad__DOT__a_addr;
    CData/*2:0*/ tb_gvu_scratchpad__DOT__b_addr;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p0_v;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p0_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p1_v;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p1_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p0_err;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__p1_err;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__s0_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__s1_we;
    CData/*7:0*/ tb_gvu_scratchpad__DOT__s1_wdata;
    CData/*7:0*/ tb_gvu_scratchpad__DOT__s1_rdata;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__dma_valid;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__dma_we;
    CData/*0:0*/ tb_gvu_scratchpad__DOT__dma_error;
    CData/*1:0*/ tb_gvu_scratchpad__DOT__dma_bank;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_gvu_scratchpad__DOT__p0_addr;
    SData/*15:0*/ tb_gvu_scratchpad__DOT__p1_addr;
    SData/*15:0*/ tb_gvu_scratchpad__DOT__s0_addr;
    SData/*15:0*/ tb_gvu_scratchpad__DOT__s1_addr;
    SData/*15:0*/ tb_gvu_scratchpad__DOT__dma_addr;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__a_wdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__b_wdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__a_rdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__b_rdata;
    VlWide<32>/*1023:0*/ tb_gvu_scratchpad__DOT__p0_wdata;
    VlWide<32>/*1023:0*/ tb_gvu_scratchpad__DOT__p0_rdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__p1_wdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__p1_rdata;
    IData/*31:0*/ tb_gvu_scratchpad__DOT__s0_wdata;
    IData/*31:0*/ tb_gvu_scratchpad__DOT__s0_rdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__dma_wdata;
    VlWide<8>/*255:0*/ tb_gvu_scratchpad__DOT__dma_rdata;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<VlUnpacked<VlWide<8>/*255:0*/, 8>, 2> tb_gvu_scratchpad__DOT__ref_vb0;
    VlUnpacked<VlUnpacked<VlWide<8>/*255:0*/, 8>, 2> tb_gvu_scratchpad__DOT__ref_vb1;
    VlUnpacked<VlUnpacked<VlWide<8>/*255:0*/, 8>, 2> tb_gvu_scratchpad__DOT__ref_vb2;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 2> tb_gvu_scratchpad__DOT__ref_sb;
    VlUnpacked<VlWide<8>/*255:0*/, 16> tb_gvu_scratchpad__DOT__dut__DOT__vbank0;
    VlUnpacked<VlWide<8>/*255:0*/, 16> tb_gvu_scratchpad__DOT__dut__DOT__vbank1;
    VlUnpacked<VlWide<8>/*255:0*/, 16> tb_gvu_scratchpad__DOT__dut__DOT__vbank2;
    VlUnpacked<IData/*31:0*/, 16> tb_gvu_scratchpad__DOT__dut__DOT__sbank;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__3__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__5__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__8__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__10__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__15__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__17__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__19__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__21__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__25__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__27__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__31__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__39__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect32__42__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect8__43__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect32__44__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect32__45__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__47__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__48__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__49__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__50__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__52__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__53__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__54__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__55__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__57__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__58__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__59__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__60__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__62__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__63__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__64__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__65__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__name;
    std::string __Vtask_tb_gvu_scratchpad__DOT__expect256__69__name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1052bb72__0;
    VlTriggerScheduler __VtrigSched_h1052bab8__0;

    // INTERNAL VARIABLES
    Vtb_gvu_scratchpad__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_gvu_scratchpad___024root(Vtb_gvu_scratchpad__Syms* symsp, const char* namep);
    ~Vtb_gvu_scratchpad___024root();
    VL_UNCOPYABLE(Vtb_gvu_scratchpad___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
