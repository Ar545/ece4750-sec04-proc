// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcSimple_noparam.h for the primary calling header

#ifndef _VPROCSIMPLE_NOPARAM___024UNIT_H_
#define _VPROCSIMPLE_NOPARAM___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VProcSimple_noparam__Dpi.h"

//==========

class VProcSimple_noparam__Syms;

//----------

VL_MODULE(VProcSimple_noparam___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VProcSimple_noparam__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcSimple_noparam___024unit);  ///< Copying not allowed
  public:
    VProcSimple_noparam___024unit(const char* name = "TOP");
    ~VProcSimple_noparam___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VProcSimple_noparam__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
