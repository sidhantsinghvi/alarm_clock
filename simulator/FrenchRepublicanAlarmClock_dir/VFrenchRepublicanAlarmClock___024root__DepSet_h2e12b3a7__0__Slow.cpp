// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFrenchRepublicanAlarmClock.h for the primary calling header

#include "VFrenchRepublicanAlarmClock__pch.h"
#include "VFrenchRepublicanAlarmClock__Syms.h"
#include "VFrenchRepublicanAlarmClock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__stl(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___eval_triggers__stl(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFrenchRepublicanAlarmClock___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
