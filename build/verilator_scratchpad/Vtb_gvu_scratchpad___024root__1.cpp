// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_scratchpad.h for the primary calling header

#include "Vtb_gvu_scratchpad__pch.h"

VlCoroutine Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__1(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_gvu_scratchpad.sv", 
                                             20);
        vlSelfRef.tb_gvu_scratchpad__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk)));
    }
    co_return;
}

void Vtb_gvu_scratchpad___024root___eval_triggers_vec__act(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_triggers_vec__act\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0 
        = vlSelfRef.tb_gvu_scratchpad__DOT__clk;
}

bool Vtb_gvu_scratchpad___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___trigger_anySet__act\n"); );
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

void Vtb_gvu_scratchpad___024root___act_comb__TOP__0(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___act_comb__TOP__0\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_err = ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_v) 
                                                & ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_v) 
                                                   | (8U 
                                                      <= 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))));
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_err = ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_v) 
                                                & ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_v) 
                                                   | (8U 
                                                      <= (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr))));
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_error = ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid) 
                                                   & (((8U 
                                                        <= (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)) 
                                                       & ((0U 
                                                           == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                                                             | ((2U 
                                                                 == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)) 
                                                                | (3U 
                                                                   == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank)))))) 
                                                      | ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel) 
                                                         == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel))));
}

