// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFrenchRepublicanAlarmClock__pch.h"

//============================================================
// Constructors

VFrenchRepublicanAlarmClock::VFrenchRepublicanAlarmClock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFrenchRepublicanAlarmClock__Syms(contextp(), _vcname__, this)}
    , CLR{vlSymsp->TOP.CLR}
    , MIN_ADV{vlSymsp->TOP.MIN_ADV}
    , HR_ADV{vlSymsp->TOP.HR_ADV}
    , SETUP_ALARM{vlSymsp->TOP.SETUP_ALARM}
    , SETUP_TIME{vlSymsp->TOP.SETUP_TIME}
    , CLK{vlSymsp->TOP.CLK}
    , ALARM_EN{vlSymsp->TOP.ALARM_EN}
    , SECONDS{vlSymsp->TOP.SECONDS}
    , MINUTES{vlSymsp->TOP.MINUTES}
    , HOURS{vlSymsp->TOP.HOURS}
    , ALARM_MINUTES{vlSymsp->TOP.ALARM_MINUTES}
    , ALARM_HOURS{vlSymsp->TOP.ALARM_HOURS}
    , BUZZ{vlSymsp->TOP.BUZZ}
    , SEG_SECONDS{vlSymsp->TOP.SEG_SECONDS}
    , SEG_MINUTES{vlSymsp->TOP.SEG_MINUTES}
    , SEG_HOURS{vlSymsp->TOP.SEG_HOURS}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFrenchRepublicanAlarmClock::VFrenchRepublicanAlarmClock(const char* _vcname__)
    : VFrenchRepublicanAlarmClock(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFrenchRepublicanAlarmClock::~VFrenchRepublicanAlarmClock() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFrenchRepublicanAlarmClock___024root___eval_debug_assertions(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
void VFrenchRepublicanAlarmClock___024root___eval_static(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___eval_initial(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___eval_settle(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___eval(VFrenchRepublicanAlarmClock___024root* vlSelf);

void VFrenchRepublicanAlarmClock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFrenchRepublicanAlarmClock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFrenchRepublicanAlarmClock___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFrenchRepublicanAlarmClock___024root___eval_static(&(vlSymsp->TOP));
        VFrenchRepublicanAlarmClock___024root___eval_initial(&(vlSymsp->TOP));
        VFrenchRepublicanAlarmClock___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFrenchRepublicanAlarmClock___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFrenchRepublicanAlarmClock::eventsPending() { return false; }

uint64_t VFrenchRepublicanAlarmClock::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFrenchRepublicanAlarmClock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFrenchRepublicanAlarmClock___024root___eval_final(VFrenchRepublicanAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VFrenchRepublicanAlarmClock::final() {
    VFrenchRepublicanAlarmClock___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFrenchRepublicanAlarmClock::hierName() const { return vlSymsp->name(); }
const char* VFrenchRepublicanAlarmClock::modelName() const { return "VFrenchRepublicanAlarmClock"; }
unsigned VFrenchRepublicanAlarmClock::threads() const { return 1; }
void VFrenchRepublicanAlarmClock::prepareClone() const { contextp()->prepareClone(); }
void VFrenchRepublicanAlarmClock::atClone() const {
    contextp()->threadPoolpOnClone();
}
