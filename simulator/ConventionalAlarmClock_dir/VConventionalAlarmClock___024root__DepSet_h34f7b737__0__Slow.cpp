// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConventionalAlarmClock.h for the primary calling header

#include "VConventionalAlarmClock__pch.h"
#include "VConventionalAlarmClock___024root.h"

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_static(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_static\n"); );
}

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_initial__TOP(VConventionalAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_initial(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_initial\n"); );
    // Body
    VConventionalAlarmClock___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0;
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2__0 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2;
}

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_initial__TOP(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__s12 = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0U] = 0x1fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[1U] = 0x1f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[2U] = 0x1fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[3U] = 0x1fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[4U] = 0x1fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[5U] = 0x1fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[6U] = 0x1ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[7U] = 0x1f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[8U] = 0x1fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[9U] = 0x1fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xaU] = 0x33fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xbU] = 0x306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xcU] = 0x35bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xdU] = 0x34fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xeU] = 0x366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xfU] = 0x36dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x10U] = 0x37dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x11U] = 0x307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x12U] = 0x37fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x13U] = 0x367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x14U] = 0x2dbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x15U] = 0x2d86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x16U] = 0x2ddbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x17U] = 0x2dcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x18U] = 0x2de6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x19U] = 0x2dedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1aU] = 0x2dfdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1bU] = 0x2d87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1cU] = 0x2dffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1dU] = 0x2de7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1eU] = 0x27bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1fU] = 0x2786U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x20U] = 0x27dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x21U] = 0x27cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x22U] = 0x27e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x23U] = 0x27edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x24U] = 0x27fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x25U] = 0x2787U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x26U] = 0x27ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x27U] = 0x27e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x28U] = 0x333fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x29U] = 0x3306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2aU] = 0x335bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2bU] = 0x334fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2cU] = 0x3366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2dU] = 0x336dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2eU] = 0x337dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2fU] = 0x3307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x30U] = 0x337fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x31U] = 0x3367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x32U] = 0x36bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x33U] = 0x3686U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x34U] = 0x36dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x35U] = 0x36cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x36U] = 0x36e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x37U] = 0x36edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x38U] = 0x36fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x39U] = 0x3687U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3aU] = 0x36ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3bU] = 0x36e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3cU] = 0x3ebfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3dU] = 0x3e86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3eU] = 0x3edbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3fU] = 0x3ecfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x40U] = 0x3ee6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x41U] = 0x3eedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x42U] = 0x3efdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x43U] = 0x3e87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x44U] = 0x3effU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x45U] = 0x3ee7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x46U] = 0x3bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x47U] = 0x386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x48U] = 0x3dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x49U] = 0x3cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4aU] = 0x3e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4bU] = 0x3edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4cU] = 0x3fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4dU] = 0x387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4eU] = 0x3ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4fU] = 0x3e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x50U] = 0x3fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x51U] = 0x3f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x52U] = 0x3fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x53U] = 0x3fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x54U] = 0x3fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x55U] = 0x3fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x56U] = 0x3ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x57U] = 0x3f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x58U] = 0x3fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x59U] = 0x3fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5aU] = 0x33bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5bU] = 0x3386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5cU] = 0x33dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5dU] = 0x33cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5eU] = 0x33e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5fU] = 0x33edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x60U] = 0x33fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x61U] = 0x3387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x62U] = 0x33ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x63U] = 0x33e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x64U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x65U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x66U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x67U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x68U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x69U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x70U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x71U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x72U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x73U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x74U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x75U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x76U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x77U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x78U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x79U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0U] = 0x1fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[1U] = 0x1f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[2U] = 0x1fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[3U] = 0x1fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[4U] = 0x1fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[5U] = 0x1fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[6U] = 0x1ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[7U] = 0x1f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[8U] = 0x1fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[9U] = 0x1fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xaU] = 0x33fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xbU] = 0x306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xcU] = 0x35bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xdU] = 0x34fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xeU] = 0x366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xfU] = 0x36dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x10U] = 0x37dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x11U] = 0x307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x12U] = 0x37fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x13U] = 0x367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x14U] = 0x2dbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x15U] = 0x2d86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x16U] = 0x2ddbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x17U] = 0x2dcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x18U] = 0x2de6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x19U] = 0x2dedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1aU] = 0x2dfdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1bU] = 0x2d87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1cU] = 0x2dffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1dU] = 0x2de7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1eU] = 0x27bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1fU] = 0x2786U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x20U] = 0x27dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x21U] = 0x27cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x22U] = 0x27e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x23U] = 0x27edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x24U] = 0x27fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x25U] = 0x2787U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x26U] = 0x27ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x27U] = 0x27e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x28U] = 0x333fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x29U] = 0x3306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2aU] = 0x335bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2bU] = 0x334fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2cU] = 0x3366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2dU] = 0x336dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2eU] = 0x337dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2fU] = 0x3307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x30U] = 0x337fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x31U] = 0x3367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x32U] = 0x36bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x33U] = 0x3686U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x34U] = 0x36dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x35U] = 0x36cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x36U] = 0x36e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x37U] = 0x36edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x38U] = 0x36fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x39U] = 0x3687U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3aU] = 0x36ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3bU] = 0x36e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3cU] = 0x3ebfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3dU] = 0x3e86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3eU] = 0x3edbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3fU] = 0x3ecfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x40U] = 0x3ee6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x41U] = 0x3eedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x42U] = 0x3efdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x43U] = 0x3e87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x44U] = 0x3effU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x45U] = 0x3ee7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x46U] = 0x3bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x47U] = 0x386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x48U] = 0x3dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x49U] = 0x3cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4aU] = 0x3e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4bU] = 0x3edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4cU] = 0x3fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4dU] = 0x387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4eU] = 0x3ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4fU] = 0x3e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x50U] = 0x3fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x51U] = 0x3f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x52U] = 0x3fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x53U] = 0x3fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x54U] = 0x3fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x55U] = 0x3fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x56U] = 0x3ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x57U] = 0x3f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x58U] = 0x3fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x59U] = 0x3fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5aU] = 0x33bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5bU] = 0x3386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5cU] = 0x33dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5dU] = 0x33cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5eU] = 0x33e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5fU] = 0x33edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x60U] = 0x33fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x61U] = 0x3387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x62U] = 0x33ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x63U] = 0x33e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x64U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x65U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x66U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x67U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x68U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x69U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x70U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x71U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x72U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x73U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x74U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x75U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x76U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x77U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x78U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x79U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0U] = 0x1fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[1U] = 0x1f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[2U] = 0x1fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[3U] = 0x1fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[4U] = 0x1fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[5U] = 0x1fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[6U] = 0x1ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[7U] = 0x1f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[8U] = 0x1fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[9U] = 0x1fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xaU] = 0x33fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xbU] = 0x306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xcU] = 0x35bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xdU] = 0x34fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xeU] = 0x366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0xfU] = 0x36dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x10U] = 0x37dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x11U] = 0x307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x12U] = 0x37fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x13U] = 0x367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x14U] = 0x2dbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x15U] = 0x2d86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x16U] = 0x2ddbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x17U] = 0x2dcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x18U] = 0x2de6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x19U] = 0x2dedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1aU] = 0x2dfdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1bU] = 0x2d87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1cU] = 0x2dffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1dU] = 0x2de7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1eU] = 0x27bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x1fU] = 0x2786U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x20U] = 0x27dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x21U] = 0x27cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x22U] = 0x27e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x23U] = 0x27edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x24U] = 0x27fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x25U] = 0x2787U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x26U] = 0x27ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x27U] = 0x27e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x28U] = 0x333fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x29U] = 0x3306U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2aU] = 0x335bU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2bU] = 0x334fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2cU] = 0x3366U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2dU] = 0x336dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2eU] = 0x337dU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x2fU] = 0x3307U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x30U] = 0x337fU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x31U] = 0x3367U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x32U] = 0x36bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x33U] = 0x3686U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x34U] = 0x36dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x35U] = 0x36cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x36U] = 0x36e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x37U] = 0x36edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x38U] = 0x36fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x39U] = 0x3687U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3aU] = 0x36ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3bU] = 0x36e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3cU] = 0x3ebfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3dU] = 0x3e86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3eU] = 0x3edbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x3fU] = 0x3ecfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x40U] = 0x3ee6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x41U] = 0x3eedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x42U] = 0x3efdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x43U] = 0x3e87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x44U] = 0x3effU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x45U] = 0x3ee7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x46U] = 0x3bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x47U] = 0x386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x48U] = 0x3dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x49U] = 0x3cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4aU] = 0x3e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4bU] = 0x3edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4cU] = 0x3fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4dU] = 0x387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4eU] = 0x3ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x4fU] = 0x3e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x50U] = 0x3fbfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x51U] = 0x3f86U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x52U] = 0x3fdbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x53U] = 0x3fcfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x54U] = 0x3fe6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x55U] = 0x3fedU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x56U] = 0x3ffdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x57U] = 0x3f87U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x58U] = 0x3fffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x59U] = 0x3fe7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5aU] = 0x33bfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5bU] = 0x3386U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5cU] = 0x33dbU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5dU] = 0x33cfU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5eU] = 0x33e6U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x5fU] = 0x33edU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x60U] = 0x33fdU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x61U] = 0x3387U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x62U] = 0x33ffU;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x63U] = 0x33e7U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x64U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x65U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x66U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x67U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x68U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x69U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x6fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x70U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x71U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x72U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x73U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x74U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x75U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x76U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x77U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x78U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x79U] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7aU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7bU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7cU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7dU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7eU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[0x7fU] = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s0 = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s0 = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s0 = 0U;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s1 = 0U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__en = 1U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__en = 1U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__en = 1U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__en = 1U;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__en = 1U;
}

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_final(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__stl(VConventionalAlarmClock___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VConventionalAlarmClock___024root___eval_phase__stl(VConventionalAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_settle(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VConventionalAlarmClock___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../verilog/ConventionalAlarmClock.v", 360, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VConventionalAlarmClock___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__stl(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VConventionalAlarmClock___024root___stl_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf);

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_stl(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VConventionalAlarmClock___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VConventionalAlarmClock___024root___stl_sequent__TOP__0(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ConventionalAlarmClock__DOT__SETUP_TIME 
        = vlSelf->SETUP_TIME;
    vlSelf->ConventionalAlarmClock__DOT__CLK = vlSelf->CLK;
    vlSelf->ConventionalAlarmClock__DOT__SETUP_ALARM 
        = vlSelf->SETUP_ALARM;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_EN = vlSelf->ALARM_EN;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_1 
        = vlSelf->ConventionalAlarmClock__DOT__s12;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____030 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____030 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____030 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____031 
        = vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__ovf 
        = (0x1fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__ovf 
        = (0x3fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__ovf 
        = (0x1fU == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03e 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count) 
           > (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03c 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count) 
           < (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03e 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count) 
           > (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03c 
        = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count) 
           < (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->MINUTES = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->HOURS = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ALARM_MINUTES = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ALARM_HOURS = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->SECONDS = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1 
        = ((IData)(vlSelf->CLR) | (0x3bU == (0x3bU 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3 
        = ((IData)(vlSelf->CLR) | (0x17U == (0x17U 
                                             & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__CLR = vlSelf->CLR;
    vlSelf->ConventionalAlarmClock__DOT__HR_ADV = vlSelf->HR_ADV;
    vlSelf->ConventionalAlarmClock__DOT__MIN_ADV = vlSelf->MIN_ADV;
    vlSelf->ConventionalAlarmClock__DOT__s9 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count) 
                                               == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__s10 = ((IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count) 
                                                == (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5 
        = (IData)((0x3bU == (0x3bU & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2 
        = (IData)((0x3bU == (0x3bU & (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count))));
    vlSelf->ConventionalAlarmClock__DOT__s0 = (((~ 
                                                 ((IData)(vlSelf->SETUP_ALARM) 
                                                  ^ (IData)(vlSelf->SETUP_TIME))) 
                                                & (IData)(vlSelf->CLK)) 
                                               | (IData)(vlSelf->CLK));
    vlSelf->ConventionalAlarmClock__DOT__s1 = ((~ (IData)(vlSelf->SETUP_ALARM)) 
                                               & (IData)(vlSelf->SETUP_TIME));
    vlSelf->ConventionalAlarmClock__DOT__HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count;
    vlSelf->ConventionalAlarmClock__DOT__s8 = ((~ (IData)(vlSelf->SETUP_TIME)) 
                                               & (IData)(vlSelf->SETUP_ALARM));
    vlSelf->ConventionalAlarmClock__DOT__MINUTES = vlSelf->MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__HOURS = vlSelf->HOURS;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES 
        = vlSelf->ALARM_MINUTES;
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS 
        = vlSelf->ALARM_HOURS;
    vlSelf->ConventionalAlarmClock__DOT__SECONDS = vlSelf->SECONDS;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__out 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3;
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
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03d 
        = vlSelf->ConventionalAlarmClock__DOT__s9;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03d 
        = vlSelf->ConventionalAlarmClock__DOT__s10;
    vlSelf->BUZZ = ((IData)(vlSelf->ConventionalAlarmClock__DOT__s9) 
                    & ((~ (IData)(vlSelf->ALARM_EN)) 
                       & (IData)(vlSelf->ConventionalAlarmClock__DOT__s10)));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1 
        = ((IData)(vlSelf->CLR) | (IData)(vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLK 
        = vlSelf->ConventionalAlarmClock__DOT__s0;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SETUP 
        = vlSelf->ConventionalAlarmClock__DOT__s1;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8 
        = ((~ (IData)(vlSelf->ConventionalAlarmClock__DOT__s1)) 
           & (IData)(vlSelf->ConventionalAlarmClock__DOT__s0));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__a 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__b 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_1 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS 
        = vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__a 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0 
        = vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__b 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1 
        = vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__SETUP 
        = vlSelf->ConventionalAlarmClock__DOT__s8;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0 
        = (((IData)(vlSelf->MIN_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s8)) 
           | (IData)(vlSelf->CLR));
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2 
        = (((IData)(vlSelf->HR_ADV) & (IData)(vlSelf->ConventionalAlarmClock__DOT__s8)) 
           | (IData)(vlSelf->CLR));
    vlSelf->ConventionalAlarmClock__DOT__s11 = vlSelf->ConventionalAlarmClock__DOT__s8;
    vlSelf->ConventionalAlarmClock__DOT__BUZZ = vlSelf->BUZZ;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4;
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__clr 
        = vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1;
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

VL_ATTR_COLD void VConventionalAlarmClock___024root___eval_triggers__stl(VConventionalAlarmClock___024root* vlSelf);

VL_ATTR_COLD bool VConventionalAlarmClock___024root___eval_phase__stl(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VConventionalAlarmClock___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VConventionalAlarmClock___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__ico(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__act(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s0)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s3)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s6)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ConventionalAlarmClock.BabylonianAlarm_i1.s0)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ConventionalAlarmClock.BabylonianAlarm_i1.s2)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VConventionalAlarmClock___024root___dump_triggers__nba(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s0)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s3)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ConventionalAlarmClock.BabylonianClock_i0.s6)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ConventionalAlarmClock.BabylonianAlarm_i1.s0)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ConventionalAlarmClock.BabylonianAlarm_i1.s2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VConventionalAlarmClock___024root___ctor_var_reset(VConventionalAlarmClock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VConventionalAlarmClock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConventionalAlarmClock___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->SETUP_TIME = VL_RAND_RESET_I(1);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->SETUP_ALARM = VL_RAND_RESET_I(1);
    vlSelf->ALARM_EN = VL_RAND_RESET_I(1);
    vlSelf->CLR = VL_RAND_RESET_I(1);
    vlSelf->HR_ADV = VL_RAND_RESET_I(1);
    vlSelf->MIN_ADV = VL_RAND_RESET_I(1);
    vlSelf->SEG_SECONDS = VL_RAND_RESET_I(14);
    vlSelf->SEG_MINUTES = VL_RAND_RESET_I(14);
    vlSelf->SEG_HOURS = VL_RAND_RESET_I(14);
    vlSelf->MINUTES = VL_RAND_RESET_I(6);
    vlSelf->HOURS = VL_RAND_RESET_I(5);
    vlSelf->ALARM_MINUTES = VL_RAND_RESET_I(6);
    vlSelf->BUZZ = VL_RAND_RESET_I(1);
    vlSelf->ALARM_HOURS = VL_RAND_RESET_I(5);
    vlSelf->SECONDS = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__SETUP_TIME = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SETUP_ALARM = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__ALARM_EN = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CLR = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__HR_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__MIN_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SEG_SECONDS = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__SEG_MINUTES = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__SEG_HOURS = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__MINUTES = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__HOURS = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BUZZ = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__SECONDS = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SECONDS_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__MINUTES_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__HOURS_temp = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__s2 = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__s3 = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__s4 = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__s5 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__s6 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__s7 = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__s8 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__ALARM_MINUTES_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__ALARM_HOURS_temp = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__s9 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__s10 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__s11 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__s12 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__CLR = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SETUP = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MIN_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HR_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__SECONDS_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s4 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__MINUTES_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s5 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s7 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__HOURS_temp = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s8 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__out = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i0__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__out = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i1__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__DIG_Counter_Nbit_i2__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__CLR = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__SETUP = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MIN_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HR_ADV = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__MINUTES_temp = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s3 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__HOURS_temp = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__out = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i0__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__DIG_Counter_Nbit_i1__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__a = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT__b = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03e = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03d = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i2__DOT____03c = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__a = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT__b = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03e = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03d = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__CompUnsigned_i3__DOT____03c = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_0 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__in_1 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i4__DOT__out = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_0 = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__in_1 = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i5__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_0 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__in_1 = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__Mux_2x1_NBits_i6__DOT__out = VL_RAND_RESET_I(6);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_IN = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__DATA_OUT = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s3 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s4 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s5 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__s6 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____030 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____031 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____032 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____033 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____034 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____035 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT____036 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__out = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i7__DOT__LUT_SEG_DECODER_i0__DOT__temp = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_IN = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__DATA_OUT = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s3 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s4 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s5 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__s6 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____030 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____031 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____032 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____033 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____034 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____035 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT____036 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__out = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i8__DOT__LUT_SEG_DECODER_i0__DOT__temp = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_IN = VL_RAND_RESET_I(7);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__DATA_OUT = VL_RAND_RESET_I(14);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s3 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s4 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s5 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__s6 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____030 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____031 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____032 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____033 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____034 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____035 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT____036 = VL_RAND_RESET_I(1);
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__out = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__my_lut[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->ConventionalAlarmClock__DOT__SevenSegmentDecoder_i9__DOT__LUT_SEG_DECODER_i0__DOT__temp = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianClock_i0__DOT__s6__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ConventionalAlarmClock__DOT__BabylonianAlarm_i1__DOT__s2__0 = VL_RAND_RESET_I(1);
}
