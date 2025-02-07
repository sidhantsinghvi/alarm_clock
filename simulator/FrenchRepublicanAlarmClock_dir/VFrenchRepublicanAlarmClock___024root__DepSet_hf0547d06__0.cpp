// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFrenchRepublicanAlarmClock.h for the primary calling header

#include "VFrenchRepublicanAlarmClock__pch.h"
#include "VFrenchRepublicanAlarmClock___024root.h"

void VFrenchRepublicanAlarmClock___024root___ico_sequent__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf);

void VFrenchRepublicanAlarmClock___024root___eval_ico(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___ico_sequent__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__CLR = vlSelf->CLR;
    vlSelf->FrenchRepublicanAlarmClock__DOT__MIN_ADV 
        = vlSelf->MIN_ADV;
    vlSelf->FrenchRepublicanAlarmClock__DOT__HR_ADV 
        = vlSelf->HR_ADV;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_TIME 
        = vlSelf->SETUP_TIME;
    vlSelf->FrenchRepublicanAlarmClock__DOT__CLK = vlSelf->CLK;
    vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_EN 
        = vlSelf->ALARM_EN;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s1 = ((IData)(vlSelf->CLR) 
                                                   | (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s2));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s4 = ((IData)(vlSelf->CLR) 
                                                   | (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s5));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s7 = (1U 
                                                   & ((IData)(vlSelf->CLR) 
                                                      | ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
                                                         & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
                                                            >> 3U))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s11 = 
        ((IData)(vlSelf->CLR) | (0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s13 = 
        (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                       & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                          >> 3U))));
    vlSelf->BUZZ = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s16) 
                    & ((~ (IData)(vlSelf->ALARM_EN)) 
                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s17)));
    if (vlSelf->SETUP_ALARM) {
        vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_ALARM = 1U;
        if (vlSelf->SETUP_ALARM) {
            vlSelf->FrenchRepublicanAlarmClock__DOT__s42 
                = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp;
            vlSelf->FrenchRepublicanAlarmClock__DOT__s33 
                = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp;
            vlSelf->FrenchRepublicanAlarmClock__DOT__s25 
                = vlSelf->FrenchRepublicanAlarmClock__DOT__s43;
        } else {
            vlSelf->FrenchRepublicanAlarmClock__DOT__s42 = 0U;
            vlSelf->FrenchRepublicanAlarmClock__DOT__s33 = 0U;
            vlSelf->FrenchRepublicanAlarmClock__DOT__s25 = 0U;
        }
    } else {
        vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_ALARM = 0U;
        vlSelf->FrenchRepublicanAlarmClock__DOT__s42 
            = vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp;
        vlSelf->FrenchRepublicanAlarmClock__DOT__s33 
            = vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp;
        vlSelf->FrenchRepublicanAlarmClock__DOT__s25 
            = vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS_temp;
    }
    vlSelf->FrenchRepublicanAlarmClock__DOT__s15 = 
        (1U & (~ (IData)(vlSelf->SETUP_TIME)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s8 = (
                                                   (~ (IData)(vlSelf->SETUP_ALARM)) 
                                                   & (IData)(vlSelf->SETUP_TIME));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s1;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s4;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s7;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s11;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s13;
    vlSelf->FrenchRepublicanAlarmClock__DOT__BUZZ = vlSelf->BUZZ;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__sel 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SETUP_ALARM;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s42;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s37 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s38 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s39 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s40 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
           << 3U);
    vlSelf->FrenchRepublicanAlarmClock__DOT__s14 = 
        ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s15) 
         & (IData)(vlSelf->SETUP_ALARM));
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s33;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s33;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s26 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s27 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s28 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s29 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s30 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 4U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s31 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 5U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s32 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 6U));
    vlSelf->SEG_MINUTES = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__s33];
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s25;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s25;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s18 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s19 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s20 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s21 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s22 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 4U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s23 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 5U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s24 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 6U));
    vlSelf->SEG_SECONDS = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__s25];
    vlSelf->FrenchRepublicanAlarmClock__DOT__s9 = (
                                                   (~ (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s8)) 
                                                   & ((IData)(vlSelf->CLK) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->SETUP_ALARM) 
                                                           ^ (IData)(vlSelf->SETUP_TIME))) 
                                                         | (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s15))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s37;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s38;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s39;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s40;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s41 = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp;
    vlSelf->SEG_HOURS = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp];
    vlSelf->FrenchRepublicanAlarmClock__DOT__s10 = 
        (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s14)) 
         | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s12 = 
        (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s14)) 
         | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____030 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s26;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____031 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s27;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____032 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s28;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s29;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s30;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s31;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s32;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->SEG_MINUTES;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____030 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s18;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____031 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s19;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____032 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s20;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s21;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s22;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s23;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s24;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->SEG_SECONDS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s0 = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s9) 
                                                   | (IData)(vlSelf->CLR));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s3 = (
                                                   ((IData)(vlSelf->MIN_ADV) 
                                                    & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s8)) 
                                                   | (((~ (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s9)) 
                                                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s2)) 
                                                      | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_HOURS 
        = vlSelf->SEG_HOURS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s10;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s12;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_MINUTES;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_SECONDS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s0;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s3;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s6 = (
                                                   ((IData)(vlSelf->HR_ADV) 
                                                    & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s8)) 
                                                   | (((~ (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s3)) 
                                                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s5)) 
                                                      | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_HOURS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s6;
}

