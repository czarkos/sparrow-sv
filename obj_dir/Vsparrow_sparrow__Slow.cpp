// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow__Syms.h"
#include "Vsparrow_sparrow.h"

void Vsparrow_sparrow___ctor_var_reset(Vsparrow_sparrow* vlSelf);

Vsparrow_sparrow::Vsparrow_sparrow(Vsparrow__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsparrow_sparrow___ctor_var_reset(this);
}

void Vsparrow_sparrow::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsparrow_sparrow::~Vsparrow_sparrow() {
}
