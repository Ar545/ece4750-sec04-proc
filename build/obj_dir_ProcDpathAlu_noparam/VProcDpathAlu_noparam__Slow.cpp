// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAlu_noparam.h for the primary calling header

#include "VProcDpathAlu_noparam.h"
#include "VProcDpathAlu_noparam__Syms.h"

//==========

VL_CTOR_IMP(VProcDpathAlu_noparam) {
    VProcDpathAlu_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VProcDpathAlu_noparam__Syms(this, name());
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VProcDpathAlu_noparam::__Vconfigure(VProcDpathAlu_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VProcDpathAlu_noparam::~VProcDpathAlu_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VProcDpathAlu_noparam::_eval_initial(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_eval_initial\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcDpathAlu_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::final\n"); );
    // Variables
    VProcDpathAlu_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcDpathAlu_noparam::_eval_settle(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_eval_settle\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VProcDpathAlu_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    fn = VL_RAND_RESET_I(4);
    in0 = VL_RAND_RESET_I(32);
    in1 = VL_RAND_RESET_I(32);
    ops_eq = VL_RAND_RESET_I(1);
    ops_lt = VL_RAND_RESET_I(1);
    ops_ltu = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(32);
}
