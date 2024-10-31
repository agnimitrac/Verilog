// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_add_tb.h for the primary calling header

#include "Vbit_add_tb__pch.h"
#include "Vbit_add_tb___024root.h"

VL_ATTR_COLD void Vbit_add_tb___024root___eval_initial__TOP(Vbit_add_tb___024root* vlSelf);
VlCoroutine Vbit_add_tb___024root___eval_initial__TOP__Vtiming__0(Vbit_add_tb___024root* vlSelf);

void Vbit_add_tb___024root___eval_initial(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbit_add_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vbit_add_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vbit_add_tb___024root___eval_initial__TOP__Vtiming__0(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bit_add_tb__DOT__a = 1U;
    vlSelfRef.bit_add_tb__DOT__b = 2U;
    vlSelfRef.bit_add_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "4_bit_add_tb.v", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.bit_add_tb__DOT__a = 5U;
    vlSelfRef.bit_add_tb__DOT__b = 6U;
    vlSelfRef.bit_add_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "4_bit_add_tb.v", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.bit_add_tb__DOT__a = 9U;
    vlSelfRef.bit_add_tb__DOT__b = 0xaU;
    vlSelfRef.bit_add_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "4_bit_add_tb.v", 
                                         38);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.bit_add_tb__DOT__a = 5U;
    vlSelfRef.bit_add_tb__DOT__b = 0xeU;
    vlSelfRef.bit_add_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "4_bit_add_tb.v", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vbit_add_tb___024root___act_sequent__TOP__0(Vbit_add_tb___024root* vlSelf);

void Vbit_add_tb___024root___eval_act(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vbit_add_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbit_add_tb___024root___act_sequent__TOP__0(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc 
        = ((IData)(vlSelfRef.bit_add_tb__DOT__a) & 
           ((IData)(vlSelfRef.bit_add_tb__DOT__b) & (IData)(vlSelfRef.bit_add_tb__DOT__cin)));
    vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc 
        = (((IData)(vlSelfRef.bit_add_tb__DOT__a) >> 1U) 
           & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
               >> 1U) & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc)));
}

void Vbit_add_tb___024root___eval_nba(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbit_add_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vbit_add_tb___024root___timing_resume(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vbit_add_tb___024root___eval_triggers__act(Vbit_add_tb___024root* vlSelf);

bool Vbit_add_tb___024root___eval_phase__act(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbit_add_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbit_add_tb___024root___timing_resume(vlSelf);
        Vbit_add_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbit_add_tb___024root___eval_phase__nba(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbit_add_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__nba(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__act(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbit_add_tb___024root___eval(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbit_add_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("4_bit_add_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbit_add_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("4_bit_add_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbit_add_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbit_add_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbit_add_tb___024root___eval_debug_assertions(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
