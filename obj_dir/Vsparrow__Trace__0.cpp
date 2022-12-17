// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsparrow__Syms.h"


void Vsparrow___024root__trace_chg_sub_0(Vsparrow___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsparrow___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root__trace_chg_top_0\n"); );
    // Init
    Vsparrow___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsparrow___024root*>(voidSelf);
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsparrow___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsparrow___024root__trace_chg_sub_0(Vsparrow___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->wrapper__DOT__sdi),375);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+12,(vlSelf->wrapper__DOT__sdo),96);
        bufp->chgWData(oldp+15,(vlSelf->wrapper__DOT__jack__DOT__rin),206);
        bufp->chgIData(oldp+22,(vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029),18);
        bufp->chgIData(oldp+23,(vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029),18);
        bufp->chgIData(oldp+24,(vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029),18);
        bufp->chgIData(oldp+25,(vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029),18);
        bufp->chgSData(oldp+26,(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029),16);
        bufp->chgSData(oldp+27,(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029),16);
        bufp->chgSData(oldp+28,(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029),16);
        bufp->chgSData(oldp+29,(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029),16);
        bufp->chgWData(oldp+30,(vlSelf->wrapper__DOT__jack__DOT__v),206);
        bufp->chgIData(oldp+37,(vlSelf->wrapper__DOT__jack__DOT__op1),32);
        bufp->chgIData(oldp+38,(vlSelf->wrapper__DOT__jack__DOT__op2),32);
        bufp->chgIData(oldp+39,(vlSelf->wrapper__DOT__jack__DOT__rs1),32);
        bufp->chgIData(oldp+40,(vlSelf->wrapper__DOT__jack__DOT__rs2),32);
        bufp->chgQData(oldp+41,(vlSelf->wrapper__DOT__jack__DOT__s1_res),64);
        bufp->chgQData(oldp+43,(vlSelf->wrapper__DOT__jack__DOT__s1_ra),64);
        bufp->chgQData(oldp+45,(vlSelf->wrapper__DOT__jack__DOT__s1_r2),64);
        bufp->chgQData(oldp+47,(vlSelf->wrapper__DOT__jack__DOT__add_res),64);
        bufp->chgQData(oldp+49,(vlSelf->wrapper__DOT__jack__DOT__sub_res),64);
        bufp->chgQData(oldp+51,(vlSelf->wrapper__DOT__jack__DOT__mul_res),64);
        bufp->chgQData(oldp+53,(vlSelf->wrapper__DOT__jack__DOT__max_res),64);
        bufp->chgQData(oldp+55,(vlSelf->wrapper__DOT__jack__DOT__min_res),64);
        bufp->chgQData(oldp+57,(vlSelf->wrapper__DOT__jack__DOT__logic_res),64);
        bufp->chgQData(oldp+59,(vlSelf->wrapper__DOT__jack__DOT__shift_res),64);
        bufp->chgCData(oldp+61,(vlSelf->wrapper__DOT__jack__DOT__s1_alusel),4);
        bufp->chgIData(oldp+62,(vlSelf->wrapper__DOT__jack__DOT__s2sum_res),32);
        bufp->chgIData(oldp+63,(vlSelf->wrapper__DOT__jack__DOT__s2max_res),32);
        bufp->chgIData(oldp+64,(vlSelf->wrapper__DOT__jack__DOT__s2min_res),32);
        bufp->chgIData(oldp+65,(vlSelf->wrapper__DOT__jack__DOT__s2xor_res),32);
        bufp->chgBit(oldp+66,(vlSelf->wrapper__DOT__jack__DOT__sign));
        bufp->chgIData(oldp+67,(vlSelf->wrapper__DOT__jack__DOT__s2_res),32);
        bufp->chgSData(oldp+68,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z),16);
        bufp->chgSData(oldp+69,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__nz),16);
        bufp->chgCData(oldp+70,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a),8);
        bufp->chgCData(oldp+71,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b),8);
        bufp->chgBit(oldp+72,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signA));
        bufp->chgBit(oldp+73,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signB));
        bufp->chgBit(oldp+74,((1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029)));
        bufp->chgCData(oldp+75,(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__mux),3);
        bufp->chgSData(oldp+76,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z),16);
        bufp->chgSData(oldp+77,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__nz),16);
        bufp->chgCData(oldp+78,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a),8);
        bufp->chgCData(oldp+79,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b),8);
        bufp->chgBit(oldp+80,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signA));
        bufp->chgBit(oldp+81,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signB));
        bufp->chgBit(oldp+82,((1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029)));
        bufp->chgCData(oldp+83,(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__mux),3);
        bufp->chgSData(oldp+84,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z),16);
        bufp->chgSData(oldp+85,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__nz),16);
        bufp->chgCData(oldp+86,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a),8);
        bufp->chgCData(oldp+87,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b),8);
        bufp->chgBit(oldp+88,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signA));
        bufp->chgBit(oldp+89,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signB));
        bufp->chgBit(oldp+90,((1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029)));
        bufp->chgCData(oldp+91,(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__mux),3);
        bufp->chgSData(oldp+92,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z),16);
        bufp->chgSData(oldp+93,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__nz),16);
        bufp->chgCData(oldp+94,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a),8);
        bufp->chgCData(oldp+95,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b),8);
        bufp->chgBit(oldp+96,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signA));
        bufp->chgBit(oldp+97,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signB));
        bufp->chgBit(oldp+98,((1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029)));
        bufp->chgCData(oldp+99,(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__mux),3);
        bufp->chgIData(oldp+100,(vlSelf->wrapper__DOT__jack__DOT__unnamedblk11__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgWData(oldp+101,(vlSelf->wrapper__DOT__jack__DOT__r),206);
    }
    bufp->chgBit(oldp+108,(vlSelf->clk));
    bufp->chgBit(oldp+109,(vlSelf->rstn));
    bufp->chgBit(oldp+110,(vlSelf->holdn));
    bufp->chgCData(oldp+111,(vlSelf->ra0),8);
    bufp->chgCData(oldp+112,(vlSelf->ra1),8);
    bufp->chgCData(oldp+113,(vlSelf->ra2),8);
    bufp->chgCData(oldp+114,(vlSelf->ra3),8);
    bufp->chgCData(oldp+115,(vlSelf->rb0),8);
    bufp->chgCData(oldp+116,(vlSelf->rb1),8);
    bufp->chgCData(oldp+117,(vlSelf->rb2),8);
    bufp->chgCData(oldp+118,(vlSelf->rb3),8);
    bufp->chgCData(oldp+119,(vlSelf->op1),5);
    bufp->chgCData(oldp+120,(vlSelf->op2),3);
    bufp->chgBit(oldp+121,(vlSelf->rc_we));
    bufp->chgWData(oldp+122,(vlSelf->ctrl),268);
    bufp->chgIData(oldp+131,(vlSelf->bpv),32);
    bufp->chgCData(oldp+132,(vlSelf->bp),2);
    bufp->chgSData(oldp+133,(vlSelf->result0),16);
    bufp->chgSData(oldp+134,(vlSelf->result1),16);
    bufp->chgIData(oldp+135,(vlSelf->s1bp),32);
    bufp->chgIData(oldp+136,(vlSelf->s2bp),32);
}

void Vsparrow___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root__trace_cleanup\n"); );
    // Init
    Vsparrow___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsparrow___024root*>(voidSelf);
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
