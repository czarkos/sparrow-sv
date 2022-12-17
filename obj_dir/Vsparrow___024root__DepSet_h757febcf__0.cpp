// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow__Syms.h"
#include "Vsparrow___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__ico(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG

void Vsparrow___024root___eval_triggers__ico(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = (((((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                        | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029))) 
                                       | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029))) 
                                      | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029)));
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsparrow___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__act(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG

void Vsparrow___024root___eval_triggers__act(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                        | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029))) 
                                       | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029))) 
                                      | ((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsparrow___024root___dump_triggers__act(vlSelf);
    }
#endif
}
