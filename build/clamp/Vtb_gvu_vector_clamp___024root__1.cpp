// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_vector_clamp.h for the primary calling header

#include "Vtb_gvu_vector_clamp__pch.h"

VlCoroutine Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__1(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                               << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (0x00ff0000U & (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                                 << 0x00000010U)));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
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
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (0x0000ffffU & vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
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
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[30U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[30U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[30U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[30U] 
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
    vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__sh 
        = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h, 
                                                 ((IData)(0x00000020U) 
                                                  - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)), 
                         ((IData)(0x00000020U) - vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w));
    if ((8U == vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__w)) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U] = 
            ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[7U]) 
             | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[7U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[7U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000018U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U] 
            = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[7U]) 
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
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__a[15U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__lo[15U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__hi[15U]) 
               | (vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h 
                  << 0x00000010U));
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U] 
            = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__expected[15U]) 
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
        vlSelfRef.tb_gvu_vector_clamp__DOT__a[31U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__v;
        vlSelfRef.tb_gvu_vector_clamp__DOT__lo[31U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__l;
        vlSelfRef.tb_gvu_vector_clamp__DOT__hi[31U] 
            = vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__h;
        vlSelfRef.tb_gvu_vector_clamp__DOT__expected[31U] 
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
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_vector_clamp.sv", 
                                         19);
    VL_WRITEF_NX("[CLAMP][TC%0d] format=%0d signed_mode=%0d\n[CLAMP][TC%0d] GOLDEN_RESULT = %h\n[CLAMP][TC%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id
                 , '#',2,(IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f)
                 , '#',1,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed
                 , '~',32,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id
                 , '#',1024,vlSelfRef.tb_gvu_vector_clamp__DOT__expected.data()
                 , '~',32,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id
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
                     , '#',2,(IData)(vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__f)
                     , '#',1,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__is_signed);
        VL_STOP_MT("tb/tb_gvu_vector_clamp.sv", 23, "", false);
    }
    VL_WRITEF_NX("[CLAMP][TC%0d] PASS\nPASS: tb_gvu_vector_clamp (3 testcases)\n",1
                 , '~',32,vlSelfRef.__Vtask_tb_gvu_vector_clamp__DOT__run_case__2__test_id);
    VL_FINISH_MT("tb/tb_gvu_vector_clamp.sv", 32, "");
    co_return;
}