void VFrenchRepublicanAlarmClock___024root___eval_triggers__ico(VFrenchRepublicanAlarmClock___024root* vlSelf);

bool VFrenchRepublicanAlarmClock___024root___eval_phase__ico(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFrenchRepublicanAlarmClock___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VFrenchRepublicanAlarmClock___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFrenchRepublicanAlarmClock___024root___eval_act(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_act\n"); );
}

void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__1(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__2(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__3(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__4(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__1(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__2(VFrenchRepublicanAlarmClock___024root* vlSelf);
void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__3(VFrenchRepublicanAlarmClock___024root* vlSelf);

void VFrenchRepublicanAlarmClock___024root___eval_nba(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s13)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->ALARM_HOURS = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s13 = 
        (1U & ((IData)(vlSelf->CLR) | ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                       & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
                                          >> 3U))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS 
        = vlSelf->ALARM_HOURS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s13;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__in_1 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT__b 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__1(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s7)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__ovf 
        = (0xfU == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count));
    vlSelf->HOURS = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s7 = (1U 
                                                   & ((IData)(vlSelf->CLR) 
                                                      | ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
                                                         & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
                                                            >> 3U))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS 
        = vlSelf->HOURS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s7;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__in_0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT__a 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__2(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s1)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->SECONDS = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s2 = (IData)(
                                                          (0x63U 
                                                           == 
                                                           (0x63U 
                                                            & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS_temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS 
        = vlSelf->SECONDS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s1 = ((IData)(vlSelf->CLR) 
                                                   | (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s2));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s3 = (
                                                   ((IData)(vlSelf->MIN_ADV) 
                                                    & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s8)) 
                                                   | (((~ (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s9)) 
                                                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s2)) 
                                                      | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s25 = 
        ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                          ? (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s43)
                                          : 0U) : (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__SECONDS_temp));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s1;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s3;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s25;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s25;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s18 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s19 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s20 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s21 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s22 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 4U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s23 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 5U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s24 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s25) 
               >> 6U));
    vlSelf->SEG_SECONDS = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__s25];
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____030 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s18;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____031 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s19;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____032 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s20;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s21;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s22;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s23;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s24;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_SECONDS 
        = vlSelf->SEG_SECONDS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i10__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_SECONDS;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__3(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s11)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ALARM_MINUTES = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s11 = 
        ((IData)(vlSelf->CLR) | (0x63U == (0x63U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES 
        = vlSelf->ALARM_MINUTES;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s11;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT__b 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__4(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s4)
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__ovf 
        = (0x7fU == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count));
    vlSelf->MINUTES = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s5 = (IData)(
                                                          (0x63U 
                                                           == 
                                                           (0x63U 
                                                            & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count))));
    vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count;
    vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES 
        = vlSelf->MINUTES;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s4 = ((IData)(vlSelf->CLR) 
                                                   | (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s5));
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT__a 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp;
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__clr 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s4;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__0(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s17 = 
        ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i2__DOT__count) 
         == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s42 = 
        ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                          ? (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_HOURS_temp)
                                          : 0U) : (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__HOURS_temp));
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i9__DOT____03d 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s17;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i3__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s42;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s37 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s38 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s39 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s40 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s42) 
           << 3U);
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s37;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s38;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s39;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s40;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s41 = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp;
    vlSelf->SEG_HOURS = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__temp];
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_HOURS 
        = vlSelf->SEG_HOURS;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i12__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_HOURS;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__1(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03e 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count) 
           > (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03c 
        = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count) 
           < (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s16 = 
        ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i1__DOT__count) 
         == (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i6__DOT__count));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s33 = 
        ((IData)(vlSelf->SETUP_ALARM) ? ((IData)(vlSelf->SETUP_ALARM)
                                          ? (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__ALARM_MINUTES_temp)
                                          : 0U) : (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__MINUTES_temp));
    vlSelf->FrenchRepublicanAlarmClock__DOT__CompUnsigned_i8__DOT____03d 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s16;
    vlSelf->FrenchRepublicanAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s33;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__temp 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s33;
    vlSelf->FrenchRepublicanAlarmClock__DOT__s26 = 
        (1U & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s27 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 1U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s28 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 2U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s29 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 3U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s30 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 4U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s31 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 5U));
    vlSelf->FrenchRepublicanAlarmClock__DOT__s32 = 
        (1U & ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s33) 
               >> 6U));
    vlSelf->SEG_MINUTES = vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__my_lut
        [vlSelf->FrenchRepublicanAlarmClock__DOT__s33];
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____030 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s26;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____031 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s27;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____032 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s28;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____033 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s29;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____034 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s30;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____035 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s31;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT____036 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s32;
    vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_MINUTES 
        = vlSelf->SEG_MINUTES;
    vlSelf->FrenchRepublicanAlarmClock__DOT__LUT_SEG_DECODER_i11__DOT__out 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__SEG_MINUTES;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__2(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->FrenchRepublicanAlarmClock__DOT__s6 = (
                                                   ((IData)(vlSelf->HR_ADV) 
                                                    & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s8)) 
                                                   | (((~ (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s3)) 
                                                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s5)) 
                                                      | (IData)(vlSelf->CLR)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__DIG_Counter_Nbit_i7__DOT__C 
        = vlSelf->FrenchRepublicanAlarmClock__DOT__s6;
}

