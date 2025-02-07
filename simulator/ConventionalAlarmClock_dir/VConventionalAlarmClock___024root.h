// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VConventionalAlarmClock.h for the primary calling header

#ifndef VERILATED_VCONVENTIONALALARMCLOCK___024ROOT_H_
#define VERILATED_VCONVENTIONALALARMCLOCK___024ROOT_H_  // guard

#include "verilated.h"


class VConventionalAlarmClock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VConventionalAlarmClock___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2;
        VL_IN8(SETUP_TIME,0,0);
        VL_IN8(CLK,0,0);
        VL_IN8(SETUP_ALARM,0,0);
        VL_IN8(ALARM_EN,0,0);
        VL_IN8(CLR,0,0);
        VL_IN8(HR_ADV,0,0);
        VL_IN8(MIN_ADV,0,0);
        VL_OUT8(MINUTES,5,0);
        VL_OUT8(HOURS,4,0);
        VL_OUT8(ALARM_MINUTES,5,0);
        VL_OUT8(BUZZ,0,0);
        VL_OUT8(ALARM_HOURS,4,0);
        VL_OUT8(SECONDS,5,0);
        CData/*0:0*/ ConventionalAlarmClock__DOT__SETUP_TIME;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CLK;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SETUP_ALARM;
        CData/*0:0*/ ConventionalAlarmClock__DOT__ALARM_EN;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CLR;
        CData/*0:0*/ ConventionalAlarmClock__DOT__HR_ADV;
        CData/*0:0*/ ConventionalAlarmClock__DOT__MIN_ADV;
        CData/*5:0*/ ConventionalAlarmClock__DOT__MINUTES;
        CData/*4:0*/ ConventionalAlarmClock__DOT__HOURS;
        CData/*5:0*/ ConventionalAlarmClock__DOT__ALARM_MINUTES;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BUZZ;
        CData/*4:0*/ ConventionalAlarmClock__DOT__ALARM_HOURS;
        CData/*5:0*/ ConventionalAlarmClock__DOT__SECONDS;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s1;
        CData/*5:0*/ ConventionalAlarmClock__DOT__SECONDS_temp;
        CData/*5:0*/ ConventionalAlarmClock__DOT__MINUTES_temp;
        CData/*4:0*/ ConventionalAlarmClock__DOT__HOURS_temp;
        CData/*6:0*/ ConventionalAlarmClock__DOT__s2;
        CData/*6:0*/ ConventionalAlarmClock__DOT__s3;
        CData/*6:0*/ ConventionalAlarmClock__DOT__s4;
        CData/*5:0*/ ConventionalAlarmClock__DOT__s5;
        CData/*5:0*/ ConventionalAlarmClock__DOT__s6;
        CData/*4:0*/ ConventionalAlarmClock__DOT__s7;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s8;
        CData/*5:0*/ ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
        CData/*4:0*/ ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s9;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s10;
        CData/*0:0*/ ConventionalAlarmClock__DOT__s11;
        CData/*5:0*/ ConventionalAlarmClock__DOT__s12;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLK;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLR;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SETUP;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MIN_ADV;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HR_ADV;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7;
    };
    struct {
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__ovf;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__C;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__en;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__clr;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__ovf;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__C;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__en;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__clr;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__ovf;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__C;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__en;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__clr;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__CLR;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__SETUP;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MIN_ADV;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HR_ADV;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__ovf;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__C;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__en;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__clr;
        CData/*5:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__ovf;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__C;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__en;
        CData/*0:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__clr;
        CData/*4:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
        CData/*5:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__a;
        CData/*5:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__b;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03e;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03d;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03c;
        CData/*4:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__a;
        CData/*4:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__b;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03e;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03d;
        CData/*0:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03c;
        CData/*0:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel;
        CData/*4:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0;
        CData/*4:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_1;
        CData/*4:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out;
        CData/*0:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__sel;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_1;
        CData/*5:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out;
    };
    struct {
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_IN;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____030;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____031;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____032;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____033;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____034;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____035;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____036;
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__temp;
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_IN;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____030;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____031;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____032;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____033;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____034;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____035;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____036;
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__temp;
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_IN;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s0;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s1;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____030;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____031;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____032;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____033;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____034;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____035;
        CData/*0:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____036;
        CData/*6:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__temp;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(SEG_SECONDS,13,0);
        VL_OUT16(SEG_MINUTES,13,0);
        VL_OUT16(SEG_HOURS,13,0);
        SData/*13:0*/ ConventionalAlarmClock__DOT__SEG_SECONDS;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SEG_MINUTES;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SEG_HOURS;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__out;
    };
    struct {
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__out;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT;
        SData/*13:0*/ ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*13:0*/, 128> ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut;
        VlUnpacked<SData/*13:0*/, 128> ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut;
        VlUnpacked<SData/*13:0*/, 128> ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VConventionalAlarmClock__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__Bits = 6U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__Bits = 6U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__Bits = 5U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__Bits = 6U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__Bits = 5U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__Bits = 6U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__Bits = 5U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__Bits = 6U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__Bits = 5U;
    static constexpr IData/*31:0*/ ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__Bits = 6U;

    // CONSTRUCTORS
    VConventionalAlarmClock___024root(VConventionalAlarmClock__Syms* symsp, const char* v__name);
    ~VConventionalAlarmClock___024root();
    VL_UNCOPYABLE(VConventionalAlarmClock___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
