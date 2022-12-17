// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPARROW__SYMS_H_
#define VERILATED_VSPARROW__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsparrow.h"

// INCLUDE MODULE CLASSES
#include "Vsparrow___024root.h"
#include "Vsparrow___024unit.h"
#include "Vsparrow_sparrow.h"

// SYMS CLASS (contains all model state)
class Vsparrow__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsparrow* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsparrow___024root             TOP;

    // CONSTRUCTORS
    Vsparrow__Syms(VerilatedContext* contextp, const char* namep, Vsparrow* modelp);
    ~Vsparrow__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