void Vtb_gvu_scratchpad___024root___eval_act(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_act\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
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

void Vtb_gvu_scratchpad___024root___nba_sequent__TOP__0(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___nba_sequent__TOP__0\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5;
    VL_ZERO_W(256, __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5);
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0;
    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1;
    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2;
    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2;
    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 = 0;
    // Body
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4 = 0U;
    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5 = 0U;
    if (vlSelfRef.tb_gvu_scratchpad__DOT__b_we) {
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[0U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[1U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[2U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[3U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[4U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[5U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[6U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[7U];
        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)));
        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid) 
         & (~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_error)))) {
        if ((0U != (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
            if ((1U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
                if (vlSelfRef.tb_gvu_scratchpad__DOT__dma_we) {
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[0U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[1U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[2U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[3U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[4U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[5U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[6U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U];
                    __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[7U] 
                        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U];
                    __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1 
                        = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                            ? 8U : 0U) 
                                          + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)));
                    __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1 = 1U;
                }
            }
            if ((1U != (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
                if ((2U != (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
                    if (vlSelfRef.tb_gvu_scratchpad__DOT__dma_we) {
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U];
                        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 
                            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                                ? 8U
                                                : 0U) 
                                              + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)));
                        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2 = 1U;
                    }
                }
                if ((2U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
                    if (vlSelfRef.tb_gvu_scratchpad__DOT__dma_we) {
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[0U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[1U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[2U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[3U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[4U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[5U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[6U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U];
                        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[7U] 
                            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U];
                        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5 
                            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                                ? 8U
                                                : 0U) 
                                              + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)));
                        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5 = 1U;
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
            if (vlSelfRef.tb_gvu_scratchpad__DOT__dma_we) {
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[0U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[1U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[2U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[3U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[4U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[5U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[6U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U];
                __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[7U] 
                    = vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U];
                __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1 
                    = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                        ? 8U : 0U) 
                                      + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)));
                __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1 = 1U;
            }
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][0U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][1U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][2U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][3U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][4U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][5U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][6U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][7U];
        } else if ((1U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][0U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][1U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][2U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][3U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][4U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][5U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][6U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][7U];
        } else if ((2U == (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank))) {
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][0U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][1U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][2U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][3U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][4U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][5U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][6U];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))][7U];
        } else {
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank
                [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel)
                                   ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr)))];
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U] = 0U;
            vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U] = 0U;
        }
    }
    if (vlSelfRef.tb_gvu_scratchpad__DOT__a_we) {
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[0U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[1U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[2U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[3U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[4U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[5U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[6U];
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[7U];
        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)));
        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s0_we) 
         & (8U > (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr)))) {
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 
            = vlSelfRef.tb_gvu_scratchpad__DOT__s0_wdata;
        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr)));
        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s1_we) 
         & (8U > (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr)))) {
        __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 
            = vlSelfRef.tb_gvu_scratchpad__DOT__s1_wdata;
        __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr)));
        __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1 = 1U;
    }
    if (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_v) 
         & (~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_err)))) {
        if (vlSelfRef.tb_gvu_scratchpad__DOT__p0_we) {
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U];
            __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0 
                = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                    ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)));
            __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0 = 1U;
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U];
            __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1 
                = (0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                                   ? 8U
                                                   : 0U) 
                                                 + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))));
            __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1 = 1U;
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U];
            __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2 
                = (0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                                   ? 8U
                                                   : 0U) 
                                                 + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))));
            __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2 = 1U;
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U];
            __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3 
                = (0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                                   ? 8U
                                                   : 0U) 
                                                 + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))));
            __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3 = 1U;
        }
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr)))][7U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[8U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[9U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[10U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[11U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[12U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[13U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[14U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[15U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(1U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][7U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[16U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[17U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[18U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[19U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[20U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[21U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[22U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[23U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(2U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][7U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[24U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[25U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[26U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[27U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[28U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[29U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[30U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[31U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & ((IData)(3U) + (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                              ? 8U : 0U) 
                                            + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr))))][7U];
    }
    if (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_v) 
         & (~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_err)))) {
        if (vlSelfRef.tb_gvu_scratchpad__DOT__p1_we) {
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[0U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[0U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[1U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[1U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[2U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[2U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[3U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[3U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[4U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[4U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[5U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[5U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[6U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[6U];
            __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[7U] 
                = vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[7U];
            __VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4 
                = (0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                    ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)));
            __VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4 = 1U;
        }
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr)))][7U];
    }
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__a_addr)))][7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[0U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[1U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[2U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[3U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[4U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[5U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[6U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[7U] = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1
        [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                           ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__b_addr)))][7U];
    if ((8U > (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__s0_rdata 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank
            [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                               ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr)))];
    }
    if ((8U > (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__s1_rdata 
            = (0x000000ffU & vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank
               [(0x0000000fU & (((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel)
                                  ? 8U : 0U) + (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr)))]);
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v0[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank0[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank0__v1[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v0[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank1[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank1__v1[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v0;
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank
                [__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1]) 
               | (IData)(__VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v1));
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__sbank[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__sbank__v2;
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v0[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v1[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v2[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v3[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v4[7U];
    }
    if (__VdlySet__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5) {
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][0U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][1U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][2U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][3U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][4U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][5U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][6U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__dut__DOT__vbank2[__VdlyDim0__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5][7U] 
            = __VdlyVal__tb_gvu_scratchpad__DOT__dut__DOT__vbank2__v5[7U];
    }
}

void Vtb_gvu_scratchpad___024root___eval_nba(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_nba\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gvu_scratchpad___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
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

void Vtb_gvu_scratchpad___024root___timing_ready(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___timing_ready\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1052bb72__0.ready("@(negedge tb_gvu_scratchpad.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1052bab8__0.ready("@(posedge tb_gvu_scratchpad.clk)");
    }
}

void Vtb_gvu_scratchpad___024root___timing_resume(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___timing_resume\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1052bb72__0.moveToResumeQueue(
                                                          "@(negedge tb_gvu_scratchpad.clk)");
    vlSelfRef.__VtrigSched_h1052bab8__0.moveToResumeQueue(
                                                          "@(posedge tb_gvu_scratchpad.clk)");
    vlSelfRef.__VtrigSched_h1052bb72__0.resume("@(negedge tb_gvu_scratchpad.clk)");
    vlSelfRef.__VtrigSched_h1052bab8__0.resume("@(posedge tb_gvu_scratchpad.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gvu_scratchpad___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gvu_scratchpad___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_gvu_scratchpad___024root___eval_phase__act(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_phase__act\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gvu_scratchpad___024root___eval_triggers_vec__act(vlSelf);
    Vtb_gvu_scratchpad___024root___timing_ready(vlSelf);
    Vtb_gvu_scratchpad___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gvu_scratchpad___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_gvu_scratchpad___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_gvu_scratchpad___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_gvu_scratchpad___024root___timing_resume(vlSelf);
        Vtb_gvu_scratchpad___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gvu_scratchpad___024root___eval_phase__inact(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_phase__inact\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_gvu_scratchpad.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_gvu_scratchpad___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gvu_scratchpad___024root___eval_phase__nba(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_phase__nba\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_gvu_scratchpad___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_gvu_scratchpad___024root___eval_nba(vlSelf);
        Vtb_gvu_scratchpad___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_gvu_scratchpad___024root___eval(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gvu_scratchpad___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_gvu_scratchpad.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_gvu_scratchpad.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_gvu_scratchpad___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_gvu_scratchpad.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_gvu_scratchpad___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_gvu_scratchpad___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_gvu_scratchpad___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(Vtb_gvu_scratchpad___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0 
        = vlSelfRef.tb_gvu_scratchpad__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(Vtb_gvu_scratchpad___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_gvu_scratchpad__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gvu_scratchpad__DOT__clk__0 
        = vlSelfRef.tb_gvu_scratchpad__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bab8__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1052bb72__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_gvu_scratchpad___024root___eval_debug_assertions(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_debug_assertions\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
