// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__CompUnsigned_i18;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__CompUnsigned_i19;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__CompUnsigned_i22;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__CompUnsigned_i23;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__CompUnsigned_i24;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i0;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i1;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i12;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i13;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i14;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i15;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i16;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i17;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i2;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i3;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i4;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__DIG_Counter_Nbit_i5;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i20;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i21;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i25;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i26;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i27;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i28;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__LUT_SEG_DECODER_i29;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i10;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i11;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i6;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i7;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i8;
    VerilatedScope __Vscope_FrenchRepublicanCalendarAlarmClock__Mux_2x1_NBits_i9;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
