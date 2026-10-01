// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_GVU_VECTOR_CLAMP__SYMS_H_
#define VERILATED_VTB_GVU_VECTOR_CLAMP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_gvu_vector_clamp.h"

// INCLUDE MODULE CLASSES
#include "Vtb_gvu_vector_clamp___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_gvu_vector_clamp__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_gvu_vector_clamp* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_gvu_vector_clamp___024root TOP;

    // CONSTRUCTORS
    Vtb_gvu_vector_clamp__Syms(VerilatedContext* contextp, const char* namep, Vtb_gvu_vector_clamp* modelp);
    ~Vtb_gvu_vector_clamp__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
