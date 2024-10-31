// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_add_tb.h for the primary calling header

#include "Vbit_add_tb__pch.h"
#include "Vbit_add_tb___024root.h"

VL_ATTR_COLD void Vbit_add_tb___024root___eval_static(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbit_add_tb___024root___eval_final(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__stl(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbit_add_tb___024root___eval_phase__stl(Vbit_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vbit_add_tb___024root___eval_settle(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbit_add_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("4_bit_add_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbit_add_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__stl(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbit_add_tb___024root___act_sequent__TOP__0(Vbit_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vbit_add_tb___024root___eval_stl(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbit_add_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbit_add_tb___024root___eval_triggers__stl(Vbit_add_tb___024root* vlSelf);

VL_ATTR_COLD bool Vbit_add_tb___024root___eval_phase__stl(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbit_add_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbit_add_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__act(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__nba(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbit_add_tb___024root___ctor_var_reset(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->bit_add_tb__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->bit_add_tb__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->bit_add_tb__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->bit_add_tb__DOT__bit_add_dut__DOT__xc = VL_RAND_RESET_I(1);
    vlSelf->bit_add_tb__DOT__bit_add_dut__DOT__yc = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
