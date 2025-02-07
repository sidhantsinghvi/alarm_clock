// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConventionalAlarmClock.h for the primary calling header

#include "VConventionalAlarmClock__pch.h"
#include "VConventionalAlarmClock___024root.h"

void VConventionalAlarmClock___024root___ico_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf);

void VConventionalAlarmClock___024root___eval_ico(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VConventionalAlarmClock___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___ico_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__SETUP_TIME 
        = vlSelf->SETUP_TIME;
    vlSelf->ConventionalAlarmClock__DOT__CLK = vlSelf->CLK;
    vlSelf->ConventionalAlarmClock__DOT__SETUP_ALARM 
        = vlSelf->SETUP_ALARM;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_EN = vlSelf->ALARM_EN;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1 
        = ((IData)(vlSelf->CLR) | (0x3bU == (0x3bU 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->BUZZ = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s9) 
                    & ((~ (IData)(vlSelf->ALARM_EN)) 
                       & (IData)(vlSelf->ConventionalAlarmClock__DOT__s10)));
    vlSelf->ConventionalAlarmClock__DOT__CLR = vlSelf->CLR;
    vlSelf->ConventionalAlarmClock__DOT__HR_ADV = vlSelf->HR_ADV;
    vlSelf->ConventionalAlarmClock__DOT__MIN_ADV = vlSelf->MIN_ADV;
    vlSelf->ConventionalAlarmClock__DOT__s0 = (((~ 
                                                 ((IData)(vlSelf->SETUP_ALARM) 
                                                  ^ (IData)(vlSelf->SETUP_TIME))) 
                                                & (IData)(vlSelf->CLK)) 
                                               | (IData)(vlSelf->CLK));
    vlSelf->ConventionalAlarmClock__DOT__s1 = ((~ (IData)(vlSelf->SETUP_ALARM)) 
                                               & (IData)(vlSelf->SETUP_TIME));
    vlSelf->ConventionalAlarmClock__DOT__s8 = ((~ (IData)(vlSelf->SETUP_TIME)) 
                                               & (IData)(vlSelf->SETUP_ALARM));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__BUZZ = vlSelf->BUZZ;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLR 
        = vlSelf->ConventionalAlarmClock__DOT__CLR;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__CLR 
        = vlSelf->ConventionalAlarmClock__DOT__CLR;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HR_ADV 
        = vlSelf->ConventionalAlarmClock__DOT__HR_ADV;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HR_ADV 
        = vlSelf->ConventionalAlarmClock__DOT__HR_ADV;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MIN_ADV 
        = vlSelf->ConventionalAlarmClock__DOT__MIN_ADV;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MIN_ADV 
        = vlSelf->ConventionalAlarmClock__DOT__MIN_ADV;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLK 
        = vlSelf->ConventionalAlarmClock__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SETUP 
        = vlSelf->ConventionalAlarmClock__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8 
        = ((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           & (IData)(vlSelf->ConventionalAlarmClock__DOT__s0));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__SETUP 
        = vlSelf->ConventionalAlarmClock__DOT__s8;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s8)) 
           | (IData)(vlSelf->CLR));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s8)) 
           | (IData)(vlSelf->CLR));
    vlSelf->ConventionalAlarmClock__DOT__s11 = vlSelf->ConventionalAlarmClock__DOT__s8;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8) 
           | (IData)(vlSelf->CLR));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           | (((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8)) 
               & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2;
    if (vlSelf->ConventionalAlarmClock__DOT__s11) {
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel = 1U;
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel = 1U;
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__sel = 1U;
        if (vlSelf->ConventionalAlarmClock__DOT__s11) {
            vlSelf->ConventionalAlarmClock__DOT__s7 
                = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
            vlSelf->ConventionalAlarmClock__DOT__s6 
                = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
            vlSelf->ConventionalAlarmClock__DOT__s5 
                = vlSelf->ConventionalAlarmClock__DOT__s12;
        } else {
            vlSelf->ConventionalAlarmClock__DOT__s7 = 0U;
            vlSelf->ConventionalAlarmClock__DOT__s6 = 0U;
            vlSelf->ConventionalAlarmClock__DOT__s5 = 0U;
        }
    } else {
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel = 0U;
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel = 0U;
        vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__sel = 0U;
        vlSelf->ConventionalAlarmClock__DOT__s7 = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
        vlSelf->ConventionalAlarmClock__DOT__s6 = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
        vlSelf->ConventionalAlarmClock__DOT__s5 = vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp;
    }
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           | (((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3)) 
               & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s7;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s7));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__s4 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                                               << 2U);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s6));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 5U));
    vlSelf->ConventionalAlarmClock__DOT__s3 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                                               << 1U);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s5));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 5U));
    vlSelf->ConventionalAlarmClock__DOT__s2 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                                               << 1U);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s4;
    vlSelf->SEG_HOURS = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s4];
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____031 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s3;
    vlSelf->SEG_MINUTES = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s3];
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____031 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s2;
    vlSelf->SEG_SECONDS = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s2];
    vlSelf->ConventionalAlarmClock__DOT__SEG_HOURS 
        = vlSelf->SEG_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->SEG_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->SEG_SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT;
}

void VConventionalAlarmClock___024root___eval_triggers__ico(VConventionalAlarmClock___024root* vlSelf);

