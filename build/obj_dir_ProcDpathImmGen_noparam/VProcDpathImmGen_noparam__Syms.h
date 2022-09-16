// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPROCDPATHIMMGEN_NOPARAM__SYMS_H_
#define _VPROCDPATHIMMGEN_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VProcDpathImmGen_noparam.h"

// SYMS CLASS
class VProcDpathImmGen_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VProcDpathImmGen_noparam*      TOPp;
    
    // CREATORS
    VProcDpathImmGen_noparam__Syms(VProcDpathImmGen_noparam* topp, const char* namep);
    ~VProcDpathImmGen_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
