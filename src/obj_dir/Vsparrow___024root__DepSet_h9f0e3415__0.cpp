// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparrow.h for the primary calling header

#include "verilated.h"

#include "Vsparrow___024root.h"

VL_INLINE_OPT void Vsparrow___024root___ico_sequent__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->wrapper__DOT__sdi[9U] = ((0x3fffU & vlSelf->wrapper__DOT__sdi[9U]) 
                                     | (((IData)((((QData)((IData)(vlSelf->ra)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->rb)))) 
                                         << 0x17U) 
                                        | (((IData)(vlSelf->op1) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->op2) 
                                               << 0xfU) 
                                              | ((IData)(vlSelf->rc_we) 
                                                 << 0xeU)))));
    vlSelf->wrapper__DOT__sdi[0xaU] = (((0x3fffU & 
                                         ((IData)((
                                                   ((QData)((IData)(vlSelf->ra)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->rb)))) 
                                          >> 9U)) | 
                                        ((0x3fffU & 
                                          ((IData)(vlSelf->op1) 
                                           >> 0xeU)) 
                                         | ((0x3fffU 
                                             & ((IData)(vlSelf->op2) 
                                                >> 0x11U)) 
                                            | ((IData)(vlSelf->rc_we) 
                                               >> 0x12U)))) 
                                       | ((0x7fc000U 
                                           & ((IData)(
                                                      (((QData)((IData)(vlSelf->ra)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->rb)))) 
                                              >> 9U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(vlSelf->ra)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->rb))) 
                                                      >> 0x20U)) 
                                             << 0x17U)));
    vlSelf->wrapper__DOT__sdi[0xbU] = (0x7fffffU & 
                                       ((0x3fffU & 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->ra)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->rb))) 
                                                   >> 0x20U)) 
                                          >> 9U)) | 
                                        (0x7fc000U 
                                         & ((IData)(
                                                    ((((QData)((IData)(vlSelf->ra)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->rb))) 
                                                     >> 0x20U)) 
                                            >> 9U))));
    vlSelf->wrapper__DOT__sdi[0U] = (IData)((((QData)((IData)(vlSelf->bpv)) 
                                              << 2U) 
                                             | (QData)((IData)(vlSelf->bp))));
    vlSelf->wrapper__DOT__sdi[1U] = ((vlSelf->ctrl[0U] 
                                      << 2U) | (IData)(
                                                       ((((QData)((IData)(vlSelf->bpv)) 
                                                          << 2U) 
                                                         | (QData)((IData)(vlSelf->bp))) 
                                                        >> 0x20U)));
    vlSelf->wrapper__DOT__sdi[2U] = ((vlSelf->ctrl[0U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[1U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[3U] = ((vlSelf->ctrl[1U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[2U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[4U] = ((vlSelf->ctrl[2U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[3U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[5U] = ((vlSelf->ctrl[3U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[4U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[6U] = ((vlSelf->ctrl[4U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[5U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[7U] = ((vlSelf->ctrl[5U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[6U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[8U] = ((vlSelf->ctrl[6U] 
                                      >> 0x1eU) | (
                                                   vlSelf->ctrl[7U] 
                                                   << 2U));
    vlSelf->wrapper__DOT__sdi[9U] = ((0xffffc000U & 
                                      vlSelf->wrapper__DOT__sdi[9U]) 
                                     | ((vlSelf->ctrl[7U] 
                                         >> 0x1eU) 
                                        | (vlSelf->ctrl[8U] 
                                           << 2U)));
}

VL_INLINE_OPT void Vsparrow___024root___ico_comb__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___ico_comb__TOP__0\n"); );
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
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul0__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul1__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul2__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul3__muli;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op2;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs2;
    QData/*63:0*/ wrapper__DOT__jack__DOT__s1_res;
    QData/*63:0*/ wrapper__DOT__jack__DOT__mul_res;
    CData/*3:0*/ wrapper__DOT__jack__DOT__s1_alusel;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2sum_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2max_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2min_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2xor_res;
    CData/*0:0*/ wrapper__DOT__jack__DOT__sign;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2_res;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul0__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul0__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul1__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul1__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul2__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul2__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul3__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul3__DOT__mux;
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
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    CData/*4:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    CData/*4:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__vector;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__original;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk;
    CData/*0:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
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
    wrapper__DOT__jack__DOT__op1 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
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
    wrapper__DOT__jack__DOT__op2 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[6U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[5U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[7U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[6U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[8U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[7U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[9U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[8U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
        = wrapper__DOT__jack__DOT__op1;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result;
    wrapper__DOT__jack__DOT__rs1 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[2U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[1U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[3U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[2U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[4U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[3U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[5U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[4U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
        = wrapper__DOT__jack__DOT__op2;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result;
    wrapper__DOT__jack__DOT__rs2 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__ 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__ 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign 
        = (1U & ((((1U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)) 
                   | (0U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1))) 
                  | (0x10U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)))
                  ? ((~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                         >> 2U)) & (((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                                     >> 1U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2)))
                  : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1) 
                        >> 4U))));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    wrapper__DOT__jack__DOT__sign = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel 
        = (((9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
            | (0x1dU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
            ? 1U : (((0xeU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                     | (0x1eU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                     ? 2U : (((0xfU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                              | (0x1fU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                              ? 3U : (((((((7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                           | (4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                          | (9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                         | (0xaU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                        | (0xbU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                       | (0xcU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                       ? 7U : ((0x10U 
                                                == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))
                                                ? 4U
                                                : (
                                                   ((0x11U 
                                                     == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                                    | (0x19U 
                                                       == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                                    ? 8U
                                                    : 
                                                   (7U 
                                                    & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))))))));
    wrapper__DOT__jack__DOT__s1_alusel = __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel6;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel5;
            }
            __Vlabel6: ;
        }
        __Vlabel5: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel8;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel7;
            }
            __Vlabel8: ;
        }
        __Vlabel7: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__r[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel12;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel11;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel10;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel16;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel15;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel14;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0xeU));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel18;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel17;
            }
            __Vlabel18: ;
        }
        __Vlabel17: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel20;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel19;
            }
            __Vlabel20: ;
        }
        __Vlabel19: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel24;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel23;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel22;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel28;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel27;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel26;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0x16U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel30;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel29;
            }
            __Vlabel30: ;
        }
        __Vlabel29: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel32;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel31;
            }
            __Vlabel32: ;
        }
        __Vlabel31: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel36;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel35;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel34;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel40;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel39;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel38;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & ((vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                     << 2U) | (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                               >> 0x1eU)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel42;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel41;
            }
            __Vlabel42: ;
        }
        __Vlabel41: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel44;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel43;
            }
            __Vlabel44: ;
        }
        __Vlabel43: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (vlSelf->wrapper__DOT__jack__DOT__r[0U] >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel48;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel47;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel46;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel52;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel51;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel50;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
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
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                    >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x30U));
    wrapper__DOT__jack__DOT__mul_res = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029)))) 
                                            << 0x10U) 
                                           | (QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029))));
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res 
        = wrapper__DOT__jack__DOT__mul_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res 
        = vlSelf->wrapper__DOT__jack__DOT__shift_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res 
        = vlSelf->wrapper__DOT__jack__DOT__logic_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res 
        = vlSelf->wrapper__DOT__jack__DOT__min_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res 
        = vlSelf->wrapper__DOT__jack__DOT__max_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res 
        = vlSelf->wrapper__DOT__jack__DOT__sub_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res 
        = vlSelf->wrapper__DOT__jack__DOT__add_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2 
        = vlSelf->wrapper__DOT__jack__DOT__s1_r2;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel 
        = wrapper__DOT__jack__DOT__s1_alusel;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res 
        = ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
            ? ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? 0ULL : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                           ? 0ULL : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                                      ? 0ULL : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res)))
            : ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2))
                : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra))));
    wrapper__DOT__jack__DOT__s1_res = __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra 
        = (1U & (vlSelf->wrapper__DOT__sdi[9U] >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk 
        = (0xfU & (vlSelf->wrapper__DOT__sdi[9U] >> 0xaU));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__original 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
        = wrapper__DOT__jack__DOT__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
        = ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra)
            ? __Vtask_wrapper__DOT__jack__DOT__mask__40__original
            : 0ULL);
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0x1fU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[3U] = (((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                               >> 0x1bU) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[4U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[4U]) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 >> 0x1bU));
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((0x1cU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                        >> 0xbU)) 
                                                    | (1U 
                                                       & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                          >> 5U)))));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 0x28U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                      >> 0x18U)) << 8U)) 
                 | (0xffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 8U))))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                       >> 0x38U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[0U] = __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
               >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__a = (
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
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc = 0U;
            if (__Vfunc_wrapper__DOT__jack__DOT__sum__42__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x10U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x20U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout;
                goto __Vlabel54;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a)));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x10U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x20U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
                goto __Vlabel53;
            }
            __Vlabel54: ;
        }
        __Vlabel53: ;
    }
    wrapper__DOT__jack__DOT__s2sum_res = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a)));
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x10U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x20U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x10U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x20U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x30U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    wrapper__DOT__jack__DOT__s2max_res = __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a)));
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x10U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x20U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x10U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x20U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x30U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    wrapper__DOT__jack__DOT__s2min_res = __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x10U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x20U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x30U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    wrapper__DOT__jack__DOT__s2xor_res = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res 
        = wrapper__DOT__jack__DOT__s2xor_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res 
        = wrapper__DOT__jack__DOT__s2min_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res 
        = wrapper__DOT__jack__DOT__s2max_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res 
        = wrapper__DOT__jack__DOT__s2sum_res;
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra 
        = __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                 >> 2U));
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc 
        = ((0U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra
            : (((1U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                | (5U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res
                : (((2U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                    | (6U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                    ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res
                    : (((3U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                        | (7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                        ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res
                        : ((4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
                            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res
                            : __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra)))));
    wrapper__DOT__jack__DOT__s2_res = __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    vlSelf->wrapper__DOT__jack__DOT__v[1U] = wrapper__DOT__jack__DOT__s2_res;
    vlSelf->wrapper__DOT__sdo[2U] = vlSelf->wrapper__DOT__jack__DOT__r[1U];
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data;
    vlSelf->wrapper__DOT__sdo[0U] = (IData)((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->wrapper__DOT__jack__DOT__v[1U]))));
    vlSelf->wrapper__DOT__sdo[1U] = (IData)(((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
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
    vlSelf->result = vlSelf->wrapper__DOT__sdo[2U];
    vlSelf->s2bp = vlSelf->wrapper__DOT__sdo[0U];
    vlSelf->s1bp = vlSelf->wrapper__DOT__sdo[1U];
    wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT__mul0__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul0__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    wrapper__DOT__jack__DOT__mul0__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    wrapper__DOT__jack__DOT__mul0__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel 
        = wrapper__DOT__jack__DOT__mul0__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    wrapper__DOT__jack__DOT__mul1__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul1__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    wrapper__DOT__jack__DOT__mul1__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    wrapper__DOT__jack__DOT__mul1__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel 
        = wrapper__DOT__jack__DOT__mul1__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    wrapper__DOT__jack__DOT__mul2__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul2__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    wrapper__DOT__jack__DOT__mul2__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    wrapper__DOT__jack__DOT__mul2__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel 
        = wrapper__DOT__jack__DOT__mul2__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    wrapper__DOT__jack__DOT__mul3__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul3__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    wrapper__DOT__jack__DOT__mul3__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    wrapper__DOT__jack__DOT__mul3__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel 
        = wrapper__DOT__jack__DOT__mul3__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
}

void Vsparrow___024root___eval_ico(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vsparrow___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        Vsparrow___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsparrow___024root___act_sequent__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___act_sequent__TOP__0\n"); );
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
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul0__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul1__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul2__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul3__muli;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op2;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs2;
    QData/*63:0*/ wrapper__DOT__jack__DOT__s1_res;
    QData/*63:0*/ wrapper__DOT__jack__DOT__mul_res;
    CData/*3:0*/ wrapper__DOT__jack__DOT__s1_alusel;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2sum_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2max_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2min_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2xor_res;
    CData/*0:0*/ wrapper__DOT__jack__DOT__sign;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2_res;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul0__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul0__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul1__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul1__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul2__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul2__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul3__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul3__DOT__mux;
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
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    CData/*4:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    CData/*4:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__vector;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__original;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk;
    CData/*0:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
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
                goto __Vlabel56;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__vec;
                goto __Vlabel55;
            }
            __Vlabel56: ;
        }
        __Vlabel55: ;
    }
    wrapper__DOT__jack__DOT__op1 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
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
                goto __Vlabel58;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__vec;
                goto __Vlabel57;
            }
            __Vlabel58: ;
        }
        __Vlabel57: ;
    }
    wrapper__DOT__jack__DOT__op2 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[6U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[5U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[7U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[6U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[8U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[7U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[9U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[8U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
        = wrapper__DOT__jack__DOT__op1;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result;
    wrapper__DOT__jack__DOT__rs1 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[2U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[1U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[3U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[2U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[4U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[3U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[5U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[4U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
        = wrapper__DOT__jack__DOT__op2;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result;
    wrapper__DOT__jack__DOT__rs2 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__ 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__ 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign 
        = (1U & ((((1U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)) 
                   | (0U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1))) 
                  | (0x10U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)))
                  ? ((~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                         >> 2U)) & (((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                                     >> 1U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2)))
                  : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1) 
                        >> 4U))));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    wrapper__DOT__jack__DOT__sign = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel 
        = (((9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
            | (0x1dU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
            ? 1U : (((0xeU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                     | (0x1eU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                     ? 2U : (((0xfU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                              | (0x1fU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                              ? 3U : (((((((7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                           | (4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                          | (9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                         | (0xaU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                        | (0xbU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                       | (0xcU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                       ? 7U : ((0x10U 
                                                == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))
                                                ? 4U
                                                : (
                                                   ((0x11U 
                                                     == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                                    | (0x19U 
                                                       == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                                    ? 8U
                                                    : 
                                                   (7U 
                                                    & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))))))));
    wrapper__DOT__jack__DOT__s1_alusel = __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel60;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel59;
            }
            __Vlabel60: ;
        }
        __Vlabel59: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel62;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel61;
            }
            __Vlabel62: ;
        }
        __Vlabel61: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__r[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel66;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel65;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel64;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel63;
                        }
                    }
                    __Vlabel66: ;
                }
                __Vlabel65: ;
            }
            __Vlabel64: ;
        }
        __Vlabel63: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel70;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel69;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel68;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel67;
                        }
                    }
                    __Vlabel70: ;
                }
                __Vlabel69: ;
            }
            __Vlabel68: ;
        }
        __Vlabel67: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0xeU));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel72;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel71;
            }
            __Vlabel72: ;
        }
        __Vlabel71: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel74;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel73;
            }
            __Vlabel74: ;
        }
        __Vlabel73: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel78;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel77;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel76;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel75;
                        }
                    }
                    __Vlabel78: ;
                }
                __Vlabel77: ;
            }
            __Vlabel76: ;
        }
        __Vlabel75: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel82;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel81;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel80;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel79;
                        }
                    }
                    __Vlabel82: ;
                }
                __Vlabel81: ;
            }
            __Vlabel80: ;
        }
        __Vlabel79: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0x16U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel84;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel83;
            }
            __Vlabel84: ;
        }
        __Vlabel83: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel86;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel85;
            }
            __Vlabel86: ;
        }
        __Vlabel85: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel90;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel89;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel88;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel87;
                        }
                    }
                    __Vlabel90: ;
                }
                __Vlabel89: ;
            }
            __Vlabel88: ;
        }
        __Vlabel87: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel94;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel93;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel92;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel91;
                        }
                    }
                    __Vlabel94: ;
                }
                __Vlabel93: ;
            }
            __Vlabel92: ;
        }
        __Vlabel91: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & ((vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                     << 2U) | (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                               >> 0x1eU)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel96;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel95;
            }
            __Vlabel96: ;
        }
        __Vlabel95: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel98;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel97;
            }
            __Vlabel98: ;
        }
        __Vlabel97: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (vlSelf->wrapper__DOT__jack__DOT__r[0U] >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel102;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel101;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel100;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel99;
                        }
                    }
                    __Vlabel102: ;
                }
                __Vlabel101: ;
            }
            __Vlabel100: ;
        }
        __Vlabel99: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel106;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel105;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel104;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel103;
                        }
                    }
                    __Vlabel106: ;
                }
                __Vlabel105: ;
            }
            __Vlabel104: ;
        }
        __Vlabel103: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                    >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x30U));
    wrapper__DOT__jack__DOT__mul_res = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029)))) 
                                            << 0x10U) 
                                           | (QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029))));
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res 
        = wrapper__DOT__jack__DOT__mul_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res 
        = vlSelf->wrapper__DOT__jack__DOT__shift_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res 
        = vlSelf->wrapper__DOT__jack__DOT__logic_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res 
        = vlSelf->wrapper__DOT__jack__DOT__min_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res 
        = vlSelf->wrapper__DOT__jack__DOT__max_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res 
        = vlSelf->wrapper__DOT__jack__DOT__sub_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res 
        = vlSelf->wrapper__DOT__jack__DOT__add_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2 
        = vlSelf->wrapper__DOT__jack__DOT__s1_r2;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel 
        = wrapper__DOT__jack__DOT__s1_alusel;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res 
        = ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
            ? ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? 0ULL : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                           ? 0ULL : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                                      ? 0ULL : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res)))
            : ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2))
                : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra))));
    wrapper__DOT__jack__DOT__s1_res = __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra 
        = (1U & (vlSelf->wrapper__DOT__sdi[9U] >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk 
        = (0xfU & (vlSelf->wrapper__DOT__sdi[9U] >> 0xaU));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__original 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
        = wrapper__DOT__jack__DOT__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
        = ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra)
            ? __Vtask_wrapper__DOT__jack__DOT__mask__40__original
            : 0ULL);
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0x1fU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[3U] = (((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                               >> 0x1bU) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[4U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[4U]) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 >> 0x1bU));
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((0x1cU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                        >> 0xbU)) 
                                                    | (1U 
                                                       & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                          >> 5U)))));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 0x28U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                      >> 0x18U)) << 8U)) 
                 | (0xffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 8U))))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                       >> 0x38U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[0U] = __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
               >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__a = (
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
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc = 0U;
            if (__Vfunc_wrapper__DOT__jack__DOT__sum__42__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x10U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x20U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout;
                goto __Vlabel108;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a)));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x10U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x20U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
                goto __Vlabel107;
            }
            __Vlabel108: ;
        }
        __Vlabel107: ;
    }
    wrapper__DOT__jack__DOT__s2sum_res = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a)));
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x10U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x20U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x10U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x20U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x30U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    wrapper__DOT__jack__DOT__s2max_res = __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a)));
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x10U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x20U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x10U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x20U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x30U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    wrapper__DOT__jack__DOT__s2min_res = __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x10U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x20U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x30U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    wrapper__DOT__jack__DOT__s2xor_res = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res 
        = wrapper__DOT__jack__DOT__s2xor_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res 
        = wrapper__DOT__jack__DOT__s2min_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res 
        = wrapper__DOT__jack__DOT__s2max_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res 
        = wrapper__DOT__jack__DOT__s2sum_res;
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra 
        = __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                 >> 2U));
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc 
        = ((0U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra
            : (((1U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                | (5U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res
                : (((2U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                    | (6U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                    ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res
                    : (((3U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                        | (7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                        ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res
                        : ((4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
                            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res
                            : __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra)))));
    wrapper__DOT__jack__DOT__s2_res = __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    vlSelf->wrapper__DOT__jack__DOT__v[1U] = wrapper__DOT__jack__DOT__s2_res;
    vlSelf->wrapper__DOT__sdo[2U] = vlSelf->wrapper__DOT__jack__DOT__r[1U];
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data;
    vlSelf->wrapper__DOT__sdo[0U] = (IData)((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->wrapper__DOT__jack__DOT__v[1U]))));
    vlSelf->wrapper__DOT__sdo[1U] = (IData)(((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
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
    vlSelf->result = vlSelf->wrapper__DOT__sdo[2U];
    vlSelf->s2bp = vlSelf->wrapper__DOT__sdo[0U];
    vlSelf->s1bp = vlSelf->wrapper__DOT__sdo[1U];
    wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT__mul0__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul0__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    wrapper__DOT__jack__DOT__mul0__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    wrapper__DOT__jack__DOT__mul0__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel 
        = wrapper__DOT__jack__DOT__mul0__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    wrapper__DOT__jack__DOT__mul1__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul1__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    wrapper__DOT__jack__DOT__mul1__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    wrapper__DOT__jack__DOT__mul1__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel 
        = wrapper__DOT__jack__DOT__mul1__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    wrapper__DOT__jack__DOT__mul2__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul2__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    wrapper__DOT__jack__DOT__mul2__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    wrapper__DOT__jack__DOT__mul2__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel 
        = wrapper__DOT__jack__DOT__mul2__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    wrapper__DOT__jack__DOT__mul3__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul3__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    wrapper__DOT__jack__DOT__mul3__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    wrapper__DOT__jack__DOT__mul3__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel 
        = wrapper__DOT__jack__DOT__mul3__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
}

void Vsparrow___024root___eval_act(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vsparrow___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsparrow___024root___nba_sequent__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->holdn) {
        vlSelf->wrapper__DOT__jack__DOT__r[0U] = vlSelf->wrapper__DOT__jack__DOT__rin[0U];
        vlSelf->wrapper__DOT__jack__DOT__r[1U] = vlSelf->wrapper__DOT__jack__DOT__rin[1U];
        vlSelf->wrapper__DOT__jack__DOT__r[2U] = vlSelf->wrapper__DOT__jack__DOT__rin[2U];
        vlSelf->wrapper__DOT__jack__DOT__r[3U] = vlSelf->wrapper__DOT__jack__DOT__rin[3U];
        vlSelf->wrapper__DOT__jack__DOT__r[4U] = vlSelf->wrapper__DOT__jack__DOT__rin[4U];
        vlSelf->wrapper__DOT__jack__DOT__r[5U] = vlSelf->wrapper__DOT__jack__DOT__rin[5U];
        vlSelf->wrapper__DOT__jack__DOT__r[6U] = vlSelf->wrapper__DOT__jack__DOT__rin[6U];
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->wrapper__DOT__jack__DOT__r[0U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[1U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[2U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[3U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[4U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[5U] = 0U;
        vlSelf->wrapper__DOT__jack__DOT__r[6U] = 0U;
    }
}

VL_INLINE_OPT void Vsparrow___024root___nba_comb__TOP__0(Vsparrow___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsparrow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparrow___024root___nba_comb__TOP__0\n"); );
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
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul0__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul1__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul2__muli;
    IData/*17:0*/ wrapper__DOT__jack__DOT____Vcellinp__mul3__muli;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__op2;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs1;
    IData/*31:0*/ wrapper__DOT__jack__DOT__rs2;
    QData/*63:0*/ wrapper__DOT__jack__DOT__s1_res;
    QData/*63:0*/ wrapper__DOT__jack__DOT__mul_res;
    CData/*3:0*/ wrapper__DOT__jack__DOT__s1_alusel;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2sum_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2max_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2min_res;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2xor_res;
    CData/*0:0*/ wrapper__DOT__jack__DOT__sign;
    IData/*31:0*/ wrapper__DOT__jack__DOT__s2_res;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul0__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul0__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul1__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul1__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul2__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul2__DOT__mux;
    SData/*15:0*/ wrapper__DOT__jack__DOT__mul3__DOT__z;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signA;
    CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signB;
    CData/*2:0*/ wrapper__DOT__jack__DOT__mul3__DOT__mux;
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
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data;
    VlWide<4>/*127:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    CData/*4:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    CData/*4:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__b;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__sign;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__value;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__vector;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__original;
    CData/*3:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk;
    CData/*0:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra;
    QData/*63:0*/ __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res;
    IData/*31:0*/ __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout;
    QData/*63:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z;
    IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign;
    CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat;
    CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2;
    CData/*2:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    CData/*2:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr;
    SData/*15:0*/ __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a;
    SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
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
                goto __Vlabel110;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__vec;
                goto __Vlabel109;
            }
            __Vlabel110: ;
        }
        __Vlabel109: ;
    }
    wrapper__DOT__jack__DOT__op1 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
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
                goto __Vlabel112;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout 
                    = __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__vec;
                goto __Vlabel111;
            }
            __Vlabel112: ;
        }
        __Vlabel111: ;
    }
    wrapper__DOT__jack__DOT__op2 = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[6U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[5U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[7U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[6U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[8U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[7U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[9U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[8U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
        = wrapper__DOT__jack__DOT__op1;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result;
    wrapper__DOT__jack__DOT__rs1 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
        = ((vlSelf->wrapper__DOT__sdi[2U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[1U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
        = ((vlSelf->wrapper__DOT__sdi[3U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[2U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
        = ((vlSelf->wrapper__DOT__sdi[4U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[3U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
        = ((vlSelf->wrapper__DOT__sdi[5U] << 0x17U) 
           | (vlSelf->wrapper__DOT__sdi[4U] >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
        = wrapper__DOT__jack__DOT__op2;
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffff00U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xffU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                       >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[0U] 
                                    << 3U)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffff00ffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff00U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                          >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[1U] 
                                       << 3U))) << 8U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xff00ffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | (0xff0000U & ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
                            >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[2U] 
                                         << 3U))) << 0x10U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result) 
           | ((__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__data 
               >> (0x1fU & (__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__sz[3U] 
                            << 3U))) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result;
    wrapper__DOT__jack__DOT__rs2 = __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__Vfuncout;
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__ 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__ 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__ 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__ 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__ 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 0xdU)));
    wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__ 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign 
        = (1U & ((((1U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)) 
                   | (0U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1))) 
                  | (0x10U == (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1)))
                  ? ((~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                         >> 2U)) & (((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2) 
                                     >> 1U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op2)))
                  : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__op1) 
                        >> 4U))));
    __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__sign;
    wrapper__DOT__jack__DOT__sign = __Vfunc_wrapper__DOT__jack__DOT__sign_ext__8__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op 
        = (0x1fU & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                    >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel 
        = (((9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
            | (0x1dU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
            ? 1U : (((0xeU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                     | (0x1eU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                     ? 2U : (((0xfU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                              | (0x1fU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                              ? 3U : (((((((7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                           | (4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                          | (9U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                         | (0xaU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                        | (0xbU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))) 
                                       | (0xcU == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                       ? 7U : ((0x10U 
                                                == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))
                                                ? 4U
                                                : (
                                                   ((0x11U 
                                                     == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)) 
                                                    | (0x19U 
                                                       == (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op)))
                                                    ? 8U
                                                    : 
                                                   (7U 
                                                    & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_mux__9__op))))))));
    wrapper__DOT__jack__DOT__s1_alusel = __Vtask_wrapper__DOT__jack__DOT__s1_mux__9__sel;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel114;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel113;
            }
            __Vlabel114: ;
        }
        __Vlabel113: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel116;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel115;
            }
            __Vlabel116: ;
        }
        __Vlabel115: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | (IData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & wrapper__DOT__jack__DOT__rs1);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffff0000ULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & vlSelf->wrapper__DOT__jack__DOT__r[0U]);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel120;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel119;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel118;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel117;
                        }
                    }
                    __Vlabel120: ;
                }
                __Vlabel119: ;
            }
            __Vlabel118: ;
        }
        __Vlabel117: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel124;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel123;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel122;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel121;
                        }
                    }
                    __Vlabel124: ;
                }
                __Vlabel123: ;
            }
            __Vlabel122: ;
        }
        __Vlabel121: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & wrapper__DOT__jack__DOT__rs1);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffff0000ULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0xeU));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & wrapper__DOT__jack__DOT__rs2);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffff0000ULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | (IData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel126;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel125;
            }
            __Vlabel126: ;
        }
        __Vlabel125: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel128;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel127;
            }
            __Vlabel128: ;
        }
        __Vlabel127: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 8U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffff0000ffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel132;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel131;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel130;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel129;
                        }
                    }
                    __Vlabel132: ;
                }
                __Vlabel131: ;
            }
            __Vlabel130: ;
        }
        __Vlabel129: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel136;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel135;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel134;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel133;
                        }
                    }
                    __Vlabel136: ;
                }
                __Vlabel135: ;
            }
            __Vlabel134: ;
        }
        __Vlabel133: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffff0000ffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                    >> 0x16U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffff0000ffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel138;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel137;
            }
            __Vlabel138: ;
        }
        __Vlabel137: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel140;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel139;
            }
            __Vlabel140: ;
        }
        __Vlabel139: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs2 
                                                      >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (0xffU 
                                                   & (wrapper__DOT__jack__DOT__rs1 
                                                      >> 0x10U));
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffff0000ffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[0U] 
                    >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel144;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel143;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel142;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel141;
                        }
                    }
                    __Vlabel144: ;
                }
                __Vlabel143: ;
            }
            __Vlabel142: ;
        }
        __Vlabel141: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel148;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel147;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel146;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel145;
                        }
                    }
                    __Vlabel148: ;
                }
                __Vlabel147: ;
            }
            __Vlabel146: ;
        }
        __Vlabel145: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (0xffU & (wrapper__DOT__jack__DOT__rs1 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffff0000ffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & ((vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                     << 2U) | (vlSelf->wrapper__DOT__jack__DOT__r[5U] 
                               >> 0x1eU)));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (0xffU & (wrapper__DOT__jack__DOT__rs2 >> 0x10U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffff0000ffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x20U));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__add__10__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__add__10__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__add__10__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__a)) 
                   + VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__add__10__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__add__10__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
                goto __Vlabel150;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__add__10__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
                goto __Vlabel149;
            }
            __Vlabel150: ;
        }
        __Vlabel149: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__add_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__add_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
               >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__sub__15__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    {
        {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z 
                = (VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__a)) 
                   - VL_EXTENDS_II(32,8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__sub__15__b)));
            if (__Vfunc_wrapper__DOT__jack__DOT__sub__15__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
                goto __Vlabel152;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sub__15__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout 
                    = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
                goto __Vlabel151;
            }
            __Vlabel152: ;
        }
        __Vlabel151: ;
    }
    vlSelf->wrapper__DOT__jack__DOT__sub_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__sub_res) 
                                                | ((QData)((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__max__20__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__max__20__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__max__20__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__max__20__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__a)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__b));
        __Vfunc_wrapper__DOT__jack__DOT__extend__21__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__value 
        = __Vfunc_wrapper__DOT__jack__DOT__max__20__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__21__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__z;
    __Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__21__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__max_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__max_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__max__20__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__min__22__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__b = (wrapper__DOT__jack__DOT__rs2 
                                                   >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__min__22__a = (wrapper__DOT__jack__DOT__rs1 
                                                   >> 0x18U);
    if (__Vfunc_wrapper__DOT__jack__DOT__min__22__sign) {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (VL_GTS_III(8, (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a), (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 1U;
    } else {
        __Vfunc_wrapper__DOT__jack__DOT__min__22__z 
            = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a) 
                > (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b))
                ? (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__b)
                : (IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__a));
        __Vfunc_wrapper__DOT__jack__DOT__extend__23__sign = 0U;
    }
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__value 
        = __Vfunc_wrapper__DOT__jack__DOT__min__22__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__23__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__z;
    __Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__23__Vfuncout;
    vlSelf->wrapper__DOT__jack__DOT__min_res = ((0xffffffffffffULL 
                                                 & vlSelf->wrapper__DOT__jack__DOT__min_res) 
                                                | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__min__22__Vfuncout)) 
                                                   << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__hp 
        = (1U & (vlSelf->wrapper__DOT__sdi[1U] >> 2U));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat 
        = (1U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 0xcU));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh 
        = (vlSelf->wrapper__DOT__jack__DOT__r[0U] >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__b = 
        (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__a = 
        (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            goto __Vlabel156;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z);
                            goto __Vlabel155;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
                            goto __Vlabel154;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
                            goto __Vlabel153;
                        }
                    }
                    __Vlabel156: ;
                }
                __Vlabel155: ;
            }
            __Vlabel154: ;
        }
        __Vlabel153: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__sat;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__rdh;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__b;
    __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__a;
    {
        {
            {
                {
                    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c 
                        = (((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__rdh) 
                            << 8U) | (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__a));
                    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_MULS_III(32, (IData)(0xffffffffU), 
                                          VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                            >> 1U))));
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            goto __Vlabel160;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                                = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                    ? (0xffffU & ((0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c)))) 
                                                  >> vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                    : 0U);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                                = ((IData)(0xffffffffU) 
                                   * (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z);
                            goto __Vlabel159;
                        }
                    } else {
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i 
                            = VL_EXTENDS_II(32,7, (0x7fU 
                                                   & ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b) 
                                                      >> 1U)));
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c 
                            = ((0xfU >= vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i)
                                ? (0xffffU & ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c) 
                                              << vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i))
                                : 0U);
                        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z 
                            = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
                        if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__b))) {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val = 0xffffff80U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val = 0x7fU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
                            goto __Vlabel158;
                        } else {
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat 
                                = __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__sat;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val = 0U;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val = 0xffU;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val 
                                = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val
                                    : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val)
                                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val
                                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__value));
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret 
                                = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat)
                                    ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout
                                    : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout 
                                = (0xffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret);
                            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout 
                                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
                            goto __Vlabel157;
                        }
                    }
                    __Vlabel160: ;
                }
                __Vlabel159: ;
            }
            __Vlabel158: ;
        }
        __Vlabel157: ;
    }
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__z = 
        ((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__hp)
          ? (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout)
          : (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout));
    __Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__shift__24__z;
    vlSelf->wrapper__DOT__jack__DOT__shift_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__shift_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__shift__24__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                 >> 9U));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a 
        = (wrapper__DOT__jack__DOT__rs1 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z 
        = (0xffU & ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                     ? ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : 0U) : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                                       ? 0U : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                                  ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))))
                     : ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                         ? ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b)))
                             : (~ ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                   & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))
                         : ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__op))
                             ? ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))
                             : ((IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__a) 
                                | (IData)(__Vfunc_wrapper__DOT__jack__DOT__logic_op__36__b))))));
    __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__z;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__value 
        = __Vfunc_wrapper__DOT__jack__DOT__logic_op__36__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__z 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__value;
    __Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__35__z;
    vlSelf->wrapper__DOT__jack__DOT__logic_res = ((0xffffffffffffULL 
                                                   & vlSelf->wrapper__DOT__jack__DOT__logic_res) 
                                                  | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__35__Vfuncout)) 
                                                     << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__value 
        = (0xffU & (vlSelf->wrapper__DOT__jack__DOT__r[6U] 
                    >> 6U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__37__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_ra = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_ra) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__37__Vfuncout)) 
                                                 << 0x30U));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__sign 
        = wrapper__DOT__jack__DOT__sign;
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__value 
        = (wrapper__DOT__jack__DOT__rs2 >> 0x18U);
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__z 
        = ((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__sign)
            ? (0xff00U | (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value))
            : (IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__value));
    __Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__extend__38__z;
    vlSelf->wrapper__DOT__jack__DOT__s1_r2 = ((0xffffffffffffULL 
                                               & vlSelf->wrapper__DOT__jack__DOT__s1_r2) 
                                              | ((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__extend__38__Vfuncout)) 
                                                 << 0x30U));
    wrapper__DOT__jack__DOT__mul_res = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029)))) 
                                            << 0x10U) 
                                           | (QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029))));
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res 
        = wrapper__DOT__jack__DOT__mul_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res 
        = vlSelf->wrapper__DOT__jack__DOT__shift_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res 
        = vlSelf->wrapper__DOT__jack__DOT__logic_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res 
        = vlSelf->wrapper__DOT__jack__DOT__min_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res 
        = vlSelf->wrapper__DOT__jack__DOT__max_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res 
        = vlSelf->wrapper__DOT__jack__DOT__sub_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res 
        = vlSelf->wrapper__DOT__jack__DOT__add_res;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2 
        = vlSelf->wrapper__DOT__jack__DOT__s1_r2;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel 
        = wrapper__DOT__jack__DOT__s1_alusel;
    __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res 
        = ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
            ? ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? 0ULL : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                           ? 0ULL : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                                      ? 0ULL : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__shift_res)))
            : ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__logic_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__min_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__max_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__rs2))
                : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                    ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__mul_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__sub_res)
                    : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__s1_select__39__sel))
                        ? __Vtask_wrapper__DOT__jack__DOT__s1_select__39__add_res
                        : __Vtask_wrapper__DOT__jack__DOT__s1_select__39__ra))));
    wrapper__DOT__jack__DOT__s1_res = __Vtask_wrapper__DOT__jack__DOT__s1_select__39__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra 
        = (1U & (vlSelf->wrapper__DOT__sdi[9U] >> 9U));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk 
        = (0xfU & (vlSelf->wrapper__DOT__sdi[9U] >> 0xaU));
    __Vtask_wrapper__DOT__jack__DOT__mask__40__original 
        = vlSelf->wrapper__DOT__jack__DOT__s1_ra;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
        = wrapper__DOT__jack__DOT__s1_res;
    __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
        = ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__pas_ra)
            ? __Vtask_wrapper__DOT__jack__DOT__mask__40__original
            : 0ULL);
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffff0000ULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | (IData)((IData)((0xffffU & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__vector)))));
    }
    if ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffff0000ffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffff0000ffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk))) {
        __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
            = ((0xffffffffffffULL & __Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (__Vtask_wrapper__DOT__jack__DOT__mask__40__vector 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0x1fU 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[3U] = (((IData)(__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res) 
                                               >> 0x1bU) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 << 5U));
    vlSelf->wrapper__DOT__jack__DOT__v[4U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[4U]) 
                                              | ((IData)(
                                                         (__Vtask_wrapper__DOT__jack__DOT__mask__40__msk_res 
                                                          >> 0x20U)) 
                                                 >> 0x1bU));
    vlSelf->wrapper__DOT__jack__DOT__v[2U] = ((0xffffffe0U 
                                               & vlSelf->wrapper__DOT__jack__DOT__v[2U]) 
                                              | ((0x1cU 
                                                  & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                        >> 0xbU)) 
                                                    | (1U 
                                                       & (vlSelf->wrapper__DOT__jack__DOT__r[4U] 
                                                          >> 5U)))));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 0x28U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                      >> 0x18U)) << 8U)) 
                 | (0xffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                                     >> 8U))))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__data 
                       >> 0x38U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec;
    vlSelf->wrapper__DOT__jack__DOT__v[0U] = __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat = 
        (1U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
               >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__sum__42__a = (
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
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc = 0U;
            if (__Vfunc_wrapper__DOT__jack__DOT__sum__42__sign) {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x10U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & (IData)(
                                                         (__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                                          >> 0x20U)))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val = 0xffffff80U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val = 0x7fU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout;
                goto __Vlabel162;
            } else {
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__sum__42__a)));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x10U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                    = (vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc 
                       + (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__sum__42__a 
                                             >> 0x20U))));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat 
                    = __Vfunc_wrapper__DOT__jack__DOT__sum__42__sat;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val = 0U;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val = 0xffU;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val 
                    = (VL_GTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val
                        : (VL_LTS_III(32, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value, vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val)
                            ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val
                            : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__value));
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret 
                    = ((IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat)
                        ? vlSelf->__Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout
                        : vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a);
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
                vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout 
                    = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
                goto __Vlabel161;
            }
            __Vlabel162: ;
        }
        __Vlabel161: ;
    }
    wrapper__DOT__jack__DOT__s2sum_res = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a)));
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x10U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x20U))));
        }
        if (VL_GTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x10U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x20U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                 >> 0x30U))) > vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__max_red__47__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__ret;
    __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__48__Vfuncout;
    wrapper__DOT__jack__DOT__s2max_res = __Vfunc_wrapper__DOT__jack__DOT__max_red__47__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign 
        = (1U & (~ (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                    >> 4U)));
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    if (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__sign) {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = VL_EXTENDS_II(32,16, (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a)));
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x10U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x10U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x20U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x20U))));
        }
        if (VL_LTS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                            >> 0x30U)))), vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = VL_EXTENDS_II(32,16, (0xffffU & (IData)(
                                                          (__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                                           >> 0x30U))));
        }
    } else {
        vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
            = (0xffffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a));
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x10U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x10U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x20U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x20U)));
        }
        if (((0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                 >> 0x30U))) < vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc)) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc 
                = (0xffffU & (IData)((__Vfunc_wrapper__DOT__jack__DOT__min_red__50__a 
                                      >> 0x30U)));
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__a;
    __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__ret;
    __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__51__Vfuncout;
    wrapper__DOT__jack__DOT__s2min_res = __Vfunc_wrapper__DOT__jack__DOT__min_red__50__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x10U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x20U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc 
        = (0xffU & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__a 
                             >> 0x30U)) ^ (IData)(__Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc)));
    __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__acc;
    wrapper__DOT__jack__DOT__s2xor_res = __Vfunc_wrapper__DOT__jack__DOT__xor_red__53__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res 
        = wrapper__DOT__jack__DOT__s2xor_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res 
        = wrapper__DOT__jack__DOT__s2min_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res 
        = wrapper__DOT__jack__DOT__s2max_res;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res 
        = wrapper__DOT__jack__DOT__s2sum_res;
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__r[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__r[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra 
        = __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel 
        = (7U & (vlSelf->wrapper__DOT__jack__DOT__r[2U] 
                 >> 2U));
    __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc 
        = ((0U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra
            : (((1U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                | (5U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__sum_res
                : (((2U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                    | (6U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                    ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__max_res
                    : (((3U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)) 
                        | (7U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel)))
                        ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__min_res
                        : ((4U == (IData)(__Vtask_wrapper__DOT__jack__DOT__s2_select__54__sel))
                            ? __Vtask_wrapper__DOT__jack__DOT__s2_select__54__xor_res
                            : __Vtask_wrapper__DOT__jack__DOT__s2_select__54__ra)))));
    wrapper__DOT__jack__DOT__s2_res = __Vtask_wrapper__DOT__jack__DOT__s2_select__54__rc;
    vlSelf->wrapper__DOT__jack__DOT__v[1U] = wrapper__DOT__jack__DOT__s2_res;
    vlSelf->wrapper__DOT__sdo[2U] = vlSelf->wrapper__DOT__jack__DOT__r[1U];
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
        = (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[4U])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->wrapper__DOT__jack__DOT__v[3U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->wrapper__DOT__jack__DOT__v[2U])) 
                                       >> 5U)));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xff000000U & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((0xff0000U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                     >> 0x20U)) << 0x10U)) 
              | ((0xff00U & ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                                      >> 0x10U)) << 8U)) 
                 | (0xffU & (IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec)))));
    vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data 
        = ((0xffffffU & vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data) 
           | ((IData)((__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__vec 
                       >> 0x30U)) << 0x18U));
    __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout 
        = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data;
    vlSelf->wrapper__DOT__sdo[0U] = (IData)((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->wrapper__DOT__jack__DOT__v[1U]))));
    vlSelf->wrapper__DOT__sdo[1U] = (IData)(((((QData)((IData)(__Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__Vfuncout)) 
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
    vlSelf->result = vlSelf->wrapper__DOT__sdo[2U];
    vlSelf->s2bp = vlSelf->wrapper__DOT__sdo[0U];
    vlSelf->s1bp = vlSelf->wrapper__DOT__sdo[1U];
    wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0280__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0281__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0282__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
        = (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__17__03a10__KET__) 
            << 0xaU) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__9__03a2__KET__) 
                         << 2U) | (((IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__1__KET__) 
                                    << 1U) | (IData)(wrapper__DOT__jack__DOT__lpmuli__0283__029__BRA__0__KET__))));
    wrapper__DOT__jack__DOT__mul0__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul0__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul0__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul0__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul0__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__z);
    wrapper__DOT__jack__DOT__mul0__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__product__61__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul0__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul0__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul0__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign 
        = wrapper__DOT__jack__DOT__mul0__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__sel;
    wrapper__DOT__jack__DOT__mul0__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sat_mux__62__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert16__64__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r 
        = wrapper__DOT__jack__DOT__mul0__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel 
        = wrapper__DOT__jack__DOT__mul0__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0280__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul0__DOT__sat_sel__63__mulres;
    wrapper__DOT__jack__DOT__mul1__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul1__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul1__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul1__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul1__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__z);
    wrapper__DOT__jack__DOT__mul1__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__product__69__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul1__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul1__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul1__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign 
        = wrapper__DOT__jack__DOT__mul1__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__sel;
    wrapper__DOT__jack__DOT__mul1__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sat_mux__70__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert16__72__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r 
        = wrapper__DOT__jack__DOT__mul1__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel 
        = wrapper__DOT__jack__DOT__mul1__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0281__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul1__DOT__sat_sel__71__mulres;
    wrapper__DOT__jack__DOT__mul2__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul2__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul2__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul2__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul2__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__z);
    wrapper__DOT__jack__DOT__mul2__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__product__77__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul2__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul2__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul2__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign 
        = wrapper__DOT__jack__DOT__mul2__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__sel;
    wrapper__DOT__jack__DOT__mul2__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sat_mux__78__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert16__80__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r 
        = wrapper__DOT__jack__DOT__mul2__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel 
        = wrapper__DOT__jack__DOT__mul2__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0282__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul2__DOT__sat_sel__79__mulres;
    wrapper__DOT__jack__DOT__mul3__DOT__signA = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 0x11U));
    wrapper__DOT__jack__DOT__mul3__DOT__signB = (1U 
                                                 & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                                                    >> 9U));
    if ((2U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli)) {
        if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
             & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a;
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a))));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout;
        } else if (((IData)(wrapper__DOT__jack__DOT__mul3__DOT__signA) 
                    & (IData)(wrapper__DOT__jack__DOT__mul3__DOT__signB))) {
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a 
                = (0xffU & ((IData)(1U) + (~ (IData)(vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a))));
            vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a;
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = vlSelf->__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout;
        } else {
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 0xaU));
            vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
                = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                            >> 2U));
        }
    } else {
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 0xaU));
        vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b 
            = (0xffU & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                        >> 2U));
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__b;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a 
        = vlSelf->wrapper__DOT__jack__DOT__mul3__DOT__a;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z = 0U;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__a;
    if ((1U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((2U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((4U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((8U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x10U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x20U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x40U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    if ((0x80U & (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__b))) {
        __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z 
            = (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
               + __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux 
        = VL_MULS_III(32, (IData)(2U), __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__aux);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout 
        = (0xffffU & __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__z);
    wrapper__DOT__jack__DOT__mul3__DOT__z = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__product__85__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2 
        = (0xffU & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                    >> 8U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat 
        = (1U & wrapper__DOT__jack__DOT____Vcellinp__mul3__muli);
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign 
        = (1U & (wrapper__DOT__jack__DOT____Vcellinp__mul3__muli 
                 >> 1U));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign 
        = (1U & ((IData)(wrapper__DOT__jack__DOT__mul3__DOT__z) 
                 >> 0xfU));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signB;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign 
        = wrapper__DOT__jack__DOT__mul3__DOT__signA;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 0U;
    if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sat) {
        if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
            if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
                 == (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
                if (((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2)) 
                     | (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__rsign))) {
                    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 3U;
                }
            } else {
                __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel 
                    = ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))
                        ? 4U : 1U);
            }
        } else if ((0U != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__z2))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 7U;
        }
    } else if (__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sign) {
        if (((IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__asign) 
             != (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__bsign))) {
            __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel = 1U;
        }
    }
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__sel;
    wrapper__DOT__jack__DOT__mul3__DOT__mux = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sat_mux__86__Vfuncout;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a 
        = (0xffffU & ((IData)(1U) + (~ (IData)(__Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__a))));
    __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__tmp_a;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr 
        = __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert16__88__Vfuncout;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r 
        = wrapper__DOT__jack__DOT__mul3__DOT__z;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel 
        = wrapper__DOT__jack__DOT__mul3__DOT__mux;
    __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres 
        = ((4U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
            ? ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0xffU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? 0U : 0xff80U))
            : ((2U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                ? ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                    ? 0x7fU : 0U) : ((1U & (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__sel))
                                      ? (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__nr)
                                      : (IData)(__Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__r))));
    vlSelf->wrapper__DOT__jack__DOT__lpmulo__0283__029 
        = __Vtask_wrapper__DOT__jack__DOT__mul3__DOT__sat_sel__87__mulres;
}
