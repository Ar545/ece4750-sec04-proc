//-------------------------------------------------------------------------
// ProcDpathAlu_noparam.v
//-------------------------------------------------------------------------
// This file is generated by PyMTL SystemVerilog translation pass.

// PyMTL VerilogPlaceholder ProcDpathAlu Definition
// At /home/lz527/ece4750/ece4750-sec04-proc/lab2_proc/ProcDpathAlu.py

//***********************************************************
// Pickled source file of placeholder ProcDpathAlu_noparam
//***********************************************************

//-----------------------------------------------------------
// Dependency of placeholder ProcDpathAlu
//-----------------------------------------------------------

`ifndef PROCDPATHALU
`define PROCDPATHALU

// The source code below are included because they are specified
// as the v_libs Verilog placeholder option of component ProcDpathAlu_noparam.

// If you get a duplicated def error from files included below, please
// make sure they are included either through the v_libs option or the
// explicit `include statement in the Verilog source code -- if they
// appear in both then they will be included twice!


// End of all v_libs files for component ProcDpathAlu_noparam

`line 1 "lab2_proc/ProcDpathAlu.v" 0
//========================================================================
// Proc Datapath ALU
//========================================================================

`ifndef LAB2_PROC_PROC_DPATH_ALU_V
`define LAB2_PROC_PROC_DPATH_ALU_V

`line 1 "vc/arithmetic.v" 0
//========================================================================
// Verilog Components: Arithmetic Components
//========================================================================

`ifndef VC_ARITHMETIC_V
`define VC_ARITHMETIC_V

//------------------------------------------------------------------------
// Adders
//------------------------------------------------------------------------

module vc_Adder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  input  logic               cin,
  output logic [p_nbits-1:0] out,
  output logic               cout
);

  // We need to convert cin into a 32-bit value to
  // avoid verilator warnings

  assign {cout,out} = in0 + in1 + {{(p_nbits-1){1'b0}},cin};

endmodule

module vc_SimpleAdder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 + in1;

endmodule

//------------------------------------------------------------------------
// Subtractor
//------------------------------------------------------------------------

module vc_Subtractor
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 - in1;

endmodule

//------------------------------------------------------------------------
// Incrementer
//------------------------------------------------------------------------

module vc_Incrementer
#(
  parameter p_nbits     = 1,
  parameter p_inc_value = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic [p_nbits-1:0] out
);

  assign out = in + p_inc_value;

endmodule

//------------------------------------------------------------------------
// ZeroExtender
//------------------------------------------------------------------------

module vc_ZeroExtender
#(
  parameter p_in_nbits  = 1,
  parameter p_out_nbits = 8
)(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {( p_out_nbits - p_in_nbits ){1'b0}}, in };

endmodule

//------------------------------------------------------------------------
// SignExtender
//------------------------------------------------------------------------

module vc_SignExtender
#(
 parameter p_in_nbits = 1,
 parameter p_out_nbits = 8
)
(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {(p_out_nbits-p_in_nbits){in[p_in_nbits-1]}}, in };

endmodule

//------------------------------------------------------------------------
// ZeroComparator
//------------------------------------------------------------------------

module vc_ZeroComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic               out
);

  assign out = ( in == {p_nbits{1'b0}} );

endmodule

//------------------------------------------------------------------------
// EqComparator
//------------------------------------------------------------------------

module vc_EqComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 == in1 );

endmodule

//------------------------------------------------------------------------
// LtComparator
//------------------------------------------------------------------------

module vc_LtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 < in1 );

endmodule

//------------------------------------------------------------------------
// GtComparator
//------------------------------------------------------------------------

module vc_GtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 > in1 );

endmodule

//------------------------------------------------------------------------
// LeftLogicalShifter
//------------------------------------------------------------------------

module vc_LeftLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1 )
(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in << shamt );

endmodule

//------------------------------------------------------------------------
// RightLogicalShifter
//------------------------------------------------------------------------

module vc_RightLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1
)(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in >> shamt );

endmodule

`endif /* VC_ARITHMETIC_V */


`line 9 "lab2_proc/ProcDpathAlu.v" 0

module lab2_proc_ProcDpathAlu
(
  input  logic [31:0] in0,
  input  logic [31:0] in1,
  input  logic [ 3:0] fn,
  output logic [31:0] out,
  output logic        ops_eq,
  output logic        ops_lt,
  output logic        ops_ltu
);

  always_comb begin

    case ( fn )
      4'd0    : out = in0 + in1;                                // ADD
      4'd11   : out = in0;                                      // CP OP0
      4'd12   : out = in1;                                      // CP OP1
      default : out = 32'b0;
    endcase

  end

  // Calculate equality, zero, negative flags

  vc_EqComparator #(32) cond_eq_comp
  (
    .in0  (in0),
    .in1  (in1),
    .out  (ops_eq)
  );

  assign ops_lt = $signed(in0) < $signed(in1);
  assign ops_ltu = in0 < in1;

endmodule

`endif /* LAB2_PROC_PROC_DPATH_ALU_V */


`endif /* PROCDPATHALU */
//-----------------------------------------------------------
// Wrapper of placeholder ProcDpathAlu_noparam
//-----------------------------------------------------------

`ifndef PROCDPATHALU_NOPARAM
`define PROCDPATHALU_NOPARAM

module ProcDpathAlu_noparam
(
  input logic reset,
  input logic clk,
  input logic [4-1:0] fn ,
  input logic [32-1:0] in0 ,
  input logic [32-1:0] in1 ,
  output logic [1-1:0] ops_eq ,
  output logic [1-1:0] ops_lt ,
  output logic [1-1:0] ops_ltu ,
  output logic [32-1:0] out 
);
  lab2_proc_ProcDpathAlu
  #(
  ) v
  (
    .fn( fn ),
    .in0( in0 ),
    .in1( in1 ),
    .ops_eq( ops_eq ),
    .ops_lt( ops_lt ),
    .ops_ltu( ops_ltu ),
    .out( out )
  );
endmodule

`endif /* PROCDPATHALU_NOPARAM */