bool VConventionalAlarmClock___024root___eval_phase__ico(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VConventionalAlarmClock___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VConventionalAlarmClock___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VConventionalAlarmClock___024root___eval_act(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_act\n"); );
}

void VConventionalAlarmClock___024root___nba_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_sequent__TOP__1(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_sequent__TOP__2(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_sequent__TOP__3(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_sequent__TOP__4(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_comb__TOP__0(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_comb__TOP__1(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_comb__TOP__2(VConventionalAlarmClock___024root* vlSelf);
void VConventionalAlarmClock___024root___nba_comb__TOP__3(VConventionalAlarmClock___024root* vlSelf);

void VConventionalAlarmClock___024root___eval_nba(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VConventionalAlarmClock___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__ovf 
        = (0x1fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->HOURS = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__HOURS = vlSelf->HOURS;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__a 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_sequent__TOP__1(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x1fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ALARM_HOURS = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS 
        = vlSelf->ALARM_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__b 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_1 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_sequent__TOP__2(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1)
            ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->SECONDS = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2 
        = (IData)((0x3bU == (0x3bU & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__SECONDS = vlSelf->SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           | (((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8)) 
               & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS 
        = vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__s5 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                ? ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                    ? (IData)(vlSelf->ConventionalAlarmClock__DOT__s12)
                                                    : 0U)
                                                : (IData)(vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s5));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                 >> 5U));
    vlSelf->ConventionalAlarmClock__DOT__s2 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s5) 
                                               << 1U);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____031 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s2;
    vlSelf->SEG_SECONDS = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s2];
    vlSelf->ConventionalAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->SEG_SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_sequent__TOP__3(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1)
            ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ALARM_MINUTES = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1 
        = ((IData)(vlSelf->CLR) | (0x3bU == (0x3bU 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES 
        = vlSelf->ALARM_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__b 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_sequent__TOP__4(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4)
            ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->MINUTES = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5 
        = (IData)((0x3bU == (0x3bU & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__MINUTES = vlSelf->MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__a 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_comb__TOP__0(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03e 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count) 
           > (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03c 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count) 
           < (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__s10 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count) 
                                                == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__s7 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                ? ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                    ? (IData)(vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp)
                                                    : 0U)
                                                : (IData)(vlSelf->ConventionalAlarmClock__DOT__HOURS_temp));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03d 
        = vlSelf->ConventionalAlarmClock__DOT__s10;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s7;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s7));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__s4 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s7) 
                                               << 2U);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s4;
    vlSelf->SEG_HOURS = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s4];
    vlSelf->ConventionalAlarmClock__DOT__SEG_HOURS 
        = vlSelf->SEG_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_comb__TOP__1(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03e 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count) 
           > (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03c 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count) 
           < (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__s9 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count) 
                                               == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__s6 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                ? ((IData)(vlSelf->ConventionalAlarmClock__DOT__s11)
                                                    ? (IData)(vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp)
                                                    : 0U)
                                                : (IData)(vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03d 
        = vlSelf->ConventionalAlarmClock__DOT__s9;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1 
        = (1U & (IData)(vlSelf->ConventionalAlarmClock__DOT__s6));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 1U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 2U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 3U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 4U));
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6 
        = (1U & ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                 >> 5U));
    vlSelf->ConventionalAlarmClock__DOT__s3 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s6) 
                                               << 1U);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____031 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____032 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____033 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____034 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____035 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____036 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_IN 
        = vlSelf->ConventionalAlarmClock__DOT__s3;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__temp 
        = vlSelf->ConventionalAlarmClock__DOT__s3;
    vlSelf->SEG_MINUTES = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut
        [vlSelf->ConventionalAlarmClock__DOT__s3];
    vlSelf->ConventionalAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->SEG_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT 
        = vlSelf->ConventionalAlarmClock__DOT__SEG_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_comb__TOP__2(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           | (((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3)) 
               & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__C 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6;
}

VL_INLINE_OPT void VConventionalAlarmClock___024root___nba_comb__TOP__3(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->BUZZ = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s9) 
                    & ((~ (IData)(vlSelf->ALARM_EN)) 
                       & (IData)(vlSelf->ConventionalAlarmClock__DOT__s10)));
    vlSelf->ConventionalAlarmClock__DOT__BUZZ = vlSelf->BUZZ;
}

void VConventionalAlarmClock___024root___eval_triggers__act(VConventionalAlarmClock___024root* vlSelf);

bool VConventionalAlarmClock___024root___eval_phase__act(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VConventionalAlarmClock___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VConventionalAlarmClock___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VConventionalAlarmClock___024root___eval_phase__nba(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VConventionalAlarmClock___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__ico(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__nba(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__act(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VConventionalAlarmClock___024root___eval(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VConventionalAlarmClock___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/ConventionalAlarmClock.v", 360, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VConventionalAlarmClock___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VConventionalAlarmClock___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/ConventionalAlarmClock.v", 360, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VConventionalAlarmClock___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/ConventionalAlarmClock.v", 360, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VConventionalAlarmClock___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VConventionalAlarmClock___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VConventionalAlarmClock___024root___eval_debug_assertions(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->SETUP_TIME & 0xfeU))) {
        Verilated::overWidthError("SETUP_TIME");}
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->SETUP_ALARM & 0xfeU))) {
        Verilated::overWidthError("SETUP_ALARM");}
    if (VL_UNLIKELY((vlSelf->ALARM_EN & 0xfeU))) {
        Verilated::overWidthError("ALARM_EN");}
    if (VL_UNLIKELY((vlSelf->CLR & 0xfeU))) {
        Verilated::overWidthError("CLR");}
    if (VL_UNLIKELY((vlSelf->HR_ADV & 0xfeU))) {
        Verilated::overWidthError("HR_ADV");}
    if (VL_UNLIKELY((vlSelf->MIN_ADV & 0xfeU))) {
        Verilated::overWidthError("MIN_ADV");}
}
#endif  // VL_DEBUG
