// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFrenchRepublicanAlarmClock.h for the primary calling header

#include "VFrenchRepublicanAlarmClock__pch.h"
#include "VFrenchRepublicanAlarmClock__Syms.h"
#include "VFrenchRepublicanAlarmClock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__ico(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VFrenchRepublicanAlarmClock___024root___eval_triggers__ico(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFrenchRepublicanAlarmClock___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__act(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VFrenchRepublicanAlarmClock___024root___eval_triggers__act(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s0__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s10) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s10__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s12) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s12__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s3) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s3__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s6) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s6__0))));
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s0__0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s10__0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s10;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s12__0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s12;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s3__0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s3;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s6__0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s6;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFrenchRepublicanAlarmClock___024root___dump_triggers__act(vlSelf);
    }
#endif
}
