// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcSimple_noparam.h for the primary calling header

#include "VProcSimple_noparam.h"
#include "VProcSimple_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VProcSimple_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcSimple_noparam::eval\n"); );
    VProcSimple_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("lab2_proc/ProcSimple.v", 397, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcSimple_noparam::_eval_initial_loop(VProcSimple_noparam__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("lab2_proc/ProcSimple.v", 397, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*199:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout[7];
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst;
    IData/*19:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst;
    IData/*19:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst;
    IData/*20:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst;
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[128];
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst;
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[128];
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst;
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[128];
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst;
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num;
    WData/*4095:0*/ __Vtemp29[128];
    WData/*4095:0*/ __Vtemp43[128];
    WData/*4095:0*/ __Vtemp57[128];
    WData/*4095:0*/ __Vtemp71[128];
    IData/*31:0*/ __Vilp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F) {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[0U] = 0x7eU;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num = 7U;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num = 7U;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                VL_SFORMAT_X(4096,vlTOPp->ProcSimple_noparam__DOT__v__DOT__str
                             ,"%x",32,vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F);
                __Vilp = 0U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[__Vilp] 
                        = vlTOPp->ProcSimple_noparam__DOT__v__DOT__str[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            }
        }
    } else {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num = 8U;
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char = 0x20U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char);
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[0U] = 0x7eU;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0x16U;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num = 0x16U;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                    = vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1 
                    = (0x1fU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0xfU));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2 
                    = (0x1fU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0x14U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd 
                    = (0x1fU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 7U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr 
                    = (0xfffU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                 >> 0x14U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct 
                    = (0x7fU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0x19U));
                if ((9U >= (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                 ,"x0%0#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                 ,"x%2#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1);
                }
                if ((9U >= (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                 ,"x0%0#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                 ,"x%2#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2);
                }
                if ((9U >= (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str
                                 ,"x0%0#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str
                                 ,"x%2#",5,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd);
                }
                if ((0x7c0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                    VL_SFORMAT_X(72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                 ,"proc2mngr");
                } else {
                    if ((0xfc0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                        VL_SFORMAT_X(72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                     ,"mngr2proc");
                    } else {
                        if ((0xf14U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_X(72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                         ,"coreid   ");
                        } else {
                            if ((0xfc1U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                                VL_SFORMAT_X(72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                             ,"numcores ");
                            } else {
                                if ((0x7c1U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                                 ,"stats_en ");
                                } else {
                                    VL_SFORMAT_X(72
                                                 ,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                                 ,"    0x%x",
                                                 12,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr);
                                }
                            }
                        }
                    }
                }
                VL_SFORMAT_X(16,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str
                             ,"%x",2,(3U & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct)));
                if (((((((((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                           | (0x1073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                          | (0x13U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                         | (0U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                    if ((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                        VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                     ,"csrr   %s, %s  ",
                                     24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                     72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str);
                    } else {
                        if ((0x1073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                         ,"csrw   %s, %s  ",
                                         72,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str,
                                         24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                        } else {
                            if ((0x13U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"nop                    ");
                            } else {
                                if ((0U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"                       ");
                                } else {
                                    if ((0x33U == (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"add    %s, %s, %s   ",
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                    } else {
                                        if ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"sub    %s, %s, %s   ",
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                        } else {
                                            if ((0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"and    %s, %s, %s   ",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                            } else {
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"or     %s, %s, %s   ",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x4033U == (0xfe00707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                               | (0x2033U == (0xfe00707fU 
                                              & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                        if ((0x4033U == (0xfe00707fU 
                                         & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                         ,"xor    %s, %s, %s   ",
                                         24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                         24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                         24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                        } else {
                            if ((0x2033U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"slt    %s, %s, %s   ",
                                             24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                             24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                             24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else {
                                if ((0x3033U == (0xfe00707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"sltu   %s, %s, %s   ",
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                } else {
                                    if ((0x2000033U 
                                         == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"mul    %s, %s, %s   ",
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                    } else {
                                        if ((0x13U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout 
                                                = (0xfffU 
                                                   & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"addi   %s, %s, 0x%x ",
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout));
                                        } else {
                                            if ((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                    = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout 
                                                    = 
                                                    (0xfffU 
                                                     & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                        >> 0x14U));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"andi   %s, %s, 0x%x ",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             12,
                                                             (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout));
                                            } else {
                                                if (
                                                    (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout 
                                                        = 
                                                        (0xfffU 
                                                         & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"ori    %s, %s, 0x%x ",
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 12,
                                                                 (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout));
                                                } else {
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout 
                                                        = 
                                                        (0xfffU 
                                                         & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"xori   %s, %s, 0x%x ",
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 12,
                                                                 (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (((((((((0x2013U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                   | (0x3013U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x2013U == (0x707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                    = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout 
                                    = (0xfffU & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                 >> 0x14U));
                                VL_SFORMAT_X(200,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"slti   %s, %s, 0x%x ",
                                             24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                             24,vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                             12,(IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout));
                            } else {
                                if ((0x3013U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout 
                                        = (0xfffU & 
                                           (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                            >> 0x14U));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"sltiu  %s, %s, 0x%x ",
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 12,
                                                 (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout));
                                } else {
                                    if ((0x40005033U 
                                         == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout 
                                            = (0x1fU 
                                               & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                                  >> 0x14U));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"sra    %s, %s, 0x%x  ",
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     5,
                                                     (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout));
                                    } else {
                                        if ((0x5033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout 
                                                = (0x1fU 
                                                   & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"srl    %s, %s, 0x%x  ",
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout));
                                        } else {
                                            if ((0x1033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                    = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                        >> 0x14U));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"sll    %s, %s, 0x%x  ",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             5,
                                                             (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout));
                                            } else {
                                                if (
                                                    (0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout 
                                                        = 
                                                        (0x1fU 
                                                         & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"srai   %s, %s, 0x%x  ",
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 5,
                                                                 (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout));
                                                } else {
                                                    if (
                                                        (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout 
                                                            = 
                                                            (0x1fU 
                                                             & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"srli   %s, %s, 0x%x  ",
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     5,
                                                                     (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout));
                                                    } else {
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout 
                                                            = 
                                                            (0x1fU 
                                                             & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"slli   %s, %s, 0x%x  ",
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     5,
                                                                     (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((((((((0x37U == (0x7fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                       | (0x17U == 
                                          (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                                if ((0x37U == (0x7fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout 
                                        = (0xfffffU 
                                           & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                              >> 0xcU));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"lui    %s, 0x%x    ",
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 20,
                                                 __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout);
                                } else {
                                    if ((0x17U == (0x7fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout 
                                            = (0xfffffU 
                                               & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                  >> 0xcU));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"auipc  %s, 0x%x    ",
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     20,
                                                     __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout);
                                    } else {
                                        if ((0x2003U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout 
                                                = (0xfffU 
                                                   & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"lw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         12,
                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout),
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                                        } else {
                                            if ((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                    = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout 
                                                    = 
                                                    ((0xfe0U 
                                                      & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                           >> 7U)));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"sw     %s, 0x%x(%s) ",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                             12,
                                                             (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout),
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                                            } else {
                                                if (
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout 
                                                        = 
                                                        ((0x100000U 
                                                          & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst) 
                                                            | ((0x800U 
                                                                & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                   >> 9U)) 
                                                               | ((0x7e0U 
                                                                   & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                        >> 0x14U))))));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"jal    %s, 0x%x   ",
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 21,
                                                                 __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout);
                                                } else {
                                                    if (
                                                        (0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout 
                                                            = 
                                                            (0xfffU 
                                                             & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"jalr   %s, %s, 0x%x ",
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     12,
                                                                     (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout));
                                                    } else {
                                                        if (
                                                            (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                             >> 7U)))));
                                                            VL_SFORMAT_X(200
                                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                         ,"beq    %s, %s, 0x%x",
                                                                         24,
                                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                         24,
                                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                         13,
                                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout));
                                                        } else {
                                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                             >> 7U)))));
                                                            VL_SFORMAT_X(200
                                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                         ,"bne    %s, %s, 0x%x",
                                                                         24,
                                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                         24,
                                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                         13,
                                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x4063U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                        = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout 
                                        = ((0x1000U 
                                            & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                       >> 7U)))));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"blt    %s, %s, 0x%x",
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 24,
                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                 13,
                                                 (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout));
                                } else {
                                    if ((0x5063U == 
                                         (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                            = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout 
                                            = ((0x1000U 
                                                & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                           >> 7U)))));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"bge    %s, %s, 0x%x",
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout));
                                    } else {
                                        if ((0x6063U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                               >> 7U)))));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"bltu   %s, %s, 0x%x",
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout));
                                        } else {
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                    = __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                                 >> 7U)))));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"bgeu   %s, %s, 0x%x",
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                             13,
                                                             (IData)(__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout));
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"cust0 %s, %s, %s, %s",
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 24,
                                                                 vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                 16,
                                                                 (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str));
                                                } else {
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"illegal inst           ");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                VL_EXTEND_WW(4096,200, __Vtemp29, __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout);
                __Vilp = 0U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] 
                        = __Vtemp29[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            }
        }
    } else {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num = 0x17U;
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char = 0x20U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char);
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num = 3U;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_X;
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                         | (0x13U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp43, __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[__Vilp] 
                    = __Vtemp43[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num = 4U;
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char = 0x20U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char);
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num = 3U;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_M;
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                         | (0x13U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp57, __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[__Vilp] 
                    = __Vtemp57[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num = 4U;
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char = 0x20U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char);
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num = 3U;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_W;
            __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                         | (0x13U == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp71, __Vfunc_ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[__Vilp] 
                    = __Vtemp71[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num = 4U;
        __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char);
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    }
}

void VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val;
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__char;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__num;
    IData/*31:0*/ __Vilp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str 
        = ((0U == (7U & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                         >> 0xaU))) ? 0x7264U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                      >> 0xaU)))
                                                  ? 0x7772U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                       >> 0xaU)))
                                                   ? 0x776eU
                                                   : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__str[__Vilp] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy 
        = vlTOPp->imem_reqstream_rdy;
    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val 
        = vlTOPp->imem_reqstream_val;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy) 
         & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[__Vilp] 
                = __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__65__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy) 
             & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val)))) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__num 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__66__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy)) 
                 & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val))) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__67__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__num 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__68__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__rdy)) 
                           & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__64__val))))) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__69__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__70__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__71__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__72__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val;
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__char;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__num;
    IData/*31:0*/ __Vilp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str 
        = ((0U == (7U & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                         >> 0xaU))) ? 0x7264U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                      >> 0xaU)))
                                                  ? 0x7772U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                       >> 0xaU)))
                                                   ? 0x776eU
                                                   : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__str[__Vilp] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy 
        = vlTOPp->dmem_reqstream_rdy;
    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val 
        = vlTOPp->dmem_reqstream_val;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy) 
         & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[__Vilp] 
                = __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__74__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy) 
             & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val)))) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__num 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__75__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy)) 
                 & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val))) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__76__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__num 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__77__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__rdy)) 
                           & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__73__val))))) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__78__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__79__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__80__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__81__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val;
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__char;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__num;
    IData/*31:0*/ __Vilp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str 
        = ((0U == (7U & (IData)((vlTOPp->imem_respstream_msg 
                                 >> 0x2cU)))) ? 0x7264U
            : ((1U == (7U & (IData)((vlTOPp->imem_respstream_msg 
                                     >> 0x2cU)))) ? 0x7772U
                : ((2U == (7U & (IData)((vlTOPp->imem_respstream_msg 
                                         >> 0x2cU))))
                    ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__str[__Vilp] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy 
        = vlTOPp->imem_respstream_rdy;
    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val 
        = vlTOPp->imem_respstream_val;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy) 
         & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[__Vilp] 
                = __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__83__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy) 
             & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val)))) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__num 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__84__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy)) 
                 & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val))) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__85__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__num 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__86__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__rdy)) 
                           & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__82__val))))) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__87__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__88__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__89__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__90__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::__Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val;
    CData/*0:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__char;
    CData/*7:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__char;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__str[128];
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__num;
    WData/*4095:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[128];
    IData/*31:0*/ __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__num;
    IData/*31:0*/ __Vilp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str 
        = ((0U == (7U & (IData)((vlTOPp->dmem_respstream_msg 
                                 >> 0x2cU)))) ? 0x7264U
            : ((1U == (7U & (IData)((vlTOPp->dmem_respstream_msg 
                                     >> 0x2cU)))) ? 0x7772U
                : ((2U == (7U & (IData)((vlTOPp->dmem_respstream_msg 
                                         >> 0x2cU))))
                    ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__str[__Vilp] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy 
        = vlTOPp->dmem_respstream_rdy;
    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val 
        = vlTOPp->dmem_respstream_val;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy) 
         & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[__Vilp] 
                = __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__92__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy) 
             & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val)))) {
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__num 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__char = 0x20U;
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__93__char);
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy)) 
                 & (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val))) {
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__94__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__num 
                    = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__char = 0x20U;
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__95__char);
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__rdy)) 
                           & (~ (IData)(__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__91__val))))) {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__96__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__97__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__98__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__num 
                        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__char = 0x20U;
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__99__char);
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcSimple_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VProcSimple_noparam__Vcb_line_trace_t __Vcb = (VProcSimple_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VProcSimple_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VProcSimple_noparam::_sequent__TOP__1(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_sequent__TOP__1\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*4:0*/ __Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    IData/*31:0*/ __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    WData/*95:0*/ __Vtemp165[3];
    WData/*95:0*/ __Vtemp171[3];
    WData/*76:0*/ __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[3];
    // Body
    __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0U;
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U];
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_D 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next)));
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))) {
        __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[0U];
        __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[1U];
        __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[2U];
        __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__br_target_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D);
    }
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W;
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_D;
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_W 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_M;
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        }
    }
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_wen_W) {
        __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W;
        __Vdlyvset__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W;
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X 
            = ((IData)(vlTOPp->reset) ? 0U : ((0U == 
                                               (0x1fU 
                                                & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                              [(0x1fU 
                                                & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                   >> 0xfU))]));
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X 
            = ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__op2_sel_D))
                                               ? ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                       >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                      >> 0x14U))])
                                               : ((1U 
                                                   == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__op2_sel_D))
                                                   ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__op2_sel_D))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D))
                                                     ? vlTOPp->mngr2proc_msg
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D))
                                                       ? vlTOPp->core_id
                                                       : 0U)))
                                                    : 0U))));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X;
        }
    }
    if (((IData)(vlTOPp->reset) | ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
                                   & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W)))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__stats_en_W 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W);
    }
    if (__Vdlyvset__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__Vdlyvset__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vdlyvdim0__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0] 
            = __Vdlyvval__ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_F))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F 
            = ((IData)(vlTOPp->reset) ? 0x1fcU : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D;
        }
    }
    vlTOPp->stats_en = (0U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__stats_en_W);
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W 
            = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__wb_result_sel_M)
                                               ? ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__wb_result_sel_M)
                                                   ? (IData)(vlTOPp->dmem_respstream_msg)
                                                   : 0U)
                                               : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__ex_result_M));
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W 
                = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                   & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)));
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
              == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        }
    }
    vlTOPp->proc2mngr_msg = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W));
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__ex_result_M 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__wb_result_sel_M 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M 
                = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                   & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)));
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
        = ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
            ? (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X 
               + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X)
            : ((0xbU == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X
                : ((0xcU == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
                    ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X
                    : 0U)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X 
                = (0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                            >> 7U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U] = 0U;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = (0xfffffffcU & ((IData)((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X))) 
                          << 2U));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((3U & ((IData)((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X)) 
                                                        >> 0x20U)) 
                                               << 2U)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X 
                = vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        }
    }
    vlTOPp->commit_inst = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
                           & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
            & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W))) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X 
                = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                    & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D))) 
                   & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
        }
    }
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U]);
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U]);
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U]);
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->proc2mngr_val = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
            = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->imem_respstream_msg));
    }
    VL_EXTEND_WW(78,77, __Vtemp165, vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg);
    vlTOPp->dmem_reqstream_msg[0U] = __Vtemp165[0U];
    vlTOPp->dmem_reqstream_msg[1U] = __Vtemp165[1U];
    vlTOPp->dmem_reqstream_msg[2U] = __Vtemp165[2U];
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D = 0U;
    } else {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_D) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D 
                = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
                    & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F))) 
                   & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
        }
    }
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
         & (1U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_X)))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = 1U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
            = ((vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                != vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
               & 1U);
    } else {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = 0U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X = 0U;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
            & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X)
            : 0U);
    if ((0x13U == vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
    } else {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
            = ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                ? 0U : ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                         ? 0U : ((0x1063U == (0x707fU 
                                              & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                  ? 0U : ((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                           ? 0xcU : 
                                          ((0x1073U 
                                            == (0x707fU 
                                                & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                            ? 0xbU : 0U)))));
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_D 
            = ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                ? 0U : ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                         ? 0U : ((0x1063U == (0x707fU 
                                              & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                  ? 1U : 0U)));
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              | ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                 | ((0x1063U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                    & ((0x2073U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                       | ((0x1073U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                          & (0x13U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))))))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__op2_sel_D 
        = ((0x13U == vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)
            ? 0U : ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                     ? 0U : ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                              ? 1U : ((0x1063U == (0x707fU 
                                                   & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                       ? 0U : ((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                                ? 2U
                                                : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                                     ? 1U
                                                     : 0U)))))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U != (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              & (0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D 
        = ((0x13U == vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)
            ? 0U : ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                     ? 0U : ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                              ? 1U : 0U)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrw_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U != (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              & ((0x2003U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                 & ((0x1063U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                    & ((0x2073U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                       & (0x1073U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)))))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imm_type_D 
        = ((0x13U == vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)
            ? 0U : ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                     ? 0U : ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                              ? 0U : ((0x1063U == (0x707fU 
                                                   & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))
                                       ? 2U : 0U))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              | ((0x2003U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                 & (0x1063U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U == (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              | ((0x2003U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                 | ((0x1063U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                    | ((0x2073U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                       & ((0x1073U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                          | (0x13U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))))))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D 
        = ((0x13U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D) 
           & ((0x33U != (0xfe00707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
              & ((0x2003U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                 & ((0x1063U != (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D)) 
                    & (0x2073U == (0x707fU & vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D))))));
    if (vlTOPp->reset) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F = 0U;
    } else {
        if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_F) {
            vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F = 1U;
        }
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (0xfffU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                 >> 0x14U))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (0xfffU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                 >> 0x14U))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D 
        = ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imm_type_D))
            ? ((0xfffff800U & ((- (IData)((1U & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                 >> 0x1fU)))) 
                               << 0xbU)) | (0x7ffU 
                                            & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                               >> 0x14U)))
            : ((2U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imm_type_D))
                ? ((0xfffff000U & ((- (IData)((1U & 
                                               (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                >> 0x1fU)))) 
                                   << 0xcU)) | ((0x800U 
                                                 & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                                         >> 7U)))))
                : 0U));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D = 0U;
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (0xfffU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                 >> 0x14U))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (0xfffU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                 >> 0x14U))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__csrr_sel_D = 2U;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (0xfffU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                 >> 0x14U))))) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_D 
           + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D);
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
            ? ((IData)(4U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F)
            : ((1U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__br_target_X
                : ((2U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
                    ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D
                    : 0U)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[0U] = 0U;
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[1U] 
        = (0xfffffffcU & ((IData)((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                          << 2U));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[2U] 
        = ((3U & ((IData)((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((QData)((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F)) 
                                                        >> 0x20U)) 
                                               << 2U)));
    if (vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[0U]
                : 0U);
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[1U]
                : 0U);
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[2U]
                : 0U);
    } else {
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][0U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][1U];
        vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][2U];
    }
    VL_EXTEND_WW(78,77, __Vtemp171, vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg);
    vlTOPp->imem_reqstream_msg[0U] = __Vtemp171[0U];
    vlTOPp->imem_reqstream_msg[1U] = __Vtemp171[1U];
    vlTOPp->imem_reqstream_msg[2U] = __Vtemp171[2U];
}

VL_INLINE_OPT void VProcSimple_noparam::_combo__TOP__3(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_combo__TOP__3\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
            & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M))) 
           & (~ (IData)(vlTOPp->dmem_respstream_val)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->proc2mngr_rdy) & (IData)(vlTOPp->proc2mngr_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D)) 
               & (~ (IData)(vlTOPp->mngr2proc_val))) 
              | ((((((((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                         & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X)) 
                        & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                       & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                     | (((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M)) 
                          & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M)) 
                         & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                      >> 0xfU)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                        & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)))) 
                    | (((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                          & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W)) 
                         & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_wen_W)) 
                        & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                     >> 0xfU)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W))) 
                       & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W)))) 
                   | (((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                         & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X)) 
                        & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                       & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                    >> 0x14U)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)))) 
                  | (((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                        & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M)) 
                       & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M)) 
                      & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                   >> 0x14U)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                     & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)))) 
                 | (((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                       & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W)) 
                      & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_wen_W)) 
                     & ((0x1fU & (vlTOPp->ProcSimple_noparam__DOT__v__DOT__inst_D 
                                  >> 0x14U)) == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W))) 
                    & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_waddr_W))))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X) 
               | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D) 
                | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->dmem_respstream_rdy = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                    & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M))) 
                                   & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_val 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__osquash_X 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->mngr2proc_rdy = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                              & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D))) 
                             & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->dmem_reqstream_val = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                  | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->dmem_reqstream_rdy) & (IData)(vlTOPp->dmem_reqstream_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
                  & (~ ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)) 
                        & ((IData)(vlTOPp->imem_respstream_val) 
                           & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F)))))) 
                 | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D)) 
                | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_F 
        = (1U & ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
    vlTOPp->imem_respstream_rdy = (1U & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                                         | ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                                            | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_val 
        = (1U & (((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                  | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F)) 
                 & (~ (IData)(vlTOPp->reset))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlTOPp->imem_respstream_rdy) & (IData)(vlTOPp->imem_respstream_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_val));
    vlTOPp->imem_reqstream_val = (1U & ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)) 
                                        | ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
                                           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_val))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = (1U & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                  ? (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go))
                  : ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go)))));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->imem_reqstream_rdy) & (IData)(vlTOPp->imem_reqstream_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next 
        = ((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
             & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq))) 
            & ((1U & ((IData)(1U) + (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))) 
               == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))) 
           | ((~ ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full))) 
              & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
                  & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr)));
}

void VProcSimple_noparam::_eval(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_eval\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VProcSimple_noparam::_change_request(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_change_request\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcSimple_noparam::_change_request_1(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_change_request_1\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VProcSimple_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((dmem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("dmem_reqstream_rdy");}
    if (VL_UNLIKELY((dmem_respstream_msg & 0ULL))) {
        Verilated::overWidthError("dmem_respstream_msg");}
    if (VL_UNLIKELY((dmem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("dmem_respstream_val");}
    if (VL_UNLIKELY((imem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("imem_reqstream_rdy");}
    if (VL_UNLIKELY((imem_respstream_msg & 0ULL))) {
        Verilated::overWidthError("imem_respstream_msg");}
    if (VL_UNLIKELY((imem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("imem_respstream_val");}
    if (VL_UNLIKELY((mngr2proc_val & 0xfeU))) {
        Verilated::overWidthError("mngr2proc_val");}
    if (VL_UNLIKELY((proc2mngr_rdy & 0xfeU))) {
        Verilated::overWidthError("proc2mngr_rdy");}
}
#endif  // VL_DEBUG
