// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_add_tb.h for the primary calling header

#include "Vbit_add_tb__pch.h"
#include "Vbit_add_tb__Syms.h"
#include "Vbit_add_tb___024root.h"

VL_ATTR_COLD void Vbit_add_tb___024root___eval_initial__TOP(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x645f7462U;
    __Vtemp_1[2U] = 0x745f6164U;
    __Vtemp_1[3U] = 0x6269U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbit_add_tb___024root___dump_triggers__stl(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbit_add_tb___024root___eval_triggers__stl(Vbit_add_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbit_add_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
