// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_vector_addsub.h for the primary calling header

#include "Vtb_gvu_vector_addsub__pch.h"

VlCoroutine Vtb_gvu_vector_addsub___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_addsub___024root* vlSelf);

void Vtb_gvu_vector_addsub___024root___eval_initial(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_initial\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gvu_vector_addsub___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

extern const VlWide<32>/*1023:0*/ Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine Vtb_gvu_vector_addsub___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_gvu_vector_addsub__DOT__req_valid;
    tb_gvu_vector_addsub__DOT__req_valid = 0;
    VlWide<32>/*1023:0*/ tb_gvu_vector_addsub__DOT__expected;
    VL_ZERO_W(1024, tb_gvu_vector_addsub__DOT__expected);
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__f;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__f = 0;
    CData/*0:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__w;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f = 0;
    CData/*0:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id = 0;
    CData/*1:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f = 0;
    CData/*0:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add = 0;
    IData/*31:0*/ __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w = 0;
    // Body
    tb_gvu_vector_addsub__DOT__req_valid = 1U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add = 1U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__f = 0U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id = 1U;
    vlSelfRef.tb_gvu_vector_addsub__DOT__format = 0U;
    vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub = 1U;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__a, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__b, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_addsub__DOT__expected, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__w = 8U;
    vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] = (0xffffff00U 
                                                  & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
    vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] = (0xffffff00U 
                                                  & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
    tb_gvu_vector_addsub__DOT__expected[0U] = (0xffffff00U 
                                               & tb_gvu_vector_addsub__DOT__expected[0U]);
    vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] = (0x0000ff00U 
                                                  | vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
    vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] = (0x00000100U 
                                                  | (0xffff00ffU 
                                                     & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
    tb_gvu_vector_addsub__DOT__expected[0U] = ((0xffff00ffU 
                                                & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                               | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                    ? 0U
                                                    : 0xfeU) 
                                                  << 8U));
    if ((8U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00ff0000U | vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xffU
                                                        : 1U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0x06000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x18000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x1eU
                                                        : 0xeeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x26U
                                                       : 0xe8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00000800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00002600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x2eU
                                                        : 0xe2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00090000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x002d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x36U
                                                        : 0xdcU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x0a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x34000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x3eU
                                                        : 0xd6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x3bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x46U
                                                       : 0xd0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x00000c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00004200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x4eU
                                                        : 0xcaU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x000d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00490000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x56U
                                                        : 0xc4U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x50000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x5eU
                                                        : 0xbeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x57U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x66U
                                                       : 0xb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00001000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00005e00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x6eU
                                                        : 0xb2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00110000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00650000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x76U
                                                        : 0xacU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x12000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x6c000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x7eU
                                                        : 0xa6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x13U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x73U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x86U
                                                       : 0xa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00001400U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00007a00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x8eU
                                                        : 0x9aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00150000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00810000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x96U
                                                        : 0x94U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x16000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x88000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x9eU
                                                        : 0x8eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x17U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x8fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0xa6U
                                                       : 0x88U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00001800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00009600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xaeU
                                                        : 0x82U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00190000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x009d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xb6U
                                                        : 0x7cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x1a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0xa4000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xbeU
                                                        : 0x76U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xabU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0xc6U
                                                       : 0x70U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x00001c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0000b200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xceU
                                                        : 0x6aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x001d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x00b90000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xd6U
                                                        : 0x64U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xc0000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xdeU
                                                        : 0x5eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xc7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0xe6U
                                                       : 0x58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00002000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0000ce00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xeeU
                                                        : 0x52U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00210000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x00d50000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xf6U
                                                        : 0x4cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x22000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xdc000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0xfeU
                                                        : 0x46U) 
                                                      << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__0__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0xffffU | vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]);
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0xffffU
                                                       : 1U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x03060000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x031eU
                                                        : 0x02eeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0407U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x001fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0426U
                                                       : 0x03e8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x05080000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00260000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x052eU
                                                        : 0x04e2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0609U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x002dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0636U
                                                       : 0x05dcU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x070a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00340000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x073eU
                                                        : 0x06d6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x080bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x003bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0846U
                                                       : 0x07d0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x090c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00420000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x094eU
                                                        : 0x08caU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0a0dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x0049U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0a56U
                                                       : 0x09c4U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0b0e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00500000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x0b5eU
                                                        : 0x0abeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0c0fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0057U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0c66U
                                                       : 0x0bb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0d100000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x005e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x0d6eU
                                                        : 0x0cb2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0e11U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0065U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x0e76U
                                                       : 0x0dacU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0f120000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x006c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x0f7eU
                                                        : 0x0ea6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x1013U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x0073U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x1086U
                                                       : 0x0fa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x11140000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x007a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x118eU
                                                        : 0x109aU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x1215U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x0081U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                       ? 0x1296U
                                                       : 0x1194U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x13160000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x00880000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                                                        ? 0x139eU
                                                        : 0x128eU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x1417U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x008fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x14a6U : 0x1388U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x15180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x00960000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x15aeU : 0x1482U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x1619U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x009dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x16b6U : 0x157cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x171a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x00a40000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x17beU : 0x1676U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x181bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00abU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x18c6U : 0x1770U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x191c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00b20000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x19ceU : 0x186aU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1a1dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00b9U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x1ad6U : 0x1964U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1b1e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00c00000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x1bdeU : 0x1a5eU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1c1fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00c7U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x1ce6U : 0x1b58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1d200000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00ce0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x1deeU : 0x1c52U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1e21U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00d5U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                 ? 0x1ef6U : 0x1d4cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1f220000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00dc0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                  ? 0x1ffeU : 0x1e46U) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] = 0x80000000U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] = 0xffffffffU;
        if (__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add) {
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x7fffffffU;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x8304031eU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x84050426U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x8506052eU;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x86070636U;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x8708073eU;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x88090846U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a094eU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b0a56U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0b5eU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0c66U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0d6eU;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0e76U;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100f7eU;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90111086U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112118eU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131296U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314139eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x941514a6U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x951615aeU;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x961716b6U;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x971817beU;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x981918c6U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a19ceU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1ad6U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1bdeU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1ce6U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1deeU;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1ef6U;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201ffeU;
        } else {
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x80000001U;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x830402eeU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x840503e8U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x850604e2U;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x860705dcU;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x870806d6U;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x880907d0U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a08caU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b09c4U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0abeU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0bb8U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0cb2U;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0dacU;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100ea6U;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90110fa0U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112109aU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131194U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314128eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x94151388U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x95161482U;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x9617157cU;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x97181676U;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x98191770U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a186aU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1964U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1a5eU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1b58U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1c52U;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1d4cU;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201e46U;
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] = 0x83040306U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] = 0x00000018U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] = 0x84050407U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] = 0x0000001fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] = 0x85060508U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] = 0x00000026U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] = 0x86070609U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] = 0x0000002dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] = 0x8708070aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] = 0x00000034U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] = 0x8809080bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] = 0x0000003bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] = 0x890a090cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] = 0x00000042U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] = 0x8a0b0a0dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] = 0x00000049U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] = 0x8b0c0b0eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] = 0x00000050U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] = 0x8c0d0c0fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] = 0x00000057U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] = 0x8d0e0d10U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] = 0x0000005eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] = 0x8e0f0e11U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] = 0x00000065U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] = 0x8f100f12U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] = 0x0000006cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[16U] = 0x90111013U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[16U] = 0x00000073U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[17U] = 0x91121114U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[17U] = 0x0000007aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[18U] = 0x92131215U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[18U] = 0x00000081U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[19U] = 0x93141316U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[19U] = 0x00000088U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[20U] = 0x94151417U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[20U] = 0x0000008fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[21U] = 0x95161518U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[21U] = 0x00000096U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[22U] = 0x96171619U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[22U] = 0x0000009dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[23U] = 0x9718171aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[23U] = 0x000000a4U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[24U] = 0x9819181bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[24U] = 0x000000abU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[25U] = 0x991a191cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[25U] = 0x000000b2U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[26U] = 0x9a1b1a1dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[26U] = 0x000000b9U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[27U] = 0x9b1c1b1eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[27U] = 0x000000c0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[28U] = 0x9c1d1c1fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[28U] = 0x000000c7U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[29U] = 0x9d1e1d20U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[29U] = 0x000000ceU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[30U] = 0x9e1f1e21U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[30U] = 0x000000d5U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[31U] = 0x9f201f22U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[31U] = 0x000000dcU;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_addsub.sv", 
                                         22);
    VL_WRITEF_NX("[ADD_SUB][TC%0d] format=%0d operation=%s\n[ADD_SUB][TC%0d] GOLDEN_RESULT = %h\n[ADD_SUB][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__f)
                 , '#',24,((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add)
                            ? 0x00414444U : 0x00535542U)
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id
                 , '#',1024,tb_gvu_vector_addsub__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_addsub__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_addsub__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_addsub__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_addsub__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_addsub__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_addsub__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_addsub__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_addsub__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                                                                ^ tb_gvu_vector_addsub__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                                                               ^ tb_gvu_vector_addsub__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                                                              ^ tb_gvu_vector_addsub__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                                                             ^ tb_gvu_vector_addsub__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                                                            ^ tb_gvu_vector_addsub__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                                                           ^ tb_gvu_vector_addsub__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                                                          ^ tb_gvu_vector_addsub__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                                                         ^ tb_gvu_vector_addsub__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[16U] 
                                                        ^ tb_gvu_vector_addsub__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[17U] 
                                                       ^ tb_gvu_vector_addsub__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[18U] 
                                                      ^ tb_gvu_vector_addsub__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[19U] 
                                                     ^ tb_gvu_vector_addsub__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[20U] 
                                                    ^ tb_gvu_vector_addsub__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[21U] 
                                                   ^ tb_gvu_vector_addsub__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[22U] 
                                                  ^ tb_gvu_vector_addsub__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[23U] 
                                                 ^ tb_gvu_vector_addsub__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[24U] 
                                                ^ tb_gvu_vector_addsub__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[25U] 
                                               ^ tb_gvu_vector_addsub__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[26U] 
                                              ^ tb_gvu_vector_addsub__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[27U] 
                                             ^ tb_gvu_vector_addsub__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[28U] 
                                            ^ tb_gvu_vector_addsub__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[29U] 
                                           ^ tb_gvu_vector_addsub__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[30U] 
                                          ^ tb_gvu_vector_addsub__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[31U] 
                                         ^ tb_gvu_vector_addsub__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_addsub.sv:26: Assertion failed in %m: addsub mismatch f=%0d add=%0d\n",5, 'M',vlSymsp->name(),"tb_gvu_vector_addsub.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__f)
                     , '#',1,__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__do_add);
        VL_STOP_MT("tb/tb_gvu_vector_addsub.sv", 26, "", false);
    }
    VL_WRITEF_NX("[ADD_SUB][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__0__test_id);
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add = 0U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f = 1U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id = 2U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w = 0;
    vlSelfRef.tb_gvu_vector_addsub__DOT__format = __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f;
    vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub 
        = __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__a, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__b, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_addsub__DOT__expected, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w 
        = ((0U == (IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f))
            ? 8U : ((1U == (IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f))
                     ? 0x00000010U : 0x00000020U));
    if ((8U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (0xffffff00U 
                                                   & tb_gvu_vector_addsub__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0x0000ff00U | vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00000100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0U
                                                        : 0xfeU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00ff0000U | vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xffU
                                                        : 1U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0x06000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x18000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x1eU
                                                        : 0xeeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x26U
                                                       : 0xe8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00000800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00002600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x2eU
                                                        : 0xe2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00090000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x002d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x36U
                                                        : 0xdcU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x0a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x34000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x3eU
                                                        : 0xd6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x3bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x46U
                                                       : 0xd0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x00000c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00004200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x4eU
                                                        : 0xcaU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x000d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00490000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x56U
                                                        : 0xc4U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x50000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x5eU
                                                        : 0xbeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x57U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x66U
                                                       : 0xb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00001000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00005e00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x6eU
                                                        : 0xb2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00110000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00650000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x76U
                                                        : 0xacU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x12000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x6c000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x7eU
                                                        : 0xa6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x13U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x73U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x86U
                                                       : 0xa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00001400U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00007a00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x8eU
                                                        : 0x9aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00150000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00810000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x96U
                                                        : 0x94U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x16000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x88000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x9eU
                                                        : 0x8eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x17U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x8fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0xa6U
                                                       : 0x88U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00001800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00009600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xaeU
                                                        : 0x82U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00190000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x009d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xb6U
                                                        : 0x7cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x1a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0xa4000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xbeU
                                                        : 0x76U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xabU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0xc6U
                                                       : 0x70U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x00001c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0000b200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xceU
                                                        : 0x6aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x001d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x00b90000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xd6U
                                                        : 0x64U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xc0000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xdeU
                                                        : 0x5eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xc7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0xe6U
                                                       : 0x58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00002000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0000ce00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xeeU
                                                        : 0x52U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00210000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x00d50000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xf6U
                                                        : 0x4cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x22000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xdc000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0xfeU
                                                        : 0x46U) 
                                                      << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__1__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (0xffff0000U 
                                                   & tb_gvu_vector_addsub__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffff0000U | vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00010000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0U
                                                        : 0xfffeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0xffffU | vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]);
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0xffffU
                                                       : 1U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x03060000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x031eU
                                                        : 0x02eeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0407U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x001fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0426U
                                                       : 0x03e8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x05080000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00260000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x052eU
                                                        : 0x04e2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0609U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x002dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0636U
                                                       : 0x05dcU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x070a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00340000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x073eU
                                                        : 0x06d6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x080bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x003bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0846U
                                                       : 0x07d0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x090c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00420000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x094eU
                                                        : 0x08caU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0a0dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x0049U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0a56U
                                                       : 0x09c4U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0b0e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00500000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x0b5eU
                                                        : 0x0abeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0c0fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0057U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0c66U
                                                       : 0x0bb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0d100000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x005e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x0d6eU
                                                        : 0x0cb2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0e11U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0065U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x0e76U
                                                       : 0x0dacU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0f120000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x006c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x0f7eU
                                                        : 0x0ea6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x1013U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x0073U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x1086U
                                                       : 0x0fa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x11140000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x007a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x118eU
                                                        : 0x109aU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x1215U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x0081U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                       ? 0x1296U
                                                       : 0x1194U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x13160000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x00880000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                                                        ? 0x139eU
                                                        : 0x128eU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x1417U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x008fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x14a6U : 0x1388U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x15180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x00960000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x15aeU : 0x1482U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x1619U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x009dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x16b6U : 0x157cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x171a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x00a40000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x17beU : 0x1676U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x181bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00abU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x18c6U : 0x1770U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x191c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00b20000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x19ceU : 0x186aU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1a1dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00b9U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x1ad6U : 0x1964U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1b1e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00c00000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x1bdeU : 0x1a5eU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1c1fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00c7U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x1ce6U : 0x1b58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1d200000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00ce0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x1deeU : 0x1c52U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1e21U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00d5U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                 ? 0x1ef6U : 0x1d4cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1f220000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00dc0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                  ? 0x1ffeU : 0x1e46U) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] = 0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] = 0U;
        tb_gvu_vector_addsub__DOT__expected[0U] = 0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] = 0x7fffffffU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] = 1U;
        if (__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add) {
            tb_gvu_vector_addsub__DOT__expected[1U] = 0x80000000U;
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x7fffffffU;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x8304031eU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x84050426U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x8506052eU;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x86070636U;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x8708073eU;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x88090846U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a094eU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b0a56U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0b5eU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0c66U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0d6eU;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0e76U;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100f7eU;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90111086U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112118eU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131296U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314139eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x941514a6U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x951615aeU;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x961716b6U;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x971817beU;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x981918c6U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a19ceU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1ad6U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1bdeU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1ce6U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1deeU;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1ef6U;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201ffeU;
        } else {
            tb_gvu_vector_addsub__DOT__expected[1U] = 0x7ffffffeU;
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x80000001U;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x830402eeU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x840503e8U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x850604e2U;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x860705dcU;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x870806d6U;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x880907d0U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a08caU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b09c4U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0abeU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0bb8U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0cb2U;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0dacU;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100ea6U;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90110fa0U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112109aU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131194U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314128eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x94151388U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x95161482U;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x9617157cU;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x97181676U;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x98191770U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a186aU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1964U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1a5eU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1b58U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1c52U;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1d4cU;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201e46U;
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] = 0x80000000U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] = 0xffffffffU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] = 0x83040306U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] = 0x00000018U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] = 0x84050407U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] = 0x0000001fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] = 0x85060508U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] = 0x00000026U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] = 0x86070609U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] = 0x0000002dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] = 0x8708070aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] = 0x00000034U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] = 0x8809080bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] = 0x0000003bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] = 0x890a090cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] = 0x00000042U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] = 0x8a0b0a0dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] = 0x00000049U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] = 0x8b0c0b0eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] = 0x00000050U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] = 0x8c0d0c0fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] = 0x00000057U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] = 0x8d0e0d10U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] = 0x0000005eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] = 0x8e0f0e11U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] = 0x00000065U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] = 0x8f100f12U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] = 0x0000006cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[16U] = 0x90111013U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[16U] = 0x00000073U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[17U] = 0x91121114U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[17U] = 0x0000007aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[18U] = 0x92131215U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[18U] = 0x00000081U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[19U] = 0x93141316U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[19U] = 0x00000088U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[20U] = 0x94151417U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[20U] = 0x0000008fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[21U] = 0x95161518U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[21U] = 0x00000096U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[22U] = 0x96171619U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[22U] = 0x0000009dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[23U] = 0x9718171aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[23U] = 0x000000a4U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[24U] = 0x9819181bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[24U] = 0x000000abU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[25U] = 0x991a191cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[25U] = 0x000000b2U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[26U] = 0x9a1b1a1dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[26U] = 0x000000b9U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[27U] = 0x9b1c1b1eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[27U] = 0x000000c0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[28U] = 0x9c1d1c1fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[28U] = 0x000000c7U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[29U] = 0x9d1e1d20U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[29U] = 0x000000ceU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[30U] = 0x9e1f1e21U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[30U] = 0x000000d5U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[31U] = 0x9f201f22U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[31U] = 0x000000dcU;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_addsub.sv", 
                                         22);
    VL_WRITEF_NX("[ADD_SUB][TC%0d] format=%0d operation=%s\n[ADD_SUB][TC%0d] GOLDEN_RESULT = %h\n[ADD_SUB][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f)
                 , '#',24,((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add)
                            ? 0x00414444U : 0x00535542U)
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id
                 , '#',1024,tb_gvu_vector_addsub__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_addsub__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_addsub__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_addsub__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_addsub__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_addsub__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_addsub__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_addsub__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_addsub__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                                                                ^ tb_gvu_vector_addsub__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                                                               ^ tb_gvu_vector_addsub__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                                                              ^ tb_gvu_vector_addsub__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                                                             ^ tb_gvu_vector_addsub__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                                                            ^ tb_gvu_vector_addsub__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                                                           ^ tb_gvu_vector_addsub__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                                                          ^ tb_gvu_vector_addsub__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                                                         ^ tb_gvu_vector_addsub__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[16U] 
                                                        ^ tb_gvu_vector_addsub__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[17U] 
                                                       ^ tb_gvu_vector_addsub__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[18U] 
                                                      ^ tb_gvu_vector_addsub__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[19U] 
                                                     ^ tb_gvu_vector_addsub__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[20U] 
                                                    ^ tb_gvu_vector_addsub__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[21U] 
                                                   ^ tb_gvu_vector_addsub__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[22U] 
                                                  ^ tb_gvu_vector_addsub__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[23U] 
                                                 ^ tb_gvu_vector_addsub__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[24U] 
                                                ^ tb_gvu_vector_addsub__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[25U] 
                                               ^ tb_gvu_vector_addsub__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[26U] 
                                              ^ tb_gvu_vector_addsub__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[27U] 
                                             ^ tb_gvu_vector_addsub__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[28U] 
                                            ^ tb_gvu_vector_addsub__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[29U] 
                                           ^ tb_gvu_vector_addsub__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[30U] 
                                          ^ tb_gvu_vector_addsub__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[31U] 
                                         ^ tb_gvu_vector_addsub__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_addsub.sv:26: Assertion failed in %m: addsub mismatch f=%0d add=%0d\n",5, 'M',vlSymsp->name(),"tb_gvu_vector_addsub.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__f)
                     , '#',1,__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__do_add);
        VL_STOP_MT("tb/tb_gvu_vector_addsub.sv", 26, "", false);
    }
    VL_WRITEF_NX("[ADD_SUB][TC%0d] PASS\n",1, '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__1__test_id);
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add = 1U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f = 2U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id = 3U;
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w = 0;
    vlSelfRef.tb_gvu_vector_addsub__DOT__format = __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f;
    vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub 
        = __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add;
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__a, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__b, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(1024, tb_gvu_vector_addsub__DOT__expected, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w 
        = ((0U == (IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f))
            ? 8U : ((1U == (IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f))
                     ? 0x00000010U : 0x00000020U));
    if ((8U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (0xffffff00U 
                                                   & tb_gvu_vector_addsub__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0x0000ff00U | vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00000100U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0U
                                                        : 0xfeU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00ff0000U | vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xffU
                                                        : 1U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0x06000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x18000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x1eU
                                                        : 0xeeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x26U
                                                       : 0xe8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00000800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00002600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x2eU
                                                        : 0xe2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x00090000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x002d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x36U
                                                        : 0xdcU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x0a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x34000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x3eU
                                                        : 0xd6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x3bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x46U
                                                       : 0xd0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x00000c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00004200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x4eU
                                                        : 0xcaU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x000d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00490000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x56U
                                                        : 0xc4U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x50000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x5eU
                                                        : 0xbeU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x57U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x66U
                                                       : 0xb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00001000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00005e00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x6eU
                                                        : 0xb2U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x00110000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00650000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x76U
                                                        : 0xacU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x12000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x6c000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x7eU
                                                        : 0xa6U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x13U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x73U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x86U
                                                       : 0xa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00001400U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00007a00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x8eU
                                                        : 0x9aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x00150000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00810000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x96U
                                                        : 0x94U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x16000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x88000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x9eU
                                                        : 0x8eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x17U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x8fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0xa6U
                                                       : 0x88U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00001800U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00009600U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xaeU
                                                        : 0x82U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x00190000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x009d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xb6U
                                                        : 0x7cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x1a000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0xa4000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xbeU
                                                        : 0x76U) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1bU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xabU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0xc6U
                                                       : 0x70U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x00001c00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0000b200U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xceU
                                                        : 0x6aU) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x001d0000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x00b90000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xd6U
                                                        : 0x64U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x1e000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0xc0000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xdeU
                                                        : 0x5eU) 
                                                      << 0x00000018U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x1fU | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xc7U | (0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffffff00U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0xe6U
                                                       : 0x58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00002000U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0000ce00U | (0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff00ffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xeeU
                                                        : 0x52U) 
                                                      << 8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x00210000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x00d50000U | (0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xff00ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xf6U
                                                        : 0x4cU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x22000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0xdc000000U | (0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x00ffffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0xfeU
                                                        : 0x46U) 
                                                      << 0x00000018U));
    } else if ((0x00000010U == __Vtask_tb_gvu_vector_addsub__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]);
        tb_gvu_vector_addsub__DOT__expected[0U] = (0xffff0000U 
                                                   & tb_gvu_vector_addsub__DOT__expected[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] 
            = (0xffff0000U | vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] 
            = (0x00010000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U]));
        tb_gvu_vector_addsub__DOT__expected[0U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0U
                                                        : 0xfffeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]);
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0xffffU | vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]);
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0xffffU
                                                       : 1U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] 
            = (0x03060000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] 
            = (0x00180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U]));
        tb_gvu_vector_addsub__DOT__expected[1U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[1U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x031eU
                                                        : 0x02eeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x0407U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x001fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0426U
                                                       : 0x03e8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] 
            = (0x05080000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] 
            = (0x00260000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U]));
        tb_gvu_vector_addsub__DOT__expected[2U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[2U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x052eU
                                                        : 0x04e2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x0609U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x002dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0636U
                                                       : 0x05dcU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] 
            = (0x070a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] 
            = (0x00340000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U]));
        tb_gvu_vector_addsub__DOT__expected[3U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[3U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x073eU
                                                        : 0x06d6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x080bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x003bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0846U
                                                       : 0x07d0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] 
            = (0x090c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] 
            = (0x00420000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U]));
        tb_gvu_vector_addsub__DOT__expected[4U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[4U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x094eU
                                                        : 0x08caU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0a0dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x0049U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0a56U
                                                       : 0x09c4U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] 
            = (0x0b0e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] 
            = (0x00500000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U]));
        tb_gvu_vector_addsub__DOT__expected[5U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[5U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x0b5eU
                                                        : 0x0abeU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0c0fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x0057U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0c66U
                                                       : 0x0bb8U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] 
            = (0x0d100000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] 
            = (0x005e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U]));
        tb_gvu_vector_addsub__DOT__expected[6U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[6U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x0d6eU
                                                        : 0x0cb2U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0e11U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x0065U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x0e76U
                                                       : 0x0dacU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] 
            = (0x0f120000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] 
            = (0x006c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U]));
        tb_gvu_vector_addsub__DOT__expected[7U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[7U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x0f7eU
                                                        : 0x0ea6U) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x1013U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x0073U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x1086U
                                                       : 0x0fa0U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] 
            = (0x11140000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] 
            = (0x007a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U]));
        tb_gvu_vector_addsub__DOT__expected[8U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[8U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x118eU
                                                        : 0x109aU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x1215U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x0081U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0xffff0000U 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                       ? 0x1296U
                                                       : 0x1194U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] 
            = (0x13160000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] 
            = (0x00880000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U]));
        tb_gvu_vector_addsub__DOT__expected[9U] = (
                                                   (0x0000ffffU 
                                                    & tb_gvu_vector_addsub__DOT__expected[9U]) 
                                                   | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                                                        ? 0x139eU
                                                        : 0x128eU) 
                                                      << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x1417U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x008fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x14a6U : 0x1388U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] 
            = (0x15180000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] 
            = (0x00960000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U]));
        tb_gvu_vector_addsub__DOT__expected[10U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[10U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x15aeU : 0x1482U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x1619U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x009dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x16b6U : 0x157cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] 
            = (0x171a0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] 
            = (0x00a40000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U]));
        tb_gvu_vector_addsub__DOT__expected[11U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[11U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x17beU : 0x1676U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x181bU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00abU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x18c6U : 0x1770U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] 
            = (0x191c0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] 
            = (0x00b20000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U]));
        tb_gvu_vector_addsub__DOT__expected[12U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[12U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x19ceU : 0x186aU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1a1dU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00b9U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x1ad6U : 0x1964U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] 
            = (0x1b1e0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] 
            = (0x00c00000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U]));
        tb_gvu_vector_addsub__DOT__expected[13U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[13U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x1bdeU : 0x1a5eU) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1c1fU | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00c7U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x1ce6U : 0x1b58U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] 
            = (0x1d200000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] 
            = (0x00ce0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U]));
        tb_gvu_vector_addsub__DOT__expected[14U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[14U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x1deeU : 0x1c52U) << 0x00000010U));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1e21U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00d5U | (0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0xffff0000U & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | ((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                 ? 0x1ef6U : 0x1d4cU));
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] 
            = (0x1f220000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U]));
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] 
            = (0x00dc0000U | (0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U]));
        tb_gvu_vector_addsub__DOT__expected[15U] = 
            ((0x0000ffffU & tb_gvu_vector_addsub__DOT__expected[15U]) 
             | (((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                  ? 0x1ffeU : 0x1e46U) << 0x00000010U));
    } else {
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U] = 0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U] = 0U;
        tb_gvu_vector_addsub__DOT__expected[0U] = 0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[1U] = 0x7fffffffU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[1U] = 1U;
        if (__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add) {
            tb_gvu_vector_addsub__DOT__expected[1U] = 0x80000000U;
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x7fffffffU;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x8304031eU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x84050426U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x8506052eU;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x86070636U;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x8708073eU;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x88090846U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a094eU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b0a56U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0b5eU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0c66U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0d6eU;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0e76U;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100f7eU;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90111086U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112118eU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131296U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314139eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x941514a6U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x951615aeU;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x961716b6U;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x971817beU;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x981918c6U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a19ceU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1ad6U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1bdeU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1ce6U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1deeU;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1ef6U;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201ffeU;
        } else {
            tb_gvu_vector_addsub__DOT__expected[1U] = 0x7ffffffeU;
            tb_gvu_vector_addsub__DOT__expected[2U] = 0x80000001U;
            tb_gvu_vector_addsub__DOT__expected[3U] = 0x830402eeU;
            tb_gvu_vector_addsub__DOT__expected[4U] = 0x840503e8U;
            tb_gvu_vector_addsub__DOT__expected[5U] = 0x850604e2U;
            tb_gvu_vector_addsub__DOT__expected[6U] = 0x860705dcU;
            tb_gvu_vector_addsub__DOT__expected[7U] = 0x870806d6U;
            tb_gvu_vector_addsub__DOT__expected[8U] = 0x880907d0U;
            tb_gvu_vector_addsub__DOT__expected[9U] = 0x890a08caU;
            tb_gvu_vector_addsub__DOT__expected[10U] = 0x8a0b09c4U;
            tb_gvu_vector_addsub__DOT__expected[11U] = 0x8b0c0abeU;
            tb_gvu_vector_addsub__DOT__expected[12U] = 0x8c0d0bb8U;
            tb_gvu_vector_addsub__DOT__expected[13U] = 0x8d0e0cb2U;
            tb_gvu_vector_addsub__DOT__expected[14U] = 0x8e0f0dacU;
            tb_gvu_vector_addsub__DOT__expected[15U] = 0x8f100ea6U;
            tb_gvu_vector_addsub__DOT__expected[16U] = 0x90110fa0U;
            tb_gvu_vector_addsub__DOT__expected[17U] = 0x9112109aU;
            tb_gvu_vector_addsub__DOT__expected[18U] = 0x92131194U;
            tb_gvu_vector_addsub__DOT__expected[19U] = 0x9314128eU;
            tb_gvu_vector_addsub__DOT__expected[20U] = 0x94151388U;
            tb_gvu_vector_addsub__DOT__expected[21U] = 0x95161482U;
            tb_gvu_vector_addsub__DOT__expected[22U] = 0x9617157cU;
            tb_gvu_vector_addsub__DOT__expected[23U] = 0x97181676U;
            tb_gvu_vector_addsub__DOT__expected[24U] = 0x98191770U;
            tb_gvu_vector_addsub__DOT__expected[25U] = 0x991a186aU;
            tb_gvu_vector_addsub__DOT__expected[26U] = 0x9a1b1964U;
            tb_gvu_vector_addsub__DOT__expected[27U] = 0x9b1c1a5eU;
            tb_gvu_vector_addsub__DOT__expected[28U] = 0x9c1d1b58U;
            tb_gvu_vector_addsub__DOT__expected[29U] = 0x9d1e1c52U;
            tb_gvu_vector_addsub__DOT__expected[30U] = 0x9e1f1d4cU;
            tb_gvu_vector_addsub__DOT__expected[31U] = 0x9f201e46U;
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[2U] = 0x80000000U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[2U] = 0xffffffffU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[3U] = 0x83040306U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[3U] = 0x00000018U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[4U] = 0x84050407U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[4U] = 0x0000001fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[5U] = 0x85060508U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[5U] = 0x00000026U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[6U] = 0x86070609U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[6U] = 0x0000002dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[7U] = 0x8708070aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[7U] = 0x00000034U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[8U] = 0x8809080bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[8U] = 0x0000003bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[9U] = 0x890a090cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[9U] = 0x00000042U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[10U] = 0x8a0b0a0dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[10U] = 0x00000049U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[11U] = 0x8b0c0b0eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[11U] = 0x00000050U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[12U] = 0x8c0d0c0fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[12U] = 0x00000057U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[13U] = 0x8d0e0d10U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[13U] = 0x0000005eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[14U] = 0x8e0f0e11U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[14U] = 0x00000065U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[15U] = 0x8f100f12U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[15U] = 0x0000006cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[16U] = 0x90111013U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[16U] = 0x00000073U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[17U] = 0x91121114U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[17U] = 0x0000007aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[18U] = 0x92131215U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[18U] = 0x00000081U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[19U] = 0x93141316U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[19U] = 0x00000088U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[20U] = 0x94151417U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[20U] = 0x0000008fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[21U] = 0x95161518U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[21U] = 0x00000096U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[22U] = 0x96171619U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[22U] = 0x0000009dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[23U] = 0x9718171aU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[23U] = 0x000000a4U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[24U] = 0x9819181bU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[24U] = 0x000000abU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[25U] = 0x991a191cU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[25U] = 0x000000b2U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[26U] = 0x9a1b1a1dU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[26U] = 0x000000b9U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[27U] = 0x9b1c1b1eU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[27U] = 0x000000c0U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[28U] = 0x9c1d1c1fU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[28U] = 0x000000c7U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[29U] = 0x9d1e1d20U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[29U] = 0x000000ceU;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[30U] = 0x9e1f1e21U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[30U] = 0x000000d5U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__a[31U] = 0x9f201f22U;
        vlSelfRef.tb_gvu_vector_addsub__DOT__b[31U] = 0x000000dcU;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_addsub.sv", 
                                         22);
    VL_WRITEF_NX("[ADD_SUB][TC%0d] format=%0d operation=%s\n[ADD_SUB][TC%0d] GOLDEN_RESULT = %h\n[ADD_SUB][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id
                 , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f)
                 , '#',24,((IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add)
                            ? 0x00414444U : 0x00535542U)
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id
                 , '#',1024,tb_gvu_vector_addsub__DOT__expected.data()
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_addsub__DOT__y.data());
    if (VL_UNLIKELY(((1U & (((~ (IData)(tb_gvu_vector_addsub__DOT__req_valid)) 
                             | (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__rsp_error)) 
                            | (0U != ((((((((((((((
                                                   ((((((((((((((((((vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[0U]) 
                                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                                                                       ^ tb_gvu_vector_addsub__DOT__expected[1U])) 
                                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                                                                      ^ tb_gvu_vector_addsub__DOT__expected[2U])) 
                                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                                                                     ^ tb_gvu_vector_addsub__DOT__expected[3U])) 
                                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                                                                    ^ tb_gvu_vector_addsub__DOT__expected[4U])) 
                                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                                                                   ^ tb_gvu_vector_addsub__DOT__expected[5U])) 
                                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                                                                  ^ tb_gvu_vector_addsub__DOT__expected[6U])) 
                                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                                                                 ^ tb_gvu_vector_addsub__DOT__expected[7U])) 
                                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                                                                ^ tb_gvu_vector_addsub__DOT__expected[8U])) 
                                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                                                               ^ tb_gvu_vector_addsub__DOT__expected[9U])) 
                                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                                                              ^ tb_gvu_vector_addsub__DOT__expected[10U])) 
                                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                                                             ^ tb_gvu_vector_addsub__DOT__expected[11U])) 
                                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                                                            ^ tb_gvu_vector_addsub__DOT__expected[12U])) 
                                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                                                           ^ tb_gvu_vector_addsub__DOT__expected[13U])) 
                                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                                                          ^ tb_gvu_vector_addsub__DOT__expected[14U])) 
                                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                                                         ^ tb_gvu_vector_addsub__DOT__expected[15U])) 
                                                     | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[16U] 
                                                        ^ tb_gvu_vector_addsub__DOT__expected[16U])) 
                                                    | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[17U] 
                                                       ^ tb_gvu_vector_addsub__DOT__expected[17U])) 
                                                   | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[18U] 
                                                      ^ tb_gvu_vector_addsub__DOT__expected[18U])) 
                                                  | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[19U] 
                                                     ^ tb_gvu_vector_addsub__DOT__expected[19U])) 
                                                 | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[20U] 
                                                    ^ tb_gvu_vector_addsub__DOT__expected[20U])) 
                                                | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[21U] 
                                                   ^ tb_gvu_vector_addsub__DOT__expected[21U])) 
                                               | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[22U] 
                                                  ^ tb_gvu_vector_addsub__DOT__expected[22U])) 
                                              | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[23U] 
                                                 ^ tb_gvu_vector_addsub__DOT__expected[23U])) 
                                             | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[24U] 
                                                ^ tb_gvu_vector_addsub__DOT__expected[24U])) 
                                            | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[25U] 
                                               ^ tb_gvu_vector_addsub__DOT__expected[25U])) 
                                           | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[26U] 
                                              ^ tb_gvu_vector_addsub__DOT__expected[26U])) 
                                          | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[27U] 
                                             ^ tb_gvu_vector_addsub__DOT__expected[27U])) 
                                         | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[28U] 
                                            ^ tb_gvu_vector_addsub__DOT__expected[28U])) 
                                        | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[29U] 
                                           ^ tb_gvu_vector_addsub__DOT__expected[29U])) 
                                       | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[30U] 
                                          ^ tb_gvu_vector_addsub__DOT__expected[30U])) 
                                      | (vlSelfRef.tb_gvu_vector_addsub__DOT__y[31U] 
                                         ^ tb_gvu_vector_addsub__DOT__expected[31U])))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_vector_addsub.sv:26: Assertion failed in %m: addsub mismatch f=%0d add=%0d\n",5, 'M',vlSymsp->name(),"tb_gvu_vector_addsub.run_case", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__f)
                     , '#',1,__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__do_add);
        VL_STOP_MT("tb/tb_gvu_vector_addsub.sv", 26, "", false);
    }
    VL_WRITEF_NX("[ADD_SUB][TC%0d] PASS\nPASS: tb_gvu_vector_addsub (3 testcases)\n",1
                 , '~',32,__Vtask_tb_gvu_vector_addsub__DOT__run_case__2__test_id);
    VL_FINISH_MT("tb/tb_gvu_vector_addsub.sv", 35, "");
    co_return;
}

