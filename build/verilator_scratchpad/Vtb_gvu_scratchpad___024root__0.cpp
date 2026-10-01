// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gvu_scratchpad.h for the primary calling header

#include "Vtb_gvu_scratchpad__pch.h"

VlCoroutine Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_scratchpad___024root* vlSelf);
VlCoroutine Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__1(Vtb_gvu_scratchpad___024root* vlSelf);

void Vtb_gvu_scratchpad___024root___eval_initial(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_initial\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0;
extern const VlWide<32>/*1023:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h07725354_0;
void Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(Vtb_gvu_scratchpad___024root* vlSelf, const char* __VeventDescription);
void Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(Vtb_gvu_scratchpad___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h588b1b32_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h9980c733_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_hf07b8cc0_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h6a23b42b_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_hffc8ca4d_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h7f83e6c0_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h861f7977_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h61dcd25d_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h734e7740_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_hd70b1f88_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_h6605bd80_0;
extern const VlWide<8>/*255:0*/ Vtb_gvu_scratchpad__ConstPool__CONST_hafa56236_0;

VlCoroutine Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__0(Vtb_gvu_scratchpad___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gvu_scratchpad___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gvu_scratchpad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_gvu_scratchpad__DOT__i;
    tb_gvu_scratchpad__DOT__i = 0;
    IData/*31:0*/ tb_gvu_scratchpad__DOT__check_id;
    tb_gvu_scratchpad__DOT__check_id = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__expected_value = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__42__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__42__got = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__42__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__42__expected_value = 0;
    CData/*7:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect8__43__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect8__43__got = 0;
    CData/*7:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect8__43__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect8__43__expected_value = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__44__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__44__got = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__44__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__44__expected_value = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__45__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__45__got = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect32__45__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__45__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__core_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__core_buf = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf = 0;
    CData/*1:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__core_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__core_buf = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf = 0;
    CData/*1:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__core_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__core_buf = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf = 0;
    CData/*1:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__core_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__core_buf = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf = 0;
    CData/*1:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value);
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__got;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__got = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__expected_value;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__expected_value = 0;
    CData/*0:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel = 0;
    IData/*31:0*/ __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got);
    VlWide<8>/*255:0*/ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value;
    VL_ZERO_W(256, __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value);
    // Body
    tb_gvu_scratchpad__DOT__check_id = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(1024, vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_hd6b7ba52_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_wdata = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_wdata = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][1U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][2U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][3U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][4U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][5U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][6U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[0U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[0U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[0U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][7U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][0U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][0U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][1U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][1U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][2U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][2U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][3U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][3U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][4U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][4U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][5U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][5U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][6U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][6U] = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[1U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[1U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[1U][7U], Vtb_gvu_scratchpad__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][7U] = 0U;
    tb_gvu_scratchpad__DOT__i = 2U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data, Vtb_gvu_scratchpad__ConstPool__CONST_h07725354_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__0__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data, Vtb_gvu_scratchpad__ConstPool__CONST_h588b1b32_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr = 7U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__1__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__3__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__2__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__3__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__3__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__3__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__3__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr = 7U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__5__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__4__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__5__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__5__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__5__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__5__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data, Vtb_gvu_scratchpad__ConstPool__CONST_h9980c733_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_write__6__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         48);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__8__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__7__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__8__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__8__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__8__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__8__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__10__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__9__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__10__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__10__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__10__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__10__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data, Vtb_gvu_scratchpad__ConstPool__CONST_hf07b8cc0_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__11__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data, Vtb_gvu_scratchpad__ConstPool__CONST_h6a23b42b_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr = 7U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__12__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data, Vtb_gvu_scratchpad__ConstPool__CONST_hffc8ca4d_0);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[0U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[1U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[2U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[3U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[4U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[5U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[6U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_wdata[7U] = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_write__13__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         54);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         57);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__15__name 
        = VL_SFORMATF_N_NX("VBANK1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__14__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__15__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__15__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__15__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__15__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr = 7U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         57);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__17__name 
        = VL_SFORMATF_N_NX("VBANK1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__16__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__17__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__17__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__17__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__17__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__b_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__b_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         57);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         57);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__19__name 
        = VL_SFORMATF_N_NX("VBANK1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb1_read__18__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__b_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__19__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__19__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__19__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__19__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__21__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__20__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__21__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__21__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__21__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__21__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data, Vtb_gvu_scratchpad__ConstPool__CONST_h7f83e6c0_0);
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__22__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__22__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data, Vtb_gvu_scratchpad__ConstPool__CONST_h861f7977_0);
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p1_write__23__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_write__23__data[7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         60);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         63);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__25__name 
        = VL_SFORMATF_N_NX("VBANK2 P1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__24__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__24__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__25__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__25__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__25__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__25__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         63);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__27__name 
        = VL_SFORMATF_N_NX("VBANK2 P1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__26__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__26__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__27__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__27__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__27__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__27__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    tb_gvu_scratchpad__DOT__i = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U] = 0U;
    tb_gvu_scratchpad__DOT__i = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U] = 0x11111111U;
    tb_gvu_scratchpad__DOT__i = 2U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U] = 0x22222222U;
    tb_gvu_scratchpad__DOT__i = 3U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U] = 0x33333333U;
    tb_gvu_scratchpad__DOT__i = 4U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U] = 0x44444444U;
    tb_gvu_scratchpad__DOT__i = 5U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U] = 0x55555555U;
    tb_gvu_scratchpad__DOT__i = 6U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U] = 0x66666666U;
    tb_gvu_scratchpad__DOT__i = 7U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U] = 0x77777777U;
    tb_gvu_scratchpad__DOT__i = 8U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U] = 0x88888888U;
    tb_gvu_scratchpad__DOT__i = 9U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U] = 0x99999999U;
    tb_gvu_scratchpad__DOT__i = 0x0000000aU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U] = 0xaaaaaaaaU;
    tb_gvu_scratchpad__DOT__i = 0x0000000bU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U] = 0xbbbbbbbbU;
    tb_gvu_scratchpad__DOT__i = 0x0000000cU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U] = 0xccccccccU;
    tb_gvu_scratchpad__DOT__i = 0x0000000dU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U] = 0xddddddddU;
    tb_gvu_scratchpad__DOT__i = 0x0000000eU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U] = 0xeeeeeeeeU;
    tb_gvu_scratchpad__DOT__i = 0x0000000fU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U] = 0xffffffffU;
    tb_gvu_scratchpad__DOT__i = 0x00000010U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U] = 0x11111110U;
    tb_gvu_scratchpad__DOT__i = 0x00000011U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U] = 0x22222221U;
    tb_gvu_scratchpad__DOT__i = 0x00000012U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U] = 0x33333332U;
    tb_gvu_scratchpad__DOT__i = 0x00000013U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U] = 0x44444443U;
    tb_gvu_scratchpad__DOT__i = 0x00000014U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U] = 0x55555554U;
    tb_gvu_scratchpad__DOT__i = 0x00000015U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U] = 0x66666665U;
    tb_gvu_scratchpad__DOT__i = 0x00000016U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U] = 0x77777776U;
    tb_gvu_scratchpad__DOT__i = 0x00000017U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U] = 0x88888887U;
    tb_gvu_scratchpad__DOT__i = 0x00000018U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U] = 0x99999998U;
    tb_gvu_scratchpad__DOT__i = 0x00000019U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U] = 0xaaaaaaa9U;
    tb_gvu_scratchpad__DOT__i = 0x0000001aU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U] = 0xbbbbbbbaU;
    tb_gvu_scratchpad__DOT__i = 0x0000001bU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U] = 0xcccccccbU;
    tb_gvu_scratchpad__DOT__i = 0x0000001cU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U] = 0xdddddddcU;
    tb_gvu_scratchpad__DOT__i = 0x0000001dU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U] = 0xeeeeeeedU;
    tb_gvu_scratchpad__DOT__i = 0x0000001eU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U] = 0xfffffffeU;
    tb_gvu_scratchpad__DOT__i = 0x0000001fU;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U] = 0x1111110fU;
    tb_gvu_scratchpad__DOT__i = 0x00000020U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[8U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[9U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[10U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[11U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[12U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[13U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[14U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[15U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[16U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[17U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[18U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[19U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[20U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[21U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[22U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[23U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[24U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[25U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[26U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[27U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[28U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[29U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[30U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[31U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[8U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[9U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[10U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[11U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[12U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[13U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[14U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[15U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[16U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[17U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[18U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[19U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[20U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[21U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[22U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[23U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[24U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[25U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[26U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[27U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[28U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[29U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[30U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__28__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__28__data[31U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel = 0U;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data);
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr))][7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         72);
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] VBANK2 P0 gather buffer=%0d base=%0d\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__buffer_sel)
                 , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__addr
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,__Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata.data());
    if (VL_UNLIKELY(((0U != (((((((((((((((((((((((
                                                   (((((((((vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[0U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[0U]) 
                                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[1U] 
                                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[1U])) 
                                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[2U] 
                                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[2U])) 
                                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[3U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[3U])) 
                                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[4U] 
                                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[4U])) 
                                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[5U] 
                                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[5U])) 
                                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[6U] 
                                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[6U])) 
                                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[7U] 
                                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[7U])) 
                                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[8U] 
                                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[8U])) 
                                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[9U] 
                                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[9U])) 
                                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[10U] 
                                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[10U])) 
                                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[11U] 
                                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[11U])) 
                                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[12U] 
                                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[12U])) 
                                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[13U] 
                                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[13U])) 
                                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[14U] 
                                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[14U])) 
                                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[15U] 
                                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[15U])) 
                                            | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[16U] 
                                               ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[16U])) 
                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[17U] 
                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[17U])) 
                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[18U] 
                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[18U])) 
                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[19U] 
                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[19U])) 
                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[20U] 
                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[20U])) 
                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[21U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[21U])) 
                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[22U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[22U])) 
                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[23U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[23U])) 
                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[24U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[24U])) 
                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[25U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[25U])) 
                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[26U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[26U])) 
                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[27U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[27U])) 
                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[28U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[28U])) 
                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[29U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[29U])) 
                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[30U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[30U])) 
                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[31U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__29__expected_data[31U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:74: Assertion failed in %m: vbank2 P0 gather mismatch\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.p0_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 74, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         75);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    tb_gvu_scratchpad__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, tb_gvu_scratchpad__DOT__i)) {
        __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr 
            = ((IData)(2U) + tb_gvu_scratchpad__DOT__i);
        __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel = 0U;
        Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                                 "@(negedge tb_gvu_scratchpad.clk)");
        co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_gvu_scratchpad.clk)", 
                                                             "tb/tb_gvu_scratchpad.sv", 
                                                             63);
        vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
            = __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel;
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = 
            (0x0000ffffU & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr);
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
        Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                                 "@(posedge tb_gvu_scratchpad.clk)");
        co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_gvu_scratchpad.clk)", 
                                                             "tb/tb_gvu_scratchpad.sv", 
                                                             63);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_gvu_scratchpad.sv", 
                                             63);
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__31__name 
            = VL_SFORMATF_N_NX("VBANK2 P1 buffer=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__p1_read__30__buffer_sel]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__30__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__31__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__31__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__31__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__31__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
        Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                                 "@(negedge tb_gvu_scratchpad.clk)");
        co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_gvu_scratchpad.clk)", 
                                                             "tb/tb_gvu_scratchpad.sv", 
                                                             63);
        vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
        tb_gvu_scratchpad__DOT__i = ((IData)(1U) + tb_gvu_scratchpad__DOT__i);
    }
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U]);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U] 
        = (~ vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U]);
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[8U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[8U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[9U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[9U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[10U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[10U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[11U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[11U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[12U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[12U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[13U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[13U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[14U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[14U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[15U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[15U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[16U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[16U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[17U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[17U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[18U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[18U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[19U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[19U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[20U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[20U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[21U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[21U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[22U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[22U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[23U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[23U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[24U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[24U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[25U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[25U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[26U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[26U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[27U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[27U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[28U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[28U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[29U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[29U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[30U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[30U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_wdata[31U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[31U];
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr)][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[8U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[9U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[10U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[11U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[12U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[13U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[14U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(1U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[15U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[16U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[17U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[18U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[19U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[20U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[21U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[22U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(2U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[23U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[24U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[25U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[26U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[27U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[28U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[29U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[30U];
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__p0_write__32__buffer_sel][(7U 
                                                                                & ((IData)(3U) 
                                                                                + __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__addr))][7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_write__32__data[31U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         66);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel = 1U;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data);
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr))][7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         72);
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] VBANK2 P0 gather buffer=%0d base=%0d\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__buffer_sel)
                 , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__addr
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,__Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata.data());
    if (VL_UNLIKELY(((0U != (((((((((((((((((((((((
                                                   (((((((((vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[0U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[0U]) 
                                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[1U] 
                                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[1U])) 
                                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[2U] 
                                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[2U])) 
                                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[3U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[3U])) 
                                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[4U] 
                                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[4U])) 
                                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[5U] 
                                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[5U])) 
                                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[6U] 
                                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[6U])) 
                                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[7U] 
                                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[7U])) 
                                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[8U] 
                                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[8U])) 
                                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[9U] 
                                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[9U])) 
                                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[10U] 
                                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[10U])) 
                                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[11U] 
                                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[11U])) 
                                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[12U] 
                                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[12U])) 
                                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[13U] 
                                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[13U])) 
                                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[14U] 
                                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[14U])) 
                                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[15U] 
                                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[15U])) 
                                            | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[16U] 
                                               ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[16U])) 
                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[17U] 
                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[17U])) 
                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[18U] 
                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[18U])) 
                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[19U] 
                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[19U])) 
                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[20U] 
                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[20U])) 
                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[21U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[21U])) 
                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[22U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[22U])) 
                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[23U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[23U])) 
                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[24U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[24U])) 
                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[25U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[25U])) 
                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[26U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[26U])) 
                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[27U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[27U])) 
                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[28U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[28U])) 
                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[29U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[29U])) 
                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[30U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[30U])) 
                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[31U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__33__expected_data[31U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:74: Assertion failed in %m: vbank2 P0 gather mismatch\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.p0_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 74, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         75);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel = 0U;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data);
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr))][7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         72);
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] VBANK2 P0 gather buffer=%0d base=%0d\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__buffer_sel)
                 , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__addr
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,__Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata.data());
    if (VL_UNLIKELY(((0U != (((((((((((((((((((((((
                                                   (((((((((vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[0U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[0U]) 
                                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[1U] 
                                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[1U])) 
                                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[2U] 
                                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[2U])) 
                                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[3U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[3U])) 
                                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[4U] 
                                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[4U])) 
                                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[5U] 
                                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[5U])) 
                                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[6U] 
                                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[6U])) 
                                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[7U] 
                                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[7U])) 
                                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[8U] 
                                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[8U])) 
                                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[9U] 
                                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[9U])) 
                                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[10U] 
                                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[10U])) 
                                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[11U] 
                                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[11U])) 
                                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[12U] 
                                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[12U])) 
                                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[13U] 
                                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[13U])) 
                                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[14U] 
                                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[14U])) 
                                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[15U] 
                                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[15U])) 
                                            | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[16U] 
                                               ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[16U])) 
                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[17U] 
                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[17U])) 
                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[18U] 
                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[18U])) 
                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[19U] 
                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[19U])) 
                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[20U] 
                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[20U])) 
                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[21U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[21U])) 
                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[22U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[22U])) 
                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[23U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[23U])) 
                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[24U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[24U])) 
                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[25U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[25U])) 
                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[26U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[26U])) 
                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[27U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[27U])) 
                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[28U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[28U])) 
                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[29U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[29U])) 
                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[30U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[30U])) 
                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[31U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__34__expected_data[31U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:74: Assertion failed in %m: vbank2 P0 gather mismatch\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.p0_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 74, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         75);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         106);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = 2U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = 2U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__p1_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_h61dcd25d_0);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         106);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__name = "VBANK2 simultaneous P0 error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_err;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__35__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__name = "VBANK2 simultaneous P1 error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_err;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__36__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         108);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         108);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel = 0U;
    VL_ZERO_W(1024, __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data);
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[8U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[9U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[10U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[11U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[12U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[13U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[14U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[15U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(1U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[16U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[17U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[18U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[19U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[20U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[21U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[22U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[23U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(2U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][7U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[24U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][0U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[25U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][1U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[26U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][2U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[27U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][3U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[28U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][4U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[29U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][5U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[30U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][6U];
    __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[31U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel]
        [(7U & ((IData)(3U) + __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr))][7U];
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         72);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         72);
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] VBANK2 P0 gather buffer=%0d base=%0d\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",7
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__buffer_sel)
                 , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__addr
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,__Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',1024,vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata.data());
    if (VL_UNLIKELY(((0U != (((((((((((((((((((((((
                                                   (((((((((vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[0U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[0U]) 
                                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[1U] 
                                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[1U])) 
                                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[2U] 
                                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[2U])) 
                                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[3U] 
                                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[3U])) 
                                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[4U] 
                                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[4U])) 
                                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[5U] 
                                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[5U])) 
                                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[6U] 
                                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[6U])) 
                                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[7U] 
                                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[7U])) 
                                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[8U] 
                                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[8U])) 
                                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[9U] 
                                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[9U])) 
                                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[10U] 
                                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[10U])) 
                                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[11U] 
                                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[11U])) 
                                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[12U] 
                                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[12U])) 
                                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[13U] 
                                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[13U])) 
                                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[14U] 
                                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[14U])) 
                                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[15U] 
                                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[15U])) 
                                            | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[16U] 
                                               ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[16U])) 
                                           | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[17U] 
                                              ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[17U])) 
                                          | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[18U] 
                                             ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[18U])) 
                                         | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[19U] 
                                            ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[19U])) 
                                        | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[20U] 
                                           ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[20U])) 
                                       | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[21U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[21U])) 
                                      | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[22U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[22U])) 
                                     | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[23U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[23U])) 
                                    | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[24U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[24U])) 
                                   | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[25U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[25U])) 
                                  | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[26U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[26U])) 
                                 | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[27U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[27U])) 
                                | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[28U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[28U])) 
                               | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[29U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[29U])) 
                              | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[30U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[30U])) 
                             | (vlSelfRef.tb_gvu_scratchpad__DOT__p0_rdata[31U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__p0_read__37__expected_data[31U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:74: Assertion failed in %m: vbank2 P0 gather mismatch\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.p0_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 74, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         75);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = (0x0000ffffU 
                                                 & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         63);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__39__name 
        = VL_SFORMATF_N_NX("VBANK2 P1 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
        [__Vtask_tb_gvu_scratchpad__DOT__p1_read__38__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__p1_read__38__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__39__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__39__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__39__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__39__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         63);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         110);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_addr = 8U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_we = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         110);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__name = "VBANK2 P1 out-of-range error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p1_err;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__40__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    vlSelfRef.tb_gvu_scratchpad__DOT__p1_v = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_addr = 5U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_we = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         111);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__name = "VBANK2 P0 out-of-range error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__p0_err;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__41__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    vlSelfRef.tb_gvu_scratchpad__DOT__p0_v = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         114);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_wdata = 0x12345678U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         114);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U] = 0x12345678U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         114);
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         114);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__42__name = "SBANK P0 buf0 addr0"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__42__expected_value 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect32__42__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__s0_rdata;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__42__name)
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__42__expected_value
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__42__got);
    if (VL_UNLIKELY(((__Vtask_tb_gvu_scratchpad__DOT__expect32__42__got 
                      != __Vtask_tb_gvu_scratchpad__DOT__expect32__42__expected_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:39: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect32", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__42__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 39, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         115);
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_wdata = 0xefU;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         115);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U] 
        = (0x000000efU | (0xffffff00U & vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U]));
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         115);
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s1_addr = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         115);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect8__43__name = "SBANK P1 low-byte"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect8__43__expected_value = 0xefU;
    __Vtask_tb_gvu_scratchpad__DOT__expect8__43__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__s1_rdata;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect8__43__name)
                 , '#',8,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect8__43__expected_value)
                 , '#',8,__Vtask_tb_gvu_scratchpad__DOT__expect8__43__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect8__43__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect8__43__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:42: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect8__43__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 42, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__44__name = "SBANK P0 after P1 alias"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__44__expected_value 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[0U][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect32__44__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__s0_rdata;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__44__name)
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__44__expected_value
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__44__got);
    if (VL_UNLIKELY(((__Vtask_tb_gvu_scratchpad__DOT__expect32__44__got 
                      != __Vtask_tb_gvu_scratchpad__DOT__expect32__44__expected_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:39: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect32", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__44__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 39, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         116);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_addr = 7U;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_wdata = 0x89abcdefU;
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_we = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         116);
    vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][7U] = 0x89abcdefU;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         116);
    vlSelfRef.tb_gvu_scratchpad__DOT__s0_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         116);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         116);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__45__name = "SBANK P0 buf1 boundary"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect32__45__expected_value 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[1U][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect32__45__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__s0_rdata;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%h ACTUAL_RESULT=%h\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__45__name)
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__45__expected_value
                 , '#',32,__Vtask_tb_gvu_scratchpad__DOT__expect32__45__got);
    if (VL_UNLIKELY(((__Vtask_tb_gvu_scratchpad__DOT__expect32__45__got 
                      != __Vtask_tb_gvu_scratchpad__DOT__expect32__45__expected_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:39: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect32", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect32__45__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 39, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data, Vtb_gvu_scratchpad__ConstPool__CONST_h734e7740_0);
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__core_buf = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         80);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__core_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = (0x0000ffffU 
                                                  & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         80);
    if (VL_UNLIKELY((vlSelfRef.tb_gvu_scratchpad__DOT__dma_error))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:81: Assertion failed in %m: valid core/DMA ping-pong ownership rejected\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.dma_write_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 81, "", false);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         82);
    if ((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[7U];
    } else if ((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[7U];
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[7U];
    } else {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__data[0U];
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         84);
    if (VL_UNLIKELY(((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__47__name 
            = VL_SFORMATF_N_NX("DMA VBANK0 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__47__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__47__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__47__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__47__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if (VL_UNLIKELY(((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__48__name 
            = VL_SFORMATF_N_NX("DMA VBANK1 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__48__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__48__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__48__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__48__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__bank))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__49__name 
            = VL_SFORMATF_N_NX("DMA VBANK2 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__49__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__49__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__49__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__49__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__50__name 
            = VL_SFORMATF_N_NX("DMA SBANK buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__46__addr)];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[1U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[2U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[3U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[4U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[5U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[6U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[7U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__50__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__50__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__50__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__50__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         86);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data, Vtb_gvu_scratchpad__ConstPool__CONST_h6a23b42b_0);
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__core_buf = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         80);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__core_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = (0x0000ffffU 
                                                  & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         80);
    if (VL_UNLIKELY((vlSelfRef.tb_gvu_scratchpad__DOT__dma_error))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:81: Assertion failed in %m: valid core/DMA ping-pong ownership rejected\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.dma_write_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 81, "", false);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         82);
    if ((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[7U];
    } else if ((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[7U];
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[7U];
    } else {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__data[0U];
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         84);
    if (VL_UNLIKELY(((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__52__name 
            = VL_SFORMATF_N_NX("DMA VBANK0 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__52__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__52__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__52__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__52__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if (VL_UNLIKELY(((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__53__name 
            = VL_SFORMATF_N_NX("DMA VBANK1 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__53__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__53__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__53__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__53__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__bank))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__54__name 
            = VL_SFORMATF_N_NX("DMA VBANK2 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__54__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__54__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__54__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__54__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__55__name 
            = VL_SFORMATF_N_NX("DMA SBANK buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__51__addr)];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[1U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[2U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[3U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[4U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[5U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[6U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[7U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__55__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__55__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__55__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__55__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         86);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data, Vtb_gvu_scratchpad__ConstPool__CONST_hd70b1f88_0);
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank = 2U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__core_buf = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         80);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__core_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = (0x0000ffffU 
                                                  & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         80);
    if (VL_UNLIKELY((vlSelfRef.tb_gvu_scratchpad__DOT__dma_error))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:81: Assertion failed in %m: valid core/DMA ping-pong ownership rejected\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.dma_write_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 81, "", false);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         82);
    if ((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[7U];
    } else if ((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[7U];
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[7U];
    } else {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__data[0U];
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         84);
    if (VL_UNLIKELY(((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__57__name 
            = VL_SFORMATF_N_NX("DMA VBANK0 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__57__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__57__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__57__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__57__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if (VL_UNLIKELY(((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__58__name 
            = VL_SFORMATF_N_NX("DMA VBANK1 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__58__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__58__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__58__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__58__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__bank))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__59__name 
            = VL_SFORMATF_N_NX("DMA VBANK2 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__59__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__59__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__59__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__59__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__60__name 
            = VL_SFORMATF_N_NX("DMA SBANK buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__56__addr)];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[1U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[2U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[3U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[4U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[5U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[6U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[7U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__60__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__60__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__60__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__60__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         86);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data, Vtb_gvu_scratchpad__ConstPool__CONST_h6605bd80_0);
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank = 3U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__core_buf = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         80);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__core_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = (0x0000ffffU 
                                                  & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[0U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[0U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[1U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[1U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[2U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[2U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[3U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[3U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[4U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[4U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[5U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[5U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[6U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[6U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata[7U] 
        = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[7U];
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         80);
    if (VL_UNLIKELY((vlSelfRef.tb_gvu_scratchpad__DOT__dma_error))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:81: Assertion failed in %m: valid core/DMA ping-pong ownership rejected\n",3, 'M',vlSymsp->name(),"tb_gvu_scratchpad.dma_write_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 81, "", false);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         82);
    if ((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[7U];
    } else if ((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[7U];
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))) {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[0U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[1U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[2U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[3U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[4U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[5U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[6U];
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[7U];
    } else {
        vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb[__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf][(7U 
                                                                                & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)] 
            = __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__data[0U];
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         84);
    if (VL_UNLIKELY(((0U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__62__name 
            = VL_SFORMATF_N_NX("DMA VBANK0 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__62__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__62__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__62__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__62__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if (VL_UNLIKELY(((1U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__63__name 
            = VL_SFORMATF_N_NX("DMA VBANK1 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb1
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__63__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__63__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__63__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__63__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else if ((2U == (IData)(__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__bank))) {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__64__name 
            = VL_SFORMATF_N_NX("DMA VBANK2 buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb2
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)][7U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__64__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__64__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__64__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__64__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    } else {
        vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__65__name 
            = VL_SFORMATF_N_NX("DMA SBANK buf=%0d addr=%0d",2
                               , '#',1,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf
                               , '~',32,__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr) ;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__ref_sb
            [__Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__dma_buf]
            [(7U & __Vtask_tb_gvu_scratchpad__DOT__dma_write_read__61__addr)];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[1U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[2U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[3U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[4U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[5U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[6U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[7U] = 0U;
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[0U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[0U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[1U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[1U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[2U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[2U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[3U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[3U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[4U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[4U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[5U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[5U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[6U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[6U];
        __Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[7U] 
            = vlSelfRef.tb_gvu_scratchpad__DOT__dma_rdata[7U];
        tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                            + tb_gvu_scratchpad__DOT__check_id);
        VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__65__name)
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value.data()
                     , '~',32,tb_gvu_scratchpad__DOT__check_id
                     , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got.data());
        if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[0U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[0U]) 
                                       | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[1U] 
                                          ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[1U])) 
                                      | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[2U] 
                                         ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[2U])) 
                                     | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[3U] 
                                        ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[3U])) 
                                    | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[4U] 
                                       ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[4U])) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[5U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[5U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[6U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[6U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__65__got[7U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__65__expected_value[7U])))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__65__name));
            VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
        }
        VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    }
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         86);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         120);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         120);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__name = "DMA out-of-range error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_error;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__66__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         122);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_buffer_sel = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_we = 1U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_bank = 0U;
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_addr = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_gvu_scratchpad__DOT__dma_wdata, Vtb_gvu_scratchpad__ConstPool__CONST_hafa56236_0);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         122);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__name = "DMA/core same-buffer error"s;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__expected_value = 1U;
    __Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__got 
        = vlSelfRef.tb_gvu_scratchpad__DOT__dma_error;
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s GOLDEN_RESULT=%0b ACTUAL_RESULT=%0b\n",4
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__name)
                 , '#',1,(IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__expected_value)
                 , '#',1,__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__got);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__got) 
                      != (IData)(__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__expected_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:45: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect_flag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect_flag__67__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 45, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\n",1, '~',32,tb_gvu_scratchpad__DOT__check_id);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         122);
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         122);
    vlSelfRef.tb_gvu_scratchpad__DOT__dma_valid = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr = 0U;
    __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bb72__0(vlSelf, 
                                                             "@(negedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bb72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    vlSelfRef.tb_gvu_scratchpad__DOT__core_buffer_sel 
        = __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel;
    vlSelfRef.tb_gvu_scratchpad__DOT__a_addr = (7U 
                                                & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr);
    vlSelfRef.tb_gvu_scratchpad__DOT__a_we = 0U;
    Vtb_gvu_scratchpad___024root____VbeforeTrig_h1052bab8__0(vlSelf, 
                                                             "@(posedge tb_gvu_scratchpad.clk)");
    co_await vlSelfRef.__VtrigSched_h1052bab8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gvu_scratchpad.clk)", 
                                                         "tb/tb_gvu_scratchpad.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_gvu_scratchpad.sv", 
                                         51);
    vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__69__name 
        = VL_SFORMATF_N_NX("VBANK0 buffer=%0d addr=%0d",2
                           , '#',1,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel
                           , '~',32,__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr) ;
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__ref_vb0
        [__Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__buffer_sel]
        [(7U & __Vtask_tb_gvu_scratchpad__DOT__core_vb0_read__68__addr)][7U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[0U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[0U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[1U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[1U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[2U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[2U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[3U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[3U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[4U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[4U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[5U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[5U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[6U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[6U];
    __Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[7U] 
        = vlSelfRef.tb_gvu_scratchpad__DOT__a_rdata[7U];
    tb_gvu_scratchpad__DOT__check_id = ((IData)(1U) 
                                        + tb_gvu_scratchpad__DOT__check_id);
    VL_WRITEF_NX("[SPM][CHECK%0d] %s\n[SPM][CHECK%0d] GOLDEN_RESULT = %h\n[SPM][CHECK%0d] ACTUAL_RESULT = %h\n",6
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__69__name)
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value.data()
                 , '~',32,tb_gvu_scratchpad__DOT__check_id
                 , '#',256,__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got.data());
    if (VL_UNLIKELY(((0U != ((((((((__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[0U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[0U]) 
                                   | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[1U] 
                                      ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[1U])) 
                                  | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[2U] 
                                     ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[2U])) 
                                 | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[3U] 
                                    ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[3U])) 
                                | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[4U] 
                                   ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[4U])) 
                               | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[5U] 
                                  ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[5U])) 
                              | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[6U] 
                                 ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[6U])) 
                             | (__Vtask_tb_gvu_scratchpad__DOT__expect256__69__got[7U] 
                                ^ __Vtask_tb_gvu_scratchpad__DOT__expect256__69__expected_value[7U])))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gvu_scratchpad.sv:34: Assertion failed in %m: %s mismatch\n",4, 'M',vlSymsp->name(),"tb_gvu_scratchpad.expect256", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_tb_gvu_scratchpad__DOT__expect256__69__name));
        VL_STOP_MT("tb/tb_gvu_scratchpad.sv", 34, "", false);
    }
    VL_WRITEF_NX("[SPM][CHECK%0d] PASS\nPASS: tb_gvu_scratchpad -- current 4-bank/ping-pong wrapper contract\n",1
                 , '~',32,tb_gvu_scratchpad__DOT__check_id);
    VL_FINISH_MT("tb/tb_gvu_scratchpad.sv", 123, "");
    co_return;
}
