// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXI4_LITE_TOP_H_
#define _VAXI4_LITE_TOP_H_  // guard

#include "verilated.h"

//==========

class Vaxi4_lite_top__Syms;
class Vaxi4_lite_top_VerilatedVcd;


//----------

VL_MODULE(Vaxi4_lite_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(ACLK,0,0);
    VL_IN8(ARESETN,0,0);
    VL_IN8(read_s,0,0);
    VL_IN8(write_s,0,0);
    VL_IN(address,31,0);
    VL_IN(W_data,31,0);
    VL_OUT(R_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ axi4_lite_top__DOT__M_RREADY;
    CData/*0:0*/ axi4_lite_top__DOT__M_BREADY;
    CData/*0:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start;
    CData/*0:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state;
    IData/*31:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr;
    IData/*31:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i;
    IData/*31:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[32];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__ACLK;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vaxi4_lite_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaxi4_lite_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vaxi4_lite_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vaxi4_lite_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vaxi4_lite_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vaxi4_lite_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vaxi4_lite_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vaxi4_lite_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vaxi4_lite_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vaxi4_lite_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vaxi4_lite_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vaxi4_lite_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vaxi4_lite_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
