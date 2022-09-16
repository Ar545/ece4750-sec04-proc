
#=========================================================================
# VProcSimple_noparam_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# ProcSimple_noparam
#-------------------------------------------------------------------------

class ProcSimple_noparam( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * commit_inst;        
        unsigned int * core_id;        
        unsigned char * reset;        
        unsigned char * stats_en;        
        unsigned int * dmem_reqstream_msg;        
        unsigned char * dmem_reqstream_rdy;        
        unsigned char * dmem_reqstream_val;        
        unsigned long * dmem_respstream_msg;        
        unsigned char * dmem_respstream_rdy;        
        unsigned char * dmem_respstream_val;        
        unsigned int * imem_reqstream_msg;        
        unsigned char * imem_reqstream_rdy;        
        unsigned char * imem_reqstream_val;        
        unsigned long * imem_respstream_msg;        
        unsigned char * imem_respstream_rdy;        
        unsigned char * imem_respstream_val;        
        unsigned int * mngr2proc_msg;        
        unsigned char * mngr2proc_rdy;        
        unsigned char * mngr2proc_val;        
        unsigned int * proc2mngr_msg;        
        unsigned char * proc2mngr_rdy;        
        unsigned char * proc2mngr_val;

        // Verilator model
        void * model;

      } VProcSimple_noparam_t;

      VProcSimple_noparam_t * create_model( const char * );
      void destroy_model( VProcSimple_noparam_t *);
      void comb_eval( VProcSimple_noparam_t * );
      void seq_eval( VProcSimple_noparam_t * );
      void assert_en( bool en );
      void trace( VProcSimple_noparam_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libProcSimple_noparam_v.so', os.path.getmtime( './libProcSimple_noparam_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libProcSimple_noparam_v.so')

    # increment instance count
    ProcSimple_noparam.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "ProcSimple_noparam.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.commit_inst = OutPort( Bits1 )
    s.core_id = InPort( Bits32 )
    s.stats_en = OutPort( Bits1 )
    s.dmem = MemRequesterIfc( MemReqMsg__type__4__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__4__opaque_8__test_2__len_2__data_32 )
    s.imem = MemRequesterIfc( MemReqMsg__type__4__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__4__opaque_8__test_2__len_2__data_32 )
    s.mngr2proc = IStreamIfc( Bits32 )
    s.proc2mngr = OStreamIfc( Bits32 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_core_id = Wire( Bits32 )
    @update
    def isignal_s_DOT_core_id():
      s.s_DOT_core_id @= s.core_id
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_dmem_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_dmem_DOT_reqstream_DOT_rdy():
      s.s_DOT_dmem_DOT_reqstream_DOT_rdy @= s.dmem.reqstream.rdy
    
    s.s_DOT_dmem_DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_dmem_DOT_respstream_DOT_msg():
      s.s_DOT_dmem_DOT_respstream_DOT_msg @= s.dmem.respstream.msg
    
    s.s_DOT_dmem_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_dmem_DOT_respstream_DOT_val():
      s.s_DOT_dmem_DOT_respstream_DOT_val @= s.dmem.respstream.val
    
    s.s_DOT_imem_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_imem_DOT_reqstream_DOT_rdy():
      s.s_DOT_imem_DOT_reqstream_DOT_rdy @= s.imem.reqstream.rdy
    
    s.s_DOT_imem_DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_imem_DOT_respstream_DOT_msg():
      s.s_DOT_imem_DOT_respstream_DOT_msg @= s.imem.respstream.msg
    
    s.s_DOT_imem_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_imem_DOT_respstream_DOT_val():
      s.s_DOT_imem_DOT_respstream_DOT_val @= s.imem.respstream.val
    
    s.s_DOT_mngr2proc_DOT_msg = Wire( Bits32 )
    @update
    def isignal_s_DOT_mngr2proc_DOT_msg():
      s.s_DOT_mngr2proc_DOT_msg @= s.mngr2proc.msg
    
    s.s_DOT_mngr2proc_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_mngr2proc_DOT_val():
      s.s_DOT_mngr2proc_DOT_val @= s.mngr2proc.val
    
    s.s_DOT_proc2mngr_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2mngr_DOT_rdy():
      s.s_DOT_proc2mngr_DOT_rdy @= s.proc2mngr.rdy
    
    s.s_DOT_commit_inst = Wire( Bits1 )
    @update
    def osignal_s_DOT_commit_inst():
      s.commit_inst @= s.s_DOT_commit_inst
    
    s.s_DOT_stats_en = Wire( Bits1 )
    @update
    def osignal_s_DOT_stats_en():
      s.stats_en @= s.s_DOT_stats_en
    
    s.s_DOT_dmem_DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_dmem_DOT_reqstream_DOT_msg():
      s.dmem.reqstream.msg.data @= s.s_DOT_dmem_DOT_reqstream_DOT_msg[0:32]
      s.dmem.reqstream.msg.len @= s.s_DOT_dmem_DOT_reqstream_DOT_msg[32:34]
      s.dmem.reqstream.msg.addr @= s.s_DOT_dmem_DOT_reqstream_DOT_msg[34:66]
      s.dmem.reqstream.msg.opaque @= s.s_DOT_dmem_DOT_reqstream_DOT_msg[66:74]
      s.dmem.reqstream.msg.type_ @= s.s_DOT_dmem_DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_dmem_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_dmem_DOT_reqstream_DOT_val():
      s.dmem.reqstream.val @= s.s_DOT_dmem_DOT_reqstream_DOT_val
    
    s.s_DOT_dmem_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_dmem_DOT_respstream_DOT_rdy():
      s.dmem.respstream.rdy @= s.s_DOT_dmem_DOT_respstream_DOT_rdy
    
    s.s_DOT_imem_DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_imem_DOT_reqstream_DOT_msg():
      s.imem.reqstream.msg.data @= s.s_DOT_imem_DOT_reqstream_DOT_msg[0:32]
      s.imem.reqstream.msg.len @= s.s_DOT_imem_DOT_reqstream_DOT_msg[32:34]
      s.imem.reqstream.msg.addr @= s.s_DOT_imem_DOT_reqstream_DOT_msg[34:66]
      s.imem.reqstream.msg.opaque @= s.s_DOT_imem_DOT_reqstream_DOT_msg[66:74]
      s.imem.reqstream.msg.type_ @= s.s_DOT_imem_DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_imem_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_imem_DOT_reqstream_DOT_val():
      s.imem.reqstream.val @= s.s_DOT_imem_DOT_reqstream_DOT_val
    
    s.s_DOT_imem_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_imem_DOT_respstream_DOT_rdy():
      s.imem.respstream.rdy @= s.s_DOT_imem_DOT_respstream_DOT_rdy
    
    s.s_DOT_mngr2proc_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_mngr2proc_DOT_rdy():
      s.mngr2proc.rdy @= s.s_DOT_mngr2proc_DOT_rdy
    
    s.s_DOT_proc2mngr_DOT_msg = Wire( Bits32 )
    @update
    def osignal_s_DOT_proc2mngr_DOT_msg():
      s.proc2mngr.msg @= s.s_DOT_proc2mngr_DOT_msg
    
    s.s_DOT_proc2mngr_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2mngr_DOT_val():
      s.proc2mngr.val @= s.s_DOT_proc2mngr_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.core_id[0] = int(s.s_DOT_core_id)
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.dmem_reqstream_rdy[0] = int(s.s_DOT_dmem_DOT_reqstream_DOT_rdy)
      
      _ffi_m.dmem_respstream_msg[0] = int(s.s_DOT_dmem_DOT_respstream_DOT_msg)
      
      _ffi_m.dmem_respstream_val[0] = int(s.s_DOT_dmem_DOT_respstream_DOT_val)
      
      _ffi_m.imem_reqstream_rdy[0] = int(s.s_DOT_imem_DOT_reqstream_DOT_rdy)
      
      _ffi_m.imem_respstream_msg[0] = int(s.s_DOT_imem_DOT_respstream_DOT_msg)
      
      _ffi_m.imem_respstream_val[0] = int(s.s_DOT_imem_DOT_respstream_DOT_val)
      
      _ffi_m.mngr2proc_msg[0] = int(s.s_DOT_mngr2proc_DOT_msg)
      
      _ffi_m.mngr2proc_val[0] = int(s.s_DOT_mngr2proc_DOT_val)
      
      _ffi_m.proc2mngr_rdy[0] = int(s.s_DOT_proc2mngr_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_commit_inst @= _ffi_m.commit_inst[0]
      
      s.s_DOT_stats_en @= _ffi_m.stats_en[0]
      
      x = _ffi_m.dmem_reqstream_msg
      s.s_DOT_dmem_DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_dmem_DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_dmem_DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      s.s_DOT_dmem_DOT_reqstream_DOT_val @= _ffi_m.dmem_reqstream_val[0]
      
      s.s_DOT_dmem_DOT_respstream_DOT_rdy @= _ffi_m.dmem_respstream_rdy[0]
      
      x = _ffi_m.imem_reqstream_msg
      s.s_DOT_imem_DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_imem_DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_imem_DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      s.s_DOT_imem_DOT_reqstream_DOT_val @= _ffi_m.imem_reqstream_val[0]
      
      s.s_DOT_imem_DOT_respstream_DOT_rdy @= _ffi_m.imem_respstream_rdy[0]
      
      s.s_DOT_mngr2proc_DOT_rdy @= _ffi_m.mngr2proc_rdy[0]
      
      s.s_DOT_proc2mngr_DOT_msg @= _ffi_m.proc2mngr_msg[0]
      
      s.s_DOT_proc2mngr_DOT_val @= _ffi_m.proc2mngr_val[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 1:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, commit_inst={s.commit_inst}, core_id={s.core_id}, reset={s.reset}, stats_en={s.stats_en}, dmem.reqstream.msg={s.dmem.reqstream.msg}, dmem.reqstream.rdy={s.dmem.reqstream.rdy}, dmem.reqstream.val={s.dmem.reqstream.val}, dmem.respstream.msg={s.dmem.respstream.msg}, dmem.respstream.rdy={s.dmem.respstream.rdy}, dmem.respstream.val={s.dmem.respstream.val}, imem.reqstream.msg={s.imem.reqstream.msg}, imem.reqstream.rdy={s.imem.reqstream.rdy}, imem.reqstream.val={s.imem.reqstream.val}, imem.respstream.msg={s.imem.respstream.msg}, imem.respstream.rdy={s.imem.respstream.rdy}, imem.respstream.val={s.imem.respstream.val}, mngr2proc.msg={s.mngr2proc.msg}, mngr2proc.rdy={s.mngr2proc.rdy}, mngr2proc.val={s.mngr2proc.val}, proc2mngr.msg={s.proc2mngr.msg}, proc2mngr.rdy={s.proc2mngr.rdy}, proc2mngr.val={s.proc2mngr.val},'

  def internal_line_trace( s ):
    return ''
