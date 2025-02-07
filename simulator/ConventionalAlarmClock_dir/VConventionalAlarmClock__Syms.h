// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONVENTIONALALARMCLOCK__SYMS_H_
#define VERILATED_VCONVENTIONALALARMCLOCK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VConventionalAlarmClock.h"

// INCLUDE MODULE CLASSES
#include "VConventionalAlarmClock___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VConventionalAlarmClock__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VConventionalAlarmClock* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VConventionalAlarmClock___024root TOP;

    // CONSTRUCTORS
    VConventionalAlarmClock__Syms(VerilatedContext* contextp, const char* namep, VConventionalAlarmClock* modelp);
    ~VConventionalAlarmClock__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
