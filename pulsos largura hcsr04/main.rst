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
                                     11 	.globl _fonte
                                     12 	.globl _main
                                     13 	.globl _le_hcsr04
                                     14 	.globl _int_tc1
                                     15 	.globl _le_pulso
                                     16 	.globl _limpa_glcd
                                     17 	.globl _conf_pag
                                     18 	.globl _conf_Y
                                     19 	.globl _Ini_glcd
                                     20 	.globl _esc_glcd
                                     21 	.globl _le_glcd
                                     22 	.globl _delay_us
                                     23 	.globl _delay_ms
                                     24 	.globl _printf_fast_f
                                     25 	.globl _Init_Device
                                     26 	.globl _Interrupts_Init
                                     27 	.globl _Oscillator_Init
                                     28 	.globl _Port_IO_Init
                                     29 	.globl _Timer_Init
                                     30 	.globl _Reset_Sources_Init
                                     31 	.globl _P7_7
                                     32 	.globl _P7_6
                                     33 	.globl _P7_5
                                     34 	.globl _P7_4
                                     35 	.globl _P7_3
                                     36 	.globl _P7_2
                                     37 	.globl _P7_1
                                     38 	.globl _P7_0
                                     39 	.globl _P6_7
                                     40 	.globl _P6_6
                                     41 	.globl _P6_5
                                     42 	.globl _P6_4
                                     43 	.globl _P6_3
                                     44 	.globl _P6_2
                                     45 	.globl _P6_1
                                     46 	.globl _P6_0
                                     47 	.globl _P5_7
                                     48 	.globl _P5_6
                                     49 	.globl _P5_5
                                     50 	.globl _P5_4
                                     51 	.globl _P5_3
                                     52 	.globl _P5_2
                                     53 	.globl _P5_1
                                     54 	.globl _P5_0
                                     55 	.globl _P4_7
                                     56 	.globl _P4_6
                                     57 	.globl _P4_5
                                     58 	.globl _P4_4
                                     59 	.globl _P4_3
                                     60 	.globl _P4_2
                                     61 	.globl _P4_1
                                     62 	.globl _P4_0
                                     63 	.globl _P3_7
                                     64 	.globl _P3_6
                                     65 	.globl _P3_5
                                     66 	.globl _P3_4
                                     67 	.globl _P3_3
                                     68 	.globl _P3_2
                                     69 	.globl _P3_1
                                     70 	.globl _P3_0
                                     71 	.globl _P2_7
                                     72 	.globl _P2_6
                                     73 	.globl _P2_5
                                     74 	.globl _P2_4
                                     75 	.globl _P2_3
                                     76 	.globl _P2_2
                                     77 	.globl _P2_1
                                     78 	.globl _P2_0
                                     79 	.globl _P1_7
                                     80 	.globl _P1_6
                                     81 	.globl _P1_5
                                     82 	.globl _P1_4
                                     83 	.globl _P1_3
                                     84 	.globl _P1_2
                                     85 	.globl _P1_1
                                     86 	.globl _P1_0
                                     87 	.globl _P0_7
                                     88 	.globl _P0_6
                                     89 	.globl _P0_5
                                     90 	.globl _P0_4
                                     91 	.globl _P0_3
                                     92 	.globl _P0_2
                                     93 	.globl _P0_1
                                     94 	.globl _P0_0
                                     95 	.globl _CANTEST
                                     96 	.globl _CANCCE
                                     97 	.globl _CANDAR
                                     98 	.globl _CANIF
                                     99 	.globl _CANEIE
                                    100 	.globl _CANSIE
                                    101 	.globl _CANIE
                                    102 	.globl _CANINIT
                                    103 	.globl _SPIEN
                                    104 	.globl _TXBMT
                                    105 	.globl _NSSMD0
                                    106 	.globl _NSSMD1
                                    107 	.globl _RXOVRN
                                    108 	.globl _MODF
                                    109 	.globl _WCOL
                                    110 	.globl _SPIF
                                    111 	.globl _AD2WINT
                                    112 	.globl _AD2CM0
                                    113 	.globl _AD2CM1
                                    114 	.globl _AD2CM2
                                    115 	.globl _AD2BUSY
                                    116 	.globl _AD2INT
                                    117 	.globl _AD2TM
                                    118 	.globl _AD2EN
                                    119 	.globl _AD0LJST
                                    120 	.globl _AD0WINT
                                    121 	.globl _AD0CM0
                                    122 	.globl _AD0CM1
                                    123 	.globl _AD0BUSY
                                    124 	.globl _AD0INT
                                    125 	.globl _AD0TM
                                    126 	.globl _AD0EN
                                    127 	.globl _CCF0
                                    128 	.globl _CCF1
                                    129 	.globl _CCF2
                                    130 	.globl _CCF3
                                    131 	.globl _CCF4
                                    132 	.globl _CCF5
                                    133 	.globl _CR
                                    134 	.globl _CF
                                    135 	.globl _P
                                    136 	.globl _F1
                                    137 	.globl _OV
                                    138 	.globl _RS0
                                    139 	.globl _RS1
                                    140 	.globl _F0
                                    141 	.globl _AC
                                    142 	.globl _CY
                                    143 	.globl _CPRL4
                                    144 	.globl _CT4
                                    145 	.globl _TR4
                                    146 	.globl _EXEN4
                                    147 	.globl _EXF4
                                    148 	.globl _TF4
                                    149 	.globl _CPRL3
                                    150 	.globl _CT3
                                    151 	.globl _TR3
                                    152 	.globl _EXEN3
                                    153 	.globl _EXF3
                                    154 	.globl _TF3
                                    155 	.globl _CPRL2
                                    156 	.globl _CT2
                                    157 	.globl _TR2
                                    158 	.globl _EXEN2
                                    159 	.globl _EXF2
                                    160 	.globl _TF2
                                    161 	.globl _LEC0
                                    162 	.globl _LEC1
                                    163 	.globl _LEC2
                                    164 	.globl _TXOK
                                    165 	.globl _RXOK
                                    166 	.globl _EPASS
                                    167 	.globl _EWARN
                                    168 	.globl _BOFF
                                    169 	.globl _SMBTOE
                                    170 	.globl _SMBFTE
                                    171 	.globl _AA
                                    172 	.globl _SI
                                    173 	.globl _STO
                                    174 	.globl _STA
                                    175 	.globl _ENSMB
                                    176 	.globl _BUSY
                                    177 	.globl _PX0
                                    178 	.globl _PT0
                                    179 	.globl _PX1
                                    180 	.globl _PT1
                                    181 	.globl _PS0
                                    182 	.globl _PT2
                                    183 	.globl _EX0
                                    184 	.globl _ET0
                                    185 	.globl _EX1
                                    186 	.globl _ET1
                                    187 	.globl _ES0
                                    188 	.globl _ET2
                                    189 	.globl _EA
                                    190 	.globl _RI1
                                    191 	.globl _TI1
                                    192 	.globl _RB81
                                    193 	.globl _TB81
                                    194 	.globl _REN1
                                    195 	.globl _MCE1
                                    196 	.globl _S1MODE
                                    197 	.globl _RI0
                                    198 	.globl _TI0
                                    199 	.globl _RB80
                                    200 	.globl _TB80
                                    201 	.globl _REN0
                                    202 	.globl _SM20
                                    203 	.globl _SM10
                                    204 	.globl _SM00
                                    205 	.globl _CP2HYN0
                                    206 	.globl _CP2HYN1
                                    207 	.globl _CP2HYP0
                                    208 	.globl _CP2HYP1
                                    209 	.globl _CP2FIF
                                    210 	.globl _CP2RIF
                                    211 	.globl _CP2OUT
                                    212 	.globl _CP2EN
                                    213 	.globl _CP1HYN0
                                    214 	.globl _CP1HYN1
                                    215 	.globl _CP1HYP0
                                    216 	.globl _CP1HYP1
                                    217 	.globl _CP1FIF
                                    218 	.globl _CP1RIF
                                    219 	.globl _CP1OUT
                                    220 	.globl _CP1EN
                                    221 	.globl _CP0HYN0
                                    222 	.globl _CP0HYN1
                                    223 	.globl _CP0HYP0
                                    224 	.globl _CP0HYP1
                                    225 	.globl _CP0FIF
                                    226 	.globl _CP0RIF
                                    227 	.globl _CP0OUT
                                    228 	.globl _CP0EN
                                    229 	.globl _IT0
                                    230 	.globl _IE0
                                    231 	.globl _IT1
                                    232 	.globl _IE1
                                    233 	.globl _TR0
                                    234 	.globl _TF0
                                    235 	.globl _TR1
                                    236 	.globl _TF1
                                    237 	.globl __XPAGE
                                    238 	.globl _DP
                                    239 	.globl _ADC0
                                    240 	.globl _ADC0LT
                                    241 	.globl _ADC0GT
                                    242 	.globl _TMR4
                                    243 	.globl _TMR3
                                    244 	.globl _TMR2
                                    245 	.globl _RCAP4
                                    246 	.globl _RCAP3
                                    247 	.globl _RCAP2
                                    248 	.globl _DAC1
                                    249 	.globl _DAC0
                                    250 	.globl _CAN0DAT
                                    251 	.globl _PCA0CP5
                                    252 	.globl _PCA0CP4
                                    253 	.globl _PCA0CP3
                                    254 	.globl _PCA0CP2
                                    255 	.globl _PCA0CP1
                                    256 	.globl _PCA0CP0
                                    257 	.globl _PCA0
                                    258 	.globl _WDTCN
                                    259 	.globl _PCA0CPH1
                                    260 	.globl _PCA0CPL1
                                    261 	.globl _PCA0CPH0
                                    262 	.globl _PCA0CPL0
                                    263 	.globl _PCA0H
                                    264 	.globl _PCA0L
                                    265 	.globl _P7
                                    266 	.globl _CAN0CN
                                    267 	.globl _SPI0CN
                                    268 	.globl _EIP2
                                    269 	.globl _EIP1
                                    270 	.globl _B
                                    271 	.globl _RSTSRC
                                    272 	.globl _PCA0CPH4
                                    273 	.globl _PCA0CPL4
                                    274 	.globl _PCA0CPH3
                                    275 	.globl _PCA0CPL3
                                    276 	.globl _PCA0CPH2
                                    277 	.globl _PCA0CPL2
                                    278 	.globl _P6
                                    279 	.globl _ADC2CN
                                    280 	.globl _ADC0CN
                                    281 	.globl _EIE2
                                    282 	.globl _EIE1
                                    283 	.globl _XBR3
                                    284 	.globl _XBR2
                                    285 	.globl _XBR1
                                    286 	.globl _PCA0CPH5
                                    287 	.globl _XBR0
                                    288 	.globl _PCA0CPL5
                                    289 	.globl _ACC
                                    290 	.globl _PCA0CPM5
                                    291 	.globl _PCA0CPM4
                                    292 	.globl _PCA0CPM3
                                    293 	.globl _PCA0CPM2
                                    294 	.globl _CAN0TST
                                    295 	.globl _PCA0CPM1
                                    296 	.globl _CAN0ADR
                                    297 	.globl _PCA0CPM0
                                    298 	.globl _CAN0DATH
                                    299 	.globl _PCA0MD
                                    300 	.globl _P5
                                    301 	.globl _CAN0DATL
                                    302 	.globl _PCA0CN
                                    303 	.globl _HVA0CN
                                    304 	.globl _DAC1CN
                                    305 	.globl _DAC0CN
                                    306 	.globl _DAC1H
                                    307 	.globl _DAC0H
                                    308 	.globl _DAC1L
                                    309 	.globl _DAC0L
                                    310 	.globl _REF0CN
                                    311 	.globl _PSW
                                    312 	.globl _SMB0CR
                                    313 	.globl _TMR4H
                                    314 	.globl _TMR3H
                                    315 	.globl _TMR2H
                                    316 	.globl _TMR4L
                                    317 	.globl _TMR3L
                                    318 	.globl _TMR2L
                                    319 	.globl _RCAP4H
                                    320 	.globl _RCAP3H
                                    321 	.globl _RCAP2H
                                    322 	.globl _RCAP4L
                                    323 	.globl _RCAP3L
                                    324 	.globl _RCAP2L
                                    325 	.globl _TMR4CF
                                    326 	.globl _TMR3CF
                                    327 	.globl _TMR2CF
                                    328 	.globl _P4
                                    329 	.globl _TMR4CN
                                    330 	.globl _TMR3CN
                                    331 	.globl _TMR2CN
                                    332 	.globl _ADC0LTH
                                    333 	.globl _ADC2LT
                                    334 	.globl _ADC0LTL
                                    335 	.globl _ADC0GTH
                                    336 	.globl _ADC2GT
                                    337 	.globl _ADC0GTL
                                    338 	.globl _SMB0ADR
                                    339 	.globl _SMB0DAT
                                    340 	.globl _SMB0STA
                                    341 	.globl _CAN0STA
                                    342 	.globl _SMB0CN
                                    343 	.globl _ADC0H
                                    344 	.globl _ADC2
                                    345 	.globl _ADC0L
                                    346 	.globl _ADC2CF
                                    347 	.globl _ADC0CF
                                    348 	.globl _AMX2SL
                                    349 	.globl _AMX0SL
                                    350 	.globl _AMX0CF
                                    351 	.globl _AMX0PRT
                                    352 	.globl _AMX2CF
                                    353 	.globl _SADEN0
                                    354 	.globl _IP
                                    355 	.globl _FLACL
                                    356 	.globl _FLSCL
                                    357 	.globl _P3
                                    358 	.globl _P3MDIN
                                    359 	.globl _P2MDIN
                                    360 	.globl _P1MDIN
                                    361 	.globl _SADDR1
                                    362 	.globl _SADDR0
                                    363 	.globl _IE
                                    364 	.globl _P3MDOUT
                                    365 	.globl _P2MDOUT
                                    366 	.globl _P1MDOUT
                                    367 	.globl _P0MDOUT
                                    368 	.globl _EMI0CF
                                    369 	.globl _EMI0CN
                                    370 	.globl _EMI0TC
                                    371 	.globl _P2
                                    372 	.globl _P7MDOUT
                                    373 	.globl _P6MDOUT
                                    374 	.globl _P5MDOUT
                                    375 	.globl _SPI0CKR
                                    376 	.globl _P4MDOUT
                                    377 	.globl _SPI0DAT
                                    378 	.globl _SPI0CFG
                                    379 	.globl _SBUF1
                                    380 	.globl _SBUF0
                                    381 	.globl _SCON1
                                    382 	.globl _SCON0
                                    383 	.globl _CLKSEL
                                    384 	.globl _SFRPGCN
                                    385 	.globl _SSTA0
                                    386 	.globl _P1
                                    387 	.globl _PSCTL
                                    388 	.globl _CKCON
                                    389 	.globl _TH1
                                    390 	.globl _OSCXCN
                                    391 	.globl _TH0
                                    392 	.globl _OSCICL
                                    393 	.globl _TL1
                                    394 	.globl _OSCICN
                                    395 	.globl _TL0
                                    396 	.globl _CPT2MD
                                    397 	.globl _CPT1MD
                                    398 	.globl _CPT0MD
                                    399 	.globl _TMOD
                                    400 	.globl _CPT2CN
                                    401 	.globl _CPT1CN
                                    402 	.globl _CPT0CN
                                    403 	.globl _TCON
                                    404 	.globl _PCON
                                    405 	.globl _SFRLAST
                                    406 	.globl _SFRNEXT
                                    407 	.globl _SFRPAGE
                                    408 	.globl _DPH
                                    409 	.globl _DPL
                                    410 	.globl _SP
                                    411 	.globl _P0
                                    412 	.globl _limpa_glcd_PARM_1
                                    413 	.globl _conf_pag_PARM_2
                                    414 	.globl _conf_Y_PARM_2
                                    415 	.globl _esc_glcd_PARM_3
                                    416 	.globl _esc_glcd_PARM_2
                                    417 	.globl _le_glcd_PARM_2
                                    418 	.globl _le_glcd_PARM_1
                                    419 	.globl _cont_t
                                    420 	.globl _putchar
                                    421 ;--------------------------------------------------------
                                    422 ; special function registers
                                    423 ;--------------------------------------------------------
                                    424 	.area RSEG    (ABS,DATA)
      000000                        425 	.org 0x0000
                           000080   426 G$P0$0$0 == 0x0080
                           000080   427 _P0	=	0x0080
                           000081   428 G$SP$0$0 == 0x0081
                           000081   429 _SP	=	0x0081
                           000082   430 G$DPL$0$0 == 0x0082
                           000082   431 _DPL	=	0x0082
                           000083   432 G$DPH$0$0 == 0x0083
                           000083   433 _DPH	=	0x0083
                           000084   434 G$SFRPAGE$0$0 == 0x0084
                           000084   435 _SFRPAGE	=	0x0084
                           000085   436 G$SFRNEXT$0$0 == 0x0085
                           000085   437 _SFRNEXT	=	0x0085
                           000086   438 G$SFRLAST$0$0 == 0x0086
                           000086   439 _SFRLAST	=	0x0086
                           000087   440 G$PCON$0$0 == 0x0087
                           000087   441 _PCON	=	0x0087
                           000088   442 G$TCON$0$0 == 0x0088
                           000088   443 _TCON	=	0x0088
                           000088   444 G$CPT0CN$0$0 == 0x0088
                           000088   445 _CPT0CN	=	0x0088
                           000088   446 G$CPT1CN$0$0 == 0x0088
                           000088   447 _CPT1CN	=	0x0088
                           000088   448 G$CPT2CN$0$0 == 0x0088
                           000088   449 _CPT2CN	=	0x0088
                           000089   450 G$TMOD$0$0 == 0x0089
                           000089   451 _TMOD	=	0x0089
                           000089   452 G$CPT0MD$0$0 == 0x0089
                           000089   453 _CPT0MD	=	0x0089
                           000089   454 G$CPT1MD$0$0 == 0x0089
                           000089   455 _CPT1MD	=	0x0089
                           000089   456 G$CPT2MD$0$0 == 0x0089
                           000089   457 _CPT2MD	=	0x0089
                           00008A   458 G$TL0$0$0 == 0x008a
                           00008A   459 _TL0	=	0x008a
                           00008A   460 G$OSCICN$0$0 == 0x008a
                           00008A   461 _OSCICN	=	0x008a
                           00008B   462 G$TL1$0$0 == 0x008b
                           00008B   463 _TL1	=	0x008b
                           00008B   464 G$OSCICL$0$0 == 0x008b
                           00008B   465 _OSCICL	=	0x008b
                           00008C   466 G$TH0$0$0 == 0x008c
                           00008C   467 _TH0	=	0x008c
                           00008C   468 G$OSCXCN$0$0 == 0x008c
                           00008C   469 _OSCXCN	=	0x008c
                           00008D   470 G$TH1$0$0 == 0x008d
                           00008D   471 _TH1	=	0x008d
                           00008E   472 G$CKCON$0$0 == 0x008e
                           00008E   473 _CKCON	=	0x008e
                           00008F   474 G$PSCTL$0$0 == 0x008f
                           00008F   475 _PSCTL	=	0x008f
                           000090   476 G$P1$0$0 == 0x0090
                           000090   477 _P1	=	0x0090
                           000091   478 G$SSTA0$0$0 == 0x0091
                           000091   479 _SSTA0	=	0x0091
                           000096   480 G$SFRPGCN$0$0 == 0x0096
                           000096   481 _SFRPGCN	=	0x0096
                           000097   482 G$CLKSEL$0$0 == 0x0097
                           000097   483 _CLKSEL	=	0x0097
                           000098   484 G$SCON0$0$0 == 0x0098
                           000098   485 _SCON0	=	0x0098
                           000098   486 G$SCON1$0$0 == 0x0098
                           000098   487 _SCON1	=	0x0098
                           000099   488 G$SBUF0$0$0 == 0x0099
                           000099   489 _SBUF0	=	0x0099
                           000099   490 G$SBUF1$0$0 == 0x0099
                           000099   491 _SBUF1	=	0x0099
                           00009A   492 G$SPI0CFG$0$0 == 0x009a
                           00009A   493 _SPI0CFG	=	0x009a
                           00009B   494 G$SPI0DAT$0$0 == 0x009b
                           00009B   495 _SPI0DAT	=	0x009b
                           00009C   496 G$P4MDOUT$0$0 == 0x009c
                           00009C   497 _P4MDOUT	=	0x009c
                           00009D   498 G$SPI0CKR$0$0 == 0x009d
                           00009D   499 _SPI0CKR	=	0x009d
                           00009D   500 G$P5MDOUT$0$0 == 0x009d
                           00009D   501 _P5MDOUT	=	0x009d
                           00009E   502 G$P6MDOUT$0$0 == 0x009e
                           00009E   503 _P6MDOUT	=	0x009e
                           00009F   504 G$P7MDOUT$0$0 == 0x009f
                           00009F   505 _P7MDOUT	=	0x009f
                           0000A0   506 G$P2$0$0 == 0x00a0
                           0000A0   507 _P2	=	0x00a0
                           0000A1   508 G$EMI0TC$0$0 == 0x00a1
                           0000A1   509 _EMI0TC	=	0x00a1
                           0000A2   510 G$EMI0CN$0$0 == 0x00a2
                           0000A2   511 _EMI0CN	=	0x00a2
                           0000A3   512 G$EMI0CF$0$0 == 0x00a3
                           0000A3   513 _EMI0CF	=	0x00a3
                           0000A4   514 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   515 _P0MDOUT	=	0x00a4
                           0000A5   516 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   517 _P1MDOUT	=	0x00a5
                           0000A6   518 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   519 _P2MDOUT	=	0x00a6
                           0000A7   520 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   521 _P3MDOUT	=	0x00a7
                           0000A8   522 G$IE$0$0 == 0x00a8
                           0000A8   523 _IE	=	0x00a8
                           0000A9   524 G$SADDR0$0$0 == 0x00a9
                           0000A9   525 _SADDR0	=	0x00a9
                           0000A9   526 G$SADDR1$0$0 == 0x00a9
                           0000A9   527 _SADDR1	=	0x00a9
                           0000AD   528 G$P1MDIN$0$0 == 0x00ad
                           0000AD   529 _P1MDIN	=	0x00ad
                           0000AE   530 G$P2MDIN$0$0 == 0x00ae
                           0000AE   531 _P2MDIN	=	0x00ae
                           0000AF   532 G$P3MDIN$0$0 == 0x00af
                           0000AF   533 _P3MDIN	=	0x00af
                           0000B0   534 G$P3$0$0 == 0x00b0
                           0000B0   535 _P3	=	0x00b0
                           0000B7   536 G$FLSCL$0$0 == 0x00b7
                           0000B7   537 _FLSCL	=	0x00b7
                           0000B7   538 G$FLACL$0$0 == 0x00b7
                           0000B7   539 _FLACL	=	0x00b7
                           0000B8   540 G$IP$0$0 == 0x00b8
                           0000B8   541 _IP	=	0x00b8
                           0000B9   542 G$SADEN0$0$0 == 0x00b9
                           0000B9   543 _SADEN0	=	0x00b9
                           0000BA   544 G$AMX2CF$0$0 == 0x00ba
                           0000BA   545 _AMX2CF	=	0x00ba
                           0000BD   546 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   547 _AMX0PRT	=	0x00bd
                           0000BA   548 G$AMX0CF$0$0 == 0x00ba
                           0000BA   549 _AMX0CF	=	0x00ba
                           0000BB   550 G$AMX0SL$0$0 == 0x00bb
                           0000BB   551 _AMX0SL	=	0x00bb
                           0000BB   552 G$AMX2SL$0$0 == 0x00bb
                           0000BB   553 _AMX2SL	=	0x00bb
                           0000BC   554 G$ADC0CF$0$0 == 0x00bc
                           0000BC   555 _ADC0CF	=	0x00bc
                           0000BC   556 G$ADC2CF$0$0 == 0x00bc
                           0000BC   557 _ADC2CF	=	0x00bc
                           0000BE   558 G$ADC0L$0$0 == 0x00be
                           0000BE   559 _ADC0L	=	0x00be
                           0000BE   560 G$ADC2$0$0 == 0x00be
                           0000BE   561 _ADC2	=	0x00be
                           0000BF   562 G$ADC0H$0$0 == 0x00bf
                           0000BF   563 _ADC0H	=	0x00bf
                           0000C0   564 G$SMB0CN$0$0 == 0x00c0
                           0000C0   565 _SMB0CN	=	0x00c0
                           0000C0   566 G$CAN0STA$0$0 == 0x00c0
                           0000C0   567 _CAN0STA	=	0x00c0
                           0000C1   568 G$SMB0STA$0$0 == 0x00c1
                           0000C1   569 _SMB0STA	=	0x00c1
                           0000C2   570 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   571 _SMB0DAT	=	0x00c2
                           0000C3   572 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   573 _SMB0ADR	=	0x00c3
                           0000C4   574 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   575 _ADC0GTL	=	0x00c4
                           0000C4   576 G$ADC2GT$0$0 == 0x00c4
                           0000C4   577 _ADC2GT	=	0x00c4
                           0000C5   578 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   579 _ADC0GTH	=	0x00c5
                           0000C6   580 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   581 _ADC0LTL	=	0x00c6
                           0000C6   582 G$ADC2LT$0$0 == 0x00c6
                           0000C6   583 _ADC2LT	=	0x00c6
                           0000C7   584 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   585 _ADC0LTH	=	0x00c7
                           0000C8   586 G$TMR2CN$0$0 == 0x00c8
                           0000C8   587 _TMR2CN	=	0x00c8
                           0000C8   588 G$TMR3CN$0$0 == 0x00c8
                           0000C8   589 _TMR3CN	=	0x00c8
                           0000C8   590 G$TMR4CN$0$0 == 0x00c8
                           0000C8   591 _TMR4CN	=	0x00c8
                           0000C8   592 G$P4$0$0 == 0x00c8
                           0000C8   593 _P4	=	0x00c8
                           0000C9   594 G$TMR2CF$0$0 == 0x00c9
                           0000C9   595 _TMR2CF	=	0x00c9
                           0000C9   596 G$TMR3CF$0$0 == 0x00c9
                           0000C9   597 _TMR3CF	=	0x00c9
                           0000C9   598 G$TMR4CF$0$0 == 0x00c9
                           0000C9   599 _TMR4CF	=	0x00c9
                           0000CA   600 G$RCAP2L$0$0 == 0x00ca
                           0000CA   601 _RCAP2L	=	0x00ca
                           0000CA   602 G$RCAP3L$0$0 == 0x00ca
                           0000CA   603 _RCAP3L	=	0x00ca
                           0000CA   604 G$RCAP4L$0$0 == 0x00ca
                           0000CA   605 _RCAP4L	=	0x00ca
                           0000CB   606 G$RCAP2H$0$0 == 0x00cb
                           0000CB   607 _RCAP2H	=	0x00cb
                           0000CB   608 G$RCAP3H$0$0 == 0x00cb
                           0000CB   609 _RCAP3H	=	0x00cb
                           0000CB   610 G$RCAP4H$0$0 == 0x00cb
                           0000CB   611 _RCAP4H	=	0x00cb
                           0000CC   612 G$TMR2L$0$0 == 0x00cc
                           0000CC   613 _TMR2L	=	0x00cc
                           0000CC   614 G$TMR3L$0$0 == 0x00cc
                           0000CC   615 _TMR3L	=	0x00cc
                           0000CC   616 G$TMR4L$0$0 == 0x00cc
                           0000CC   617 _TMR4L	=	0x00cc
                           0000CD   618 G$TMR2H$0$0 == 0x00cd
                           0000CD   619 _TMR2H	=	0x00cd
                           0000CD   620 G$TMR3H$0$0 == 0x00cd
                           0000CD   621 _TMR3H	=	0x00cd
                           0000CD   622 G$TMR4H$0$0 == 0x00cd
                           0000CD   623 _TMR4H	=	0x00cd
                           0000CF   624 G$SMB0CR$0$0 == 0x00cf
                           0000CF   625 _SMB0CR	=	0x00cf
                           0000D0   626 G$PSW$0$0 == 0x00d0
                           0000D0   627 _PSW	=	0x00d0
                           0000D1   628 G$REF0CN$0$0 == 0x00d1
                           0000D1   629 _REF0CN	=	0x00d1
                           0000D2   630 G$DAC0L$0$0 == 0x00d2
                           0000D2   631 _DAC0L	=	0x00d2
                           0000D2   632 G$DAC1L$0$0 == 0x00d2
                           0000D2   633 _DAC1L	=	0x00d2
                           0000D3   634 G$DAC0H$0$0 == 0x00d3
                           0000D3   635 _DAC0H	=	0x00d3
                           0000D3   636 G$DAC1H$0$0 == 0x00d3
                           0000D3   637 _DAC1H	=	0x00d3
                           0000D4   638 G$DAC0CN$0$0 == 0x00d4
                           0000D4   639 _DAC0CN	=	0x00d4
                           0000D4   640 G$DAC1CN$0$0 == 0x00d4
                           0000D4   641 _DAC1CN	=	0x00d4
                           0000D6   642 G$HVA0CN$0$0 == 0x00d6
                           0000D6   643 _HVA0CN	=	0x00d6
                           0000D8   644 G$PCA0CN$0$0 == 0x00d8
                           0000D8   645 _PCA0CN	=	0x00d8
                           0000D8   646 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   647 _CAN0DATL	=	0x00d8
                           0000D8   648 G$P5$0$0 == 0x00d8
                           0000D8   649 _P5	=	0x00d8
                           0000D9   650 G$PCA0MD$0$0 == 0x00d9
                           0000D9   651 _PCA0MD	=	0x00d9
                           0000D9   652 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   653 _CAN0DATH	=	0x00d9
                           0000DA   654 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   655 _PCA0CPM0	=	0x00da
                           0000DA   656 G$CAN0ADR$0$0 == 0x00da
                           0000DA   657 _CAN0ADR	=	0x00da
                           0000DB   658 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   659 _PCA0CPM1	=	0x00db
                           0000DB   660 G$CAN0TST$0$0 == 0x00db
                           0000DB   661 _CAN0TST	=	0x00db
                           0000DC   662 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   663 _PCA0CPM2	=	0x00dc
                           0000DD   664 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   665 _PCA0CPM3	=	0x00dd
                           0000DE   666 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   667 _PCA0CPM4	=	0x00de
                           0000DF   668 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   669 _PCA0CPM5	=	0x00df
                           0000E0   670 G$ACC$0$0 == 0x00e0
                           0000E0   671 _ACC	=	0x00e0
                           0000E1   672 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   673 _PCA0CPL5	=	0x00e1
                           0000E1   674 G$XBR0$0$0 == 0x00e1
                           0000E1   675 _XBR0	=	0x00e1
                           0000E2   676 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   677 _PCA0CPH5	=	0x00e2
                           0000E2   678 G$XBR1$0$0 == 0x00e2
                           0000E2   679 _XBR1	=	0x00e2
                           0000E3   680 G$XBR2$0$0 == 0x00e3
                           0000E3   681 _XBR2	=	0x00e3
                           0000E4   682 G$XBR3$0$0 == 0x00e4
                           0000E4   683 _XBR3	=	0x00e4
                           0000E6   684 G$EIE1$0$0 == 0x00e6
                           0000E6   685 _EIE1	=	0x00e6
                           0000E7   686 G$EIE2$0$0 == 0x00e7
                           0000E7   687 _EIE2	=	0x00e7
                           0000E8   688 G$ADC0CN$0$0 == 0x00e8
                           0000E8   689 _ADC0CN	=	0x00e8
                           0000E8   690 G$ADC2CN$0$0 == 0x00e8
                           0000E8   691 _ADC2CN	=	0x00e8
                           0000E8   692 G$P6$0$0 == 0x00e8
                           0000E8   693 _P6	=	0x00e8
                           0000E9   694 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   695 _PCA0CPL2	=	0x00e9
                           0000EA   696 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   697 _PCA0CPH2	=	0x00ea
                           0000EB   698 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   699 _PCA0CPL3	=	0x00eb
                           0000EC   700 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   701 _PCA0CPH3	=	0x00ec
                           0000ED   702 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   703 _PCA0CPL4	=	0x00ed
                           0000EE   704 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   705 _PCA0CPH4	=	0x00ee
                           0000EF   706 G$RSTSRC$0$0 == 0x00ef
                           0000EF   707 _RSTSRC	=	0x00ef
                           0000F0   708 G$B$0$0 == 0x00f0
                           0000F0   709 _B	=	0x00f0
                           0000F6   710 G$EIP1$0$0 == 0x00f6
                           0000F6   711 _EIP1	=	0x00f6
                           0000F7   712 G$EIP2$0$0 == 0x00f7
                           0000F7   713 _EIP2	=	0x00f7
                           0000F8   714 G$SPI0CN$0$0 == 0x00f8
                           0000F8   715 _SPI0CN	=	0x00f8
                           0000F8   716 G$CAN0CN$0$0 == 0x00f8
                           0000F8   717 _CAN0CN	=	0x00f8
                           0000F8   718 G$P7$0$0 == 0x00f8
                           0000F8   719 _P7	=	0x00f8
                           0000F9   720 G$PCA0L$0$0 == 0x00f9
                           0000F9   721 _PCA0L	=	0x00f9
                           0000FA   722 G$PCA0H$0$0 == 0x00fa
                           0000FA   723 _PCA0H	=	0x00fa
                           0000FB   724 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   725 _PCA0CPL0	=	0x00fb
                           0000FC   726 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   727 _PCA0CPH0	=	0x00fc
                           0000FD   728 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   729 _PCA0CPL1	=	0x00fd
                           0000FE   730 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   731 _PCA0CPH1	=	0x00fe
                           0000FF   732 G$WDTCN$0$0 == 0x00ff
                           0000FF   733 _WDTCN	=	0x00ff
                           00FAF9   734 G$PCA0$0$0 == 0xfaf9
                           00FAF9   735 _PCA0	=	0xfaf9
                           00FCFB   736 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   737 _PCA0CP0	=	0xfcfb
                           00FEFD   738 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   739 _PCA0CP1	=	0xfefd
                           00EAE9   740 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   741 _PCA0CP2	=	0xeae9
                           00ECEB   742 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   743 _PCA0CP3	=	0xeceb
                           00EEED   744 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   745 _PCA0CP4	=	0xeeed
                           00E2E1   746 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   747 _PCA0CP5	=	0xe2e1
                           00D9D8   748 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   749 _CAN0DAT	=	0xd9d8
                           00D3D2   750 G$DAC0$0$0 == 0xd3d2
                           00D3D2   751 _DAC0	=	0xd3d2
                           00D3D2   752 G$DAC1$0$0 == 0xd3d2
                           00D3D2   753 _DAC1	=	0xd3d2
                           00CBCA   754 G$RCAP2$0$0 == 0xcbca
                           00CBCA   755 _RCAP2	=	0xcbca
                           00CBCA   756 G$RCAP3$0$0 == 0xcbca
                           00CBCA   757 _RCAP3	=	0xcbca
                           00CBCA   758 G$RCAP4$0$0 == 0xcbca
                           00CBCA   759 _RCAP4	=	0xcbca
                           00CDCC   760 G$TMR2$0$0 == 0xcdcc
                           00CDCC   761 _TMR2	=	0xcdcc
                           00CDCC   762 G$TMR3$0$0 == 0xcdcc
                           00CDCC   763 _TMR3	=	0xcdcc
                           00CDCC   764 G$TMR4$0$0 == 0xcdcc
                           00CDCC   765 _TMR4	=	0xcdcc
                           00C5C4   766 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   767 _ADC0GT	=	0xc5c4
                           00C7C6   768 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   769 _ADC0LT	=	0xc7c6
                           00BFBE   770 G$ADC0$0$0 == 0xbfbe
                           00BFBE   771 _ADC0	=	0xbfbe
                           008382   772 G$DP$0$0 == 0x8382
                           008382   773 _DP	=	0x8382
                           0000A2   774 G$_XPAGE$0$0 == 0x00a2
                           0000A2   775 __XPAGE	=	0x00a2
                                    776 ;--------------------------------------------------------
                                    777 ; special function bits
                                    778 ;--------------------------------------------------------
                                    779 	.area RSEG    (ABS,DATA)
      000000                        780 	.org 0x0000
                           00008F   781 G$TF1$0$0 == 0x008f
                           00008F   782 _TF1	=	0x008f
                           00008E   783 G$TR1$0$0 == 0x008e
                           00008E   784 _TR1	=	0x008e
                           00008D   785 G$TF0$0$0 == 0x008d
                           00008D   786 _TF0	=	0x008d
                           00008C   787 G$TR0$0$0 == 0x008c
                           00008C   788 _TR0	=	0x008c
                           00008B   789 G$IE1$0$0 == 0x008b
                           00008B   790 _IE1	=	0x008b
                           00008A   791 G$IT1$0$0 == 0x008a
                           00008A   792 _IT1	=	0x008a
                           000089   793 G$IE0$0$0 == 0x0089
                           000089   794 _IE0	=	0x0089
                           000088   795 G$IT0$0$0 == 0x0088
                           000088   796 _IT0	=	0x0088
                           00008F   797 G$CP0EN$0$0 == 0x008f
                           00008F   798 _CP0EN	=	0x008f
                           00008E   799 G$CP0OUT$0$0 == 0x008e
                           00008E   800 _CP0OUT	=	0x008e
                           00008D   801 G$CP0RIF$0$0 == 0x008d
                           00008D   802 _CP0RIF	=	0x008d
                           00008C   803 G$CP0FIF$0$0 == 0x008c
                           00008C   804 _CP0FIF	=	0x008c
                           00008B   805 G$CP0HYP1$0$0 == 0x008b
                           00008B   806 _CP0HYP1	=	0x008b
                           00008A   807 G$CP0HYP0$0$0 == 0x008a
                           00008A   808 _CP0HYP0	=	0x008a
                           000089   809 G$CP0HYN1$0$0 == 0x0089
                           000089   810 _CP0HYN1	=	0x0089
                           000088   811 G$CP0HYN0$0$0 == 0x0088
                           000088   812 _CP0HYN0	=	0x0088
                           00008F   813 G$CP1EN$0$0 == 0x008f
                           00008F   814 _CP1EN	=	0x008f
                           00008E   815 G$CP1OUT$0$0 == 0x008e
                           00008E   816 _CP1OUT	=	0x008e
                           00008D   817 G$CP1RIF$0$0 == 0x008d
                           00008D   818 _CP1RIF	=	0x008d
                           00008C   819 G$CP1FIF$0$0 == 0x008c
                           00008C   820 _CP1FIF	=	0x008c
                           00008B   821 G$CP1HYP1$0$0 == 0x008b
                           00008B   822 _CP1HYP1	=	0x008b
                           00008A   823 G$CP1HYP0$0$0 == 0x008a
                           00008A   824 _CP1HYP0	=	0x008a
                           000089   825 G$CP1HYN1$0$0 == 0x0089
                           000089   826 _CP1HYN1	=	0x0089
                           000088   827 G$CP1HYN0$0$0 == 0x0088
                           000088   828 _CP1HYN0	=	0x0088
                           00008F   829 G$CP2EN$0$0 == 0x008f
                           00008F   830 _CP2EN	=	0x008f
                           00008E   831 G$CP2OUT$0$0 == 0x008e
                           00008E   832 _CP2OUT	=	0x008e
                           00008D   833 G$CP2RIF$0$0 == 0x008d
                           00008D   834 _CP2RIF	=	0x008d
                           00008C   835 G$CP2FIF$0$0 == 0x008c
                           00008C   836 _CP2FIF	=	0x008c
                           00008B   837 G$CP2HYP1$0$0 == 0x008b
                           00008B   838 _CP2HYP1	=	0x008b
                           00008A   839 G$CP2HYP0$0$0 == 0x008a
                           00008A   840 _CP2HYP0	=	0x008a
                           000089   841 G$CP2HYN1$0$0 == 0x0089
                           000089   842 _CP2HYN1	=	0x0089
                           000088   843 G$CP2HYN0$0$0 == 0x0088
                           000088   844 _CP2HYN0	=	0x0088
                           00009F   845 G$SM00$0$0 == 0x009f
                           00009F   846 _SM00	=	0x009f
                           00009E   847 G$SM10$0$0 == 0x009e
                           00009E   848 _SM10	=	0x009e
                           00009D   849 G$SM20$0$0 == 0x009d
                           00009D   850 _SM20	=	0x009d
                           00009C   851 G$REN0$0$0 == 0x009c
                           00009C   852 _REN0	=	0x009c
                           00009B   853 G$TB80$0$0 == 0x009b
                           00009B   854 _TB80	=	0x009b
                           00009A   855 G$RB80$0$0 == 0x009a
                           00009A   856 _RB80	=	0x009a
                           000099   857 G$TI0$0$0 == 0x0099
                           000099   858 _TI0	=	0x0099
                           000098   859 G$RI0$0$0 == 0x0098
                           000098   860 _RI0	=	0x0098
                           00009F   861 G$S1MODE$0$0 == 0x009f
                           00009F   862 _S1MODE	=	0x009f
                           00009D   863 G$MCE1$0$0 == 0x009d
                           00009D   864 _MCE1	=	0x009d
                           00009C   865 G$REN1$0$0 == 0x009c
                           00009C   866 _REN1	=	0x009c
                           00009B   867 G$TB81$0$0 == 0x009b
                           00009B   868 _TB81	=	0x009b
                           00009A   869 G$RB81$0$0 == 0x009a
                           00009A   870 _RB81	=	0x009a
                           000099   871 G$TI1$0$0 == 0x0099
                           000099   872 _TI1	=	0x0099
                           000098   873 G$RI1$0$0 == 0x0098
                           000098   874 _RI1	=	0x0098
                           0000AF   875 G$EA$0$0 == 0x00af
                           0000AF   876 _EA	=	0x00af
                           0000AD   877 G$ET2$0$0 == 0x00ad
                           0000AD   878 _ET2	=	0x00ad
                           0000AC   879 G$ES0$0$0 == 0x00ac
                           0000AC   880 _ES0	=	0x00ac
                           0000AB   881 G$ET1$0$0 == 0x00ab
                           0000AB   882 _ET1	=	0x00ab
                           0000AA   883 G$EX1$0$0 == 0x00aa
                           0000AA   884 _EX1	=	0x00aa
                           0000A9   885 G$ET0$0$0 == 0x00a9
                           0000A9   886 _ET0	=	0x00a9
                           0000A8   887 G$EX0$0$0 == 0x00a8
                           0000A8   888 _EX0	=	0x00a8
                           0000BD   889 G$PT2$0$0 == 0x00bd
                           0000BD   890 _PT2	=	0x00bd
                           0000BC   891 G$PS0$0$0 == 0x00bc
                           0000BC   892 _PS0	=	0x00bc
                           0000BB   893 G$PT1$0$0 == 0x00bb
                           0000BB   894 _PT1	=	0x00bb
                           0000BA   895 G$PX1$0$0 == 0x00ba
                           0000BA   896 _PX1	=	0x00ba
                           0000B9   897 G$PT0$0$0 == 0x00b9
                           0000B9   898 _PT0	=	0x00b9
                           0000B8   899 G$PX0$0$0 == 0x00b8
                           0000B8   900 _PX0	=	0x00b8
                           0000C7   901 G$BUSY$0$0 == 0x00c7
                           0000C7   902 _BUSY	=	0x00c7
                           0000C6   903 G$ENSMB$0$0 == 0x00c6
                           0000C6   904 _ENSMB	=	0x00c6
                           0000C5   905 G$STA$0$0 == 0x00c5
                           0000C5   906 _STA	=	0x00c5
                           0000C4   907 G$STO$0$0 == 0x00c4
                           0000C4   908 _STO	=	0x00c4
                           0000C3   909 G$SI$0$0 == 0x00c3
                           0000C3   910 _SI	=	0x00c3
                           0000C2   911 G$AA$0$0 == 0x00c2
                           0000C2   912 _AA	=	0x00c2
                           0000C1   913 G$SMBFTE$0$0 == 0x00c1
                           0000C1   914 _SMBFTE	=	0x00c1
                           0000C0   915 G$SMBTOE$0$0 == 0x00c0
                           0000C0   916 _SMBTOE	=	0x00c0
                           0000C7   917 G$BOFF$0$0 == 0x00c7
                           0000C7   918 _BOFF	=	0x00c7
                           0000C6   919 G$EWARN$0$0 == 0x00c6
                           0000C6   920 _EWARN	=	0x00c6
                           0000C5   921 G$EPASS$0$0 == 0x00c5
                           0000C5   922 _EPASS	=	0x00c5
                           0000C4   923 G$RXOK$0$0 == 0x00c4
                           0000C4   924 _RXOK	=	0x00c4
                           0000C3   925 G$TXOK$0$0 == 0x00c3
                           0000C3   926 _TXOK	=	0x00c3
                           0000C2   927 G$LEC2$0$0 == 0x00c2
                           0000C2   928 _LEC2	=	0x00c2
                           0000C1   929 G$LEC1$0$0 == 0x00c1
                           0000C1   930 _LEC1	=	0x00c1
                           0000C0   931 G$LEC0$0$0 == 0x00c0
                           0000C0   932 _LEC0	=	0x00c0
                           0000CF   933 G$TF2$0$0 == 0x00cf
                           0000CF   934 _TF2	=	0x00cf
                           0000CE   935 G$EXF2$0$0 == 0x00ce
                           0000CE   936 _EXF2	=	0x00ce
                           0000CB   937 G$EXEN2$0$0 == 0x00cb
                           0000CB   938 _EXEN2	=	0x00cb
                           0000CA   939 G$TR2$0$0 == 0x00ca
                           0000CA   940 _TR2	=	0x00ca
                           0000C9   941 G$CT2$0$0 == 0x00c9
                           0000C9   942 _CT2	=	0x00c9
                           0000C8   943 G$CPRL2$0$0 == 0x00c8
                           0000C8   944 _CPRL2	=	0x00c8
                           0000CF   945 G$TF3$0$0 == 0x00cf
                           0000CF   946 _TF3	=	0x00cf
                           0000CE   947 G$EXF3$0$0 == 0x00ce
                           0000CE   948 _EXF3	=	0x00ce
                           0000CB   949 G$EXEN3$0$0 == 0x00cb
                           0000CB   950 _EXEN3	=	0x00cb
                           0000CA   951 G$TR3$0$0 == 0x00ca
                           0000CA   952 _TR3	=	0x00ca
                           0000C9   953 G$CT3$0$0 == 0x00c9
                           0000C9   954 _CT3	=	0x00c9
                           0000C8   955 G$CPRL3$0$0 == 0x00c8
                           0000C8   956 _CPRL3	=	0x00c8
                           0000CF   957 G$TF4$0$0 == 0x00cf
                           0000CF   958 _TF4	=	0x00cf
                           0000CE   959 G$EXF4$0$0 == 0x00ce
                           0000CE   960 _EXF4	=	0x00ce
                           0000CB   961 G$EXEN4$0$0 == 0x00cb
                           0000CB   962 _EXEN4	=	0x00cb
                           0000CA   963 G$TR4$0$0 == 0x00ca
                           0000CA   964 _TR4	=	0x00ca
                           0000C9   965 G$CT4$0$0 == 0x00c9
                           0000C9   966 _CT4	=	0x00c9
                           0000C8   967 G$CPRL4$0$0 == 0x00c8
                           0000C8   968 _CPRL4	=	0x00c8
                           0000D7   969 G$CY$0$0 == 0x00d7
                           0000D7   970 _CY	=	0x00d7
                           0000D6   971 G$AC$0$0 == 0x00d6
                           0000D6   972 _AC	=	0x00d6
                           0000D5   973 G$F0$0$0 == 0x00d5
                           0000D5   974 _F0	=	0x00d5
                           0000D4   975 G$RS1$0$0 == 0x00d4
                           0000D4   976 _RS1	=	0x00d4
                           0000D3   977 G$RS0$0$0 == 0x00d3
                           0000D3   978 _RS0	=	0x00d3
                           0000D2   979 G$OV$0$0 == 0x00d2
                           0000D2   980 _OV	=	0x00d2
                           0000D1   981 G$F1$0$0 == 0x00d1
                           0000D1   982 _F1	=	0x00d1
                           0000D0   983 G$P$0$0 == 0x00d0
                           0000D0   984 _P	=	0x00d0
                           0000DF   985 G$CF$0$0 == 0x00df
                           0000DF   986 _CF	=	0x00df
                           0000DE   987 G$CR$0$0 == 0x00de
                           0000DE   988 _CR	=	0x00de
                           0000DD   989 G$CCF5$0$0 == 0x00dd
                           0000DD   990 _CCF5	=	0x00dd
                           0000DC   991 G$CCF4$0$0 == 0x00dc
                           0000DC   992 _CCF4	=	0x00dc
                           0000DB   993 G$CCF3$0$0 == 0x00db
                           0000DB   994 _CCF3	=	0x00db
                           0000DA   995 G$CCF2$0$0 == 0x00da
                           0000DA   996 _CCF2	=	0x00da
                           0000D9   997 G$CCF1$0$0 == 0x00d9
                           0000D9   998 _CCF1	=	0x00d9
                           0000D8   999 G$CCF0$0$0 == 0x00d8
                           0000D8  1000 _CCF0	=	0x00d8
                           0000EF  1001 G$AD0EN$0$0 == 0x00ef
                           0000EF  1002 _AD0EN	=	0x00ef
                           0000EE  1003 G$AD0TM$0$0 == 0x00ee
                           0000EE  1004 _AD0TM	=	0x00ee
                           0000ED  1005 G$AD0INT$0$0 == 0x00ed
                           0000ED  1006 _AD0INT	=	0x00ed
                           0000EC  1007 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1008 _AD0BUSY	=	0x00ec
                           0000EB  1009 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1010 _AD0CM1	=	0x00eb
                           0000EA  1011 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1012 _AD0CM0	=	0x00ea
                           0000E9  1013 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1014 _AD0WINT	=	0x00e9
                           0000E8  1015 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1016 _AD0LJST	=	0x00e8
                           0000EF  1017 G$AD2EN$0$0 == 0x00ef
                           0000EF  1018 _AD2EN	=	0x00ef
                           0000EE  1019 G$AD2TM$0$0 == 0x00ee
                           0000EE  1020 _AD2TM	=	0x00ee
                           0000ED  1021 G$AD2INT$0$0 == 0x00ed
                           0000ED  1022 _AD2INT	=	0x00ed
                           0000EC  1023 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1024 _AD2BUSY	=	0x00ec
                           0000EB  1025 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1026 _AD2CM2	=	0x00eb
                           0000EA  1027 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1028 _AD2CM1	=	0x00ea
                           0000E9  1029 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1030 _AD2CM0	=	0x00e9
                           0000E8  1031 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1032 _AD2WINT	=	0x00e8
                           0000FF  1033 G$SPIF$0$0 == 0x00ff
                           0000FF  1034 _SPIF	=	0x00ff
                           0000FE  1035 G$WCOL$0$0 == 0x00fe
                           0000FE  1036 _WCOL	=	0x00fe
                           0000FD  1037 G$MODF$0$0 == 0x00fd
                           0000FD  1038 _MODF	=	0x00fd
                           0000FC  1039 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1040 _RXOVRN	=	0x00fc
                           0000FB  1041 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1042 _NSSMD1	=	0x00fb
                           0000FA  1043 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1044 _NSSMD0	=	0x00fa
                           0000F9  1045 G$TXBMT$0$0 == 0x00f9
                           0000F9  1046 _TXBMT	=	0x00f9
                           0000F8  1047 G$SPIEN$0$0 == 0x00f8
                           0000F8  1048 _SPIEN	=	0x00f8
                           0000F8  1049 G$CANINIT$0$0 == 0x00f8
                           0000F8  1050 _CANINIT	=	0x00f8
                           0000F9  1051 G$CANIE$0$0 == 0x00f9
                           0000F9  1052 _CANIE	=	0x00f9
                           0000FA  1053 G$CANSIE$0$0 == 0x00fa
                           0000FA  1054 _CANSIE	=	0x00fa
                           0000FB  1055 G$CANEIE$0$0 == 0x00fb
                           0000FB  1056 _CANEIE	=	0x00fb
                           0000FC  1057 G$CANIF$0$0 == 0x00fc
                           0000FC  1058 _CANIF	=	0x00fc
                           0000FD  1059 G$CANDAR$0$0 == 0x00fd
                           0000FD  1060 _CANDAR	=	0x00fd
                           0000FE  1061 G$CANCCE$0$0 == 0x00fe
                           0000FE  1062 _CANCCE	=	0x00fe
                           0000FF  1063 G$CANTEST$0$0 == 0x00ff
                           0000FF  1064 _CANTEST	=	0x00ff
                           000080  1065 G$P0_0$0$0 == 0x0080
                           000080  1066 _P0_0	=	0x0080
                           000081  1067 G$P0_1$0$0 == 0x0081
                           000081  1068 _P0_1	=	0x0081
                           000082  1069 G$P0_2$0$0 == 0x0082
                           000082  1070 _P0_2	=	0x0082
                           000083  1071 G$P0_3$0$0 == 0x0083
                           000083  1072 _P0_3	=	0x0083
                           000084  1073 G$P0_4$0$0 == 0x0084
                           000084  1074 _P0_4	=	0x0084
                           000085  1075 G$P0_5$0$0 == 0x0085
                           000085  1076 _P0_5	=	0x0085
                           000086  1077 G$P0_6$0$0 == 0x0086
                           000086  1078 _P0_6	=	0x0086
                           000087  1079 G$P0_7$0$0 == 0x0087
                           000087  1080 _P0_7	=	0x0087
                           000090  1081 G$P1_0$0$0 == 0x0090
                           000090  1082 _P1_0	=	0x0090
                           000091  1083 G$P1_1$0$0 == 0x0091
                           000091  1084 _P1_1	=	0x0091
                           000092  1085 G$P1_2$0$0 == 0x0092
                           000092  1086 _P1_2	=	0x0092
                           000093  1087 G$P1_3$0$0 == 0x0093
                           000093  1088 _P1_3	=	0x0093
                           000094  1089 G$P1_4$0$0 == 0x0094
                           000094  1090 _P1_4	=	0x0094
                           000095  1091 G$P1_5$0$0 == 0x0095
                           000095  1092 _P1_5	=	0x0095
                           000096  1093 G$P1_6$0$0 == 0x0096
                           000096  1094 _P1_6	=	0x0096
                           000097  1095 G$P1_7$0$0 == 0x0097
                           000097  1096 _P1_7	=	0x0097
                           0000A0  1097 G$P2_0$0$0 == 0x00a0
                           0000A0  1098 _P2_0	=	0x00a0
                           0000A1  1099 G$P2_1$0$0 == 0x00a1
                           0000A1  1100 _P2_1	=	0x00a1
                           0000A2  1101 G$P2_2$0$0 == 0x00a2
                           0000A2  1102 _P2_2	=	0x00a2
                           0000A3  1103 G$P2_3$0$0 == 0x00a3
                           0000A3  1104 _P2_3	=	0x00a3
                           0000A4  1105 G$P2_4$0$0 == 0x00a4
                           0000A4  1106 _P2_4	=	0x00a4
                           0000A5  1107 G$P2_5$0$0 == 0x00a5
                           0000A5  1108 _P2_5	=	0x00a5
                           0000A6  1109 G$P2_6$0$0 == 0x00a6
                           0000A6  1110 _P2_6	=	0x00a6
                           0000A7  1111 G$P2_7$0$0 == 0x00a7
                           0000A7  1112 _P2_7	=	0x00a7
                           0000B0  1113 G$P3_0$0$0 == 0x00b0
                           0000B0  1114 _P3_0	=	0x00b0
                           0000B1  1115 G$P3_1$0$0 == 0x00b1
                           0000B1  1116 _P3_1	=	0x00b1
                           0000B2  1117 G$P3_2$0$0 == 0x00b2
                           0000B2  1118 _P3_2	=	0x00b2
                           0000B3  1119 G$P3_3$0$0 == 0x00b3
                           0000B3  1120 _P3_3	=	0x00b3
                           0000B4  1121 G$P3_4$0$0 == 0x00b4
                           0000B4  1122 _P3_4	=	0x00b4
                           0000B5  1123 G$P3_5$0$0 == 0x00b5
                           0000B5  1124 _P3_5	=	0x00b5
                           0000B6  1125 G$P3_6$0$0 == 0x00b6
                           0000B6  1126 _P3_6	=	0x00b6
                           0000B7  1127 G$P3_7$0$0 == 0x00b7
                           0000B7  1128 _P3_7	=	0x00b7
                           0000C8  1129 G$P4_0$0$0 == 0x00c8
                           0000C8  1130 _P4_0	=	0x00c8
                           0000C9  1131 G$P4_1$0$0 == 0x00c9
                           0000C9  1132 _P4_1	=	0x00c9
                           0000CA  1133 G$P4_2$0$0 == 0x00ca
                           0000CA  1134 _P4_2	=	0x00ca
                           0000CB  1135 G$P4_3$0$0 == 0x00cb
                           0000CB  1136 _P4_3	=	0x00cb
                           0000CC  1137 G$P4_4$0$0 == 0x00cc
                           0000CC  1138 _P4_4	=	0x00cc
                           0000CD  1139 G$P4_5$0$0 == 0x00cd
                           0000CD  1140 _P4_5	=	0x00cd
                           0000CE  1141 G$P4_6$0$0 == 0x00ce
                           0000CE  1142 _P4_6	=	0x00ce
                           0000CF  1143 G$P4_7$0$0 == 0x00cf
                           0000CF  1144 _P4_7	=	0x00cf
                           0000D8  1145 G$P5_0$0$0 == 0x00d8
                           0000D8  1146 _P5_0	=	0x00d8
                           0000D9  1147 G$P5_1$0$0 == 0x00d9
                           0000D9  1148 _P5_1	=	0x00d9
                           0000DA  1149 G$P5_2$0$0 == 0x00da
                           0000DA  1150 _P5_2	=	0x00da
                           0000DB  1151 G$P5_3$0$0 == 0x00db
                           0000DB  1152 _P5_3	=	0x00db
                           0000DC  1153 G$P5_4$0$0 == 0x00dc
                           0000DC  1154 _P5_4	=	0x00dc
                           0000DD  1155 G$P5_5$0$0 == 0x00dd
                           0000DD  1156 _P5_5	=	0x00dd
                           0000DE  1157 G$P5_6$0$0 == 0x00de
                           0000DE  1158 _P5_6	=	0x00de
                           0000DF  1159 G$P5_7$0$0 == 0x00df
                           0000DF  1160 _P5_7	=	0x00df
                           0000E8  1161 G$P6_0$0$0 == 0x00e8
                           0000E8  1162 _P6_0	=	0x00e8
                           0000E9  1163 G$P6_1$0$0 == 0x00e9
                           0000E9  1164 _P6_1	=	0x00e9
                           0000EA  1165 G$P6_2$0$0 == 0x00ea
                           0000EA  1166 _P6_2	=	0x00ea
                           0000EB  1167 G$P6_3$0$0 == 0x00eb
                           0000EB  1168 _P6_3	=	0x00eb
                           0000EC  1169 G$P6_4$0$0 == 0x00ec
                           0000EC  1170 _P6_4	=	0x00ec
                           0000ED  1171 G$P6_5$0$0 == 0x00ed
                           0000ED  1172 _P6_5	=	0x00ed
                           0000EE  1173 G$P6_6$0$0 == 0x00ee
                           0000EE  1174 _P6_6	=	0x00ee
                           0000EF  1175 G$P6_7$0$0 == 0x00ef
                           0000EF  1176 _P6_7	=	0x00ef
                           0000F8  1177 G$P7_0$0$0 == 0x00f8
                           0000F8  1178 _P7_0	=	0x00f8
                           0000F9  1179 G$P7_1$0$0 == 0x00f9
                           0000F9  1180 _P7_1	=	0x00f9
                           0000FA  1181 G$P7_2$0$0 == 0x00fa
                           0000FA  1182 _P7_2	=	0x00fa
                           0000FB  1183 G$P7_3$0$0 == 0x00fb
                           0000FB  1184 _P7_3	=	0x00fb
                           0000FC  1185 G$P7_4$0$0 == 0x00fc
                           0000FC  1186 _P7_4	=	0x00fc
                           0000FD  1187 G$P7_5$0$0 == 0x00fd
                           0000FD  1188 _P7_5	=	0x00fd
                           0000FE  1189 G$P7_6$0$0 == 0x00fe
                           0000FE  1190 _P7_6	=	0x00fe
                           0000FF  1191 G$P7_7$0$0 == 0x00ff
                           0000FF  1192 _P7_7	=	0x00ff
                                   1193 ;--------------------------------------------------------
                                   1194 ; overlayable register banks
                                   1195 ;--------------------------------------------------------
                                   1196 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1197 	.ds 8
                                   1198 ;--------------------------------------------------------
                                   1199 ; overlayable bit register bank
                                   1200 ;--------------------------------------------------------
                                   1201 	.area BIT_BANK	(REL,OVR,DATA)
      000022                       1202 bits:
      000022                       1203 	.ds 1
                           008000  1204 	b0 = bits[0]
                           008100  1205 	b1 = bits[1]
                           008200  1206 	b2 = bits[2]
                           008300  1207 	b3 = bits[3]
                           008400  1208 	b4 = bits[4]
                           008500  1209 	b5 = bits[5]
                           008600  1210 	b6 = bits[6]
                           008700  1211 	b7 = bits[7]
                                   1212 ;--------------------------------------------------------
                                   1213 ; internal ram data
                                   1214 ;--------------------------------------------------------
                                   1215 	.area DSEG    (DATA)
                           000000  1216 Lmain.putchar$count$1$41==.
      000008                       1217 _putchar_count_1_41:
      000008                       1218 	.ds 1
                           000001  1219 G$cont_t$0$0==.
      000009                       1220 _cont_t::
      000009                       1221 	.ds 4
                                   1222 ;--------------------------------------------------------
                                   1223 ; overlayable items in internal ram 
                                   1224 ;--------------------------------------------------------
                                   1225 	.area	OSEG    (OVR,DATA)
                                   1226 	.area	OSEG    (OVR,DATA)
                                   1227 	.area	OSEG    (OVR,DATA)
                                   1228 	.area	OSEG    (OVR,DATA)
                                   1229 ;--------------------------------------------------------
                                   1230 ; Stack segment in internal ram 
                                   1231 ;--------------------------------------------------------
                                   1232 	.area	SSEG
      000023                       1233 __start__stack:
      000023                       1234 	.ds	1
                                   1235 
                                   1236 ;--------------------------------------------------------
                                   1237 ; indirectly addressable internal ram data
                                   1238 ;--------------------------------------------------------
                                   1239 	.area ISEG    (DATA)
                                   1240 ;--------------------------------------------------------
                                   1241 ; absolute internal ram data
                                   1242 ;--------------------------------------------------------
                                   1243 	.area IABS    (ABS,DATA)
                                   1244 	.area IABS    (ABS,DATA)
                                   1245 ;--------------------------------------------------------
                                   1246 ; bit data
                                   1247 ;--------------------------------------------------------
                                   1248 	.area BSEG    (BIT)
                           000000  1249 Lmain.le_glcd$cd$1$27==.
      000000                       1250 _le_glcd_PARM_1:
      000000                       1251 	.ds 1
                           000001  1252 Lmain.le_glcd$cs$1$27==.
      000001                       1253 _le_glcd_PARM_2:
      000001                       1254 	.ds 1
                           000002  1255 Lmain.esc_glcd$cd$1$29==.
      000002                       1256 _esc_glcd_PARM_2:
      000002                       1257 	.ds 1
                           000003  1258 Lmain.esc_glcd$cs$1$29==.
      000003                       1259 _esc_glcd_PARM_3:
      000003                       1260 	.ds 1
                           000004  1261 Lmain.conf_Y$cs$1$33==.
      000004                       1262 _conf_Y_PARM_2:
      000004                       1263 	.ds 1
                           000005  1264 Lmain.conf_pag$cs$1$35==.
      000005                       1265 _conf_pag_PARM_2:
      000005                       1266 	.ds 1
                           000006  1267 Lmain.limpa_glcd$cs$1$37==.
      000006                       1268 _limpa_glcd_PARM_1:
      000006                       1269 	.ds 1
                           000007  1270 Lmain.putchar$sloc0$1$0==.
      000007                       1271 _putchar_sloc0_1_0:
      000007                       1272 	.ds 1
                                   1273 ;--------------------------------------------------------
                                   1274 ; paged external ram data
                                   1275 ;--------------------------------------------------------
                                   1276 	.area PSEG    (PAG,XDATA)
                                   1277 ;--------------------------------------------------------
                                   1278 ; external ram data
                                   1279 ;--------------------------------------------------------
                                   1280 	.area XSEG    (XDATA)
                                   1281 ;--------------------------------------------------------
                                   1282 ; absolute external ram data
                                   1283 ;--------------------------------------------------------
                                   1284 	.area XABS    (ABS,XDATA)
                                   1285 ;--------------------------------------------------------
                                   1286 ; external initialized ram data
                                   1287 ;--------------------------------------------------------
                                   1288 	.area XISEG   (XDATA)
                                   1289 	.area HOME    (CODE)
                                   1290 	.area GSINIT0 (CODE)
                                   1291 	.area GSINIT1 (CODE)
                                   1292 	.area GSINIT2 (CODE)
                                   1293 	.area GSINIT3 (CODE)
                                   1294 	.area GSINIT4 (CODE)
                                   1295 	.area GSINIT5 (CODE)
                                   1296 	.area GSINIT  (CODE)
                                   1297 	.area GSFINAL (CODE)
                                   1298 	.area CSEG    (CODE)
                                   1299 ;--------------------------------------------------------
                                   1300 ; interrupt vector 
                                   1301 ;--------------------------------------------------------
                                   1302 	.area HOME    (CODE)
      000000                       1303 __interrupt_vect:
      000000 02 00 21         [24] 1304 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1305 	reti
      000004                       1306 	.ds	7
      00000B 32               [24] 1307 	reti
      00000C                       1308 	.ds	7
      000013 32               [24] 1309 	reti
      000014                       1310 	.ds	7
      00001B 02 03 EA         [24] 1311 	ljmp	_int_tc1
                                   1312 ;--------------------------------------------------------
                                   1313 ; global & static initialisations
                                   1314 ;--------------------------------------------------------
                                   1315 	.area HOME    (CODE)
                                   1316 	.area GSINIT  (CODE)
                                   1317 	.area GSFINAL (CODE)
                                   1318 	.area GSINIT  (CODE)
                                   1319 	.globl __sdcc_gsinit_startup
                                   1320 	.globl __sdcc_program_startup
                                   1321 	.globl __start__stack
                                   1322 	.globl __mcs51_genXINIT
                                   1323 	.globl __mcs51_genXRAMCLEAR
                                   1324 	.globl __mcs51_genRAMCLEAR
                           000000  1325 	C$main.c$277$1$49 ==.
                                   1326 ;	Z:\MICAP\pulsos largura hcsr04\main.c:277: volatile float cont_t = 0;
      00007A E4               [12] 1327 	clr	a
      00007B F5 09            [12] 1328 	mov	_cont_t,a
      00007D F5 0A            [12] 1329 	mov	(_cont_t + 1),a
      00007F F5 0B            [12] 1330 	mov	(_cont_t + 2),a
      000081 F5 0C            [12] 1331 	mov	(_cont_t + 3),a
                                   1332 	.area GSFINAL (CODE)
      000083 02 00 1E         [24] 1333 	ljmp	__sdcc_program_startup
                                   1334 ;--------------------------------------------------------
                                   1335 ; Home
                                   1336 ;--------------------------------------------------------
                                   1337 	.area HOME    (CODE)
                                   1338 	.area HOME    (CODE)
      00001E                       1339 __sdcc_program_startup:
      00001E 02 04 BE         [24] 1340 	ljmp	_main
                                   1341 ;	return from main will return to caller
                                   1342 ;--------------------------------------------------------
                                   1343 ; code
                                   1344 ;--------------------------------------------------------
                                   1345 	.area CSEG    (CODE)
                                   1346 ;------------------------------------------------------------
                                   1347 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1348 ;------------------------------------------------------------
                           000000  1349 	G$Reset_Sources_Init$0$0 ==.
                           000000  1350 	C$config.c$10$0$0 ==.
                                   1351 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:10: void Reset_Sources_Init()
                                   1352 ;	-----------------------------------------
                                   1353 ;	 function Reset_Sources_Init
                                   1354 ;	-----------------------------------------
      000086                       1355 _Reset_Sources_Init:
                           000007  1356 	ar7 = 0x07
                           000006  1357 	ar6 = 0x06
                           000005  1358 	ar5 = 0x05
                           000004  1359 	ar4 = 0x04
                           000003  1360 	ar3 = 0x03
                           000002  1361 	ar2 = 0x02
                           000001  1362 	ar1 = 0x01
                           000000  1363 	ar0 = 0x00
                           000000  1364 	C$config.c$12$1$1 ==.
                                   1365 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:12: WDTCN     = 0xDE;
      000086 75 FF DE         [24] 1366 	mov	_WDTCN,#0xde
                           000003  1367 	C$config.c$13$1$1 ==.
                                   1368 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:13: WDTCN     = 0xAD;
      000089 75 FF AD         [24] 1369 	mov	_WDTCN,#0xad
                           000006  1370 	C$config.c$14$1$1 ==.
                           000006  1371 	XG$Reset_Sources_Init$0$0 ==.
      00008C 22               [24] 1372 	ret
                                   1373 ;------------------------------------------------------------
                                   1374 ;Allocation info for local variables in function 'Timer_Init'
                                   1375 ;------------------------------------------------------------
                           000007  1376 	G$Timer_Init$0$0 ==.
                           000007  1377 	C$config.c$16$1$1 ==.
                                   1378 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:16: void Timer_Init()
                                   1379 ;	-----------------------------------------
                                   1380 ;	 function Timer_Init
                                   1381 ;	-----------------------------------------
      00008D                       1382 _Timer_Init:
                           000007  1383 	C$config.c$18$1$2 ==.
                                   1384 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      00008D 75 84 00         [24] 1385 	mov	_SFRPAGE,#0x00
                           00000A  1386 	C$config.c$19$1$2 ==.
                                   1387 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:19: TCON      = 0x05;
      000090 75 88 05         [24] 1388 	mov	_TCON,#0x05
                           00000D  1389 	C$config.c$20$1$2 ==.
                                   1390 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:20: TMOD      = 0x91;
      000093 75 89 91         [24] 1391 	mov	_TMOD,#0x91
                           000010  1392 	C$config.c$21$1$2 ==.
                                   1393 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:21: CKCON     = 0x18;
      000096 75 8E 18         [24] 1394 	mov	_CKCON,#0x18
                           000013  1395 	C$config.c$22$1$2 ==.
                                   1396 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:22: SFRPAGE   = TMR2_PAGE;
      000099 75 84 00         [24] 1397 	mov	_SFRPAGE,#0x00
                           000016  1398 	C$config.c$23$1$2 ==.
                                   1399 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:23: TMR2CN    = 0x04;
      00009C 75 C8 04         [24] 1400 	mov	_TMR2CN,#0x04
                           000019  1401 	C$config.c$24$1$2 ==.
                                   1402 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:24: TMR2CF    = 0x02;
      00009F 75 C9 02         [24] 1403 	mov	_TMR2CF,#0x02
                           00001C  1404 	C$config.c$25$1$2 ==.
                                   1405 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:25: RCAP2L    = 0x3D;
      0000A2 75 CA 3D         [24] 1406 	mov	_RCAP2L,#0x3d
                           00001F  1407 	C$config.c$26$1$2 ==.
                                   1408 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:26: RCAP2H    = 0x5D;
      0000A5 75 CB 5D         [24] 1409 	mov	_RCAP2H,#0x5d
                           000022  1410 	C$config.c$27$1$2 ==.
                           000022  1411 	XG$Timer_Init$0$0 ==.
      0000A8 22               [24] 1412 	ret
                                   1413 ;------------------------------------------------------------
                                   1414 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1415 ;------------------------------------------------------------
                           000023  1416 	G$Port_IO_Init$0$0 ==.
                           000023  1417 	C$config.c$29$1$2 ==.
                                   1418 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:29: void Port_IO_Init()
                                   1419 ;	-----------------------------------------
                                   1420 ;	 function Port_IO_Init
                                   1421 ;	-----------------------------------------
      0000A9                       1422 _Port_IO_Init:
                           000023  1423 	C$config.c$67$1$3 ==.
                                   1424 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:67: SFRPAGE   = CONFIG_PAGE;
      0000A9 75 84 0F         [24] 1425 	mov	_SFRPAGE,#0x0f
                           000026  1426 	C$config.c$68$1$3 ==.
                                   1427 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:68: P0MDOUT   = 0x02;
      0000AC 75 A4 02         [24] 1428 	mov	_P0MDOUT,#0x02
                           000029  1429 	C$config.c$69$1$3 ==.
                                   1430 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:69: XBR1      = 0x10;
      0000AF 75 E2 10         [24] 1431 	mov	_XBR1,#0x10
                           00002C  1432 	C$config.c$70$1$3 ==.
                                   1433 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:70: XBR2      = 0x40;
      0000B2 75 E3 40         [24] 1434 	mov	_XBR2,#0x40
                           00002F  1435 	C$config.c$71$1$3 ==.
                           00002F  1436 	XG$Port_IO_Init$0$0 ==.
      0000B5 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1440 ;------------------------------------------------------------
                                   1441 ;i                         Allocated to registers r6 r7 
                                   1442 ;------------------------------------------------------------
                           000030  1443 	G$Oscillator_Init$0$0 ==.
                           000030  1444 	C$config.c$73$1$3 ==.
                                   1445 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:73: void Oscillator_Init()
                                   1446 ;	-----------------------------------------
                                   1447 ;	 function Oscillator_Init
                                   1448 ;	-----------------------------------------
      0000B6                       1449 _Oscillator_Init:
                           000030  1450 	C$config.c$76$1$4 ==.
                                   1451 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:76: SFRPAGE   = CONFIG_PAGE;
      0000B6 75 84 0F         [24] 1452 	mov	_SFRPAGE,#0x0f
                           000033  1453 	C$config.c$77$1$4 ==.
                                   1454 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:77: OSCXCN    = 0x67;
      0000B9 75 8C 67         [24] 1455 	mov	_OSCXCN,#0x67
                           000036  1456 	C$config.c$78$1$4 ==.
                                   1457 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:78: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      0000BC 7E B8            [12] 1458 	mov	r6,#0xb8
      0000BE 7F 0B            [12] 1459 	mov	r7,#0x0b
      0000C0                       1460 00107$:
      0000C0 EE               [12] 1461 	mov	a,r6
      0000C1 24 FF            [12] 1462 	add	a,#0xff
      0000C3 FC               [12] 1463 	mov	r4,a
      0000C4 EF               [12] 1464 	mov	a,r7
      0000C5 34 FF            [12] 1465 	addc	a,#0xff
      0000C7 FD               [12] 1466 	mov	r5,a
      0000C8 8C 06            [24] 1467 	mov	ar6,r4
      0000CA 8D 07            [24] 1468 	mov	ar7,r5
      0000CC EC               [12] 1469 	mov	a,r4
      0000CD 4D               [12] 1470 	orl	a,r5
      0000CE 70 F0            [24] 1471 	jnz	00107$
                           00004A  1472 	C$config.c$79$1$4 ==.
                                   1473 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:79: while ((OSCXCN & 0x80) == 0);
      0000D0                       1474 00102$:
      0000D0 E5 8C            [12] 1475 	mov	a,_OSCXCN
      0000D2 30 E7 FB         [24] 1476 	jnb	acc.7,00102$
                           00004F  1477 	C$config.c$80$1$4 ==.
                                   1478 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:80: CLKSEL    = 0x01;
      0000D5 75 97 01         [24] 1479 	mov	_CLKSEL,#0x01
                           000052  1480 	C$config.c$81$1$4 ==.
                           000052  1481 	XG$Oscillator_Init$0$0 ==.
      0000D8 22               [24] 1482 	ret
                                   1483 ;------------------------------------------------------------
                                   1484 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1485 ;------------------------------------------------------------
                           000053  1486 	G$Interrupts_Init$0$0 ==.
                           000053  1487 	C$config.c$83$1$4 ==.
                                   1488 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:83: void Interrupts_Init()
                                   1489 ;	-----------------------------------------
                                   1490 ;	 function Interrupts_Init
                                   1491 ;	-----------------------------------------
      0000D9                       1492 _Interrupts_Init:
                           000053  1493 	C$config.c$85$1$5 ==.
                                   1494 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:85: IE        = 0x88;
      0000D9 75 A8 88         [24] 1495 	mov	_IE,#0x88
                           000056  1496 	C$config.c$86$1$5 ==.
                           000056  1497 	XG$Interrupts_Init$0$0 ==.
      0000DC 22               [24] 1498 	ret
                                   1499 ;------------------------------------------------------------
                                   1500 ;Allocation info for local variables in function 'Init_Device'
                                   1501 ;------------------------------------------------------------
                           000057  1502 	G$Init_Device$0$0 ==.
                           000057  1503 	C$config.c$90$1$5 ==.
                                   1504 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:90: void Init_Device(void)
                                   1505 ;	-----------------------------------------
                                   1506 ;	 function Init_Device
                                   1507 ;	-----------------------------------------
      0000DD                       1508 _Init_Device:
                           000057  1509 	C$config.c$92$1$7 ==.
                                   1510 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:92: Reset_Sources_Init();
      0000DD 12 00 86         [24] 1511 	lcall	_Reset_Sources_Init
                           00005A  1512 	C$config.c$93$1$7 ==.
                                   1513 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:93: Timer_Init();
      0000E0 12 00 8D         [24] 1514 	lcall	_Timer_Init
                           00005D  1515 	C$config.c$94$1$7 ==.
                                   1516 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:94: Port_IO_Init();
      0000E3 12 00 A9         [24] 1517 	lcall	_Port_IO_Init
                           000060  1518 	C$config.c$95$1$7 ==.
                                   1519 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:95: Oscillator_Init();
      0000E6 12 00 B6         [24] 1520 	lcall	_Oscillator_Init
                           000063  1521 	C$config.c$96$1$7 ==.
                                   1522 ;	Z:\MICAP\pulsos largura hcsr04\/config.c:96: Interrupts_Init();
      0000E9 12 00 D9         [24] 1523 	lcall	_Interrupts_Init
                           000066  1524 	C$config.c$97$1$7 ==.
                           000066  1525 	XG$Init_Device$0$0 ==.
      0000EC 22               [24] 1526 	ret
                                   1527 ;------------------------------------------------------------
                                   1528 ;Allocation info for local variables in function 'delay_ms'
                                   1529 ;------------------------------------------------------------
                                   1530 ;t                         Allocated to registers r6 r7 
                                   1531 ;------------------------------------------------------------
                           000067  1532 	G$delay_ms$0$0 ==.
                           000067  1533 	C$main.c$24$1$7 ==.
                                   1534 ;	Z:\MICAP\pulsos largura hcsr04\main.c:24: void delay_ms(unsigned int t)
                                   1535 ;	-----------------------------------------
                                   1536 ;	 function delay_ms
                                   1537 ;	-----------------------------------------
      0000ED                       1538 _delay_ms:
      0000ED AE 82            [24] 1539 	mov	r6,dpl
      0000EF AF 83            [24] 1540 	mov	r7,dph
                           00006B  1541 	C$main.c$26$1$22 ==.
                                   1542 ;	Z:\MICAP\pulsos largura hcsr04\main.c:26: TMOD &= 0xFC;
      0000F1 53 89 FC         [24] 1543 	anl	_TMOD,#0xfc
                           00006E  1544 	C$main.c$27$1$22 ==.
                                   1545 ;	Z:\MICAP\pulsos largura hcsr04\main.c:27: TMOD |= 0x01;
      0000F4 43 89 01         [24] 1546 	orl	_TMOD,#0x01
                           000071  1547 	C$main.c$29$1$22 ==.
                                   1548 ;	Z:\MICAP\pulsos largura hcsr04\main.c:29: while(t--)
      0000F7                       1549 00104$:
      0000F7 8E 04            [24] 1550 	mov	ar4,r6
      0000F9 8F 05            [24] 1551 	mov	ar5,r7
      0000FB 1E               [12] 1552 	dec	r6
      0000FC BE FF 01         [24] 1553 	cjne	r6,#0xff,00122$
      0000FF 1F               [12] 1554 	dec	r7
      000100                       1555 00122$:
      000100 EC               [12] 1556 	mov	a,r4
      000101 4D               [12] 1557 	orl	a,r5
      000102 60 11            [24] 1558 	jz	00107$
                           00007E  1559 	C$main.c$31$2$23 ==.
                                   1560 ;	Z:\MICAP\pulsos largura hcsr04\main.c:31: TR0 = 0;
      000104 C2 8C            [12] 1561 	clr	_TR0
                           000080  1562 	C$main.c$32$2$23 ==.
                                   1563 ;	Z:\MICAP\pulsos largura hcsr04\main.c:32: TF0 = 0;
      000106 C2 8D            [12] 1564 	clr	_TF0
                           000082  1565 	C$main.c$33$2$23 ==.
                                   1566 ;	Z:\MICAP\pulsos largura hcsr04\main.c:33: TL0 = 0x58;
      000108 75 8A 58         [24] 1567 	mov	_TL0,#0x58
                           000085  1568 	C$main.c$34$2$23 ==.
                                   1569 ;	Z:\MICAP\pulsos largura hcsr04\main.c:34: TH0 = 0x9E;
      00010B 75 8C 9E         [24] 1570 	mov	_TH0,#0x9e
                           000088  1571 	C$main.c$35$2$23 ==.
                                   1572 ;	Z:\MICAP\pulsos largura hcsr04\main.c:35: TR0 = 1;
      00010E D2 8C            [12] 1573 	setb	_TR0
                           00008A  1574 	C$main.c$37$2$23 ==.
                                   1575 ;	Z:\MICAP\pulsos largura hcsr04\main.c:37: while (TF0 != 1);
      000110                       1576 00101$:
      000110 20 8D E4         [24] 1577 	jb	_TF0,00104$
      000113 80 FB            [24] 1578 	sjmp	00101$
      000115                       1579 00107$:
                           00008F  1580 	C$main.c$39$1$22 ==.
                           00008F  1581 	XG$delay_ms$0$0 ==.
      000115 22               [24] 1582 	ret
                                   1583 ;------------------------------------------------------------
                                   1584 ;Allocation info for local variables in function 'delay_us'
                                   1585 ;------------------------------------------------------------
                                   1586 ;t                         Allocated to registers r6 r7 
                                   1587 ;------------------------------------------------------------
                           000090  1588 	G$delay_us$0$0 ==.
                           000090  1589 	C$main.c$42$1$22 ==.
                                   1590 ;	Z:\MICAP\pulsos largura hcsr04\main.c:42: void delay_us(unsigned int t)
                                   1591 ;	-----------------------------------------
                                   1592 ;	 function delay_us
                                   1593 ;	-----------------------------------------
      000116                       1594 _delay_us:
      000116 AE 82            [24] 1595 	mov	r6,dpl
      000118 AF 83            [24] 1596 	mov	r7,dph
                           000094  1597 	C$main.c$44$1$25 ==.
                                   1598 ;	Z:\MICAP\pulsos largura hcsr04\main.c:44: TR0 = 0;
      00011A C2 8C            [12] 1599 	clr	_TR0
                           000096  1600 	C$main.c$45$1$25 ==.
                                   1601 ;	Z:\MICAP\pulsos largura hcsr04\main.c:45: TF0 = 0;
      00011C C2 8D            [12] 1602 	clr	_TF0
                           000098  1603 	C$main.c$46$1$25 ==.
                                   1604 ;	Z:\MICAP\pulsos largura hcsr04\main.c:46: TMOD &= 0xFC;
      00011E 53 89 FC         [24] 1605 	anl	_TMOD,#0xfc
                           00009B  1606 	C$main.c$47$1$25 ==.
                                   1607 ;	Z:\MICAP\pulsos largura hcsr04\main.c:47: TMOD |= 0x02;
      000121 43 89 02         [24] 1608 	orl	_TMOD,#0x02
                           00009E  1609 	C$main.c$48$1$25 ==.
                                   1610 ;	Z:\MICAP\pulsos largura hcsr04\main.c:48: TL0 = 0xE7;
      000124 75 8A E7         [24] 1611 	mov	_TL0,#0xe7
                           0000A1  1612 	C$main.c$49$1$25 ==.
                                   1613 ;	Z:\MICAP\pulsos largura hcsr04\main.c:49: TH0 = 0xE7;
      000127 75 8C E7         [24] 1614 	mov	_TH0,#0xe7
                           0000A4  1615 	C$main.c$50$1$25 ==.
                                   1616 ;	Z:\MICAP\pulsos largura hcsr04\main.c:50: TR0 = 1;
      00012A D2 8C            [12] 1617 	setb	_TR0
                           0000A6  1618 	C$main.c$52$1$25 ==.
                                   1619 ;	Z:\MICAP\pulsos largura hcsr04\main.c:52: while(t--)
      00012C                       1620 00104$:
      00012C 8E 04            [24] 1621 	mov	ar4,r6
      00012E 8F 05            [24] 1622 	mov	ar5,r7
      000130 1E               [12] 1623 	dec	r6
      000131 BE FF 01         [24] 1624 	cjne	r6,#0xff,00119$
      000134 1F               [12] 1625 	dec	r7
      000135                       1626 00119$:
      000135 EC               [12] 1627 	mov	a,r4
      000136 4D               [12] 1628 	orl	a,r5
      000137 60 05            [24] 1629 	jz	00107$
                           0000B3  1630 	C$main.c$54$2$26 ==.
                                   1631 ;	Z:\MICAP\pulsos largura hcsr04\main.c:54: while (TF0 != 1);
      000139                       1632 00101$:
                           0000B3  1633 	C$main.c$55$2$26 ==.
                                   1634 ;	Z:\MICAP\pulsos largura hcsr04\main.c:55: TF0 = 0;
      000139 10 8D F0         [24] 1635 	jbc	_TF0,00104$
      00013C 80 FB            [24] 1636 	sjmp	00101$
      00013E                       1637 00107$:
                           0000B8  1638 	C$main.c$57$1$25 ==.
                           0000B8  1639 	XG$delay_us$0$0 ==.
      00013E 22               [24] 1640 	ret
                                   1641 ;------------------------------------------------------------
                                   1642 ;Allocation info for local variables in function 'le_glcd'
                                   1643 ;------------------------------------------------------------
                                   1644 ;byte                      Allocated to registers 
                                   1645 ;------------------------------------------------------------
                           0000B9  1646 	G$le_glcd$0$0 ==.
                           0000B9  1647 	C$main.c$158$1$25 ==.
                                   1648 ;	Z:\MICAP\pulsos largura hcsr04\main.c:158: unsigned char le_glcd(__bit cd, __bit cs)
                                   1649 ;	-----------------------------------------
                                   1650 ;	 function le_glcd
                                   1651 ;	-----------------------------------------
      00013F                       1652 _le_glcd:
                           0000B9  1653 	C$main.c$161$1$28 ==.
                                   1654 ;	Z:\MICAP\pulsos largura hcsr04\main.c:161: RW = 1;
      00013F D2 A3            [12] 1655 	setb	_P2_3
                           0000BB  1656 	C$main.c$162$1$28 ==.
                                   1657 ;	Z:\MICAP\pulsos largura hcsr04\main.c:162: CS1 = cs;
      000141 A2 01            [12] 1658 	mov	c,_le_glcd_PARM_2
      000143 92 A0            [24] 1659 	mov	_P2_0,c
                           0000BF  1660 	C$main.c$163$1$28 ==.
                                   1661 ;	Z:\MICAP\pulsos largura hcsr04\main.c:163: CS2 = !cs;
      000145 A2 01            [12] 1662 	mov	c,_le_glcd_PARM_2
      000147 B3               [12] 1663 	cpl	c
      000148 92 A1            [24] 1664 	mov	_P2_1,c
                           0000C4  1665 	C$main.c$164$1$28 ==.
                                   1666 ;	Z:\MICAP\pulsos largura hcsr04\main.c:164: RS = cd;
      00014A A2 00            [12] 1667 	mov	c,_le_glcd_PARM_1
      00014C 92 A2            [24] 1668 	mov	_P2_2,c
                           0000C8  1669 	C$main.c$165$1$28 ==.
                                   1670 ;	Z:\MICAP\pulsos largura hcsr04\main.c:165: NOP4();
      00014E 00               [12] 1671 	NOP	
      00014F 00               [12] 1672 	NOP	
      000150 00               [12] 1673 	NOP	
      000151 00               [12] 1674 	NOP	
                           0000CC  1675 	C$main.c$166$1$28 ==.
                                   1676 ;	Z:\MICAP\pulsos largura hcsr04\main.c:166: E = 1;
      000152 D2 A4            [12] 1677 	setb	_P2_4
                           0000CE  1678 	C$main.c$167$1$28 ==.
                                   1679 ;	Z:\MICAP\pulsos largura hcsr04\main.c:167: NOP8();
      000154 00               [12] 1680 	NOP	
      000155 00               [12] 1681 	NOP	
      000156 00               [12] 1682 	NOP	
      000157 00               [12] 1683 	NOP	
      000158 00               [12] 1684 	NOP	
      000159 00               [12] 1685 	NOP	
      00015A 00               [12] 1686 	NOP	
      00015B 00               [12] 1687 	NOP	
                           0000D6  1688 	C$main.c$168$1$28 ==.
                                   1689 ;	Z:\MICAP\pulsos largura hcsr04\main.c:168: SFRPAGE = CONFIG_PAGE;
      00015C 75 84 0F         [24] 1690 	mov	_SFRPAGE,#0x0f
                           0000D9  1691 	C$main.c$169$1$28 ==.
                                   1692 ;	Z:\MICAP\pulsos largura hcsr04\main.c:169: byte = DB;
      00015F 85 C8 82         [24] 1693 	mov	dpl,_P4
                           0000DC  1694 	C$main.c$170$1$28 ==.
                                   1695 ;	Z:\MICAP\pulsos largura hcsr04\main.c:170: SFRPAGE = LEGACY_PAGE;
      000162 75 84 00         [24] 1696 	mov	_SFRPAGE,#0x00
                           0000DF  1697 	C$main.c$171$1$28 ==.
                                   1698 ;	Z:\MICAP\pulsos largura hcsr04\main.c:171: NOP4();
      000165 00               [12] 1699 	NOP	
      000166 00               [12] 1700 	NOP	
      000167 00               [12] 1701 	NOP	
      000168 00               [12] 1702 	NOP	
                           0000E3  1703 	C$main.c$172$1$28 ==.
                                   1704 ;	Z:\MICAP\pulsos largura hcsr04\main.c:172: E = 0;
      000169 C2 A4            [12] 1705 	clr	_P2_4
                           0000E5  1706 	C$main.c$173$1$28 ==.
                                   1707 ;	Z:\MICAP\pulsos largura hcsr04\main.c:173: NOP12();
      00016B 00               [12] 1708 	NOP	
      00016C 00               [12] 1709 	NOP	
      00016D 00               [12] 1710 	NOP	
      00016E 00               [12] 1711 	NOP	
      00016F 00               [12] 1712 	NOP	
      000170 00               [12] 1713 	NOP	
      000171 00               [12] 1714 	NOP	
      000172 00               [12] 1715 	NOP	
      000173 00               [12] 1716 	NOP	
      000174 00               [12] 1717 	NOP	
      000175 00               [12] 1718 	NOP	
      000176 00               [12] 1719 	NOP	
                           0000F1  1720 	C$main.c$174$1$28 ==.
                                   1721 ;	Z:\MICAP\pulsos largura hcsr04\main.c:174: return(byte);
                           0000F1  1722 	C$main.c$175$1$28 ==.
                           0000F1  1723 	XG$le_glcd$0$0 ==.
      000177 22               [24] 1724 	ret
                                   1725 ;------------------------------------------------------------
                                   1726 ;Allocation info for local variables in function 'esc_glcd'
                                   1727 ;------------------------------------------------------------
                                   1728 ;byte                      Allocated to registers r7 
                                   1729 ;------------------------------------------------------------
                           0000F2  1730 	G$esc_glcd$0$0 ==.
                           0000F2  1731 	C$main.c$177$1$28 ==.
                                   1732 ;	Z:\MICAP\pulsos largura hcsr04\main.c:177: void esc_glcd(unsigned char byte, __bit cd, __bit cs)
                                   1733 ;	-----------------------------------------
                                   1734 ;	 function esc_glcd
                                   1735 ;	-----------------------------------------
      000178                       1736 _esc_glcd:
      000178 AF 82            [24] 1737 	mov	r7,dpl
                           0000F4  1738 	C$main.c$179$1$30 ==.
                                   1739 ;	Z:\MICAP\pulsos largura hcsr04\main.c:179: while (le_glcd(CO,cs) & 0x80);
      00017A                       1740 00101$:
      00017A C2 00            [12] 1741 	clr	_le_glcd_PARM_1
      00017C A2 03            [12] 1742 	mov	c,_esc_glcd_PARM_3
      00017E 92 01            [24] 1743 	mov	_le_glcd_PARM_2,c
      000180 C0 07            [24] 1744 	push	ar7
      000182 12 01 3F         [24] 1745 	lcall	_le_glcd
      000185 E5 82            [12] 1746 	mov	a,dpl
      000187 D0 07            [24] 1747 	pop	ar7
      000189 20 E7 EE         [24] 1748 	jb	acc.7,00101$
                           000106  1749 	C$main.c$180$1$30 ==.
                                   1750 ;	Z:\MICAP\pulsos largura hcsr04\main.c:180: RW = 0;
      00018C C2 A3            [12] 1751 	clr	_P2_3
                           000108  1752 	C$main.c$181$1$30 ==.
                                   1753 ;	Z:\MICAP\pulsos largura hcsr04\main.c:181: CS1 = cs;
      00018E A2 03            [12] 1754 	mov	c,_esc_glcd_PARM_3
      000190 92 A0            [24] 1755 	mov	_P2_0,c
                           00010C  1756 	C$main.c$182$1$30 ==.
                                   1757 ;	Z:\MICAP\pulsos largura hcsr04\main.c:182: CS2 = !cs;
      000192 A2 03            [12] 1758 	mov	c,_esc_glcd_PARM_3
      000194 B3               [12] 1759 	cpl	c
      000195 92 A1            [24] 1760 	mov	_P2_1,c
                           000111  1761 	C$main.c$183$1$30 ==.
                                   1762 ;	Z:\MICAP\pulsos largura hcsr04\main.c:183: RS = cd;
      000197 A2 02            [12] 1763 	mov	c,_esc_glcd_PARM_2
      000199 92 A2            [24] 1764 	mov	_P2_2,c
                           000115  1765 	C$main.c$184$1$30 ==.
                                   1766 ;	Z:\MICAP\pulsos largura hcsr04\main.c:184: SFRPAGE = CONFIG_PAGE;
      00019B 75 84 0F         [24] 1767 	mov	_SFRPAGE,#0x0f
                           000118  1768 	C$main.c$185$1$30 ==.
                                   1769 ;	Z:\MICAP\pulsos largura hcsr04\main.c:185: DB = byte;
      00019E 8F C8            [24] 1770 	mov	_P4,r7
                           00011A  1771 	C$main.c$186$1$30 ==.
                                   1772 ;	Z:\MICAP\pulsos largura hcsr04\main.c:186: SFRPAGE = LEGACY_PAGE;
      0001A0 75 84 00         [24] 1773 	mov	_SFRPAGE,#0x00
                           00011D  1774 	C$main.c$187$1$30 ==.
                                   1775 ;	Z:\MICAP\pulsos largura hcsr04\main.c:187: NOP4();
      0001A3 00               [12] 1776 	NOP	
      0001A4 00               [12] 1777 	NOP	
      0001A5 00               [12] 1778 	NOP	
      0001A6 00               [12] 1779 	NOP	
                           000121  1780 	C$main.c$188$1$30 ==.
                                   1781 ;	Z:\MICAP\pulsos largura hcsr04\main.c:188: E = 1;
      0001A7 D2 A4            [12] 1782 	setb	_P2_4
                           000123  1783 	C$main.c$189$1$30 ==.
                                   1784 ;	Z:\MICAP\pulsos largura hcsr04\main.c:189: NOP12();
      0001A9 00               [12] 1785 	NOP	
      0001AA 00               [12] 1786 	NOP	
      0001AB 00               [12] 1787 	NOP	
      0001AC 00               [12] 1788 	NOP	
      0001AD 00               [12] 1789 	NOP	
      0001AE 00               [12] 1790 	NOP	
      0001AF 00               [12] 1791 	NOP	
      0001B0 00               [12] 1792 	NOP	
      0001B1 00               [12] 1793 	NOP	
      0001B2 00               [12] 1794 	NOP	
      0001B3 00               [12] 1795 	NOP	
      0001B4 00               [12] 1796 	NOP	
                           00012F  1797 	C$main.c$190$1$30 ==.
                                   1798 ;	Z:\MICAP\pulsos largura hcsr04\main.c:190: E = 0;	
      0001B5 C2 A4            [12] 1799 	clr	_P2_4
                           000131  1800 	C$main.c$191$1$30 ==.
                                   1801 ;	Z:\MICAP\pulsos largura hcsr04\main.c:191: SFRPAGE = CONFIG_PAGE;
      0001B7 75 84 0F         [24] 1802 	mov	_SFRPAGE,#0x0f
                           000134  1803 	C$main.c$192$1$30 ==.
                                   1804 ;	Z:\MICAP\pulsos largura hcsr04\main.c:192: DB = 0xFF;
      0001BA 75 C8 FF         [24] 1805 	mov	_P4,#0xff
                           000137  1806 	C$main.c$193$1$30 ==.
                                   1807 ;	Z:\MICAP\pulsos largura hcsr04\main.c:193: SFRPAGE = LEGACY_PAGE;
      0001BD 75 84 00         [24] 1808 	mov	_SFRPAGE,#0x00
                           00013A  1809 	C$main.c$194$1$30 ==.
                                   1810 ;	Z:\MICAP\pulsos largura hcsr04\main.c:194: NOP12();
      0001C0 00               [12] 1811 	NOP	
      0001C1 00               [12] 1812 	NOP	
      0001C2 00               [12] 1813 	NOP	
      0001C3 00               [12] 1814 	NOP	
      0001C4 00               [12] 1815 	NOP	
      0001C5 00               [12] 1816 	NOP	
      0001C6 00               [12] 1817 	NOP	
      0001C7 00               [12] 1818 	NOP	
      0001C8 00               [12] 1819 	NOP	
      0001C9 00               [12] 1820 	NOP	
      0001CA 00               [12] 1821 	NOP	
      0001CB 00               [12] 1822 	NOP	
                           000146  1823 	C$main.c$195$1$30 ==.
                           000146  1824 	XG$esc_glcd$0$0 ==.
      0001CC 22               [24] 1825 	ret
                                   1826 ;------------------------------------------------------------
                                   1827 ;Allocation info for local variables in function 'Ini_glcd'
                                   1828 ;------------------------------------------------------------
                           000147  1829 	G$Ini_glcd$0$0 ==.
                           000147  1830 	C$main.c$197$1$30 ==.
                                   1831 ;	Z:\MICAP\pulsos largura hcsr04\main.c:197: void Ini_glcd(void)
                                   1832 ;	-----------------------------------------
                                   1833 ;	 function Ini_glcd
                                   1834 ;	-----------------------------------------
      0001CD                       1835 _Ini_glcd:
                           000147  1836 	C$main.c$199$1$32 ==.
                                   1837 ;	Z:\MICAP\pulsos largura hcsr04\main.c:199: E = 0;
      0001CD C2 A4            [12] 1838 	clr	_P2_4
                           000149  1839 	C$main.c$200$1$32 ==.
                                   1840 ;	Z:\MICAP\pulsos largura hcsr04\main.c:200: RST = 1;
      0001CF D2 A5            [12] 1841 	setb	_P2_5
                           00014B  1842 	C$main.c$201$1$32 ==.
                                   1843 ;	Z:\MICAP\pulsos largura hcsr04\main.c:201: CS1 = 1;
      0001D1 D2 A0            [12] 1844 	setb	_P2_0
                           00014D  1845 	C$main.c$202$1$32 ==.
                                   1846 ;	Z:\MICAP\pulsos largura hcsr04\main.c:202: CS2 = 1;
      0001D3 D2 A1            [12] 1847 	setb	_P2_1
                           00014F  1848 	C$main.c$204$1$32 ==.
                                   1849 ;	Z:\MICAP\pulsos largura hcsr04\main.c:204: SFRPAGE = CONFIG_PAGE;
      0001D5 75 84 0F         [24] 1850 	mov	_SFRPAGE,#0x0f
                           000152  1851 	C$main.c$205$1$32 ==.
                                   1852 ;	Z:\MICAP\pulsos largura hcsr04\main.c:205: DB = 0xFF;
      0001D8 75 C8 FF         [24] 1853 	mov	_P4,#0xff
                           000155  1854 	C$main.c$206$1$32 ==.
                                   1855 ;	Z:\MICAP\pulsos largura hcsr04\main.c:206: SFRPAGE = LEGACY_PAGE;
      0001DB 75 84 00         [24] 1856 	mov	_SFRPAGE,#0x00
                           000158  1857 	C$main.c$208$1$32 ==.
                                   1858 ;	Z:\MICAP\pulsos largura hcsr04\main.c:208: while(le_glcd(CO, ESQ) & 0x10);
      0001DE                       1859 00101$:
      0001DE C2 00            [12] 1860 	clr	_le_glcd_PARM_1
      0001E0 C2 01            [12] 1861 	clr	_le_glcd_PARM_2
      0001E2 12 01 3F         [24] 1862 	lcall	_le_glcd
      0001E5 E5 82            [12] 1863 	mov	a,dpl
      0001E7 20 E4 F4         [24] 1864 	jb	acc.4,00101$
                           000164  1865 	C$main.c$209$1$32 ==.
                                   1866 ;	Z:\MICAP\pulsos largura hcsr04\main.c:209: while(le_glcd(CO, DIR) & 0x10);
      0001EA                       1867 00104$:
      0001EA C2 00            [12] 1868 	clr	_le_glcd_PARM_1
      0001EC D2 01            [12] 1869 	setb	_le_glcd_PARM_2
      0001EE 12 01 3F         [24] 1870 	lcall	_le_glcd
      0001F1 E5 82            [12] 1871 	mov	a,dpl
      0001F3 20 E4 F4         [24] 1872 	jb	acc.4,00104$
                           000170  1873 	C$main.c$211$1$32 ==.
                                   1874 ;	Z:\MICAP\pulsos largura hcsr04\main.c:211: esc_glcd(0x3F, CO, ESQ);
      0001F6 C2 02            [12] 1875 	clr	_esc_glcd_PARM_2
      0001F8 C2 03            [12] 1876 	clr	_esc_glcd_PARM_3
      0001FA 75 82 3F         [24] 1877 	mov	dpl,#0x3f
      0001FD 12 01 78         [24] 1878 	lcall	_esc_glcd
                           00017A  1879 	C$main.c$212$1$32 ==.
                                   1880 ;	Z:\MICAP\pulsos largura hcsr04\main.c:212: esc_glcd(0x3F, CO, DIR);
      000200 C2 02            [12] 1881 	clr	_esc_glcd_PARM_2
      000202 D2 03            [12] 1882 	setb	_esc_glcd_PARM_3
      000204 75 82 3F         [24] 1883 	mov	dpl,#0x3f
      000207 12 01 78         [24] 1884 	lcall	_esc_glcd
                           000184  1885 	C$main.c$213$1$32 ==.
                                   1886 ;	Z:\MICAP\pulsos largura hcsr04\main.c:213: esc_glcd(0x40, CO, ESQ);
      00020A C2 02            [12] 1887 	clr	_esc_glcd_PARM_2
      00020C C2 03            [12] 1888 	clr	_esc_glcd_PARM_3
      00020E 75 82 40         [24] 1889 	mov	dpl,#0x40
      000211 12 01 78         [24] 1890 	lcall	_esc_glcd
                           00018E  1891 	C$main.c$214$1$32 ==.
                                   1892 ;	Z:\MICAP\pulsos largura hcsr04\main.c:214: esc_glcd(0xB8, CO, ESQ);
      000214 C2 02            [12] 1893 	clr	_esc_glcd_PARM_2
      000216 C2 03            [12] 1894 	clr	_esc_glcd_PARM_3
      000218 75 82 B8         [24] 1895 	mov	dpl,#0xb8
      00021B 12 01 78         [24] 1896 	lcall	_esc_glcd
                           000198  1897 	C$main.c$215$1$32 ==.
                                   1898 ;	Z:\MICAP\pulsos largura hcsr04\main.c:215: esc_glcd(0xC0, CO, ESQ);
      00021E C2 02            [12] 1899 	clr	_esc_glcd_PARM_2
      000220 C2 03            [12] 1900 	clr	_esc_glcd_PARM_3
      000222 75 82 C0         [24] 1901 	mov	dpl,#0xc0
      000225 12 01 78         [24] 1902 	lcall	_esc_glcd
                           0001A2  1903 	C$main.c$216$1$32 ==.
                                   1904 ;	Z:\MICAP\pulsos largura hcsr04\main.c:216: esc_glcd(0x40, CO, DIR);
      000228 C2 02            [12] 1905 	clr	_esc_glcd_PARM_2
      00022A D2 03            [12] 1906 	setb	_esc_glcd_PARM_3
      00022C 75 82 40         [24] 1907 	mov	dpl,#0x40
      00022F 12 01 78         [24] 1908 	lcall	_esc_glcd
                           0001AC  1909 	C$main.c$217$1$32 ==.
                                   1910 ;	Z:\MICAP\pulsos largura hcsr04\main.c:217: esc_glcd(0xB8, CO, DIR);
      000232 C2 02            [12] 1911 	clr	_esc_glcd_PARM_2
      000234 D2 03            [12] 1912 	setb	_esc_glcd_PARM_3
      000236 75 82 B8         [24] 1913 	mov	dpl,#0xb8
      000239 12 01 78         [24] 1914 	lcall	_esc_glcd
                           0001B6  1915 	C$main.c$218$1$32 ==.
                                   1916 ;	Z:\MICAP\pulsos largura hcsr04\main.c:218: esc_glcd(0xC0, CO, DIR);
      00023C C2 02            [12] 1917 	clr	_esc_glcd_PARM_2
      00023E D2 03            [12] 1918 	setb	_esc_glcd_PARM_3
      000240 75 82 C0         [24] 1919 	mov	dpl,#0xc0
      000243 12 01 78         [24] 1920 	lcall	_esc_glcd
                           0001C0  1921 	C$main.c$219$1$32 ==.
                           0001C0  1922 	XG$Ini_glcd$0$0 ==.
      000246 22               [24] 1923 	ret
                                   1924 ;------------------------------------------------------------
                                   1925 ;Allocation info for local variables in function 'conf_Y'
                                   1926 ;------------------------------------------------------------
                                   1927 ;y                         Allocated to registers r7 
                                   1928 ;------------------------------------------------------------
                           0001C1  1929 	G$conf_Y$0$0 ==.
                           0001C1  1930 	C$main.c$221$1$32 ==.
                                   1931 ;	Z:\MICAP\pulsos largura hcsr04\main.c:221: void conf_Y(unsigned char y, __bit cs)
                                   1932 ;	-----------------------------------------
                                   1933 ;	 function conf_Y
                                   1934 ;	-----------------------------------------
      000247                       1935 _conf_Y:
      000247 AF 82            [24] 1936 	mov	r7,dpl
                           0001C3  1937 	C$main.c$223$1$34 ==.
                                   1938 ;	Z:\MICAP\pulsos largura hcsr04\main.c:223: y &= 0x3F;
      000249 53 07 3F         [24] 1939 	anl	ar7,#0x3f
                           0001C6  1940 	C$main.c$224$1$34 ==.
                                   1941 ;	Z:\MICAP\pulsos largura hcsr04\main.c:224: esc_glcd(0x40 | y, CO, cs);
      00024C 74 40            [12] 1942 	mov	a,#0x40
      00024E 4F               [12] 1943 	orl	a,r7
      00024F F5 82            [12] 1944 	mov	dpl,a
      000251 C2 02            [12] 1945 	clr	_esc_glcd_PARM_2
      000253 A2 04            [12] 1946 	mov	c,_conf_Y_PARM_2
      000255 92 03            [24] 1947 	mov	_esc_glcd_PARM_3,c
      000257 12 01 78         [24] 1948 	lcall	_esc_glcd
                           0001D4  1949 	C$main.c$225$1$34 ==.
                           0001D4  1950 	XG$conf_Y$0$0 ==.
      00025A 22               [24] 1951 	ret
                                   1952 ;------------------------------------------------------------
                                   1953 ;Allocation info for local variables in function 'conf_pag'
                                   1954 ;------------------------------------------------------------
                                   1955 ;pag                       Allocated to registers r7 
                                   1956 ;------------------------------------------------------------
                           0001D5  1957 	G$conf_pag$0$0 ==.
                           0001D5  1958 	C$main.c$227$1$34 ==.
                                   1959 ;	Z:\MICAP\pulsos largura hcsr04\main.c:227: void conf_pag(unsigned char pag, __bit cs)
                                   1960 ;	-----------------------------------------
                                   1961 ;	 function conf_pag
                                   1962 ;	-----------------------------------------
      00025B                       1963 _conf_pag:
      00025B AF 82            [24] 1964 	mov	r7,dpl
                           0001D7  1965 	C$main.c$229$1$36 ==.
                                   1966 ;	Z:\MICAP\pulsos largura hcsr04\main.c:229: pag &= 0x07;
      00025D 53 07 07         [24] 1967 	anl	ar7,#0x07
                           0001DA  1968 	C$main.c$230$1$36 ==.
                                   1969 ;	Z:\MICAP\pulsos largura hcsr04\main.c:230: esc_glcd(0xB8 | pag, CO, cs);
      000260 74 B8            [12] 1970 	mov	a,#0xb8
      000262 4F               [12] 1971 	orl	a,r7
      000263 F5 82            [12] 1972 	mov	dpl,a
      000265 C2 02            [12] 1973 	clr	_esc_glcd_PARM_2
      000267 A2 05            [12] 1974 	mov	c,_conf_pag_PARM_2
      000269 92 03            [24] 1975 	mov	_esc_glcd_PARM_3,c
      00026B 12 01 78         [24] 1976 	lcall	_esc_glcd
                           0001E8  1977 	C$main.c$231$1$36 ==.
                           0001E8  1978 	XG$conf_pag$0$0 ==.
      00026E 22               [24] 1979 	ret
                                   1980 ;------------------------------------------------------------
                                   1981 ;Allocation info for local variables in function 'limpa_glcd'
                                   1982 ;------------------------------------------------------------
                                   1983 ;i                         Allocated to registers r7 
                                   1984 ;j                         Allocated to registers r6 
                                   1985 ;------------------------------------------------------------
                           0001E9  1986 	G$limpa_glcd$0$0 ==.
                           0001E9  1987 	C$main.c$233$1$36 ==.
                                   1988 ;	Z:\MICAP\pulsos largura hcsr04\main.c:233: void limpa_glcd(__bit cs)
                                   1989 ;	-----------------------------------------
                                   1990 ;	 function limpa_glcd
                                   1991 ;	-----------------------------------------
      00026F                       1992 _limpa_glcd:
                           0001E9  1993 	C$main.c$237$1$38 ==.
                                   1994 ;	Z:\MICAP\pulsos largura hcsr04\main.c:237: for(i = 0; i < 8; i++)
      00026F 7F 00            [12] 1995 	mov	r7,#0x00
      000271                       1996 00105$:
                           0001EB  1997 	C$main.c$239$2$39 ==.
                                   1998 ;	Z:\MICAP\pulsos largura hcsr04\main.c:239: conf_pag(i, cs);
      000271 A2 06            [12] 1999 	mov	c,_limpa_glcd_PARM_1
      000273 92 05            [24] 2000 	mov	_conf_pag_PARM_2,c
      000275 8F 82            [24] 2001 	mov	dpl,r7
      000277 C0 07            [24] 2002 	push	ar7
      000279 12 02 5B         [24] 2003 	lcall	_conf_pag
                           0001F6  2004 	C$main.c$240$2$39 ==.
                                   2005 ;	Z:\MICAP\pulsos largura hcsr04\main.c:240: conf_Y(0, cs);
      00027C A2 06            [12] 2006 	mov	c,_limpa_glcd_PARM_1
      00027E 92 04            [24] 2007 	mov	_conf_Y_PARM_2,c
      000280 75 82 00         [24] 2008 	mov	dpl,#0x00
      000283 12 02 47         [24] 2009 	lcall	_conf_Y
      000286 D0 07            [24] 2010 	pop	ar7
                           000202  2011 	C$main.c$241$1$38 ==.
                                   2012 ;	Z:\MICAP\pulsos largura hcsr04\main.c:241: for(j = 0; j < 64; j++)
      000288 7E 00            [12] 2013 	mov	r6,#0x00
      00028A                       2014 00103$:
                           000204  2015 	C$main.c$242$2$39 ==.
                                   2016 ;	Z:\MICAP\pulsos largura hcsr04\main.c:242: esc_glcd(0x00, DA, cs);
      00028A D2 02            [12] 2017 	setb	_esc_glcd_PARM_2
      00028C A2 06            [12] 2018 	mov	c,_limpa_glcd_PARM_1
      00028E 92 03            [24] 2019 	mov	_esc_glcd_PARM_3,c
      000290 75 82 00         [24] 2020 	mov	dpl,#0x00
      000293 C0 07            [24] 2021 	push	ar7
      000295 C0 06            [24] 2022 	push	ar6
      000297 12 01 78         [24] 2023 	lcall	_esc_glcd
      00029A D0 06            [24] 2024 	pop	ar6
      00029C D0 07            [24] 2025 	pop	ar7
                           000218  2026 	C$main.c$241$2$39 ==.
                                   2027 ;	Z:\MICAP\pulsos largura hcsr04\main.c:241: for(j = 0; j < 64; j++)
      00029E 0E               [12] 2028 	inc	r6
      00029F BE 40 00         [24] 2029 	cjne	r6,#0x40,00120$
      0002A2                       2030 00120$:
      0002A2 40 E6            [24] 2031 	jc	00103$
                           00021E  2032 	C$main.c$237$1$38 ==.
                                   2033 ;	Z:\MICAP\pulsos largura hcsr04\main.c:237: for(i = 0; i < 8; i++)
      0002A4 0F               [12] 2034 	inc	r7
      0002A5 BF 08 00         [24] 2035 	cjne	r7,#0x08,00122$
      0002A8                       2036 00122$:
      0002A8 40 C7            [24] 2037 	jc	00105$
                           000224  2038 	C$main.c$244$1$38 ==.
                           000224  2039 	XG$limpa_glcd$0$0 ==.
      0002AA 22               [24] 2040 	ret
                                   2041 ;------------------------------------------------------------
                                   2042 ;Allocation info for local variables in function 'putchar'
                                   2043 ;------------------------------------------------------------
                                   2044 ;count                     Allocated with name '_putchar_count_1_41'
                                   2045 ;c                         Allocated to registers r7 
                                   2046 ;i                         Allocated to registers r5 
                                   2047 ;cs                        Allocated to registers r6 
                                   2048 ;------------------------------------------------------------
                           000225  2049 	G$putchar$0$0 ==.
                           000225  2050 	C$main.c$246$1$38 ==.
                                   2051 ;	Z:\MICAP\pulsos largura hcsr04\main.c:246: void putchar(char c)
                                   2052 ;	-----------------------------------------
                                   2053 ;	 function putchar
                                   2054 ;	-----------------------------------------
      0002AB                       2055 _putchar:
                           000225  2056 	C$main.c$251$1$41 ==.
                                   2057 ;	Z:\MICAP\pulsos largura hcsr04\main.c:251: if(c > 0 && c <= 8)
      0002AB E5 82            [12] 2058 	mov	a,dpl
      0002AD FF               [12] 2059 	mov	r7,a
      0002AE 60 30            [24] 2060 	jz	00107$
      0002B0 EF               [12] 2061 	mov	a,r7
      0002B1 24 F7            [12] 2062 	add	a,#0xff - 0x08
      0002B3 40 2B            [24] 2063 	jc	00107$
                           00022F  2064 	C$main.c$253$2$42 ==.
                                   2065 ;	Z:\MICAP\pulsos largura hcsr04\main.c:253: conf_pag(c-1, 0);
      0002B5 EF               [12] 2066 	mov	a,r7
      0002B6 14               [12] 2067 	dec	a
      0002B7 FE               [12] 2068 	mov	r6,a
      0002B8 C2 05            [12] 2069 	clr	_conf_pag_PARM_2
      0002BA 8E 82            [24] 2070 	mov	dpl,r6
      0002BC C0 06            [24] 2071 	push	ar6
      0002BE 12 02 5B         [24] 2072 	lcall	_conf_pag
                           00023B  2073 	C$main.c$254$2$42 ==.
                                   2074 ;	Z:\MICAP\pulsos largura hcsr04\main.c:254: conf_Y(0, 0);
      0002C1 C2 04            [12] 2075 	clr	_conf_Y_PARM_2
      0002C3 75 82 00         [24] 2076 	mov	dpl,#0x00
      0002C6 12 02 47         [24] 2077 	lcall	_conf_Y
      0002C9 D0 06            [24] 2078 	pop	ar6
                           000245  2079 	C$main.c$255$2$42 ==.
                                   2080 ;	Z:\MICAP\pulsos largura hcsr04\main.c:255: conf_pag(c-1, 1);
      0002CB D2 05            [12] 2081 	setb	_conf_pag_PARM_2
      0002CD 8E 82            [24] 2082 	mov	dpl,r6
      0002CF 12 02 5B         [24] 2083 	lcall	_conf_pag
                           00024C  2084 	C$main.c$256$2$42 ==.
                                   2085 ;	Z:\MICAP\pulsos largura hcsr04\main.c:256: conf_Y(0, 1);
      0002D2 D2 04            [12] 2086 	setb	_conf_Y_PARM_2
      0002D4 75 82 00         [24] 2087 	mov	dpl,#0x00
      0002D7 12 02 47         [24] 2088 	lcall	_conf_Y
                           000254  2089 	C$main.c$257$2$42 ==.
                                   2090 ;	Z:\MICAP\pulsos largura hcsr04\main.c:257: count = 0;
      0002DA 75 08 00         [24] 2091 	mov	_putchar_count_1_41,#0x00
      0002DD 02 03 5D         [24] 2092 	ljmp	00114$
      0002E0                       2093 00107$:
                           00025A  2094 	C$main.c$261$2$43 ==.
                                   2095 ;	Z:\MICAP\pulsos largura hcsr04\main.c:261: if(count < 8)
      0002E0 74 F8            [12] 2096 	mov	a,#0x100 - 0x08
      0002E2 25 08            [12] 2097 	add	a,_putchar_count_1_41
      0002E4 40 04            [24] 2098 	jc	00102$
                           000260  2099 	C$main.c$262$2$43 ==.
                                   2100 ;	Z:\MICAP\pulsos largura hcsr04\main.c:262: cs = 0;
      0002E6 7E 00            [12] 2101 	mov	r6,#0x00
      0002E8 80 02            [24] 2102 	sjmp	00119$
      0002EA                       2103 00102$:
                           000264  2104 	C$main.c$264$2$43 ==.
                                   2105 ;	Z:\MICAP\pulsos largura hcsr04\main.c:264: cs = 1;
      0002EA 7E 01            [12] 2106 	mov	r6,#0x01
                           000266  2107 	C$main.c$266$1$41 ==.
                                   2108 ;	Z:\MICAP\pulsos largura hcsr04\main.c:266: for (i = 0; i < 5; i++)
      0002EC                       2109 00119$:
      0002EC 7D 00            [12] 2110 	mov	r5,#0x00
      0002EE                       2111 00110$:
                           000268  2112 	C$main.c$267$2$43 ==.
                                   2113 ;	Z:\MICAP\pulsos largura hcsr04\main.c:267: esc_glcd(fonte[c-32][i], DA, cs);
      0002EE 8F 03            [24] 2114 	mov	ar3,r7
      0002F0 7C 00            [12] 2115 	mov	r4,#0x00
      0002F2 EB               [12] 2116 	mov	a,r3
      0002F3 24 E0            [12] 2117 	add	a,#0xe0
      0002F5 F5 14            [12] 2118 	mov	__mulint_PARM_2,a
      0002F7 EC               [12] 2119 	mov	a,r4
      0002F8 34 FF            [12] 2120 	addc	a,#0xff
      0002FA F5 15            [12] 2121 	mov	(__mulint_PARM_2 + 1),a
      0002FC 90 00 05         [24] 2122 	mov	dptr,#0x0005
      0002FF C0 07            [24] 2123 	push	ar7
      000301 C0 06            [24] 2124 	push	ar6
      000303 C0 05            [24] 2125 	push	ar5
      000305 12 0B 45         [24] 2126 	lcall	__mulint
      000308 AB 82            [24] 2127 	mov	r3,dpl
      00030A AC 83            [24] 2128 	mov	r4,dph
      00030C D0 05            [24] 2129 	pop	ar5
      00030E D0 06            [24] 2130 	pop	ar6
      000310 EB               [12] 2131 	mov	a,r3
      000311 24 B3            [12] 2132 	add	a,#_fonte
      000313 FB               [12] 2133 	mov	r3,a
      000314 EC               [12] 2134 	mov	a,r4
      000315 34 0D            [12] 2135 	addc	a,#(_fonte >> 8)
      000317 FC               [12] 2136 	mov	r4,a
      000318 ED               [12] 2137 	mov	a,r5
      000319 2B               [12] 2138 	add	a,r3
      00031A F5 82            [12] 2139 	mov	dpl,a
      00031C E4               [12] 2140 	clr	a
      00031D 3C               [12] 2141 	addc	a,r4
      00031E F5 83            [12] 2142 	mov	dph,a
      000320 E4               [12] 2143 	clr	a
      000321 93               [24] 2144 	movc	a,@a+dptr
      000322 FC               [12] 2145 	mov	r4,a
      000323 EE               [12] 2146 	mov	a,r6
      000324 24 FF            [12] 2147 	add	a,#0xff
      000326 92 07            [24] 2148 	mov	_putchar_sloc0_1_0,c
      000328 D2 02            [12] 2149 	setb	_esc_glcd_PARM_2
      00032A A2 07            [12] 2150 	mov	c,_putchar_sloc0_1_0
      00032C 92 03            [24] 2151 	mov	_esc_glcd_PARM_3,c
      00032E 8C 82            [24] 2152 	mov	dpl,r4
      000330 C0 06            [24] 2153 	push	ar6
      000332 C0 05            [24] 2154 	push	ar5
      000334 12 01 78         [24] 2155 	lcall	_esc_glcd
      000337 D0 05            [24] 2156 	pop	ar5
      000339 D0 06            [24] 2157 	pop	ar6
      00033B D0 07            [24] 2158 	pop	ar7
                           0002B7  2159 	C$main.c$266$2$43 ==.
                                   2160 ;	Z:\MICAP\pulsos largura hcsr04\main.c:266: for (i = 0; i < 5; i++)
      00033D 0D               [12] 2161 	inc	r5
      00033E BD 05 00         [24] 2162 	cjne	r5,#0x05,00142$
      000341                       2163 00142$:
      000341 40 AB            [24] 2164 	jc	00110$
                           0002BD  2165 	C$main.c$270$1$41 ==.
                                   2166 ;	Z:\MICAP\pulsos largura hcsr04\main.c:270: for (i = 0; i < 3; i++)
      000343 7F 00            [12] 2167 	mov	r7,#0x00
      000345                       2168 00112$:
                           0002BF  2169 	C$main.c$271$2$43 ==.
                                   2170 ;	Z:\MICAP\pulsos largura hcsr04\main.c:271: esc_glcd(0x00, DA, cs);
      000345 D2 02            [12] 2171 	setb	_esc_glcd_PARM_2
      000347 A2 07            [12] 2172 	mov	c,_putchar_sloc0_1_0
      000349 92 03            [24] 2173 	mov	_esc_glcd_PARM_3,c
      00034B 75 82 00         [24] 2174 	mov	dpl,#0x00
      00034E C0 07            [24] 2175 	push	ar7
      000350 12 01 78         [24] 2176 	lcall	_esc_glcd
      000353 D0 07            [24] 2177 	pop	ar7
                           0002CF  2178 	C$main.c$270$2$43 ==.
                                   2179 ;	Z:\MICAP\pulsos largura hcsr04\main.c:270: for (i = 0; i < 3; i++)
      000355 0F               [12] 2180 	inc	r7
      000356 BF 03 00         [24] 2181 	cjne	r7,#0x03,00144$
      000359                       2182 00144$:
      000359 40 EA            [24] 2183 	jc	00112$
                           0002D5  2184 	C$main.c$273$2$43 ==.
                                   2185 ;	Z:\MICAP\pulsos largura hcsr04\main.c:273: count++;
      00035B 05 08            [12] 2186 	inc	_putchar_count_1_41
      00035D                       2187 00114$:
                           0002D7  2188 	C$main.c$275$1$41 ==.
                           0002D7  2189 	XG$putchar$0$0 ==.
      00035D 22               [24] 2190 	ret
                                   2191 ;------------------------------------------------------------
                                   2192 ;Allocation info for local variables in function 'le_pulso'
                                   2193 ;------------------------------------------------------------
                                   2194 ;th_t1                     Allocated to registers 
                                   2195 ;------------------------------------------------------------
                           0002D8  2196 	G$le_pulso$0$0 ==.
                           0002D8  2197 	C$main.c$279$1$41 ==.
                                   2198 ;	Z:\MICAP\pulsos largura hcsr04\main.c:279: float le_pulso(void)
                                   2199 ;	-----------------------------------------
                                   2200 ;	 function le_pulso
                                   2201 ;	-----------------------------------------
      00035E                       2202 _le_pulso:
                           0002D8  2203 	C$main.c$282$1$45 ==.
                                   2204 ;	Z:\MICAP\pulsos largura hcsr04\main.c:282: cont_t = 0;
      00035E E4               [12] 2205 	clr	a
      00035F F5 09            [12] 2206 	mov	_cont_t,a
      000361 F5 0A            [12] 2207 	mov	(_cont_t + 1),a
      000363 F5 0B            [12] 2208 	mov	(_cont_t + 2),a
      000365 F5 0C            [12] 2209 	mov	(_cont_t + 3),a
                           0002E1  2210 	C$main.c$283$1$45 ==.
                                   2211 ;	Z:\MICAP\pulsos largura hcsr04\main.c:283: IE1 = 0;
      000367 C2 8B            [12] 2212 	clr	_IE1
                           0002E3  2213 	C$main.c$284$1$45 ==.
                                   2214 ;	Z:\MICAP\pulsos largura hcsr04\main.c:284: TR1 = 1;
      000369 D2 8E            [12] 2215 	setb	_TR1
                           0002E5  2216 	C$main.c$285$1$45 ==.
                                   2217 ;	Z:\MICAP\pulsos largura hcsr04\main.c:285: while(IE1 == 0);
      00036B                       2218 00101$:
      00036B 30 8B FD         [24] 2219 	jnb	_IE1,00101$
                           0002E8  2220 	C$main.c$286$1$45 ==.
                                   2221 ;	Z:\MICAP\pulsos largura hcsr04\main.c:286: TR1 = 0;
      00036E C2 8E            [12] 2222 	clr	_TR1
                           0002EA  2223 	C$main.c$287$1$45 ==.
                                   2224 ;	Z:\MICAP\pulsos largura hcsr04\main.c:287: TF1 = 0;
      000370 C2 8F            [12] 2225 	clr	_TF1
                           0002EC  2226 	C$main.c$288$1$45 ==.
                                   2227 ;	Z:\MICAP\pulsos largura hcsr04\main.c:288: th_t1 = (unsigned int)TH1*256 + (unsigned int)TL1;
      000372 AF 8D            [24] 2228 	mov	r7,_TH1
      000374 7E 00            [12] 2229 	mov	r6,#0x00
      000376 AC 8B            [24] 2230 	mov	r4,_TL1
      000378 7D 00            [12] 2231 	mov	r5,#0x00
      00037A EC               [12] 2232 	mov	a,r4
      00037B 2E               [12] 2233 	add	a,r6
      00037C F5 82            [12] 2234 	mov	dpl,a
      00037E ED               [12] 2235 	mov	a,r5
      00037F 3F               [12] 2236 	addc	a,r7
      000380 F5 83            [12] 2237 	mov	dph,a
                           0002FC  2238 	C$main.c$289$1$45 ==.
                                   2239 ;	Z:\MICAP\pulsos largura hcsr04\main.c:289: TL1 = 0;
                                   2240 ;	1-genFromRTrack replaced	mov	_TL1,#0x00
      000382 8E 8B            [24] 2241 	mov	_TL1,r6
                           0002FE  2242 	C$main.c$290$1$45 ==.
                                   2243 ;	Z:\MICAP\pulsos largura hcsr04\main.c:290: TH1 = 0;
                                   2244 ;	1-genFromRTrack replaced	mov	_TH1,#0x00
      000384 8E 8D            [24] 2245 	mov	_TH1,r6
                           000300  2246 	C$main.c$291$1$45 ==.
                                   2247 ;	Z:\MICAP\pulsos largura hcsr04\main.c:291: cont_t = cont_t + (float)th_t1/25000000;
      000386 12 0C 04         [24] 2248 	lcall	___uint2fs
      000389 AC 82            [24] 2249 	mov	r4,dpl
      00038B AD 83            [24] 2250 	mov	r5,dph
      00038D AE F0            [24] 2251 	mov	r6,b
      00038F FF               [12] 2252 	mov	r7,a
      000390 74 20            [12] 2253 	mov	a,#0x20
      000392 C0 E0            [24] 2254 	push	acc
      000394 74 BC            [12] 2255 	mov	a,#0xbc
      000396 C0 E0            [24] 2256 	push	acc
      000398 74 BE            [12] 2257 	mov	a,#0xbe
      00039A C0 E0            [24] 2258 	push	acc
      00039C 74 4B            [12] 2259 	mov	a,#0x4b
      00039E C0 E0            [24] 2260 	push	acc
      0003A0 8C 82            [24] 2261 	mov	dpl,r4
      0003A2 8D 83            [24] 2262 	mov	dph,r5
      0003A4 8E F0            [24] 2263 	mov	b,r6
      0003A6 EF               [12] 2264 	mov	a,r7
      0003A7 12 0C 84         [24] 2265 	lcall	___fsdiv
      0003AA AC 82            [24] 2266 	mov	r4,dpl
      0003AC AD 83            [24] 2267 	mov	r5,dph
      0003AE AE F0            [24] 2268 	mov	r6,b
      0003B0 FF               [12] 2269 	mov	r7,a
      0003B1 E5 81            [12] 2270 	mov	a,sp
      0003B3 24 FC            [12] 2271 	add	a,#0xfc
      0003B5 F5 81            [12] 2272 	mov	sp,a
      0003B7 C0 04            [24] 2273 	push	ar4
      0003B9 C0 05            [24] 2274 	push	ar5
      0003BB C0 06            [24] 2275 	push	ar6
      0003BD C0 07            [24] 2276 	push	ar7
      0003BF 85 09 82         [24] 2277 	mov	dpl,_cont_t
      0003C2 85 0A 83         [24] 2278 	mov	dph,(_cont_t + 1)
      0003C5 85 0B F0         [24] 2279 	mov	b,(_cont_t + 2)
      0003C8 E5 0C            [12] 2280 	mov	a,(_cont_t + 3)
      0003CA 12 0B 62         [24] 2281 	lcall	___fsadd
      0003CD 85 82 09         [24] 2282 	mov	_cont_t,dpl
      0003D0 85 83 0A         [24] 2283 	mov	(_cont_t + 1),dph
      0003D3 85 F0 0B         [24] 2284 	mov	(_cont_t + 2),b
      0003D6 F5 0C            [12] 2285 	mov	(_cont_t + 3),a
      0003D8 E5 81            [12] 2286 	mov	a,sp
      0003DA 24 FC            [12] 2287 	add	a,#0xfc
      0003DC F5 81            [12] 2288 	mov	sp,a
                           000358  2289 	C$main.c$292$1$45 ==.
                                   2290 ;	Z:\MICAP\pulsos largura hcsr04\main.c:292: return (cont_t);
      0003DE 85 09 82         [24] 2291 	mov	dpl,_cont_t
      0003E1 85 0A 83         [24] 2292 	mov	dph,(_cont_t + 1)
      0003E4 85 0B F0         [24] 2293 	mov	b,(_cont_t + 2)
      0003E7 E5 0C            [12] 2294 	mov	a,(_cont_t + 3)
                           000363  2295 	C$main.c$293$1$45 ==.
                           000363  2296 	XG$le_pulso$0$0 ==.
      0003E9 22               [24] 2297 	ret
                                   2298 ;------------------------------------------------------------
                                   2299 ;Allocation info for local variables in function 'int_tc1'
                                   2300 ;------------------------------------------------------------
                           000364  2301 	G$int_tc1$0$0 ==.
                           000364  2302 	C$main.c$295$1$45 ==.
                                   2303 ;	Z:\MICAP\pulsos largura hcsr04\main.c:295: void int_tc1() __interrupt 3
                                   2304 ;	-----------------------------------------
                                   2305 ;	 function int_tc1
                                   2306 ;	-----------------------------------------
      0003EA                       2307 _int_tc1:
      0003EA C0 22            [24] 2308 	push	bits
      0003EC C0 E0            [24] 2309 	push	acc
      0003EE C0 F0            [24] 2310 	push	b
      0003F0 C0 82            [24] 2311 	push	dpl
      0003F2 C0 83            [24] 2312 	push	dph
      0003F4 C0 07            [24] 2313 	push	(0+7)
      0003F6 C0 06            [24] 2314 	push	(0+6)
      0003F8 C0 05            [24] 2315 	push	(0+5)
      0003FA C0 04            [24] 2316 	push	(0+4)
      0003FC C0 03            [24] 2317 	push	(0+3)
      0003FE C0 02            [24] 2318 	push	(0+2)
      000400 C0 01            [24] 2319 	push	(0+1)
      000402 C0 00            [24] 2320 	push	(0+0)
      000404 C0 D0            [24] 2321 	push	psw
      000406 75 D0 00         [24] 2322 	mov	psw,#0x00
                           000383  2323 	C$main.c$297$1$46 ==.
                                   2324 ;	Z:\MICAP\pulsos largura hcsr04\main.c:297: TF1 = 0;
      000409 C2 8F            [12] 2325 	clr	_TF1
                           000385  2326 	C$main.c$298$1$46 ==.
                                   2327 ;	Z:\MICAP\pulsos largura hcsr04\main.c:298: cont_t += 0.00262144;
      00040B 74 77            [12] 2328 	mov	a,#0x77
      00040D C0 E0            [24] 2329 	push	acc
      00040F 74 CC            [12] 2330 	mov	a,#0xcc
      000411 C0 E0            [24] 2331 	push	acc
      000413 74 2B            [12] 2332 	mov	a,#0x2b
      000415 C0 E0            [24] 2333 	push	acc
      000417 74 3B            [12] 2334 	mov	a,#0x3b
      000419 C0 E0            [24] 2335 	push	acc
      00041B 85 09 82         [24] 2336 	mov	dpl,_cont_t
      00041E 85 0A 83         [24] 2337 	mov	dph,(_cont_t + 1)
      000421 85 0B F0         [24] 2338 	mov	b,(_cont_t + 2)
      000424 E5 0C            [12] 2339 	mov	a,(_cont_t + 3)
      000426 12 0B 62         [24] 2340 	lcall	___fsadd
      000429 85 82 09         [24] 2341 	mov	_cont_t,dpl
      00042C 85 83 0A         [24] 2342 	mov	(_cont_t + 1),dph
      00042F 85 F0 0B         [24] 2343 	mov	(_cont_t + 2),b
      000432 F5 0C            [12] 2344 	mov	(_cont_t + 3),a
      000434 E5 81            [12] 2345 	mov	a,sp
      000436 24 FC            [12] 2346 	add	a,#0xfc
      000438 F5 81            [12] 2347 	mov	sp,a
                           0003B4  2348 	C$main.c$300$1$46 ==.
                                   2349 ;	Z:\MICAP\pulsos largura hcsr04\main.c:300: if(cont_t > 1)
      00043A E4               [12] 2350 	clr	a
      00043B C0 E0            [24] 2351 	push	acc
      00043D C0 E0            [24] 2352 	push	acc
      00043F 74 80            [12] 2353 	mov	a,#0x80
      000441 C0 E0            [24] 2354 	push	acc
      000443 74 3F            [12] 2355 	mov	a,#0x3f
      000445 C0 E0            [24] 2356 	push	acc
      000447 85 09 82         [24] 2357 	mov	dpl,_cont_t
      00044A 85 0A 83         [24] 2358 	mov	dph,(_cont_t + 1)
      00044D 85 0B F0         [24] 2359 	mov	b,(_cont_t + 2)
      000450 E5 0C            [12] 2360 	mov	a,(_cont_t + 3)
      000452 12 0B 15         [24] 2361 	lcall	___fsgt
      000455 AF 82            [24] 2362 	mov	r7,dpl
      000457 E5 81            [12] 2363 	mov	a,sp
      000459 24 FC            [12] 2364 	add	a,#0xfc
      00045B F5 81            [12] 2365 	mov	sp,a
      00045D EF               [12] 2366 	mov	a,r7
      00045E 60 02            [24] 2367 	jz	00103$
                           0003DA  2368 	C$main.c$301$1$46 ==.
                                   2369 ;	Z:\MICAP\pulsos largura hcsr04\main.c:301: IE1 = 1;
      000460 D2 8B            [12] 2370 	setb	_IE1
      000462                       2371 00103$:
      000462 D0 D0            [24] 2372 	pop	psw
      000464 D0 00            [24] 2373 	pop	(0+0)
      000466 D0 01            [24] 2374 	pop	(0+1)
      000468 D0 02            [24] 2375 	pop	(0+2)
      00046A D0 03            [24] 2376 	pop	(0+3)
      00046C D0 04            [24] 2377 	pop	(0+4)
      00046E D0 05            [24] 2378 	pop	(0+5)
      000470 D0 06            [24] 2379 	pop	(0+6)
      000472 D0 07            [24] 2380 	pop	(0+7)
      000474 D0 83            [24] 2381 	pop	dph
      000476 D0 82            [24] 2382 	pop	dpl
      000478 D0 F0            [24] 2383 	pop	b
      00047A D0 E0            [24] 2384 	pop	acc
      00047C D0 22            [24] 2385 	pop	bits
                           0003F8  2386 	C$main.c$302$1$46 ==.
                           0003F8  2387 	XG$int_tc1$0$0 ==.
      00047E 32               [24] 2388 	reti
                                   2389 ;------------------------------------------------------------
                                   2390 ;Allocation info for local variables in function 'le_hcsr04'
                                   2391 ;------------------------------------------------------------
                           0003F9  2392 	G$le_hcsr04$0$0 ==.
                           0003F9  2393 	C$main.c$304$1$46 ==.
                                   2394 ;	Z:\MICAP\pulsos largura hcsr04\main.c:304: unsigned int le_hcsr04(void)
                                   2395 ;	-----------------------------------------
                                   2396 ;	 function le_hcsr04
                                   2397 ;	-----------------------------------------
      00047F                       2398 _le_hcsr04:
                           0003F9  2399 	C$main.c$306$1$48 ==.
                                   2400 ;	Z:\MICAP\pulsos largura hcsr04\main.c:306: P0_1 = 1;
      00047F D2 81            [12] 2401 	setb	_P0_1
                           0003FB  2402 	C$main.c$307$1$48 ==.
                                   2403 ;	Z:\MICAP\pulsos largura hcsr04\main.c:307: delay_us(10);
      000481 90 00 0A         [24] 2404 	mov	dptr,#0x000a
      000484 12 01 16         [24] 2405 	lcall	_delay_us
                           000401  2406 	C$main.c$308$1$48 ==.
                                   2407 ;	Z:\MICAP\pulsos largura hcsr04\main.c:308: P0_1 = 0;
      000487 C2 81            [12] 2408 	clr	_P0_1
                           000403  2409 	C$main.c$310$1$48 ==.
                                   2410 ;	Z:\MICAP\pulsos largura hcsr04\main.c:310: return le_pulso()*1000000;
      000489 12 03 5E         [24] 2411 	lcall	_le_pulso
      00048C AC 82            [24] 2412 	mov	r4,dpl
      00048E AD 83            [24] 2413 	mov	r5,dph
      000490 AE F0            [24] 2414 	mov	r6,b
      000492 FF               [12] 2415 	mov	r7,a
      000493 C0 04            [24] 2416 	push	ar4
      000495 C0 05            [24] 2417 	push	ar5
      000497 C0 06            [24] 2418 	push	ar6
      000499 C0 07            [24] 2419 	push	ar7
      00049B 90 24 00         [24] 2420 	mov	dptr,#0x2400
      00049E 75 F0 74         [24] 2421 	mov	b,#0x74
      0004A1 74 49            [12] 2422 	mov	a,#0x49
      0004A3 12 09 CE         [24] 2423 	lcall	___fsmul
      0004A6 AC 82            [24] 2424 	mov	r4,dpl
      0004A8 AD 83            [24] 2425 	mov	r5,dph
      0004AA AE F0            [24] 2426 	mov	r6,b
      0004AC FF               [12] 2427 	mov	r7,a
      0004AD E5 81            [12] 2428 	mov	a,sp
      0004AF 24 FC            [12] 2429 	add	a,#0xfc
      0004B1 F5 81            [12] 2430 	mov	sp,a
      0004B3 8C 82            [24] 2431 	mov	dpl,r4
      0004B5 8D 83            [24] 2432 	mov	dph,r5
      0004B7 8E F0            [24] 2433 	mov	b,r6
      0004B9 EF               [12] 2434 	mov	a,r7
      0004BA 12 0C 10         [24] 2435 	lcall	___fs2uint
                           000437  2436 	C$main.c$311$1$48 ==.
                           000437  2437 	XG$le_hcsr04$0$0 ==.
      0004BD 22               [24] 2438 	ret
                                   2439 ;------------------------------------------------------------
                                   2440 ;Allocation info for local variables in function 'main'
                                   2441 ;------------------------------------------------------------
                                   2442 ;dist                      Allocated to registers r6 r7 
                                   2443 ;------------------------------------------------------------
                           000438  2444 	G$main$0$0 ==.
                           000438  2445 	C$main.c$313$1$48 ==.
                                   2446 ;	Z:\MICAP\pulsos largura hcsr04\main.c:313: void main()
                                   2447 ;	-----------------------------------------
                                   2448 ;	 function main
                                   2449 ;	-----------------------------------------
      0004BE                       2450 _main:
                           000438  2451 	C$main.c$316$1$49 ==.
                                   2452 ;	Z:\MICAP\pulsos largura hcsr04\main.c:316: Init_Device();
      0004BE 12 00 DD         [24] 2453 	lcall	_Init_Device
                           00043B  2454 	C$main.c$317$1$49 ==.
                                   2455 ;	Z:\MICAP\pulsos largura hcsr04\main.c:317: SFRPAGE = LEGACY_PAGE;
      0004C1 75 84 00         [24] 2456 	mov	_SFRPAGE,#0x00
                           00043E  2457 	C$main.c$319$1$49 ==.
                                   2458 ;	Z:\MICAP\pulsos largura hcsr04\main.c:319: Ini_glcd();
      0004C4 12 01 CD         [24] 2459 	lcall	_Ini_glcd
                           000441  2460 	C$main.c$320$1$49 ==.
                                   2461 ;	Z:\MICAP\pulsos largura hcsr04\main.c:320: limpa_glcd(0);
      0004C7 C2 06            [12] 2462 	clr	_limpa_glcd_PARM_1
      0004C9 12 02 6F         [24] 2463 	lcall	_limpa_glcd
                           000446  2464 	C$main.c$321$1$49 ==.
                                   2465 ;	Z:\MICAP\pulsos largura hcsr04\main.c:321: limpa_glcd(1);
      0004CC D2 06            [12] 2466 	setb	_limpa_glcd_PARM_1
      0004CE 12 02 6F         [24] 2467 	lcall	_limpa_glcd
                           00044B  2468 	C$main.c$324$1$49 ==.
                                   2469 ;	Z:\MICAP\pulsos largura hcsr04\main.c:324: while(1)
      0004D1                       2470 00102$:
                           00044B  2471 	C$main.c$326$2$50 ==.
                                   2472 ;	Z:\MICAP\pulsos largura hcsr04\main.c:326: dist = le_hcsr04();
      0004D1 12 04 7F         [24] 2473 	lcall	_le_hcsr04
      0004D4 AE 82            [24] 2474 	mov	r6,dpl
      0004D6 AF 83            [24] 2475 	mov	r7,dph
                           000452  2476 	C$main.c$327$2$50 ==.
                                   2477 ;	Z:\MICAP\pulsos largura hcsr04\main.c:327: printf_fast_f("\x01 pulsos=%8d", dist);
      0004D8 C0 07            [24] 2478 	push	ar7
      0004DA C0 06            [24] 2479 	push	ar6
      0004DC C0 06            [24] 2480 	push	ar6
      0004DE C0 07            [24] 2481 	push	ar7
      0004E0 74 93            [12] 2482 	mov	a,#___str_0
      0004E2 C0 E0            [24] 2483 	push	acc
      0004E4 74 0F            [12] 2484 	mov	a,#(___str_0 >> 8)
      0004E6 C0 E0            [24] 2485 	push	acc
      0004E8 12 05 4D         [24] 2486 	lcall	_printf_fast_f
      0004EB E5 81            [12] 2487 	mov	a,sp
      0004ED 24 FC            [12] 2488 	add	a,#0xfc
      0004EF F5 81            [12] 2489 	mov	sp,a
      0004F1 D0 06            [24] 2490 	pop	ar6
      0004F3 D0 07            [24] 2491 	pop	ar7
                           00046F  2492 	C$main.c$328$1$49 ==.
                                   2493 ;	Z:\MICAP\pulsos largura hcsr04\main.c:328: printf_fast_f("\x02 CM=%12d", dist/58);
      0004F5 75 14 3A         [24] 2494 	mov	__divuint_PARM_2,#0x3a
      0004F8 75 15 00         [24] 2495 	mov	(__divuint_PARM_2 + 1),#0x00
      0004FB 8E 82            [24] 2496 	mov	dpl,r6
      0004FD 8F 83            [24] 2497 	mov	dph,r7
      0004FF 12 05 24         [24] 2498 	lcall	__divuint
      000502 AE 82            [24] 2499 	mov	r6,dpl
      000504 AF 83            [24] 2500 	mov	r7,dph
      000506 C0 06            [24] 2501 	push	ar6
      000508 C0 07            [24] 2502 	push	ar7
      00050A 74 A0            [12] 2503 	mov	a,#___str_1
      00050C C0 E0            [24] 2504 	push	acc
      00050E 74 0F            [12] 2505 	mov	a,#(___str_1 >> 8)
      000510 C0 E0            [24] 2506 	push	acc
      000512 12 05 4D         [24] 2507 	lcall	_printf_fast_f
      000515 E5 81            [12] 2508 	mov	a,sp
      000517 24 FC            [12] 2509 	add	a,#0xfc
      000519 F5 81            [12] 2510 	mov	sp,a
                           000495  2511 	C$main.c$329$2$50 ==.
                                   2512 ;	Z:\MICAP\pulsos largura hcsr04\main.c:329: delay_ms(300);
      00051B 90 01 2C         [24] 2513 	mov	dptr,#0x012c
      00051E 12 00 ED         [24] 2514 	lcall	_delay_ms
      000521 80 AE            [24] 2515 	sjmp	00102$
                           00049D  2516 	C$main.c$331$1$49 ==.
                           00049D  2517 	XG$main$0$0 ==.
      000523 22               [24] 2518 	ret
                                   2519 	.area CSEG    (CODE)
                                   2520 	.area CONST   (CODE)
                           000000  2521 G$fonte$0$0 == .
      000DB3                       2522 _fonte:
      000DB3 00                    2523 	.db #0x00	; 0
      000DB4 00                    2524 	.db #0x00	; 0
      000DB5 00                    2525 	.db #0x00	; 0
      000DB6 00                    2526 	.db #0x00	; 0
      000DB7 00                    2527 	.db #0x00	; 0
      000DB8 00                    2528 	.db #0x00	; 0
      000DB9 00                    2529 	.db #0x00	; 0
      000DBA 5F                    2530 	.db #0x5f	; 95
      000DBB 00                    2531 	.db #0x00	; 0
      000DBC 00                    2532 	.db #0x00	; 0
      000DBD 00                    2533 	.db #0x00	; 0
      000DBE 07                    2534 	.db #0x07	; 7
      000DBF 00                    2535 	.db #0x00	; 0
      000DC0 07                    2536 	.db #0x07	; 7
      000DC1 00                    2537 	.db #0x00	; 0
      000DC2 14                    2538 	.db #0x14	; 20
      000DC3 7F                    2539 	.db #0x7f	; 127
      000DC4 14                    2540 	.db #0x14	; 20
      000DC5 7F                    2541 	.db #0x7f	; 127
      000DC6 14                    2542 	.db #0x14	; 20
      000DC7 24                    2543 	.db #0x24	; 36
      000DC8 2A                    2544 	.db #0x2a	; 42
      000DC9 7F                    2545 	.db #0x7f	; 127
      000DCA 2A                    2546 	.db #0x2a	; 42
      000DCB 12                    2547 	.db #0x12	; 18
      000DCC 23                    2548 	.db #0x23	; 35
      000DCD 13                    2549 	.db #0x13	; 19
      000DCE 08                    2550 	.db #0x08	; 8
      000DCF 64                    2551 	.db #0x64	; 100	'd'
      000DD0 62                    2552 	.db #0x62	; 98	'b'
      000DD1 36                    2553 	.db #0x36	; 54	'6'
      000DD2 49                    2554 	.db #0x49	; 73	'I'
      000DD3 55                    2555 	.db #0x55	; 85	'U'
      000DD4 22                    2556 	.db #0x22	; 34
      000DD5 50                    2557 	.db #0x50	; 80	'P'
      000DD6 00                    2558 	.db #0x00	; 0
      000DD7 05                    2559 	.db #0x05	; 5
      000DD8 03                    2560 	.db #0x03	; 3
      000DD9 00                    2561 	.db #0x00	; 0
      000DDA 00                    2562 	.db #0x00	; 0
      000DDB 00                    2563 	.db #0x00	; 0
      000DDC 1C                    2564 	.db #0x1c	; 28
      000DDD 22                    2565 	.db #0x22	; 34
      000DDE 41                    2566 	.db #0x41	; 65	'A'
      000DDF 00                    2567 	.db #0x00	; 0
      000DE0 00                    2568 	.db #0x00	; 0
      000DE1 41                    2569 	.db #0x41	; 65	'A'
      000DE2 22                    2570 	.db #0x22	; 34
      000DE3 1C                    2571 	.db #0x1c	; 28
      000DE4 00                    2572 	.db #0x00	; 0
      000DE5 08                    2573 	.db #0x08	; 8
      000DE6 2A                    2574 	.db #0x2a	; 42
      000DE7 1C                    2575 	.db #0x1c	; 28
      000DE8 2A                    2576 	.db #0x2a	; 42
      000DE9 08                    2577 	.db #0x08	; 8
      000DEA 08                    2578 	.db #0x08	; 8
      000DEB 08                    2579 	.db #0x08	; 8
      000DEC 3E                    2580 	.db #0x3e	; 62
      000DED 08                    2581 	.db #0x08	; 8
      000DEE 08                    2582 	.db #0x08	; 8
      000DEF 00                    2583 	.db #0x00	; 0
      000DF0 50                    2584 	.db #0x50	; 80	'P'
      000DF1 30                    2585 	.db #0x30	; 48	'0'
      000DF2 00                    2586 	.db #0x00	; 0
      000DF3 00                    2587 	.db #0x00	; 0
      000DF4 08                    2588 	.db #0x08	; 8
      000DF5 08                    2589 	.db #0x08	; 8
      000DF6 08                    2590 	.db #0x08	; 8
      000DF7 08                    2591 	.db #0x08	; 8
      000DF8 08                    2592 	.db #0x08	; 8
      000DF9 00                    2593 	.db #0x00	; 0
      000DFA 30                    2594 	.db #0x30	; 48	'0'
      000DFB 30                    2595 	.db #0x30	; 48	'0'
      000DFC 00                    2596 	.db #0x00	; 0
      000DFD 00                    2597 	.db #0x00	; 0
      000DFE 20                    2598 	.db #0x20	; 32
      000DFF 10                    2599 	.db #0x10	; 16
      000E00 08                    2600 	.db #0x08	; 8
      000E01 04                    2601 	.db #0x04	; 4
      000E02 02                    2602 	.db #0x02	; 2
      000E03 3E                    2603 	.db #0x3e	; 62
      000E04 51                    2604 	.db #0x51	; 81	'Q'
      000E05 49                    2605 	.db #0x49	; 73	'I'
      000E06 45                    2606 	.db #0x45	; 69	'E'
      000E07 3E                    2607 	.db #0x3e	; 62
      000E08 00                    2608 	.db #0x00	; 0
      000E09 42                    2609 	.db #0x42	; 66	'B'
      000E0A 7F                    2610 	.db #0x7f	; 127
      000E0B 40                    2611 	.db #0x40	; 64
      000E0C 00                    2612 	.db #0x00	; 0
      000E0D 42                    2613 	.db #0x42	; 66	'B'
      000E0E 61                    2614 	.db #0x61	; 97	'a'
      000E0F 51                    2615 	.db #0x51	; 81	'Q'
      000E10 49                    2616 	.db #0x49	; 73	'I'
      000E11 46                    2617 	.db #0x46	; 70	'F'
      000E12 21                    2618 	.db #0x21	; 33
      000E13 41                    2619 	.db #0x41	; 65	'A'
      000E14 45                    2620 	.db #0x45	; 69	'E'
      000E15 4B                    2621 	.db #0x4b	; 75	'K'
      000E16 31                    2622 	.db #0x31	; 49	'1'
      000E17 18                    2623 	.db #0x18	; 24
      000E18 14                    2624 	.db #0x14	; 20
      000E19 12                    2625 	.db #0x12	; 18
      000E1A 7F                    2626 	.db #0x7f	; 127
      000E1B 10                    2627 	.db #0x10	; 16
      000E1C 27                    2628 	.db #0x27	; 39
      000E1D 45                    2629 	.db #0x45	; 69	'E'
      000E1E 45                    2630 	.db #0x45	; 69	'E'
      000E1F 45                    2631 	.db #0x45	; 69	'E'
      000E20 39                    2632 	.db #0x39	; 57	'9'
      000E21 3C                    2633 	.db #0x3c	; 60
      000E22 4A                    2634 	.db #0x4a	; 74	'J'
      000E23 49                    2635 	.db #0x49	; 73	'I'
      000E24 49                    2636 	.db #0x49	; 73	'I'
      000E25 30                    2637 	.db #0x30	; 48	'0'
      000E26 01                    2638 	.db #0x01	; 1
      000E27 71                    2639 	.db #0x71	; 113	'q'
      000E28 09                    2640 	.db #0x09	; 9
      000E29 05                    2641 	.db #0x05	; 5
      000E2A 03                    2642 	.db #0x03	; 3
      000E2B 36                    2643 	.db #0x36	; 54	'6'
      000E2C 49                    2644 	.db #0x49	; 73	'I'
      000E2D 49                    2645 	.db #0x49	; 73	'I'
      000E2E 49                    2646 	.db #0x49	; 73	'I'
      000E2F 36                    2647 	.db #0x36	; 54	'6'
      000E30 06                    2648 	.db #0x06	; 6
      000E31 49                    2649 	.db #0x49	; 73	'I'
      000E32 49                    2650 	.db #0x49	; 73	'I'
      000E33 29                    2651 	.db #0x29	; 41
      000E34 1E                    2652 	.db #0x1e	; 30
      000E35 00                    2653 	.db #0x00	; 0
      000E36 36                    2654 	.db #0x36	; 54	'6'
      000E37 36                    2655 	.db #0x36	; 54	'6'
      000E38 00                    2656 	.db #0x00	; 0
      000E39 00                    2657 	.db #0x00	; 0
      000E3A 00                    2658 	.db #0x00	; 0
      000E3B 56                    2659 	.db #0x56	; 86	'V'
      000E3C 36                    2660 	.db #0x36	; 54	'6'
      000E3D 00                    2661 	.db #0x00	; 0
      000E3E 00                    2662 	.db #0x00	; 0
      000E3F 00                    2663 	.db #0x00	; 0
      000E40 08                    2664 	.db #0x08	; 8
      000E41 14                    2665 	.db #0x14	; 20
      000E42 22                    2666 	.db #0x22	; 34
      000E43 41                    2667 	.db #0x41	; 65	'A'
      000E44 14                    2668 	.db #0x14	; 20
      000E45 14                    2669 	.db #0x14	; 20
      000E46 14                    2670 	.db #0x14	; 20
      000E47 14                    2671 	.db #0x14	; 20
      000E48 14                    2672 	.db #0x14	; 20
      000E49 41                    2673 	.db #0x41	; 65	'A'
      000E4A 22                    2674 	.db #0x22	; 34
      000E4B 14                    2675 	.db #0x14	; 20
      000E4C 08                    2676 	.db #0x08	; 8
      000E4D 00                    2677 	.db #0x00	; 0
      000E4E 02                    2678 	.db #0x02	; 2
      000E4F 01                    2679 	.db #0x01	; 1
      000E50 51                    2680 	.db #0x51	; 81	'Q'
      000E51 09                    2681 	.db #0x09	; 9
      000E52 06                    2682 	.db #0x06	; 6
      000E53 32                    2683 	.db #0x32	; 50	'2'
      000E54 49                    2684 	.db #0x49	; 73	'I'
      000E55 79                    2685 	.db #0x79	; 121	'y'
      000E56 41                    2686 	.db #0x41	; 65	'A'
      000E57 3E                    2687 	.db #0x3e	; 62
      000E58 7E                    2688 	.db #0x7e	; 126
      000E59 11                    2689 	.db #0x11	; 17
      000E5A 11                    2690 	.db #0x11	; 17
      000E5B 11                    2691 	.db #0x11	; 17
      000E5C 7E                    2692 	.db #0x7e	; 126
      000E5D 7F                    2693 	.db #0x7f	; 127
      000E5E 49                    2694 	.db #0x49	; 73	'I'
      000E5F 49                    2695 	.db #0x49	; 73	'I'
      000E60 49                    2696 	.db #0x49	; 73	'I'
      000E61 36                    2697 	.db #0x36	; 54	'6'
      000E62 3E                    2698 	.db #0x3e	; 62
      000E63 41                    2699 	.db #0x41	; 65	'A'
      000E64 41                    2700 	.db #0x41	; 65	'A'
      000E65 41                    2701 	.db #0x41	; 65	'A'
      000E66 22                    2702 	.db #0x22	; 34
      000E67 7F                    2703 	.db #0x7f	; 127
      000E68 41                    2704 	.db #0x41	; 65	'A'
      000E69 41                    2705 	.db #0x41	; 65	'A'
      000E6A 22                    2706 	.db #0x22	; 34
      000E6B 1C                    2707 	.db #0x1c	; 28
      000E6C 7F                    2708 	.db #0x7f	; 127
      000E6D 49                    2709 	.db #0x49	; 73	'I'
      000E6E 49                    2710 	.db #0x49	; 73	'I'
      000E6F 49                    2711 	.db #0x49	; 73	'I'
      000E70 41                    2712 	.db #0x41	; 65	'A'
      000E71 7F                    2713 	.db #0x7f	; 127
      000E72 09                    2714 	.db #0x09	; 9
      000E73 09                    2715 	.db #0x09	; 9
      000E74 01                    2716 	.db #0x01	; 1
      000E75 01                    2717 	.db #0x01	; 1
      000E76 3E                    2718 	.db #0x3e	; 62
      000E77 41                    2719 	.db #0x41	; 65	'A'
      000E78 41                    2720 	.db #0x41	; 65	'A'
      000E79 51                    2721 	.db #0x51	; 81	'Q'
      000E7A 32                    2722 	.db #0x32	; 50	'2'
      000E7B 7F                    2723 	.db #0x7f	; 127
      000E7C 08                    2724 	.db #0x08	; 8
      000E7D 08                    2725 	.db #0x08	; 8
      000E7E 08                    2726 	.db #0x08	; 8
      000E7F 7F                    2727 	.db #0x7f	; 127
      000E80 00                    2728 	.db #0x00	; 0
      000E81 41                    2729 	.db #0x41	; 65	'A'
      000E82 7F                    2730 	.db #0x7f	; 127
      000E83 41                    2731 	.db #0x41	; 65	'A'
      000E84 00                    2732 	.db #0x00	; 0
      000E85 20                    2733 	.db #0x20	; 32
      000E86 40                    2734 	.db #0x40	; 64
      000E87 41                    2735 	.db #0x41	; 65	'A'
      000E88 3F                    2736 	.db #0x3f	; 63
      000E89 01                    2737 	.db #0x01	; 1
      000E8A 7F                    2738 	.db #0x7f	; 127
      000E8B 08                    2739 	.db #0x08	; 8
      000E8C 14                    2740 	.db #0x14	; 20
      000E8D 22                    2741 	.db #0x22	; 34
      000E8E 41                    2742 	.db #0x41	; 65	'A'
      000E8F 7F                    2743 	.db #0x7f	; 127
      000E90 40                    2744 	.db #0x40	; 64
      000E91 40                    2745 	.db #0x40	; 64
      000E92 40                    2746 	.db #0x40	; 64
      000E93 40                    2747 	.db #0x40	; 64
      000E94 7F                    2748 	.db #0x7f	; 127
      000E95 02                    2749 	.db #0x02	; 2
      000E96 04                    2750 	.db #0x04	; 4
      000E97 02                    2751 	.db #0x02	; 2
      000E98 7F                    2752 	.db #0x7f	; 127
      000E99 7F                    2753 	.db #0x7f	; 127
      000E9A 04                    2754 	.db #0x04	; 4
      000E9B 08                    2755 	.db #0x08	; 8
      000E9C 10                    2756 	.db #0x10	; 16
      000E9D 7F                    2757 	.db #0x7f	; 127
      000E9E 3E                    2758 	.db #0x3e	; 62
      000E9F 41                    2759 	.db #0x41	; 65	'A'
      000EA0 41                    2760 	.db #0x41	; 65	'A'
      000EA1 41                    2761 	.db #0x41	; 65	'A'
      000EA2 3E                    2762 	.db #0x3e	; 62
      000EA3 7F                    2763 	.db #0x7f	; 127
      000EA4 09                    2764 	.db #0x09	; 9
      000EA5 09                    2765 	.db #0x09	; 9
      000EA6 09                    2766 	.db #0x09	; 9
      000EA7 06                    2767 	.db #0x06	; 6
      000EA8 3E                    2768 	.db #0x3e	; 62
      000EA9 41                    2769 	.db #0x41	; 65	'A'
      000EAA 51                    2770 	.db #0x51	; 81	'Q'
      000EAB 21                    2771 	.db #0x21	; 33
      000EAC 5E                    2772 	.db #0x5e	; 94
      000EAD 7F                    2773 	.db #0x7f	; 127
      000EAE 09                    2774 	.db #0x09	; 9
      000EAF 19                    2775 	.db #0x19	; 25
      000EB0 29                    2776 	.db #0x29	; 41
      000EB1 46                    2777 	.db #0x46	; 70	'F'
      000EB2 46                    2778 	.db #0x46	; 70	'F'
      000EB3 49                    2779 	.db #0x49	; 73	'I'
      000EB4 49                    2780 	.db #0x49	; 73	'I'
      000EB5 49                    2781 	.db #0x49	; 73	'I'
      000EB6 31                    2782 	.db #0x31	; 49	'1'
      000EB7 01                    2783 	.db #0x01	; 1
      000EB8 01                    2784 	.db #0x01	; 1
      000EB9 7F                    2785 	.db #0x7f	; 127
      000EBA 01                    2786 	.db #0x01	; 1
      000EBB 01                    2787 	.db #0x01	; 1
      000EBC 3F                    2788 	.db #0x3f	; 63
      000EBD 40                    2789 	.db #0x40	; 64
      000EBE 40                    2790 	.db #0x40	; 64
      000EBF 40                    2791 	.db #0x40	; 64
      000EC0 3F                    2792 	.db #0x3f	; 63
      000EC1 1F                    2793 	.db #0x1f	; 31
      000EC2 20                    2794 	.db #0x20	; 32
      000EC3 40                    2795 	.db #0x40	; 64
      000EC4 20                    2796 	.db #0x20	; 32
      000EC5 1F                    2797 	.db #0x1f	; 31
      000EC6 7F                    2798 	.db #0x7f	; 127
      000EC7 20                    2799 	.db #0x20	; 32
      000EC8 18                    2800 	.db #0x18	; 24
      000EC9 20                    2801 	.db #0x20	; 32
      000ECA 7F                    2802 	.db #0x7f	; 127
      000ECB 63                    2803 	.db #0x63	; 99	'c'
      000ECC 14                    2804 	.db #0x14	; 20
      000ECD 08                    2805 	.db #0x08	; 8
      000ECE 14                    2806 	.db #0x14	; 20
      000ECF 63                    2807 	.db #0x63	; 99	'c'
      000ED0 03                    2808 	.db #0x03	; 3
      000ED1 04                    2809 	.db #0x04	; 4
      000ED2 78                    2810 	.db #0x78	; 120	'x'
      000ED3 04                    2811 	.db #0x04	; 4
      000ED4 03                    2812 	.db #0x03	; 3
      000ED5 61                    2813 	.db #0x61	; 97	'a'
      000ED6 51                    2814 	.db #0x51	; 81	'Q'
      000ED7 49                    2815 	.db #0x49	; 73	'I'
      000ED8 45                    2816 	.db #0x45	; 69	'E'
      000ED9 43                    2817 	.db #0x43	; 67	'C'
      000EDA 00                    2818 	.db #0x00	; 0
      000EDB 00                    2819 	.db #0x00	; 0
      000EDC 7F                    2820 	.db #0x7f	; 127
      000EDD 41                    2821 	.db #0x41	; 65	'A'
      000EDE 41                    2822 	.db #0x41	; 65	'A'
      000EDF 02                    2823 	.db #0x02	; 2
      000EE0 04                    2824 	.db #0x04	; 4
      000EE1 08                    2825 	.db #0x08	; 8
      000EE2 10                    2826 	.db #0x10	; 16
      000EE3 20                    2827 	.db #0x20	; 32
      000EE4 41                    2828 	.db #0x41	; 65	'A'
      000EE5 41                    2829 	.db #0x41	; 65	'A'
      000EE6 7F                    2830 	.db #0x7f	; 127
      000EE7 00                    2831 	.db #0x00	; 0
      000EE8 00                    2832 	.db #0x00	; 0
      000EE9 04                    2833 	.db #0x04	; 4
      000EEA 02                    2834 	.db #0x02	; 2
      000EEB 01                    2835 	.db #0x01	; 1
      000EEC 02                    2836 	.db #0x02	; 2
      000EED 04                    2837 	.db #0x04	; 4
      000EEE 40                    2838 	.db #0x40	; 64
      000EEF 40                    2839 	.db #0x40	; 64
      000EF0 40                    2840 	.db #0x40	; 64
      000EF1 40                    2841 	.db #0x40	; 64
      000EF2 40                    2842 	.db #0x40	; 64
      000EF3 00                    2843 	.db #0x00	; 0
      000EF4 01                    2844 	.db #0x01	; 1
      000EF5 02                    2845 	.db #0x02	; 2
      000EF6 04                    2846 	.db #0x04	; 4
      000EF7 00                    2847 	.db #0x00	; 0
      000EF8 20                    2848 	.db #0x20	; 32
      000EF9 54                    2849 	.db #0x54	; 84	'T'
      000EFA 54                    2850 	.db #0x54	; 84	'T'
      000EFB 54                    2851 	.db #0x54	; 84	'T'
      000EFC 78                    2852 	.db #0x78	; 120	'x'
      000EFD 7F                    2853 	.db #0x7f	; 127
      000EFE 48                    2854 	.db #0x48	; 72	'H'
      000EFF 44                    2855 	.db #0x44	; 68	'D'
      000F00 44                    2856 	.db #0x44	; 68	'D'
      000F01 38                    2857 	.db #0x38	; 56	'8'
      000F02 38                    2858 	.db #0x38	; 56	'8'
      000F03 44                    2859 	.db #0x44	; 68	'D'
      000F04 44                    2860 	.db #0x44	; 68	'D'
      000F05 44                    2861 	.db #0x44	; 68	'D'
      000F06 20                    2862 	.db #0x20	; 32
      000F07 38                    2863 	.db #0x38	; 56	'8'
      000F08 44                    2864 	.db #0x44	; 68	'D'
      000F09 44                    2865 	.db #0x44	; 68	'D'
      000F0A 48                    2866 	.db #0x48	; 72	'H'
      000F0B 7F                    2867 	.db #0x7f	; 127
      000F0C 38                    2868 	.db #0x38	; 56	'8'
      000F0D 54                    2869 	.db #0x54	; 84	'T'
      000F0E 54                    2870 	.db #0x54	; 84	'T'
      000F0F 54                    2871 	.db #0x54	; 84	'T'
      000F10 18                    2872 	.db #0x18	; 24
      000F11 08                    2873 	.db #0x08	; 8
      000F12 7E                    2874 	.db #0x7e	; 126
      000F13 09                    2875 	.db #0x09	; 9
      000F14 01                    2876 	.db #0x01	; 1
      000F15 02                    2877 	.db #0x02	; 2
      000F16 08                    2878 	.db #0x08	; 8
      000F17 14                    2879 	.db #0x14	; 20
      000F18 54                    2880 	.db #0x54	; 84	'T'
      000F19 54                    2881 	.db #0x54	; 84	'T'
      000F1A 3C                    2882 	.db #0x3c	; 60
      000F1B 7F                    2883 	.db #0x7f	; 127
      000F1C 08                    2884 	.db #0x08	; 8
      000F1D 04                    2885 	.db #0x04	; 4
      000F1E 04                    2886 	.db #0x04	; 4
      000F1F 78                    2887 	.db #0x78	; 120	'x'
      000F20 00                    2888 	.db #0x00	; 0
      000F21 44                    2889 	.db #0x44	; 68	'D'
      000F22 7D                    2890 	.db #0x7d	; 125
      000F23 40                    2891 	.db #0x40	; 64
      000F24 00                    2892 	.db #0x00	; 0
      000F25 20                    2893 	.db #0x20	; 32
      000F26 40                    2894 	.db #0x40	; 64
      000F27 44                    2895 	.db #0x44	; 68	'D'
      000F28 3D                    2896 	.db #0x3d	; 61
      000F29 00                    2897 	.db #0x00	; 0
      000F2A 00                    2898 	.db #0x00	; 0
      000F2B 7F                    2899 	.db #0x7f	; 127
      000F2C 10                    2900 	.db #0x10	; 16
      000F2D 28                    2901 	.db #0x28	; 40
      000F2E 44                    2902 	.db #0x44	; 68	'D'
      000F2F 00                    2903 	.db #0x00	; 0
      000F30 41                    2904 	.db #0x41	; 65	'A'
      000F31 7F                    2905 	.db #0x7f	; 127
      000F32 40                    2906 	.db #0x40	; 64
      000F33 00                    2907 	.db #0x00	; 0
      000F34 7C                    2908 	.db #0x7c	; 124
      000F35 04                    2909 	.db #0x04	; 4
      000F36 18                    2910 	.db #0x18	; 24
      000F37 04                    2911 	.db #0x04	; 4
      000F38 78                    2912 	.db #0x78	; 120	'x'
      000F39 7C                    2913 	.db #0x7c	; 124
      000F3A 08                    2914 	.db #0x08	; 8
      000F3B 04                    2915 	.db #0x04	; 4
      000F3C 04                    2916 	.db #0x04	; 4
      000F3D 78                    2917 	.db #0x78	; 120	'x'
      000F3E 38                    2918 	.db #0x38	; 56	'8'
      000F3F 44                    2919 	.db #0x44	; 68	'D'
      000F40 44                    2920 	.db #0x44	; 68	'D'
      000F41 44                    2921 	.db #0x44	; 68	'D'
      000F42 38                    2922 	.db #0x38	; 56	'8'
      000F43 7C                    2923 	.db #0x7c	; 124
      000F44 14                    2924 	.db #0x14	; 20
      000F45 14                    2925 	.db #0x14	; 20
      000F46 14                    2926 	.db #0x14	; 20
      000F47 08                    2927 	.db #0x08	; 8
      000F48 08                    2928 	.db #0x08	; 8
      000F49 14                    2929 	.db #0x14	; 20
      000F4A 14                    2930 	.db #0x14	; 20
      000F4B 18                    2931 	.db #0x18	; 24
      000F4C 7C                    2932 	.db #0x7c	; 124
      000F4D 7C                    2933 	.db #0x7c	; 124
      000F4E 08                    2934 	.db #0x08	; 8
      000F4F 04                    2935 	.db #0x04	; 4
      000F50 04                    2936 	.db #0x04	; 4
      000F51 08                    2937 	.db #0x08	; 8
      000F52 48                    2938 	.db #0x48	; 72	'H'
      000F53 54                    2939 	.db #0x54	; 84	'T'
      000F54 54                    2940 	.db #0x54	; 84	'T'
      000F55 54                    2941 	.db #0x54	; 84	'T'
      000F56 20                    2942 	.db #0x20	; 32
      000F57 04                    2943 	.db #0x04	; 4
      000F58 3F                    2944 	.db #0x3f	; 63
      000F59 44                    2945 	.db #0x44	; 68	'D'
      000F5A 40                    2946 	.db #0x40	; 64
      000F5B 20                    2947 	.db #0x20	; 32
      000F5C 3C                    2948 	.db #0x3c	; 60
      000F5D 40                    2949 	.db #0x40	; 64
      000F5E 40                    2950 	.db #0x40	; 64
      000F5F 20                    2951 	.db #0x20	; 32
      000F60 7C                    2952 	.db #0x7c	; 124
      000F61 1C                    2953 	.db #0x1c	; 28
      000F62 20                    2954 	.db #0x20	; 32
      000F63 40                    2955 	.db #0x40	; 64
      000F64 20                    2956 	.db #0x20	; 32
      000F65 1C                    2957 	.db #0x1c	; 28
      000F66 3C                    2958 	.db #0x3c	; 60
      000F67 40                    2959 	.db #0x40	; 64
      000F68 30                    2960 	.db #0x30	; 48	'0'
      000F69 40                    2961 	.db #0x40	; 64
      000F6A 3C                    2962 	.db #0x3c	; 60
      000F6B 44                    2963 	.db #0x44	; 68	'D'
      000F6C 28                    2964 	.db #0x28	; 40
      000F6D 10                    2965 	.db #0x10	; 16
      000F6E 28                    2966 	.db #0x28	; 40
      000F6F 44                    2967 	.db #0x44	; 68	'D'
      000F70 0C                    2968 	.db #0x0c	; 12
      000F71 50                    2969 	.db #0x50	; 80	'P'
      000F72 50                    2970 	.db #0x50	; 80	'P'
      000F73 50                    2971 	.db #0x50	; 80	'P'
      000F74 3C                    2972 	.db #0x3c	; 60
      000F75 44                    2973 	.db #0x44	; 68	'D'
      000F76 64                    2974 	.db #0x64	; 100	'd'
      000F77 54                    2975 	.db #0x54	; 84	'T'
      000F78 4C                    2976 	.db #0x4c	; 76	'L'
      000F79 44                    2977 	.db #0x44	; 68	'D'
      000F7A 00                    2978 	.db #0x00	; 0
      000F7B 08                    2979 	.db #0x08	; 8
      000F7C 36                    2980 	.db #0x36	; 54	'6'
      000F7D 41                    2981 	.db #0x41	; 65	'A'
      000F7E 00                    2982 	.db #0x00	; 0
      000F7F 00                    2983 	.db #0x00	; 0
      000F80 00                    2984 	.db #0x00	; 0
      000F81 7F                    2985 	.db #0x7f	; 127
      000F82 00                    2986 	.db #0x00	; 0
      000F83 00                    2987 	.db #0x00	; 0
      000F84 00                    2988 	.db #0x00	; 0
      000F85 41                    2989 	.db #0x41	; 65	'A'
      000F86 36                    2990 	.db #0x36	; 54	'6'
      000F87 08                    2991 	.db #0x08	; 8
      000F88 00                    2992 	.db #0x00	; 0
      000F89 08                    2993 	.db #0x08	; 8
      000F8A 08                    2994 	.db #0x08	; 8
      000F8B 2A                    2995 	.db #0x2a	; 42
      000F8C 1C                    2996 	.db #0x1c	; 28
      000F8D 08                    2997 	.db #0x08	; 8
      000F8E 08                    2998 	.db #0x08	; 8
      000F8F 1C                    2999 	.db #0x1c	; 28
      000F90 2A                    3000 	.db #0x2a	; 42
      000F91 08                    3001 	.db #0x08	; 8
      000F92 08                    3002 	.db #0x08	; 8
                           0001E0  3003 Fmain$__str_0$0$0 == .
      000F93                       3004 ___str_0:
      000F93 01                    3005 	.db 0x01
      000F94 20 70 75 6C 73 6F 73  3006 	.ascii " pulsos=%8d"
             3D 25 38 64
      000F9F 00                    3007 	.db 0x00
                           0001ED  3008 Fmain$__str_1$0$0 == .
      000FA0                       3009 ___str_1:
      000FA0 02                    3010 	.db 0x02
      000FA1 20 43 4D 3D 25 31 32  3011 	.ascii " CM=%12d"
             64
      000FA9 00                    3012 	.db 0x00
                                   3013 	.area XINIT   (CODE)
                                   3014 	.area CABS    (ABS,CODE)
