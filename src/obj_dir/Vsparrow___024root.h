// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsparrow.h for the primary calling header

#ifndef VERILATED_VSPARROW___024ROOT_H_
#define VERILATED_VSPARROW___024ROOT_H_  // guard

#include "verilated.h"

class Vsparrow__Syms;
class Vsparrow_sparrow;


class Vsparrow___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsparrow_sparrow* __PVT__sparrow;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rstn,0,0);
        VL_IN8(holdn,0,0);
        VL_IN8(op1,4,0);
        VL_IN8(op2,2,0);
        VL_IN8(rc_we,0,0);
        VL_IN8(bp,1,0);
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__b;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__6__result;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__swizzling__7__result;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__sat;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__41__vec;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__sat;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__57__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__58__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__59__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul0__DOT__sign_invert8__60__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__65__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__66__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__67__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul1__DOT__sign_invert8__68__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__73__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__74__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__75__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul2__DOT__sign_invert8__76__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__81__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__82__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__83__tmp_a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__Vfuncout;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__a;
        CData/*7:0*/ __Vfunc_wrapper__DOT__jack__DOT__mul3__DOT__sign_invert8__84__tmp_a;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0280__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0281__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0282__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0283__029;
        QData/*63:0*/ wrapper__DOT__jack__DOT__s1_ra;
        QData/*63:0*/ wrapper__DOT__jack__DOT__s1_r2;
        QData/*63:0*/ wrapper__DOT__jack__DOT__add_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__sub_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__max_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__min_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__logic_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__shift_res;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__new_c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__new_c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__Vfuncout;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029;
        VL_IN(ra,31,0);
        VL_IN(rb,31,0);
        VL_IN(bpv,31,0);
        VL_OUT(result,31,0);
        VL_OUT(s1bp,31,0);
        VL_OUT(s2bp,31,0);
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__10__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__11__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val;
    };
    struct {
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__13__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__14__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__14__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__14__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__14__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__14__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__15__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__16__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__18__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__19__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__19__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__19__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__19__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__19__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__25__i;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__26__i;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__27__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__29__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__31__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__33__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__34__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__34__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__34__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__34__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__34__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__42__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__43__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__44__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__44__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__44__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__44__min_val;
    };
    struct {
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__44__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__45__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__46__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__46__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__46__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__46__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__46__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__47__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__50__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__55__data;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__56__data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_INW(ctrl,267,0,9);
        VlWide<12>/*374:0*/ wrapper__DOT__sdi;
        VlWide<3>/*95:0*/ wrapper__DOT__sdo;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__r;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__rin;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__v;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsparrow__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsparrow___024root(Vsparrow__Syms* symsp, const char* name);
    ~Vsparrow___024root();
    VL_UNCOPYABLE(Vsparrow___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
