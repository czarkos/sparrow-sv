// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow__Syms.h"
#include "Vsparrow___024unit.h"

void Vsparrow___024unit___ctor_var_reset(Vsparrow___024unit* vlSelf);

Vsparrow___024unit::Vsparrow___024unit(Vsparrow__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsparrow___024unit___ctor_var_reset(this);
}

void Vsparrow___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsparrow___024unit::~Vsparrow___024unit() {
}
