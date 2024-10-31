// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbit_add_tb__Syms.h"


VL_ATTR_COLD void Vbit_add_tb___024root__trace_init_sub__TOP__0(Vbit_add_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bit_add_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit_add_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"xc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"yc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"zc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("d_d", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_init_top(Vbit_add_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbit_add_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbit_add_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbit_add_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbit_add_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbit_add_tb___024root__trace_register(Vbit_add_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbit_add_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbit_add_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbit_add_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbit_add_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_const_0\n"); );
    // Init
    Vbit_add_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbit_add_tb___024root*>(voidSelf);
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_full_0_sub_0(Vbit_add_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbit_add_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_full_0\n"); );
    // Init
    Vbit_add_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbit_add_tb___024root*>(voidSelf);
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbit_add_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_full_0_sub_0(Vbit_add_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbit_add_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.bit_add_tb__DOT__a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.bit_add_tb__DOT__b),4);
    bufp->fullBit(oldp+3,(vlSelfRef.bit_add_tb__DOT__cin));
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelfRef.bit_add_tb__DOT__a))));
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelfRef.bit_add_tb__DOT__b))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                 ^ ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                    ^ (IData)(vlSelfRef.bit_add_tb__DOT__cin))))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                 >> 1U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                 >> 1U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                 >> 2U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                  >> 2U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                  >> 3U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                  >> 3U))));
    bufp->fullCData(oldp+13,(((8U & ((0xfffffff8U & (IData)(vlSelfRef.bit_add_tb__DOT__a)) 
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
    bufp->fullBit(oldp+14,((IData)((((0xcU == (0xcU 
                                               & (IData)(vlSelfRef.bit_add_tb__DOT__a))) 
                                     & (0xcU == (0xcU 
                                                 & (IData)(vlSelfRef.bit_add_tb__DOT__b)))) 
                                    & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc)))));
    bufp->fullBit(oldp+15,(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc));
    bufp->fullBit(oldp+16,(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc));
    bufp->fullBit(oldp+17,((((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                             >> 2U) & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                        >> 2U) & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc)))));
    bufp->fullBit(oldp+18,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                   >> 1U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                              >> 1U) 
                                             ^ (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__xc))))));
    bufp->fullBit(oldp+19,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                   >> 2U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                              >> 2U) 
                                             ^ (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc))))));
    bufp->fullBit(oldp+20,((1U & (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                   >> 3U) ^ (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                              >> 3U) 
                                             ^ (((IData)(vlSelfRef.bit_add_tb__DOT__a) 
                                                 >> 2U) 
                                                & (((IData)(vlSelfRef.bit_add_tb__DOT__b) 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.bit_add_tb__DOT__bit_add_dut__DOT__yc))))))));
}
