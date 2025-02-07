// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConventionalAlarmClock.h for the primary calling header

#include "VConventionalAlarmClock__pch.h"
#include "VConventionalAlarmClock__Syms.h"
#include "VConventionalAlarmClock___024root.h"

// Parameter definitions for VConventionalAlarmClock___024root
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__Bits;
constexpr IData/*31:0*/ VConventionalAlarmClock___024root::ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__Bits;


void VConventionalAlarmClock___024root___ctor_var_reset(VConventionalAlarmClock___024root* vlSelf);

VConventionalAlarmClock___024root::VConventionalAlarmClock___024root(VConventionalAlarmClock__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VConventionalAlarmClock___024root___ctor_var_reset(this);
}

void VConventionalAlarmClock___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VConventionalAlarmClock___024root::~VConventionalAlarmClock___024root() {
}
