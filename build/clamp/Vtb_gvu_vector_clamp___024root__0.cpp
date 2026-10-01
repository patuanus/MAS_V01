// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_vector_clamp.h for the primary calling header

#include "Vtb_gvu_vector_clamp__pch.h"

VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_clamp___024root* vlSelf);

void Vtb_gvu_vector_clamp___024root___eval_initial(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_initial\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__0(Vtb_gvu_vector_clamp___024root* vlSelf);
VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__1(Vtb_gvu_vector_clamp___024root* vlSelf);

VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_return;
}

extern const VlWide<32>/*1023:0*/ Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__0(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__f;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__f = 0;
    CData/*0:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f = 0;
    CData/*0:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh = 0;
    // Body
    vlSelfRef.tb_gvu_vector_clamp__DOT__req_valid = 1U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed = 1U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__f = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id = 1U;
    vlSelfRef.tb_gvu_vector_clamp__DOT__format = 0U;
    vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode = 1U;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__a, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__expected, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w = 8U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v = 0xfffffff5U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv = 0xfffffff5U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl = 0xfffffff6U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh = 0x0000000aU;
    vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = ((0xffffff00U 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
                                                 | (0x000000ffU 
                                                    & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] = ((0xffffff00U 
                                                   & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
    vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] = ((0xffffff00U 
                                                   & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
    vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
        = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
           | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                               ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                               : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                  < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                              ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                              : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      > (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                  : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : (0U < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : (0U < (0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : 0U))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[16U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            (0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : 0U)) << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[17U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[17U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[17U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[17U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[18U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[19U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[20U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[21U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[22U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[22U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[22U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[22U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[23U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[24U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[25U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[26U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : (0U < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[27U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[27U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[27U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[27U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[28U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[29U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[30U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[31U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__0__v));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_clamp.sv", 
                                         19);
    VL_WRITEF_NX("[CLAMP][TC%0d] format=%0d signed_mode=%0d\n[CLAMP][TC%0d] GOLDEN_RESULT = %h\n[CLAMP][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__f)
                 , '#',1,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_clamp__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_clamp__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                                                                       ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                                                                      ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                                                                    ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                                                                   ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                                                                  ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                                                                 ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U] 
                                                                ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U] 
                                                               ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U] 
                                                              ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U] 
                                                             ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U] 
                                                            ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U] 
                                                           ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U] 
                                                          ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U] 
                                                         ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[16U] 
                                                        ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[17U] 
                                                       ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[18U] 
                                                      ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[19U] 
                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[20U] 
                                                    ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[21U] 
                                                   ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[22U] 
                                                  ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[23U] 
                                                 ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[24U] 
                                                ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[25U] 
                                               ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[26U] 
                                              ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[27U] 
                                             ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[28U] 
                                            ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[29U] 
                                           ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[30U] 
                                          ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[31U] 
                                         ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_clamp.sv:23: Assertion failed in %m: clamp mismatch f=%0d signed=%0d\n",5, 'M',vlSymsp->name(),"tb_gvu_vector_clamp.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__f)
                     , '#',1,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__is_signed);
        VL_STOP_MT("tb/tb_gvu_vector_clamp.sv", 23, "", false);
    }
    VL_WRITEF_NX("[CLAMP][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__0__test_id);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f = 1U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id = 2U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl = 0;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh = 0;
    vlSelfRef.tb_gvu_vector_clamp__DOT__format = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f;
    vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__a, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__expected, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w 
        = ((0U == (IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f))
            ? 8U : ((1U == (IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f))
                     ? 0x00000010U : 0x00000020U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : (0U < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : (0U < (0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : 0U))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[16U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[16U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            (0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : 0U)) << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[17U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[17U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[17U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[17U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[18U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[18U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[19U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[19U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[20U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[20U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[21U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[21U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : (0U < (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                       && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : (0U < (0x0000ffffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                                      && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[22U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[22U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[22U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[22U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[23U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[23U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[24U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[24U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[25U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[25U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[26U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[26U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : (0U < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : (0U < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                        && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[27U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[27U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[27U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[27U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (0U < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) 
                    && VL_GTS_III(32, 0U, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : 0U));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x000000ffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x000000ffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x000000ffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x000000ffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x000000ffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[28U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[28U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = ((IData)(1U) + __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ff00U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ff00U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[29U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[29U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
           - (IData)(1U));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
        = ((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
            ? 0x0000000aU : 0x00000064U);
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x00ff0000U & (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x00ff0000U & ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                    ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                    : ((0x000000ffU 
                                        & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                       < (0x000000ffU 
                                          & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                   ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                   : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                        ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                        : ((0x000000ffU 
                                            & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                           > (0x000000ffU 
                                              & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                       ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                       : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
               | (0x0000ffffU & (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                   ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                                   : ((0x0000ffffU 
                                       & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                      < (0x0000ffffU 
                                         & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                                  ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                                  : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                                       ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                                       : ((0x0000ffffU 
                                           & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                                          > (0x0000ffffU 
                                             & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                                      ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                                      : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[30U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[30U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    if (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed) {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0xfffffff6U;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x0000000aU;
    } else {
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l = 0x0000000aU;
        __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h = 0x00000064U;
    }
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
        = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h, 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x000000ffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
               | ((((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                     : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                        < (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l)))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                    : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                         ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                         : ((0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v) 
                            > (0x0000ffffU & __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h)))
                        ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                        : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[31U] 
            = __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[31U] 
            = (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                 ? VL_LTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sl)
                 : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                    < __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l))
                ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__l
                : (((IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed)
                     ? VL_GTS_III(32, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sv, __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__sh)
                     : (__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v 
                        > __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h))
                    ? __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__h
                    : __Vtask_tb_gvu_vector_clamp__DOT__run_case__1__v));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_clamp.sv", 
                                         19);
    VL_WRITEF_NX("[CLAMP][TC%0d] format=%0d signed_mode=%0d\n[CLAMP][TC%0d] GOLDEN_RESULT = %h\n[CLAMP][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f)
                 , '#',1,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_clamp__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_clamp__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                                                                       ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                                                                      ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                                                                    ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                                                                   ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                                                                  ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                                                                 ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U] 
                                                                ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U] 
                                                               ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U] 
                                                              ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U] 
                                                             ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U] 
                                                            ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U] 
                                                           ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U] 
                                                          ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U] 
                                                         ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[16U] 
                                                        ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[17U] 
                                                       ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[18U] 
                                                      ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[19U] 
                                                     ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[20U] 
                                                    ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[21U] 
                                                   ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[22U] 
                                                  ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[23U] 
                                                 ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[24U] 
                                                ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[25U] 
                                               ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[26U] 
                                              ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[27U] 
                                             ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[28U] 
                                            ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[29U] 
                                           ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[30U] 
                                          ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_clamp__DOT__y[31U] 
                                         ^ vlSelfRef.tb_gvu_vector_clamp__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_clamp.sv:23: Assertion failed in %m: clamp mismatch f=%0d signed=%0d\n",5, 'M',vlSymsp->name(),"tb_gvu_vector_clamp.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__f)
                     , '#',1,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__is_signed);
        VL_STOP_MT("tb/tb_gvu_vector_clamp.sv", 23, "", false);
    }
    VL_WRITEF_NX("[CLAMP][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_clamp__DOT__run_case__1__test_id);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed = 1U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f = 2U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id = 3U;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl = 0;
    vlSelf->__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh = 0;
    vlSelfRef.tb_gvu_vector_clamp__DOT__format = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f;
    vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__a, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__expected, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w 
        = ((0U == (IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f))
            ? 8U : ((1U == (IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f))
                     ? 0x00000010U : 0x00000020U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : (0U < (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                       && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : (0U < (0x0000ffffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                      && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[0U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[1U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[1U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[1U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : (0U < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                        && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : (0U < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                        && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[2U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[2U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[2U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[2U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            (0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : (0U < (0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                      && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : 0U))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : (0U < (0x0000ffffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                      && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[3U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[3U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[3U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[3U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[16U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[16U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[16U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[16U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            (0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : (0U < (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                       && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : 0U)) << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U] = 
            (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[8U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[8U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[8U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[8U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : (0U < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                        && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[17U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[17U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[17U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[17U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[18U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[18U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[18U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[18U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[4U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[4U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[4U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[4U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U] = 
            ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[9U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[9U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[9U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[9U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[19U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[19U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[19U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[19U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[20U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[20U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[20U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[20U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[10U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[10U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[10U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[10U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[21U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[21U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[21U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[21U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : (0U < (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                       && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : 0U)) << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : (0U < (0x0000ffffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                                      && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : 0U))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[22U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[22U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[22U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[22U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[5U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[5U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[5U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[5U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[11U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[11U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[11U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[11U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[23U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[23U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[23U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[23U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[24U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[24U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[24U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[24U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[12U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[12U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[12U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[12U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[25U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[25U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[25U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[25U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | (0x00ff0000U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 0x00000010U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[26U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[26U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[26U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[26U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv = 0U;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0xfffffff6U : 0x0000000aU);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
        = ((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
            ? 0x0000000aU : 0x00000064U);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U] = 
            (0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[6U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[6U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[6U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[6U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : (0U < (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                        && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : 0U)) << 0x00000018U));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U] 
            = (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[13U]);
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[13U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[13U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[13U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : (0U < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                        && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : 0U)) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[27U] = 0U;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[27U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[27U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[27U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (0U < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) 
                    && VL_GTS_III(32, 0U, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : 0U));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x000000ffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x000000ffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x000000ffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x000000ffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x000000ffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x000000ffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | (0x0000ffffU & (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                   ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                   : ((0x0000ffffU 
                                       & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                      < (0x0000ffffU 
                                         & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                  ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                  : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                       ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                          > (0x0000ffffU 
                                             & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                      ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                      : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v))));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[28U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[28U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[28U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[28U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h);
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x0000ff00U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 8U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
               | (0x0000ff00U & ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                    ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                                    : ((0x000000ffU 
                                        & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                       < (0x000000ffU 
                                          & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                                   ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                                   : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                                        ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                                        : ((0x000000ffU 
                                            & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                                           > (0x000000ffU 
                                              & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                                       ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                                       : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                                 << 8U)));
    } else if ((0x00000010U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[14U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[14U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[14U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[14U]) 
               | ((((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                     : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                        < (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l)))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                    : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                         ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                         : ((0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v) 
                            > (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h)))
                        ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                        : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v)) 
                  << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[29U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[29U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[29U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[29U] 
            = (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                 ? VL_LTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl)
                 : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                    < vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l))
                ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l
                : (((IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed)
                     ? VL_GTS_III(32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh)
                     : (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                        > vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h))
                    ? vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h
                    : vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
    }
    if (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed) {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0xfffffff6U;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x0000000aU;
    } else {
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l = 0x0000000aU;
        vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h = 0x00000064U;
    }
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
        = (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
           - (IData)(1U));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sl 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    co_return;
}
