// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsparrow.h for the primary calling header

#ifndef VERILATED_VSPARROW_SPARROW_H_
#define VERILATED_VSPARROW_SPARROW_H_  // guard

#include "verilated.h"

class Vsparrow__Syms;

class Vsparrow_sparrow final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsparrow__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsparrow_sparrow(Vsparrow__Syms* symsp, const char* name);
    ~Vsparrow_sparrow();
    VL_UNCOPYABLE(Vsparrow_sparrow);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
