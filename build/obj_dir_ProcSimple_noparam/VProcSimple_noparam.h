// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPROCSIMPLE_NOPARAM_H_
#define _VPROCSIMPLE_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VProcSimple_noparam__Dpi.h"

//==========

class VProcSimple_noparam__Syms;

//----------

VL_MODULE(VProcSimple_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(commit_inst,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(stats_en,0,0);
    VL_IN8(dmem_reqstream_rdy,0,0);
    VL_OUT8(dmem_reqstream_val,0,0);
    VL_OUT8(dmem_respstream_rdy,0,0);
    VL_IN8(dmem_respstream_val,0,0);
    VL_IN8(imem_reqstream_rdy,0,0);
    VL_OUT8(imem_reqstream_val,0,0);
    VL_OUT8(imem_respstream_rdy,0,0);
    VL_IN8(imem_respstream_val,0,0);
    VL_OUT8(mngr2proc_rdy,0,0);
    VL_IN8(mngr2proc_val,0,0);
    VL_IN8(proc2mngr_rdy,0,0);
    VL_OUT8(proc2mngr_val,0,0);
    VL_IN(core_id,31,0);
    VL_OUTW(dmem_reqstream_msg,77,0,3);
    VL_OUTW(imem_reqstream_msg,77,0,3);
    VL_IN(mngr2proc_msg,31,0);
    VL_OUT(proc2mngr_msg,31,0);
    VL_IN64(dmem_respstream_msg,47,0);
    VL_IN64(imem_respstream_msg,47,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_val;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_val;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_enq_val;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__reg_en_F;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__pc_sel_F;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__reg_en_D;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__op2_sel_D;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__csrr_sel_D;
        CData/*2:0*/ ProcSimple_noparam__DOT__v__DOT__imm_type_D;
        CData/*3:0*/ ProcSimple_noparam__DOT__v__DOT__alu_fn_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__wb_result_sel_M;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__rf_waddr_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__rf_wen_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_F;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__val_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__ostall_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_F;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stall_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__osquash_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_F;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__squash_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X;
        CData/*2:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D;
        CData/*3:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrr_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__csrw_D;
    };
    struct {
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        CData/*2:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__br_type_X;
        CData/*1:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W;
        CData/*0:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2;
        CData/*4:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd;
        CData/*6:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct;
        SData/*15:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str;
        SData/*11:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr;
        SData/*15:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str;
        SData/*15:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str;
        SData/*15:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str;
        SData/*15:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__inst_D;
        WData/*4095:0*/ ProcSimple_noparam__DOT__v__DOT__str[128];
        WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[3];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_X;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_M;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__ctrl__DOT__inst_W;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_F;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_next_F;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__br_target_X;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__jal_target_D;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__pc_D;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__imm_D;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op1_X;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__op2_X;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__alu_result_X;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__ex_result_M;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__wb_result_W;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__stats_en_W;
        IData/*23:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str;
        IData/*23:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str;
        IData/*23:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str;
        WData/*71:0*/ ProcSimple_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str[3];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str[128];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str[128];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1;
    };
    struct {
        WData/*4095:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str[128];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str[128];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT__imem_reqstream_enq_msg[3];
        WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[3];
        WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[2][3];
        IData/*31:0*/ ProcSimple_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[3];
    WData/*76:0*/ ProcSimple_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VProcSimple_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcSimple_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VProcSimple_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VProcSimple_noparam();
    
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
    static void _eval_initial_loop(VProcSimple_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VProcSimple_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcSimple_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcSimple_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcSimple_noparam__DOT__v__DOT__line_trace_TOP(VProcSimple_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VProcSimple_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VProcSimple_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VProcSimple_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VProcSimple_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VProcSimple_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VProcSimple_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VProcSimple_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VProcSimple_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
