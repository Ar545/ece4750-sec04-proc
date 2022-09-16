#=========================================================================
# simple_add_test.py
#=========================================================================

import pytest
import random

from pymtl3 import *
from .harness import *
from lab2_proc.ProcFL import ProcFL
from lab2_proc.ProcSimple import ProcSimple

#-------------------------------------------------------------------------
# test_add_sm
#-------------------------------------------------------------------------

# csrr = control status register read
# csrw = control status register write
# mngr2proc = manager to processor
# csrr x1, mngr2proc < 5: put 5 in x1
# csrw proc2mngr, x3 > 9: take 9 and stick it in the sink
# nop between insns: see the insn move through full cycle before the next one comes in

def test_add_sm( cmdline_opts ):

  prog="""
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    add x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 9
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

  run_test( ProcSimple, prog, cmdline_opts=cmdline_opts )

# FL = functional level OR Simple = 
