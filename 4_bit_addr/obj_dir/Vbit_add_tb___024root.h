// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbit_add_tb.h for the primary calling header

#ifndef VERILATED_VBIT_ADD_TB___024ROOT_H_
#define VERILATED_VBIT_ADD_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbit_add_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbit_add_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ bit_add_tb__DOT__a;
    CData/*3:0*/ bit_add_tb__DOT__b;
    CData/*0:0*/ bit_add_tb__DOT__cin;
    CData/*0:0*/ bit_add_tb__DOT__bit_add_dut__DOT__xc;
    CData/*0:0*/ bit_add_tb__DOT__bit_add_dut__DOT__yc;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbit_add_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbit_add_tb___024root(Vbit_add_tb__Syms* symsp, const char* v__name);
    ~Vbit_add_tb___024root();
    VL_UNCOPYABLE(Vbit_add_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
