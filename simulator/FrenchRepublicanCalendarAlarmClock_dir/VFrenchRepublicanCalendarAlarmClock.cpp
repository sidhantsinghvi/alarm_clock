// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFrenchRepublicanCalendarAlarmClock__pch.h"

//============================================================
// Constructors

VFrenchRepublicanCalendarAlarmClock::VFrenchRepublicanCalendarAlarmClock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFrenchRepublicanCalendarAlarmClock__Syms(contextp(), _vcname__, this)}
    , CLR{vlSymsp->TOP.CLR}
    , MIN_ADV{vlSymsp->TOP.MIN_ADV}
    , HR_ADV{vlSymsp->TOP.HR_ADV}
    , SETUP_ALARM{vlSymsp->TOP.SETUP_ALARM}
    , SETUP_TIME{vlSymsp->TOP.SETUP_TIME}
    , CLK{vlSymsp->TOP.CLK}
    , ALARM_EN{vlSymsp->TOP.ALARM_EN}
    , DAY_ADV{vlSymsp->TOP.DAY_ADV}
    , WEEK_ADV{vlSymsp->TOP.WEEK_ADV}
    , MONTH_ADV{vlSymsp->TOP.MONTH_ADV}
    , YEAR_ADV{vlSymsp->TOP.YEAR_ADV}
    , SECONDS{vlSymsp->TOP.SECONDS}
    , MINUTES{vlSymsp->TOP.MINUTES}
    , HOURS{vlSymsp->TOP.HOURS}
    , ALARM_MINUTES{vlSymsp->TOP.ALARM_MINUTES}
    , ALARM_HOURS{vlSymsp->TOP.ALARM_HOURS}
    , DAYS{vlSymsp->TOP.DAYS}
    , WEEKS{vlSymsp->TOP.WEEKS}
    , MONTHS{vlSymsp->TOP.MONTHS}
    , ALARM_DAYS{vlSymsp->TOP.ALARM_DAYS}
    , ALARM_WEEKS{vlSymsp->TOP.ALARM_WEEKS}
    , ALARM_MONTHS{vlSymsp->TOP.ALARM_MONTHS}
    , BUZZ{vlSymsp->TOP.BUZZ}
    , YEARS{vlSymsp->TOP.YEARS}
    , SEG_SECONDS{vlSymsp->TOP.SEG_SECONDS}
    , SEG_MINUTES{vlSymsp->TOP.SEG_MINUTES}
    , SEG_HOURS{vlSymsp->TOP.SEG_HOURS}
    , SEG_DAYS{vlSymsp->TOP.SEG_DAYS}
    , SEG_WEEKS{vlSymsp->TOP.SEG_WEEKS}
    , SEG_MONTHS{vlSymsp->TOP.SEG_MONTHS}
    , SEG_YEARS{vlSymsp->TOP.SEG_YEARS}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFrenchRepublicanCalendarAlarmClock::VFrenchRepublicanCalendarAlarmClock(const char* _vcname__)
    : VFrenchRepublicanCalendarAlarmClock(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFrenchRepublicanCalendarAlarmClock::~VFrenchRepublicanCalendarAlarmClock() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFrenchRepublicanCalendarAlarmClock___024root___eval_debug_assertions(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
void VFrenchRepublicanCalendarAlarmClock___024root___eval_static(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
void VFrenchRepublicanCalendarAlarmClock___024root___eval_initial(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
void VFrenchRepublicanCalendarAlarmClock___024root___eval_settle(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);
void VFrenchRepublicanCalendarAlarmClock___024root___eval(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);

void VFrenchRepublicanCalendarAlarmClock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFrenchRepublicanCalendarAlarmClock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFrenchRepublicanCalendarAlarmClock___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFrenchRepublicanCalendarAlarmClock___024root___eval_static(&(vlSymsp->TOP));
        VFrenchRepublicanCalendarAlarmClock___024root___eval_initial(&(vlSymsp->TOP));
        VFrenchRepublicanCalendarAlarmClock___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFrenchRepublicanCalendarAlarmClock___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFrenchRepublicanCalendarAlarmClock::eventsPending() { return false; }

uint64_t VFrenchRepublicanCalendarAlarmClock::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFrenchRepublicanCalendarAlarmClock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFrenchRepublicanCalendarAlarmClock___024root___eval_final(VFrenchRepublicanCalendarAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VFrenchRepublicanCalendarAlarmClock::final() {
    VFrenchRepublicanCalendarAlarmClock___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFrenchRepublicanCalendarAlarmClock::hierName() const { return vlSymsp->name(); }
const char* VFrenchRepublicanCalendarAlarmClock::modelName() const { return "VFrenchRepublicanCalendarAlarmClock"; }
unsigned VFrenchRepublicanCalendarAlarmClock::threads() const { return 1; }
void VFrenchRepublicanCalendarAlarmClock::prepareClone() const { contextp()->prepareClone(); }
void VFrenchRepublicanCalendarAlarmClock::atClone() const {
    contextp()->threadPoolpOnClone();
}