void Vtb_gvu_vector_clamp___024root___eval_triggers_vec__act(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_triggers_vec__act\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_gvu_vector_clamp___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___trigger_anySet__act\n"); );
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

extern const VlWide<32>/*1023:0*/ Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0;

void Vtb_gvu_vector_clamp___024root___act_sequent__TOP__0(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___act_sequent__TOP__0\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_gvu_vector_clamp__DOT__dut__DOT__width_bits;
    tb_gvu_vector_clamp__DOT__dut__DOT__width_bits = 0;
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
    VlWide<32>/*1023:0*/ __Vtemp_63;
    VlWide<32>/*1023:0*/ __Vtemp_64;
    VlWide<32>/*1023:0*/ __Vtemp_65;
    VlWide<32>/*1023:0*/ __Vtemp_66;
    VlWide<32>/*1023:0*/ __Vtemp_67;
    VlWide<32>/*1023:0*/ __Vtemp_68;
    VlWide<32>/*1023:0*/ __Vtemp_69;
    VlWide<32>/*1023:0*/ __Vtemp_70;
    VlWide<32>/*1023:0*/ __Vtemp_71;
    VlWide<32>/*1023:0*/ __Vtemp_72;
    VlWide<32>/*1023:0*/ __Vtemp_73;
    VlWide<32>/*1023:0*/ __Vtemp_74;
    VlWide<32>/*1023:0*/ __Vtemp_75;
    VlWide<32>/*1023:0*/ __Vtemp_76;
    VlWide<32>/*1023:0*/ __Vtemp_77;
    VlWide<32>/*1023:0*/ __Vtemp_78;
    VlWide<32>/*1023:0*/ __Vtemp_79;
    VlWide<32>/*1023:0*/ __Vtemp_80;
    VlWide<32>/*1023:0*/ __Vtemp_81;
    VlWide<32>/*1023:0*/ __Vtemp_82;
    VlWide<32>/*1023:0*/ __Vtemp_83;
    VlWide<32>/*1023:0*/ __Vtemp_84;
    VlWide<32>/*1023:0*/ __Vtemp_85;
    VlWide<32>/*1023:0*/ __Vtemp_86;
    VlWide<32>/*1023:0*/ __Vtemp_87;
    VlWide<32>/*1023:0*/ __Vtemp_88;
    VlWide<32>/*1023:0*/ __Vtemp_89;
    VlWide<32>/*1023:0*/ __Vtemp_90;
    VlWide<32>/*1023:0*/ __Vtemp_91;
    VlWide<32>/*1023:0*/ __Vtemp_92;
    VlWide<32>/*1023:0*/ __Vtemp_93;
    // Body
    vlSelfRef.tb_gvu_vector_clamp__DOT__rsp_error = 
        (3U == (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__format));
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_vector_clamp__DOT__y, Vtb_gvu_vector_clamp__ConstPool__CONST_hd6b7ba52_0);
    tb_gvu_vector_clamp__DOT__dut__DOT__width_bits 
        = ((0U == (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__format))
            ? 8U : ((1U == (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__format))
                     ? 0x00000010U : 0x00000020U));
    if ((1U & (~ (IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__rsp_error)))) {
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = vlSelfRef.tb_gvu_vector_clamp__DOT__a[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = vlSelfRef.tb_gvu_vector_clamp__DOT__lo[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = vlSelfRef.tb_gvu_vector_clamp__DOT__hi[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_1, vlSelfRef.tb_gvu_vector_clamp__DOT__a, tb_gvu_vector_clamp__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] = 
            ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)
              ? ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                 | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                     : ((0x000000ffU 
                                         & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                        < (0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                         : ((0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                            > (0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))))
              : ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)
                  ? ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                     | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                         : ((0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                            < (0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                             : ((0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                                > (0x0000ffffU 
                                                   & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))))
                  : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                       : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                          < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                           : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                              > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_1[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_2, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, tb_gvu_vector_clamp__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_2[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_3, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, tb_gvu_vector_clamp__DOT__dut__DOT__width_bits);
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_3[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_4, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_4[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_5, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_5[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_6, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(2U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_6[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_7, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_7[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_8, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_8[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_9, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(3U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_9[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_10, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[0U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_10[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_11, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_11[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_12, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(4U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_12[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_13, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_13[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_14, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_14[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_15, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(5U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_15[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_16, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_16[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_17, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_17[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_18, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(6U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_18[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_19, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_19[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_20, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_20[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_21, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(7U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_21[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_22, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[1U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_22[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_23, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_23[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_24, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(8U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_24[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_25, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_25[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_26, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_26[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_27, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(9U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_27[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_28, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_28[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_29, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_29[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_30, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_30[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_31, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_31[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_32, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_32[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_33, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_33[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_34, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[2U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_34[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_35, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_35[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_36, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_36[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_37, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_37[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_38, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_38[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_39, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_39[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_40, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_40[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_41, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_41[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_42, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_42[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_43, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_43[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_44, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_44[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_45, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000000fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_45[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_46, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[3U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_46[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_47, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_47[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_48, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000010U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_48[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_49, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[16U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_49[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_50, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_50[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_51, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000011U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_51[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_52, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[8U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[17U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_52[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_53, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_53[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_54, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000012U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_54[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_55, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[18U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_55[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_56, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_56[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_57, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000013U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_57[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_58, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[4U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[9U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[19U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_58[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_59, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_59[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_60, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000014U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_60[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_61, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[20U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_61[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_62, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_62[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_63, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000015U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_63[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_64, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[10U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[21U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_64[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_65, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_65[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_66, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000016U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_66[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_67, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[22U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_67[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_68, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_68[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_69, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000017U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_69[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_70, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[5U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[11U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[23U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_70[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_71, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_71[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_72, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000018U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_72[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_73, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[24U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_73[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_74, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_74[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_75, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x00000019U), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_75[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_76, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[12U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[25U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_76[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_77, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_77[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_78, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001aU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_78[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_79, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[26U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_79[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_80, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_80[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_81, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001bU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_81[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_82, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[6U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[13U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[27U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_82[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_83, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_83[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_84, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001cU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_84[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_85, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0xffffff00U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | (0x000000ffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x000000ffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x000000ffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x000000ffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x000000ffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[28U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_85[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_86, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_86[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_87, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001dU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_87[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_88, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0xffff00ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | (0x0000ff00U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 8U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[14U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[29U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_88[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_89, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_89[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_90, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001eU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_90[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_91, vlSelfRef.tb_gvu_vector_clamp__DOT__a, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0xff00ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | (0x00ff0000U & ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                        ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                        : ((0x000000ffU 
                                            & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                           < (0x000000ffU 
                                              & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                       ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                       : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                            ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                            : ((0x000000ffU 
                                                & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                               > (0x000000ffU 
                                                  & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                           ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                           : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                                     << 0x00000010U)));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U] 
                = ((0xffff0000U & vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U]) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                       ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                                       : ((0x0000ffffU 
                                           & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                          < (0x0000ffffU 
                                             & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                                      ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                                      : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                                           ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                                           : ((0x0000ffffU 
                                               & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                              > (0x0000ffffU 
                                                 & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                                          ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                                          : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a))));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[30U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
            = __Vtemp_91[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_92, vlSelfRef.tb_gvu_vector_clamp__DOT__lo, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo 
            = __Vtemp_92[0U];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_93, vlSelfRef.tb_gvu_vector_clamp__DOT__hi, 
                      VL_MULS_III(32, (IData)(0x0000001fU), tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi 
            = __Vtemp_93[0U];
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi 
            = VL_SHIFTRS_III(32,32,32, VL_SHIFTL_III(32,32,32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi, 
                                                     ((IData)(0x00000020U) 
                                                      - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)), 
                             ((IData)(0x00000020U) 
                              - tb_gvu_vector_clamp__DOT__dut__DOT__width_bits));
        if ((8U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U] 
                = ((0x00ffffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[7U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x000000ffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000018U));
        } else if ((0x00000010U == tb_gvu_vector_clamp__DOT__dut__DOT__width_bits)) {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U] 
                = ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__y[15U]) 
                   | ((((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                         : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                            < (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo)))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                        : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                             ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                             : ((0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a) 
                                > (0x0000ffffU & vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi)))
                            ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                            : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a)) 
                      << 0x00000010U));
        } else {
            vlSelfRef.tb_gvu_vector_clamp__DOT__y[31U] 
                = (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                     ? VL_LTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_lo)
                     : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                        < vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo))
                    ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_lo
                    : (((IData)(vlSelfRef.tb_gvu_vector_clamp__DOT__signed_mode)
                         ? VL_GTS_III(32, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_a, vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__signed_hi)
                         : (vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a 
                            > vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi))
                        ? vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_hi
                        : vlSelfRef.tb_gvu_vector_clamp__DOT__dut__DOT__lane_a));
        }
    }
}

void Vtb_gvu_vector_clamp___024root___eval_act(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_act\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_gvu_vector_clamp___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_clamp___024root___eval_nba(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_nba\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gvu_vector_clamp___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_gvu_vector_clamp___024root___timing_resume(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___timing_resume\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gvu_vector_clamp___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_gvu_vector_clamp___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_gvu_vector_clamp___024root___eval_phase__act(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_phase__act\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gvu_vector_clamp___024root___eval_triggers_vec__act(vlSelf);
    Vtb_gvu_vector_clamp___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gvu_vector_clamp___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_gvu_vector_clamp___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_gvu_vector_clamp___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_gvu_vector_clamp___024root___timing_resume(vlSelf);
        Vtb_gvu_vector_clamp___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gvu_vector_clamp___024root___eval_phase__inact(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_phase__inact\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_gvu_vector_clamp.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_gvu_vector_clamp___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gvu_vector_clamp___024root___eval_phase__nba(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_phase__nba\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_gvu_vector_clamp___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_gvu_vector_clamp___024root___eval_nba(vlSelf);
        Vtb_gvu_vector_clamp___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_gvu_vector_clamp___024root___eval(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gvu_vector_clamp___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_gvu_vector_clamp.sv", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_gvu_vector_clamp.sv", 2, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_gvu_vector_clamp___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_gvu_vector_clamp.sv", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_gvu_vector_clamp___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_gvu_vector_clamp___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_gvu_vector_clamp___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_gvu_vector_clamp___024root___eval_debug_assertions(Vtb_gvu_vector_clamp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_vector_clamp___024root___eval_debug_assertions\n"); );
    Vtb_gvu_vector_clamp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
