// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPROCDPATHIMMGEN_NOPARAM_H_
#define _VPROCDPATHIMMGEN_NOPARAM_H_  // guard

#include "verilated.h"

//==========

class VProcDpathImmGen_noparam__Syms;

//----------

VL_MODULE(VProcDpathImmGen_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(imm_type,2,0);
    VL_OUT(imm,31,0);
    VL_IN(inst,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VProcDpathImmGen_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcDpathImmGen_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VProcDpathImmGen_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VProcDpathImmGen_noparam();
    
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
    static void _eval_initial_loop(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VProcDpathImmGen_noparam__Syms* symsp, bool first);
  private:
    static QData _change_request(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
