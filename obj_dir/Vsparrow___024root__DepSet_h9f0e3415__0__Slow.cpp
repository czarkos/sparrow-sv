// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow___024root.h"

VL_ATTR_COLD void Vsparrow___024root___eval_static(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsparrow___024root___eval_initial(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029;
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vsparrow___024root___eval_final(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsparrow___024root___eval_triggers__stl(Vsparrow___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__stl(Vsparrow___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___eval_stl(Vsparrow___024root* vlSelf);

VL_ATTR_COLD void Vsparrow___024root___eval_settle(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsparrow___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vsparrow___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("src/wrapper.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsparrow___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__stl(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] wrapper.jack.lpmulo(3) or [hybrid] wrapper.jack.lpmulo(2) or [hybrid] wrapper.jack.lpmulo(1) or [hybrid] wrapper.jack.lpmulo(0))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsparrow___024root___stl_comb__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___stl_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__;
    CData/*7:0*/ wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__;
    CData/*0:0*/ wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__data;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__data;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bpv;
    CData/*1:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bp_sel;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__reg_sel;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__data;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bpv;
    CData/*1:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bp_sel;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__reg_sel;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__data;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__vec;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__Vfuncout;
    CData/*4:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op2;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__sign;
    CData/*4:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__7__sel;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__18__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__18__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__18__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__18__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__19__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__19__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__20__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__20__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__20__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__20__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__hp;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__22__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__33__value;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__33__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__36__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__36__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__36__z;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__rs2;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__add_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__sub_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__max_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__min_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__logic_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__shift_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__mul_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__37__s1_res;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__39__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__39__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__39__sat;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__44__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__44__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__44__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__47__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__47__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__47__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__ra;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__sum_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__max_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__min_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__xor_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__51__rc;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__tmp_a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__tmp_a;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__mulres;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__tmp_a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__tmp_a;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__mulres;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__tmp_a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__tmp_a;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__mulres;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__tmp_a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__tmp_a;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__mulres;
    // Body
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__data 
        = ((vlSelf->wrapper__DOT__sdi[0xbU] << 9U) 
           | (vlSelf->wrapper__DOT__sdi[0xaU] >> 0x17U));
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__vec 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__data;
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[5U] = ((0x3fffU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[5U]) 
                                              | (__Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__Vfuncout 
                                                 << 0xeU));
    vlSelf->wrapper__DOT__jack__DOT__v[6U] = (__Vfunc_wrapper__DOT__jack__DOT__word_to_vector__0__Vfuncout 
                                              >> 0x12U);
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__data 
        = ((vlSelf->wrapper__DOT__sdi[0xaU] << 9U) 
           | (vlSelf->wrapper__DOT__sdi[9U] >> 0x17U));
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__vec 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__data;
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[4U] = ((0x1fU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[4U]) 
                                              | ((IData)(
                                                         (((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__Vfuncout)) 
                                                           << 9U) 
                                                          | (QData)((IData)(
                                                                            (0x1ffU 
                                                                             & (vlSelf->wrapper__DOT__sdi[9U] 
                                                                                >> 0xeU)))))) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[5U] = ((0xffffc000U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[5U]) 
                                              | (((IData)(
                                                          (((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__Vfuncout)) 
                                                            << 9U) 
                                                           | (QData)((IData)(
                                                                             (0x1ffU 
                                                                              & (vlSelf->wrapper__DOT__sdi[9U] 
                                                                                >> 0xeU)))))) 
                                                  >> 0x1bU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__word_to_vector__1__Vfuncout)) 
                                                               << 9U) 
                                                              | (QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (vlSelf->wrapper__DOT__sdi[9U] 
                                                                                >> 0xeU))))) 
                                                             >> 0x20U)) 
                                                    << 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__reg_sel = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bp_sel 
        = (3U & vlSelf->wrapper__DOT__sdi[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__data 
        = ((vlSelf->wrapper__DOT__sdi[1U] << 0x1eU) 
           | (vlSelf->wrapper__DOT__sdi[0U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__vec 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__data;
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__vec;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bpv 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__3__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__vec 
        = ((vlSelf->wrapper__DOT__jack__DOT__r[6U] 
            << 0x12U) | (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                         >> 0xeU));
    {
        {
            if ((1U & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bp_sel) 
                       >> (1U & __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__reg_sel)))) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__bpv;
                goto __Vlabel2;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__vec;
                goto __Vlabel1;
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__op1 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__reg_sel = 1U;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bp_sel 
        = (3U & vlSelf->wrapper__DOT__sdi[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__data 
        = ((vlSelf->wrapper__DOT__sdi[1U] << 0x1eU) 
           | (vlSelf->wrapper__DOT__sdi[0U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__vec 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__data;
    __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__vec;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bpv 
        = __Vfunc_wrapper__DOT__jack__DOT__word_to_vector__5__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__vec 
        = ((vlSelf->wrapper__DOT__jack__DOT__r[5U] 
            << 0x12U) | (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                         >> 0xeU));
    {
        {
            if ((1U & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bp_sel) 
                       >> (1U & __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__reg_sel)))) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__bpv;
                goto __Vlabel4;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__vec;
                goto __Vlabel3;
            }
            __Vlabel4: ;
        }
        __Vlabel3: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__op2 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__rs1 = vlSelf->wrapper__DOT__jack__DOT__op1;
    vlSelf->wrapper__DOT__jack__DOT__rs2 = vlSelf->wrapper__DOT__jack__DOT__op2;
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__ 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs1);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__ 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs2);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__ 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                    >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__ 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__ 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                    >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__ 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__ 
        = (vlSelf->wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__ 
        = (vlSelf->wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op2 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__sign 
        = (1U & ((((1U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1)) 
                   | (0U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1))) 
                  | (0x10U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1)))
                  ? ((~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op2) 
                         >> 2U)) & (((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op2) 
                                     >> 1U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op2)))
                  : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__op1) 
                        >> 4U))));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__sign;
    vlSelf->wrapper__DOT__jack__DOT__sign = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__6__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__7__sel 
        = (((0xdU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)) 
            | (0x1dU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)))
            ? 1U : (((0xeU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)) 
                     | (0x1eU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)))
                     ? 2U : (((0xfU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)) 
                              | (0x1fU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)))
                              ? 3U : (((((((7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)) 
                                           | (8U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))) 
                                          | (9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))) 
                                         | (0xaU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))) 
                                        | (0xbU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))) 
                                       | (0xcU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)))
                                       ? 7U : ((0x10U 
                                                == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))
                                                ? 4U
                                                : (
                                                   ((0x11U 
                                                     == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)) 
                                                    | (0x19U 
                                                       == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op)))
                                                    ? 8U
                                                    : 
                                                   (7U 
                                                    & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__7__op))))))));
    vlSelf->wrapper__DOT__jack__DOT__s1_alusel = __Vtask_wrapper__DOT__jack__DOT__s1_mux__7__sel;
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sign = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__8__b = (0xffU 
                                                  & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__add__8__a = (0xffU 
                                                  & vlSelf->wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__8__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout;
                goto __Vlabel6;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout;
                goto __Vlabel5;
            }
            __Vlabel6: ;
        }
        __Vlabel5: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__b = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__a = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__13__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout;
                goto __Vlabel8;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout;
                goto __Vlabel7;
            }
            __Vlabel8: ;
        }
        __Vlabel7: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__b = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__max__18__a = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__18__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__18__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__b = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__min__20__a = (0xffU 
                                                   & vlSelf->wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__r[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__b = 
        (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__a = 
        (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            goto __Vlabel12;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z);
                            goto __Vlabel11;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout;
                            goto __Vlabel10;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout;
                            goto __Vlabel9;
                        }
                    }
                    __Vlabel12: ;
                }
                __Vlabel11: ;
            }
            __Vlabel10: ;
        }
        __Vlabel9: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            goto __Vlabel16;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z);
                            goto __Vlabel15;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout;
                            goto __Vlabel14;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout;
                            goto __Vlabel13;
                        }
                    }
                    __Vlabel16: ;
                }
                __Vlabel15: ;
            }
            __Vlabel14: ;
        }
        __Vlabel13: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0xeU));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__value 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__36__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sign = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__8__b = (0xffU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                     >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__a = (0xffU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                     >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__8__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout;
                goto __Vlabel18;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout;
                goto __Vlabel17;
            }
            __Vlabel18: ;
        }
        __Vlabel17: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__13__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout;
                goto __Vlabel20;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout;
                goto __Vlabel19;
            }
            __Vlabel20: ;
        }
        __Vlabel19: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__18__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__18__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__b = 
        (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                  >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__a = 
        (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                  >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            goto __Vlabel24;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z);
                            goto __Vlabel23;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout;
                            goto __Vlabel22;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout;
                            goto __Vlabel21;
                        }
                    }
                    __Vlabel24: ;
                }
                __Vlabel23: ;
            }
            __Vlabel22: ;
        }
        __Vlabel21: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            goto __Vlabel28;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z);
                            goto __Vlabel27;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout;
                            goto __Vlabel26;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout;
                            goto __Vlabel25;
                        }
                    }
                    __Vlabel28: ;
                }
                __Vlabel27: ;
            }
            __Vlabel26: ;
        }
        __Vlabel25: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0x16U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__36__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sign = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__8__b = (0xffU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                     >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__a = (0xffU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                     >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__8__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout;
                goto __Vlabel30;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout;
                goto __Vlabel29;
            }
            __Vlabel30: ;
        }
        __Vlabel29: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__13__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout;
                goto __Vlabel32;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout;
                goto __Vlabel31;
            }
            __Vlabel32: ;
        }
        __Vlabel31: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__18__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__18__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__b = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__a = (0xffU 
                                                   & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__b = 
        (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                  >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__a = 
        (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                  >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            goto __Vlabel36;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z);
                            goto __Vlabel35;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout;
                            goto __Vlabel34;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout;
                            goto __Vlabel33;
                        }
                    }
                    __Vlabel36: ;
                }
                __Vlabel35: ;
            }
            __Vlabel34: ;
        }
        __Vlabel33: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            goto __Vlabel40;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z);
                            goto __Vlabel39;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout;
                            goto __Vlabel38;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout;
                            goto __Vlabel37;
                        }
                    }
                    __Vlabel40: ;
                }
                __Vlabel39: ;
            }
            __Vlabel38: ;
        }
        __Vlabel37: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs1 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = (0xffU & ((vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                     << 2U) | (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                               >> 0x1eU)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__rs2 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__36__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__8__sign = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__8__b = (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                  >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__add__8__a = (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                  >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__8__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__8__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout;
                goto __Vlabel42;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__8__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout;
                goto __Vlabel41;
            }
            __Vlabel42: ;
        }
        __Vlabel41: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__b = (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__sub__13__a = (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__13__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__13__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout;
                goto __Vlabel44;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__13__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout;
                goto __Vlabel43;
            }
            __Vlabel44: ;
        }
        __Vlabel43: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__max__18__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__b = (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__max__18__a = (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__18__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__max__18__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__19__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__18__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__19__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__19__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__18__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__min__20__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__b = (vlSelf->wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__min__20__a = (vlSelf->wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__min__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__20__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh 
        = (vlSelf->wrapper__DOT__jack__DOT__r[0U] >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__b = 
        (vlSelf->wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__a = 
        (vlSelf->wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            goto __Vlabel48;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z);
                            goto __Vlabel47;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout;
                            goto __Vlabel46;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout;
                            goto __Vlabel45;
                        }
                    }
                    __Vlabel48: ;
                }
                __Vlabel47: ;
            }
            __Vlabel46: ;
        }
        __Vlabel45: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            goto __Vlabel52;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z);
                            goto __Vlabel51;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout;
                            goto __Vlabel50;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout;
                            goto __Vlabel49;
                        }
                    }
                    __Vlabel52: ;
                }
                __Vlabel51: ;
            }
            __Vlabel50: ;
        }
        __Vlabel49: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__22__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__22__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b 
        = (vlSelf->wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a 
        = (vlSelf->wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__34__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__34__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__33__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__33__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                    >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                 << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__sign 
        = vlSelf->wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__value 
        = (vlSelf->wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__36__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__36__Vfuncout)) 
                                                 << 0x30U));
    vlSelf->wrapper__DOT__jack__DOT__unnamedblk11__DOT__i = 4U;
    vlSelf->wrapper__DOT__jack__DOT__mul_res = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029))));
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__mul_res 
        = vlSelf->wrapper__DOT__jack__DOT__mul_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__shift_res 
        = vlSelf->wrapper__DOT__jack__DOT__shift_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__logic_res 
        = vlSelf->wrapper__DOT__jack__DOT__logic_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__min_res 
        = vlSelf->wrapper__DOT__jack__DOT__min_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__max_res 
        = vlSelf->wrapper__DOT__jack__DOT__max_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__sub_res 
        = vlSelf->wrapper__DOT__jack__DOT__sub_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__add_res 
        = vlSelf->wrapper__DOT__jack__DOT__add_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__rs2 
        = vlSelf->wrapper__DOT__jack__DOT__s1_r2;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__ra 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel 
        = vlSelf->wrapper__DOT__jack__DOT__s1_alusel;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__37__s1_res 
        = ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
            ? ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                ? 0ULL : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                           ? 0ULL : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                                      ? 0ULL : __Vtask_wrapper__DOT__jack__DOT__s1_select__37__shift_res)))
            : ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__37__logic_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__37__min_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__37__max_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__37__rs2))
                : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__37__mul_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__37__sub_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__37__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__37__add_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__37__ra))));
    vlSelf->wrapper__DOT__jack__DOT__s1_res = __Vtask_wrapper__DOT__jack__DOT__s1_select__37__s1_res;
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((1U & 
                                               vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | (((IData)(vlSelf->wrapper__DOT__jack__DOT__s1_res) 
                                                  << 5U) 
                                                 | ((0x1cU 
                                                     & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                        >> 4U)) 
                                                    | (2U 
                                                       & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                          >> 0xbU)))));
    vlSelf->wrapper__DOT__jack__DOT__v[3U] = ((1U & 
                                               ((IData)(vlSelf->wrapper__DOT__jack__DOT__s1_res) 
                                                >> 0x1bU)) 
                                              | ((0x1eU 
                                                  & ((IData)(vlSelf->wrapper__DOT__jack__DOT__s1_res) 
                                                     >> 0x1bU)) 
                                                 | ((IData)(
                                                            (vlSelf->wrapper__DOT__jack__DOT__s1_res 
                                                             >> 0x20U)) 
                                                    << 5U)));
    vlSelf->wrapper__DOT__jack__DOT__v[4U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[4U]) 
                                              | ((1U 
                                                  & ((IData)(
                                                             (vlSelf->wrapper__DOT__jack__DOT__s1_res 
                                                              >> 0x20U)) 
                                                     >> 0x1bU)) 
                                                 | (0x1eU 
                                                    & ((IData)(
                                                               (vlSelf->wrapper__DOT__jack__DOT__s1_res 
                                                                >> 0x20U)) 
                                                       >> 0x1bU))));
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0xfffffffeU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | (1U 
                                                 & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                    >> 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data 
                                     >> 0x28U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data 
                                      >> 0x18U)) << 8U)) 
                 | (0xffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data 
                                     >> 8U))))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__data 
                       >> 0x38U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[0U] = __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__sum__39__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
               >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__sum__39__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__sum__39__a = (
                                                   ((QData)((IData)(
                                                                    vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                                         >> 5U)));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc = 0U;
            if (__Vfunc_wrapper__DOT__jack__DOT__sum__39__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__39__a))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__39__a 
                                                          >> 0x10U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__39__a 
                                                          >> 0x20U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__39__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__Vfuncout;
                goto __Vlabel54;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__39__a)));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__39__a 
                                             >> 0x10U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__39__a 
                                             >> 0x20U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__39__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__Vfuncout;
                goto __Vlabel53;
            }
            __Vlabel54: ;
        }
        __Vlabel53: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__s2sum_res = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__44__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a)));
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                           >> 0x10U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                           >> 0x20U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                 >> 0x10U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                 >> 0x20U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                 >> 0x30U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__44__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__44__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__s2max_res = __Vfunc_wrapper__DOT__jack__DOT__max_red__44__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__47__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a)));
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                           >> 0x10U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                           >> 0x20U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                 >> 0x10U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                 >> 0x20U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                 >> 0x30U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__47__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__47__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__s2min_res = __Vfunc_wrapper__DOT__jack__DOT__min_red__47__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc 
        = (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a 
                             >> 0x10U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a 
                             >> 0x20U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__a 
                             >> 0x30U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__acc;
    vlSelf->wrapper__DOT__jack__DOT__s2xor_res = __Vfunc_wrapper__DOT__jack__DOT__xor_red__50__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__xor_res 
        = vlSelf->wrapper__DOT__jack__DOT__s2xor_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__min_res 
        = vlSelf->wrapper__DOT__jack__DOT__s2min_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__max_res 
        = vlSelf->wrapper__DOT__jack__DOT__s2max_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__sum_res 
        = vlSelf->wrapper__DOT__jack__DOT__s2sum_res;
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__ra 
        = __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                 >> 2U));
    __Vtask_wrapper__DOT__jack__DOT__s2_select__51__rc 
        = ((0U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel))
            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__51__ra
            : (((1U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)) 
                | (5U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)))
                ? __Vtask_wrapper__DOT__jack__DOT__s2_select__51__sum_res
                : (((2U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)) 
                    | (6U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)))
                    ? __Vtask_wrapper__DOT__jack__DOT__s2_select__51__max_res
                    : (((3U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)) 
                        | (7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel)))
                        ? __Vtask_wrapper__DOT__jack__DOT__s2_select__51__min_res
                        : ((4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__51__sel))
                            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__51__xor_res
                            : __Vtask_wrapper__DOT__jack__DOT__s2_select__51__ra)))));
    vlSelf->wrapper__DOT__jack__DOT__s2_res = __Vtask_wrapper__DOT__jack__DOT__s2_select__51__rc;
    vlSelf->wrapper__DOT__jack__DOT__v[1U] = vlSelf->wrapper__DOT__jack__DOT__s2_res;
    vlSelf->wrapper__DOT__sdo[2U] = vlSelf->wrapper__DOT__jack__DOT__r[1U];
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data;
    vlSelf->wrapper__DOT__sdo[0U] = (IData)((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__Vfuncout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->wrapper__DOT__jack__DOT__v[1U]))));
    vlSelf->wrapper__DOT__sdo[1U] = (IData)(((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__Vfuncout)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->wrapper__DOT__jack__DOT__v[1U]))) 
                                             >> 0x20U));
    vlSelf->wrapper__DOT__jack__DOT__rin[0U] = vlSelf->wrapper__DOT__jack__DOT__v[0U];
    vlSelf->wrapper__DOT__jack__DOT__rin[1U] = vlSelf->wrapper__DOT__jack__DOT__v[1U];
    vlSelf->wrapper__DOT__jack__DOT__rin[2U] = vlSelf->wrapper__DOT__jack__DOT__v[2U];
    vlSelf->wrapper__DOT__jack__DOT__rin[3U] = vlSelf->wrapper__DOT__jack__DOT__v[3U];
    vlSelf->wrapper__DOT__jack__DOT__rin[4U] = vlSelf->wrapper__DOT__jack__DOT__v[4U];
    vlSelf->wrapper__DOT__jack__DOT__rin[5U] = vlSelf->wrapper__DOT__jack__DOT__v[5U];
    vlSelf->wrapper__DOT__jack__DOT__rin[6U] = vlSelf->wrapper__DOT__jack__DOT__v[6U];
    vlSelf->result0 = (0xffffU & vlSelf->wrapper__DOT__sdo[2U]);
    vlSelf->s1bp = vlSelf->wrapper__DOT__sdo[1U];
    vlSelf->result1 = (vlSelf->wrapper__DOT__sdo[2U] 
                       >> 0x10U);
    vlSelf->s2bp = vlSelf->wrapper__DOT__sdo[0U];
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__))));
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__))));
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__))));
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__))));
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signA 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                 >> 0x11U));
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signB 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                    >> 0xaU));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signA))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__54__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                      >> 0xaU)));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                    >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signB))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__55__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                      >> 2U)));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__z);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__56__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__z2 
        = (0xffU & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sat 
        = (1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sign 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__rsign 
        = (1U & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__bsign 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__asign 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__sel;
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__mux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__57__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__nz 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__58__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__nr 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__nz;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__r 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__59__mulres;
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signA 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                 >> 0x11U));
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signB 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                    >> 0xaU));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signA))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__60__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                      >> 0xaU)));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                    >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signB))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__61__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                      >> 2U)));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__z);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__62__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__z2 
        = (0xffU & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sat 
        = (1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sign 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__rsign 
        = (1U & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__bsign 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__asign 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__sel;
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__mux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__63__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__nz 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__64__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__nr 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__nz;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__r 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__65__mulres;
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signA 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                 >> 0x11U));
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signB 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                    >> 0xaU));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signA))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__66__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                      >> 0xaU)));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                    >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signB))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__67__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                      >> 2U)));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__z);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__68__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__z2 
        = (0xffU & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sat 
        = (1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sign 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__rsign 
        = (1U & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__bsign 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__asign 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__sel;
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__mux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__69__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__nz 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__70__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__nr 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__nz;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__r 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__71__mulres;
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signA 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                 >> 0x11U));
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signB 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                    >> 0xaU));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signA))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__72__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                      >> 0xaU)));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__a 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                    >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__tmp_a 
        = (0xffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b = 
        (0xffU & (((vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                    >> 1U) & (IData)(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signB))
                   ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__73__Vfuncout)
                   : (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                      >> 2U)));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__z);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__74__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__z2 
        = (0xffU & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sat 
        = (1U & vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sign 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__rsign 
        = (1U & ((IData)(vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__bsign 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__asign 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__sel;
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__mux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__75__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__tmp_a;
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__nz 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__76__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__nr 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__nz;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__r 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__77__mulres;
}

void Vsparrow___024root___ico_sequent__TOP__0(Vsparrow___024root* vlSelf);

VL_ATTR_COLD void Vsparrow___024root___eval_stl(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vsparrow___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vsparrow___024root___stl_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__ico(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] wrapper.jack.lpmulo(3) or [hybrid] wrapper.jack.lpmulo(2) or [hybrid] wrapper.jack.lpmulo(1) or [hybrid] wrapper.jack.lpmulo(0))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__act(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] wrapper.jack.lpmulo(3) or [hybrid] wrapper.jack.lpmulo(2) or [hybrid] wrapper.jack.lpmulo(1) or [hybrid] wrapper.jack.lpmulo(0))\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparrow___024root___dump_triggers__nba(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] wrapper.jack.lpmulo(3) or [hybrid] wrapper.jack.lpmulo(2) or [hybrid] wrapper.jack.lpmulo(1) or [hybrid] wrapper.jack.lpmulo(0))\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsparrow___024root___ctor_var_reset(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->holdn = VL_RAND_RESET_I(1);
    vlSelf->ra0 = VL_RAND_RESET_I(8);
    vlSelf->ra1 = VL_RAND_RESET_I(8);
    vlSelf->ra2 = VL_RAND_RESET_I(8);
    vlSelf->ra3 = VL_RAND_RESET_I(8);
    vlSelf->rb0 = VL_RAND_RESET_I(8);
    vlSelf->rb1 = VL_RAND_RESET_I(8);
    vlSelf->rb2 = VL_RAND_RESET_I(8);
    vlSelf->rb3 = VL_RAND_RESET_I(8);
    vlSelf->op1 = VL_RAND_RESET_I(5);
    vlSelf->op2 = VL_RAND_RESET_I(3);
    vlSelf->rc_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(268, vlSelf->ctrl);
    vlSelf->bpv = VL_RAND_RESET_I(32);
    vlSelf->bp = VL_RAND_RESET_I(2);
    vlSelf->result0 = VL_RAND_RESET_I(16);
    vlSelf->result1 = VL_RAND_RESET_I(16);
    vlSelf->s1bp = VL_RAND_RESET_I(32);
    vlSelf->s2bp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(375, vlSelf->wrapper__DOT__sdi);
    VL_RAND_RESET_W(96, vlSelf->wrapper__DOT__sdo);
    VL_RAND_RESET_W(206, vlSelf->wrapper__DOT__jack__DOT__r);
    VL_RAND_RESET_W(206, vlSelf->wrapper__DOT__jack__DOT__rin);
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0280__029 = VL_RAND_RESET_I(18);
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0281__029 = VL_RAND_RESET_I(18);
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0282__029 = VL_RAND_RESET_I(18);
    vlSelf->wrapper__DOT__jack__DOT__lpmuli__0283__029 = VL_RAND_RESET_I(18);
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029 = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029 = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029 = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(206, vlSelf->wrapper__DOT__jack__DOT__v);
    vlSelf->wrapper__DOT__jack__DOT__op1 = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__s1_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__mul_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__max_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__min_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__logic_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->wrapper__DOT__jack__DOT__s1_alusel = VL_RAND_RESET_I(4);
    vlSelf->wrapper__DOT__jack__DOT__s2sum_res = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__s2max_res = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__s2min_res = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__s2xor_res = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__s2_res = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__unnamedblk11__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__z = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__nz = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__inverted_a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__inverted_b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signA = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__signB = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__mux = VL_RAND_RESET_I(3);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__z = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__nz = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__inverted_a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__inverted_b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signA = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__signB = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__mux = VL_RAND_RESET_I(3);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__z = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__nz = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__inverted_a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__inverted_b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signA = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__signB = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__mux = VL_RAND_RESET_I(3);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__z = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__nz = VL_RAND_RESET_I(16);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__inverted_a = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__inverted_b = VL_RAND_RESET_I(8);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signA = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__signB = VL_RAND_RESET_I(1);
    vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__mux = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__8__z = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__13__z = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__39__acc = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__41__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__sat = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__ret = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__max_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__min_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__43__ret_val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029 = VL_RAND_RESET_I(16);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
