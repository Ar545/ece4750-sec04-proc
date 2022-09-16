// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcSimple_noparam.h for the primary calling header

#include "VProcSimple_noparam.h"
#include "VProcSimple_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VProcSimple_noparam) {
    VProcSimple_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VProcSimple_noparam__Syms(this, name());
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VProcSimple_noparam::__Vconfigure(VProcSimple_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VProcSimple_noparam::~VProcSimple_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VProcSimple_noparam::_settle__TOP__2(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_settle__TOP__2\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp176[3];
    WData/*95:0*/ __Vtemp182[3];
    // Body
    vlTOPp->stats_en = (0U != vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__stats_en_W);
    vlTOPp->proc2mngr_msg = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
              == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
        = ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
            ? (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X 
               + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X)
            : ((0xbU == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X
                : ((0xcU == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__alu_fn_X))
                    ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X
                    : 0U)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
            & (0U != (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M))) 
           & (~ (IData)(vlTOPp->dmem_respstream_val)));
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X)
            : 0U);
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X) 
               | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
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
    vlTOPp->commit_inst = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
                           & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val 
        = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
            & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W))) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_D 
           + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D);
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->proc2mngr_val = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val));
    VL_EXTEND_WW(78,77, __Vtemp176, vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg);
    vlTOPp->dmem_reqstream_msg[0U] = __Vtemp176[0U];
    vlTOPp->dmem_reqstream_msg[1U] = __Vtemp176[1U];
    vlTOPp->dmem_reqstream_msg[2U] = __Vtemp176[2U];
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((0U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
            ? ((IData)(4U) + vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F)
            : ((1U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__br_target_X
                : ((2U == (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__pc_sel_F))
                    ? vlTOPp->ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D
                    : 0U)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D) 
                | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->proc2mngr_rdy) & (IData)(vlTOPp->proc2mngr_val));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->dmem_reqstream_rdy) & (IData)(vlTOPp->dmem_reqstream_val));
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
    vlTOPp->mngr2proc_rdy = (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                              & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D))) 
                             & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
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
    vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
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
    VL_EXTEND_WW(78,77, __Vtemp182, vlTOPp->ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg);
    vlTOPp->imem_reqstream_msg[0U] = __Vtemp182[0U];
    vlTOPp->imem_reqstream_msg[1U] = __Vtemp182[1U];
    vlTOPp->imem_reqstream_msg[2U] = __Vtemp182[2U];
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

void VProcSimple_noparam::_eval_initial(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_eval_initial\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VProcSimple_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::final\n"); );
    // Variables
    VProcSimple_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcSimple_noparam::_eval_settle(VProcSimple_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_eval_settle\n"); );
    VProcSimple_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VProcSimple_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcSimple_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    commit_inst = VL_RAND_RESET_I(1);
    core_id = VL_RAND_RESET_I(32);
    reset = VL_RAND_RESET_I(1);
    stats_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, dmem_reqstream_msg);
    dmem_reqstream_rdy = VL_RAND_RESET_I(1);
    dmem_reqstream_val = VL_RAND_RESET_I(1);
    dmem_respstream_msg = VL_RAND_RESET_Q(48);
    dmem_respstream_rdy = VL_RAND_RESET_I(1);
    dmem_respstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, imem_reqstream_msg);
    imem_reqstream_rdy = VL_RAND_RESET_I(1);
    imem_reqstream_val = VL_RAND_RESET_I(1);
    imem_respstream_msg = VL_RAND_RESET_Q(48);
    imem_respstream_rdy = VL_RAND_RESET_I(1);
    imem_respstream_val = VL_RAND_RESET_I(1);
    mngr2proc_msg = VL_RAND_RESET_I(32);
    mngr2proc_rdy = VL_RAND_RESET_I(1);
    mngr2proc_val = VL_RAND_RESET_I(1);
    proc2mngr_msg = VL_RAND_RESET_I(32);
    proc2mngr_rdy = VL_RAND_RESET_I(1);
    proc2mngr_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg);
    VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__reg_en_F = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__pc_sel_F = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__reg_en_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__imm_type_D = VL_RAND_RESET_I(3);
    ProcSimple_noparam__DOT__v__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    ProcSimple_noparam__DOT__v__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__inst_D = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, ProcSimple_noparam__DOT__v__DOT__str);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }}
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M = VL_RAND_RESET_I(2);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str);
    ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
