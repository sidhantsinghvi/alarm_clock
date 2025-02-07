// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFRENCHREPUBLICANCALENDARALARMCLOCK__SYMS_H_
#define VERILATED_VFRENCHREPUBLICANCALENDARALARMCLOCK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFrenchRepublicanCalendarAlarmClock.h"

// INCLUDE MODULE CLASSES
#include "VFrenchRepublicanCalendarAlarmClock___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VFrenchRepublicanCalendarAlarmClock__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFrenchRepublicanCalendarAlarmClock* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFrenchRepublicanCalendarAlarmClock___024root TOP;

    // CONSTRUCTORS
    VFrenchRepublicanCalendarAlarmClock__Syms(VerilatedContext* contextp, const char* namep, VFrenchRepublicanCalendarAlarmClock* modelp);
    ~VFrenchRepublicanCalendarAlarmClock__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