void Vtb_gvu_vector_addsub___024root___eval_triggers_vec__act(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_triggers_vec__act\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_gvu_vector_addsub___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___trigger_anySet__act\n"); );
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

void Vtb_gvu_vector_addsub___024root___act_sequent__TOP__0(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___act_sequent__TOP__0\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_gvu_vector_addsub__DOT__dut__DOT__width_bits;
    tb_gvu_vector_addsub__DOT__dut__DOT__width_bits = 0;
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
    VlWide<32>/*1023:0*/ __Vtemp_32;
    VlWide<32>/*1023:0*/ __Vtemp_33;
    VlWide<32>/*1023:0*/ __Vtemp_34;
    VlWide<32>/*1023:0*/ __Vtemp_35;
    VlWide<32>/*1023:0*/ __Vtemp_36;
    VlWide<32>/*1023:0*/ __Vtemp_37;
    VlWide<32>/*1023:0*/ __Vtemp_38;
    VlWide<32>/*1023:0*/ __Vtemp_39;
    VlWide<32>/*1023:0*/ __Vtemp_40;
    VlWide<32>/*1023:0*/ __Vtemp_41;
    VlWide<32>/*1023:0*/ __Vtemp_42;
    VlWide<32>/*1023:0*/ __Vtemp_43;
    VlWide<32>/*1023:0*/ __Vtemp_44;
    VlWide<32>/*1023:0*/ __Vtemp_45;
    VlWide<32>/*1023:0*/ __Vtemp_46;
    VlWide<32>/*1023:0*/ __Vtemp_47;
    VlWide<32>/*1023:0*/ __Vtemp_48;
    VlWide<32>/*1023:0*/ __Vtemp_49;
    VlWide<32>/*1023:0*/ __Vtemp_50;
    VlWide<32>/*1023:0*/ __Vtemp_51;
    VlWide<32>/*1023:0*/ __Vtemp_52;
    VlWide<32>/*1023:0*/ __Vtemp_53;
    VlWide<32>/*1023:0*/ __Vtemp_54;
    VlWide<32>/*1023:0*/ __Vtemp_55;
    VlWide<32>/*1023:0*/ __Vtemp_56;
    VlWide<32>/*1023:0*/ __Vtemp_57;
    VlWide<32>/*1023:0*/ __Vtemp_58;
    VlWide<32>/*1023:0*/ __Vtemp_59;
    VlWide<32>/*1023:0*/ __Vtemp_60;
    VlWide<32>/*1023:0*/ __Vtemp_61;
    VlWide<32>/*1023:0*/ __Vtemp_62;
    // Body
    vlSelfRef.tb_gvu_vector_addsub__DOT__rsp_error 
        = (3U == (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__format));
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_addsub__DOT__y, Vtb_gvu_vector_addsub__ConstPool__CONST_hd6b7ba52_0);
    tb_gvu_vector_addsub__DOT__dut__DOT__width_bits 
        = ((0U == (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__format))
            ? 8U : ((1U == (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__format))
                     ? 0x00000010U : 0x00000020U));
    if ((1U & (~ (IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__rsp_error)))) {
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = vlSelfRef.tb_gvu_vector_addsub__DOT__a[0U];
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = vlSelfRef.tb_gvu_vector_addsub__DOT__b[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_1, vlSelfRef.tb_gvu_vector_addsub__DOT__a, tb_gvu_vector_addsub__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
            = ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)
                ? ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))))
                : ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)
                    ? ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                       | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                          ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                             + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                          : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                             - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))))
                    : ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_1[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_2, vlSelfRef.tb_gvu_vector_addsub__DOT__b, tb_gvu_vector_addsub__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_2[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_3, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_3[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_4, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_4[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_5, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_5[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_6, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_6[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_7, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[0U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_7[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_8, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_8[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_9, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_9[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_10, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_10[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_11, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_11[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_12, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_12[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_13, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_13[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_14, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_14[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_15, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[1U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_15[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_16, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_16[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_17, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_17[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_18, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_18[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_19, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_19[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_20, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_20[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_21, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_21[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_22, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_22[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_23, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[2U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_23[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_24, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_24[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_25, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_25[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_26, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_26[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_27, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_27[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_28, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_28[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_29, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_29[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_30, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_30[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_31, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[3U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_31[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_32, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_32[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_33, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[16U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_33[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_34, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_34[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_35, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[8U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[17U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_35[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_36, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_36[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_37, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[18U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_37[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_38, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_38[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_39, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[4U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[9U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[19U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_39[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_40, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_40[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_41, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[20U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_41[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_42, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_42[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_43, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[10U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[21U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_43[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_44, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_44[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_45, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[22U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_45[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_46, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_46[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_47, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[5U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[11U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[23U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_47[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_48, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_48[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_49, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[24U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_49[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_50, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_50[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_51, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[12U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[25U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_51[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_52, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_52[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_53, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[26U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_53[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_54, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_54[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_55, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[6U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[13U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[27U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_55[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_56, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_56[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_57, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (0x000000ffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[28U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_57[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_58, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_58[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_59, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (0x0000ff00U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[14U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[29U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_59[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_60, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_60[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_61, vlSelfRef.tb_gvu_vector_addsub__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (0x00ff0000U & (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                       ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                       : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                          - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U]) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                                      ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                                      : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                                         - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b))));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[30U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
            = __Vtemp_61[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_62, vlSelfRef.tb_gvu_vector_addsub__DOT__b, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_addsub__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b 
            = __Vtemp_62[0U];
        if ((8U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[7U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_addsub__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_addsub__DOT__y[15U]) 
                   | (((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                        ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                        : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                           - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_addsub__DOT__y[31U] 
                = ((IData)(vlSelfRef.tb_gvu_vector_addsub__DOT__add_not_sub)
                    ? (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       + vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b)
                    : (vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_a 
                       - vlSelfRef.tb_gvu_vector_addsub__DOT__dut__DOT__lane_b));
        }
    }
}

void Vtb_gvu_vector_addsub___024root___eval_act(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_act\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_gvu_vector_addsub___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_addsub___024root___eval_nba(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_nba\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gvu_vector_addsub___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_addsub___024root___timing_resume(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___timing_resume\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gvu_vector_addsub___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_gvu_vector_addsub___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_gvu_vector_addsub___024root___eval_phase__act(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_phase__act\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gvu_vector_addsub___024root___eval_triggers_vec__act(vlSelf);
    Vtb_gvu_vector_addsub___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gvu_vector_addsub___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_gvu_vector_addsub___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_gvu_vector_addsub___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_gvu_vector_addsub___024root___timing_resume(vlSelf);
        Vtb_gvu_vector_addsub___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gvu_vector_addsub___024root___eval_phase__inact(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_phase__inact\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_gvu_vector_addsub.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_gvu_vector_addsub___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gvu_vector_addsub___024root___eval_phase__nba(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_phase__nba\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_gvu_vector_addsub___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_gvu_vector_addsub___024root___eval_nba(vlSelf);
        Vtb_gvu_vector_addsub___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_gvu_vector_addsub___024root___eval(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gvu_vector_addsub___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_gvu_vector_addsub.sv", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_gvu_vector_addsub.sv", 2, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_gvu_vector_addsub___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_gvu_vector_addsub.sv", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_gvu_vector_addsub___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_gvu_vector_addsub___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_gvu_vector_addsub___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_gvu_vector_addsub___024root___eval_debug_assertions(Vtb_gvu_vector_addsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_addsub___024root___eval_debug_assertions\n"); );
    Vtb_gvu_vector_addsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
