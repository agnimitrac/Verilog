// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb__pch.h"
#include "Vadder_tb__Syms.h"
#include "Vadder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vadder_tb___024root___eval_initial__TOP__Vtiming__0(Vadder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x69747961U;
    __Vtemp_1[2U] = 0x6164U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.adder_tb__DOT__d = 1U;
    VL_WRITEF_NX("a=1\n",0);
    vlSelfRef.adder_tb__DOT__e = 1U;
    VL_WRITEF_NX("b=1\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "adder_tb.v", 
                                         23);
    VL_WRITEF_NX("s=%b\nc=%b\n",0,1,vlSelfRef.adder_tb__DOT__f,
                 1,(IData)(vlSelfRef.adder_tb__DOT__g));
    vlSelfRef.adder_tb__DOT__d = 0U;
    VL_WRITEF_NX("a=%b\n",0,1,vlSelfRef.adder_tb__DOT__d);
    vlSelfRef.adder_tb__DOT__e = 1U;
    VL_WRITEF_NX("b=%b\n",0,1,vlSelfRef.adder_tb__DOT__e);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "adder_tb.v", 
                                         32);
    VL_WRITEF_NX("s=%b\nc=%b\n",0,1,vlSelfRef.adder_tb__DOT__f,
                 1,(IData)(vlSelfRef.adder_tb__DOT__g));
    vlSelfRef.adder_tb__DOT__d = 1U;
    VL_WRITEF_NX("a=%b\n",0,1,vlSelfRef.adder_tb__DOT__d);
    vlSelfRef.adder_tb__DOT__e = 0U;
    VL_WRITEF_NX("b=%b\n",0,1,vlSelfRef.adder_tb__DOT__e);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "adder_tb.v", 
                                         41);
    VL_WRITEF_NX("s=%b\nc=%b\n",0,1,vlSelfRef.adder_tb__DOT__f,
                 1,(IData)(vlSelfRef.adder_tb__DOT__g));
    vlSelfRef.adder_tb__DOT__d = 0U;
    VL_WRITEF_NX("a=%b\n",0,1,vlSelfRef.adder_tb__DOT__d);
    vlSelfRef.adder_tb__DOT__e = 0U;
    VL_WRITEF_NX("b=%b\n",0,1,vlSelfRef.adder_tb__DOT__e);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "adder_tb.v", 
                                         50);
    VL_WRITEF_NX("s=%b\nc=%b\n",0,1,vlSelfRef.adder_tb__DOT__f,
                 1,(IData)(vlSelfRef.adder_tb__DOT__g));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__act(Vadder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vadder_tb___024root___eval_triggers__act(Vadder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
