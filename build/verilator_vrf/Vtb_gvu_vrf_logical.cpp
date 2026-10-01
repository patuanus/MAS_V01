// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gvu_vrf_logical__pch.h"

//============================================================
// Constructors

Vtb_gvu_vrf_logical::Vtb_gvu_vrf_logical(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gvu_vrf_logical__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gvu_vrf_logical::Vtb_gvu_vrf_logical(const char* _vcname__)
    : Vtb_gvu_vrf_logical(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gvu_vrf_logical::~Vtb_gvu_vrf_logical() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gvu_vrf_logical___024root___eval_debug_assertions(Vtb_gvu_vrf_logical___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gvu_vrf_logical___024root___eval_static(Vtb_gvu_vrf_logical___024root* vlSelf);
void Vtb_gvu_vrf_logical___024root___eval_initial(Vtb_gvu_vrf_logical___024root* vlSelf);
void Vtb_gvu_vrf_logical___024root___eval_settle(Vtb_gvu_vrf_logical___024root* vlSelf);
void Vtb_gvu_vrf_logical___024root___eval(Vtb_gvu_vrf_logical___024root* vlSelf);

void Vtb_gvu_vrf_logical::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gvu_vrf_logical::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gvu_vrf_logical___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gvu_vrf_logical___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gvu_vrf_logical___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gvu_vrf_logical___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gvu_vrf_logical___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gvu_vrf_logical::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_gvu_vrf_logical::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gvu_vrf_logical::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gvu_vrf_logical___024root___eval_final(Vtb_gvu_vrf_logical___024root* vlSelf);

VL_ATTR_COLD void Vtb_gvu_vrf_logical::final() {
    contextp()->executingFinal(true);
    Vtb_gvu_vrf_logical___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gvu_vrf_logical::hierName() const { return vlSymsp->name(); }
const char* Vtb_gvu_vrf_logical::modelName() const { return "Vtb_gvu_vrf_logical"; }
unsigned Vtb_gvu_vrf_logical::threads() const { return 1; }
void Vtb_gvu_vrf_logical::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gvu_vrf_logical::atClone() const {
    contextp()->threadPoolpOnClone();
}
