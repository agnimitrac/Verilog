// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_add_tb.h for the primary calling header

#include "Vbit_add_tb__pch.h"
#include "Vbit_add_tb__Syms.h"
#include "Vbit_add_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__act(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbit_add_tb___024root___eval_triggers__act(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbit_add_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
