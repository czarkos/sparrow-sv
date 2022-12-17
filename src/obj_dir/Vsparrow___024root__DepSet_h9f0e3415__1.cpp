// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow___024root.h"

void Vsparrow___024root___nba_sequent__TOP__0(Vsparrow___024root* vlSelf);
void Vsparrow___024root___nba_comb__TOP__0(Vsparrow___024root* vlSelf);

void Vsparrow___024root___eval_nba(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vsparrow___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vsparrow___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vsparrow___024root___eval_triggers__ico(Vsparrow___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__ico(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG
void Vsparrow___024root___eval_ico(Vsparrow___024root* vlSelf);
void Vsparrow___024root___eval_triggers__act(Vsparrow___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__act(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG
void Vsparrow___024root___eval_act(Vsparrow___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__nba(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG

void Vsparrow___024root___eval(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsparrow___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                Vsparrow___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("wrapper.sv", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsparrow___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsparrow___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vsparrow___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("wrapper.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsparrow___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vsparrow___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("wrapper.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsparrow___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsparrow___024root___eval_debug_assertions(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->holdn & 0xfeU))) {
        Verilated::overWidthError("holdn");}
    if (VL_UNLIKELY((vlSelf->op1 & 0xe0U))) {
        Verilated::overWidthError("op1");}
    if (VL_UNLIKELY((vlSelf->op2 & 0xf8U))) {
        Verilated::overWidthError("op2");}
    if (VL_UNLIKELY((vlSelf->rc_we & 0xfeU))) {
        Verilated::overWidthError("rc_we");}
    if (VL_UNLIKELY((vlSelf->bp & 0xfcU))) {
        Verilated::overWidthError("bp");}
}
#endif  // VL_DEBUG
