// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow__Syms.h"
#include "Vsparrow___024root.h"

void Vsparrow___024root___ctor_var_reset(Vsparrow___024root* vlSelf);

Vsparrow___024root::Vsparrow___024root(Vsparrow__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsparrow___024root___ctor_var_reset(this);
}

void Vsparrow___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsparrow___024root::~Vsparrow___024root() {
}
