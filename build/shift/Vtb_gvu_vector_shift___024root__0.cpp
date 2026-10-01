// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_vector_shift.h for the primary calling header

#include "Vtb_gvu_vector_shift__pch.h"

VlCoroutine Vtb_gvu_vector_shift___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_shift___024root* vlSelf);

void Vtb_gvu_vector_shift___024root___eval_initial(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_initial\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gvu_vector_shift___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

extern const VlWide<32>/*1023:0*/ Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine Vtb_gvu_vector_shift___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_gvu_vector_shift__DOT__req_valid;
    tb_gvu_vector_shift__DOT__req_valid = 0;
    VlWide<32>/*1023:0*/ tb_gvu_vector_shift__DOT__expected;
    VL_ZERO_W(1024, tb_gvu_vector_shift__DOT__expected);
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__f;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__f = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation = 0;
    CData/*5:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__f;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__f = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation = 0;
    CData/*5:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__f;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__f = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation = 0;
    CData/*5:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv = 0;
    // Body
    tb_gvu_vector_shift__DOT__req_valid = 1U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh = 1U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation = 0U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__f = 0U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id = 1U;
    vlSelfRef.tb_gvu_vector_shift__DOT__format = 0U;
    vlSelfRef.tb_gvu_vector_shift__DOT__op = 0U;
    vlSelfRef.tb_gvu_vector_shift__DOT__amount = 1U;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_shift__DOT__a, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_shift__DOT__expected, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w = 8U;
    vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = (0xffffff00U 
                                                 & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
    tb_gvu_vector_shift__DOT__expected[0U] = (0xffffff00U 
                                              & tb_gvu_vector_shift__DOT__expected[0U]);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv = 1U;
    vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = (0x00000100U 
                                                 | (0xffff00ffU 
                                                    & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]));
    tb_gvu_vector_shift__DOT__expected[0U] = ((0xffff00ffU 
                                               & tb_gvu_vector_shift__DOT__expected[0U]) 
                                              | (0x0000ff00U 
                                                 & (((0U 
                                                      == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                      ? 
                                                     VL_SHIFTL_III(8,8,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                      : 
                                                     ((1U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTR_III(8,8,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                    << 8U)));
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x80000000U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 0U
                                                        : 
                                                       (0x000000ffU 
                                                        & VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))) 
                                                     << 0x00000010U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | ((0U 
                                                      == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 0U
                                                       : 
                                                      (0x0000ffffU 
                                                       & VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 0x80000000U;
        tb_gvu_vector_shift__DOT__expected[2U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x80000000U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x80000000U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff000000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0xffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0xffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0xffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0xffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 0xffffffffU;
        tb_gvu_vector_shift__DOT__expected[3U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0xffffffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340004U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (4U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (4U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 0x12340004U;
        tb_gvu_vector_shift__DOT__expected[4U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340004U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340004U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340005U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00000500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00050000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 0x12340005U;
        tb_gvu_vector_shift__DOT__expected[5U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340005U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340005U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340006U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00060000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (6U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 0x12340006U;
        tb_gvu_vector_shift__DOT__expected[6U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340006U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340006U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340007U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x07000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00070000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 0x12340007U;
        tb_gvu_vector_shift__DOT__expected[7U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340007U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340007U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340008U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (8U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (8U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 0x12340008U;
        tb_gvu_vector_shift__DOT__expected[8U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340008U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340008U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340009U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00000900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00090000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 0x12340009U;
        tb_gvu_vector_shift__DOT__expected[9U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340009U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340009U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x000a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] = 0x1234000aU;
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x0b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] = 0x1234000bU;
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x0cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x0cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] = 0x1234000cU;
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00000d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] = 0x1234000dU;
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x000e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] = 0x1234000eU;
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] = 0x1234000fU;
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340010U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x10U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x10U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x10U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x0010U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[16U] = 0x12340010U;
        tb_gvu_vector_shift__DOT__expected[16U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340011U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00001100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x11U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x11U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x00110000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[17U] = 0x12340011U;
        tb_gvu_vector_shift__DOT__expected[17U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340012U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00120000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x12U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x12U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x0012U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[18U] = 0x12340012U;
        tb_gvu_vector_shift__DOT__expected[18U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340013U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x13000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x13U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x13U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x00130000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[19U] = 0x12340013U;
        tb_gvu_vector_shift__DOT__expected[19U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340014U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x14U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x14U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x14U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x0014U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[20U] = 0x12340014U;
        tb_gvu_vector_shift__DOT__expected[20U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340015U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00001500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x15U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x15U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x00150000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[21U] = 0x12340015U;
        tb_gvu_vector_shift__DOT__expected[21U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340016U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00160000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x16U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x16U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x0016U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[22U] = 0x12340016U;
        tb_gvu_vector_shift__DOT__expected[22U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340017U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x17000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x17U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x17U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x00170000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[23U] = 0x12340017U;
        tb_gvu_vector_shift__DOT__expected[23U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340018U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x18U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x18U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x18U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x0018U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[24U] = 0x12340018U;
        tb_gvu_vector_shift__DOT__expected[24U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340019U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x00001900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x19U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x19U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x00190000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[25U] = 0x12340019U;
        tb_gvu_vector_shift__DOT__expected[25U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x001a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[26U] = 0x1234001aU;
        tb_gvu_vector_shift__DOT__expected[26U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x1b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[27U] = 0x1234001bU;
        tb_gvu_vector_shift__DOT__expected[27U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x1cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x1cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[28U] = 0x1234001cU;
        tb_gvu_vector_shift__DOT__expected[28U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x00001d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[29U] = 0x1234001dU;
        tb_gvu_vector_shift__DOT__expected[29U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x001e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[30U] = 0x1234001eU;
        tb_gvu_vector_shift__DOT__expected[30U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[31U] = 0x1234001fU;
        tb_gvu_vector_shift__DOT__expected[31U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__0__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh))));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_shift.sv", 
                                         19);
    VL_WRITEF_NX("[SHIFT][TC%0d] format=%0d op=%0d amount=%0d\n[SHIFT][TC%0d] GOLDEN_RESULT = %h\n[SHIFT][TC%0d] ACTUAL_RESULT = %h\n",8
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__f)
                 , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation
                 , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh)
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id
                 , '#',1024,tb_gvu_vector_shift__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_shift__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_shift__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_shift__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_shift__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_shift__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_shift__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_shift__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_shift__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                                                                ^ tb_gvu_vector_shift__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                                                               ^ tb_gvu_vector_shift__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                                                              ^ tb_gvu_vector_shift__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                                                             ^ tb_gvu_vector_shift__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                                                            ^ tb_gvu_vector_shift__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                                                           ^ tb_gvu_vector_shift__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                                                          ^ tb_gvu_vector_shift__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                                                         ^ tb_gvu_vector_shift__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_shift__DOT__y[16U] 
                                                        ^ tb_gvu_vector_shift__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[17U] 
                                                       ^ tb_gvu_vector_shift__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[18U] 
                                                      ^ tb_gvu_vector_shift__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[19U] 
                                                     ^ tb_gvu_vector_shift__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[20U] 
                                                    ^ tb_gvu_vector_shift__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[21U] 
                                                   ^ tb_gvu_vector_shift__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[22U] 
                                                  ^ tb_gvu_vector_shift__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[23U] 
                                                 ^ tb_gvu_vector_shift__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[24U] 
                                                ^ tb_gvu_vector_shift__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[25U] 
                                               ^ tb_gvu_vector_shift__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[26U] 
                                              ^ tb_gvu_vector_shift__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[27U] 
                                             ^ tb_gvu_vector_shift__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[28U] 
                                            ^ tb_gvu_vector_shift__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[29U] 
                                           ^ tb_gvu_vector_shift__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[30U] 
                                          ^ tb_gvu_vector_shift__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[31U] 
                                         ^ tb_gvu_vector_shift__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_shift.sv:23: Assertion failed in %m: shift mismatch f=%0d op=%0d sh=%0d\n",6, 'M',vlSymsp->name(),"tb_gvu_vector_shift.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__f)
                     , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__operation
                     , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__0__sh));
        VL_STOP_MT("tb/tb_gvu_vector_shift.sv", 23, "", false);
    }
    VL_WRITEF_NX("[SHIFT][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__0__test_id);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh = 5U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation = 1U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__f = 1U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id = 2U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w = 0;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv = 0;
    vlSelfRef.tb_gvu_vector_shift__DOT__format = __Vtask_tb_gvu_vector_shift__DOT__run_case__1__f;
    vlSelfRef.tb_gvu_vector_shift__DOT__op = __Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation;
    vlSelfRef.tb_gvu_vector_shift__DOT__amount = __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_shift__DOT__a, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_shift__DOT__expected, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w 
        = ((0U == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__f))
            ? 8U : ((1U == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__f))
                     ? 0x00000010U : 0x00000020U));
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv = 0U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = (0xffffff00U 
                                                  & tb_gvu_vector_shift__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0x00000100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]));
        tb_gvu_vector_shift__DOT__expected[0U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = (0xffff0000U 
                                                  & tb_gvu_vector_shift__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0x00010000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]));
        tb_gvu_vector_shift__DOT__expected[0U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 0U;
        tb_gvu_vector_shift__DOT__expected[0U] = 0U;
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 1U;
        tb_gvu_vector_shift__DOT__expected[1U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x80000000U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 0U
                                                        : 
                                                       (0x000000ffU 
                                                        & VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))) 
                                                     << 0x00000010U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | ((0U 
                                                      == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 0U
                                                       : 
                                                      (0x0000ffffU 
                                                       & VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 0x80000000U;
        tb_gvu_vector_shift__DOT__expected[2U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x80000000U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x80000000U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff000000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0xffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0xffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0xffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0xffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 0xffffffffU;
        tb_gvu_vector_shift__DOT__expected[3U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0xffffffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340004U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (4U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (4U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 0x12340004U;
        tb_gvu_vector_shift__DOT__expected[4U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340004U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340004U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340005U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00000500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00050000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 0x12340005U;
        tb_gvu_vector_shift__DOT__expected[5U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340005U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340005U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340006U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00060000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (6U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 0x12340006U;
        tb_gvu_vector_shift__DOT__expected[6U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340006U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340006U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340007U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x07000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00070000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 0x12340007U;
        tb_gvu_vector_shift__DOT__expected[7U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340007U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340007U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340008U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (8U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (8U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 0x12340008U;
        tb_gvu_vector_shift__DOT__expected[8U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340008U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340008U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340009U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00000900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00090000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 0x12340009U;
        tb_gvu_vector_shift__DOT__expected[9U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340009U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340009U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x000a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] = 0x1234000aU;
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x0b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] = 0x1234000bU;
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x0cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x0cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] = 0x1234000cU;
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00000d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] = 0x1234000dU;
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x000e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] = 0x1234000eU;
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] = 0x1234000fU;
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340010U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x10U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x10U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x10U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x0010U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[16U] = 0x12340010U;
        tb_gvu_vector_shift__DOT__expected[16U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340011U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00001100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x11U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x11U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x00110000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[17U] = 0x12340011U;
        tb_gvu_vector_shift__DOT__expected[17U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340012U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00120000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x12U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x12U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x0012U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[18U] = 0x12340012U;
        tb_gvu_vector_shift__DOT__expected[18U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340013U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x13000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x13U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x13U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x00130000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[19U] = 0x12340013U;
        tb_gvu_vector_shift__DOT__expected[19U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340014U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x14U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x14U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x14U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x0014U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[20U] = 0x12340014U;
        tb_gvu_vector_shift__DOT__expected[20U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340015U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00001500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x15U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x15U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x00150000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[21U] = 0x12340015U;
        tb_gvu_vector_shift__DOT__expected[21U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340016U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00160000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x16U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x16U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x0016U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[22U] = 0x12340016U;
        tb_gvu_vector_shift__DOT__expected[22U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340017U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x17000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x17U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x17U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x00170000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[23U] = 0x12340017U;
        tb_gvu_vector_shift__DOT__expected[23U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340018U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x18U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x18U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x18U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x0018U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[24U] = 0x12340018U;
        tb_gvu_vector_shift__DOT__expected[24U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340019U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x00001900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x19U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x19U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x00190000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[25U] = 0x12340019U;
        tb_gvu_vector_shift__DOT__expected[25U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x001a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[26U] = 0x1234001aU;
        tb_gvu_vector_shift__DOT__expected[26U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x1b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[27U] = 0x1234001bU;
        tb_gvu_vector_shift__DOT__expected[27U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x1cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x1cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[28U] = 0x1234001cU;
        tb_gvu_vector_shift__DOT__expected[28U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x00001d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[29U] = 0x1234001dU;
        tb_gvu_vector_shift__DOT__expected[29U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x001e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[30U] = 0x1234001eU;
        tb_gvu_vector_shift__DOT__expected[30U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[31U] = 0x1234001fU;
        tb_gvu_vector_shift__DOT__expected[31U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__1__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh))));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_shift.sv", 
                                         19);
    VL_WRITEF_NX("[SHIFT][TC%0d] format=%0d op=%0d amount=%0d\n[SHIFT][TC%0d] GOLDEN_RESULT = %h\n[SHIFT][TC%0d] ACTUAL_RESULT = %h\n",8
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__f)
                 , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation
                 , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh)
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id
                 , '#',1024,tb_gvu_vector_shift__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_shift__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_shift__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_shift__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_shift__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_shift__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_shift__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_shift__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_shift__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                                                                ^ tb_gvu_vector_shift__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                                                               ^ tb_gvu_vector_shift__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                                                              ^ tb_gvu_vector_shift__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                                                             ^ tb_gvu_vector_shift__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                                                            ^ tb_gvu_vector_shift__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                                                           ^ tb_gvu_vector_shift__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                                                          ^ tb_gvu_vector_shift__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                                                         ^ tb_gvu_vector_shift__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_shift__DOT__y[16U] 
                                                        ^ tb_gvu_vector_shift__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[17U] 
                                                       ^ tb_gvu_vector_shift__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[18U] 
                                                      ^ tb_gvu_vector_shift__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[19U] 
                                                     ^ tb_gvu_vector_shift__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[20U] 
                                                    ^ tb_gvu_vector_shift__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[21U] 
                                                   ^ tb_gvu_vector_shift__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[22U] 
                                                  ^ tb_gvu_vector_shift__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[23U] 
                                                 ^ tb_gvu_vector_shift__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[24U] 
                                                ^ tb_gvu_vector_shift__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[25U] 
                                               ^ tb_gvu_vector_shift__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[26U] 
                                              ^ tb_gvu_vector_shift__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[27U] 
                                             ^ tb_gvu_vector_shift__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[28U] 
                                            ^ tb_gvu_vector_shift__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[29U] 
                                           ^ tb_gvu_vector_shift__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[30U] 
                                          ^ tb_gvu_vector_shift__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[31U] 
                                         ^ tb_gvu_vector_shift__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_shift.sv:23: Assertion failed in %m: shift mismatch f=%0d op=%0d sh=%0d\n",6, 'M',vlSymsp->name(),"tb_gvu_vector_shift.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__f)
                     , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__operation
                     , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__1__sh));
        VL_STOP_MT("tb/tb_gvu_vector_shift.sv", 23, "", false);
    }
    VL_WRITEF_NX("[SHIFT][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__1__test_id);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh = 0x1fU;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation = 2U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__f = 2U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id = 3U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w = 0;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv = 0;
    vlSelfRef.tb_gvu_vector_shift__DOT__format = __Vtask_tb_gvu_vector_shift__DOT__run_case__2__f;
    vlSelfRef.tb_gvu_vector_shift__DOT__op = __Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation;
    vlSelfRef.tb_gvu_vector_shift__DOT__amount = __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_shift__DOT__a, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_shift__DOT__expected, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w 
        = ((0U == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__f))
            ? 8U : ((1U == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__f))
                     ? 0x00000010U : 0x00000020U));
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv = 0U;
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = (0xffffff00U 
                                                  & tb_gvu_vector_shift__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0x00000100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]));
        tb_gvu_vector_shift__DOT__expected[0U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = (0xffff0000U 
                                                  & tb_gvu_vector_shift__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0x00010000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]));
        tb_gvu_vector_shift__DOT__expected[0U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 0U;
        tb_gvu_vector_shift__DOT__expected[0U] = 0U;
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 1U;
        tb_gvu_vector_shift__DOT__expected[1U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(1U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 1U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x80000000U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 0U
                                                        : 
                                                       (0x000000ffU 
                                                        & VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))) 
                                                     << 0x00000010U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | ((0U 
                                                      == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 0U
                                                       : 
                                                      (0x0000ffffU 
                                                       & VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 0x80000000U;
        tb_gvu_vector_shift__DOT__expected[2U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x80000000U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x80000000U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[0U] = 
            (0xff000000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[0U]);
        tb_gvu_vector_shift__DOT__expected[0U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[0U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0xffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0xffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0xffff0000U | vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]);
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0xffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0xffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 0xffffffffU;
        tb_gvu_vector_shift__DOT__expected[3U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0xffffffffU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340004U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (4U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (4U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(4U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 4U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 0x12340004U;
        tb_gvu_vector_shift__DOT__expected[4U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340004U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340004U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340005U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00000500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00050000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(5U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 5U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 0x12340005U;
        tb_gvu_vector_shift__DOT__expected[5U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340005U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340005U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340006U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x00060000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (6U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(6U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 6U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 0x12340006U;
        tb_gvu_vector_shift__DOT__expected[6U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340006U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340006U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340007U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[1U] = 
            (0x07000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[1U]));
        tb_gvu_vector_shift__DOT__expected[1U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[1U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00070000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(7U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 7U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 0x12340007U;
        tb_gvu_vector_shift__DOT__expected[7U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340007U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340007U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340008U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (8U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (8U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(8U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 8U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 0x12340008U;
        tb_gvu_vector_shift__DOT__expected[8U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340008U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340008U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340009U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x00000900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00090000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(9U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 9U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 0x12340009U;
        tb_gvu_vector_shift__DOT__expected[9U] = ((0U 
                                                   == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,6, (IData)(0x12340009U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                   : 
                                                  ((1U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,6, 0x12340009U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x000a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] = 0x1234000aU;
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[2U] = 
            (0x0b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[2U]));
        tb_gvu_vector_shift__DOT__expected[2U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[2U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x000b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] = 0x1234000bU;
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x0cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x0cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] = 0x1234000cU;
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x00000d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x000d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] = 0x1234000dU;
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x000e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x0eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x0eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] = 0x1234000eU;
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234000fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[3U] = 
            (0x0f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[3U]));
        tb_gvu_vector_shift__DOT__expected[3U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[3U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x0fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x0fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x000f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] = 0x1234000fU;
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234000fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234000fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340010U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x10U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x10U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x10U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x0010U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[16U] = 0x12340010U;
        tb_gvu_vector_shift__DOT__expected[16U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340010U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340010U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340011U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00001100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x11U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x11U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[8U] = 
            (0x00110000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[8U]));
        tb_gvu_vector_shift__DOT__expected[8U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[8U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[17U] = 0x12340011U;
        tb_gvu_vector_shift__DOT__expected[17U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340011U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340011U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340012U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x00120000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x12U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x12U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x0012U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0xffff0000U 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (0x0000ffffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,6, (IData)(0x0012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(16,16,6, 0x0012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[18U] = 0x12340012U;
        tb_gvu_vector_shift__DOT__expected[18U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340012U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340012U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340013U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[4U] = 
            (0x13000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[4U]));
        tb_gvu_vector_shift__DOT__expected[4U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[4U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x13U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x13U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[9U] = 
            (0x00130000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[9U]));
        tb_gvu_vector_shift__DOT__expected[9U] = ((0x0000ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[9U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(16,16,6, (IData)(0x0013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,6, 0x0013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[19U] = 0x12340013U;
        tb_gvu_vector_shift__DOT__expected[19U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340013U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340013U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340014U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x14U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x14U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x14U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x0014U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[20U] = 0x12340014U;
        tb_gvu_vector_shift__DOT__expected[20U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340014U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340014U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340015U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00001500U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x15U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x15U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[10U] 
            = (0x00150000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[10U]));
        tb_gvu_vector_shift__DOT__expected[10U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[10U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[21U] = 0x12340015U;
        tb_gvu_vector_shift__DOT__expected[21U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340015U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340015U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340016U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x00160000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x16U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x16U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x0016U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[22U] = 0x12340016U;
        tb_gvu_vector_shift__DOT__expected[22U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340016U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340016U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340017U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[5U] = 
            (0x17000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[5U]));
        tb_gvu_vector_shift__DOT__expected[5U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[5U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x17U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x17U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[11U] 
            = (0x00170000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[11U]));
        tb_gvu_vector_shift__DOT__expected[11U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[11U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[23U] = 0x12340017U;
        tb_gvu_vector_shift__DOT__expected[23U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340017U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340017U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340018U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x18U | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x18U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x18U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x0018U | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x0018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x0018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[24U] = 0x12340018U;
        tb_gvu_vector_shift__DOT__expected[24U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340018U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340018U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x12340019U), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x00001900U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x19U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x19U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[12U] 
            = (0x00190000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[12U]));
        tb_gvu_vector_shift__DOT__expected[12U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[12U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x0019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x0019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[25U] = 0x12340019U;
        tb_gvu_vector_shift__DOT__expected[25U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x12340019U), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x12340019U, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001aU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x001a0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001aU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[26U] = 0x1234001aU;
        tb_gvu_vector_shift__DOT__expected[26U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001aU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001aU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001bU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[6U] = 
            (0x1b000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[6U]));
        tb_gvu_vector_shift__DOT__expected[6U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[6U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[13U] 
            = (0x001b0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[13U]));
        tb_gvu_vector_shift__DOT__expected[13U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[13U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[27U] = 0x1234001bU;
        tb_gvu_vector_shift__DOT__expected[27U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001bU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001bU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001cU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1cU | (0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffffff00U 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x000000ffU 
                                                     & ((0U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTL_III(8,8,6, (IData)(0x1cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        ((1U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,6, 0x1cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001cU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[28U] = 0x1234001cU;
        tb_gvu_vector_shift__DOT__expected[28U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001cU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001cU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001dU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x00001d00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xffff00ffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x0000ff00U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 8U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[14U] 
            = (0x001d0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[14U]));
        tb_gvu_vector_shift__DOT__expected[14U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[14U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[29U] = 0x1234001dU;
        tb_gvu_vector_shift__DOT__expected[29U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001dU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001dU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001eU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x001e0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0xff00ffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (0x00ff0000U 
                                                     & (((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(8,8,6, (IData)(0x1eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(8,8,6, 0x1eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                        << 0x00000010U)));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001eU | (0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (0x0000ffffU 
                                                      & ((0U 
                                                          == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                          ? 
                                                         VL_SHIFTL_III(16,16,6, (IData)(0x001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                          : 
                                                         ((1U 
                                                           == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                           ? 
                                                          VL_SHIFTR_III(16,16,6, 0x001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                           : 
                                                          VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))))));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[30U] = 0x1234001eU;
        tb_gvu_vector_shift__DOT__expected[30U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001eU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001eU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, (IData)(0x1234001fU), 
                                                 ((IData)(0x00000020U) 
                                                  - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w));
    if ((8U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[7U] = 
            (0x1f000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[7U]));
        tb_gvu_vector_shift__DOT__expected[7U] = ((0x00ffffffU 
                                                   & tb_gvu_vector_shift__DOT__expected[7U]) 
                                                  | (((0U 
                                                       == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,6, (IData)(0x1fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                       : 
                                                      ((1U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,6, 0x1fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       VL_SHIFTRS_III(8,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                     << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_shift__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[15U] 
            = (0x001f0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__a[15U]));
        tb_gvu_vector_shift__DOT__expected[15U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_shift__DOT__expected[15U]) 
                                                   | (((0U 
                                                        == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                        ? 
                                                       VL_SHIFTL_III(16,16,6, (IData)(0x001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                        : 
                                                       ((1U 
                                                         == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,6, 0x001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                         : 
                                                        VL_SHIFTRS_III(16,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)))) 
                                                      << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_shift__DOT__a[31U] = 0x1234001fU;
        tb_gvu_vector_shift__DOT__expected[31U] = (
                                                   (0U 
                                                    == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,6, (IData)(0x1234001fU), (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,6, 0x1234001fU, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))
                                                     : 
                                                    VL_SHIFTRS_III(32,32,6, __Vtask_tb_gvu_vector_shift__DOT__run_case__2__sv, (IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh))));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_shift.sv", 
                                         19);
    VL_WRITEF_NX("[SHIFT][TC%0d] format=%0d op=%0d amount=%0d\n[SHIFT][TC%0d] GOLDEN_RESULT = %h\n[SHIFT][TC%0d] ACTUAL_RESULT = %h\n",8
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__f)
                 , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation
                 , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh)
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id
                 , '#',1024,tb_gvu_vector_shift__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_shift__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_shift__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_shift__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_shift__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_shift__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_shift__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_shift__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_shift__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_shift__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                                                                ^ tb_gvu_vector_shift__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                                                               ^ tb_gvu_vector_shift__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                                                              ^ tb_gvu_vector_shift__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                                                             ^ tb_gvu_vector_shift__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                                                            ^ tb_gvu_vector_shift__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                                                           ^ tb_gvu_vector_shift__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                                                          ^ tb_gvu_vector_shift__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                                                         ^ tb_gvu_vector_shift__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_shift__DOT__y[16U] 
                                                        ^ tb_gvu_vector_shift__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_shift__DOT__y[17U] 
                                                       ^ tb_gvu_vector_shift__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_shift__DOT__y[18U] 
                                                      ^ tb_gvu_vector_shift__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_shift__DOT__y[19U] 
                                                     ^ tb_gvu_vector_shift__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_shift__DOT__y[20U] 
                                                    ^ tb_gvu_vector_shift__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_shift__DOT__y[21U] 
                                                   ^ tb_gvu_vector_shift__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_shift__DOT__y[22U] 
                                                  ^ tb_gvu_vector_shift__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_shift__DOT__y[23U] 
                                                 ^ tb_gvu_vector_shift__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_shift__DOT__y[24U] 
                                                ^ tb_gvu_vector_shift__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_shift__DOT__y[25U] 
                                               ^ tb_gvu_vector_shift__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_shift__DOT__y[26U] 
                                              ^ tb_gvu_vector_shift__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_shift__DOT__y[27U] 
                                             ^ tb_gvu_vector_shift__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_shift__DOT__y[28U] 
                                            ^ tb_gvu_vector_shift__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_shift__DOT__y[29U] 
                                           ^ tb_gvu_vector_shift__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_shift__DOT__y[30U] 
                                          ^ tb_gvu_vector_shift__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_shift__DOT__y[31U] 
                                         ^ tb_gvu_vector_shift__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_shift.sv:23: Assertion failed in %m: shift mismatch f=%0d op=%0d sh=%0d\n",6, 'M',vlSymsp->name(),"tb_gvu_vector_shift.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__f)
                     , '#',2,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__operation
                     , '#',6,(IData)(__Vtask_tb_gvu_vector_shift__DOT__run_case__2__sh));
        VL_STOP_MT("tb/tb_gvu_vector_shift.sv", 23, "", false);
    }
    VL_WRITEF_NX("[SHIFT][TC%0d] PASS\nPASS: tb_gvu_vector_shift (3 testcases)\n",1
                 , '~',32,__Vtask_tb_gvu_vector_shift__DOT__run_case__2__test_id);
    VL_FINISH_MT("tb/tb_gvu_vector_shift.sv", 32, "");
    co_return;
}

void Vtb_gvu_vector_shift___024root___eval_triggers_vec__act(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_triggers_vec__act\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_gvu_vector_shift___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___trigger_anySet__act\n"); );
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

void Vtb_gvu_vector_shift___024root___act_sequent__TOP__0(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___act_sequent__TOP__0\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_gvu_vector_shift__DOT__dut__DOT__width_bits;
    tb_gvu_vector_shift__DOT__dut__DOT__width_bits = 0;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<32>/*1023:0*/ __Vtemp_4;
    VlWide<32>/*1023:0*/ __Vtemp_5;
    VlWide<32>/*1023:0*/ __Vtemp_6;
    VlWide<32>/*1023:0*/ __Vtemp_7;
    VlWide<32>/*1023:0*/ __Vtemp_8;
    VlWide<32>/*1023:0*/ __Vtemp_9;
    VlWide<32>/*1023:0*/ __Vtemp_10;
    VlWide<32>/*1023:0*/ __Vtemp_11;
    VlWide<32>/*1023:0*/ __Vtemp_12;
    VlWide<32>/*1023:0*/ __Vtemp_13;
    VlWide<32>/*1023:0*/ __Vtemp_14;
    VlWide<32>/*1023:0*/ __Vtemp_15;
    VlWide<32>/*1023:0*/ __Vtemp_16;
    VlWide<32>/*1023:0*/ __Vtemp_17;
    VlWide<32>/*1023:0*/ __Vtemp_18;
    VlWide<32>/*1023:0*/ __Vtemp_19;
    VlWide<32>/*1023:0*/ __Vtemp_20;
    VlWide<32>/*1023:0*/ __Vtemp_21;
    VlWide<32>/*1023:0*/ __Vtemp_22;
    VlWide<32>/*1023:0*/ __Vtemp_23;
    VlWide<32>/*1023:0*/ __Vtemp_24;
    VlWide<32>/*1023:0*/ __Vtemp_25;
    VlWide<32>/*1023:0*/ __Vtemp_26;
    VlWide<32>/*1023:0*/ __Vtemp_27;
    VlWide<32>/*1023:0*/ __Vtemp_28;
    VlWide<32>/*1023:0*/ __Vtemp_29;
    VlWide<32>/*1023:0*/ __Vtemp_30;
    VlWide<32>/*1023:0*/ __Vtemp_31;
    // Body
    vlSelfRef.tb_gvu_vector_shift__DOT__rsp_error = 
        (3U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__format));
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_shift__DOT__y, Vtb_gvu_vector_shift__ConstPool__CONST_hd6b7ba52_0);
    tb_gvu_vector_shift__DOT__dut__DOT__width_bits 
        = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__format))
            ? 8U : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__format))
                     ? 0x00000010U : 0x00000020U));
    if ((1U & (~ (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__rsp_error)))) {
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = vlSelfRef.tb_gvu_vector_shift__DOT__a[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_1, vlSelfRef.tb_gvu_vector_shift__DOT__a, tb_gvu_vector_shift__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] = 
            ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)
              ? ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                 | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                    ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                        ? VL_SHIFTR_III(8,8,6, 
                                                        (0x000000ffU 
                                                         & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                        : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))))
              : ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)
                  ? ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                     | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                            ? VL_SHIFTR_III(16,16,6, 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))))
                  : ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                      ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                          ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                          : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_1[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_2, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_2[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_3, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_3[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_4, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[0U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[0U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_4[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_5, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_5[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_6, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_6[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_7, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_7[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_8, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[1U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[1U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_8[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_9, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_9[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_10, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_10[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_11, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_11[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_12, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[2U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[2U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_12[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_13, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_13[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_14, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_14[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_15, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_15[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_16, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[3U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[3U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_16[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_17, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[8U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[16U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_17[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_18, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[8U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[8U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[17U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_18[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_19, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[9U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[18U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_19[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_20, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[4U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[4U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[9U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[9U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[19U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_20[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_21, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[10U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[20U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_21[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_22, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[10U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[10U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[21U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_22[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_23, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[11U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[22U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_23[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_24, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[5U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[5U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[11U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[11U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[23U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_24[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_25, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[12U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[24U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_25[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_26, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[12U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[12U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[25U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_26[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_27, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[13U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[26U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_27[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_28, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[6U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[6U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[13U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[13U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[27U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_28[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_29, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (0x000000ffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(8,8,6, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[14U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[28U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_29[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_30, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (0x0000ff00U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[14U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[14U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[29U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_30[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_31, vlSelfRef.tb_gvu_vector_shift__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (0x00ff0000U & (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                       ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                       : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                           ? VL_SHIFTR_III(8,8,6, 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                           : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_shift__DOT__y[15U]) 
                   | (0x0000ffffU & ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                      ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                      : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                                          ? VL_SHIFTR_III(16,16,6, 
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                                          : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))))));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[30U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a 
            = __Vtemp_31[0U];
        vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_shift__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_shift__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[7U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[7U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(8,8,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(8,8,6, 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(8,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_shift__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[15U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_shift__DOT__y[15U]) 
                   | (((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTL_III(16,16,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                            ? VL_SHIFTR_III(16,16,6, 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a), (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                            : VL_SHIFTRS_III(16,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount)))) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_shift__DOT__y[31U] 
                = ((0U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                    ? VL_SHIFTL_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                    : ((1U == (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__op))
                        ? VL_SHIFTR_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))
                        : VL_SHIFTRS_III(32,32,6, vlSelfRef.tb_gvu_vector_shift__DOT__dut__DOT__signed_lane_a, (IData)(vlSelfRef.tb_gvu_vector_shift__DOT__amount))));
        }
    }
}

void Vtb_gvu_vector_shift___024root___eval_act(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_act\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_gvu_vector_shift___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_shift___024root___eval_nba(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_nba\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gvu_vector_shift___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_shift___024root___timing_resume(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___timing_resume\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gvu_vector_shift___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_gvu_vector_shift___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_gvu_vector_shift___024root___eval_phase__act(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_phase__act\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gvu_vector_shift___024root___eval_triggers_vec__act(vlSelf);
    Vtb_gvu_vector_shift___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gvu_vector_shift___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_gvu_vector_shift___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_gvu_vector_shift___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_gvu_vector_shift___024root___timing_resume(vlSelf);
        Vtb_gvu_vector_shift___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gvu_vector_shift___024root___eval_phase__inact(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_phase__inact\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_gvu_vector_shift.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_gvu_vector_shift___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gvu_vector_shift___024root___eval_phase__nba(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_phase__nba\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_gvu_vector_shift___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_gvu_vector_shift___024root___eval_nba(vlSelf);
        Vtb_gvu_vector_shift___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_gvu_vector_shift___024root___eval(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gvu_vector_shift___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_gvu_vector_shift.sv", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_gvu_vector_shift.sv", 2, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_gvu_vector_shift___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_gvu_vector_shift.sv", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_gvu_vector_shift___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_gvu_vector_shift___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_gvu_vector_shift___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_gvu_vector_shift___024root___eval_debug_assertions(Vtb_gvu_vector_shift___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_shift___024root___eval_debug_assertions\n"); );
    Vtb_gvu_vector_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
