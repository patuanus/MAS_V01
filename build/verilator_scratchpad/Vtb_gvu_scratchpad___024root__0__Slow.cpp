// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_scratchpad.h for the primary calling header

#include "Vtb_gvu_scratchpad__pch.h"

void Vtb_gvu_scratchpad___024root___timing_ready(Vtb_gvu_scratchpad___024root* vlSelf);

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_static(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_static\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gvu_scratchpad__DOT__clk = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0 = 0U;
    Vtb_gvu_scratchpad___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_static__TOP(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_static__TOP\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gvu_scratchpad__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_final(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_final\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_gvu_scratchpad___024root___eval_phase__stl(Vtb_gvu_scratchpad___024root* vlSelf);

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_settle(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_settle\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gvu_scratchpad___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_gvu_scratchpad.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_gvu_scratchpad___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_triggers_vec__stl(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_triggers_vec__stl\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_gvu_scratchpad___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_gvu_scratchpad___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_gvu_scratchpad___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___eval_stl(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_stl\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_err = 
            ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_v) 
             & ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_v) 
                | (8U <= ((IData)(3U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))));
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_err = 
            ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_v) 
             & ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_v) 
                | (8U <= (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr))));
        vlSelfRef.tb_gvu_scratchpad__DOT__dma_error 
            = ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid) 
               & (((8U <= (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)) 
                   & ((0U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                      | ((1U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                         | ((2U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                            | (3U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)))))) 
                  | ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel) 
                     == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel))));
    }
}

VL_ATTR_COLD bool Vtb_gvu_scratchpad___024root___eval_phase__stl(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_phase__stl\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_gvu_scratchpad___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gvu_scratchpad___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_gvu_scratchpad___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_gvu_scratchpad___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_gvu_scratchpad___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_gvu_scratchpad___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_gvu_scratchpad.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_gvu_scratchpad.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___ctor_var_reset(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___ctor_var_reset\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_gvu_scratchpad__DOT__a_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14324062125916275063ull);
    vlSelf->tb_gvu_scratchpad__DOT__b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10444947404797371061ull);
    vlSelf->tb_gvu_scratchpad__DOT__core_buffer_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13848533910674780063ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_buffer_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18077102790335211128ull);
    vlSelf->tb_gvu_scratchpad__DOT__a_addr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17877061626840109305ull);
    vlSelf->tb_gvu_scratchpad__DOT__b_addr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13999845796119680780ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__a_wdata, __VscopeHash, 3339766580507260975ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__b_wdata, __VscopeHash, 7570533767385975145ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__a_rdata, __VscopeHash, 2739460111456439076ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__b_rdata, __VscopeHash, 16335337910927868064ull);
    vlSelf->tb_gvu_scratchpad__DOT__p0_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123218747525477133ull);
    vlSelf->tb_gvu_scratchpad__DOT__p0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4915381972984324643ull);
    vlSelf->tb_gvu_scratchpad__DOT__p1_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9782969948469426332ull);
    vlSelf->tb_gvu_scratchpad__DOT__p1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13492905737894636705ull);
    vlSelf->tb_gvu_scratchpad__DOT__p0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129398762499620638ull);
    vlSelf->tb_gvu_scratchpad__DOT__p1_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641137518460320797ull);
    vlSelf->tb_gvu_scratchpad__DOT__p0_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2242668297169994188ull);
    vlSelf->tb_gvu_scratchpad__DOT__p1_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 204825524068177648ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_gvu_scratchpad__DOT__p0_wdata, __VscopeHash, 2253997636231339802ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_gvu_scratchpad__DOT__p0_rdata, __VscopeHash, 9811269827813452648ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__p1_wdata, __VscopeHash, 6285777731227339382ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__p1_rdata, __VscopeHash, 11424336067046026978ull);
    vlSelf->tb_gvu_scratchpad__DOT__s0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15147250099260593306ull);
    vlSelf->tb_gvu_scratchpad__DOT__s1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2803838110990304790ull);
    vlSelf->tb_gvu_scratchpad__DOT__s0_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5242512021821897160ull);
    vlSelf->tb_gvu_scratchpad__DOT__s1_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12088992346318986891ull);
    vlSelf->tb_gvu_scratchpad__DOT__s0_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12372279564661509210ull);
    vlSelf->tb_gvu_scratchpad__DOT__s0_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10413668646059033792ull);
    vlSelf->tb_gvu_scratchpad__DOT__s1_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14371607606458772882ull);
    vlSelf->tb_gvu_scratchpad__DOT__s1_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8146557203702298456ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368197153045674907ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11884618248544212187ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8257850703489848620ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_bank = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5172193130192556925ull);
    vlSelf->tb_gvu_scratchpad__DOT__dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13791080522301618936ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__dma_wdata, __VscopeHash, 10272784134190489907ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__dma_rdata, __VscopeHash, 7674416686022402221ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__ref_vb0[__Vi0][__Vi1], __VscopeHash, 18138743953150154284ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__ref_vb1[__Vi0][__Vi1], __VscopeHash, 8264066516711558574ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__ref_vb2[__Vi0][__Vi1], __VscopeHash, 4118590622278314750ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_gvu_scratchpad__DOT__ref_sb[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5607139662533964715ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__Vi0], __VscopeHash, 7336325048574625325ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__Vi0], __VscopeHash, 13558680822673907185ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__Vi0], __VscopeHash, 6515070402009437782ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gvu_scratchpad__DOT__dut__DOT__sbank[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11286423970232233453ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
