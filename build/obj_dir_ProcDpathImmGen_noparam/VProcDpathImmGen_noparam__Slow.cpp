// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathImmGen_noparam.h for the primary calling header

#include "VProcDpathImmGen_noparam.h"
#include "VProcDpathImmGen_noparam__Syms.h"

//==========

VL_CTOR_IMP(VProcDpathImmGen_noparam) {
    VProcDpathImmGen_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VProcDpathImmGen_noparam__Syms(this, name());
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VProcDpathImmGen_noparam::__Vconfigure(VProcDpathImmGen_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VProcDpathImmGen_noparam::~VProcDpathImmGen_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VProcDpathImmGen_noparam::_eval_initial(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_eval_initial\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcDpathImmGen_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::final\n"); );
    // Variables
    VProcDpathImmGen_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcDpathImmGen_noparam::_eval_settle(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_eval_settle\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VProcDpathImmGen_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    imm = VL_RAND_RESET_I(32);
    imm_type = VL_RAND_RESET_I(3);
    inst = VL_RAND_RESET_I(32);
}
