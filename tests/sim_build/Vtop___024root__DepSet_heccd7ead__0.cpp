// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CLR 
        = vlSelf->CLR;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MIN_ADV 
        = vlSelf->MIN_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HR_ADV 
        = vlSelf->HR_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_TIME 
        = vlSelf->SETUP_TIME;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CLK 
        = vlSelf->CLK;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_EN 
        = vlSelf->ALARM_EN;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAY_ADV 
        = vlSelf->DAY_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEK_ADV 
        = vlSelf->WEEK_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTH_ADV 
        = vlSelf->MONTH_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__YEAR_ADV 
        = vlSelf->YEAR_ADV;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s99;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s35;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s36;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s37;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s47;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s48;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s49;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s59;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s60;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s61;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s62;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s63;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s71;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s72;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s73;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s91;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s92;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s93;
    vlSelf->SECONDS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->ALARM_MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ALARM_HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->ALARM_DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->ALARM_WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->ALARM_MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->YEARS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__YEARS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__YEARS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__ovf 
        = (3U == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__ovf 
        = (3U == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s12 
        = ((IData)(vlSelf->CLR) | (0x63U == (0x63U 
                                             & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s14 
        = (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                         & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                            >> 3U))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s81 
        = (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count) 
                                         & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count) 
                                            >> 3U))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s82 
        = ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count) 
                                   >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s85 
        = ((IData)(vlSelf->CLR) | (0xbU == (0xbU & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70 
        = (IData)((0xbU == (0xbU & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM 
        = vlSelf->SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46 
        = (IData)((9U == (9U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8 
        = (IData)((9U == (9U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5 
        = (IData)((0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2 
        = (IData)((0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s16 
        = (1U & (~ (IData)(vlSelf->SETUP_TIME)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9 
        = ((~ (IData)(vlSelf->SETUP_ALARM)) & (IData)(vlSelf->SETUP_TIME));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s12;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s14;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s81;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s82;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s85;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s90 
        = ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94) 
                                   & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95) 
                                      & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97) 
                                         & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96)))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s17 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s18 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s86 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s87 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s88 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d;
    vlSelf->BUZZ = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d) 
                    & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d) 
                       & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d) 
                          & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d) 
                             & ((~ (IData)(vlSelf->ALARM_EN)) 
                                & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d))))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s98 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp;
    vlSelf->SEG_YEARS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_YEARS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s69 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__sel 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s57 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s45 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp;
    if (vlSelf->SETUP_ALARM) {
        if (vlSelf->SETUP_ALARM) {
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s99;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out 
                = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp;
        } else {
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out = 0U;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out = 0U;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out = 0U;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out = 0U;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out = 0U;
            vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out = 0U;
        }
    } else {
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp;
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp;
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp;
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp;
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp;
        vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out 
            = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp;
    }
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s7 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s4 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s1 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s16) 
           & (IData)(vlSelf->SETUP_ALARM));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s10 
        = ((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           & ((IData)(vlSelf->CLK) & ((~ ((IData)(vlSelf->SETUP_ALARM) 
                                          ^ (IData)(vlSelf->SETUP_TIME))) 
                                      | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s16))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s90;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__BUZZ 
        = vlSelf->BUZZ;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s69;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s57;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s45;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s67 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s64 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s65 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out) 
           << 5U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s7;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s43 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s38 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s39 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s40 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s41 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s55 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s50 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s51 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s52 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s53 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s79 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s74 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s75 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s76 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s77 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s4;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s1;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s26 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out;
    vlSelf->SEG_SECONDS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s19 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s20 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s21 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s22 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s23 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 4U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s24 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 5U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s25 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 6U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s34 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out;
    vlSelf->SEG_MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s27 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s28 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s29 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s30 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s31 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 4U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s32 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 5U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s33 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 6U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s11 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15)) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s13 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15)) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s80 
        = (((IData)(vlSelf->DAY_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15)) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s83 
        = (((IData)(vlSelf->WEEK_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15)) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s84 
        = (((IData)(vlSelf->MONTH_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s15)) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s0 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s10) 
           | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s10)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s64;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s65;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s66 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp;
    vlSelf->SEG_WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s38;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s39;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s40;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s41;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s42 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp;
    vlSelf->SEG_HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s50;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s51;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s52;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s53;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s54 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp;
    vlSelf->SEG_DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s74;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s75;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s76;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s77;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s78 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp;
    vlSelf->SEG_MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s19;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s20;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s21;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s22;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s23;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s24;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s25;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s27;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s28;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s29;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s30;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s31;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s32;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s33;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s11;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s13;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s80;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s83;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s84;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s0;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44 
        = (((IData)(vlSelf->DAY_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56 
        = (((IData)(vlSelf->WEEK_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68 
        = (((IData)(vlSelf->MONTH_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89 
        = (((IData)(vlSelf->YEAR_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x210ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x108ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x84ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x42ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x7feULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0xc1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x1c1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x3c1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x7c1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s82)
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count))));
    vlSelf->ALARM_WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__ovf 
        = (3U == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s82 
        = ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count) 
                                   >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s82;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s90)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count))));
    vlSelf->YEARS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__YEARS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__YEARS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__count) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s90 
        = ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s94) 
                                   & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s95) 
                                      & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s97) 
                                         & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s96)))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s98 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp;
    vlSelf->SEG_YEARS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_YEARS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i29__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s90;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s14)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->ALARM_HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s14 
        = (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                         & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                            >> 3U))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s14;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s81)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count))));
    vlSelf->ALARM_DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s81 
        = (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count) 
                                         & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count) 
                                            >> 3U))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s81;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s85)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count))));
    vlSelf->ALARM_MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s85 
        = ((IData)(vlSelf->CLR) | (0xbU == (0xbU & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s85;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s57)
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count))));
    vlSelf->WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__ovf 
        = (3U == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s57 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s57;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s69)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count))));
    vlSelf->MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70 
        = (IData)((0xbU == (0xbU & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s69 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s69;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s12)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ALARM_MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s12 
        = ((IData)(vlSelf->CLR) | (0x63U == (0x63U 
                                             & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s12;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_1 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT__b 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s45)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count))));
    vlSelf->DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46 
        = (IData)((9U == (9U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s45 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s45;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s7)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count))));
    vlSelf->HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8 
        = (IData)((9U == (9U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s7 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s7;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s1)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->SECONDS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2 
        = (IData)((0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s1 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s10)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s2)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s99)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SECONDS_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s1;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s26 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out;
    vlSelf->SEG_SECONDS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s19 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s20 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s21 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s22 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s23 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 4U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s24 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 5U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s25 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i11__DOT__out) 
                 >> 6U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s19;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s20;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s21;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s22;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s23;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s24;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i20__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s25;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s4)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count))));
    vlSelf->MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5 
        = (IData)((0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s4 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT__a 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__clr 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s4;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i4__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_WEEKS_temp)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__WEEKS_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s87 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s67 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s64 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s65 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i9__DOT__out) 
           << 5U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s64;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s65;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s66 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp;
    vlSelf->SEG_WEEKS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_WEEKS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i27__DOT__temp];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i5__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MONTHS_temp)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MONTHS_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s86 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s79 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s74 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s75 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s76 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s77 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i10__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s74;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s75;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s76;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s77;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s78 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp;
    vlSelf->SEG_MONTHS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_MONTHS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i28__DOT__temp];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i3__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_DAYS_temp)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DAYS_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s88 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s55 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s50 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s51 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s52 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s53 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i8__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s50;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s51;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s52;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s53;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s54 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp;
    vlSelf->SEG_DAYS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_DAYS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i26__DOT__temp];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_HOURS_temp)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__HOURS_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s18 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s43 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s38 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s39 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s40 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s41 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i7__DOT__out) 
           << 3U);
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s38;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s39;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s40;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s41;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s42 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp;
    vlSelf->SEG_HOURS = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_HOURS 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i25__DOT__temp];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d 
        = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i12__DOT__count) 
           == (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out 
        = ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                            ? (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__ALARM_MINUTES_temp)
                                            : 0U) : (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__MINUTES_temp));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s17 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s34 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__temp 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out;
    vlSelf->SEG_MINUTES = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__out 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT__my_lut
        [vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out];
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s27 
        = (1U & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s28 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 1U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s29 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 2U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s30 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 3U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s31 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 4U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s32 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 5U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s33 
        = (1U & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out) 
                 >> 6U));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____030 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s27;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____031 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s28;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____032 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s29;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____033 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s30;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____034 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s31;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____035 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s32;
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__LUT_SEG_DECODER_i21__DOT____036 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s33;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s3)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s5)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i13__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->BUZZ = ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i22__DOT____03d) 
                    & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i23__DOT____03d) 
                       & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i24__DOT____03d) 
                          & ((IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i18__DOT____03d) 
                             & ((~ (IData)(vlSelf->ALARM_EN)) 
                                & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__CompUnsigned_i19__DOT____03d))))));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__BUZZ 
        = vlSelf->BUZZ;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44 
        = (((IData)(vlSelf->DAY_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s6)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s8)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i14__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56 
        = (((IData)(vlSelf->WEEK_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s44)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s46)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i15__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68 
        = (((IData)(vlSelf->MONTH_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s56)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s58)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i16__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89 
        = (((IData)(vlSelf->YEAR_ADV) & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s9)) 
           | (((~ (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s68)) 
               & (IData)(vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s70)) 
              | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__DIG_Counter_Nbit_i17__DOT__C 
        = vlSelf->FrenchRepublicanCalendarAlarmClock__DOT__s89;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/src/verilog/FrenchRepublicanCalendarAlarmClock.v", 221, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/src/verilog/FrenchRepublicanCalendarAlarmClock.v", 221, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/src/verilog/FrenchRepublicanCalendarAlarmClock.v", 221, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLR & 0xfeU))) {
        Verilated::overWidthError("CLR");}
    if (VL_UNLIKELY((vlSelf->MIN_ADV & 0xfeU))) {
        Verilated::overWidthError("MIN_ADV");}
    if (VL_UNLIKELY((vlSelf->HR_ADV & 0xfeU))) {
        Verilated::overWidthError("HR_ADV");}
    if (VL_UNLIKELY((vlSelf->SETUP_ALARM & 0xfeU))) {
        Verilated::overWidthError("SETUP_ALARM");}
    if (VL_UNLIKELY((vlSelf->SETUP_TIME & 0xfeU))) {
        Verilated::overWidthError("SETUP_TIME");}
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->ALARM_EN & 0xfeU))) {
        Verilated::overWidthError("ALARM_EN");}
    if (VL_UNLIKELY((vlSelf->DAY_ADV & 0xfeU))) {
        Verilated::overWidthError("DAY_ADV");}
    if (VL_UNLIKELY((vlSelf->WEEK_ADV & 0xfeU))) {
        Verilated::overWidthError("WEEK_ADV");}
    if (VL_UNLIKELY((vlSelf->MONTH_ADV & 0xfeU))) {
        Verilated::overWidthError("MONTH_ADV");}
    if (VL_UNLIKELY((vlSelf->YEAR_ADV & 0xfeU))) {
        Verilated::overWidthError("YEAR_ADV");}
}
#endif  // VL_DEBUG
