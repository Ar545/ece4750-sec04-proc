// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPROCSIMPLE_NOPARAM__SYMS_H_
#define _VPROCSIMPLE_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VProcSimple_noparam.h"
#include "VProcSimple_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VProcSimple_noparam__Vcb_line_trace_t) (VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VProcSimple_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VProcSimple_noparam*           TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_ProcSimple_noparam__v;
    VerilatedScope __Vscope_ProcSimple_noparam__v__dmem_reqstream_trace;
    VerilatedScope __Vscope_ProcSimple_noparam__v__dmem_respstream_trace;
    VerilatedScope __Vscope_ProcSimple_noparam__v__imem_reqstream_trace;
    VerilatedScope __Vscope_ProcSimple_noparam__v__imem_respstream_trace;
    
    // CREATORS
    VProcSimple_noparam__Syms(VProcSimple_noparam* topp, const char* namep);
    ~VProcSimple_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
