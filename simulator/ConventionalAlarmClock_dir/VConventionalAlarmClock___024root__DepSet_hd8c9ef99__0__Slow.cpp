// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConventionalAlarmClock.h for the primary calling header

#include "VConventionalAlarmClock__pch.h"
#include "VConventionalAlarmClock__Syms.h"
#include "VConventionalAlarmClock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__stl(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_triggers__stl(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VConventionalAlarmClock___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
