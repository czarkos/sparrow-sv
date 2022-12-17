// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsparrow.h"
#include "Vsparrow__Syms.h"

//============================================================
// Constructors

Vsparrow::Vsparrow(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsparrow__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , holdn{vlSymsp->TOP.holdn}
    , op1{vlSymsp->TOP.op1}
    , op2{vlSymsp->TOP.op2}
    , rc_we{vlSymsp->TOP.rc_we}
    , bp{vlSymsp->TOP.bp}
    , ra{vlSymsp->TOP.ra}
    , rb{vlSymsp->TOP.rb}
    , bpv{vlSymsp->TOP.bpv}
    , result{vlSymsp->TOP.result}
    , s1bp{vlSymsp->TOP.s1bp}
    , s2bp{vlSymsp->TOP.s2bp}
    , ctrl{vlSymsp->TOP.ctrl}
    , __PVT__sparrow{vlSymsp->TOP.__PVT__sparrow}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsparrow::Vsparrow(const char* _vcname__)
    : Vsparrow(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsparrow::~Vsparrow() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsparrow___024root___eval_debug_assertions(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG
void Vsparrow___024root___eval_static(Vsparrow___024root* vlSelf);
void Vsparrow___024root___eval_initial(Vsparrow___024root* vlSelf);
void Vsparrow___024root___eval_settle(Vsparrow___024root* vlSelf);
void Vsparrow___024root___eval(Vsparrow___024root* vlSelf);

void Vsparrow::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsparrow::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsparrow___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsparrow___024root___eval_static(&(vlSymsp->TOP));
        Vsparrow___024root___eval_initial(&(vlSymsp->TOP));
        Vsparrow___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsparrow___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool Vsparrow::eventsPending() { return false; }

uint64_t Vsparrow::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsparrow::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsparrow___024root___eval_final(Vsparrow___024root* vlSelf);

VL_ATTR_COLD void Vsparrow::final() {
    Vsparrow___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsparrow::hierName() const { return vlSymsp->name(); }
const char* Vsparrow::modelName() const { return "Vsparrow"; }
unsigned Vsparrow::threads() const { return 1; }
