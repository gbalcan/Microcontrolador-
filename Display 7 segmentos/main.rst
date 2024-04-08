                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _disp7
                                     12 	.globl _main
                                     13 	.globl _delay_ms
                                     14 	.globl _esc_disp7s
                                     15 	.globl _funcao_isr
                                     16 	.globl _Init_Device
                                     17 	.globl _Interrupts_Init
                                     18 	.globl _Oscillator_Init
                                     19 	.globl _Port_IO_Init
                                     20 	.globl _Timer_Init
                                     21 	.globl _Reset_Sources_Init
                                     22 	.globl _P7_7
                                     23 	.globl _P7_6
                                     24 	.globl _P7_5
                                     25 	.globl _P7_4
                                     26 	.globl _P7_3
                                     27 	.globl _P7_2
                                     28 	.globl _P7_1
                                     29 	.globl _P7_0
                                     30 	.globl _P6_7
                                     31 	.globl _P6_6
                                     32 	.globl _P6_5
                                     33 	.globl _P6_4
                                     34 	.globl _P6_3
                                     35 	.globl _P6_2
                                     36 	.globl _P6_1
                                     37 	.globl _P6_0
                                     38 	.globl _P5_7
                                     39 	.globl _P5_6
                                     40 	.globl _P5_5
                                     41 	.globl _P5_4
                                     42 	.globl _P5_3
                                     43 	.globl _P5_2
                                     44 	.globl _P5_1
                                     45 	.globl _P5_0
                                     46 	.globl _P4_7
                                     47 	.globl _P4_6
                                     48 	.globl _P4_5
                                     49 	.globl _P4_4
                                     50 	.globl _P4_3
                                     51 	.globl _P4_2
                                     52 	.globl _P4_1
                                     53 	.globl _P4_0
                                     54 	.globl _P3_7
                                     55 	.globl _P3_6
                                     56 	.globl _P3_5
                                     57 	.globl _P3_4
                                     58 	.globl _P3_3
                                     59 	.globl _P3_2
                                     60 	.globl _P3_1
                                     61 	.globl _P3_0
                                     62 	.globl _P2_7
                                     63 	.globl _P2_6
                                     64 	.globl _P2_5
                                     65 	.globl _P2_4
                                     66 	.globl _P2_3
                                     67 	.globl _P2_2
                                     68 	.globl _P2_1
                                     69 	.globl _P2_0
                                     70 	.globl _P1_7
                                     71 	.globl _P1_6
                                     72 	.globl _P1_5
                                     73 	.globl _P1_4
                                     74 	.globl _P1_3
                                     75 	.globl _P1_2
                                     76 	.globl _P1_1
                                     77 	.globl _P1_0
                                     78 	.globl _P0_7
                                     79 	.globl _P0_6
                                     80 	.globl _P0_5
                                     81 	.globl _P0_4
                                     82 	.globl _P0_3
                                     83 	.globl _P0_2
                                     84 	.globl _P0_1
                                     85 	.globl _P0_0
                                     86 	.globl _CANTEST
                                     87 	.globl _CANCCE
                                     88 	.globl _CANDAR
                                     89 	.globl _CANIF
                                     90 	.globl _CANEIE
                                     91 	.globl _CANSIE
                                     92 	.globl _CANIE
                                     93 	.globl _CANINIT
                                     94 	.globl _SPIEN
                                     95 	.globl _TXBMT
                                     96 	.globl _NSSMD0
                                     97 	.globl _NSSMD1
                                     98 	.globl _RXOVRN
                                     99 	.globl _MODF
                                    100 	.globl _WCOL
                                    101 	.globl _SPIF
                                    102 	.globl _AD2WINT
                                    103 	.globl _AD2CM0
                                    104 	.globl _AD2CM1
                                    105 	.globl _AD2CM2
                                    106 	.globl _AD2BUSY
                                    107 	.globl _AD2INT
                                    108 	.globl _AD2TM
                                    109 	.globl _AD2EN
                                    110 	.globl _AD0LJST
                                    111 	.globl _AD0WINT
                                    112 	.globl _AD0CM0
                                    113 	.globl _AD0CM1
                                    114 	.globl _AD0BUSY
                                    115 	.globl _AD0INT
                                    116 	.globl _AD0TM
                                    117 	.globl _AD0EN
                                    118 	.globl _CCF0
                                    119 	.globl _CCF1
                                    120 	.globl _CCF2
                                    121 	.globl _CCF3
                                    122 	.globl _CCF4
                                    123 	.globl _CCF5
                                    124 	.globl _CR
                                    125 	.globl _CF
                                    126 	.globl _P
                                    127 	.globl _F1
                                    128 	.globl _OV
                                    129 	.globl _RS0
                                    130 	.globl _RS1
                                    131 	.globl _F0
                                    132 	.globl _AC
                                    133 	.globl _CY
                                    134 	.globl _CPRL4
                                    135 	.globl _CT4
                                    136 	.globl _TR4
                                    137 	.globl _EXEN4
                                    138 	.globl _EXF4
                                    139 	.globl _TF4
                                    140 	.globl _CPRL3
                                    141 	.globl _CT3
                                    142 	.globl _TR3
                                    143 	.globl _EXEN3
                                    144 	.globl _EXF3
                                    145 	.globl _TF3
                                    146 	.globl _CPRL2
                                    147 	.globl _CT2
                                    148 	.globl _TR2
                                    149 	.globl _EXEN2
                                    150 	.globl _EXF2
                                    151 	.globl _TF2
                                    152 	.globl _LEC0
                                    153 	.globl _LEC1
                                    154 	.globl _LEC2
                                    155 	.globl _TXOK
                                    156 	.globl _RXOK
                                    157 	.globl _EPASS
                                    158 	.globl _EWARN
                                    159 	.globl _BOFF
                                    160 	.globl _SMBTOE
                                    161 	.globl _SMBFTE
                                    162 	.globl _AA
                                    163 	.globl _SI
                                    164 	.globl _STO
                                    165 	.globl _STA
                                    166 	.globl _ENSMB
                                    167 	.globl _BUSY
                                    168 	.globl _PX0
                                    169 	.globl _PT0
                                    170 	.globl _PX1
                                    171 	.globl _PT1
                                    172 	.globl _PS0
                                    173 	.globl _PT2
                                    174 	.globl _EX0
                                    175 	.globl _ET0
                                    176 	.globl _EX1
                                    177 	.globl _ET1
                                    178 	.globl _ES0
                                    179 	.globl _ET2
                                    180 	.globl _EA
                                    181 	.globl _RI1
                                    182 	.globl _TI1
                                    183 	.globl _RB81
                                    184 	.globl _TB81
                                    185 	.globl _REN1
                                    186 	.globl _MCE1
                                    187 	.globl _S1MODE
                                    188 	.globl _RI0
                                    189 	.globl _TI0
                                    190 	.globl _RB80
                                    191 	.globl _TB80
                                    192 	.globl _REN0
                                    193 	.globl _SM20
                                    194 	.globl _SM10
                                    195 	.globl _SM00
                                    196 	.globl _CP2HYN0
                                    197 	.globl _CP2HYN1
                                    198 	.globl _CP2HYP0
                                    199 	.globl _CP2HYP1
                                    200 	.globl _CP2FIF
                                    201 	.globl _CP2RIF
                                    202 	.globl _CP2OUT
                                    203 	.globl _CP2EN
                                    204 	.globl _CP1HYN0
                                    205 	.globl _CP1HYN1
                                    206 	.globl _CP1HYP0
                                    207 	.globl _CP1HYP1
                                    208 	.globl _CP1FIF
                                    209 	.globl _CP1RIF
                                    210 	.globl _CP1OUT
                                    211 	.globl _CP1EN
                                    212 	.globl _CP0HYN0
                                    213 	.globl _CP0HYN1
                                    214 	.globl _CP0HYP0
                                    215 	.globl _CP0HYP1
                                    216 	.globl _CP0FIF
                                    217 	.globl _CP0RIF
                                    218 	.globl _CP0OUT
                                    219 	.globl _CP0EN
                                    220 	.globl _IT0
                                    221 	.globl _IE0
                                    222 	.globl _IT1
                                    223 	.globl _IE1
                                    224 	.globl _TR0
                                    225 	.globl _TF0
                                    226 	.globl _TR1
                                    227 	.globl _TF1
                                    228 	.globl __XPAGE
                                    229 	.globl _DP
                                    230 	.globl _ADC0
                                    231 	.globl _ADC0LT
                                    232 	.globl _ADC0GT
                                    233 	.globl _TMR4
                                    234 	.globl _TMR3
                                    235 	.globl _TMR2
                                    236 	.globl _RCAP4
                                    237 	.globl _RCAP3
                                    238 	.globl _RCAP2
                                    239 	.globl _DAC1
                                    240 	.globl _DAC0
                                    241 	.globl _CAN0DAT
                                    242 	.globl _PCA0CP5
                                    243 	.globl _PCA0CP4
                                    244 	.globl _PCA0CP3
                                    245 	.globl _PCA0CP2
                                    246 	.globl _PCA0CP1
                                    247 	.globl _PCA0CP0
                                    248 	.globl _PCA0
                                    249 	.globl _WDTCN
                                    250 	.globl _PCA0CPH1
                                    251 	.globl _PCA0CPL1
                                    252 	.globl _PCA0CPH0
                                    253 	.globl _PCA0CPL0
                                    254 	.globl _PCA0H
                                    255 	.globl _PCA0L
                                    256 	.globl _P7
                                    257 	.globl _CAN0CN
                                    258 	.globl _SPI0CN
                                    259 	.globl _EIP2
                                    260 	.globl _EIP1
                                    261 	.globl _B
                                    262 	.globl _RSTSRC
                                    263 	.globl _PCA0CPH4
                                    264 	.globl _PCA0CPL4
                                    265 	.globl _PCA0CPH3
                                    266 	.globl _PCA0CPL3
                                    267 	.globl _PCA0CPH2
                                    268 	.globl _PCA0CPL2
                                    269 	.globl _P6
                                    270 	.globl _ADC2CN
                                    271 	.globl _ADC0CN
                                    272 	.globl _EIE2
                                    273 	.globl _EIE1
                                    274 	.globl _XBR3
                                    275 	.globl _XBR2
                                    276 	.globl _XBR1
                                    277 	.globl _PCA0CPH5
                                    278 	.globl _XBR0
                                    279 	.globl _PCA0CPL5
                                    280 	.globl _ACC
                                    281 	.globl _PCA0CPM5
                                    282 	.globl _PCA0CPM4
                                    283 	.globl _PCA0CPM3
                                    284 	.globl _PCA0CPM2
                                    285 	.globl _CAN0TST
                                    286 	.globl _PCA0CPM1
                                    287 	.globl _CAN0ADR
                                    288 	.globl _PCA0CPM0
                                    289 	.globl _CAN0DATH
                                    290 	.globl _PCA0MD
                                    291 	.globl _P5
                                    292 	.globl _CAN0DATL
                                    293 	.globl _PCA0CN
                                    294 	.globl _HVA0CN
                                    295 	.globl _DAC1CN
                                    296 	.globl _DAC0CN
                                    297 	.globl _DAC1H
                                    298 	.globl _DAC0H
                                    299 	.globl _DAC1L
                                    300 	.globl _DAC0L
                                    301 	.globl _REF0CN
                                    302 	.globl _PSW
                                    303 	.globl _SMB0CR
                                    304 	.globl _TMR4H
                                    305 	.globl _TMR3H
                                    306 	.globl _TMR2H
                                    307 	.globl _TMR4L
                                    308 	.globl _TMR3L
                                    309 	.globl _TMR2L
                                    310 	.globl _RCAP4H
                                    311 	.globl _RCAP3H
                                    312 	.globl _RCAP2H
                                    313 	.globl _RCAP4L
                                    314 	.globl _RCAP3L
                                    315 	.globl _RCAP2L
                                    316 	.globl _TMR4CF
                                    317 	.globl _TMR3CF
                                    318 	.globl _TMR2CF
                                    319 	.globl _P4
                                    320 	.globl _TMR4CN
                                    321 	.globl _TMR3CN
                                    322 	.globl _TMR2CN
                                    323 	.globl _ADC0LTH
                                    324 	.globl _ADC2LT
                                    325 	.globl _ADC0LTL
                                    326 	.globl _ADC0GTH
                                    327 	.globl _ADC2GT
                                    328 	.globl _ADC0GTL
                                    329 	.globl _SMB0ADR
                                    330 	.globl _SMB0DAT
                                    331 	.globl _SMB0STA
                                    332 	.globl _CAN0STA
                                    333 	.globl _SMB0CN
                                    334 	.globl _ADC0H
                                    335 	.globl _ADC2
                                    336 	.globl _ADC0L
                                    337 	.globl _ADC2CF
                                    338 	.globl _ADC0CF
                                    339 	.globl _AMX2SL
                                    340 	.globl _AMX0SL
                                    341 	.globl _AMX0CF
                                    342 	.globl _AMX0PRT
                                    343 	.globl _AMX2CF
                                    344 	.globl _SADEN0
                                    345 	.globl _IP
                                    346 	.globl _FLACL
                                    347 	.globl _FLSCL
                                    348 	.globl _P3
                                    349 	.globl _P3MDIN
                                    350 	.globl _P2MDIN
                                    351 	.globl _P1MDIN
                                    352 	.globl _SADDR1
                                    353 	.globl _SADDR0
                                    354 	.globl _IE
                                    355 	.globl _P3MDOUT
                                    356 	.globl _P2MDOUT
                                    357 	.globl _P1MDOUT
                                    358 	.globl _P0MDOUT
                                    359 	.globl _EMI0CF
                                    360 	.globl _EMI0CN
                                    361 	.globl _EMI0TC
                                    362 	.globl _P2
                                    363 	.globl _P7MDOUT
                                    364 	.globl _P6MDOUT
                                    365 	.globl _P5MDOUT
                                    366 	.globl _SPI0CKR
                                    367 	.globl _P4MDOUT
                                    368 	.globl _SPI0DAT
                                    369 	.globl _SPI0CFG
                                    370 	.globl _SBUF1
                                    371 	.globl _SBUF0
                                    372 	.globl _SCON1
                                    373 	.globl _SCON0
                                    374 	.globl _CLKSEL
                                    375 	.globl _SFRPGCN
                                    376 	.globl _SSTA0
                                    377 	.globl _P1
                                    378 	.globl _PSCTL
                                    379 	.globl _CKCON
                                    380 	.globl _TH1
                                    381 	.globl _OSCXCN
                                    382 	.globl _TH0
                                    383 	.globl _OSCICL
                                    384 	.globl _TL1
                                    385 	.globl _OSCICN
                                    386 	.globl _TL0
                                    387 	.globl _CPT2MD
                                    388 	.globl _CPT1MD
                                    389 	.globl _CPT0MD
                                    390 	.globl _TMOD
                                    391 	.globl _CPT2CN
                                    392 	.globl _CPT1CN
                                    393 	.globl _CPT0CN
                                    394 	.globl _TCON
                                    395 	.globl _PCON
                                    396 	.globl _SFRLAST
                                    397 	.globl _SFRNEXT
                                    398 	.globl _SFRPAGE
                                    399 	.globl _DPH
                                    400 	.globl _DPL
                                    401 	.globl _SP
                                    402 	.globl _P0
                                    403 	.globl _led_d
                                    404 	.globl _led_e
                                    405 ;--------------------------------------------------------
                                    406 ; special function registers
                                    407 ;--------------------------------------------------------
                                    408 	.area RSEG    (ABS,DATA)
      000000                        409 	.org 0x0000
                           000080   410 G$P0$0$0 == 0x0080
                           000080   411 _P0	=	0x0080
                           000081   412 G$SP$0$0 == 0x0081
                           000081   413 _SP	=	0x0081
                           000082   414 G$DPL$0$0 == 0x0082
                           000082   415 _DPL	=	0x0082
                           000083   416 G$DPH$0$0 == 0x0083
                           000083   417 _DPH	=	0x0083
                           000084   418 G$SFRPAGE$0$0 == 0x0084
                           000084   419 _SFRPAGE	=	0x0084
                           000085   420 G$SFRNEXT$0$0 == 0x0085
                           000085   421 _SFRNEXT	=	0x0085
                           000086   422 G$SFRLAST$0$0 == 0x0086
                           000086   423 _SFRLAST	=	0x0086
                           000087   424 G$PCON$0$0 == 0x0087
                           000087   425 _PCON	=	0x0087
                           000088   426 G$TCON$0$0 == 0x0088
                           000088   427 _TCON	=	0x0088
                           000088   428 G$CPT0CN$0$0 == 0x0088
                           000088   429 _CPT0CN	=	0x0088
                           000088   430 G$CPT1CN$0$0 == 0x0088
                           000088   431 _CPT1CN	=	0x0088
                           000088   432 G$CPT2CN$0$0 == 0x0088
                           000088   433 _CPT2CN	=	0x0088
                           000089   434 G$TMOD$0$0 == 0x0089
                           000089   435 _TMOD	=	0x0089
                           000089   436 G$CPT0MD$0$0 == 0x0089
                           000089   437 _CPT0MD	=	0x0089
                           000089   438 G$CPT1MD$0$0 == 0x0089
                           000089   439 _CPT1MD	=	0x0089
                           000089   440 G$CPT2MD$0$0 == 0x0089
                           000089   441 _CPT2MD	=	0x0089
                           00008A   442 G$TL0$0$0 == 0x008a
                           00008A   443 _TL0	=	0x008a
                           00008A   444 G$OSCICN$0$0 == 0x008a
                           00008A   445 _OSCICN	=	0x008a
                           00008B   446 G$TL1$0$0 == 0x008b
                           00008B   447 _TL1	=	0x008b
                           00008B   448 G$OSCICL$0$0 == 0x008b
                           00008B   449 _OSCICL	=	0x008b
                           00008C   450 G$TH0$0$0 == 0x008c
                           00008C   451 _TH0	=	0x008c
                           00008C   452 G$OSCXCN$0$0 == 0x008c
                           00008C   453 _OSCXCN	=	0x008c
                           00008D   454 G$TH1$0$0 == 0x008d
                           00008D   455 _TH1	=	0x008d
                           00008E   456 G$CKCON$0$0 == 0x008e
                           00008E   457 _CKCON	=	0x008e
                           00008F   458 G$PSCTL$0$0 == 0x008f
                           00008F   459 _PSCTL	=	0x008f
                           000090   460 G$P1$0$0 == 0x0090
                           000090   461 _P1	=	0x0090
                           000091   462 G$SSTA0$0$0 == 0x0091
                           000091   463 _SSTA0	=	0x0091
                           000096   464 G$SFRPGCN$0$0 == 0x0096
                           000096   465 _SFRPGCN	=	0x0096
                           000097   466 G$CLKSEL$0$0 == 0x0097
                           000097   467 _CLKSEL	=	0x0097
                           000098   468 G$SCON0$0$0 == 0x0098
                           000098   469 _SCON0	=	0x0098
                           000098   470 G$SCON1$0$0 == 0x0098
                           000098   471 _SCON1	=	0x0098
                           000099   472 G$SBUF0$0$0 == 0x0099
                           000099   473 _SBUF0	=	0x0099
                           000099   474 G$SBUF1$0$0 == 0x0099
                           000099   475 _SBUF1	=	0x0099
                           00009A   476 G$SPI0CFG$0$0 == 0x009a
                           00009A   477 _SPI0CFG	=	0x009a
                           00009B   478 G$SPI0DAT$0$0 == 0x009b
                           00009B   479 _SPI0DAT	=	0x009b
                           00009C   480 G$P4MDOUT$0$0 == 0x009c
                           00009C   481 _P4MDOUT	=	0x009c
                           00009D   482 G$SPI0CKR$0$0 == 0x009d
                           00009D   483 _SPI0CKR	=	0x009d
                           00009D   484 G$P5MDOUT$0$0 == 0x009d
                           00009D   485 _P5MDOUT	=	0x009d
                           00009E   486 G$P6MDOUT$0$0 == 0x009e
                           00009E   487 _P6MDOUT	=	0x009e
                           00009F   488 G$P7MDOUT$0$0 == 0x009f
                           00009F   489 _P7MDOUT	=	0x009f
                           0000A0   490 G$P2$0$0 == 0x00a0
                           0000A0   491 _P2	=	0x00a0
                           0000A1   492 G$EMI0TC$0$0 == 0x00a1
                           0000A1   493 _EMI0TC	=	0x00a1
                           0000A2   494 G$EMI0CN$0$0 == 0x00a2
                           0000A2   495 _EMI0CN	=	0x00a2
                           0000A3   496 G$EMI0CF$0$0 == 0x00a3
                           0000A3   497 _EMI0CF	=	0x00a3
                           0000A4   498 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   499 _P0MDOUT	=	0x00a4
                           0000A5   500 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   501 _P1MDOUT	=	0x00a5
                           0000A6   502 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   503 _P2MDOUT	=	0x00a6
                           0000A7   504 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   505 _P3MDOUT	=	0x00a7
                           0000A8   506 G$IE$0$0 == 0x00a8
                           0000A8   507 _IE	=	0x00a8
                           0000A9   508 G$SADDR0$0$0 == 0x00a9
                           0000A9   509 _SADDR0	=	0x00a9
                           0000A9   510 G$SADDR1$0$0 == 0x00a9
                           0000A9   511 _SADDR1	=	0x00a9
                           0000AD   512 G$P1MDIN$0$0 == 0x00ad
                           0000AD   513 _P1MDIN	=	0x00ad
                           0000AE   514 G$P2MDIN$0$0 == 0x00ae
                           0000AE   515 _P2MDIN	=	0x00ae
                           0000AF   516 G$P3MDIN$0$0 == 0x00af
                           0000AF   517 _P3MDIN	=	0x00af
                           0000B0   518 G$P3$0$0 == 0x00b0
                           0000B0   519 _P3	=	0x00b0
                           0000B7   520 G$FLSCL$0$0 == 0x00b7
                           0000B7   521 _FLSCL	=	0x00b7
                           0000B7   522 G$FLACL$0$0 == 0x00b7
                           0000B7   523 _FLACL	=	0x00b7
                           0000B8   524 G$IP$0$0 == 0x00b8
                           0000B8   525 _IP	=	0x00b8
                           0000B9   526 G$SADEN0$0$0 == 0x00b9
                           0000B9   527 _SADEN0	=	0x00b9
                           0000BA   528 G$AMX2CF$0$0 == 0x00ba
                           0000BA   529 _AMX2CF	=	0x00ba
                           0000BD   530 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   531 _AMX0PRT	=	0x00bd
                           0000BA   532 G$AMX0CF$0$0 == 0x00ba
                           0000BA   533 _AMX0CF	=	0x00ba
                           0000BB   534 G$AMX0SL$0$0 == 0x00bb
                           0000BB   535 _AMX0SL	=	0x00bb
                           0000BB   536 G$AMX2SL$0$0 == 0x00bb
                           0000BB   537 _AMX2SL	=	0x00bb
                           0000BC   538 G$ADC0CF$0$0 == 0x00bc
                           0000BC   539 _ADC0CF	=	0x00bc
                           0000BC   540 G$ADC2CF$0$0 == 0x00bc
                           0000BC   541 _ADC2CF	=	0x00bc
                           0000BE   542 G$ADC0L$0$0 == 0x00be
                           0000BE   543 _ADC0L	=	0x00be
                           0000BE   544 G$ADC2$0$0 == 0x00be
                           0000BE   545 _ADC2	=	0x00be
                           0000BF   546 G$ADC0H$0$0 == 0x00bf
                           0000BF   547 _ADC0H	=	0x00bf
                           0000C0   548 G$SMB0CN$0$0 == 0x00c0
                           0000C0   549 _SMB0CN	=	0x00c0
                           0000C0   550 G$CAN0STA$0$0 == 0x00c0
                           0000C0   551 _CAN0STA	=	0x00c0
                           0000C1   552 G$SMB0STA$0$0 == 0x00c1
                           0000C1   553 _SMB0STA	=	0x00c1
                           0000C2   554 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   555 _SMB0DAT	=	0x00c2
                           0000C3   556 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   557 _SMB0ADR	=	0x00c3
                           0000C4   558 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   559 _ADC0GTL	=	0x00c4
                           0000C4   560 G$ADC2GT$0$0 == 0x00c4
                           0000C4   561 _ADC2GT	=	0x00c4
                           0000C5   562 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   563 _ADC0GTH	=	0x00c5
                           0000C6   564 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   565 _ADC0LTL	=	0x00c6
                           0000C6   566 G$ADC2LT$0$0 == 0x00c6
                           0000C6   567 _ADC2LT	=	0x00c6
                           0000C7   568 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   569 _ADC0LTH	=	0x00c7
                           0000C8   570 G$TMR2CN$0$0 == 0x00c8
                           0000C8   571 _TMR2CN	=	0x00c8
                           0000C8   572 G$TMR3CN$0$0 == 0x00c8
                           0000C8   573 _TMR3CN	=	0x00c8
                           0000C8   574 G$TMR4CN$0$0 == 0x00c8
                           0000C8   575 _TMR4CN	=	0x00c8
                           0000C8   576 G$P4$0$0 == 0x00c8
                           0000C8   577 _P4	=	0x00c8
                           0000C9   578 G$TMR2CF$0$0 == 0x00c9
                           0000C9   579 _TMR2CF	=	0x00c9
                           0000C9   580 G$TMR3CF$0$0 == 0x00c9
                           0000C9   581 _TMR3CF	=	0x00c9
                           0000C9   582 G$TMR4CF$0$0 == 0x00c9
                           0000C9   583 _TMR4CF	=	0x00c9
                           0000CA   584 G$RCAP2L$0$0 == 0x00ca
                           0000CA   585 _RCAP2L	=	0x00ca
                           0000CA   586 G$RCAP3L$0$0 == 0x00ca
                           0000CA   587 _RCAP3L	=	0x00ca
                           0000CA   588 G$RCAP4L$0$0 == 0x00ca
                           0000CA   589 _RCAP4L	=	0x00ca
                           0000CB   590 G$RCAP2H$0$0 == 0x00cb
                           0000CB   591 _RCAP2H	=	0x00cb
                           0000CB   592 G$RCAP3H$0$0 == 0x00cb
                           0000CB   593 _RCAP3H	=	0x00cb
                           0000CB   594 G$RCAP4H$0$0 == 0x00cb
                           0000CB   595 _RCAP4H	=	0x00cb
                           0000CC   596 G$TMR2L$0$0 == 0x00cc
                           0000CC   597 _TMR2L	=	0x00cc
                           0000CC   598 G$TMR3L$0$0 == 0x00cc
                           0000CC   599 _TMR3L	=	0x00cc
                           0000CC   600 G$TMR4L$0$0 == 0x00cc
                           0000CC   601 _TMR4L	=	0x00cc
                           0000CD   602 G$TMR2H$0$0 == 0x00cd
                           0000CD   603 _TMR2H	=	0x00cd
                           0000CD   604 G$TMR3H$0$0 == 0x00cd
                           0000CD   605 _TMR3H	=	0x00cd
                           0000CD   606 G$TMR4H$0$0 == 0x00cd
                           0000CD   607 _TMR4H	=	0x00cd
                           0000CF   608 G$SMB0CR$0$0 == 0x00cf
                           0000CF   609 _SMB0CR	=	0x00cf
                           0000D0   610 G$PSW$0$0 == 0x00d0
                           0000D0   611 _PSW	=	0x00d0
                           0000D1   612 G$REF0CN$0$0 == 0x00d1
                           0000D1   613 _REF0CN	=	0x00d1
                           0000D2   614 G$DAC0L$0$0 == 0x00d2
                           0000D2   615 _DAC0L	=	0x00d2
                           0000D2   616 G$DAC1L$0$0 == 0x00d2
                           0000D2   617 _DAC1L	=	0x00d2
                           0000D3   618 G$DAC0H$0$0 == 0x00d3
                           0000D3   619 _DAC0H	=	0x00d3
                           0000D3   620 G$DAC1H$0$0 == 0x00d3
                           0000D3   621 _DAC1H	=	0x00d3
                           0000D4   622 G$DAC0CN$0$0 == 0x00d4
                           0000D4   623 _DAC0CN	=	0x00d4
                           0000D4   624 G$DAC1CN$0$0 == 0x00d4
                           0000D4   625 _DAC1CN	=	0x00d4
                           0000D6   626 G$HVA0CN$0$0 == 0x00d6
                           0000D6   627 _HVA0CN	=	0x00d6
                           0000D8   628 G$PCA0CN$0$0 == 0x00d8
                           0000D8   629 _PCA0CN	=	0x00d8
                           0000D8   630 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   631 _CAN0DATL	=	0x00d8
                           0000D8   632 G$P5$0$0 == 0x00d8
                           0000D8   633 _P5	=	0x00d8
                           0000D9   634 G$PCA0MD$0$0 == 0x00d9
                           0000D9   635 _PCA0MD	=	0x00d9
                           0000D9   636 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   637 _CAN0DATH	=	0x00d9
                           0000DA   638 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   639 _PCA0CPM0	=	0x00da
                           0000DA   640 G$CAN0ADR$0$0 == 0x00da
                           0000DA   641 _CAN0ADR	=	0x00da
                           0000DB   642 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   643 _PCA0CPM1	=	0x00db
                           0000DB   644 G$CAN0TST$0$0 == 0x00db
                           0000DB   645 _CAN0TST	=	0x00db
                           0000DC   646 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   647 _PCA0CPM2	=	0x00dc
                           0000DD   648 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   649 _PCA0CPM3	=	0x00dd
                           0000DE   650 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   651 _PCA0CPM4	=	0x00de
                           0000DF   652 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   653 _PCA0CPM5	=	0x00df
                           0000E0   654 G$ACC$0$0 == 0x00e0
                           0000E0   655 _ACC	=	0x00e0
                           0000E1   656 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   657 _PCA0CPL5	=	0x00e1
                           0000E1   658 G$XBR0$0$0 == 0x00e1
                           0000E1   659 _XBR0	=	0x00e1
                           0000E2   660 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   661 _PCA0CPH5	=	0x00e2
                           0000E2   662 G$XBR1$0$0 == 0x00e2
                           0000E2   663 _XBR1	=	0x00e2
                           0000E3   664 G$XBR2$0$0 == 0x00e3
                           0000E3   665 _XBR2	=	0x00e3
                           0000E4   666 G$XBR3$0$0 == 0x00e4
                           0000E4   667 _XBR3	=	0x00e4
                           0000E6   668 G$EIE1$0$0 == 0x00e6
                           0000E6   669 _EIE1	=	0x00e6
                           0000E7   670 G$EIE2$0$0 == 0x00e7
                           0000E7   671 _EIE2	=	0x00e7
                           0000E8   672 G$ADC0CN$0$0 == 0x00e8
                           0000E8   673 _ADC0CN	=	0x00e8
                           0000E8   674 G$ADC2CN$0$0 == 0x00e8
                           0000E8   675 _ADC2CN	=	0x00e8
                           0000E8   676 G$P6$0$0 == 0x00e8
                           0000E8   677 _P6	=	0x00e8
                           0000E9   678 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   679 _PCA0CPL2	=	0x00e9
                           0000EA   680 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   681 _PCA0CPH2	=	0x00ea
                           0000EB   682 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   683 _PCA0CPL3	=	0x00eb
                           0000EC   684 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   685 _PCA0CPH3	=	0x00ec
                           0000ED   686 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   687 _PCA0CPL4	=	0x00ed
                           0000EE   688 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   689 _PCA0CPH4	=	0x00ee
                           0000EF   690 G$RSTSRC$0$0 == 0x00ef
                           0000EF   691 _RSTSRC	=	0x00ef
                           0000F0   692 G$B$0$0 == 0x00f0
                           0000F0   693 _B	=	0x00f0
                           0000F6   694 G$EIP1$0$0 == 0x00f6
                           0000F6   695 _EIP1	=	0x00f6
                           0000F7   696 G$EIP2$0$0 == 0x00f7
                           0000F7   697 _EIP2	=	0x00f7
                           0000F8   698 G$SPI0CN$0$0 == 0x00f8
                           0000F8   699 _SPI0CN	=	0x00f8
                           0000F8   700 G$CAN0CN$0$0 == 0x00f8
                           0000F8   701 _CAN0CN	=	0x00f8
                           0000F8   702 G$P7$0$0 == 0x00f8
                           0000F8   703 _P7	=	0x00f8
                           0000F9   704 G$PCA0L$0$0 == 0x00f9
                           0000F9   705 _PCA0L	=	0x00f9
                           0000FA   706 G$PCA0H$0$0 == 0x00fa
                           0000FA   707 _PCA0H	=	0x00fa
                           0000FB   708 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   709 _PCA0CPL0	=	0x00fb
                           0000FC   710 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   711 _PCA0CPH0	=	0x00fc
                           0000FD   712 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   713 _PCA0CPL1	=	0x00fd
                           0000FE   714 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   715 _PCA0CPH1	=	0x00fe
                           0000FF   716 G$WDTCN$0$0 == 0x00ff
                           0000FF   717 _WDTCN	=	0x00ff
                           00FAF9   718 G$PCA0$0$0 == 0xfaf9
                           00FAF9   719 _PCA0	=	0xfaf9
                           00FCFB   720 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   721 _PCA0CP0	=	0xfcfb
                           00FEFD   722 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   723 _PCA0CP1	=	0xfefd
                           00EAE9   724 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   725 _PCA0CP2	=	0xeae9
                           00ECEB   726 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   727 _PCA0CP3	=	0xeceb
                           00EEED   728 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   729 _PCA0CP4	=	0xeeed
                           00E2E1   730 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   731 _PCA0CP5	=	0xe2e1
                           00D9D8   732 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   733 _CAN0DAT	=	0xd9d8
                           00D3D2   734 G$DAC0$0$0 == 0xd3d2
                           00D3D2   735 _DAC0	=	0xd3d2
                           00D3D2   736 G$DAC1$0$0 == 0xd3d2
                           00D3D2   737 _DAC1	=	0xd3d2
                           00CBCA   738 G$RCAP2$0$0 == 0xcbca
                           00CBCA   739 _RCAP2	=	0xcbca
                           00CBCA   740 G$RCAP3$0$0 == 0xcbca
                           00CBCA   741 _RCAP3	=	0xcbca
                           00CBCA   742 G$RCAP4$0$0 == 0xcbca
                           00CBCA   743 _RCAP4	=	0xcbca
                           00CDCC   744 G$TMR2$0$0 == 0xcdcc
                           00CDCC   745 _TMR2	=	0xcdcc
                           00CDCC   746 G$TMR3$0$0 == 0xcdcc
                           00CDCC   747 _TMR3	=	0xcdcc
                           00CDCC   748 G$TMR4$0$0 == 0xcdcc
                           00CDCC   749 _TMR4	=	0xcdcc
                           00C5C4   750 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   751 _ADC0GT	=	0xc5c4
                           00C7C6   752 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   753 _ADC0LT	=	0xc7c6
                           00BFBE   754 G$ADC0$0$0 == 0xbfbe
                           00BFBE   755 _ADC0	=	0xbfbe
                           008382   756 G$DP$0$0 == 0x8382
                           008382   757 _DP	=	0x8382
                           0000A2   758 G$_XPAGE$0$0 == 0x00a2
                           0000A2   759 __XPAGE	=	0x00a2
                                    760 ;--------------------------------------------------------
                                    761 ; special function bits
                                    762 ;--------------------------------------------------------
                                    763 	.area RSEG    (ABS,DATA)
      000000                        764 	.org 0x0000
                           00008F   765 G$TF1$0$0 == 0x008f
                           00008F   766 _TF1	=	0x008f
                           00008E   767 G$TR1$0$0 == 0x008e
                           00008E   768 _TR1	=	0x008e
                           00008D   769 G$TF0$0$0 == 0x008d
                           00008D   770 _TF0	=	0x008d
                           00008C   771 G$TR0$0$0 == 0x008c
                           00008C   772 _TR0	=	0x008c
                           00008B   773 G$IE1$0$0 == 0x008b
                           00008B   774 _IE1	=	0x008b
                           00008A   775 G$IT1$0$0 == 0x008a
                           00008A   776 _IT1	=	0x008a
                           000089   777 G$IE0$0$0 == 0x0089
                           000089   778 _IE0	=	0x0089
                           000088   779 G$IT0$0$0 == 0x0088
                           000088   780 _IT0	=	0x0088
                           00008F   781 G$CP0EN$0$0 == 0x008f
                           00008F   782 _CP0EN	=	0x008f
                           00008E   783 G$CP0OUT$0$0 == 0x008e
                           00008E   784 _CP0OUT	=	0x008e
                           00008D   785 G$CP0RIF$0$0 == 0x008d
                           00008D   786 _CP0RIF	=	0x008d
                           00008C   787 G$CP0FIF$0$0 == 0x008c
                           00008C   788 _CP0FIF	=	0x008c
                           00008B   789 G$CP0HYP1$0$0 == 0x008b
                           00008B   790 _CP0HYP1	=	0x008b
                           00008A   791 G$CP0HYP0$0$0 == 0x008a
                           00008A   792 _CP0HYP0	=	0x008a
                           000089   793 G$CP0HYN1$0$0 == 0x0089
                           000089   794 _CP0HYN1	=	0x0089
                           000088   795 G$CP0HYN0$0$0 == 0x0088
                           000088   796 _CP0HYN0	=	0x0088
                           00008F   797 G$CP1EN$0$0 == 0x008f
                           00008F   798 _CP1EN	=	0x008f
                           00008E   799 G$CP1OUT$0$0 == 0x008e
                           00008E   800 _CP1OUT	=	0x008e
                           00008D   801 G$CP1RIF$0$0 == 0x008d
                           00008D   802 _CP1RIF	=	0x008d
                           00008C   803 G$CP1FIF$0$0 == 0x008c
                           00008C   804 _CP1FIF	=	0x008c
                           00008B   805 G$CP1HYP1$0$0 == 0x008b
                           00008B   806 _CP1HYP1	=	0x008b
                           00008A   807 G$CP1HYP0$0$0 == 0x008a
                           00008A   808 _CP1HYP0	=	0x008a
                           000089   809 G$CP1HYN1$0$0 == 0x0089
                           000089   810 _CP1HYN1	=	0x0089
                           000088   811 G$CP1HYN0$0$0 == 0x0088
                           000088   812 _CP1HYN0	=	0x0088
                           00008F   813 G$CP2EN$0$0 == 0x008f
                           00008F   814 _CP2EN	=	0x008f
                           00008E   815 G$CP2OUT$0$0 == 0x008e
                           00008E   816 _CP2OUT	=	0x008e
                           00008D   817 G$CP2RIF$0$0 == 0x008d
                           00008D   818 _CP2RIF	=	0x008d
                           00008C   819 G$CP2FIF$0$0 == 0x008c
                           00008C   820 _CP2FIF	=	0x008c
                           00008B   821 G$CP2HYP1$0$0 == 0x008b
                           00008B   822 _CP2HYP1	=	0x008b
                           00008A   823 G$CP2HYP0$0$0 == 0x008a
                           00008A   824 _CP2HYP0	=	0x008a
                           000089   825 G$CP2HYN1$0$0 == 0x0089
                           000089   826 _CP2HYN1	=	0x0089
                           000088   827 G$CP2HYN0$0$0 == 0x0088
                           000088   828 _CP2HYN0	=	0x0088
                           00009F   829 G$SM00$0$0 == 0x009f
                           00009F   830 _SM00	=	0x009f
                           00009E   831 G$SM10$0$0 == 0x009e
                           00009E   832 _SM10	=	0x009e
                           00009D   833 G$SM20$0$0 == 0x009d
                           00009D   834 _SM20	=	0x009d
                           00009C   835 G$REN0$0$0 == 0x009c
                           00009C   836 _REN0	=	0x009c
                           00009B   837 G$TB80$0$0 == 0x009b
                           00009B   838 _TB80	=	0x009b
                           00009A   839 G$RB80$0$0 == 0x009a
                           00009A   840 _RB80	=	0x009a
                           000099   841 G$TI0$0$0 == 0x0099
                           000099   842 _TI0	=	0x0099
                           000098   843 G$RI0$0$0 == 0x0098
                           000098   844 _RI0	=	0x0098
                           00009F   845 G$S1MODE$0$0 == 0x009f
                           00009F   846 _S1MODE	=	0x009f
                           00009D   847 G$MCE1$0$0 == 0x009d
                           00009D   848 _MCE1	=	0x009d
                           00009C   849 G$REN1$0$0 == 0x009c
                           00009C   850 _REN1	=	0x009c
                           00009B   851 G$TB81$0$0 == 0x009b
                           00009B   852 _TB81	=	0x009b
                           00009A   853 G$RB81$0$0 == 0x009a
                           00009A   854 _RB81	=	0x009a
                           000099   855 G$TI1$0$0 == 0x0099
                           000099   856 _TI1	=	0x0099
                           000098   857 G$RI1$0$0 == 0x0098
                           000098   858 _RI1	=	0x0098
                           0000AF   859 G$EA$0$0 == 0x00af
                           0000AF   860 _EA	=	0x00af
                           0000AD   861 G$ET2$0$0 == 0x00ad
                           0000AD   862 _ET2	=	0x00ad
                           0000AC   863 G$ES0$0$0 == 0x00ac
                           0000AC   864 _ES0	=	0x00ac
                           0000AB   865 G$ET1$0$0 == 0x00ab
                           0000AB   866 _ET1	=	0x00ab
                           0000AA   867 G$EX1$0$0 == 0x00aa
                           0000AA   868 _EX1	=	0x00aa
                           0000A9   869 G$ET0$0$0 == 0x00a9
                           0000A9   870 _ET0	=	0x00a9
                           0000A8   871 G$EX0$0$0 == 0x00a8
                           0000A8   872 _EX0	=	0x00a8
                           0000BD   873 G$PT2$0$0 == 0x00bd
                           0000BD   874 _PT2	=	0x00bd
                           0000BC   875 G$PS0$0$0 == 0x00bc
                           0000BC   876 _PS0	=	0x00bc
                           0000BB   877 G$PT1$0$0 == 0x00bb
                           0000BB   878 _PT1	=	0x00bb
                           0000BA   879 G$PX1$0$0 == 0x00ba
                           0000BA   880 _PX1	=	0x00ba
                           0000B9   881 G$PT0$0$0 == 0x00b9
                           0000B9   882 _PT0	=	0x00b9
                           0000B8   883 G$PX0$0$0 == 0x00b8
                           0000B8   884 _PX0	=	0x00b8
                           0000C7   885 G$BUSY$0$0 == 0x00c7
                           0000C7   886 _BUSY	=	0x00c7
                           0000C6   887 G$ENSMB$0$0 == 0x00c6
                           0000C6   888 _ENSMB	=	0x00c6
                           0000C5   889 G$STA$0$0 == 0x00c5
                           0000C5   890 _STA	=	0x00c5
                           0000C4   891 G$STO$0$0 == 0x00c4
                           0000C4   892 _STO	=	0x00c4
                           0000C3   893 G$SI$0$0 == 0x00c3
                           0000C3   894 _SI	=	0x00c3
                           0000C2   895 G$AA$0$0 == 0x00c2
                           0000C2   896 _AA	=	0x00c2
                           0000C1   897 G$SMBFTE$0$0 == 0x00c1
                           0000C1   898 _SMBFTE	=	0x00c1
                           0000C0   899 G$SMBTOE$0$0 == 0x00c0
                           0000C0   900 _SMBTOE	=	0x00c0
                           0000C7   901 G$BOFF$0$0 == 0x00c7
                           0000C7   902 _BOFF	=	0x00c7
                           0000C6   903 G$EWARN$0$0 == 0x00c6
                           0000C6   904 _EWARN	=	0x00c6
                           0000C5   905 G$EPASS$0$0 == 0x00c5
                           0000C5   906 _EPASS	=	0x00c5
                           0000C4   907 G$RXOK$0$0 == 0x00c4
                           0000C4   908 _RXOK	=	0x00c4
                           0000C3   909 G$TXOK$0$0 == 0x00c3
                           0000C3   910 _TXOK	=	0x00c3
                           0000C2   911 G$LEC2$0$0 == 0x00c2
                           0000C2   912 _LEC2	=	0x00c2
                           0000C1   913 G$LEC1$0$0 == 0x00c1
                           0000C1   914 _LEC1	=	0x00c1
                           0000C0   915 G$LEC0$0$0 == 0x00c0
                           0000C0   916 _LEC0	=	0x00c0
                           0000CF   917 G$TF2$0$0 == 0x00cf
                           0000CF   918 _TF2	=	0x00cf
                           0000CE   919 G$EXF2$0$0 == 0x00ce
                           0000CE   920 _EXF2	=	0x00ce
                           0000CB   921 G$EXEN2$0$0 == 0x00cb
                           0000CB   922 _EXEN2	=	0x00cb
                           0000CA   923 G$TR2$0$0 == 0x00ca
                           0000CA   924 _TR2	=	0x00ca
                           0000C9   925 G$CT2$0$0 == 0x00c9
                           0000C9   926 _CT2	=	0x00c9
                           0000C8   927 G$CPRL2$0$0 == 0x00c8
                           0000C8   928 _CPRL2	=	0x00c8
                           0000CF   929 G$TF3$0$0 == 0x00cf
                           0000CF   930 _TF3	=	0x00cf
                           0000CE   931 G$EXF3$0$0 == 0x00ce
                           0000CE   932 _EXF3	=	0x00ce
                           0000CB   933 G$EXEN3$0$0 == 0x00cb
                           0000CB   934 _EXEN3	=	0x00cb
                           0000CA   935 G$TR3$0$0 == 0x00ca
                           0000CA   936 _TR3	=	0x00ca
                           0000C9   937 G$CT3$0$0 == 0x00c9
                           0000C9   938 _CT3	=	0x00c9
                           0000C8   939 G$CPRL3$0$0 == 0x00c8
                           0000C8   940 _CPRL3	=	0x00c8
                           0000CF   941 G$TF4$0$0 == 0x00cf
                           0000CF   942 _TF4	=	0x00cf
                           0000CE   943 G$EXF4$0$0 == 0x00ce
                           0000CE   944 _EXF4	=	0x00ce
                           0000CB   945 G$EXEN4$0$0 == 0x00cb
                           0000CB   946 _EXEN4	=	0x00cb
                           0000CA   947 G$TR4$0$0 == 0x00ca
                           0000CA   948 _TR4	=	0x00ca
                           0000C9   949 G$CT4$0$0 == 0x00c9
                           0000C9   950 _CT4	=	0x00c9
                           0000C8   951 G$CPRL4$0$0 == 0x00c8
                           0000C8   952 _CPRL4	=	0x00c8
                           0000D7   953 G$CY$0$0 == 0x00d7
                           0000D7   954 _CY	=	0x00d7
                           0000D6   955 G$AC$0$0 == 0x00d6
                           0000D6   956 _AC	=	0x00d6
                           0000D5   957 G$F0$0$0 == 0x00d5
                           0000D5   958 _F0	=	0x00d5
                           0000D4   959 G$RS1$0$0 == 0x00d4
                           0000D4   960 _RS1	=	0x00d4
                           0000D3   961 G$RS0$0$0 == 0x00d3
                           0000D3   962 _RS0	=	0x00d3
                           0000D2   963 G$OV$0$0 == 0x00d2
                           0000D2   964 _OV	=	0x00d2
                           0000D1   965 G$F1$0$0 == 0x00d1
                           0000D1   966 _F1	=	0x00d1
                           0000D0   967 G$P$0$0 == 0x00d0
                           0000D0   968 _P	=	0x00d0
                           0000DF   969 G$CF$0$0 == 0x00df
                           0000DF   970 _CF	=	0x00df
                           0000DE   971 G$CR$0$0 == 0x00de
                           0000DE   972 _CR	=	0x00de
                           0000DD   973 G$CCF5$0$0 == 0x00dd
                           0000DD   974 _CCF5	=	0x00dd
                           0000DC   975 G$CCF4$0$0 == 0x00dc
                           0000DC   976 _CCF4	=	0x00dc
                           0000DB   977 G$CCF3$0$0 == 0x00db
                           0000DB   978 _CCF3	=	0x00db
                           0000DA   979 G$CCF2$0$0 == 0x00da
                           0000DA   980 _CCF2	=	0x00da
                           0000D9   981 G$CCF1$0$0 == 0x00d9
                           0000D9   982 _CCF1	=	0x00d9
                           0000D8   983 G$CCF0$0$0 == 0x00d8
                           0000D8   984 _CCF0	=	0x00d8
                           0000EF   985 G$AD0EN$0$0 == 0x00ef
                           0000EF   986 _AD0EN	=	0x00ef
                           0000EE   987 G$AD0TM$0$0 == 0x00ee
                           0000EE   988 _AD0TM	=	0x00ee
                           0000ED   989 G$AD0INT$0$0 == 0x00ed
                           0000ED   990 _AD0INT	=	0x00ed
                           0000EC   991 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   992 _AD0BUSY	=	0x00ec
                           0000EB   993 G$AD0CM1$0$0 == 0x00eb
                           0000EB   994 _AD0CM1	=	0x00eb
                           0000EA   995 G$AD0CM0$0$0 == 0x00ea
                           0000EA   996 _AD0CM0	=	0x00ea
                           0000E9   997 G$AD0WINT$0$0 == 0x00e9
                           0000E9   998 _AD0WINT	=	0x00e9
                           0000E8   999 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1000 _AD0LJST	=	0x00e8
                           0000EF  1001 G$AD2EN$0$0 == 0x00ef
                           0000EF  1002 _AD2EN	=	0x00ef
                           0000EE  1003 G$AD2TM$0$0 == 0x00ee
                           0000EE  1004 _AD2TM	=	0x00ee
                           0000ED  1005 G$AD2INT$0$0 == 0x00ed
                           0000ED  1006 _AD2INT	=	0x00ed
                           0000EC  1007 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1008 _AD2BUSY	=	0x00ec
                           0000EB  1009 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1010 _AD2CM2	=	0x00eb
                           0000EA  1011 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1012 _AD2CM1	=	0x00ea
                           0000E9  1013 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1014 _AD2CM0	=	0x00e9
                           0000E8  1015 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1016 _AD2WINT	=	0x00e8
                           0000FF  1017 G$SPIF$0$0 == 0x00ff
                           0000FF  1018 _SPIF	=	0x00ff
                           0000FE  1019 G$WCOL$0$0 == 0x00fe
                           0000FE  1020 _WCOL	=	0x00fe
                           0000FD  1021 G$MODF$0$0 == 0x00fd
                           0000FD  1022 _MODF	=	0x00fd
                           0000FC  1023 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1024 _RXOVRN	=	0x00fc
                           0000FB  1025 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1026 _NSSMD1	=	0x00fb
                           0000FA  1027 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1028 _NSSMD0	=	0x00fa
                           0000F9  1029 G$TXBMT$0$0 == 0x00f9
                           0000F9  1030 _TXBMT	=	0x00f9
                           0000F8  1031 G$SPIEN$0$0 == 0x00f8
                           0000F8  1032 _SPIEN	=	0x00f8
                           0000F8  1033 G$CANINIT$0$0 == 0x00f8
                           0000F8  1034 _CANINIT	=	0x00f8
                           0000F9  1035 G$CANIE$0$0 == 0x00f9
                           0000F9  1036 _CANIE	=	0x00f9
                           0000FA  1037 G$CANSIE$0$0 == 0x00fa
                           0000FA  1038 _CANSIE	=	0x00fa
                           0000FB  1039 G$CANEIE$0$0 == 0x00fb
                           0000FB  1040 _CANEIE	=	0x00fb
                           0000FC  1041 G$CANIF$0$0 == 0x00fc
                           0000FC  1042 _CANIF	=	0x00fc
                           0000FD  1043 G$CANDAR$0$0 == 0x00fd
                           0000FD  1044 _CANDAR	=	0x00fd
                           0000FE  1045 G$CANCCE$0$0 == 0x00fe
                           0000FE  1046 _CANCCE	=	0x00fe
                           0000FF  1047 G$CANTEST$0$0 == 0x00ff
                           0000FF  1048 _CANTEST	=	0x00ff
                           000080  1049 G$P0_0$0$0 == 0x0080
                           000080  1050 _P0_0	=	0x0080
                           000081  1051 G$P0_1$0$0 == 0x0081
                           000081  1052 _P0_1	=	0x0081
                           000082  1053 G$P0_2$0$0 == 0x0082
                           000082  1054 _P0_2	=	0x0082
                           000083  1055 G$P0_3$0$0 == 0x0083
                           000083  1056 _P0_3	=	0x0083
                           000084  1057 G$P0_4$0$0 == 0x0084
                           000084  1058 _P0_4	=	0x0084
                           000085  1059 G$P0_5$0$0 == 0x0085
                           000085  1060 _P0_5	=	0x0085
                           000086  1061 G$P0_6$0$0 == 0x0086
                           000086  1062 _P0_6	=	0x0086
                           000087  1063 G$P0_7$0$0 == 0x0087
                           000087  1064 _P0_7	=	0x0087
                           000090  1065 G$P1_0$0$0 == 0x0090
                           000090  1066 _P1_0	=	0x0090
                           000091  1067 G$P1_1$0$0 == 0x0091
                           000091  1068 _P1_1	=	0x0091
                           000092  1069 G$P1_2$0$0 == 0x0092
                           000092  1070 _P1_2	=	0x0092
                           000093  1071 G$P1_3$0$0 == 0x0093
                           000093  1072 _P1_3	=	0x0093
                           000094  1073 G$P1_4$0$0 == 0x0094
                           000094  1074 _P1_4	=	0x0094
                           000095  1075 G$P1_5$0$0 == 0x0095
                           000095  1076 _P1_5	=	0x0095
                           000096  1077 G$P1_6$0$0 == 0x0096
                           000096  1078 _P1_6	=	0x0096
                           000097  1079 G$P1_7$0$0 == 0x0097
                           000097  1080 _P1_7	=	0x0097
                           0000A0  1081 G$P2_0$0$0 == 0x00a0
                           0000A0  1082 _P2_0	=	0x00a0
                           0000A1  1083 G$P2_1$0$0 == 0x00a1
                           0000A1  1084 _P2_1	=	0x00a1
                           0000A2  1085 G$P2_2$0$0 == 0x00a2
                           0000A2  1086 _P2_2	=	0x00a2
                           0000A3  1087 G$P2_3$0$0 == 0x00a3
                           0000A3  1088 _P2_3	=	0x00a3
                           0000A4  1089 G$P2_4$0$0 == 0x00a4
                           0000A4  1090 _P2_4	=	0x00a4
                           0000A5  1091 G$P2_5$0$0 == 0x00a5
                           0000A5  1092 _P2_5	=	0x00a5
                           0000A6  1093 G$P2_6$0$0 == 0x00a6
                           0000A6  1094 _P2_6	=	0x00a6
                           0000A7  1095 G$P2_7$0$0 == 0x00a7
                           0000A7  1096 _P2_7	=	0x00a7
                           0000B0  1097 G$P3_0$0$0 == 0x00b0
                           0000B0  1098 _P3_0	=	0x00b0
                           0000B1  1099 G$P3_1$0$0 == 0x00b1
                           0000B1  1100 _P3_1	=	0x00b1
                           0000B2  1101 G$P3_2$0$0 == 0x00b2
                           0000B2  1102 _P3_2	=	0x00b2
                           0000B3  1103 G$P3_3$0$0 == 0x00b3
                           0000B3  1104 _P3_3	=	0x00b3
                           0000B4  1105 G$P3_4$0$0 == 0x00b4
                           0000B4  1106 _P3_4	=	0x00b4
                           0000B5  1107 G$P3_5$0$0 == 0x00b5
                           0000B5  1108 _P3_5	=	0x00b5
                           0000B6  1109 G$P3_6$0$0 == 0x00b6
                           0000B6  1110 _P3_6	=	0x00b6
                           0000B7  1111 G$P3_7$0$0 == 0x00b7
                           0000B7  1112 _P3_7	=	0x00b7
                           0000C8  1113 G$P4_0$0$0 == 0x00c8
                           0000C8  1114 _P4_0	=	0x00c8
                           0000C9  1115 G$P4_1$0$0 == 0x00c9
                           0000C9  1116 _P4_1	=	0x00c9
                           0000CA  1117 G$P4_2$0$0 == 0x00ca
                           0000CA  1118 _P4_2	=	0x00ca
                           0000CB  1119 G$P4_3$0$0 == 0x00cb
                           0000CB  1120 _P4_3	=	0x00cb
                           0000CC  1121 G$P4_4$0$0 == 0x00cc
                           0000CC  1122 _P4_4	=	0x00cc
                           0000CD  1123 G$P4_5$0$0 == 0x00cd
                           0000CD  1124 _P4_5	=	0x00cd
                           0000CE  1125 G$P4_6$0$0 == 0x00ce
                           0000CE  1126 _P4_6	=	0x00ce
                           0000CF  1127 G$P4_7$0$0 == 0x00cf
                           0000CF  1128 _P4_7	=	0x00cf
                           0000D8  1129 G$P5_0$0$0 == 0x00d8
                           0000D8  1130 _P5_0	=	0x00d8
                           0000D9  1131 G$P5_1$0$0 == 0x00d9
                           0000D9  1132 _P5_1	=	0x00d9
                           0000DA  1133 G$P5_2$0$0 == 0x00da
                           0000DA  1134 _P5_2	=	0x00da
                           0000DB  1135 G$P5_3$0$0 == 0x00db
                           0000DB  1136 _P5_3	=	0x00db
                           0000DC  1137 G$P5_4$0$0 == 0x00dc
                           0000DC  1138 _P5_4	=	0x00dc
                           0000DD  1139 G$P5_5$0$0 == 0x00dd
                           0000DD  1140 _P5_5	=	0x00dd
                           0000DE  1141 G$P5_6$0$0 == 0x00de
                           0000DE  1142 _P5_6	=	0x00de
                           0000DF  1143 G$P5_7$0$0 == 0x00df
                           0000DF  1144 _P5_7	=	0x00df
                           0000E8  1145 G$P6_0$0$0 == 0x00e8
                           0000E8  1146 _P6_0	=	0x00e8
                           0000E9  1147 G$P6_1$0$0 == 0x00e9
                           0000E9  1148 _P6_1	=	0x00e9
                           0000EA  1149 G$P6_2$0$0 == 0x00ea
                           0000EA  1150 _P6_2	=	0x00ea
                           0000EB  1151 G$P6_3$0$0 == 0x00eb
                           0000EB  1152 _P6_3	=	0x00eb
                           0000EC  1153 G$P6_4$0$0 == 0x00ec
                           0000EC  1154 _P6_4	=	0x00ec
                           0000ED  1155 G$P6_5$0$0 == 0x00ed
                           0000ED  1156 _P6_5	=	0x00ed
                           0000EE  1157 G$P6_6$0$0 == 0x00ee
                           0000EE  1158 _P6_6	=	0x00ee
                           0000EF  1159 G$P6_7$0$0 == 0x00ef
                           0000EF  1160 _P6_7	=	0x00ef
                           0000F8  1161 G$P7_0$0$0 == 0x00f8
                           0000F8  1162 _P7_0	=	0x00f8
                           0000F9  1163 G$P7_1$0$0 == 0x00f9
                           0000F9  1164 _P7_1	=	0x00f9
                           0000FA  1165 G$P7_2$0$0 == 0x00fa
                           0000FA  1166 _P7_2	=	0x00fa
                           0000FB  1167 G$P7_3$0$0 == 0x00fb
                           0000FB  1168 _P7_3	=	0x00fb
                           0000FC  1169 G$P7_4$0$0 == 0x00fc
                           0000FC  1170 _P7_4	=	0x00fc
                           0000FD  1171 G$P7_5$0$0 == 0x00fd
                           0000FD  1172 _P7_5	=	0x00fd
                           0000FE  1173 G$P7_6$0$0 == 0x00fe
                           0000FE  1174 _P7_6	=	0x00fe
                           0000FF  1175 G$P7_7$0$0 == 0x00ff
                           0000FF  1176 _P7_7	=	0x00ff
                                   1177 ;--------------------------------------------------------
                                   1178 ; overlayable register banks
                                   1179 ;--------------------------------------------------------
                                   1180 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1181 	.ds 8
                                   1182 ;--------------------------------------------------------
                                   1183 ; internal ram data
                                   1184 ;--------------------------------------------------------
                                   1185 	.area DSEG    (DATA)
                           000000  1186 G$led_e$0$0==.
      000008                       1187 _led_e::
      000008                       1188 	.ds 1
                           000001  1189 G$led_d$0$0==.
      000009                       1190 _led_d::
      000009                       1191 	.ds 1
                                   1192 ;--------------------------------------------------------
                                   1193 ; overlayable items in internal ram 
                                   1194 ;--------------------------------------------------------
                                   1195 	.area	OSEG    (OVR,DATA)
                                   1196 	.area	OSEG    (OVR,DATA)
                                   1197 ;--------------------------------------------------------
                                   1198 ; Stack segment in internal ram 
                                   1199 ;--------------------------------------------------------
                                   1200 	.area	SSEG
      00000C                       1201 __start__stack:
      00000C                       1202 	.ds	1
                                   1203 
                                   1204 ;--------------------------------------------------------
                                   1205 ; indirectly addressable internal ram data
                                   1206 ;--------------------------------------------------------
                                   1207 	.area ISEG    (DATA)
                                   1208 ;--------------------------------------------------------
                                   1209 ; absolute internal ram data
                                   1210 ;--------------------------------------------------------
                                   1211 	.area IABS    (ABS,DATA)
                                   1212 	.area IABS    (ABS,DATA)
                                   1213 ;--------------------------------------------------------
                                   1214 ; bit data
                                   1215 ;--------------------------------------------------------
                                   1216 	.area BSEG    (BIT)
                                   1217 ;--------------------------------------------------------
                                   1218 ; paged external ram data
                                   1219 ;--------------------------------------------------------
                                   1220 	.area PSEG    (PAG,XDATA)
                                   1221 ;--------------------------------------------------------
                                   1222 ; external ram data
                                   1223 ;--------------------------------------------------------
                                   1224 	.area XSEG    (XDATA)
                                   1225 ;--------------------------------------------------------
                                   1226 ; absolute external ram data
                                   1227 ;--------------------------------------------------------
                                   1228 	.area XABS    (ABS,XDATA)
                                   1229 ;--------------------------------------------------------
                                   1230 ; external initialized ram data
                                   1231 ;--------------------------------------------------------
                                   1232 	.area XISEG   (XDATA)
                                   1233 	.area HOME    (CODE)
                                   1234 	.area GSINIT0 (CODE)
                                   1235 	.area GSINIT1 (CODE)
                                   1236 	.area GSINIT2 (CODE)
                                   1237 	.area GSINIT3 (CODE)
                                   1238 	.area GSINIT4 (CODE)
                                   1239 	.area GSINIT5 (CODE)
                                   1240 	.area GSINIT  (CODE)
                                   1241 	.area GSFINAL (CODE)
                                   1242 	.area CSEG    (CODE)
                                   1243 ;--------------------------------------------------------
                                   1244 ; interrupt vector 
                                   1245 ;--------------------------------------------------------
                                   1246 	.area HOME    (CODE)
      000000                       1247 __interrupt_vect:
      000000 02 00 31         [24] 1248 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1249 	reti
      000004                       1250 	.ds	7
      00000B 32               [24] 1251 	reti
      00000C                       1252 	.ds	7
      000013 32               [24] 1253 	reti
      000014                       1254 	.ds	7
      00001B 32               [24] 1255 	reti
      00001C                       1256 	.ds	7
      000023 32               [24] 1257 	reti
      000024                       1258 	.ds	7
      00002B 02 01 00         [24] 1259 	ljmp	_funcao_isr
                                   1260 ;--------------------------------------------------------
                                   1261 ; global & static initialisations
                                   1262 ;--------------------------------------------------------
                                   1263 	.area HOME    (CODE)
                                   1264 	.area GSINIT  (CODE)
                                   1265 	.area GSFINAL (CODE)
                                   1266 	.area GSINIT  (CODE)
                                   1267 	.globl __sdcc_gsinit_startup
                                   1268 	.globl __sdcc_program_startup
                                   1269 	.globl __start__stack
                                   1270 	.globl __mcs51_genXINIT
                                   1271 	.globl __mcs51_genXRAMCLEAR
                                   1272 	.globl __mcs51_genRAMCLEAR
                                   1273 	.area GSFINAL (CODE)
      00008A 02 00 2E         [24] 1274 	ljmp	__sdcc_program_startup
                                   1275 ;--------------------------------------------------------
                                   1276 ; Home
                                   1277 ;--------------------------------------------------------
                                   1278 	.area HOME    (CODE)
                                   1279 	.area HOME    (CODE)
      00002E                       1280 __sdcc_program_startup:
      00002E 02 01 96         [24] 1281 	ljmp	_main
                                   1282 ;	return from main will return to caller
                                   1283 ;--------------------------------------------------------
                                   1284 ; code
                                   1285 ;--------------------------------------------------------
                                   1286 	.area CSEG    (CODE)
                                   1287 ;------------------------------------------------------------
                                   1288 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1289 ;------------------------------------------------------------
                           000000  1290 	G$Reset_Sources_Init$0$0 ==.
                           000000  1291 	C$config.c$10$0$0 ==.
                                   1292 ;	Z:\micro\Display 7 segmentos\/config.c:10: void Reset_Sources_Init()
                                   1293 ;	-----------------------------------------
                                   1294 ;	 function Reset_Sources_Init
                                   1295 ;	-----------------------------------------
      00008D                       1296 _Reset_Sources_Init:
                           000007  1297 	ar7 = 0x07
                           000006  1298 	ar6 = 0x06
                           000005  1299 	ar5 = 0x05
                           000004  1300 	ar4 = 0x04
                           000003  1301 	ar3 = 0x03
                           000002  1302 	ar2 = 0x02
                           000001  1303 	ar1 = 0x01
                           000000  1304 	ar0 = 0x00
                           000000  1305 	C$config.c$12$1$1 ==.
                                   1306 ;	Z:\micro\Display 7 segmentos\/config.c:12: WDTCN     = 0xDE;
      00008D 75 FF DE         [24] 1307 	mov	_WDTCN,#0xde
                           000003  1308 	C$config.c$13$1$1 ==.
                                   1309 ;	Z:\micro\Display 7 segmentos\/config.c:13: WDTCN     = 0xAD;
      000090 75 FF AD         [24] 1310 	mov	_WDTCN,#0xad
                           000006  1311 	C$config.c$14$1$1 ==.
                           000006  1312 	XG$Reset_Sources_Init$0$0 ==.
      000093 22               [24] 1313 	ret
                                   1314 ;------------------------------------------------------------
                                   1315 ;Allocation info for local variables in function 'Timer_Init'
                                   1316 ;------------------------------------------------------------
                           000007  1317 	G$Timer_Init$0$0 ==.
                           000007  1318 	C$config.c$16$1$1 ==.
                                   1319 ;	Z:\micro\Display 7 segmentos\/config.c:16: void Timer_Init()
                                   1320 ;	-----------------------------------------
                                   1321 ;	 function Timer_Init
                                   1322 ;	-----------------------------------------
      000094                       1323 _Timer_Init:
                           000007  1324 	C$config.c$18$1$2 ==.
                                   1325 ;	Z:\micro\Display 7 segmentos\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      000094 75 84 00         [24] 1326 	mov	_SFRPAGE,#0x00
                           00000A  1327 	C$config.c$19$1$2 ==.
                                   1328 ;	Z:\micro\Display 7 segmentos\/config.c:19: CKCON     = 0x08;
      000097 75 8E 08         [24] 1329 	mov	_CKCON,#0x08
                           00000D  1330 	C$config.c$20$1$2 ==.
                                   1331 ;	Z:\micro\Display 7 segmentos\/config.c:20: SFRPAGE   = TMR2_PAGE;
      00009A 75 84 00         [24] 1332 	mov	_SFRPAGE,#0x00
                           000010  1333 	C$config.c$21$1$2 ==.
                                   1334 ;	Z:\micro\Display 7 segmentos\/config.c:21: TMR2CN    = 0x04;
      00009D 75 C8 04         [24] 1335 	mov	_TMR2CN,#0x04
                           000013  1336 	C$config.c$22$1$2 ==.
                                   1337 ;	Z:\micro\Display 7 segmentos\/config.c:22: TMR2CF    = 0x02;
      0000A0 75 C9 02         [24] 1338 	mov	_TMR2CF,#0x02
                           000016  1339 	C$config.c$23$1$2 ==.
                                   1340 ;	Z:\micro\Display 7 segmentos\/config.c:23: RCAP2L    = 0x9F;
      0000A3 75 CA 9F         [24] 1341 	mov	_RCAP2L,#0x9f
                           000019  1342 	C$config.c$24$1$2 ==.
                                   1343 ;	Z:\micro\Display 7 segmentos\/config.c:24: RCAP2H    = 0xAE;
      0000A6 75 CB AE         [24] 1344 	mov	_RCAP2H,#0xae
                           00001C  1345 	C$config.c$25$1$2 ==.
                           00001C  1346 	XG$Timer_Init$0$0 ==.
      0000A9 22               [24] 1347 	ret
                                   1348 ;------------------------------------------------------------
                                   1349 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1350 ;------------------------------------------------------------
                           00001D  1351 	G$Port_IO_Init$0$0 ==.
                           00001D  1352 	C$config.c$27$1$2 ==.
                                   1353 ;	Z:\micro\Display 7 segmentos\/config.c:27: void Port_IO_Init()
                                   1354 ;	-----------------------------------------
                                   1355 ;	 function Port_IO_Init
                                   1356 ;	-----------------------------------------
      0000AA                       1357 _Port_IO_Init:
                           00001D  1358 	C$config.c$65$1$3 ==.
                                   1359 ;	Z:\micro\Display 7 segmentos\/config.c:65: SFRPAGE   = CONFIG_PAGE;
      0000AA 75 84 0F         [24] 1360 	mov	_SFRPAGE,#0x0f
                           000020  1361 	C$config.c$66$1$3 ==.
                                   1362 ;	Z:\micro\Display 7 segmentos\/config.c:66: P0MDOUT   = 0xFF;
      0000AD 75 A4 FF         [24] 1363 	mov	_P0MDOUT,#0xff
                           000023  1364 	C$config.c$67$1$3 ==.
                                   1365 ;	Z:\micro\Display 7 segmentos\/config.c:67: P1MDOUT   = 0xFF;
      0000B0 75 A5 FF         [24] 1366 	mov	_P1MDOUT,#0xff
                           000026  1367 	C$config.c$68$1$3 ==.
                                   1368 ;	Z:\micro\Display 7 segmentos\/config.c:68: P2MDOUT   = 0xFF;
      0000B3 75 A6 FF         [24] 1369 	mov	_P2MDOUT,#0xff
                           000029  1370 	C$config.c$69$1$3 ==.
                                   1371 ;	Z:\micro\Display 7 segmentos\/config.c:69: P3MDOUT   = 0xFF;
      0000B6 75 A7 FF         [24] 1372 	mov	_P3MDOUT,#0xff
                           00002C  1373 	C$config.c$70$1$3 ==.
                                   1374 ;	Z:\micro\Display 7 segmentos\/config.c:70: P4MDOUT   = 0xFF;
      0000B9 75 9C FF         [24] 1375 	mov	_P4MDOUT,#0xff
                           00002F  1376 	C$config.c$71$1$3 ==.
                                   1377 ;	Z:\micro\Display 7 segmentos\/config.c:71: P5MDOUT   = 0xFF;
      0000BC 75 9D FF         [24] 1378 	mov	_P5MDOUT,#0xff
                           000032  1379 	C$config.c$72$1$3 ==.
                                   1380 ;	Z:\micro\Display 7 segmentos\/config.c:72: P6MDOUT   = 0xFF;
      0000BF 75 9E FF         [24] 1381 	mov	_P6MDOUT,#0xff
                           000035  1382 	C$config.c$73$1$3 ==.
                                   1383 ;	Z:\micro\Display 7 segmentos\/config.c:73: P7MDOUT   = 0xFF;
      0000C2 75 9F FF         [24] 1384 	mov	_P7MDOUT,#0xff
                           000038  1385 	C$config.c$74$1$3 ==.
                                   1386 ;	Z:\micro\Display 7 segmentos\/config.c:74: XBR2      = 0x40;
      0000C5 75 E3 40         [24] 1387 	mov	_XBR2,#0x40
                           00003B  1388 	C$config.c$75$1$3 ==.
                           00003B  1389 	XG$Port_IO_Init$0$0 ==.
      0000C8 22               [24] 1390 	ret
                                   1391 ;------------------------------------------------------------
                                   1392 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1393 ;------------------------------------------------------------
                                   1394 ;i                         Allocated to registers r6 r7 
                                   1395 ;------------------------------------------------------------
                           00003C  1396 	G$Oscillator_Init$0$0 ==.
                           00003C  1397 	C$config.c$77$1$3 ==.
                                   1398 ;	Z:\micro\Display 7 segmentos\/config.c:77: void Oscillator_Init()
                                   1399 ;	-----------------------------------------
                                   1400 ;	 function Oscillator_Init
                                   1401 ;	-----------------------------------------
      0000C9                       1402 _Oscillator_Init:
                           00003C  1403 	C$config.c$80$1$4 ==.
                                   1404 ;	Z:\micro\Display 7 segmentos\/config.c:80: SFRPAGE   = CONFIG_PAGE;
      0000C9 75 84 0F         [24] 1405 	mov	_SFRPAGE,#0x0f
                           00003F  1406 	C$config.c$81$1$4 ==.
                                   1407 ;	Z:\micro\Display 7 segmentos\/config.c:81: OSCXCN    = 0x67;
      0000CC 75 8C 67         [24] 1408 	mov	_OSCXCN,#0x67
                           000042  1409 	C$config.c$82$1$4 ==.
                                   1410 ;	Z:\micro\Display 7 segmentos\/config.c:82: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      0000CF 7E B8            [12] 1411 	mov	r6,#0xb8
      0000D1 7F 0B            [12] 1412 	mov	r7,#0x0b
      0000D3                       1413 00107$:
      0000D3 EE               [12] 1414 	mov	a,r6
      0000D4 24 FF            [12] 1415 	add	a,#0xff
      0000D6 FC               [12] 1416 	mov	r4,a
      0000D7 EF               [12] 1417 	mov	a,r7
      0000D8 34 FF            [12] 1418 	addc	a,#0xff
      0000DA FD               [12] 1419 	mov	r5,a
      0000DB 8C 06            [24] 1420 	mov	ar6,r4
      0000DD 8D 07            [24] 1421 	mov	ar7,r5
      0000DF EC               [12] 1422 	mov	a,r4
      0000E0 4D               [12] 1423 	orl	a,r5
      0000E1 70 F0            [24] 1424 	jnz	00107$
                           000056  1425 	C$config.c$83$1$4 ==.
                                   1426 ;	Z:\micro\Display 7 segmentos\/config.c:83: while ((OSCXCN & 0x80) == 0);
      0000E3                       1427 00102$:
      0000E3 E5 8C            [12] 1428 	mov	a,_OSCXCN
      0000E5 30 E7 FB         [24] 1429 	jnb	acc.7,00102$
                           00005B  1430 	C$config.c$84$1$4 ==.
                                   1431 ;	Z:\micro\Display 7 segmentos\/config.c:84: CLKSEL    = 0x01;
      0000E8 75 97 01         [24] 1432 	mov	_CLKSEL,#0x01
                           00005E  1433 	C$config.c$85$1$4 ==.
                           00005E  1434 	XG$Oscillator_Init$0$0 ==.
      0000EB 22               [24] 1435 	ret
                                   1436 ;------------------------------------------------------------
                                   1437 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1438 ;------------------------------------------------------------
                           00005F  1439 	G$Interrupts_Init$0$0 ==.
                           00005F  1440 	C$config.c$87$1$4 ==.
                                   1441 ;	Z:\micro\Display 7 segmentos\/config.c:87: void Interrupts_Init()
                                   1442 ;	-----------------------------------------
                                   1443 ;	 function Interrupts_Init
                                   1444 ;	-----------------------------------------
      0000EC                       1445 _Interrupts_Init:
                           00005F  1446 	C$config.c$89$1$5 ==.
                                   1447 ;	Z:\micro\Display 7 segmentos\/config.c:89: IE        = 0xA0;
      0000EC 75 A8 A0         [24] 1448 	mov	_IE,#0xa0
                           000062  1449 	C$config.c$90$1$5 ==.
                           000062  1450 	XG$Interrupts_Init$0$0 ==.
      0000EF 22               [24] 1451 	ret
                                   1452 ;------------------------------------------------------------
                                   1453 ;Allocation info for local variables in function 'Init_Device'
                                   1454 ;------------------------------------------------------------
                           000063  1455 	G$Init_Device$0$0 ==.
                           000063  1456 	C$config.c$94$1$5 ==.
                                   1457 ;	Z:\micro\Display 7 segmentos\/config.c:94: void Init_Device(void)
                                   1458 ;	-----------------------------------------
                                   1459 ;	 function Init_Device
                                   1460 ;	-----------------------------------------
      0000F0                       1461 _Init_Device:
                           000063  1462 	C$config.c$96$1$7 ==.
                                   1463 ;	Z:\micro\Display 7 segmentos\/config.c:96: Reset_Sources_Init();
      0000F0 12 00 8D         [24] 1464 	lcall	_Reset_Sources_Init
                           000066  1465 	C$config.c$97$1$7 ==.
                                   1466 ;	Z:\micro\Display 7 segmentos\/config.c:97: Timer_Init();
      0000F3 12 00 94         [24] 1467 	lcall	_Timer_Init
                           000069  1468 	C$config.c$98$1$7 ==.
                                   1469 ;	Z:\micro\Display 7 segmentos\/config.c:98: Port_IO_Init();
      0000F6 12 00 AA         [24] 1470 	lcall	_Port_IO_Init
                           00006C  1471 	C$config.c$99$1$7 ==.
                                   1472 ;	Z:\micro\Display 7 segmentos\/config.c:99: Oscillator_Init();
      0000F9 12 00 C9         [24] 1473 	lcall	_Oscillator_Init
                           00006F  1474 	C$config.c$100$1$7 ==.
                                   1475 ;	Z:\micro\Display 7 segmentos\/config.c:100: Interrupts_Init();
      0000FC 12 00 EC         [24] 1476 	lcall	_Interrupts_Init
                           000072  1477 	C$config.c$101$1$7 ==.
                           000072  1478 	XG$Init_Device$0$0 ==.
      0000FF 22               [24] 1479 	ret
                                   1480 ;------------------------------------------------------------
                                   1481 ;Allocation info for local variables in function 'funcao_isr'
                                   1482 ;------------------------------------------------------------
                           000073  1483 	G$funcao_isr$0$0 ==.
                           000073  1484 	C$main.c$35$1$7 ==.
                                   1485 ;	Z:\micro\Display 7 segmentos\main.c:35: void funcao_isr(void) __interrupt 5
                                   1486 ;	-----------------------------------------
                                   1487 ;	 function funcao_isr
                                   1488 ;	-----------------------------------------
      000100                       1489 _funcao_isr:
      000100 C0 E0            [24] 1490 	push	acc
      000102 C0 82            [24] 1491 	push	dpl
      000104 C0 83            [24] 1492 	push	dph
      000106 C0 D0            [24] 1493 	push	psw
                           00007B  1494 	C$main.c$37$1$9 ==.
                                   1495 ;	Z:\micro\Display 7 segmentos\main.c:37: if (DISP_D == DES)
                           00007B  1496 	C$main.c$39$2$10 ==.
                                   1497 ;	Z:\micro\Display 7 segmentos\main.c:39: DISP_D = LIG;
      000108 10 91 02         [24] 1498 	jbc	_P1_1,00109$
      00010B 80 0C            [24] 1499 	sjmp	00102$
      00010D                       1500 00109$:
                           000080  1501 	C$main.c$40$2$10 ==.
                                   1502 ;	Z:\micro\Display 7 segmentos\main.c:40: P0 = disp7[led_d];
      00010D E5 09            [12] 1503 	mov	a,_led_d
      00010F 90 02 3E         [24] 1504 	mov	dptr,#_disp7
      000112 93               [24] 1505 	movc	a,@a+dptr
      000113 F5 80            [12] 1506 	mov	_P0,a
                           000088  1507 	C$main.c$41$2$10 ==.
                                   1508 ;	Z:\micro\Display 7 segmentos\main.c:41: DISP_E = DES;
      000115 D2 90            [12] 1509 	setb	_P1_0
      000117 80 0C            [24] 1510 	sjmp	00104$
      000119                       1511 00102$:
                           00008C  1512 	C$main.c$46$2$11 ==.
                                   1513 ;	Z:\micro\Display 7 segmentos\main.c:46: DISP_D = DES;
      000119 D2 91            [12] 1514 	setb	_P1_1
                           00008E  1515 	C$main.c$47$2$11 ==.
                                   1516 ;	Z:\micro\Display 7 segmentos\main.c:47: P0 = disp7[led_e];
      00011B E5 08            [12] 1517 	mov	a,_led_e
      00011D 90 02 3E         [24] 1518 	mov	dptr,#_disp7
      000120 93               [24] 1519 	movc	a,@a+dptr
      000121 F5 80            [12] 1520 	mov	_P0,a
                           000096  1521 	C$main.c$48$2$11 ==.
                                   1522 ;	Z:\micro\Display 7 segmentos\main.c:48: DISP_E = LIG;
      000123 C2 90            [12] 1523 	clr	_P1_0
      000125                       1524 00104$:
      000125 D0 D0            [24] 1525 	pop	psw
      000127 D0 83            [24] 1526 	pop	dph
      000129 D0 82            [24] 1527 	pop	dpl
      00012B D0 E0            [24] 1528 	pop	acc
                           0000A0  1529 	C$main.c$50$1$9 ==.
                           0000A0  1530 	XG$funcao_isr$0$0 ==.
      00012D 32               [24] 1531 	reti
                                   1532 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1533 ;	eliminated unneeded push/pop b
                                   1534 ;------------------------------------------------------------
                                   1535 ;Allocation info for local variables in function 'esc_disp7s'
                                   1536 ;------------------------------------------------------------
                                   1537 ;num_vis                   Allocated to registers r6 r7 
                                   1538 ;------------------------------------------------------------
                           0000A1  1539 	G$esc_disp7s$0$0 ==.
                           0000A1  1540 	C$main.c$52$1$9 ==.
                                   1541 ;	Z:\micro\Display 7 segmentos\main.c:52: void esc_disp7s(unsigned int num_vis)
                                   1542 ;	-----------------------------------------
                                   1543 ;	 function esc_disp7s
                                   1544 ;	-----------------------------------------
      00012E                       1545 _esc_disp7s:
      00012E AE 82            [24] 1546 	mov	r6,dpl
      000130 AF 83            [24] 1547 	mov	r7,dph
                           0000A5  1548 	C$main.c$54$1$13 ==.
                                   1549 ;	Z:\micro\Display 7 segmentos\main.c:54: DISP_D = LIG;
      000132 C2 91            [12] 1550 	clr	_P1_1
                           0000A7  1551 	C$main.c$55$1$13 ==.
                                   1552 ;	Z:\micro\Display 7 segmentos\main.c:55: DISP_E = LIG;
      000134 C2 90            [12] 1553 	clr	_P1_0
                           0000A9  1554 	C$main.c$57$1$13 ==.
                                   1555 ;	Z:\micro\Display 7 segmentos\main.c:57: if(num_vis <100)
      000136 C3               [12] 1556 	clr	c
      000137 EE               [12] 1557 	mov	a,r6
      000138 94 64            [12] 1558 	subb	a,#0x64
      00013A EF               [12] 1559 	mov	a,r7
      00013B 94 00            [12] 1560 	subb	a,#0x00
      00013D 50 2E            [24] 1561 	jnc	00102$
                           0000B2  1562 	C$main.c$59$1$13 ==.
                                   1563 ;	Z:\micro\Display 7 segmentos\main.c:59: led_d = num_vis % 10;
      00013F 75 0A 0A         [24] 1564 	mov	__moduint_PARM_2,#0x0a
      000142 75 0B 00         [24] 1565 	mov	(__moduint_PARM_2 + 1),#0x00
      000145 8E 82            [24] 1566 	mov	dpl,r6
      000147 8F 83            [24] 1567 	mov	dph,r7
      000149 C0 07            [24] 1568 	push	ar7
      00014B C0 06            [24] 1569 	push	ar6
      00014D 12 01 ED         [24] 1570 	lcall	__moduint
      000150 AC 82            [24] 1571 	mov	r4,dpl
      000152 D0 06            [24] 1572 	pop	ar6
      000154 D0 07            [24] 1573 	pop	ar7
      000156 8C 09            [24] 1574 	mov	_led_d,r4
                           0000CB  1575 	C$main.c$60$1$13 ==.
                                   1576 ;	Z:\micro\Display 7 segmentos\main.c:60: led_e = num_vis / 10;
      000158 75 0A 0A         [24] 1577 	mov	__divuint_PARM_2,#0x0a
      00015B 75 0B 00         [24] 1578 	mov	(__divuint_PARM_2 + 1),#0x00
      00015E 8E 82            [24] 1579 	mov	dpl,r6
      000160 8F 83            [24] 1580 	mov	dph,r7
      000162 12 01 C4         [24] 1581 	lcall	__divuint
      000165 AE 82            [24] 1582 	mov	r6,dpl
      000167 AF 83            [24] 1583 	mov	r7,dph
      000169 8E 08            [24] 1584 	mov	_led_e,r6
      00016B 80 03            [24] 1585 	sjmp	00104$
      00016D                       1586 00102$:
                           0000E0  1587 	C$main.c$63$1$13 ==.
                                   1588 ;	Z:\micro\Display 7 segmentos\main.c:63: P0 = 0x4F;
      00016D 75 80 4F         [24] 1589 	mov	_P0,#0x4f
      000170                       1590 00104$:
                           0000E3  1591 	C$main.c$64$1$13 ==.
                           0000E3  1592 	XG$esc_disp7s$0$0 ==.
      000170 22               [24] 1593 	ret
                                   1594 ;------------------------------------------------------------
                                   1595 ;Allocation info for local variables in function 'delay_ms'
                                   1596 ;------------------------------------------------------------
                                   1597 ;t                         Allocated to registers r6 r7 
                                   1598 ;------------------------------------------------------------
                           0000E4  1599 	G$delay_ms$0$0 ==.
                           0000E4  1600 	C$main.c$66$1$13 ==.
                                   1601 ;	Z:\micro\Display 7 segmentos\main.c:66: void delay_ms(unsigned int t)
                                   1602 ;	-----------------------------------------
                                   1603 ;	 function delay_ms
                                   1604 ;	-----------------------------------------
      000171                       1605 _delay_ms:
      000171 AE 82            [24] 1606 	mov	r6,dpl
      000173 AF 83            [24] 1607 	mov	r7,dph
                           0000E8  1608 	C$main.c$68$1$16 ==.
                                   1609 ;	Z:\micro\Display 7 segmentos\main.c:68: TMOD &= 0xFC;
      000175 53 89 FC         [24] 1610 	anl	_TMOD,#0xfc
                           0000EB  1611 	C$main.c$69$1$16 ==.
                                   1612 ;	Z:\micro\Display 7 segmentos\main.c:69: TMOD |= 0x01;
      000178 43 89 01         [24] 1613 	orl	_TMOD,#0x01
                           0000EE  1614 	C$main.c$71$1$16 ==.
                                   1615 ;	Z:\micro\Display 7 segmentos\main.c:71: while(t)
      00017B                       1616 00104$:
      00017B EE               [12] 1617 	mov	a,r6
      00017C 4F               [12] 1618 	orl	a,r7
      00017D 60 16            [24] 1619 	jz	00107$
                           0000F2  1620 	C$main.c$73$2$17 ==.
                                   1621 ;	Z:\micro\Display 7 segmentos\main.c:73: TR0 = 0;
      00017F C2 8C            [12] 1622 	clr	_TR0
                           0000F4  1623 	C$main.c$74$2$17 ==.
                                   1624 ;	Z:\micro\Display 7 segmentos\main.c:74: TF0 = 0;
      000181 C2 8D            [12] 1625 	clr	_TF0
                           0000F6  1626 	C$main.c$75$2$17 ==.
                                   1627 ;	Z:\micro\Display 7 segmentos\main.c:75: TL0 = 0x58;
      000183 75 8A 58         [24] 1628 	mov	_TL0,#0x58
                           0000F9  1629 	C$main.c$76$2$17 ==.
                                   1630 ;	Z:\micro\Display 7 segmentos\main.c:76: TH0 = 0x9E;
      000186 75 8C 9E         [24] 1631 	mov	_TH0,#0x9e
                           0000FC  1632 	C$main.c$77$2$17 ==.
                                   1633 ;	Z:\micro\Display 7 segmentos\main.c:77: TR0 = 1;
      000189 D2 8C            [12] 1634 	setb	_TR0
                           0000FE  1635 	C$main.c$79$2$17 ==.
                                   1636 ;	Z:\micro\Display 7 segmentos\main.c:79: while (TF0 != 1);
      00018B                       1637 00101$:
      00018B 30 8D FD         [24] 1638 	jnb	_TF0,00101$
                           000101  1639 	C$main.c$81$2$17 ==.
                                   1640 ;	Z:\micro\Display 7 segmentos\main.c:81: t--;
      00018E 1E               [12] 1641 	dec	r6
      00018F BE FF 01         [24] 1642 	cjne	r6,#0xff,00124$
      000192 1F               [12] 1643 	dec	r7
      000193                       1644 00124$:
      000193 80 E6            [24] 1645 	sjmp	00104$
      000195                       1646 00107$:
                           000108  1647 	C$main.c$83$1$16 ==.
                           000108  1648 	XG$delay_ms$0$0 ==.
      000195 22               [24] 1649 	ret
                                   1650 ;------------------------------------------------------------
                                   1651 ;Allocation info for local variables in function 'main'
                                   1652 ;------------------------------------------------------------
                                   1653 ;i                         Allocated to registers r6 r7 
                                   1654 ;------------------------------------------------------------
                           000109  1655 	G$main$0$0 ==.
                           000109  1656 	C$main.c$86$1$16 ==.
                                   1657 ;	Z:\micro\Display 7 segmentos\main.c:86: void main()
                                   1658 ;	-----------------------------------------
                                   1659 ;	 function main
                                   1660 ;	-----------------------------------------
      000196                       1661 _main:
                           000109  1662 	C$main.c$89$1$18 ==.
                                   1663 ;	Z:\micro\Display 7 segmentos\main.c:89: Init_Device();
      000196 12 00 F0         [24] 1664 	lcall	_Init_Device
                           00010C  1665 	C$main.c$90$1$18 ==.
                                   1666 ;	Z:\micro\Display 7 segmentos\main.c:90: SFRPAGE = LEGACY_PAGE;
      000199 75 84 00         [24] 1667 	mov	_SFRPAGE,#0x00
                           00010F  1668 	C$main.c$93$1$18 ==.
                                   1669 ;	Z:\micro\Display 7 segmentos\main.c:93: for(i = 0; i < 100; i++)
      00019C 7E 00            [12] 1670 	mov	r6,#0x00
      00019E 7F 00            [12] 1671 	mov	r7,#0x00
      0001A0                       1672 00102$:
                           000113  1673 	C$main.c$95$2$19 ==.
                                   1674 ;	Z:\micro\Display 7 segmentos\main.c:95: esc_disp7s(i);
      0001A0 8E 82            [24] 1675 	mov	dpl,r6
      0001A2 8F 83            [24] 1676 	mov	dph,r7
      0001A4 C0 07            [24] 1677 	push	ar7
      0001A6 C0 06            [24] 1678 	push	ar6
      0001A8 12 01 2E         [24] 1679 	lcall	_esc_disp7s
                           00011E  1680 	C$main.c$96$2$19 ==.
                                   1681 ;	Z:\micro\Display 7 segmentos\main.c:96: delay_ms(250);
      0001AB 90 00 FA         [24] 1682 	mov	dptr,#0x00fa
      0001AE 12 01 71         [24] 1683 	lcall	_delay_ms
      0001B1 D0 06            [24] 1684 	pop	ar6
      0001B3 D0 07            [24] 1685 	pop	ar7
                           000128  1686 	C$main.c$93$1$18 ==.
                                   1687 ;	Z:\micro\Display 7 segmentos\main.c:93: for(i = 0; i < 100; i++)
      0001B5 0E               [12] 1688 	inc	r6
      0001B6 BE 00 01         [24] 1689 	cjne	r6,#0x00,00110$
      0001B9 0F               [12] 1690 	inc	r7
      0001BA                       1691 00110$:
      0001BA C3               [12] 1692 	clr	c
      0001BB EE               [12] 1693 	mov	a,r6
      0001BC 94 64            [12] 1694 	subb	a,#0x64
      0001BE EF               [12] 1695 	mov	a,r7
      0001BF 94 00            [12] 1696 	subb	a,#0x00
      0001C1 40 DD            [24] 1697 	jc	00102$
                           000136  1698 	C$main.c$137$1$18 ==.
                           000136  1699 	XG$main$0$0 ==.
      0001C3 22               [24] 1700 	ret
                                   1701 	.area CSEG    (CODE)
                                   1702 	.area CONST   (CODE)
                           000000  1703 G$disp7$0$0 == .
      00023E                       1704 _disp7:
      00023E 7E                    1705 	.db #0x7e	; 126
      00023F 30                    1706 	.db #0x30	; 48	'0'
      000240 6D                    1707 	.db #0x6d	; 109	'm'
      000241 79                    1708 	.db #0x79	; 121	'y'
      000242 33                    1709 	.db #0x33	; 51	'3'
      000243 5B                    1710 	.db #0x5b	; 91
      000244 5F                    1711 	.db #0x5f	; 95
      000245 70                    1712 	.db #0x70	; 112	'p'
      000246 7F                    1713 	.db #0x7f	; 127
      000247 7B                    1714 	.db #0x7b	; 123
      000248 00                    1715 	.db #0x00	; 0
      000249 FF                    1716 	.db #0xff	; 255
                                   1717 	.area XINIT   (CODE)
                                   1718 	.area CABS    (ABS,CODE)
