// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFrenchRepublicanAlarmClock.h for the primary calling header

#ifndef VERILATED_VFRENCHREPUBLICANALARMCLOCK___024ROOT_H_
#define VERILATED_VFRENCHREPUBLICANALARMCLOCK___024ROOT_H_  // guard

#include "verilated.h"


class VFrenchRepublicanAlarmClock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFrenchRepublicanAlarmClock___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s0;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s3;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s6;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s10;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s12;
        VL_IN8(CLR,0,0);
        VL_IN8(MIN_ADV,0,0);
        VL_IN8(HR_ADV,0,0);
        VL_IN8(SETUP_ALARM,0,0);
        VL_IN8(SETUP_TIME,0,0);
        VL_IN8(CLK,0,0);
        VL_IN8(ALARM_EN,0,0);
        VL_OUT8(SECONDS,6,0);
        VL_OUT8(MINUTES,6,0);
        VL_OUT8(HOURS,3,0);
        VL_OUT8(ALARM_MINUTES,6,0);
        VL_OUT8(ALARM_HOURS,3,0);
        VL_OUT8(BUZZ,0,0);
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CLR;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__MIN_ADV;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__HR_ADV;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__SETUP_ALARM;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__SETUP_TIME;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CLK;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__ALARM_EN;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__SECONDS;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__MINUTES;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__HOURS;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__ALARM_HOURS;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__BUZZ;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s1;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__SECONDS_temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s2;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s4;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__MINUTES_temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s5;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s7;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__HOURS_temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s8;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s9;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s11;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s13;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s14;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s15;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s16;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s17;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s18;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s19;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s20;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s21;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s22;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s23;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s24;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__s25;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s26;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s27;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s28;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s29;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s30;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s31;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s32;
    };
    struct {
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__s33;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s34;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s35;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s36;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s37;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s38;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s39;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__s40;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__s41;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__s42;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__s43;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__ovf;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__C;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__en;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__clr;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__ovf;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__C;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__en;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__clr;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__ovf;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__C;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__en;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__clr;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__sel;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__in_0;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__in_1;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_1;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__ovf;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__C;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__en;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__clr;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__out;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__ovf;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__C;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__en;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__clr;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT__a;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT__b;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03e;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03d;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03c;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT__a;
        CData/*3:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT__b;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03e;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03d;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03c;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____030;
    };
    struct {
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____031;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____032;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____033;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____034;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____035;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____036;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____030;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____031;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____032;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____033;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____034;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____035;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____036;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__temp;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____030;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____031;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____032;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____033;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____034;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____035;
        CData/*0:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____036;
        CData/*6:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s10__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s12__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__FrenchRepublicanAlarmClock__DOT__s6__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(SEG_SECONDS,13,0);
        VL_OUT16(SEG_MINUTES,13,0);
        VL_OUT16(SEG_HOURS,13,0);
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__SEG_SECONDS;
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__SEG_MINUTES;
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__SEG_HOURS;
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__out;
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__out;
        SData/*13:0*/ FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*13:0*/, 128> FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__my_lut;
        VlUnpacked<SData/*13:0*/, 128> FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__my_lut;
        VlUnpacked<SData/*13:0*/, 128> FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__my_lut;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFrenchRepublicanAlarmClock__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__Bits = 4U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__Bits = 4U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__Bits = 4U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT__Bits = 7U;
    static constexpr IData/*31:0*/ FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT__Bits = 4U;

    // CONSTRUCTORS
    VFrenchRepublicanAlarmClock___024root(VFrenchRepublicanAlarmClock__Syms* symsp, const char* v__name);
    ~VFrenchRepublicanAlarmClock___024root();
    VL_UNCOPYABLE(VFrenchRepublicanAlarmClock___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
