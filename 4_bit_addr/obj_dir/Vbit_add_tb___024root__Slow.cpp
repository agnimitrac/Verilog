// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_add_tb.h for the primary calling header

#include "Vbit_add_tb__pch.h"
#include "Vbit_add_tb__Syms.h"
#include "Vbit_add_tb___024root.h"

void Vbit_add_tb___024root___ctor_var_reset(Vbit_add_tb___024root* vlSelf);

Vbit_add_tb___024root::Vbit_add_tb___024root(Vbit_add_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbit_add_tb___024root___ctor_var_reset(this);
}

void Vbit_add_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbit_add_tb___024root::~Vbit_add_tb___024root() {
}
