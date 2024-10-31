// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbit_add_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbit_add_tb::Vbit_add_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbit_add_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbit_add_tb::Vbit_add_tb(const char* _vcname__)
    : Vbit_add_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbit_add_tb::~Vbit_add_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbit_add_tb___024root___eval_debug_assertions(Vbit_add_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbit_add_tb___024root___eval_static(Vbit_add_tb___024root* vlSelf);
void Vbit_add_tb___024root___eval_initial(Vbit_add_tb___024root* vlSelf);
void Vbit_add_tb___024root___eval_settle(Vbit_add_tb___024root* vlSelf);
void Vbit_add_tb___024root___eval(Vbit_add_tb___024root* vlSelf);

void Vbit_add_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbit_add_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbit_add_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbit_add_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbit_add_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbit_add_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbit_add_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vbit_add_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vbit_add_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vbit_add_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbit_add_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbit_add_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbit_add_tb___024root___eval_final(Vbit_add_tb___024root* vlSelf);

VL_ATTR_COLD void Vbit_add_tb::final() {
    Vbit_add_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbit_add_tb::hierName() const { return vlSymsp->name(); }
const char* Vbit_add_tb::modelName() const { return "Vbit_add_tb"; }
unsigned Vbit_add_tb::threads() const { return 1; }
void Vbit_add_tb::prepareClone() const { contextp()->prepareClone(); }
void Vbit_add_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbit_add_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbit_add_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbit_add_tb___024root__trace_init_top(Vbit_add_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbit_add_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbit_add_tb___024root*>(voidSelf);
    Vbit_add_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbit_add_tb___024root__trace_decl_types(tracep);
    Vbit_add_tb___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vbit_add_tb___024root__trace_register(Vbit_add_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbit_add_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbit_add_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbit_add_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
