// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbit_add_tb__Syms.h"


void Vbit_add_tb___024root__trace_chg_0_sub_0(Vbit_add_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbit_add_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_chg_0\n"); );
    // Init
    Vbit_add_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbit_add_tb___024root*>(voidSelf);
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbit_add_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbit_add_tb___024root__trace_chg_0_sub_0(Vbit_add_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.bit_add_tb__DOT__a),4);
        bufp->chgCData(oldp+1,(vlSelfRef.bit_add_tb__DOT__b),4);
        bufp->chgBit(oldp+2,(vlSelfRef.bit_add_tb__DOT__cin));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelfRef.bit_add_tb__DOT__a))));
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelfRef.bit_add_tb__DOT__b))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                    ^ ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                       ^ (IData)(vlSelfRef.bit_add_tb__DOT__cin))))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                    >> 2U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                     >> 3U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                     >> 3U))));
    }
    bufp->chgCData(oldp+12,(((8U & ((0xfffffff8U & (IData)(vlSelfRef.bit_add_tb__DOT__a)) 
                                    ^ ((0xfffffff8U 
                                        & (IData)(vlSelfRef.bit_add_tb__DOT__b)) 
                                       ^ (0xfffffff8U 
                                          & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                              << 1U) 
                                             & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                                 << 1U) 
                                                & ((IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc) 
                                                   << 3U))))))) 
                             | ((4U & ((0xfffffffcU 
                                        & (IData)(vlSelfRef.bit_add_tb__DOT__a)) 
                                       ^ ((0xfffffffcU 
                                           & (IData)(vlSelfRef.bit_add_tb__DOT__b)) 
                                          ^ ((IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc) 
                                             << 2U)))) 
                                | ((2U & ((0xfffffffeU 
                                           & (IData)(vlSelfRef.bit_add_tb__DOT__a)) 
                                          ^ ((0xfffffffeU 
                                              & (IData)(vlSelfRef.bit_add_tb__DOT__b)) 
                                             ^ ((IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc) 
                                                << 1U)))) 
                                   | (1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                            ^ ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                               ^ (IData)(vlSelfRef.bit_add_tb__DOT__cin)))))))),4);
    bufp->chgBit(oldp+13,((IData)((((0xcU == (0xcU 
                                              & (IData)(vlSelfRef.bit_add_tb__DOT__a))) 
                                    & (0xcU == (0xcU 
                                                & (IData)(vlSelfRef.bit_add_tb__DOT__b)))) 
                                   & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc)))));
    bufp->chgBit(oldp+14,(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc));
    bufp->chgBit(oldp+15,(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc));
    bufp->chgBit(oldp+16,((((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                            >> 2U) & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                       >> 2U) & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc)))));
    bufp->chgBit(oldp+17,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                  >> 1U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                             >> 1U) 
                                            ^ (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc))))));
    bufp->chgBit(oldp+18,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                  >> 2U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                             >> 2U) 
                                            ^ (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc))))));
    bufp->chgBit(oldp+19,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                  >> 3U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                             >> 3U) 
                                            ^ (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                                >> 2U) 
                                               & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc))))))));
}

void Vbit_add_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_cleanup\n"); );
    // Init
    Vbit_add_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbit_add_tb___024root*>(voidSelf);
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
