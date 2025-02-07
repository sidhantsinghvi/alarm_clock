// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFRENCHREPUBLICANALARMCLOCK__SYMS_H_
#define VERILATED_VFRENCHREPUBLICANALARMCLOCK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFrenchRepublicanAlarmClock.h"

// INCLUDE MODULE CLASSES
#include "VFrenchRepublicanAlarmClock___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VFrenchRepublicanAlarmClock__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFrenchRepublicanAlarmClock* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFrenchRepublicanAlarmClock___024root TOP;

    // CONSTRUCTORS
    VFrenchRepublicanAlarmClock__Syms(VerilatedContext* contextp, const char* namep, VFrenchRepublicanAlarmClock* modelp);
    ~VFrenchRepublicanAlarmClock__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
