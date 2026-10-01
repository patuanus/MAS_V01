// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_GVU_VECTOR_SHIFT__SYMS_H_
#define VERILATED_VTB_GVU_VECTOR_SHIFT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_gvu_vector_shift.h"

// INCLUDE MODULE CLASSES
#include "Vtb_gvu_vector_shift___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_vector_shift__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_gvu_vector_shift* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_gvu_vector_shift___024root TOP;

    // CONSTRUCTORS
    Vtb_gvu_vector_shift__Syms(VerilatedContext* contextp, const char* namep, Vtb_gvu_vector_shift* modelp);
    ~Vtb_gvu_vector_shift__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
