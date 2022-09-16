// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcDpathImmGen_noparam__Syms.h"
#include "VProcDpathImmGen_noparam.h"



// FUNCTIONS
VProcDpathImmGen_noparam__Syms::VProcDpathImmGen_noparam__Syms(VProcDpathImmGen_noparam* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
