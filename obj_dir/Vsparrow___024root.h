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
        VL_IN8(ra0,7,0);
        VL_IN8(ra1,7,0);
        VL_IN8(ra2,7,0);
        VL_IN8(ra3,7,0);
        VL_IN8(rb0,7,0);
        VL_IN8(rb1,7,0);
        VL_IN8(rb2,7,0);
        VL_IN8(rb3,7,0);
        VL_IN8(op1,4,0);
        VL_IN8(op2,2,0);
        VL_IN8(rc_we,0,0);
        VL_IN8(bp,1,0);
        IData/*31:0*/ wrapper__DOT__jack__DOT__op1;
        IData/*31:0*/ wrapper__DOT__jack__DOT__op2;
        IData/*31:0*/ wrapper__DOT__jack__DOT__rs1;
        IData/*31:0*/ wrapper__DOT__jack__DOT__rs2;
        CData/*3:0*/ wrapper__DOT__jack__DOT__s1_alusel;
        CData/*0:0*/ wrapper__DOT__jack__DOT__sign;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__inverted_a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul0__DOT__inverted_b;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signA;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul0__DOT__signB;
        CData/*2:0*/ wrapper__DOT__jack__DOT__mul0__DOT__mux;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__inverted_a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul1__DOT__inverted_b;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signA;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul1__DOT__signB;
        CData/*2:0*/ wrapper__DOT__jack__DOT__mul1__DOT__mux;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__inverted_a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul2__DOT__inverted_b;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signA;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul2__DOT__signB;
        CData/*2:0*/ wrapper__DOT__jack__DOT__mul2__DOT__mux;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__b;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__inverted_a;
        CData/*7:0*/ wrapper__DOT__jack__DOT__mul3__DOT__inverted_b;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signA;
        CData/*0:0*/ wrapper__DOT__jack__DOT__mul3__DOT__signB;
        CData/*2:0*/ wrapper__DOT__jack__DOT__mul3__DOT__mux;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__2__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__op_mux__4__Vfuncout;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__sat;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_vector__38__vec;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__sat;
        CData/*0:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__sat;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VicoDidInit;
    };
    struct {
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(result0,15,0);
        VL_OUT16(result1,15,0);
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0280__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0281__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0282__029;
        SData/*15:0*/ wrapper__DOT__jack__DOT__lpmulo__0283__029;
        QData/*63:0*/ wrapper__DOT__jack__DOT__s1_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__s1_ra;
        QData/*63:0*/ wrapper__DOT__jack__DOT__s1_r2;
        QData/*63:0*/ wrapper__DOT__jack__DOT__add_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__sub_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__mul_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__max_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__min_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__logic_res;
        QData/*63:0*/ wrapper__DOT__jack__DOT__shift_res;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul0__DOT__z;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul0__DOT__nz;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul1__DOT__z;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul1__DOT__nz;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul2__DOT__z;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul2__DOT__nz;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul3__DOT__z;
        SData/*15:0*/ wrapper__DOT__jack__DOT__mul3__DOT__nz;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__new_c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__new_c;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__Vfuncout;
        SData/*15:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__Vfuncout;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0283__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0282__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0281__029;
        SData/*15:0*/ __Vtrigrprev__TOP__wrapper__DOT__jack__DOT__lpmulo__0280__029;
        VL_IN(bpv,31,0);
        VL_OUT(s1bp,31,0);
        VL_OUT(s2bp,31,0);
        IData/*17:0*/ wrapper__DOT__jack__DOT__lpmuli__0280__029;
        IData/*17:0*/ wrapper__DOT__jack__DOT__lpmuli__0281__029;
        IData/*17:0*/ wrapper__DOT__jack__DOT__lpmuli__0282__029;
        IData/*17:0*/ wrapper__DOT__jack__DOT__lpmuli__0283__029;
        IData/*31:0*/ wrapper__DOT__jack__DOT__s2sum_res;
        IData/*31:0*/ wrapper__DOT__jack__DOT__s2max_res;
        IData/*31:0*/ wrapper__DOT__jack__DOT__s2min_res;
        IData/*31:0*/ wrapper__DOT__jack__DOT__s2xor_res;
        IData/*31:0*/ wrapper__DOT__jack__DOT__s2_res;
        IData/*31:0*/ wrapper__DOT__jack__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__add__8__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__9__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__10__Vfuncout;
    };
    struct {
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__10__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__10__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__10__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__10__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__11__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__12__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sub__13__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__14__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__15__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__15__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__15__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__15__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__15__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__16__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__17__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__23__i;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__z;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__shift_func__24__i;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__25__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__26__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__26__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__26__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__26__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__26__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__27__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__28__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat16__29__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__30__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat16__31__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__32__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__39__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__sum__39__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__signed_sat32__40__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__41__Vfuncout;
    };
    struct {
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__41__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__41__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__41__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__41__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__a;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__unsigned_sat32__42__ret;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__43__Vfuncout;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__43__value;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__43__max_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__43__min_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__clipping__43__ret_val;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__max_red__44__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__min_red__47__acc;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__52__data;
        IData/*31:0*/ __Vfunc_wrapper__DOT__jack__DOT__inter_to_word__53__data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_INW(ctrl,267,0,9);
        VlWide<12>/*374:0*/ wrapper__DOT__sdi;
        VlWide<3>/*95:0*/ wrapper__DOT__sdo;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__r;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__rin;
        VlWide<7>/*205:0*/ wrapper__DOT__jack__DOT__v;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
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
