// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsparrow.h for the primary calling header

#ifndef VERILATED_VSPARROW___024UNIT_H_
#define VERILATED_VSPARROW___024UNIT_H_  // guard

#include "verilated.h"

class Vsparrow__Syms;

class Vsparrow___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsparrow__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsparrow___024unit(Vsparrow__Syms* symsp, const char* name);
    ~Vsparrow___024unit();
    VL_UNCOPYABLE(Vsparrow___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
