/*
 * Generated by Digital. Don't modify this file!
 * Any changes will be lost if this file is regenerated.
 */

module DIG_Counter_Nbit
#(
    parameter Bits = 2
)
(
    output [(Bits-1):0] out,
    output ovf,
    input C,
    input en,
    input clr
);
    reg [(Bits-1):0] count;

    always @ (posedge C) begin
        if (clr)
          count <= 'h0;
        else if (en)
          count <= count + 1'b1;
    end

    assign out = count;
    assign ovf = en? &count : 1'b0;

    initial begin
        count = 'h0;
    end
endmodule


module Mux_2x1_NBits #(
    parameter Bits = 2
)
(
    input [0:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            1'h0: out = in_0;
            1'h1: out = in_1;
            default:
                out = 'h0;
        endcase
    end
endmodule


module CompUnsigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = a > b;
    assign \= = a == b;
    assign \< = a < b;
endmodule

module LUT_SEG_DECODER (
    input \0 ,
    input \1 ,
    input \2 ,
    input \3 ,
    input \4 ,
    input \5 ,
    input \6 ,
    output reg  [13:0]  out
);
    reg [13:0] my_lut [0:127];
    wire [6:0] temp;
    assign temp = {\6 , \5 , \4 , \3 , \2 , \1 , \0 };

    always @ (*) begin
       out = my_lut[temp];
    end

    initial begin
        my_lut[0] = 14'h1fbf;
        my_lut[1] = 14'h1f86;
        my_lut[2] = 14'h1fdb;
        my_lut[3] = 14'h1fcf;
        my_lut[4] = 14'h1fe6;
        my_lut[5] = 14'h1fed;
        my_lut[6] = 14'h1ffd;
        my_lut[7] = 14'h1f87;
        my_lut[8] = 14'h1fff;
        my_lut[9] = 14'h1fe7;
        my_lut[10] = 14'h33f;
        my_lut[11] = 14'h306;
        my_lut[12] = 14'h35b;
        my_lut[13] = 14'h34f;
        my_lut[14] = 14'h366;
        my_lut[15] = 14'h36d;
        my_lut[16] = 14'h37d;
        my_lut[17] = 14'h307;
        my_lut[18] = 14'h37f;
        my_lut[19] = 14'h367;
        my_lut[20] = 14'h2dbf;
        my_lut[21] = 14'h2d86;
        my_lut[22] = 14'h2ddb;
        my_lut[23] = 14'h2dcf;
        my_lut[24] = 14'h2de6;
        my_lut[25] = 14'h2ded;
        my_lut[26] = 14'h2dfd;
        my_lut[27] = 14'h2d87;
        my_lut[28] = 14'h2dff;
        my_lut[29] = 14'h2de7;
        my_lut[30] = 14'h27bf;
        my_lut[31] = 14'h2786;
        my_lut[32] = 14'h27db;
        my_lut[33] = 14'h27cf;
        my_lut[34] = 14'h27e6;
        my_lut[35] = 14'h27ed;
        my_lut[36] = 14'h27fd;
        my_lut[37] = 14'h2787;
        my_lut[38] = 14'h27ff;
        my_lut[39] = 14'h27e7;
        my_lut[40] = 14'h333f;
        my_lut[41] = 14'h3306;
        my_lut[42] = 14'h335b;
        my_lut[43] = 14'h334f;
        my_lut[44] = 14'h3366;
        my_lut[45] = 14'h336d;
        my_lut[46] = 14'h337d;
        my_lut[47] = 14'h3307;
        my_lut[48] = 14'h337f;
        my_lut[49] = 14'h3367;
        my_lut[50] = 14'h36bf;
        my_lut[51] = 14'h3686;
        my_lut[52] = 14'h36db;
        my_lut[53] = 14'h36cf;
        my_lut[54] = 14'h36e6;
        my_lut[55] = 14'h36ed;
        my_lut[56] = 14'h36fd;
        my_lut[57] = 14'h3687;
        my_lut[58] = 14'h36ff;
        my_lut[59] = 14'h36e7;
        my_lut[60] = 14'h3ebf;
        my_lut[61] = 14'h3e86;
        my_lut[62] = 14'h3edb;
        my_lut[63] = 14'h3ecf;
        my_lut[64] = 14'h3ee6;
        my_lut[65] = 14'h3eed;
        my_lut[66] = 14'h3efd;
        my_lut[67] = 14'h3e87;
        my_lut[68] = 14'h3eff;
        my_lut[69] = 14'h3ee7;
        my_lut[70] = 14'h3bf;
        my_lut[71] = 14'h386;
        my_lut[72] = 14'h3db;
        my_lut[73] = 14'h3cf;
        my_lut[74] = 14'h3e6;
        my_lut[75] = 14'h3ed;
        my_lut[76] = 14'h3fd;
        my_lut[77] = 14'h387;
        my_lut[78] = 14'h3ff;
        my_lut[79] = 14'h3e7;
        my_lut[80] = 14'h3fbf;
        my_lut[81] = 14'h3f86;
        my_lut[82] = 14'h3fdb;
        my_lut[83] = 14'h3fcf;
        my_lut[84] = 14'h3fe6;
        my_lut[85] = 14'h3fed;
        my_lut[86] = 14'h3ffd;
        my_lut[87] = 14'h3f87;
        my_lut[88] = 14'h3fff;
        my_lut[89] = 14'h3fe7;
        my_lut[90] = 14'h33bf;
        my_lut[91] = 14'h3386;
        my_lut[92] = 14'h33db;
        my_lut[93] = 14'h33cf;
        my_lut[94] = 14'h33e6;
        my_lut[95] = 14'h33ed;
        my_lut[96] = 14'h33fd;
        my_lut[97] = 14'h3387;
        my_lut[98] = 14'h33ff;
        my_lut[99] = 14'h33e7;
        my_lut[100] = 14'h0;
        my_lut[101] = 14'h0;
        my_lut[102] = 14'h0;
        my_lut[103] = 14'h0;
        my_lut[104] = 14'h0;
        my_lut[105] = 14'h0;
        my_lut[106] = 14'h0;
        my_lut[107] = 14'h0;
        my_lut[108] = 14'h0;
        my_lut[109] = 14'h0;
        my_lut[110] = 14'h0;
        my_lut[111] = 14'h0;
        my_lut[112] = 14'h0;
        my_lut[113] = 14'h0;
        my_lut[114] = 14'h0;
        my_lut[115] = 14'h0;
        my_lut[116] = 14'h0;
        my_lut[117] = 14'h0;
        my_lut[118] = 14'h0;
        my_lut[119] = 14'h0;
        my_lut[120] = 14'h0;
        my_lut[121] = 14'h0;
        my_lut[122] = 14'h0;
        my_lut[123] = 14'h0;
        my_lut[124] = 14'h0;
        my_lut[125] = 14'h0;
        my_lut[126] = 14'h0;
        my_lut[127] = 14'h0;
    end
endmodule


module Mux_2x1
(
    input [0:0] sel,
    input in_0,
    input in_1,
    output reg out
);
    always @ (*) begin
        case (sel)
            1'h0: out = in_0;
            1'h1: out = in_1;
            default:
                out = 'h0;
        endcase
    end
endmodule


module FrenchRepublicanCalendarAlarmClock (
  input CLR,
  input MIN_ADV,
  input HR_ADV,
  input SETUP_ALARM,
  input SETUP_TIME,
  input CLK,
  input ALARM_EN,
  input DAY_ADV,
  input WEEK_ADV,
  input MONTH_ADV,
  input YEAR_ADV,
  output [6:0] SECONDS,
  output [6:0] MINUTES,
  output [3:0] HOURS,
  output [6:0] ALARM_MINUTES,
  output [3:0] ALARM_HOURS,
  output [13:0] SEG_SECONDS,
  output [13:0] SEG_MINUTES,
  output [13:0] SEG_HOURS,
  output [3:0] DAYS,
  output [13:0] SEG_DAYS,
  output [1:0] WEEKS,
  output [13:0] SEG_WEEKS,
  output [3:0] MONTHS,
  output [13:0] SEG_MONTHS,
  output [3:0] ALARM_DAYS,
  output [1:0] ALARM_WEEKS,
  output [3:0] ALARM_MONTHS,
  output BUZZ,
  output [3:0] YEARS,
  output [13:0] SEG_YEARS
);
  wire s0;
  wire s1;
  wire [6:0] SECONDS_temp;
  wire s2;
  wire s3;
  wire s4;
  wire [6:0] MINUTES_temp;
  wire s5;
  wire s6;
  wire s7;
  wire [3:0] HOURS_temp;
  wire s8;
  wire s9;
  wire s10;
  wire s11;
  wire s12;
  wire [6:0] ALARM_MINUTES_temp;
  wire s13;
  wire s14;
  wire [3:0] ALARM_HOURS_temp;
  wire s15;
  wire s16;
  wire s17;
  wire s18;
  wire s19;
  wire s20;
  wire s21;
  wire s22;
  wire s23;
  wire s24;
  wire s25;
  wire [6:0] s26;
  wire s27;
  wire s28;
  wire s29;
  wire s30;
  wire s31;
  wire s32;
  wire s33;
  wire [6:0] s34;
  wire s35;
  wire s36;
  wire s37;
  wire s38;
  wire s39;
  wire s40;
  wire s41;
  wire [6:0] s42;
  wire [3:0] s43;
  wire s44;
  wire s45;
  wire [3:0] DAYS_temp;
  wire s46;
  wire s47;
  wire s48;
  wire s49;
  wire s50;
  wire s51;
  wire s52;
  wire s53;
  wire s54;
  wire s55;
  wire s56;
  wire s57;
  wire [6:0] s58;
  wire [3:0] s59;
  wire s60;
  wire s61;
  wire [1:0] WEEKS_temp;
  wire s62;
  wire s63;
  wire s64;
  wire s65;
  wire s66;
  wire s67;
  wire s68;
  wire s69;
  wire [6:0] s70;
  wire [1:0] s71;
  wire s72;
  wire s73;
  wire [3:0] MONTHS_temp;
  wire s74;
  wire s75;
  wire s76;
  wire s77;
  wire s78;
  wire s79;
  wire s80;
  wire s81;
  wire [6:0] s82;
  wire [3:0] s83;
  wire s84;
  wire s85;
  wire [3:0] ALARM_DAYS_temp;
  wire s86;
  wire s87;
  wire [1:0] ALARM_WEEKS_temp;
  wire s88;
  wire s89;
  wire [3:0] ALARM_MONTHS_temp;
  wire s90;
  wire s91;
  wire s92;
  wire s93;
  wire s94;
  wire [3:0] YEARS_temp;
  wire s95;
  wire s96;
  wire s97;
  wire s98;
  wire s99;
  wire s100;
  wire s101;
  wire [6:0] s102;
  wire [6:0] s103;
  wire [2:0] s104;
  wire s105;
  wire s106;
  assign s9 = (SETUP_TIME & ~ SETUP_ALARM);
  assign s16 = ~ SETUP_TIME;
  assign s103[0] = 1'b0;
  assign s103[1] = 1'b0;
  assign s103[2] = 1'b0;
  assign s103[3] = 1'b0;
  assign s103[4] = 1'b0;
  assign s103[5] = 1'b0;
  assign s103[6] = 1'b0;
  assign s10 = (~ s9 & ((CLK & ~ (SETUP_ALARM ^ SETUP_TIME)) & (CLK & (~ SETUP_TIME & s16))));
  assign s15 = (s16 & SETUP_ALARM);
  assign s0 = (s10 | CLR);
  assign s11 = ((MIN_ADV & s15) | CLR);
  assign s13 = ((HR_ADV & s15) | CLR);
  assign s84 = ((DAY_ADV & s15) | CLR);
  assign s87 = ((WEEK_ADV & s15) | CLR);
  assign s88 = ((MONTH_ADV & s15) | CLR);
  // SECONDS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(7)
  )
  DIG_Counter_Nbit_i0 (
    .en( 1'b1 ),
    .C( s0 ),
    .clr( s1 ),
    .out( SECONDS_temp )
  );
  assign s1 = (CLR | s2);
  assign s4 = (CLR | s5);
  assign s7 = (CLR | s8);
  assign s3 = ((MIN_ADV & s9) | (~ s10 & s2) | CLR);
  assign s6 = ((HR_ADV & s9) | (~ s3 & s5) | CLR);
  // MINUTES_COUNTER
  DIG_Counter_Nbit #(
    .Bits(7)
  )
  DIG_Counter_Nbit_i1 (
    .en( 1'b1 ),
    .C( s11 ),
    .clr( s12 ),
    .out( ALARM_MINUTES_temp )
  );
  assign s12 = (CLR | (ALARM_MINUTES_temp[0] & ALARM_MINUTES_temp[1] & ALARM_MINUTES_temp[5] & ALARM_MINUTES_temp[6]));
  // HOURS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i2 (
    .en( 1'b1 ),
    .C( s13 ),
    .clr( s14 ),
    .out( ALARM_HOURS_temp )
  );
  assign s14 = (CLR | (ALARM_HOURS_temp[0] & ALARM_HOURS_temp[3]));
  assign s45 = (CLR | s50);
  assign s44 = ((DAY_ADV & s9) | (~ s6 & s8) | CLR);
  assign s61 = (CLR | s62);
  assign s60 = ((WEEK_ADV & s9) | (~ s44 & s50) | CLR);
  assign s73 = (CLR | s74);
  assign s72 = ((MONTH_ADV & s9) | (~ s60 & s62) | CLR);
  // DAYS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i3 (
    .en( 1'b1 ),
    .C( s84 ),
    .clr( s85 ),
    .out( ALARM_DAYS_temp )
  );
  assign s85 = (CLR | (ALARM_DAYS_temp[0] & ALARM_DAYS_temp[3]));
  assign s86 = (CLR | ALARM_WEEKS_temp[1]);
  // WEEKS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(2)
  )
  DIG_Counter_Nbit_i4 (
    .en( 1'b1 ),
    .C( s87 ),
    .clr( s86 ),
    .out( ALARM_WEEKS_temp )
  );
  // MONTHS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i5 (
    .en( 1'b1 ),
    .C( s88 ),
    .clr( s89 ),
    .out( ALARM_MONTHS_temp )
  );
  assign s89 = (CLR | (ALARM_MONTHS_temp[0] & ALARM_MONTHS_temp[1] & ALARM_MONTHS_temp[3]));
  assign BUZZ = (((s90 & s91) & s92) & ((s17 & s18) & ~ ALARM_EN));
  Mux_2x1_NBits #(
    .Bits(7)
  )
  Mux_2x1_NBits_i6 (
    .sel( SETUP_ALARM ),
    .in_0( MINUTES_temp ),
    .in_1( ALARM_MINUTES_temp ),
    .out( s34 )
  );
  Mux_2x1_NBits #(
    .Bits(4)
  )
  Mux_2x1_NBits_i7 (
    .sel( SETUP_ALARM ),
    .in_0( HOURS_temp ),
    .in_1( ALARM_HOURS_temp ),
    .out( s43 )
  );
  Mux_2x1_NBits #(
    .Bits(4)
  )
  Mux_2x1_NBits_i8 (
    .sel( SETUP_ALARM ),
    .in_0( DAYS_temp ),
    .in_1( ALARM_DAYS_temp ),
    .out( s59 )
  );
  Mux_2x1_NBits #(
    .Bits(2)
  )
  Mux_2x1_NBits_i9 (
    .sel( SETUP_ALARM ),
    .in_0( WEEKS_temp ),
    .in_1( ALARM_WEEKS_temp ),
    .out( s71 )
  );
  Mux_2x1_NBits #(
    .Bits(4)
  )
  Mux_2x1_NBits_i10 (
    .sel( SETUP_ALARM ),
    .in_0( MONTHS_temp ),
    .in_1( ALARM_MONTHS_temp ),
    .out( s83 )
  );
  assign s94 = (CLR | (YEARS_temp[3] & YEARS_temp[2]));
  assign s93 = ((YEAR_ADV & s9) | (~ s72 & s74) | CLR);
  Mux_2x1_NBits #(
    .Bits(7)
  )
  Mux_2x1_NBits_i11 (
    .sel( SETUP_ALARM ),
    .in_0( SECONDS_temp ),
    .in_1( s103 ),
    .out( s26 )
  );
  assign s2 = (SECONDS_temp[0] & SECONDS_temp[1] & SECONDS_temp[5] & SECONDS_temp[6]);
  // MINUTES_COUNTER
  DIG_Counter_Nbit #(
    .Bits(7)
  )
  DIG_Counter_Nbit_i12 (
    .en( 1'b1 ),
    .C( s3 ),
    .clr( s4 ),
    .out( MINUTES_temp )
  );
  // HOURS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i13 (
    .en( 1'b1 ),
    .C( s6 ),
    .clr( s7 ),
    .out( HOURS_temp )
  );
  assign s42[3:0] = s43;
  assign s42[4] = 1'b0;
  assign s42[5] = 1'b0;
  assign s42[6] = 1'b0;
  // DAYS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i14 (
    .en( 1'b1 ),
    .C( s44 ),
    .clr( s45 ),
    .out( DAYS_temp )
  );
  assign s58[3:0] = s59;
  assign s58[4] = 1'b0;
  assign s58[5] = 1'b0;
  assign s58[6] = 1'b0;
  // WEEKS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(2)
  )
  DIG_Counter_Nbit_i15 (
    .en( 1'b1 ),
    .C( s60 ),
    .clr( s61 ),
    .out( WEEKS_temp )
  );
  assign s70[1:0] = s71;
  assign s70[2] = 1'b0;
  assign s70[3] = 1'b0;
  assign s70[4] = 1'b0;
  assign s70[5] = 1'b0;
  assign s70[6] = 1'b0;
  // MONTHS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i16 (
    .en( 1'b1 ),
    .C( s72 ),
    .clr( s73 ),
    .out( MONTHS_temp )
  );
  assign s82[3:0] = s83;
  assign s82[4] = 1'b0;
  assign s82[5] = 1'b0;
  assign s82[6] = 1'b0;
  // YEARS_COUNTER
  DIG_Counter_Nbit #(
    .Bits(4)
  )
  DIG_Counter_Nbit_i17 (
    .en( 1'b1 ),
    .C( s93 ),
    .clr( s94 ),
    .out( YEARS_temp )
  );
  assign s19 = s26[0];
  assign s20 = s26[1];
  assign s21 = s26[2];
  assign s22 = s26[3];
  assign s23 = s26[4];
  assign s24 = s26[5];
  assign s25 = s26[6];
  assign s27 = s34[0];
  assign s28 = s34[1];
  assign s29 = s34[2];
  assign s30 = s34[3];
  assign s31 = s34[4];
  assign s32 = s34[5];
  assign s33 = s34[6];
  assign s5 = (MINUTES_temp[0] & MINUTES_temp[1] & MINUTES_temp[5] & MINUTES_temp[6]);
  assign s8 = (HOURS_temp[0] & HOURS_temp[3]);
  CompUnsigned #(
    .Bits(7)
  )
  CompUnsigned_i18 (
    .a( MINUTES_temp ),
    .b( ALARM_MINUTES_temp ),
    .\= ( s17 )
  );
  CompUnsigned #(
    .Bits(4)
  )
  CompUnsigned_i19 (
    .a( HOURS_temp ),
    .b( ALARM_HOURS_temp ),
    .\= ( s18 )
  );
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i20 (
    .\0 ( s19 ),
    .\1 ( s20 ),
    .\2 ( s21 ),
    .\3 ( s22 ),
    .\4 ( s23 ),
    .\5 ( s24 ),
    .\6 ( s25 ),
    .out( SEG_SECONDS )
  );
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i21 (
    .\0 ( s27 ),
    .\1 ( s28 ),
    .\2 ( s29 ),
    .\3 ( s30 ),
    .\4 ( s31 ),
    .\5 ( s32 ),
    .\6 ( s33 ),
    .out( SEG_MINUTES )
  );
  assign s74 = (MONTHS_temp[2] & MONTHS_temp[3]);
  CompUnsigned #(
    .Bits(4)
  )
  CompUnsigned_i22 (
    .a( MONTHS_temp ),
    .b( ALARM_MONTHS_temp ),
    .\= ( s90 )
  );
  CompUnsigned #(
    .Bits(2)
  )
  CompUnsigned_i23 (
    .a( WEEKS_temp ),
    .b( ALARM_WEEKS_temp ),
    .\= ( s91 )
  );
  CompUnsigned #(
    .Bits(4)
  )
  CompUnsigned_i24 (
    .a( DAYS_temp ),
    .b( ALARM_DAYS_temp ),
    .\= ( s92 )
  );
  assign s102[3:0] = YEARS_temp;
  assign s102[4] = 1'b0;
  assign s102[5] = 1'b0;
  assign s102[6] = 1'b0;
  assign s35 = s42[0];
  assign s36 = s42[1];
  assign s37 = s42[2];
  assign s38 = s42[3];
  assign s39 = s42[4];
  assign s40 = s42[5];
  assign s41 = s42[6];
  assign s46 = DAYS_temp[0];
  assign s47 = DAYS_temp[3];
  assign s51 = s58[0];
  assign s52 = s58[1];
  assign s53 = s58[2];
  assign s54 = s58[3];
  assign s55 = s58[4];
  assign s56 = s58[5];
  assign s57 = s58[6];
  assign s62 = WEEKS_temp[1];
  assign s63 = s70[0];
  assign s64 = s70[1];
  assign s65 = s70[2];
  assign s66 = s70[3];
  assign s67 = s70[4];
  assign s68 = s70[5];
  assign s69 = s70[6];
  assign s75 = s82[0];
  assign s76 = s82[1];
  assign s77 = s82[2];
  assign s78 = s82[3];
  assign s79 = s82[4];
  assign s80 = s82[5];
  assign s81 = s82[6];
  assign s104 = DAYS_temp[2:0];
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i25 (
    .\0 ( s35 ),
    .\1 ( s36 ),
    .\2 ( s37 ),
    .\3 ( s38 ),
    .\4 ( s39 ),
    .\5 ( s40 ),
    .\6 ( s41 ),
    .out( SEG_HOURS )
  );
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i26 (
    .\0 ( s51 ),
    .\1 ( s52 ),
    .\2 ( s53 ),
    .\3 ( s54 ),
    .\4 ( s55 ),
    .\5 ( s56 ),
    .\6 ( s57 ),
    .out( SEG_DAYS )
  );
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i27 (
    .\0 ( s63 ),
    .\1 ( s64 ),
    .\2 ( s65 ),
    .\3 ( s66 ),
    .\4 ( s67 ),
    .\5 ( s68 ),
    .\6 ( s69 ),
    .out( SEG_WEEKS )
  );
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i28 (
    .\0 ( s75 ),
    .\1 ( s76 ),
    .\2 ( s77 ),
    .\3 ( s78 ),
    .\4 ( s79 ),
    .\5 ( s80 ),
    .\6 ( s81 ),
    .out( SEG_MONTHS )
  );
  assign s95 = s102[0];
  assign s96 = s102[1];
  assign s97 = s102[2];
  assign s98 = s102[3];
  assign s99 = s102[4];
  assign s100 = s102[5];
  assign s101 = s102[6];
  assign s105 = s104[0];
  assign s106 = s104[2];
  // SEG_DECODER
  LUT_SEG_DECODER LUT_SEG_DECODER_i29 (
    .\0 ( s95 ),
    .\1 ( s96 ),
    .\2 ( s97 ),
    .\3 ( s98 ),
    .\4 ( s99 ),
    .\5 ( s100 ),
    .\6 ( s101 ),
    .out( SEG_YEARS )
  );
  Mux_2x1 Mux_2x1_i30 (
    .sel( s74 ),
    .in_0( s106 ),
    .in_1( s47 ),
    .out( s49 )
  );
  Mux_2x1 Mux_2x1_i31 (
    .sel( s74 ),
    .in_0( s105 ),
    .in_1( s46 ),
    .out( s48 )
  );
  assign s50 = (s48 & s49);
  assign SECONDS = SECONDS_temp;
  assign MINUTES = MINUTES_temp;
  assign HOURS = HOURS_temp;
  assign ALARM_MINUTES = ALARM_MINUTES_temp;
  assign ALARM_HOURS = ALARM_HOURS_temp;
  assign DAYS = DAYS_temp;
  assign WEEKS = WEEKS_temp;
  assign MONTHS = MONTHS_temp;
  assign ALARM_DAYS = ALARM_DAYS_temp;
  assign ALARM_WEEKS = ALARM_WEEKS_temp;
  assign ALARM_MONTHS = ALARM_MONTHS_temp;
  assign YEARS = YEARS_temp;
endmodule
