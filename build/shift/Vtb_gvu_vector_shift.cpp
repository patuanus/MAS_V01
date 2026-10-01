// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gvu_vector_shift__pch.h"

//============================================================
// Constructors

Vtb_gvu_vector_shift::Vtb_gvu_vector_shift(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gvu_vector_shift__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gvu_vector_shift::Vtb_gvu_vector_shift(const char* _vcname__)
    : Vtb_gvu_vector_shift(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gvu_vector_shift::~Vtb_gvu_vector_shift() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gvu_vector_shift___024root___eval_debug_assertions(Vtb_gvu_vector_shift___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gvu_vector_shift___024root___eval_static(Vtb_gvu_vector_shift___024root* vlSelf);
void Vtb_gvu_vector_shift___024root___eval_initial(Vtb_gvu_vector_shift___024root* vlSelf);
void Vtb_gvu_vector_shift___024root___eval_settle(Vtb_gvu_vector_shift___024root* vlSelf);
void Vtb_gvu_vector_shift___024root___eval(Vtb_gvu_vector_shift___024root* vlSelf);

void Vtb_gvu_vector_shift::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gvu_vector_shift::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gvu_vector_shift___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gvu_vector_shift___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gvu_vector_shift___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gvu_vector_shift___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gvu_vector_shift___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gvu_vector_shift::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_gvu_vector_shift::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gvu_vector_shift::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gvu_vector_shift___024root___eval_final(Vtb_gvu_vector_shift___024root* vlSelf);

VL_ATTR_COLD void Vtb_gvu_vector_shift::final() {
    contextp()->executingFinal(true);
    Vtb_gvu_vector_shift___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gvu_vector_shift::hierName() const { return vlSymsp->name(); }
const char* Vtb_gvu_vector_shift::modelName() const { return "Vtb_gvu_vector_shift"; }
unsigned Vtb_gvu_vector_shift::threads() const { return 1; }
void Vtb_gvu_vector_shift::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gvu_vector_shift::atClone() const {
    contextp()->threadPoolpOnClone();
}
