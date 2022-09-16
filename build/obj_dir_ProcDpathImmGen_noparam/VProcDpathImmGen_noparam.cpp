// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathImmGen_noparam.h for the primary calling header

#include "VProcDpathImmGen_noparam.h"
#include "VProcDpathImmGen_noparam__Syms.h"

//==========

void VProcDpathImmGen_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcDpathImmGen_noparam::eval\n"); );
    VProcDpathImmGen_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab2_proc/ProcDpathImmGen.v", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcDpathImmGen_noparam::_eval_initial_loop(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab2_proc/ProcDpathImmGen.v", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VProcDpathImmGen_noparam::_combo__TOP__1(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_combo__TOP__1\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->imm = ((0U == (IData)(vlTOPp->imm_type))
                    ? ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->inst 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       (0x7ffU & (vlTOPp->inst >> 0x14U)))
                    : ((2U == (IData)(vlTOPp->imm_type))
                        ? ((0xfffff000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->inst 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                           | ((0x800U & (vlTOPp->inst 
                                         << 4U)) | 
                              ((0x7e0U & (vlTOPp->inst 
                                          >> 0x14U)) 
                               | (0x1eU & (vlTOPp->inst 
                                           >> 7U)))))
                        : 0U));
}

void VProcDpathImmGen_noparam::_eval(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_eval\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VProcDpathImmGen_noparam::_change_request(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_change_request\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcDpathImmGen_noparam::_change_request_1(VProcDpathImmGen_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_change_request_1\n"); );
    VProcDpathImmGen_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VProcDpathImmGen_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((imm_type & 0xf8U))) {
        Verilated::overWidthError("imm_type");}
}
#endif  // VL_DEBUG