VL_INLINE_OPT void VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__3(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->BUZZ = ((IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s16) 
                    & ((~ (IData)(vlSelf->ALARM_EN)) 
                       & (IData)(vlSelf->FrenchRepublicanAlarmClock__DOT__s17)));
    vlSelf->FrenchRepublicanAlarmClock__DOT__BUZZ = vlSelf->BUZZ;
}

void VFrenchRepublicanAlarmClock___024root___eval_triggers__act(VFrenchRepublicanAlarmClock___024root* vlSelf);

bool VFrenchRepublicanAlarmClock___024root___eval_phase__act(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFrenchRepublicanAlarmClock___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFrenchRepublicanAlarmClock___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFrenchRepublicanAlarmClock___024root___eval_phase__nba(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFrenchRepublicanAlarmClock___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__ico(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__nba(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFrenchRepublicanAlarmClock___024root___dump_triggers__act(VFrenchRepublicanAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG

void VFrenchRepublicanAlarmClock___024root___eval(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval\n"); );
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
            VFrenchRepublicanAlarmClock___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/FrenchRepublicanAlarmClock.v", 221, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFrenchRepublicanAlarmClock___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFrenchRepublicanAlarmClock___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/FrenchRepublicanAlarmClock.v", 221, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFrenchRepublicanAlarmClock___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/FrenchRepublicanAlarmClock.v", 221, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFrenchRepublicanAlarmClock___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFrenchRepublicanAlarmClock___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFrenchRepublicanAlarmClock___024root___eval_debug_assertions(VFrenchRepublicanAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFrenchRepublicanAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFrenchRepublicanAlarmClock___024root___eval_debug_assertions\n"); );
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
}
#endif  // VL_DEBUG
