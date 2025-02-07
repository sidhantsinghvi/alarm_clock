// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConventionalAlarmClock.h for the primary calling header

#include "VConventionalAlarmClock__pch.h"
#include "VConventionalAlarmClock__Syms.h"
#include "VConventionalAlarmClock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__ico(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VConventionalAlarmClock___024root___eval_triggers__ico(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VConventionalAlarmClock___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__act(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VConventionalAlarmClock___024root___eval_triggers__act(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2__0))));
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VConventionalAlarmClock___024root___dump_triggers__act(vlSelf);
    }
#endif
}
