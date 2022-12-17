// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsparrow.h"
#include "Vsparrow__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsparrow::Vsparrow(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsparrow__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , holdn{vlSymsp->TOP.holdn}
    , ra0{vlSymsp->TOP.ra0}
    , ra1{vlSymsp->TOP.ra1}
    , ra2{vlSymsp->TOP.ra2}
    , ra3{vlSymsp->TOP.ra3}
    , rb0{vlSymsp->TOP.rb0}
    , rb1{vlSymsp->TOP.rb1}
    , rb2{vlSymsp->TOP.rb2}
    , rb3{vlSymsp->TOP.rb3}
    , op1{vlSymsp->TOP.op1}
    , op2{vlSymsp->TOP.op2}
    , rc_we{vlSymsp->TOP.rc_we}
    , bp{vlSymsp->TOP.bp}
    , result0{vlSymsp->TOP.result0}
    , result1{vlSymsp->TOP.result1}
    , bpv{vlSymsp->TOP.bpv}
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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> Vsparrow::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsparrow___024root__trace_init_top(Vsparrow___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsparrow___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsparrow___024root*>(voidSelf);
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsparrow___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsparrow___024root__trace_register(Vsparrow___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsparrow::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsparrow::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsparrow___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
