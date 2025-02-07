// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VConventionalAlarmClock__pch.h"

//============================================================
// Constructors

VConventionalAlarmClock::VConventionalAlarmClock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VConventionalAlarmClock__Syms(contextp(), _vcname__, this)}
    , SETUP_TIME{vlSymsp->TOP.SETUP_TIME}
    , CLK{vlSymsp->TOP.CLK}
    , SETUP_ALARM{vlSymsp->TOP.SETUP_ALARM}
    , ALARM_EN{vlSymsp->TOP.ALARM_EN}
    , CLR{vlSymsp->TOP.CLR}
    , HR_ADV{vlSymsp->TOP.HR_ADV}
    , MIN_ADV{vlSymsp->TOP.MIN_ADV}
    , MINUTES{vlSymsp->TOP.MINUTES}
    , HOURS{vlSymsp->TOP.HOURS}
    , ALARM_MINUTES{vlSymsp->TOP.ALARM_MINUTES}
    , BUZZ{vlSymsp->TOP.BUZZ}
    , ALARM_HOURS{vlSymsp->TOP.ALARM_HOURS}
    , SECONDS{vlSymsp->TOP.SECONDS}
    , SEG_SECONDS{vlSymsp->TOP.SEG_SECONDS}
    , SEG_MINUTES{vlSymsp->TOP.SEG_MINUTES}
    , SEG_HOURS{vlSymsp->TOP.SEG_HOURS}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VConventionalAlarmClock::VConventionalAlarmClock(const char* _vcname__)
    : VConventionalAlarmClock(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VConventionalAlarmClock::~VConventionalAlarmClock() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VConventionalAlarmClock___024root___eval_debug_assertions(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
void VConventionalAlarmClock___024root___eval_static(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___eval_initial(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___eval_settle(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___eval(VConventionalAlarmClock___024root* vlSelf);

void VConventionalAlarmClock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VConventionalAlarmClock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VConventionalAlarmClock___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VConventionalAlarmClock___024root___eval_static(&(vlSymsp->TOP));
        VConventionalAlarmClock___024root___eval_initial(&(vlSymsp->TOP));
        VConventionalAlarmClock___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VConventionalAlarmClock___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VConventionalAlarmClock::eventsPending() { return false; }

uint64_t VConventionalAlarmClock::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VConventionalAlarmClock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VConventionalAlarmClock___024root___eval_final(VConventionalAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VConventionalAlarmClock::final() {
    VConventionalAlarmClock___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VConventionalAlarmClock::hierName() const { return vlSymsp->name(); }
const char* VConventionalAlarmClock::modelName() const { return "VConventionalAlarmClock"; }
unsigned VConventionalAlarmClock::threads() const { return 1; }
void VConventionalAlarmClock::prepareClone() const { contextp()->prepareClone(); }
void VConventionalAlarmClock::atClone() const {
    contextp()->threadPoolpOnClone();
}
