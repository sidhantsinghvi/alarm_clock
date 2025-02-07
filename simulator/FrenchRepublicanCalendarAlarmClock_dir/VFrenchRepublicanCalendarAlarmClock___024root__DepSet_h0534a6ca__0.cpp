// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFrenchRepublicanCalendarAlarmClock.h for the primary calling header

#include "VFrenchRepublicanCalendarAlarmClock__pch.h"
#include "VFrenchRepublicanCalendarAlarmClock__Syms.h"
#include "VFrenchRepublicanCalendarAlarmClock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanCalendarAlarmClock___024root___dump_triggers__ico(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VFrenchRepublicanCalendarAlarmClock___024root___eval_triggers__ico(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanCalendarAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanCalendarAlarmClock___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFrenchRepublicanCalendarAlarmClock___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanCalendarAlarmClock___024root___dump_triggers__act(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VFrenchRepublicanCalendarAlarmClock___024root___eval_triggers__act(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanCalendarAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanCalendarAlarmClock___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s0__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s11) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s11__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s13) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s13__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s80) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s80__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s83) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s83__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s84) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s84__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s3__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s6__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s44__0))));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s56__0))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s68__0))));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s89__0))));
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s0__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s11__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s11;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s13__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s13;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s80__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s80;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s83__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s83;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s84__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s84;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s3__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s6__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s44__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s56__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s68__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68;
    vlSelf->__Vtrigprevexpr___TOP__FrenchRepublicanCalendarAlarmClock__DOT__s89__0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFrenchRepublicanCalendarAlarmClock___024root___dump_triggers__act(vlSelf);
    }
#endif
}
