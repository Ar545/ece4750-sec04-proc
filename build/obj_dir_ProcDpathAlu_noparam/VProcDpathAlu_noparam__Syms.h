// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPROCDPATHALU_NOPARAM__SYMS_H_
#define _VPROCDPATHALU_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VProcDpathAlu_noparam.h"

// SYMS CLASS
class VProcDpathAlu_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VProcDpathAlu_noparam*         TOPp;
    
    // CREATORS
    VProcDpathAlu_noparam__Syms(VProcDpathAlu_noparam* topp, const char* namep);
    ~VProcDpathAlu_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
