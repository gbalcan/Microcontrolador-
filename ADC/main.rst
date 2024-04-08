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
                                     11 	.globl _le_adc0_PARM_2
                                     12 	.globl _fonte
                                     13 	.globl _main
                                     14 	.globl _le_adc0
                                     15 	.globl _esc_DAC0
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
                                     29 	.globl _Voltage_Reference_Init
                                     30 	.globl _DAC_Init
                                     31 	.globl _ADC_Init
                                     32 	.globl _Timer_Init
                                     33 	.globl _Reset_Sources_Init
                                     34 	.globl _P7_7
                                     35 	.globl _P7_6
                                     36 	.globl _P7_5
                                     37 	.globl _P7_4
                                     38 	.globl _P7_3
                                     39 	.globl _P7_2
                                     40 	.globl _P7_1
                                     41 	.globl _P7_0
                                     42 	.globl _P6_7
                                     43 	.globl _P6_6
                                     44 	.globl _P6_5
                                     45 	.globl _P6_4
                                     46 	.globl _P6_3
                                     47 	.globl _P6_2
                                     48 	.globl _P6_1
                                     49 	.globl _P6_0
                                     50 	.globl _P5_7
                                     51 	.globl _P5_6
                                     52 	.globl _P5_5
                                     53 	.globl _P5_4
                                     54 	.globl _P5_3
                                     55 	.globl _P5_2
                                     56 	.globl _P5_1
                                     57 	.globl _P5_0
                                     58 	.globl _P4_7
                                     59 	.globl _P4_6
                                     60 	.globl _P4_5
                                     61 	.globl _P4_4
                                     62 	.globl _P4_3
                                     63 	.globl _P4_2
                                     64 	.globl _P4_1
                                     65 	.globl _P4_0
                                     66 	.globl _P3_7
                                     67 	.globl _P3_6
                                     68 	.globl _P3_5
                                     69 	.globl _P3_4
                                     70 	.globl _P3_3
                                     71 	.globl _P3_2
                                     72 	.globl _P3_1
                                     73 	.globl _P3_0
                                     74 	.globl _P2_7
                                     75 	.globl _P2_6
                                     76 	.globl _P2_5
                                     77 	.globl _P2_4
                                     78 	.globl _P2_3
                                     79 	.globl _P2_2
                                     80 	.globl _P2_1
                                     81 	.globl _P2_0
                                     82 	.globl _P1_7
                                     83 	.globl _P1_6
                                     84 	.globl _P1_5
                                     85 	.globl _P1_4
                                     86 	.globl _P1_3
                                     87 	.globl _P1_2
                                     88 	.globl _P1_1
                                     89 	.globl _P1_0
                                     90 	.globl _P0_7
                                     91 	.globl _P0_6
                                     92 	.globl _P0_5
                                     93 	.globl _P0_4
                                     94 	.globl _P0_3
                                     95 	.globl _P0_2
                                     96 	.globl _P0_1
                                     97 	.globl _P0_0
                                     98 	.globl _CANTEST
                                     99 	.globl _CANCCE
                                    100 	.globl _CANDAR
                                    101 	.globl _CANIF
                                    102 	.globl _CANEIE
                                    103 	.globl _CANSIE
                                    104 	.globl _CANIE
                                    105 	.globl _CANINIT
                                    106 	.globl _SPIEN
                                    107 	.globl _TXBMT
                                    108 	.globl _NSSMD0
                                    109 	.globl _NSSMD1
                                    110 	.globl _RXOVRN
                                    111 	.globl _MODF
                                    112 	.globl _WCOL
                                    113 	.globl _SPIF
                                    114 	.globl _AD2WINT
                                    115 	.globl _AD2CM0
                                    116 	.globl _AD2CM1
                                    117 	.globl _AD2CM2
                                    118 	.globl _AD2BUSY
                                    119 	.globl _AD2INT
                                    120 	.globl _AD2TM
                                    121 	.globl _AD2EN
                                    122 	.globl _AD0LJST
                                    123 	.globl _AD0WINT
                                    124 	.globl _AD0CM0
                                    125 	.globl _AD0CM1
                                    126 	.globl _AD0BUSY
                                    127 	.globl _AD0INT
                                    128 	.globl _AD0TM
                                    129 	.globl _AD0EN
                                    130 	.globl _CCF0
                                    131 	.globl _CCF1
                                    132 	.globl _CCF2
                                    133 	.globl _CCF3
                                    134 	.globl _CCF4
                                    135 	.globl _CCF5
                                    136 	.globl _CR
                                    137 	.globl _CF
                                    138 	.globl _P
                                    139 	.globl _F1
                                    140 	.globl _OV
                                    141 	.globl _RS0
                                    142 	.globl _RS1
                                    143 	.globl _F0
                                    144 	.globl _AC
                                    145 	.globl _CY
                                    146 	.globl _CPRL4
                                    147 	.globl _CT4
                                    148 	.globl _TR4
                                    149 	.globl _EXEN4
                                    150 	.globl _EXF4
                                    151 	.globl _TF4
                                    152 	.globl _CPRL3
                                    153 	.globl _CT3
                                    154 	.globl _TR3
                                    155 	.globl _EXEN3
                                    156 	.globl _EXF3
                                    157 	.globl _TF3
                                    158 	.globl _CPRL2
                                    159 	.globl _CT2
                                    160 	.globl _TR2
                                    161 	.globl _EXEN2
                                    162 	.globl _EXF2
                                    163 	.globl _TF2
                                    164 	.globl _LEC0
                                    165 	.globl _LEC1
                                    166 	.globl _LEC2
                                    167 	.globl _TXOK
                                    168 	.globl _RXOK
                                    169 	.globl _EPASS
                                    170 	.globl _EWARN
                                    171 	.globl _BOFF
                                    172 	.globl _SMBTOE
                                    173 	.globl _SMBFTE
                                    174 	.globl _AA
                                    175 	.globl _SI
                                    176 	.globl _STO
                                    177 	.globl _STA
                                    178 	.globl _ENSMB
                                    179 	.globl _BUSY
                                    180 	.globl _PX0
                                    181 	.globl _PT0
                                    182 	.globl _PX1
                                    183 	.globl _PT1
                                    184 	.globl _PS0
                                    185 	.globl _PT2
                                    186 	.globl _EX0
                                    187 	.globl _ET0
                                    188 	.globl _EX1
                                    189 	.globl _ET1
                                    190 	.globl _ES0
                                    191 	.globl _ET2
                                    192 	.globl _EA
                                    193 	.globl _RI1
                                    194 	.globl _TI1
                                    195 	.globl _RB81
                                    196 	.globl _TB81
                                    197 	.globl _REN1
                                    198 	.globl _MCE1
                                    199 	.globl _S1MODE
                                    200 	.globl _RI0
                                    201 	.globl _TI0
                                    202 	.globl _RB80
                                    203 	.globl _TB80
                                    204 	.globl _REN0
                                    205 	.globl _SM20
                                    206 	.globl _SM10
                                    207 	.globl _SM00
                                    208 	.globl _CP2HYN0
                                    209 	.globl _CP2HYN1
                                    210 	.globl _CP2HYP0
                                    211 	.globl _CP2HYP1
                                    212 	.globl _CP2FIF
                                    213 	.globl _CP2RIF
                                    214 	.globl _CP2OUT
                                    215 	.globl _CP2EN
                                    216 	.globl _CP1HYN0
                                    217 	.globl _CP1HYN1
                                    218 	.globl _CP1HYP0
                                    219 	.globl _CP1HYP1
                                    220 	.globl _CP1FIF
                                    221 	.globl _CP1RIF
                                    222 	.globl _CP1OUT
                                    223 	.globl _CP1EN
                                    224 	.globl _CP0HYN0
                                    225 	.globl _CP0HYN1
                                    226 	.globl _CP0HYP0
                                    227 	.globl _CP0HYP1
                                    228 	.globl _CP0FIF
                                    229 	.globl _CP0RIF
                                    230 	.globl _CP0OUT
                                    231 	.globl _CP0EN
                                    232 	.globl _IT0
                                    233 	.globl _IE0
                                    234 	.globl _IT1
                                    235 	.globl _IE1
                                    236 	.globl _TR0
                                    237 	.globl _TF0
                                    238 	.globl _TR1
                                    239 	.globl _TF1
                                    240 	.globl __XPAGE
                                    241 	.globl _DP
                                    242 	.globl _ADC0
                                    243 	.globl _ADC0LT
                                    244 	.globl _ADC0GT
                                    245 	.globl _TMR4
                                    246 	.globl _TMR3
                                    247 	.globl _TMR2
                                    248 	.globl _RCAP4
                                    249 	.globl _RCAP3
                                    250 	.globl _RCAP2
                                    251 	.globl _DAC1
                                    252 	.globl _DAC0
                                    253 	.globl _CAN0DAT
                                    254 	.globl _PCA0CP5
                                    255 	.globl _PCA0CP4
                                    256 	.globl _PCA0CP3
                                    257 	.globl _PCA0CP2
                                    258 	.globl _PCA0CP1
                                    259 	.globl _PCA0CP0
                                    260 	.globl _PCA0
                                    261 	.globl _WDTCN
                                    262 	.globl _PCA0CPH1
                                    263 	.globl _PCA0CPL1
                                    264 	.globl _PCA0CPH0
                                    265 	.globl _PCA0CPL0
                                    266 	.globl _PCA0H
                                    267 	.globl _PCA0L
                                    268 	.globl _P7
                                    269 	.globl _CAN0CN
                                    270 	.globl _SPI0CN
                                    271 	.globl _EIP2
                                    272 	.globl _EIP1
                                    273 	.globl _B
                                    274 	.globl _RSTSRC
                                    275 	.globl _PCA0CPH4
                                    276 	.globl _PCA0CPL4
                                    277 	.globl _PCA0CPH3
                                    278 	.globl _PCA0CPL3
                                    279 	.globl _PCA0CPH2
                                    280 	.globl _PCA0CPL2
                                    281 	.globl _P6
                                    282 	.globl _ADC2CN
                                    283 	.globl _ADC0CN
                                    284 	.globl _EIE2
                                    285 	.globl _EIE1
                                    286 	.globl _XBR3
                                    287 	.globl _XBR2
                                    288 	.globl _XBR1
                                    289 	.globl _PCA0CPH5
                                    290 	.globl _XBR0
                                    291 	.globl _PCA0CPL5
                                    292 	.globl _ACC
                                    293 	.globl _PCA0CPM5
                                    294 	.globl _PCA0CPM4
                                    295 	.globl _PCA0CPM3
                                    296 	.globl _PCA0CPM2
                                    297 	.globl _CAN0TST
                                    298 	.globl _PCA0CPM1
                                    299 	.globl _CAN0ADR
                                    300 	.globl _PCA0CPM0
                                    301 	.globl _CAN0DATH
                                    302 	.globl _PCA0MD
                                    303 	.globl _P5
                                    304 	.globl _CAN0DATL
                                    305 	.globl _PCA0CN
                                    306 	.globl _HVA0CN
                                    307 	.globl _DAC1CN
                                    308 	.globl _DAC0CN
                                    309 	.globl _DAC1H
                                    310 	.globl _DAC0H
                                    311 	.globl _DAC1L
                                    312 	.globl _DAC0L
                                    313 	.globl _REF0CN
                                    314 	.globl _PSW
                                    315 	.globl _SMB0CR
                                    316 	.globl _TMR4H
                                    317 	.globl _TMR3H
                                    318 	.globl _TMR2H
                                    319 	.globl _TMR4L
                                    320 	.globl _TMR3L
                                    321 	.globl _TMR2L
                                    322 	.globl _RCAP4H
                                    323 	.globl _RCAP3H
                                    324 	.globl _RCAP2H
                                    325 	.globl _RCAP4L
                                    326 	.globl _RCAP3L
                                    327 	.globl _RCAP2L
                                    328 	.globl _TMR4CF
                                    329 	.globl _TMR3CF
                                    330 	.globl _TMR2CF
                                    331 	.globl _P4
                                    332 	.globl _TMR4CN
                                    333 	.globl _TMR3CN
                                    334 	.globl _TMR2CN
                                    335 	.globl _ADC0LTH
                                    336 	.globl _ADC2LT
                                    337 	.globl _ADC0LTL
                                    338 	.globl _ADC0GTH
                                    339 	.globl _ADC2GT
                                    340 	.globl _ADC0GTL
                                    341 	.globl _SMB0ADR
                                    342 	.globl _SMB0DAT
                                    343 	.globl _SMB0STA
                                    344 	.globl _CAN0STA
                                    345 	.globl _SMB0CN
                                    346 	.globl _ADC0H
                                    347 	.globl _ADC2
                                    348 	.globl _ADC0L
                                    349 	.globl _ADC2CF
                                    350 	.globl _ADC0CF
                                    351 	.globl _AMX2SL
                                    352 	.globl _AMX0SL
                                    353 	.globl _AMX0CF
                                    354 	.globl _AMX0PRT
                                    355 	.globl _AMX2CF
                                    356 	.globl _SADEN0
                                    357 	.globl _IP
                                    358 	.globl _FLACL
                                    359 	.globl _FLSCL
                                    360 	.globl _P3
                                    361 	.globl _P3MDIN
                                    362 	.globl _P2MDIN
                                    363 	.globl _P1MDIN
                                    364 	.globl _SADDR1
                                    365 	.globl _SADDR0
                                    366 	.globl _IE
                                    367 	.globl _P3MDOUT
                                    368 	.globl _P2MDOUT
                                    369 	.globl _P1MDOUT
                                    370 	.globl _P0MDOUT
                                    371 	.globl _EMI0CF
                                    372 	.globl _EMI0CN
                                    373 	.globl _EMI0TC
                                    374 	.globl _P2
                                    375 	.globl _P7MDOUT
                                    376 	.globl _P6MDOUT
                                    377 	.globl _P5MDOUT
                                    378 	.globl _SPI0CKR
                                    379 	.globl _P4MDOUT
                                    380 	.globl _SPI0DAT
                                    381 	.globl _SPI0CFG
                                    382 	.globl _SBUF1
                                    383 	.globl _SBUF0
                                    384 	.globl _SCON1
                                    385 	.globl _SCON0
                                    386 	.globl _CLKSEL
                                    387 	.globl _SFRPGCN
                                    388 	.globl _SSTA0
                                    389 	.globl _P1
                                    390 	.globl _PSCTL
                                    391 	.globl _CKCON
                                    392 	.globl _TH1
                                    393 	.globl _OSCXCN
                                    394 	.globl _TH0
                                    395 	.globl _OSCICL
                                    396 	.globl _TL1
                                    397 	.globl _OSCICN
                                    398 	.globl _TL0
                                    399 	.globl _CPT2MD
                                    400 	.globl _CPT1MD
                                    401 	.globl _CPT0MD
                                    402 	.globl _TMOD
                                    403 	.globl _CPT2CN
                                    404 	.globl _CPT1CN
                                    405 	.globl _CPT0CN
                                    406 	.globl _TCON
                                    407 	.globl _PCON
                                    408 	.globl _SFRLAST
                                    409 	.globl _SFRNEXT
                                    410 	.globl _SFRPAGE
                                    411 	.globl _DPH
                                    412 	.globl _DPL
                                    413 	.globl _SP
                                    414 	.globl _P0
                                    415 	.globl _limpa_glcd_PARM_1
                                    416 	.globl _conf_pag_PARM_2
                                    417 	.globl _conf_Y_PARM_2
                                    418 	.globl _esc_glcd_PARM_3
                                    419 	.globl _esc_glcd_PARM_2
                                    420 	.globl _le_glcd_PARM_2
                                    421 	.globl _le_glcd_PARM_1
                                    422 	.globl _putchar
                                    423 ;--------------------------------------------------------
                                    424 ; special function registers
                                    425 ;--------------------------------------------------------
                                    426 	.area RSEG    (ABS,DATA)
      000000                        427 	.org 0x0000
                           000080   428 G$P0$0$0 == 0x0080
                           000080   429 _P0	=	0x0080
                           000081   430 G$SP$0$0 == 0x0081
                           000081   431 _SP	=	0x0081
                           000082   432 G$DPL$0$0 == 0x0082
                           000082   433 _DPL	=	0x0082
                           000083   434 G$DPH$0$0 == 0x0083
                           000083   435 _DPH	=	0x0083
                           000084   436 G$SFRPAGE$0$0 == 0x0084
                           000084   437 _SFRPAGE	=	0x0084
                           000085   438 G$SFRNEXT$0$0 == 0x0085
                           000085   439 _SFRNEXT	=	0x0085
                           000086   440 G$SFRLAST$0$0 == 0x0086
                           000086   441 _SFRLAST	=	0x0086
                           000087   442 G$PCON$0$0 == 0x0087
                           000087   443 _PCON	=	0x0087
                           000088   444 G$TCON$0$0 == 0x0088
                           000088   445 _TCON	=	0x0088
                           000088   446 G$CPT0CN$0$0 == 0x0088
                           000088   447 _CPT0CN	=	0x0088
                           000088   448 G$CPT1CN$0$0 == 0x0088
                           000088   449 _CPT1CN	=	0x0088
                           000088   450 G$CPT2CN$0$0 == 0x0088
                           000088   451 _CPT2CN	=	0x0088
                           000089   452 G$TMOD$0$0 == 0x0089
                           000089   453 _TMOD	=	0x0089
                           000089   454 G$CPT0MD$0$0 == 0x0089
                           000089   455 _CPT0MD	=	0x0089
                           000089   456 G$CPT1MD$0$0 == 0x0089
                           000089   457 _CPT1MD	=	0x0089
                           000089   458 G$CPT2MD$0$0 == 0x0089
                           000089   459 _CPT2MD	=	0x0089
                           00008A   460 G$TL0$0$0 == 0x008a
                           00008A   461 _TL0	=	0x008a
                           00008A   462 G$OSCICN$0$0 == 0x008a
                           00008A   463 _OSCICN	=	0x008a
                           00008B   464 G$TL1$0$0 == 0x008b
                           00008B   465 _TL1	=	0x008b
                           00008B   466 G$OSCICL$0$0 == 0x008b
                           00008B   467 _OSCICL	=	0x008b
                           00008C   468 G$TH0$0$0 == 0x008c
                           00008C   469 _TH0	=	0x008c
                           00008C   470 G$OSCXCN$0$0 == 0x008c
                           00008C   471 _OSCXCN	=	0x008c
                           00008D   472 G$TH1$0$0 == 0x008d
                           00008D   473 _TH1	=	0x008d
                           00008E   474 G$CKCON$0$0 == 0x008e
                           00008E   475 _CKCON	=	0x008e
                           00008F   476 G$PSCTL$0$0 == 0x008f
                           00008F   477 _PSCTL	=	0x008f
                           000090   478 G$P1$0$0 == 0x0090
                           000090   479 _P1	=	0x0090
                           000091   480 G$SSTA0$0$0 == 0x0091
                           000091   481 _SSTA0	=	0x0091
                           000096   482 G$SFRPGCN$0$0 == 0x0096
                           000096   483 _SFRPGCN	=	0x0096
                           000097   484 G$CLKSEL$0$0 == 0x0097
                           000097   485 _CLKSEL	=	0x0097
                           000098   486 G$SCON0$0$0 == 0x0098
                           000098   487 _SCON0	=	0x0098
                           000098   488 G$SCON1$0$0 == 0x0098
                           000098   489 _SCON1	=	0x0098
                           000099   490 G$SBUF0$0$0 == 0x0099
                           000099   491 _SBUF0	=	0x0099
                           000099   492 G$SBUF1$0$0 == 0x0099
                           000099   493 _SBUF1	=	0x0099
                           00009A   494 G$SPI0CFG$0$0 == 0x009a
                           00009A   495 _SPI0CFG	=	0x009a
                           00009B   496 G$SPI0DAT$0$0 == 0x009b
                           00009B   497 _SPI0DAT	=	0x009b
                           00009C   498 G$P4MDOUT$0$0 == 0x009c
                           00009C   499 _P4MDOUT	=	0x009c
                           00009D   500 G$SPI0CKR$0$0 == 0x009d
                           00009D   501 _SPI0CKR	=	0x009d
                           00009D   502 G$P5MDOUT$0$0 == 0x009d
                           00009D   503 _P5MDOUT	=	0x009d
                           00009E   504 G$P6MDOUT$0$0 == 0x009e
                           00009E   505 _P6MDOUT	=	0x009e
                           00009F   506 G$P7MDOUT$0$0 == 0x009f
                           00009F   507 _P7MDOUT	=	0x009f
                           0000A0   508 G$P2$0$0 == 0x00a0
                           0000A0   509 _P2	=	0x00a0
                           0000A1   510 G$EMI0TC$0$0 == 0x00a1
                           0000A1   511 _EMI0TC	=	0x00a1
                           0000A2   512 G$EMI0CN$0$0 == 0x00a2
                           0000A2   513 _EMI0CN	=	0x00a2
                           0000A3   514 G$EMI0CF$0$0 == 0x00a3
                           0000A3   515 _EMI0CF	=	0x00a3
                           0000A4   516 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   517 _P0MDOUT	=	0x00a4
                           0000A5   518 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   519 _P1MDOUT	=	0x00a5
                           0000A6   520 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   521 _P2MDOUT	=	0x00a6
                           0000A7   522 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   523 _P3MDOUT	=	0x00a7
                           0000A8   524 G$IE$0$0 == 0x00a8
                           0000A8   525 _IE	=	0x00a8
                           0000A9   526 G$SADDR0$0$0 == 0x00a9
                           0000A9   527 _SADDR0	=	0x00a9
                           0000A9   528 G$SADDR1$0$0 == 0x00a9
                           0000A9   529 _SADDR1	=	0x00a9
                           0000AD   530 G$P1MDIN$0$0 == 0x00ad
                           0000AD   531 _P1MDIN	=	0x00ad
                           0000AE   532 G$P2MDIN$0$0 == 0x00ae
                           0000AE   533 _P2MDIN	=	0x00ae
                           0000AF   534 G$P3MDIN$0$0 == 0x00af
                           0000AF   535 _P3MDIN	=	0x00af
                           0000B0   536 G$P3$0$0 == 0x00b0
                           0000B0   537 _P3	=	0x00b0
                           0000B7   538 G$FLSCL$0$0 == 0x00b7
                           0000B7   539 _FLSCL	=	0x00b7
                           0000B7   540 G$FLACL$0$0 == 0x00b7
                           0000B7   541 _FLACL	=	0x00b7
                           0000B8   542 G$IP$0$0 == 0x00b8
                           0000B8   543 _IP	=	0x00b8
                           0000B9   544 G$SADEN0$0$0 == 0x00b9
                           0000B9   545 _SADEN0	=	0x00b9
                           0000BA   546 G$AMX2CF$0$0 == 0x00ba
                           0000BA   547 _AMX2CF	=	0x00ba
                           0000BD   548 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   549 _AMX0PRT	=	0x00bd
                           0000BA   550 G$AMX0CF$0$0 == 0x00ba
                           0000BA   551 _AMX0CF	=	0x00ba
                           0000BB   552 G$AMX0SL$0$0 == 0x00bb
                           0000BB   553 _AMX0SL	=	0x00bb
                           0000BB   554 G$AMX2SL$0$0 == 0x00bb
                           0000BB   555 _AMX2SL	=	0x00bb
                           0000BC   556 G$ADC0CF$0$0 == 0x00bc
                           0000BC   557 _ADC0CF	=	0x00bc
                           0000BC   558 G$ADC2CF$0$0 == 0x00bc
                           0000BC   559 _ADC2CF	=	0x00bc
                           0000BE   560 G$ADC0L$0$0 == 0x00be
                           0000BE   561 _ADC0L	=	0x00be
                           0000BE   562 G$ADC2$0$0 == 0x00be
                           0000BE   563 _ADC2	=	0x00be
                           0000BF   564 G$ADC0H$0$0 == 0x00bf
                           0000BF   565 _ADC0H	=	0x00bf
                           0000C0   566 G$SMB0CN$0$0 == 0x00c0
                           0000C0   567 _SMB0CN	=	0x00c0
                           0000C0   568 G$CAN0STA$0$0 == 0x00c0
                           0000C0   569 _CAN0STA	=	0x00c0
                           0000C1   570 G$SMB0STA$0$0 == 0x00c1
                           0000C1   571 _SMB0STA	=	0x00c1
                           0000C2   572 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   573 _SMB0DAT	=	0x00c2
                           0000C3   574 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   575 _SMB0ADR	=	0x00c3
                           0000C4   576 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   577 _ADC0GTL	=	0x00c4
                           0000C4   578 G$ADC2GT$0$0 == 0x00c4
                           0000C4   579 _ADC2GT	=	0x00c4
                           0000C5   580 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   581 _ADC0GTH	=	0x00c5
                           0000C6   582 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   583 _ADC0LTL	=	0x00c6
                           0000C6   584 G$ADC2LT$0$0 == 0x00c6
                           0000C6   585 _ADC2LT	=	0x00c6
                           0000C7   586 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   587 _ADC0LTH	=	0x00c7
                           0000C8   588 G$TMR2CN$0$0 == 0x00c8
                           0000C8   589 _TMR2CN	=	0x00c8
                           0000C8   590 G$TMR3CN$0$0 == 0x00c8
                           0000C8   591 _TMR3CN	=	0x00c8
                           0000C8   592 G$TMR4CN$0$0 == 0x00c8
                           0000C8   593 _TMR4CN	=	0x00c8
                           0000C8   594 G$P4$0$0 == 0x00c8
                           0000C8   595 _P4	=	0x00c8
                           0000C9   596 G$TMR2CF$0$0 == 0x00c9
                           0000C9   597 _TMR2CF	=	0x00c9
                           0000C9   598 G$TMR3CF$0$0 == 0x00c9
                           0000C9   599 _TMR3CF	=	0x00c9
                           0000C9   600 G$TMR4CF$0$0 == 0x00c9
                           0000C9   601 _TMR4CF	=	0x00c9
                           0000CA   602 G$RCAP2L$0$0 == 0x00ca
                           0000CA   603 _RCAP2L	=	0x00ca
                           0000CA   604 G$RCAP3L$0$0 == 0x00ca
                           0000CA   605 _RCAP3L	=	0x00ca
                           0000CA   606 G$RCAP4L$0$0 == 0x00ca
                           0000CA   607 _RCAP4L	=	0x00ca
                           0000CB   608 G$RCAP2H$0$0 == 0x00cb
                           0000CB   609 _RCAP2H	=	0x00cb
                           0000CB   610 G$RCAP3H$0$0 == 0x00cb
                           0000CB   611 _RCAP3H	=	0x00cb
                           0000CB   612 G$RCAP4H$0$0 == 0x00cb
                           0000CB   613 _RCAP4H	=	0x00cb
                           0000CC   614 G$TMR2L$0$0 == 0x00cc
                           0000CC   615 _TMR2L	=	0x00cc
                           0000CC   616 G$TMR3L$0$0 == 0x00cc
                           0000CC   617 _TMR3L	=	0x00cc
                           0000CC   618 G$TMR4L$0$0 == 0x00cc
                           0000CC   619 _TMR4L	=	0x00cc
                           0000CD   620 G$TMR2H$0$0 == 0x00cd
                           0000CD   621 _TMR2H	=	0x00cd
                           0000CD   622 G$TMR3H$0$0 == 0x00cd
                           0000CD   623 _TMR3H	=	0x00cd
                           0000CD   624 G$TMR4H$0$0 == 0x00cd
                           0000CD   625 _TMR4H	=	0x00cd
                           0000CF   626 G$SMB0CR$0$0 == 0x00cf
                           0000CF   627 _SMB0CR	=	0x00cf
                           0000D0   628 G$PSW$0$0 == 0x00d0
                           0000D0   629 _PSW	=	0x00d0
                           0000D1   630 G$REF0CN$0$0 == 0x00d1
                           0000D1   631 _REF0CN	=	0x00d1
                           0000D2   632 G$DAC0L$0$0 == 0x00d2
                           0000D2   633 _DAC0L	=	0x00d2
                           0000D2   634 G$DAC1L$0$0 == 0x00d2
                           0000D2   635 _DAC1L	=	0x00d2
                           0000D3   636 G$DAC0H$0$0 == 0x00d3
                           0000D3   637 _DAC0H	=	0x00d3
                           0000D3   638 G$DAC1H$0$0 == 0x00d3
                           0000D3   639 _DAC1H	=	0x00d3
                           0000D4   640 G$DAC0CN$0$0 == 0x00d4
                           0000D4   641 _DAC0CN	=	0x00d4
                           0000D4   642 G$DAC1CN$0$0 == 0x00d4
                           0000D4   643 _DAC1CN	=	0x00d4
                           0000D6   644 G$HVA0CN$0$0 == 0x00d6
                           0000D6   645 _HVA0CN	=	0x00d6
                           0000D8   646 G$PCA0CN$0$0 == 0x00d8
                           0000D8   647 _PCA0CN	=	0x00d8
                           0000D8   648 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   649 _CAN0DATL	=	0x00d8
                           0000D8   650 G$P5$0$0 == 0x00d8
                           0000D8   651 _P5	=	0x00d8
                           0000D9   652 G$PCA0MD$0$0 == 0x00d9
                           0000D9   653 _PCA0MD	=	0x00d9
                           0000D9   654 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   655 _CAN0DATH	=	0x00d9
                           0000DA   656 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   657 _PCA0CPM0	=	0x00da
                           0000DA   658 G$CAN0ADR$0$0 == 0x00da
                           0000DA   659 _CAN0ADR	=	0x00da
                           0000DB   660 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   661 _PCA0CPM1	=	0x00db
                           0000DB   662 G$CAN0TST$0$0 == 0x00db
                           0000DB   663 _CAN0TST	=	0x00db
                           0000DC   664 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   665 _PCA0CPM2	=	0x00dc
                           0000DD   666 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   667 _PCA0CPM3	=	0x00dd
                           0000DE   668 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   669 _PCA0CPM4	=	0x00de
                           0000DF   670 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   671 _PCA0CPM5	=	0x00df
                           0000E0   672 G$ACC$0$0 == 0x00e0
                           0000E0   673 _ACC	=	0x00e0
                           0000E1   674 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   675 _PCA0CPL5	=	0x00e1
                           0000E1   676 G$XBR0$0$0 == 0x00e1
                           0000E1   677 _XBR0	=	0x00e1
                           0000E2   678 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   679 _PCA0CPH5	=	0x00e2
                           0000E2   680 G$XBR1$0$0 == 0x00e2
                           0000E2   681 _XBR1	=	0x00e2
                           0000E3   682 G$XBR2$0$0 == 0x00e3
                           0000E3   683 _XBR2	=	0x00e3
                           0000E4   684 G$XBR3$0$0 == 0x00e4
                           0000E4   685 _XBR3	=	0x00e4
                           0000E6   686 G$EIE1$0$0 == 0x00e6
                           0000E6   687 _EIE1	=	0x00e6
                           0000E7   688 G$EIE2$0$0 == 0x00e7
                           0000E7   689 _EIE2	=	0x00e7
                           0000E8   690 G$ADC0CN$0$0 == 0x00e8
                           0000E8   691 _ADC0CN	=	0x00e8
                           0000E8   692 G$ADC2CN$0$0 == 0x00e8
                           0000E8   693 _ADC2CN	=	0x00e8
                           0000E8   694 G$P6$0$0 == 0x00e8
                           0000E8   695 _P6	=	0x00e8
                           0000E9   696 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   697 _PCA0CPL2	=	0x00e9
                           0000EA   698 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   699 _PCA0CPH2	=	0x00ea
                           0000EB   700 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   701 _PCA0CPL3	=	0x00eb
                           0000EC   702 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   703 _PCA0CPH3	=	0x00ec
                           0000ED   704 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   705 _PCA0CPL4	=	0x00ed
                           0000EE   706 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   707 _PCA0CPH4	=	0x00ee
                           0000EF   708 G$RSTSRC$0$0 == 0x00ef
                           0000EF   709 _RSTSRC	=	0x00ef
                           0000F0   710 G$B$0$0 == 0x00f0
                           0000F0   711 _B	=	0x00f0
                           0000F6   712 G$EIP1$0$0 == 0x00f6
                           0000F6   713 _EIP1	=	0x00f6
                           0000F7   714 G$EIP2$0$0 == 0x00f7
                           0000F7   715 _EIP2	=	0x00f7
                           0000F8   716 G$SPI0CN$0$0 == 0x00f8
                           0000F8   717 _SPI0CN	=	0x00f8
                           0000F8   718 G$CAN0CN$0$0 == 0x00f8
                           0000F8   719 _CAN0CN	=	0x00f8
                           0000F8   720 G$P7$0$0 == 0x00f8
                           0000F8   721 _P7	=	0x00f8
                           0000F9   722 G$PCA0L$0$0 == 0x00f9
                           0000F9   723 _PCA0L	=	0x00f9
                           0000FA   724 G$PCA0H$0$0 == 0x00fa
                           0000FA   725 _PCA0H	=	0x00fa
                           0000FB   726 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   727 _PCA0CPL0	=	0x00fb
                           0000FC   728 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   729 _PCA0CPH0	=	0x00fc
                           0000FD   730 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   731 _PCA0CPL1	=	0x00fd
                           0000FE   732 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   733 _PCA0CPH1	=	0x00fe
                           0000FF   734 G$WDTCN$0$0 == 0x00ff
                           0000FF   735 _WDTCN	=	0x00ff
                           00FAF9   736 G$PCA0$0$0 == 0xfaf9
                           00FAF9   737 _PCA0	=	0xfaf9
                           00FCFB   738 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   739 _PCA0CP0	=	0xfcfb
                           00FEFD   740 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   741 _PCA0CP1	=	0xfefd
                           00EAE9   742 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   743 _PCA0CP2	=	0xeae9
                           00ECEB   744 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   745 _PCA0CP3	=	0xeceb
                           00EEED   746 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   747 _PCA0CP4	=	0xeeed
                           00E2E1   748 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   749 _PCA0CP5	=	0xe2e1
                           00D9D8   750 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   751 _CAN0DAT	=	0xd9d8
                           00D3D2   752 G$DAC0$0$0 == 0xd3d2
                           00D3D2   753 _DAC0	=	0xd3d2
                           00D3D2   754 G$DAC1$0$0 == 0xd3d2
                           00D3D2   755 _DAC1	=	0xd3d2
                           00CBCA   756 G$RCAP2$0$0 == 0xcbca
                           00CBCA   757 _RCAP2	=	0xcbca
                           00CBCA   758 G$RCAP3$0$0 == 0xcbca
                           00CBCA   759 _RCAP3	=	0xcbca
                           00CBCA   760 G$RCAP4$0$0 == 0xcbca
                           00CBCA   761 _RCAP4	=	0xcbca
                           00CDCC   762 G$TMR2$0$0 == 0xcdcc
                           00CDCC   763 _TMR2	=	0xcdcc
                           00CDCC   764 G$TMR3$0$0 == 0xcdcc
                           00CDCC   765 _TMR3	=	0xcdcc
                           00CDCC   766 G$TMR4$0$0 == 0xcdcc
                           00CDCC   767 _TMR4	=	0xcdcc
                           00C5C4   768 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   769 _ADC0GT	=	0xc5c4
                           00C7C6   770 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   771 _ADC0LT	=	0xc7c6
                           00BFBE   772 G$ADC0$0$0 == 0xbfbe
                           00BFBE   773 _ADC0	=	0xbfbe
                           008382   774 G$DP$0$0 == 0x8382
                           008382   775 _DP	=	0x8382
                           0000A2   776 G$_XPAGE$0$0 == 0x00a2
                           0000A2   777 __XPAGE	=	0x00a2
                                    778 ;--------------------------------------------------------
                                    779 ; special function bits
                                    780 ;--------------------------------------------------------
                                    781 	.area RSEG    (ABS,DATA)
      000000                        782 	.org 0x0000
                           00008F   783 G$TF1$0$0 == 0x008f
                           00008F   784 _TF1	=	0x008f
                           00008E   785 G$TR1$0$0 == 0x008e
                           00008E   786 _TR1	=	0x008e
                           00008D   787 G$TF0$0$0 == 0x008d
                           00008D   788 _TF0	=	0x008d
                           00008C   789 G$TR0$0$0 == 0x008c
                           00008C   790 _TR0	=	0x008c
                           00008B   791 G$IE1$0$0 == 0x008b
                           00008B   792 _IE1	=	0x008b
                           00008A   793 G$IT1$0$0 == 0x008a
                           00008A   794 _IT1	=	0x008a
                           000089   795 G$IE0$0$0 == 0x0089
                           000089   796 _IE0	=	0x0089
                           000088   797 G$IT0$0$0 == 0x0088
                           000088   798 _IT0	=	0x0088
                           00008F   799 G$CP0EN$0$0 == 0x008f
                           00008F   800 _CP0EN	=	0x008f
                           00008E   801 G$CP0OUT$0$0 == 0x008e
                           00008E   802 _CP0OUT	=	0x008e
                           00008D   803 G$CP0RIF$0$0 == 0x008d
                           00008D   804 _CP0RIF	=	0x008d
                           00008C   805 G$CP0FIF$0$0 == 0x008c
                           00008C   806 _CP0FIF	=	0x008c
                           00008B   807 G$CP0HYP1$0$0 == 0x008b
                           00008B   808 _CP0HYP1	=	0x008b
                           00008A   809 G$CP0HYP0$0$0 == 0x008a
                           00008A   810 _CP0HYP0	=	0x008a
                           000089   811 G$CP0HYN1$0$0 == 0x0089
                           000089   812 _CP0HYN1	=	0x0089
                           000088   813 G$CP0HYN0$0$0 == 0x0088
                           000088   814 _CP0HYN0	=	0x0088
                           00008F   815 G$CP1EN$0$0 == 0x008f
                           00008F   816 _CP1EN	=	0x008f
                           00008E   817 G$CP1OUT$0$0 == 0x008e
                           00008E   818 _CP1OUT	=	0x008e
                           00008D   819 G$CP1RIF$0$0 == 0x008d
                           00008D   820 _CP1RIF	=	0x008d
                           00008C   821 G$CP1FIF$0$0 == 0x008c
                           00008C   822 _CP1FIF	=	0x008c
                           00008B   823 G$CP1HYP1$0$0 == 0x008b
                           00008B   824 _CP1HYP1	=	0x008b
                           00008A   825 G$CP1HYP0$0$0 == 0x008a
                           00008A   826 _CP1HYP0	=	0x008a
                           000089   827 G$CP1HYN1$0$0 == 0x0089
                           000089   828 _CP1HYN1	=	0x0089
                           000088   829 G$CP1HYN0$0$0 == 0x0088
                           000088   830 _CP1HYN0	=	0x0088
                           00008F   831 G$CP2EN$0$0 == 0x008f
                           00008F   832 _CP2EN	=	0x008f
                           00008E   833 G$CP2OUT$0$0 == 0x008e
                           00008E   834 _CP2OUT	=	0x008e
                           00008D   835 G$CP2RIF$0$0 == 0x008d
                           00008D   836 _CP2RIF	=	0x008d
                           00008C   837 G$CP2FIF$0$0 == 0x008c
                           00008C   838 _CP2FIF	=	0x008c
                           00008B   839 G$CP2HYP1$0$0 == 0x008b
                           00008B   840 _CP2HYP1	=	0x008b
                           00008A   841 G$CP2HYP0$0$0 == 0x008a
                           00008A   842 _CP2HYP0	=	0x008a
                           000089   843 G$CP2HYN1$0$0 == 0x0089
                           000089   844 _CP2HYN1	=	0x0089
                           000088   845 G$CP2HYN0$0$0 == 0x0088
                           000088   846 _CP2HYN0	=	0x0088
                           00009F   847 G$SM00$0$0 == 0x009f
                           00009F   848 _SM00	=	0x009f
                           00009E   849 G$SM10$0$0 == 0x009e
                           00009E   850 _SM10	=	0x009e
                           00009D   851 G$SM20$0$0 == 0x009d
                           00009D   852 _SM20	=	0x009d
                           00009C   853 G$REN0$0$0 == 0x009c
                           00009C   854 _REN0	=	0x009c
                           00009B   855 G$TB80$0$0 == 0x009b
                           00009B   856 _TB80	=	0x009b
                           00009A   857 G$RB80$0$0 == 0x009a
                           00009A   858 _RB80	=	0x009a
                           000099   859 G$TI0$0$0 == 0x0099
                           000099   860 _TI0	=	0x0099
                           000098   861 G$RI0$0$0 == 0x0098
                           000098   862 _RI0	=	0x0098
                           00009F   863 G$S1MODE$0$0 == 0x009f
                           00009F   864 _S1MODE	=	0x009f
                           00009D   865 G$MCE1$0$0 == 0x009d
                           00009D   866 _MCE1	=	0x009d
                           00009C   867 G$REN1$0$0 == 0x009c
                           00009C   868 _REN1	=	0x009c
                           00009B   869 G$TB81$0$0 == 0x009b
                           00009B   870 _TB81	=	0x009b
                           00009A   871 G$RB81$0$0 == 0x009a
                           00009A   872 _RB81	=	0x009a
                           000099   873 G$TI1$0$0 == 0x0099
                           000099   874 _TI1	=	0x0099
                           000098   875 G$RI1$0$0 == 0x0098
                           000098   876 _RI1	=	0x0098
                           0000AF   877 G$EA$0$0 == 0x00af
                           0000AF   878 _EA	=	0x00af
                           0000AD   879 G$ET2$0$0 == 0x00ad
                           0000AD   880 _ET2	=	0x00ad
                           0000AC   881 G$ES0$0$0 == 0x00ac
                           0000AC   882 _ES0	=	0x00ac
                           0000AB   883 G$ET1$0$0 == 0x00ab
                           0000AB   884 _ET1	=	0x00ab
                           0000AA   885 G$EX1$0$0 == 0x00aa
                           0000AA   886 _EX1	=	0x00aa
                           0000A9   887 G$ET0$0$0 == 0x00a9
                           0000A9   888 _ET0	=	0x00a9
                           0000A8   889 G$EX0$0$0 == 0x00a8
                           0000A8   890 _EX0	=	0x00a8
                           0000BD   891 G$PT2$0$0 == 0x00bd
                           0000BD   892 _PT2	=	0x00bd
                           0000BC   893 G$PS0$0$0 == 0x00bc
                           0000BC   894 _PS0	=	0x00bc
                           0000BB   895 G$PT1$0$0 == 0x00bb
                           0000BB   896 _PT1	=	0x00bb
                           0000BA   897 G$PX1$0$0 == 0x00ba
                           0000BA   898 _PX1	=	0x00ba
                           0000B9   899 G$PT0$0$0 == 0x00b9
                           0000B9   900 _PT0	=	0x00b9
                           0000B8   901 G$PX0$0$0 == 0x00b8
                           0000B8   902 _PX0	=	0x00b8
                           0000C7   903 G$BUSY$0$0 == 0x00c7
                           0000C7   904 _BUSY	=	0x00c7
                           0000C6   905 G$ENSMB$0$0 == 0x00c6
                           0000C6   906 _ENSMB	=	0x00c6
                           0000C5   907 G$STA$0$0 == 0x00c5
                           0000C5   908 _STA	=	0x00c5
                           0000C4   909 G$STO$0$0 == 0x00c4
                           0000C4   910 _STO	=	0x00c4
                           0000C3   911 G$SI$0$0 == 0x00c3
                           0000C3   912 _SI	=	0x00c3
                           0000C2   913 G$AA$0$0 == 0x00c2
                           0000C2   914 _AA	=	0x00c2
                           0000C1   915 G$SMBFTE$0$0 == 0x00c1
                           0000C1   916 _SMBFTE	=	0x00c1
                           0000C0   917 G$SMBTOE$0$0 == 0x00c0
                           0000C0   918 _SMBTOE	=	0x00c0
                           0000C7   919 G$BOFF$0$0 == 0x00c7
                           0000C7   920 _BOFF	=	0x00c7
                           0000C6   921 G$EWARN$0$0 == 0x00c6
                           0000C6   922 _EWARN	=	0x00c6
                           0000C5   923 G$EPASS$0$0 == 0x00c5
                           0000C5   924 _EPASS	=	0x00c5
                           0000C4   925 G$RXOK$0$0 == 0x00c4
                           0000C4   926 _RXOK	=	0x00c4
                           0000C3   927 G$TXOK$0$0 == 0x00c3
                           0000C3   928 _TXOK	=	0x00c3
                           0000C2   929 G$LEC2$0$0 == 0x00c2
                           0000C2   930 _LEC2	=	0x00c2
                           0000C1   931 G$LEC1$0$0 == 0x00c1
                           0000C1   932 _LEC1	=	0x00c1
                           0000C0   933 G$LEC0$0$0 == 0x00c0
                           0000C0   934 _LEC0	=	0x00c0
                           0000CF   935 G$TF2$0$0 == 0x00cf
                           0000CF   936 _TF2	=	0x00cf
                           0000CE   937 G$EXF2$0$0 == 0x00ce
                           0000CE   938 _EXF2	=	0x00ce
                           0000CB   939 G$EXEN2$0$0 == 0x00cb
                           0000CB   940 _EXEN2	=	0x00cb
                           0000CA   941 G$TR2$0$0 == 0x00ca
                           0000CA   942 _TR2	=	0x00ca
                           0000C9   943 G$CT2$0$0 == 0x00c9
                           0000C9   944 _CT2	=	0x00c9
                           0000C8   945 G$CPRL2$0$0 == 0x00c8
                           0000C8   946 _CPRL2	=	0x00c8
                           0000CF   947 G$TF3$0$0 == 0x00cf
                           0000CF   948 _TF3	=	0x00cf
                           0000CE   949 G$EXF3$0$0 == 0x00ce
                           0000CE   950 _EXF3	=	0x00ce
                           0000CB   951 G$EXEN3$0$0 == 0x00cb
                           0000CB   952 _EXEN3	=	0x00cb
                           0000CA   953 G$TR3$0$0 == 0x00ca
                           0000CA   954 _TR3	=	0x00ca
                           0000C9   955 G$CT3$0$0 == 0x00c9
                           0000C9   956 _CT3	=	0x00c9
                           0000C8   957 G$CPRL3$0$0 == 0x00c8
                           0000C8   958 _CPRL3	=	0x00c8
                           0000CF   959 G$TF4$0$0 == 0x00cf
                           0000CF   960 _TF4	=	0x00cf
                           0000CE   961 G$EXF4$0$0 == 0x00ce
                           0000CE   962 _EXF4	=	0x00ce
                           0000CB   963 G$EXEN4$0$0 == 0x00cb
                           0000CB   964 _EXEN4	=	0x00cb
                           0000CA   965 G$TR4$0$0 == 0x00ca
                           0000CA   966 _TR4	=	0x00ca
                           0000C9   967 G$CT4$0$0 == 0x00c9
                           0000C9   968 _CT4	=	0x00c9
                           0000C8   969 G$CPRL4$0$0 == 0x00c8
                           0000C8   970 _CPRL4	=	0x00c8
                           0000D7   971 G$CY$0$0 == 0x00d7
                           0000D7   972 _CY	=	0x00d7
                           0000D6   973 G$AC$0$0 == 0x00d6
                           0000D6   974 _AC	=	0x00d6
                           0000D5   975 G$F0$0$0 == 0x00d5
                           0000D5   976 _F0	=	0x00d5
                           0000D4   977 G$RS1$0$0 == 0x00d4
                           0000D4   978 _RS1	=	0x00d4
                           0000D3   979 G$RS0$0$0 == 0x00d3
                           0000D3   980 _RS0	=	0x00d3
                           0000D2   981 G$OV$0$0 == 0x00d2
                           0000D2   982 _OV	=	0x00d2
                           0000D1   983 G$F1$0$0 == 0x00d1
                           0000D1   984 _F1	=	0x00d1
                           0000D0   985 G$P$0$0 == 0x00d0
                           0000D0   986 _P	=	0x00d0
                           0000DF   987 G$CF$0$0 == 0x00df
                           0000DF   988 _CF	=	0x00df
                           0000DE   989 G$CR$0$0 == 0x00de
                           0000DE   990 _CR	=	0x00de
                           0000DD   991 G$CCF5$0$0 == 0x00dd
                           0000DD   992 _CCF5	=	0x00dd
                           0000DC   993 G$CCF4$0$0 == 0x00dc
                           0000DC   994 _CCF4	=	0x00dc
                           0000DB   995 G$CCF3$0$0 == 0x00db
                           0000DB   996 _CCF3	=	0x00db
                           0000DA   997 G$CCF2$0$0 == 0x00da
                           0000DA   998 _CCF2	=	0x00da
                           0000D9   999 G$CCF1$0$0 == 0x00d9
                           0000D9  1000 _CCF1	=	0x00d9
                           0000D8  1001 G$CCF0$0$0 == 0x00d8
                           0000D8  1002 _CCF0	=	0x00d8
                           0000EF  1003 G$AD0EN$0$0 == 0x00ef
                           0000EF  1004 _AD0EN	=	0x00ef
                           0000EE  1005 G$AD0TM$0$0 == 0x00ee
                           0000EE  1006 _AD0TM	=	0x00ee
                           0000ED  1007 G$AD0INT$0$0 == 0x00ed
                           0000ED  1008 _AD0INT	=	0x00ed
                           0000EC  1009 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1010 _AD0BUSY	=	0x00ec
                           0000EB  1011 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1012 _AD0CM1	=	0x00eb
                           0000EA  1013 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1014 _AD0CM0	=	0x00ea
                           0000E9  1015 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1016 _AD0WINT	=	0x00e9
                           0000E8  1017 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1018 _AD0LJST	=	0x00e8
                           0000EF  1019 G$AD2EN$0$0 == 0x00ef
                           0000EF  1020 _AD2EN	=	0x00ef
                           0000EE  1021 G$AD2TM$0$0 == 0x00ee
                           0000EE  1022 _AD2TM	=	0x00ee
                           0000ED  1023 G$AD2INT$0$0 == 0x00ed
                           0000ED  1024 _AD2INT	=	0x00ed
                           0000EC  1025 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1026 _AD2BUSY	=	0x00ec
                           0000EB  1027 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1028 _AD2CM2	=	0x00eb
                           0000EA  1029 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1030 _AD2CM1	=	0x00ea
                           0000E9  1031 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1032 _AD2CM0	=	0x00e9
                           0000E8  1033 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1034 _AD2WINT	=	0x00e8
                           0000FF  1035 G$SPIF$0$0 == 0x00ff
                           0000FF  1036 _SPIF	=	0x00ff
                           0000FE  1037 G$WCOL$0$0 == 0x00fe
                           0000FE  1038 _WCOL	=	0x00fe
                           0000FD  1039 G$MODF$0$0 == 0x00fd
                           0000FD  1040 _MODF	=	0x00fd
                           0000FC  1041 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1042 _RXOVRN	=	0x00fc
                           0000FB  1043 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1044 _NSSMD1	=	0x00fb
                           0000FA  1045 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1046 _NSSMD0	=	0x00fa
                           0000F9  1047 G$TXBMT$0$0 == 0x00f9
                           0000F9  1048 _TXBMT	=	0x00f9
                           0000F8  1049 G$SPIEN$0$0 == 0x00f8
                           0000F8  1050 _SPIEN	=	0x00f8
                           0000F8  1051 G$CANINIT$0$0 == 0x00f8
                           0000F8  1052 _CANINIT	=	0x00f8
                           0000F9  1053 G$CANIE$0$0 == 0x00f9
                           0000F9  1054 _CANIE	=	0x00f9
                           0000FA  1055 G$CANSIE$0$0 == 0x00fa
                           0000FA  1056 _CANSIE	=	0x00fa
                           0000FB  1057 G$CANEIE$0$0 == 0x00fb
                           0000FB  1058 _CANEIE	=	0x00fb
                           0000FC  1059 G$CANIF$0$0 == 0x00fc
                           0000FC  1060 _CANIF	=	0x00fc
                           0000FD  1061 G$CANDAR$0$0 == 0x00fd
                           0000FD  1062 _CANDAR	=	0x00fd
                           0000FE  1063 G$CANCCE$0$0 == 0x00fe
                           0000FE  1064 _CANCCE	=	0x00fe
                           0000FF  1065 G$CANTEST$0$0 == 0x00ff
                           0000FF  1066 _CANTEST	=	0x00ff
                           000080  1067 G$P0_0$0$0 == 0x0080
                           000080  1068 _P0_0	=	0x0080
                           000081  1069 G$P0_1$0$0 == 0x0081
                           000081  1070 _P0_1	=	0x0081
                           000082  1071 G$P0_2$0$0 == 0x0082
                           000082  1072 _P0_2	=	0x0082
                           000083  1073 G$P0_3$0$0 == 0x0083
                           000083  1074 _P0_3	=	0x0083
                           000084  1075 G$P0_4$0$0 == 0x0084
                           000084  1076 _P0_4	=	0x0084
                           000085  1077 G$P0_5$0$0 == 0x0085
                           000085  1078 _P0_5	=	0x0085
                           000086  1079 G$P0_6$0$0 == 0x0086
                           000086  1080 _P0_6	=	0x0086
                           000087  1081 G$P0_7$0$0 == 0x0087
                           000087  1082 _P0_7	=	0x0087
                           000090  1083 G$P1_0$0$0 == 0x0090
                           000090  1084 _P1_0	=	0x0090
                           000091  1085 G$P1_1$0$0 == 0x0091
                           000091  1086 _P1_1	=	0x0091
                           000092  1087 G$P1_2$0$0 == 0x0092
                           000092  1088 _P1_2	=	0x0092
                           000093  1089 G$P1_3$0$0 == 0x0093
                           000093  1090 _P1_3	=	0x0093
                           000094  1091 G$P1_4$0$0 == 0x0094
                           000094  1092 _P1_4	=	0x0094
                           000095  1093 G$P1_5$0$0 == 0x0095
                           000095  1094 _P1_5	=	0x0095
                           000096  1095 G$P1_6$0$0 == 0x0096
                           000096  1096 _P1_6	=	0x0096
                           000097  1097 G$P1_7$0$0 == 0x0097
                           000097  1098 _P1_7	=	0x0097
                           0000A0  1099 G$P2_0$0$0 == 0x00a0
                           0000A0  1100 _P2_0	=	0x00a0
                           0000A1  1101 G$P2_1$0$0 == 0x00a1
                           0000A1  1102 _P2_1	=	0x00a1
                           0000A2  1103 G$P2_2$0$0 == 0x00a2
                           0000A2  1104 _P2_2	=	0x00a2
                           0000A3  1105 G$P2_3$0$0 == 0x00a3
                           0000A3  1106 _P2_3	=	0x00a3
                           0000A4  1107 G$P2_4$0$0 == 0x00a4
                           0000A4  1108 _P2_4	=	0x00a4
                           0000A5  1109 G$P2_5$0$0 == 0x00a5
                           0000A5  1110 _P2_5	=	0x00a5
                           0000A6  1111 G$P2_6$0$0 == 0x00a6
                           0000A6  1112 _P2_6	=	0x00a6
                           0000A7  1113 G$P2_7$0$0 == 0x00a7
                           0000A7  1114 _P2_7	=	0x00a7
                           0000B0  1115 G$P3_0$0$0 == 0x00b0
                           0000B0  1116 _P3_0	=	0x00b0
                           0000B1  1117 G$P3_1$0$0 == 0x00b1
                           0000B1  1118 _P3_1	=	0x00b1
                           0000B2  1119 G$P3_2$0$0 == 0x00b2
                           0000B2  1120 _P3_2	=	0x00b2
                           0000B3  1121 G$P3_3$0$0 == 0x00b3
                           0000B3  1122 _P3_3	=	0x00b3
                           0000B4  1123 G$P3_4$0$0 == 0x00b4
                           0000B4  1124 _P3_4	=	0x00b4
                           0000B5  1125 G$P3_5$0$0 == 0x00b5
                           0000B5  1126 _P3_5	=	0x00b5
                           0000B6  1127 G$P3_6$0$0 == 0x00b6
                           0000B6  1128 _P3_6	=	0x00b6
                           0000B7  1129 G$P3_7$0$0 == 0x00b7
                           0000B7  1130 _P3_7	=	0x00b7
                           0000C8  1131 G$P4_0$0$0 == 0x00c8
                           0000C8  1132 _P4_0	=	0x00c8
                           0000C9  1133 G$P4_1$0$0 == 0x00c9
                           0000C9  1134 _P4_1	=	0x00c9
                           0000CA  1135 G$P4_2$0$0 == 0x00ca
                           0000CA  1136 _P4_2	=	0x00ca
                           0000CB  1137 G$P4_3$0$0 == 0x00cb
                           0000CB  1138 _P4_3	=	0x00cb
                           0000CC  1139 G$P4_4$0$0 == 0x00cc
                           0000CC  1140 _P4_4	=	0x00cc
                           0000CD  1141 G$P4_5$0$0 == 0x00cd
                           0000CD  1142 _P4_5	=	0x00cd
                           0000CE  1143 G$P4_6$0$0 == 0x00ce
                           0000CE  1144 _P4_6	=	0x00ce
                           0000CF  1145 G$P4_7$0$0 == 0x00cf
                           0000CF  1146 _P4_7	=	0x00cf
                           0000D8  1147 G$P5_0$0$0 == 0x00d8
                           0000D8  1148 _P5_0	=	0x00d8
                           0000D9  1149 G$P5_1$0$0 == 0x00d9
                           0000D9  1150 _P5_1	=	0x00d9
                           0000DA  1151 G$P5_2$0$0 == 0x00da
                           0000DA  1152 _P5_2	=	0x00da
                           0000DB  1153 G$P5_3$0$0 == 0x00db
                           0000DB  1154 _P5_3	=	0x00db
                           0000DC  1155 G$P5_4$0$0 == 0x00dc
                           0000DC  1156 _P5_4	=	0x00dc
                           0000DD  1157 G$P5_5$0$0 == 0x00dd
                           0000DD  1158 _P5_5	=	0x00dd
                           0000DE  1159 G$P5_6$0$0 == 0x00de
                           0000DE  1160 _P5_6	=	0x00de
                           0000DF  1161 G$P5_7$0$0 == 0x00df
                           0000DF  1162 _P5_7	=	0x00df
                           0000E8  1163 G$P6_0$0$0 == 0x00e8
                           0000E8  1164 _P6_0	=	0x00e8
                           0000E9  1165 G$P6_1$0$0 == 0x00e9
                           0000E9  1166 _P6_1	=	0x00e9
                           0000EA  1167 G$P6_2$0$0 == 0x00ea
                           0000EA  1168 _P6_2	=	0x00ea
                           0000EB  1169 G$P6_3$0$0 == 0x00eb
                           0000EB  1170 _P6_3	=	0x00eb
                           0000EC  1171 G$P6_4$0$0 == 0x00ec
                           0000EC  1172 _P6_4	=	0x00ec
                           0000ED  1173 G$P6_5$0$0 == 0x00ed
                           0000ED  1174 _P6_5	=	0x00ed
                           0000EE  1175 G$P6_6$0$0 == 0x00ee
                           0000EE  1176 _P6_6	=	0x00ee
                           0000EF  1177 G$P6_7$0$0 == 0x00ef
                           0000EF  1178 _P6_7	=	0x00ef
                           0000F8  1179 G$P7_0$0$0 == 0x00f8
                           0000F8  1180 _P7_0	=	0x00f8
                           0000F9  1181 G$P7_1$0$0 == 0x00f9
                           0000F9  1182 _P7_1	=	0x00f9
                           0000FA  1183 G$P7_2$0$0 == 0x00fa
                           0000FA  1184 _P7_2	=	0x00fa
                           0000FB  1185 G$P7_3$0$0 == 0x00fb
                           0000FB  1186 _P7_3	=	0x00fb
                           0000FC  1187 G$P7_4$0$0 == 0x00fc
                           0000FC  1188 _P7_4	=	0x00fc
                           0000FD  1189 G$P7_5$0$0 == 0x00fd
                           0000FD  1190 _P7_5	=	0x00fd
                           0000FE  1191 G$P7_6$0$0 == 0x00fe
                           0000FE  1192 _P7_6	=	0x00fe
                           0000FF  1193 G$P7_7$0$0 == 0x00ff
                           0000FF  1194 _P7_7	=	0x00ff
                                   1195 ;--------------------------------------------------------
                                   1196 ; overlayable register banks
                                   1197 ;--------------------------------------------------------
                                   1198 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1199 	.ds 8
                                   1200 ;--------------------------------------------------------
                                   1201 ; internal ram data
                                   1202 ;--------------------------------------------------------
                                   1203 	.area DSEG    (DATA)
                           000000  1204 Lmain.putchar$count$1$44==.
      000008                       1205 _putchar_count_1_44:
      000008                       1206 	.ds 1
                                   1207 ;--------------------------------------------------------
                                   1208 ; overlayable items in internal ram 
                                   1209 ;--------------------------------------------------------
                                   1210 	.area	OSEG    (OVR,DATA)
                                   1211 	.area	OSEG    (OVR,DATA)
                                   1212 	.area	OSEG    (OVR,DATA)
                                   1213 	.area	OSEG    (OVR,DATA)
                                   1214 	.area	OSEG    (OVR,DATA)
                           000000  1215 Lmain.le_adc0$ganho$1$49==.
      000010                       1216 _le_adc0_PARM_2:
      000010                       1217 	.ds 1
                                   1218 ;--------------------------------------------------------
                                   1219 ; Stack segment in internal ram 
                                   1220 ;--------------------------------------------------------
                                   1221 	.area	SSEG
      000022                       1222 __start__stack:
      000022                       1223 	.ds	1
                                   1224 
                                   1225 ;--------------------------------------------------------
                                   1226 ; indirectly addressable internal ram data
                                   1227 ;--------------------------------------------------------
                                   1228 	.area ISEG    (DATA)
                                   1229 ;--------------------------------------------------------
                                   1230 ; absolute internal ram data
                                   1231 ;--------------------------------------------------------
                                   1232 	.area IABS    (ABS,DATA)
                                   1233 	.area IABS    (ABS,DATA)
                                   1234 ;--------------------------------------------------------
                                   1235 ; bit data
                                   1236 ;--------------------------------------------------------
                                   1237 	.area BSEG    (BIT)
                           000000  1238 Lmain.le_glcd$cd$1$30==.
      000000                       1239 _le_glcd_PARM_1:
      000000                       1240 	.ds 1
                           000001  1241 Lmain.le_glcd$cs$1$30==.
      000001                       1242 _le_glcd_PARM_2:
      000001                       1243 	.ds 1
                           000002  1244 Lmain.esc_glcd$cd$1$32==.
      000002                       1245 _esc_glcd_PARM_2:
      000002                       1246 	.ds 1
                           000003  1247 Lmain.esc_glcd$cs$1$32==.
      000003                       1248 _esc_glcd_PARM_3:
      000003                       1249 	.ds 1
                           000004  1250 Lmain.conf_Y$cs$1$36==.
      000004                       1251 _conf_Y_PARM_2:
      000004                       1252 	.ds 1
                           000005  1253 Lmain.conf_pag$cs$1$38==.
      000005                       1254 _conf_pag_PARM_2:
      000005                       1255 	.ds 1
                           000006  1256 Lmain.limpa_glcd$cs$1$40==.
      000006                       1257 _limpa_glcd_PARM_1:
      000006                       1258 	.ds 1
                           000007  1259 Lmain.putchar$sloc0$1$0==.
      000007                       1260 _putchar_sloc0_1_0:
      000007                       1261 	.ds 1
                                   1262 ;--------------------------------------------------------
                                   1263 ; paged external ram data
                                   1264 ;--------------------------------------------------------
                                   1265 	.area PSEG    (PAG,XDATA)
                                   1266 ;--------------------------------------------------------
                                   1267 ; external ram data
                                   1268 ;--------------------------------------------------------
                                   1269 	.area XSEG    (XDATA)
                                   1270 ;--------------------------------------------------------
                                   1271 ; absolute external ram data
                                   1272 ;--------------------------------------------------------
                                   1273 	.area XABS    (ABS,XDATA)
                                   1274 ;--------------------------------------------------------
                                   1275 ; external initialized ram data
                                   1276 ;--------------------------------------------------------
                                   1277 	.area XISEG   (XDATA)
                                   1278 	.area HOME    (CODE)
                                   1279 	.area GSINIT0 (CODE)
                                   1280 	.area GSINIT1 (CODE)
                                   1281 	.area GSINIT2 (CODE)
                                   1282 	.area GSINIT3 (CODE)
                                   1283 	.area GSINIT4 (CODE)
                                   1284 	.area GSINIT5 (CODE)
                                   1285 	.area GSINIT  (CODE)
                                   1286 	.area GSFINAL (CODE)
                                   1287 	.area CSEG    (CODE)
                                   1288 ;--------------------------------------------------------
                                   1289 ; interrupt vector 
                                   1290 ;--------------------------------------------------------
                                   1291 	.area HOME    (CODE)
      000000                       1292 __interrupt_vect:
      000000 02 00 06         [24] 1293 	ljmp	__sdcc_gsinit_startup
                                   1294 ;--------------------------------------------------------
                                   1295 ; global & static initialisations
                                   1296 ;--------------------------------------------------------
                                   1297 	.area HOME    (CODE)
                                   1298 	.area GSINIT  (CODE)
                                   1299 	.area GSFINAL (CODE)
                                   1300 	.area GSINIT  (CODE)
                                   1301 	.globl __sdcc_gsinit_startup
                                   1302 	.globl __sdcc_program_startup
                                   1303 	.globl __start__stack
                                   1304 	.globl __mcs51_genXINIT
                                   1305 	.globl __mcs51_genXRAMCLEAR
                                   1306 	.globl __mcs51_genRAMCLEAR
                                   1307 	.area GSFINAL (CODE)
      00005F 02 00 03         [24] 1308 	ljmp	__sdcc_program_startup
                                   1309 ;--------------------------------------------------------
                                   1310 ; Home
                                   1311 ;--------------------------------------------------------
                                   1312 	.area HOME    (CODE)
                                   1313 	.area HOME    (CODE)
      000003                       1314 __sdcc_program_startup:
      000003 02 03 CE         [24] 1315 	ljmp	_main
                                   1316 ;	return from main will return to caller
                                   1317 ;--------------------------------------------------------
                                   1318 ; code
                                   1319 ;--------------------------------------------------------
                                   1320 	.area CSEG    (CODE)
                                   1321 ;------------------------------------------------------------
                                   1322 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1323 ;------------------------------------------------------------
                           000000  1324 	G$Reset_Sources_Init$0$0 ==.
                           000000  1325 	C$config.c$10$0$0 ==.
                                   1326 ;	Z:\MICAP\ADC\/config.c:10: void Reset_Sources_Init()
                                   1327 ;	-----------------------------------------
                                   1328 ;	 function Reset_Sources_Init
                                   1329 ;	-----------------------------------------
      000062                       1330 _Reset_Sources_Init:
                           000007  1331 	ar7 = 0x07
                           000006  1332 	ar6 = 0x06
                           000005  1333 	ar5 = 0x05
                           000004  1334 	ar4 = 0x04
                           000003  1335 	ar3 = 0x03
                           000002  1336 	ar2 = 0x02
                           000001  1337 	ar1 = 0x01
                           000000  1338 	ar0 = 0x00
                           000000  1339 	C$config.c$12$1$1 ==.
                                   1340 ;	Z:\MICAP\ADC\/config.c:12: WDTCN     = 0xDE;
      000062 75 FF DE         [24] 1341 	mov	_WDTCN,#0xde
                           000003  1342 	C$config.c$13$1$1 ==.
                                   1343 ;	Z:\MICAP\ADC\/config.c:13: WDTCN     = 0xAD;
      000065 75 FF AD         [24] 1344 	mov	_WDTCN,#0xad
                           000006  1345 	C$config.c$14$1$1 ==.
                           000006  1346 	XG$Reset_Sources_Init$0$0 ==.
      000068 22               [24] 1347 	ret
                                   1348 ;------------------------------------------------------------
                                   1349 ;Allocation info for local variables in function 'Timer_Init'
                                   1350 ;------------------------------------------------------------
                           000007  1351 	G$Timer_Init$0$0 ==.
                           000007  1352 	C$config.c$16$1$1 ==.
                                   1353 ;	Z:\MICAP\ADC\/config.c:16: void Timer_Init()
                                   1354 ;	-----------------------------------------
                                   1355 ;	 function Timer_Init
                                   1356 ;	-----------------------------------------
      000069                       1357 _Timer_Init:
                           000007  1358 	C$config.c$18$1$2 ==.
                                   1359 ;	Z:\MICAP\ADC\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      000069 75 84 00         [24] 1360 	mov	_SFRPAGE,#0x00
                           00000A  1361 	C$config.c$19$1$2 ==.
                                   1362 ;	Z:\MICAP\ADC\/config.c:19: CKCON     = 0x08;
      00006C 75 8E 08         [24] 1363 	mov	_CKCON,#0x08
                           00000D  1364 	C$config.c$20$1$2 ==.
                                   1365 ;	Z:\MICAP\ADC\/config.c:20: SFRPAGE   = TMR2_PAGE;
      00006F 75 84 00         [24] 1366 	mov	_SFRPAGE,#0x00
                           000010  1367 	C$config.c$21$1$2 ==.
                                   1368 ;	Z:\MICAP\ADC\/config.c:21: TMR2CN    = 0x04;
      000072 75 C8 04         [24] 1369 	mov	_TMR2CN,#0x04
                           000013  1370 	C$config.c$22$1$2 ==.
                                   1371 ;	Z:\MICAP\ADC\/config.c:22: TMR2CF    = 0x0A;
      000075 75 C9 0A         [24] 1372 	mov	_TMR2CF,#0x0a
                           000016  1373 	C$config.c$23$1$2 ==.
                                   1374 ;	Z:\MICAP\ADC\/config.c:23: RCAP2L    = 0x1E;
      000078 75 CA 1E         [24] 1375 	mov	_RCAP2L,#0x1e
                           000019  1376 	C$config.c$24$1$2 ==.
                                   1377 ;	Z:\MICAP\ADC\/config.c:24: RCAP2H    = 0xFB;
      00007B 75 CB FB         [24] 1378 	mov	_RCAP2H,#0xfb
                           00001C  1379 	C$config.c$25$1$2 ==.
                           00001C  1380 	XG$Timer_Init$0$0 ==.
      00007E 22               [24] 1381 	ret
                                   1382 ;------------------------------------------------------------
                                   1383 ;Allocation info for local variables in function 'ADC_Init'
                                   1384 ;------------------------------------------------------------
                           00001D  1385 	G$ADC_Init$0$0 ==.
                           00001D  1386 	C$config.c$27$1$2 ==.
                                   1387 ;	Z:\MICAP\ADC\/config.c:27: void ADC_Init()
                                   1388 ;	-----------------------------------------
                                   1389 ;	 function ADC_Init
                                   1390 ;	-----------------------------------------
      00007F                       1391 _ADC_Init:
                           00001D  1392 	C$config.c$29$1$3 ==.
                                   1393 ;	Z:\MICAP\ADC\/config.c:29: SFRPAGE   = ADC0_PAGE;
      00007F 75 84 00         [24] 1394 	mov	_SFRPAGE,#0x00
                           000020  1395 	C$config.c$30$1$3 ==.
                                   1396 ;	Z:\MICAP\ADC\/config.c:30: ADC0CN    = 0x80;
      000082 75 E8 80         [24] 1397 	mov	_ADC0CN,#0x80
                           000023  1398 	C$config.c$31$1$3 ==.
                           000023  1399 	XG$ADC_Init$0$0 ==.
      000085 22               [24] 1400 	ret
                                   1401 ;------------------------------------------------------------
                                   1402 ;Allocation info for local variables in function 'DAC_Init'
                                   1403 ;------------------------------------------------------------
                           000024  1404 	G$DAC_Init$0$0 ==.
                           000024  1405 	C$config.c$33$1$3 ==.
                                   1406 ;	Z:\MICAP\ADC\/config.c:33: void DAC_Init()
                                   1407 ;	-----------------------------------------
                                   1408 ;	 function DAC_Init
                                   1409 ;	-----------------------------------------
      000086                       1410 _DAC_Init:
                           000024  1411 	C$config.c$35$1$4 ==.
                                   1412 ;	Z:\MICAP\ADC\/config.c:35: SFRPAGE   = DAC0_PAGE;
      000086 75 84 00         [24] 1413 	mov	_SFRPAGE,#0x00
                           000027  1414 	C$config.c$36$1$4 ==.
                                   1415 ;	Z:\MICAP\ADC\/config.c:36: DAC0CN    = 0x9C;
      000089 75 D4 9C         [24] 1416 	mov	_DAC0CN,#0x9c
                           00002A  1417 	C$config.c$37$1$4 ==.
                           00002A  1418 	XG$DAC_Init$0$0 ==.
      00008C 22               [24] 1419 	ret
                                   1420 ;------------------------------------------------------------
                                   1421 ;Allocation info for local variables in function 'Voltage_Reference_Init'
                                   1422 ;------------------------------------------------------------
                           00002B  1423 	G$Voltage_Reference_Init$0$0 ==.
                           00002B  1424 	C$config.c$39$1$4 ==.
                                   1425 ;	Z:\MICAP\ADC\/config.c:39: void Voltage_Reference_Init()
                                   1426 ;	-----------------------------------------
                                   1427 ;	 function Voltage_Reference_Init
                                   1428 ;	-----------------------------------------
      00008D                       1429 _Voltage_Reference_Init:
                           00002B  1430 	C$config.c$41$1$5 ==.
                                   1431 ;	Z:\MICAP\ADC\/config.c:41: SFRPAGE   = ADC0_PAGE;
      00008D 75 84 00         [24] 1432 	mov	_SFRPAGE,#0x00
                           00002E  1433 	C$config.c$42$1$5 ==.
                                   1434 ;	Z:\MICAP\ADC\/config.c:42: REF0CN    = 0x03;
      000090 75 D1 03         [24] 1435 	mov	_REF0CN,#0x03
                           000031  1436 	C$config.c$43$1$5 ==.
                           000031  1437 	XG$Voltage_Reference_Init$0$0 ==.
      000093 22               [24] 1438 	ret
                                   1439 ;------------------------------------------------------------
                                   1440 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1441 ;------------------------------------------------------------
                           000032  1442 	G$Port_IO_Init$0$0 ==.
                           000032  1443 	C$config.c$45$1$5 ==.
                                   1444 ;	Z:\MICAP\ADC\/config.c:45: void Port_IO_Init()
                                   1445 ;	-----------------------------------------
                                   1446 ;	 function Port_IO_Init
                                   1447 ;	-----------------------------------------
      000094                       1448 _Port_IO_Init:
                           000032  1449 	C$config.c$83$1$6 ==.
                                   1450 ;	Z:\MICAP\ADC\/config.c:83: SFRPAGE   = CONFIG_PAGE;
      000094 75 84 0F         [24] 1451 	mov	_SFRPAGE,#0x0f
                           000035  1452 	C$config.c$84$1$6 ==.
                                   1453 ;	Z:\MICAP\ADC\/config.c:84: XBR2      = 0x40;
      000097 75 E3 40         [24] 1454 	mov	_XBR2,#0x40
                           000038  1455 	C$config.c$85$1$6 ==.
                           000038  1456 	XG$Port_IO_Init$0$0 ==.
      00009A 22               [24] 1457 	ret
                                   1458 ;------------------------------------------------------------
                                   1459 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1460 ;------------------------------------------------------------
                                   1461 ;i                         Allocated to registers r6 r7 
                                   1462 ;------------------------------------------------------------
                           000039  1463 	G$Oscillator_Init$0$0 ==.
                           000039  1464 	C$config.c$87$1$6 ==.
                                   1465 ;	Z:\MICAP\ADC\/config.c:87: void Oscillator_Init()
                                   1466 ;	-----------------------------------------
                                   1467 ;	 function Oscillator_Init
                                   1468 ;	-----------------------------------------
      00009B                       1469 _Oscillator_Init:
                           000039  1470 	C$config.c$90$1$7 ==.
                                   1471 ;	Z:\MICAP\ADC\/config.c:90: SFRPAGE   = CONFIG_PAGE;
      00009B 75 84 0F         [24] 1472 	mov	_SFRPAGE,#0x0f
                           00003C  1473 	C$config.c$91$1$7 ==.
                                   1474 ;	Z:\MICAP\ADC\/config.c:91: OSCXCN    = 0x67;
      00009E 75 8C 67         [24] 1475 	mov	_OSCXCN,#0x67
                           00003F  1476 	C$config.c$92$1$7 ==.
                                   1477 ;	Z:\MICAP\ADC\/config.c:92: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      0000A1 7E B8            [12] 1478 	mov	r6,#0xb8
      0000A3 7F 0B            [12] 1479 	mov	r7,#0x0b
      0000A5                       1480 00107$:
      0000A5 EE               [12] 1481 	mov	a,r6
      0000A6 24 FF            [12] 1482 	add	a,#0xff
      0000A8 FC               [12] 1483 	mov	r4,a
      0000A9 EF               [12] 1484 	mov	a,r7
      0000AA 34 FF            [12] 1485 	addc	a,#0xff
      0000AC FD               [12] 1486 	mov	r5,a
      0000AD 8C 06            [24] 1487 	mov	ar6,r4
      0000AF 8D 07            [24] 1488 	mov	ar7,r5
      0000B1 EC               [12] 1489 	mov	a,r4
      0000B2 4D               [12] 1490 	orl	a,r5
      0000B3 70 F0            [24] 1491 	jnz	00107$
                           000053  1492 	C$config.c$93$1$7 ==.
                                   1493 ;	Z:\MICAP\ADC\/config.c:93: while ((OSCXCN & 0x80) == 0);
      0000B5                       1494 00102$:
      0000B5 E5 8C            [12] 1495 	mov	a,_OSCXCN
      0000B7 30 E7 FB         [24] 1496 	jnb	acc.7,00102$
                           000058  1497 	C$config.c$94$1$7 ==.
                                   1498 ;	Z:\MICAP\ADC\/config.c:94: CLKSEL    = 0x01;
      0000BA 75 97 01         [24] 1499 	mov	_CLKSEL,#0x01
                           00005B  1500 	C$config.c$95$1$7 ==.
                           00005B  1501 	XG$Oscillator_Init$0$0 ==.
      0000BD 22               [24] 1502 	ret
                                   1503 ;------------------------------------------------------------
                                   1504 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1505 ;------------------------------------------------------------
                           00005C  1506 	G$Interrupts_Init$0$0 ==.
                           00005C  1507 	C$config.c$97$1$7 ==.
                                   1508 ;	Z:\MICAP\ADC\/config.c:97: void Interrupts_Init()
                                   1509 ;	-----------------------------------------
                                   1510 ;	 function Interrupts_Init
                                   1511 ;	-----------------------------------------
      0000BE                       1512 _Interrupts_Init:
                           00005C  1513 	C$config.c$99$1$8 ==.
                                   1514 ;	Z:\MICAP\ADC\/config.c:99: IE        = 0xA0;
      0000BE 75 A8 A0         [24] 1515 	mov	_IE,#0xa0
                           00005F  1516 	C$config.c$100$1$8 ==.
                           00005F  1517 	XG$Interrupts_Init$0$0 ==.
      0000C1 22               [24] 1518 	ret
                                   1519 ;------------------------------------------------------------
                                   1520 ;Allocation info for local variables in function 'Init_Device'
                                   1521 ;------------------------------------------------------------
                           000060  1522 	G$Init_Device$0$0 ==.
                           000060  1523 	C$config.c$104$1$8 ==.
                                   1524 ;	Z:\MICAP\ADC\/config.c:104: void Init_Device(void)
                                   1525 ;	-----------------------------------------
                                   1526 ;	 function Init_Device
                                   1527 ;	-----------------------------------------
      0000C2                       1528 _Init_Device:
                           000060  1529 	C$config.c$106$1$10 ==.
                                   1530 ;	Z:\MICAP\ADC\/config.c:106: Reset_Sources_Init();
      0000C2 12 00 62         [24] 1531 	lcall	_Reset_Sources_Init
                           000063  1532 	C$config.c$107$1$10 ==.
                                   1533 ;	Z:\MICAP\ADC\/config.c:107: Timer_Init();
      0000C5 12 00 69         [24] 1534 	lcall	_Timer_Init
                           000066  1535 	C$config.c$108$1$10 ==.
                                   1536 ;	Z:\MICAP\ADC\/config.c:108: ADC_Init();
      0000C8 12 00 7F         [24] 1537 	lcall	_ADC_Init
                           000069  1538 	C$config.c$109$1$10 ==.
                                   1539 ;	Z:\MICAP\ADC\/config.c:109: DAC_Init();
      0000CB 12 00 86         [24] 1540 	lcall	_DAC_Init
                           00006C  1541 	C$config.c$110$1$10 ==.
                                   1542 ;	Z:\MICAP\ADC\/config.c:110: Voltage_Reference_Init();
      0000CE 12 00 8D         [24] 1543 	lcall	_Voltage_Reference_Init
                           00006F  1544 	C$config.c$111$1$10 ==.
                                   1545 ;	Z:\MICAP\ADC\/config.c:111: Port_IO_Init();
      0000D1 12 00 94         [24] 1546 	lcall	_Port_IO_Init
                           000072  1547 	C$config.c$112$1$10 ==.
                                   1548 ;	Z:\MICAP\ADC\/config.c:112: Oscillator_Init();
      0000D4 12 00 9B         [24] 1549 	lcall	_Oscillator_Init
                           000075  1550 	C$config.c$113$1$10 ==.
                                   1551 ;	Z:\MICAP\ADC\/config.c:113: Interrupts_Init();
      0000D7 12 00 BE         [24] 1552 	lcall	_Interrupts_Init
                           000078  1553 	C$config.c$114$1$10 ==.
                           000078  1554 	XG$Init_Device$0$0 ==.
      0000DA 22               [24] 1555 	ret
                                   1556 ;------------------------------------------------------------
                                   1557 ;Allocation info for local variables in function 'delay_ms'
                                   1558 ;------------------------------------------------------------
                                   1559 ;t                         Allocated to registers r6 r7 
                                   1560 ;------------------------------------------------------------
                           000079  1561 	G$delay_ms$0$0 ==.
                           000079  1562 	C$main.c$24$1$10 ==.
                                   1563 ;	Z:\MICAP\ADC\main.c:24: void delay_ms(unsigned int t)
                                   1564 ;	-----------------------------------------
                                   1565 ;	 function delay_ms
                                   1566 ;	-----------------------------------------
      0000DB                       1567 _delay_ms:
      0000DB AE 82            [24] 1568 	mov	r6,dpl
      0000DD AF 83            [24] 1569 	mov	r7,dph
                           00007D  1570 	C$main.c$26$1$25 ==.
                                   1571 ;	Z:\MICAP\ADC\main.c:26: TMOD &= 0xFC;
      0000DF 53 89 FC         [24] 1572 	anl	_TMOD,#0xfc
                           000080  1573 	C$main.c$27$1$25 ==.
                                   1574 ;	Z:\MICAP\ADC\main.c:27: TMOD |= 0x01;
      0000E2 43 89 01         [24] 1575 	orl	_TMOD,#0x01
                           000083  1576 	C$main.c$29$1$25 ==.
                                   1577 ;	Z:\MICAP\ADC\main.c:29: while(t--)
      0000E5                       1578 00104$:
      0000E5 8E 04            [24] 1579 	mov	ar4,r6
      0000E7 8F 05            [24] 1580 	mov	ar5,r7
      0000E9 1E               [12] 1581 	dec	r6
      0000EA BE FF 01         [24] 1582 	cjne	r6,#0xff,00122$
      0000ED 1F               [12] 1583 	dec	r7
      0000EE                       1584 00122$:
      0000EE EC               [12] 1585 	mov	a,r4
      0000EF 4D               [12] 1586 	orl	a,r5
      0000F0 60 11            [24] 1587 	jz	00107$
                           000090  1588 	C$main.c$31$2$26 ==.
                                   1589 ;	Z:\MICAP\ADC\main.c:31: TR0 = 0;
      0000F2 C2 8C            [12] 1590 	clr	_TR0
                           000092  1591 	C$main.c$32$2$26 ==.
                                   1592 ;	Z:\MICAP\ADC\main.c:32: TF0 = 0;
      0000F4 C2 8D            [12] 1593 	clr	_TF0
                           000094  1594 	C$main.c$33$2$26 ==.
                                   1595 ;	Z:\MICAP\ADC\main.c:33: TL0 = 0x58;
      0000F6 75 8A 58         [24] 1596 	mov	_TL0,#0x58
                           000097  1597 	C$main.c$34$2$26 ==.
                                   1598 ;	Z:\MICAP\ADC\main.c:34: TH0 = 0x9E;
      0000F9 75 8C 9E         [24] 1599 	mov	_TH0,#0x9e
                           00009A  1600 	C$main.c$35$2$26 ==.
                                   1601 ;	Z:\MICAP\ADC\main.c:35: TR0 = 1;
      0000FC D2 8C            [12] 1602 	setb	_TR0
                           00009C  1603 	C$main.c$37$2$26 ==.
                                   1604 ;	Z:\MICAP\ADC\main.c:37: while (TF0 != 1);
      0000FE                       1605 00101$:
      0000FE 20 8D E4         [24] 1606 	jb	_TF0,00104$
      000101 80 FB            [24] 1607 	sjmp	00101$
      000103                       1608 00107$:
                           0000A1  1609 	C$main.c$39$1$25 ==.
                           0000A1  1610 	XG$delay_ms$0$0 ==.
      000103 22               [24] 1611 	ret
                                   1612 ;------------------------------------------------------------
                                   1613 ;Allocation info for local variables in function 'delay_us'
                                   1614 ;------------------------------------------------------------
                                   1615 ;t                         Allocated to registers r6 r7 
                                   1616 ;------------------------------------------------------------
                           0000A2  1617 	G$delay_us$0$0 ==.
                           0000A2  1618 	C$main.c$42$1$25 ==.
                                   1619 ;	Z:\MICAP\ADC\main.c:42: void delay_us(unsigned int t)
                                   1620 ;	-----------------------------------------
                                   1621 ;	 function delay_us
                                   1622 ;	-----------------------------------------
      000104                       1623 _delay_us:
      000104 AE 82            [24] 1624 	mov	r6,dpl
      000106 AF 83            [24] 1625 	mov	r7,dph
                           0000A6  1626 	C$main.c$44$1$28 ==.
                                   1627 ;	Z:\MICAP\ADC\main.c:44: TR0 = 0;
      000108 C2 8C            [12] 1628 	clr	_TR0
                           0000A8  1629 	C$main.c$45$1$28 ==.
                                   1630 ;	Z:\MICAP\ADC\main.c:45: TF0 = 0;
      00010A C2 8D            [12] 1631 	clr	_TF0
                           0000AA  1632 	C$main.c$46$1$28 ==.
                                   1633 ;	Z:\MICAP\ADC\main.c:46: TMOD &= 0xFC;
      00010C 53 89 FC         [24] 1634 	anl	_TMOD,#0xfc
                           0000AD  1635 	C$main.c$47$1$28 ==.
                                   1636 ;	Z:\MICAP\ADC\main.c:47: TMOD |= 0x02;
      00010F 43 89 02         [24] 1637 	orl	_TMOD,#0x02
                           0000B0  1638 	C$main.c$48$1$28 ==.
                                   1639 ;	Z:\MICAP\ADC\main.c:48: TL0 = 0xE7;
      000112 75 8A E7         [24] 1640 	mov	_TL0,#0xe7
                           0000B3  1641 	C$main.c$49$1$28 ==.
                                   1642 ;	Z:\MICAP\ADC\main.c:49: TH0 = 0xE7;
      000115 75 8C E7         [24] 1643 	mov	_TH0,#0xe7
                           0000B6  1644 	C$main.c$50$1$28 ==.
                                   1645 ;	Z:\MICAP\ADC\main.c:50: TR0 = 1;
      000118 D2 8C            [12] 1646 	setb	_TR0
                           0000B8  1647 	C$main.c$52$1$28 ==.
                                   1648 ;	Z:\MICAP\ADC\main.c:52: while(t--)
      00011A                       1649 00104$:
      00011A 8E 04            [24] 1650 	mov	ar4,r6
      00011C 8F 05            [24] 1651 	mov	ar5,r7
      00011E 1E               [12] 1652 	dec	r6
      00011F BE FF 01         [24] 1653 	cjne	r6,#0xff,00119$
      000122 1F               [12] 1654 	dec	r7
      000123                       1655 00119$:
      000123 EC               [12] 1656 	mov	a,r4
      000124 4D               [12] 1657 	orl	a,r5
      000125 60 05            [24] 1658 	jz	00107$
                           0000C5  1659 	C$main.c$54$2$29 ==.
                                   1660 ;	Z:\MICAP\ADC\main.c:54: while (TF0 != 1);
      000127                       1661 00101$:
                           0000C5  1662 	C$main.c$55$2$29 ==.
                                   1663 ;	Z:\MICAP\ADC\main.c:55: TF0 = 0;
      000127 10 8D F0         [24] 1664 	jbc	_TF0,00104$
      00012A 80 FB            [24] 1665 	sjmp	00101$
      00012C                       1666 00107$:
                           0000CA  1667 	C$main.c$57$1$28 ==.
                           0000CA  1668 	XG$delay_us$0$0 ==.
      00012C 22               [24] 1669 	ret
                                   1670 ;------------------------------------------------------------
                                   1671 ;Allocation info for local variables in function 'le_glcd'
                                   1672 ;------------------------------------------------------------
                                   1673 ;byte                      Allocated to registers 
                                   1674 ;------------------------------------------------------------
                           0000CB  1675 	G$le_glcd$0$0 ==.
                           0000CB  1676 	C$main.c$158$1$28 ==.
                                   1677 ;	Z:\MICAP\ADC\main.c:158: unsigned char le_glcd(__bit cd, __bit cs)
                                   1678 ;	-----------------------------------------
                                   1679 ;	 function le_glcd
                                   1680 ;	-----------------------------------------
      00012D                       1681 _le_glcd:
                           0000CB  1682 	C$main.c$161$1$31 ==.
                                   1683 ;	Z:\MICAP\ADC\main.c:161: RW = 1;
      00012D D2 A3            [12] 1684 	setb	_P2_3
                           0000CD  1685 	C$main.c$162$1$31 ==.
                                   1686 ;	Z:\MICAP\ADC\main.c:162: CS1 = cs;
      00012F A2 01            [12] 1687 	mov	c,_le_glcd_PARM_2
      000131 92 A0            [24] 1688 	mov	_P2_0,c
                           0000D1  1689 	C$main.c$163$1$31 ==.
                                   1690 ;	Z:\MICAP\ADC\main.c:163: CS2 = !cs;
      000133 A2 01            [12] 1691 	mov	c,_le_glcd_PARM_2
      000135 B3               [12] 1692 	cpl	c
      000136 92 A1            [24] 1693 	mov	_P2_1,c
                           0000D6  1694 	C$main.c$164$1$31 ==.
                                   1695 ;	Z:\MICAP\ADC\main.c:164: RS = cd;
      000138 A2 00            [12] 1696 	mov	c,_le_glcd_PARM_1
      00013A 92 A2            [24] 1697 	mov	_P2_2,c
                           0000DA  1698 	C$main.c$165$1$31 ==.
                                   1699 ;	Z:\MICAP\ADC\main.c:165: NOP4();
      00013C 00               [12] 1700 	NOP	
      00013D 00               [12] 1701 	NOP	
      00013E 00               [12] 1702 	NOP	
      00013F 00               [12] 1703 	NOP	
                           0000DE  1704 	C$main.c$166$1$31 ==.
                                   1705 ;	Z:\MICAP\ADC\main.c:166: E = 1;
      000140 D2 A4            [12] 1706 	setb	_P2_4
                           0000E0  1707 	C$main.c$167$1$31 ==.
                                   1708 ;	Z:\MICAP\ADC\main.c:167: NOP8();
      000142 00               [12] 1709 	NOP	
      000143 00               [12] 1710 	NOP	
      000144 00               [12] 1711 	NOP	
      000145 00               [12] 1712 	NOP	
      000146 00               [12] 1713 	NOP	
      000147 00               [12] 1714 	NOP	
      000148 00               [12] 1715 	NOP	
      000149 00               [12] 1716 	NOP	
                           0000E8  1717 	C$main.c$168$1$31 ==.
                                   1718 ;	Z:\MICAP\ADC\main.c:168: SFRPAGE = CONFIG_PAGE;
      00014A 75 84 0F         [24] 1719 	mov	_SFRPAGE,#0x0f
                           0000EB  1720 	C$main.c$169$1$31 ==.
                                   1721 ;	Z:\MICAP\ADC\main.c:169: byte = DB;
      00014D 85 C8 82         [24] 1722 	mov	dpl,_P4
                           0000EE  1723 	C$main.c$170$1$31 ==.
                                   1724 ;	Z:\MICAP\ADC\main.c:170: SFRPAGE = LEGACY_PAGE;
      000150 75 84 00         [24] 1725 	mov	_SFRPAGE,#0x00
                           0000F1  1726 	C$main.c$171$1$31 ==.
                                   1727 ;	Z:\MICAP\ADC\main.c:171: NOP4();
      000153 00               [12] 1728 	NOP	
      000154 00               [12] 1729 	NOP	
      000155 00               [12] 1730 	NOP	
      000156 00               [12] 1731 	NOP	
                           0000F5  1732 	C$main.c$172$1$31 ==.
                                   1733 ;	Z:\MICAP\ADC\main.c:172: E = 0;
      000157 C2 A4            [12] 1734 	clr	_P2_4
                           0000F7  1735 	C$main.c$173$1$31 ==.
                                   1736 ;	Z:\MICAP\ADC\main.c:173: NOP12();
      000159 00               [12] 1737 	NOP	
      00015A 00               [12] 1738 	NOP	
      00015B 00               [12] 1739 	NOP	
      00015C 00               [12] 1740 	NOP	
      00015D 00               [12] 1741 	NOP	
      00015E 00               [12] 1742 	NOP	
      00015F 00               [12] 1743 	NOP	
      000160 00               [12] 1744 	NOP	
      000161 00               [12] 1745 	NOP	
      000162 00               [12] 1746 	NOP	
      000163 00               [12] 1747 	NOP	
      000164 00               [12] 1748 	NOP	
                           000103  1749 	C$main.c$174$1$31 ==.
                                   1750 ;	Z:\MICAP\ADC\main.c:174: return(byte);
                           000103  1751 	C$main.c$175$1$31 ==.
                           000103  1752 	XG$le_glcd$0$0 ==.
      000165 22               [24] 1753 	ret
                                   1754 ;------------------------------------------------------------
                                   1755 ;Allocation info for local variables in function 'esc_glcd'
                                   1756 ;------------------------------------------------------------
                                   1757 ;byte                      Allocated to registers r7 
                                   1758 ;------------------------------------------------------------
                           000104  1759 	G$esc_glcd$0$0 ==.
                           000104  1760 	C$main.c$177$1$31 ==.
                                   1761 ;	Z:\MICAP\ADC\main.c:177: void esc_glcd(unsigned char byte, __bit cd, __bit cs)
                                   1762 ;	-----------------------------------------
                                   1763 ;	 function esc_glcd
                                   1764 ;	-----------------------------------------
      000166                       1765 _esc_glcd:
      000166 AF 82            [24] 1766 	mov	r7,dpl
                           000106  1767 	C$main.c$179$1$33 ==.
                                   1768 ;	Z:\MICAP\ADC\main.c:179: while (le_glcd(CO,cs) & 0x80);
      000168                       1769 00101$:
      000168 C2 00            [12] 1770 	clr	_le_glcd_PARM_1
      00016A A2 03            [12] 1771 	mov	c,_esc_glcd_PARM_3
      00016C 92 01            [24] 1772 	mov	_le_glcd_PARM_2,c
      00016E C0 07            [24] 1773 	push	ar7
      000170 12 01 2D         [24] 1774 	lcall	_le_glcd
      000173 E5 82            [12] 1775 	mov	a,dpl
      000175 D0 07            [24] 1776 	pop	ar7
      000177 20 E7 EE         [24] 1777 	jb	acc.7,00101$
                           000118  1778 	C$main.c$180$1$33 ==.
                                   1779 ;	Z:\MICAP\ADC\main.c:180: RW = 0;
      00017A C2 A3            [12] 1780 	clr	_P2_3
                           00011A  1781 	C$main.c$181$1$33 ==.
                                   1782 ;	Z:\MICAP\ADC\main.c:181: CS1 = cs;
      00017C A2 03            [12] 1783 	mov	c,_esc_glcd_PARM_3
      00017E 92 A0            [24] 1784 	mov	_P2_0,c
                           00011E  1785 	C$main.c$182$1$33 ==.
                                   1786 ;	Z:\MICAP\ADC\main.c:182: CS2 = !cs;
      000180 A2 03            [12] 1787 	mov	c,_esc_glcd_PARM_3
      000182 B3               [12] 1788 	cpl	c
      000183 92 A1            [24] 1789 	mov	_P2_1,c
                           000123  1790 	C$main.c$183$1$33 ==.
                                   1791 ;	Z:\MICAP\ADC\main.c:183: RS = cd;
      000185 A2 02            [12] 1792 	mov	c,_esc_glcd_PARM_2
      000187 92 A2            [24] 1793 	mov	_P2_2,c
                           000127  1794 	C$main.c$184$1$33 ==.
                                   1795 ;	Z:\MICAP\ADC\main.c:184: SFRPAGE = CONFIG_PAGE;
      000189 75 84 0F         [24] 1796 	mov	_SFRPAGE,#0x0f
                           00012A  1797 	C$main.c$185$1$33 ==.
                                   1798 ;	Z:\MICAP\ADC\main.c:185: DB = byte;
      00018C 8F C8            [24] 1799 	mov	_P4,r7
                           00012C  1800 	C$main.c$186$1$33 ==.
                                   1801 ;	Z:\MICAP\ADC\main.c:186: SFRPAGE = LEGACY_PAGE;
      00018E 75 84 00         [24] 1802 	mov	_SFRPAGE,#0x00
                           00012F  1803 	C$main.c$187$1$33 ==.
                                   1804 ;	Z:\MICAP\ADC\main.c:187: NOP4();
      000191 00               [12] 1805 	NOP	
      000192 00               [12] 1806 	NOP	
      000193 00               [12] 1807 	NOP	
      000194 00               [12] 1808 	NOP	
                           000133  1809 	C$main.c$188$1$33 ==.
                                   1810 ;	Z:\MICAP\ADC\main.c:188: E = 1;
      000195 D2 A4            [12] 1811 	setb	_P2_4
                           000135  1812 	C$main.c$189$1$33 ==.
                                   1813 ;	Z:\MICAP\ADC\main.c:189: NOP12();
      000197 00               [12] 1814 	NOP	
      000198 00               [12] 1815 	NOP	
      000199 00               [12] 1816 	NOP	
      00019A 00               [12] 1817 	NOP	
      00019B 00               [12] 1818 	NOP	
      00019C 00               [12] 1819 	NOP	
      00019D 00               [12] 1820 	NOP	
      00019E 00               [12] 1821 	NOP	
      00019F 00               [12] 1822 	NOP	
      0001A0 00               [12] 1823 	NOP	
      0001A1 00               [12] 1824 	NOP	
      0001A2 00               [12] 1825 	NOP	
                           000141  1826 	C$main.c$190$1$33 ==.
                                   1827 ;	Z:\MICAP\ADC\main.c:190: E = 0;	
      0001A3 C2 A4            [12] 1828 	clr	_P2_4
                           000143  1829 	C$main.c$191$1$33 ==.
                                   1830 ;	Z:\MICAP\ADC\main.c:191: SFRPAGE = CONFIG_PAGE;
      0001A5 75 84 0F         [24] 1831 	mov	_SFRPAGE,#0x0f
                           000146  1832 	C$main.c$192$1$33 ==.
                                   1833 ;	Z:\MICAP\ADC\main.c:192: DB = 0xFF;
      0001A8 75 C8 FF         [24] 1834 	mov	_P4,#0xff
                           000149  1835 	C$main.c$193$1$33 ==.
                                   1836 ;	Z:\MICAP\ADC\main.c:193: SFRPAGE = LEGACY_PAGE;
      0001AB 75 84 00         [24] 1837 	mov	_SFRPAGE,#0x00
                           00014C  1838 	C$main.c$194$1$33 ==.
                                   1839 ;	Z:\MICAP\ADC\main.c:194: NOP12();
      0001AE 00               [12] 1840 	NOP	
      0001AF 00               [12] 1841 	NOP	
      0001B0 00               [12] 1842 	NOP	
      0001B1 00               [12] 1843 	NOP	
      0001B2 00               [12] 1844 	NOP	
      0001B3 00               [12] 1845 	NOP	
      0001B4 00               [12] 1846 	NOP	
      0001B5 00               [12] 1847 	NOP	
      0001B6 00               [12] 1848 	NOP	
      0001B7 00               [12] 1849 	NOP	
      0001B8 00               [12] 1850 	NOP	
      0001B9 00               [12] 1851 	NOP	
                           000158  1852 	C$main.c$195$1$33 ==.
                           000158  1853 	XG$esc_glcd$0$0 ==.
      0001BA 22               [24] 1854 	ret
                                   1855 ;------------------------------------------------------------
                                   1856 ;Allocation info for local variables in function 'Ini_glcd'
                                   1857 ;------------------------------------------------------------
                           000159  1858 	G$Ini_glcd$0$0 ==.
                           000159  1859 	C$main.c$197$1$33 ==.
                                   1860 ;	Z:\MICAP\ADC\main.c:197: void Ini_glcd(void)
                                   1861 ;	-----------------------------------------
                                   1862 ;	 function Ini_glcd
                                   1863 ;	-----------------------------------------
      0001BB                       1864 _Ini_glcd:
                           000159  1865 	C$main.c$199$1$35 ==.
                                   1866 ;	Z:\MICAP\ADC\main.c:199: E = 0;
      0001BB C2 A4            [12] 1867 	clr	_P2_4
                           00015B  1868 	C$main.c$200$1$35 ==.
                                   1869 ;	Z:\MICAP\ADC\main.c:200: RST = 1;
      0001BD D2 A5            [12] 1870 	setb	_P2_5
                           00015D  1871 	C$main.c$201$1$35 ==.
                                   1872 ;	Z:\MICAP\ADC\main.c:201: CS1 = 1;
      0001BF D2 A0            [12] 1873 	setb	_P2_0
                           00015F  1874 	C$main.c$202$1$35 ==.
                                   1875 ;	Z:\MICAP\ADC\main.c:202: CS2 = 1;
      0001C1 D2 A1            [12] 1876 	setb	_P2_1
                           000161  1877 	C$main.c$204$1$35 ==.
                                   1878 ;	Z:\MICAP\ADC\main.c:204: SFRPAGE = CONFIG_PAGE;
      0001C3 75 84 0F         [24] 1879 	mov	_SFRPAGE,#0x0f
                           000164  1880 	C$main.c$205$1$35 ==.
                                   1881 ;	Z:\MICAP\ADC\main.c:205: DB = 0xFF;
      0001C6 75 C8 FF         [24] 1882 	mov	_P4,#0xff
                           000167  1883 	C$main.c$206$1$35 ==.
                                   1884 ;	Z:\MICAP\ADC\main.c:206: SFRPAGE = LEGACY_PAGE;
      0001C9 75 84 00         [24] 1885 	mov	_SFRPAGE,#0x00
                           00016A  1886 	C$main.c$208$1$35 ==.
                                   1887 ;	Z:\MICAP\ADC\main.c:208: while(le_glcd(CO, ESQ) & 0x10);
      0001CC                       1888 00101$:
      0001CC C2 00            [12] 1889 	clr	_le_glcd_PARM_1
      0001CE C2 01            [12] 1890 	clr	_le_glcd_PARM_2
      0001D0 12 01 2D         [24] 1891 	lcall	_le_glcd
      0001D3 E5 82            [12] 1892 	mov	a,dpl
      0001D5 20 E4 F4         [24] 1893 	jb	acc.4,00101$
                           000176  1894 	C$main.c$209$1$35 ==.
                                   1895 ;	Z:\MICAP\ADC\main.c:209: while(le_glcd(CO, DIR) & 0x10);
      0001D8                       1896 00104$:
      0001D8 C2 00            [12] 1897 	clr	_le_glcd_PARM_1
      0001DA D2 01            [12] 1898 	setb	_le_glcd_PARM_2
      0001DC 12 01 2D         [24] 1899 	lcall	_le_glcd
      0001DF E5 82            [12] 1900 	mov	a,dpl
      0001E1 20 E4 F4         [24] 1901 	jb	acc.4,00104$
                           000182  1902 	C$main.c$211$1$35 ==.
                                   1903 ;	Z:\MICAP\ADC\main.c:211: esc_glcd(0x3F, CO, ESQ);
      0001E4 C2 02            [12] 1904 	clr	_esc_glcd_PARM_2
      0001E6 C2 03            [12] 1905 	clr	_esc_glcd_PARM_3
      0001E8 75 82 3F         [24] 1906 	mov	dpl,#0x3f
      0001EB 12 01 66         [24] 1907 	lcall	_esc_glcd
                           00018C  1908 	C$main.c$212$1$35 ==.
                                   1909 ;	Z:\MICAP\ADC\main.c:212: esc_glcd(0x3F, CO, DIR);
      0001EE C2 02            [12] 1910 	clr	_esc_glcd_PARM_2
      0001F0 D2 03            [12] 1911 	setb	_esc_glcd_PARM_3
      0001F2 75 82 3F         [24] 1912 	mov	dpl,#0x3f
      0001F5 12 01 66         [24] 1913 	lcall	_esc_glcd
                           000196  1914 	C$main.c$213$1$35 ==.
                                   1915 ;	Z:\MICAP\ADC\main.c:213: esc_glcd(0x40, CO, ESQ);
      0001F8 C2 02            [12] 1916 	clr	_esc_glcd_PARM_2
      0001FA C2 03            [12] 1917 	clr	_esc_glcd_PARM_3
      0001FC 75 82 40         [24] 1918 	mov	dpl,#0x40
      0001FF 12 01 66         [24] 1919 	lcall	_esc_glcd
                           0001A0  1920 	C$main.c$214$1$35 ==.
                                   1921 ;	Z:\MICAP\ADC\main.c:214: esc_glcd(0xB8, CO, ESQ);
      000202 C2 02            [12] 1922 	clr	_esc_glcd_PARM_2
      000204 C2 03            [12] 1923 	clr	_esc_glcd_PARM_3
      000206 75 82 B8         [24] 1924 	mov	dpl,#0xb8
      000209 12 01 66         [24] 1925 	lcall	_esc_glcd
                           0001AA  1926 	C$main.c$215$1$35 ==.
                                   1927 ;	Z:\MICAP\ADC\main.c:215: esc_glcd(0xC0, CO, ESQ);
      00020C C2 02            [12] 1928 	clr	_esc_glcd_PARM_2
      00020E C2 03            [12] 1929 	clr	_esc_glcd_PARM_3
      000210 75 82 C0         [24] 1930 	mov	dpl,#0xc0
      000213 12 01 66         [24] 1931 	lcall	_esc_glcd
                           0001B4  1932 	C$main.c$216$1$35 ==.
                                   1933 ;	Z:\MICAP\ADC\main.c:216: esc_glcd(0x40, CO, DIR);
      000216 C2 02            [12] 1934 	clr	_esc_glcd_PARM_2
      000218 D2 03            [12] 1935 	setb	_esc_glcd_PARM_3
      00021A 75 82 40         [24] 1936 	mov	dpl,#0x40
      00021D 12 01 66         [24] 1937 	lcall	_esc_glcd
                           0001BE  1938 	C$main.c$217$1$35 ==.
                                   1939 ;	Z:\MICAP\ADC\main.c:217: esc_glcd(0xB8, CO, DIR);
      000220 C2 02            [12] 1940 	clr	_esc_glcd_PARM_2
      000222 D2 03            [12] 1941 	setb	_esc_glcd_PARM_3
      000224 75 82 B8         [24] 1942 	mov	dpl,#0xb8
      000227 12 01 66         [24] 1943 	lcall	_esc_glcd
                           0001C8  1944 	C$main.c$218$1$35 ==.
                                   1945 ;	Z:\MICAP\ADC\main.c:218: esc_glcd(0xC0, CO, DIR);
      00022A C2 02            [12] 1946 	clr	_esc_glcd_PARM_2
      00022C D2 03            [12] 1947 	setb	_esc_glcd_PARM_3
      00022E 75 82 C0         [24] 1948 	mov	dpl,#0xc0
      000231 12 01 66         [24] 1949 	lcall	_esc_glcd
                           0001D2  1950 	C$main.c$219$1$35 ==.
                           0001D2  1951 	XG$Ini_glcd$0$0 ==.
      000234 22               [24] 1952 	ret
                                   1953 ;------------------------------------------------------------
                                   1954 ;Allocation info for local variables in function 'conf_Y'
                                   1955 ;------------------------------------------------------------
                                   1956 ;y                         Allocated to registers r7 
                                   1957 ;------------------------------------------------------------
                           0001D3  1958 	G$conf_Y$0$0 ==.
                           0001D3  1959 	C$main.c$221$1$35 ==.
                                   1960 ;	Z:\MICAP\ADC\main.c:221: void conf_Y(unsigned char y, __bit cs)
                                   1961 ;	-----------------------------------------
                                   1962 ;	 function conf_Y
                                   1963 ;	-----------------------------------------
      000235                       1964 _conf_Y:
      000235 AF 82            [24] 1965 	mov	r7,dpl
                           0001D5  1966 	C$main.c$223$1$37 ==.
                                   1967 ;	Z:\MICAP\ADC\main.c:223: y &= 0x3F;
      000237 53 07 3F         [24] 1968 	anl	ar7,#0x3f
                           0001D8  1969 	C$main.c$224$1$37 ==.
                                   1970 ;	Z:\MICAP\ADC\main.c:224: esc_glcd(0x40 | y, CO, cs);
      00023A 74 40            [12] 1971 	mov	a,#0x40
      00023C 4F               [12] 1972 	orl	a,r7
      00023D F5 82            [12] 1973 	mov	dpl,a
      00023F C2 02            [12] 1974 	clr	_esc_glcd_PARM_2
      000241 A2 04            [12] 1975 	mov	c,_conf_Y_PARM_2
      000243 92 03            [24] 1976 	mov	_esc_glcd_PARM_3,c
      000245 12 01 66         [24] 1977 	lcall	_esc_glcd
                           0001E6  1978 	C$main.c$225$1$37 ==.
                           0001E6  1979 	XG$conf_Y$0$0 ==.
      000248 22               [24] 1980 	ret
                                   1981 ;------------------------------------------------------------
                                   1982 ;Allocation info for local variables in function 'conf_pag'
                                   1983 ;------------------------------------------------------------
                                   1984 ;pag                       Allocated to registers r7 
                                   1985 ;------------------------------------------------------------
                           0001E7  1986 	G$conf_pag$0$0 ==.
                           0001E7  1987 	C$main.c$227$1$37 ==.
                                   1988 ;	Z:\MICAP\ADC\main.c:227: void conf_pag(unsigned char pag, __bit cs)
                                   1989 ;	-----------------------------------------
                                   1990 ;	 function conf_pag
                                   1991 ;	-----------------------------------------
      000249                       1992 _conf_pag:
      000249 AF 82            [24] 1993 	mov	r7,dpl
                           0001E9  1994 	C$main.c$229$1$39 ==.
                                   1995 ;	Z:\MICAP\ADC\main.c:229: pag &= 0x07;
      00024B 53 07 07         [24] 1996 	anl	ar7,#0x07
                           0001EC  1997 	C$main.c$230$1$39 ==.
                                   1998 ;	Z:\MICAP\ADC\main.c:230: esc_glcd(0xB8 | pag, CO, cs);
      00024E 74 B8            [12] 1999 	mov	a,#0xb8
      000250 4F               [12] 2000 	orl	a,r7
      000251 F5 82            [12] 2001 	mov	dpl,a
      000253 C2 02            [12] 2002 	clr	_esc_glcd_PARM_2
      000255 A2 05            [12] 2003 	mov	c,_conf_pag_PARM_2
      000257 92 03            [24] 2004 	mov	_esc_glcd_PARM_3,c
      000259 12 01 66         [24] 2005 	lcall	_esc_glcd
                           0001FA  2006 	C$main.c$231$1$39 ==.
                           0001FA  2007 	XG$conf_pag$0$0 ==.
      00025C 22               [24] 2008 	ret
                                   2009 ;------------------------------------------------------------
                                   2010 ;Allocation info for local variables in function 'limpa_glcd'
                                   2011 ;------------------------------------------------------------
                                   2012 ;i                         Allocated to registers r7 
                                   2013 ;j                         Allocated to registers r6 
                                   2014 ;------------------------------------------------------------
                           0001FB  2015 	G$limpa_glcd$0$0 ==.
                           0001FB  2016 	C$main.c$233$1$39 ==.
                                   2017 ;	Z:\MICAP\ADC\main.c:233: void limpa_glcd(__bit cs)
                                   2018 ;	-----------------------------------------
                                   2019 ;	 function limpa_glcd
                                   2020 ;	-----------------------------------------
      00025D                       2021 _limpa_glcd:
                           0001FB  2022 	C$main.c$237$1$41 ==.
                                   2023 ;	Z:\MICAP\ADC\main.c:237: for(i = 0; i < 8; i++)
      00025D 7F 00            [12] 2024 	mov	r7,#0x00
      00025F                       2025 00105$:
                           0001FD  2026 	C$main.c$239$2$42 ==.
                                   2027 ;	Z:\MICAP\ADC\main.c:239: conf_pag(i, cs);
      00025F A2 06            [12] 2028 	mov	c,_limpa_glcd_PARM_1
      000261 92 05            [24] 2029 	mov	_conf_pag_PARM_2,c
      000263 8F 82            [24] 2030 	mov	dpl,r7
      000265 C0 07            [24] 2031 	push	ar7
      000267 12 02 49         [24] 2032 	lcall	_conf_pag
                           000208  2033 	C$main.c$240$2$42 ==.
                                   2034 ;	Z:\MICAP\ADC\main.c:240: conf_Y(0, cs);
      00026A A2 06            [12] 2035 	mov	c,_limpa_glcd_PARM_1
      00026C 92 04            [24] 2036 	mov	_conf_Y_PARM_2,c
      00026E 75 82 00         [24] 2037 	mov	dpl,#0x00
      000271 12 02 35         [24] 2038 	lcall	_conf_Y
      000274 D0 07            [24] 2039 	pop	ar7
                           000214  2040 	C$main.c$241$1$41 ==.
                                   2041 ;	Z:\MICAP\ADC\main.c:241: for(j = 0; j < 64; j++)
      000276 7E 00            [12] 2042 	mov	r6,#0x00
      000278                       2043 00103$:
                           000216  2044 	C$main.c$242$2$42 ==.
                                   2045 ;	Z:\MICAP\ADC\main.c:242: esc_glcd(0x00, DA, cs);
      000278 D2 02            [12] 2046 	setb	_esc_glcd_PARM_2
      00027A A2 06            [12] 2047 	mov	c,_limpa_glcd_PARM_1
      00027C 92 03            [24] 2048 	mov	_esc_glcd_PARM_3,c
      00027E 75 82 00         [24] 2049 	mov	dpl,#0x00
      000281 C0 07            [24] 2050 	push	ar7
      000283 C0 06            [24] 2051 	push	ar6
      000285 12 01 66         [24] 2052 	lcall	_esc_glcd
      000288 D0 06            [24] 2053 	pop	ar6
      00028A D0 07            [24] 2054 	pop	ar7
                           00022A  2055 	C$main.c$241$2$42 ==.
                                   2056 ;	Z:\MICAP\ADC\main.c:241: for(j = 0; j < 64; j++)
      00028C 0E               [12] 2057 	inc	r6
      00028D BE 40 00         [24] 2058 	cjne	r6,#0x40,00120$
      000290                       2059 00120$:
      000290 40 E6            [24] 2060 	jc	00103$
                           000230  2061 	C$main.c$237$1$41 ==.
                                   2062 ;	Z:\MICAP\ADC\main.c:237: for(i = 0; i < 8; i++)
      000292 0F               [12] 2063 	inc	r7
      000293 BF 08 00         [24] 2064 	cjne	r7,#0x08,00122$
      000296                       2065 00122$:
      000296 40 C7            [24] 2066 	jc	00105$
                           000236  2067 	C$main.c$244$1$41 ==.
                           000236  2068 	XG$limpa_glcd$0$0 ==.
      000298 22               [24] 2069 	ret
                                   2070 ;------------------------------------------------------------
                                   2071 ;Allocation info for local variables in function 'putchar'
                                   2072 ;------------------------------------------------------------
                                   2073 ;count                     Allocated with name '_putchar_count_1_44'
                                   2074 ;c                         Allocated to registers r7 
                                   2075 ;i                         Allocated to registers r5 
                                   2076 ;cs                        Allocated to registers r6 
                                   2077 ;------------------------------------------------------------
                           000237  2078 	G$putchar$0$0 ==.
                           000237  2079 	C$main.c$246$1$41 ==.
                                   2080 ;	Z:\MICAP\ADC\main.c:246: void putchar(char c)
                                   2081 ;	-----------------------------------------
                                   2082 ;	 function putchar
                                   2083 ;	-----------------------------------------
      000299                       2084 _putchar:
                           000237  2085 	C$main.c$251$1$44 ==.
                                   2086 ;	Z:\MICAP\ADC\main.c:251: if(c > 0 && c <= 8)
      000299 E5 82            [12] 2087 	mov	a,dpl
      00029B FF               [12] 2088 	mov	r7,a
      00029C 60 30            [24] 2089 	jz	00107$
      00029E EF               [12] 2090 	mov	a,r7
      00029F 24 F7            [12] 2091 	add	a,#0xff - 0x08
      0002A1 40 2B            [24] 2092 	jc	00107$
                           000241  2093 	C$main.c$253$2$45 ==.
                                   2094 ;	Z:\MICAP\ADC\main.c:253: conf_pag(c-1, 0);
      0002A3 EF               [12] 2095 	mov	a,r7
      0002A4 14               [12] 2096 	dec	a
      0002A5 FE               [12] 2097 	mov	r6,a
      0002A6 C2 05            [12] 2098 	clr	_conf_pag_PARM_2
      0002A8 8E 82            [24] 2099 	mov	dpl,r6
      0002AA C0 06            [24] 2100 	push	ar6
      0002AC 12 02 49         [24] 2101 	lcall	_conf_pag
                           00024D  2102 	C$main.c$254$2$45 ==.
                                   2103 ;	Z:\MICAP\ADC\main.c:254: conf_Y(0, 0);
      0002AF C2 04            [12] 2104 	clr	_conf_Y_PARM_2
      0002B1 75 82 00         [24] 2105 	mov	dpl,#0x00
      0002B4 12 02 35         [24] 2106 	lcall	_conf_Y
      0002B7 D0 06            [24] 2107 	pop	ar6
                           000257  2108 	C$main.c$255$2$45 ==.
                                   2109 ;	Z:\MICAP\ADC\main.c:255: conf_pag(c-1, 1);
      0002B9 D2 05            [12] 2110 	setb	_conf_pag_PARM_2
      0002BB 8E 82            [24] 2111 	mov	dpl,r6
      0002BD 12 02 49         [24] 2112 	lcall	_conf_pag
                           00025E  2113 	C$main.c$256$2$45 ==.
                                   2114 ;	Z:\MICAP\ADC\main.c:256: conf_Y(0, 1);
      0002C0 D2 04            [12] 2115 	setb	_conf_Y_PARM_2
      0002C2 75 82 00         [24] 2116 	mov	dpl,#0x00
      0002C5 12 02 35         [24] 2117 	lcall	_conf_Y
                           000266  2118 	C$main.c$257$2$45 ==.
                                   2119 ;	Z:\MICAP\ADC\main.c:257: count = 0;
      0002C8 75 08 00         [24] 2120 	mov	_putchar_count_1_44,#0x00
      0002CB 02 03 4B         [24] 2121 	ljmp	00114$
      0002CE                       2122 00107$:
                           00026C  2123 	C$main.c$261$2$46 ==.
                                   2124 ;	Z:\MICAP\ADC\main.c:261: if(count < 8)
      0002CE 74 F8            [12] 2125 	mov	a,#0x100 - 0x08
      0002D0 25 08            [12] 2126 	add	a,_putchar_count_1_44
      0002D2 40 04            [24] 2127 	jc	00102$
                           000272  2128 	C$main.c$262$2$46 ==.
                                   2129 ;	Z:\MICAP\ADC\main.c:262: cs = 0;
      0002D4 7E 00            [12] 2130 	mov	r6,#0x00
      0002D6 80 02            [24] 2131 	sjmp	00119$
      0002D8                       2132 00102$:
                           000276  2133 	C$main.c$264$2$46 ==.
                                   2134 ;	Z:\MICAP\ADC\main.c:264: cs = 1;
      0002D8 7E 01            [12] 2135 	mov	r6,#0x01
                           000278  2136 	C$main.c$266$1$44 ==.
                                   2137 ;	Z:\MICAP\ADC\main.c:266: for (i = 0; i < 5; i++)
      0002DA                       2138 00119$:
      0002DA 7D 00            [12] 2139 	mov	r5,#0x00
      0002DC                       2140 00110$:
                           00027A  2141 	C$main.c$267$2$46 ==.
                                   2142 ;	Z:\MICAP\ADC\main.c:267: esc_glcd(fonte[c-32][i], DA, cs);
      0002DC 8F 03            [24] 2143 	mov	ar3,r7
      0002DE 7C 00            [12] 2144 	mov	r4,#0x00
      0002E0 EB               [12] 2145 	mov	a,r3
      0002E1 24 E0            [12] 2146 	add	a,#0xe0
      0002E3 F5 10            [12] 2147 	mov	__mulint_PARM_2,a
      0002E5 EC               [12] 2148 	mov	a,r4
      0002E6 34 FF            [12] 2149 	addc	a,#0xff
      0002E8 F5 11            [12] 2150 	mov	(__mulint_PARM_2 + 1),a
      0002EA 90 00 05         [24] 2151 	mov	dptr,#0x0005
      0002ED C0 07            [24] 2152 	push	ar7
      0002EF C0 06            [24] 2153 	push	ar6
      0002F1 C0 05            [24] 2154 	push	ar5
      0002F3 12 0A 48         [24] 2155 	lcall	__mulint
      0002F6 AB 82            [24] 2156 	mov	r3,dpl
      0002F8 AC 83            [24] 2157 	mov	r4,dph
      0002FA D0 05            [24] 2158 	pop	ar5
      0002FC D0 06            [24] 2159 	pop	ar6
      0002FE EB               [12] 2160 	mov	a,r3
      0002FF 24 FA            [12] 2161 	add	a,#_fonte
      000301 FB               [12] 2162 	mov	r3,a
      000302 EC               [12] 2163 	mov	a,r4
      000303 34 0B            [12] 2164 	addc	a,#(_fonte >> 8)
      000305 FC               [12] 2165 	mov	r4,a
      000306 ED               [12] 2166 	mov	a,r5
      000307 2B               [12] 2167 	add	a,r3
      000308 F5 82            [12] 2168 	mov	dpl,a
      00030A E4               [12] 2169 	clr	a
      00030B 3C               [12] 2170 	addc	a,r4
      00030C F5 83            [12] 2171 	mov	dph,a
      00030E E4               [12] 2172 	clr	a
      00030F 93               [24] 2173 	movc	a,@a+dptr
      000310 FC               [12] 2174 	mov	r4,a
      000311 EE               [12] 2175 	mov	a,r6
      000312 24 FF            [12] 2176 	add	a,#0xff
      000314 92 07            [24] 2177 	mov	_putchar_sloc0_1_0,c
      000316 D2 02            [12] 2178 	setb	_esc_glcd_PARM_2
      000318 A2 07            [12] 2179 	mov	c,_putchar_sloc0_1_0
      00031A 92 03            [24] 2180 	mov	_esc_glcd_PARM_3,c
      00031C 8C 82            [24] 2181 	mov	dpl,r4
      00031E C0 06            [24] 2182 	push	ar6
      000320 C0 05            [24] 2183 	push	ar5
      000322 12 01 66         [24] 2184 	lcall	_esc_glcd
      000325 D0 05            [24] 2185 	pop	ar5
      000327 D0 06            [24] 2186 	pop	ar6
      000329 D0 07            [24] 2187 	pop	ar7
                           0002C9  2188 	C$main.c$266$2$46 ==.
                                   2189 ;	Z:\MICAP\ADC\main.c:266: for (i = 0; i < 5; i++)
      00032B 0D               [12] 2190 	inc	r5
      00032C BD 05 00         [24] 2191 	cjne	r5,#0x05,00142$
      00032F                       2192 00142$:
      00032F 40 AB            [24] 2193 	jc	00110$
                           0002CF  2194 	C$main.c$270$1$44 ==.
                                   2195 ;	Z:\MICAP\ADC\main.c:270: for (i = 0; i < 3; i++)
      000331 7F 00            [12] 2196 	mov	r7,#0x00
      000333                       2197 00112$:
                           0002D1  2198 	C$main.c$271$2$46 ==.
                                   2199 ;	Z:\MICAP\ADC\main.c:271: esc_glcd(0x00, DA, cs);
      000333 D2 02            [12] 2200 	setb	_esc_glcd_PARM_2
      000335 A2 07            [12] 2201 	mov	c,_putchar_sloc0_1_0
      000337 92 03            [24] 2202 	mov	_esc_glcd_PARM_3,c
      000339 75 82 00         [24] 2203 	mov	dpl,#0x00
      00033C C0 07            [24] 2204 	push	ar7
      00033E 12 01 66         [24] 2205 	lcall	_esc_glcd
      000341 D0 07            [24] 2206 	pop	ar7
                           0002E1  2207 	C$main.c$270$2$46 ==.
                                   2208 ;	Z:\MICAP\ADC\main.c:270: for (i = 0; i < 3; i++)
      000343 0F               [12] 2209 	inc	r7
      000344 BF 03 00         [24] 2210 	cjne	r7,#0x03,00144$
      000347                       2211 00144$:
      000347 40 EA            [24] 2212 	jc	00112$
                           0002E7  2213 	C$main.c$273$2$46 ==.
                                   2214 ;	Z:\MICAP\ADC\main.c:273: count++;
      000349 05 08            [12] 2215 	inc	_putchar_count_1_44
      00034B                       2216 00114$:
                           0002E9  2217 	C$main.c$275$1$44 ==.
                           0002E9  2218 	XG$putchar$0$0 ==.
      00034B 22               [24] 2219 	ret
                                   2220 ;------------------------------------------------------------
                                   2221 ;Allocation info for local variables in function 'esc_DAC0'
                                   2222 ;------------------------------------------------------------
                                   2223 ;v                         Allocated to registers r4 r5 r6 r7 
                                   2224 ;------------------------------------------------------------
                           0002EA  2225 	G$esc_DAC0$0$0 ==.
                           0002EA  2226 	C$main.c$277$1$44 ==.
                                   2227 ;	Z:\MICAP\ADC\main.c:277: void esc_DAC0(float v)
                                   2228 ;	-----------------------------------------
                                   2229 ;	 function esc_DAC0
                                   2230 ;	-----------------------------------------
      00034C                       2231 _esc_DAC0:
      00034C AC 82            [24] 2232 	mov	r4,dpl
      00034E AD 83            [24] 2233 	mov	r5,dph
      000350 AE F0            [24] 2234 	mov	r6,b
      000352 FF               [12] 2235 	mov	r7,a
                           0002F1  2236 	C$main.c$279$1$48 ==.
                                   2237 ;	Z:\MICAP\ADC\main.c:279: v = (v / 2.43) * 4096;
      000353 74 1F            [12] 2238 	mov	a,#0x1f
      000355 C0 E0            [24] 2239 	push	acc
      000357 74 85            [12] 2240 	mov	a,#0x85
      000359 C0 E0            [24] 2241 	push	acc
      00035B 74 1B            [12] 2242 	mov	a,#0x1b
      00035D C0 E0            [24] 2243 	push	acc
      00035F 74 40            [12] 2244 	mov	a,#0x40
      000361 C0 E0            [24] 2245 	push	acc
      000363 8C 82            [24] 2246 	mov	dpl,r4
      000365 8D 83            [24] 2247 	mov	dph,r5
      000367 8E F0            [24] 2248 	mov	b,r6
      000369 EF               [12] 2249 	mov	a,r7
      00036A 12 0A CB         [24] 2250 	lcall	___fsdiv
      00036D A8 82            [24] 2251 	mov	r0,dpl
      00036F A9 83            [24] 2252 	mov	r1,dph
      000371 AA F0            [24] 2253 	mov	r2,b
      000373 FB               [12] 2254 	mov	r3,a
      000374 E5 81            [12] 2255 	mov	a,sp
      000376 24 FC            [12] 2256 	add	a,#0xfc
      000378 F5 81            [12] 2257 	mov	sp,a
      00037A C0 00            [24] 2258 	push	ar0
      00037C C0 01            [24] 2259 	push	ar1
      00037E C0 02            [24] 2260 	push	ar2
      000380 C0 03            [24] 2261 	push	ar3
      000382 90 00 00         [24] 2262 	mov	dptr,#0x0000
      000385 75 F0 80         [24] 2263 	mov	b,#0x80
      000388 74 45            [12] 2264 	mov	a,#0x45
      00038A 12 09 01         [24] 2265 	lcall	___fsmul
      00038D AC 82            [24] 2266 	mov	r4,dpl
      00038F AD 83            [24] 2267 	mov	r5,dph
      000391 AE F0            [24] 2268 	mov	r6,b
      000393 FF               [12] 2269 	mov	r7,a
      000394 E5 81            [12] 2270 	mov	a,sp
      000396 24 FC            [12] 2271 	add	a,#0xfc
      000398 F5 81            [12] 2272 	mov	sp,a
                           000338  2273 	C$main.c$280$1$48 ==.
                                   2274 ;	Z:\MICAP\ADC\main.c:280: DAC0L = (unsigned int) v;
      00039A 8C 82            [24] 2275 	mov	dpl,r4
      00039C 8D 83            [24] 2276 	mov	dph,r5
      00039E 8E F0            [24] 2277 	mov	b,r6
      0003A0 EF               [12] 2278 	mov	a,r7
      0003A1 12 0A 65         [24] 2279 	lcall	___fs2uint
      0003A4 AE 82            [24] 2280 	mov	r6,dpl
      0003A6 AF 83            [24] 2281 	mov	r7,dph
      0003A8 8E D2            [24] 2282 	mov	_DAC0L,r6
                           000348  2283 	C$main.c$281$1$48 ==.
                                   2284 ;	Z:\MICAP\ADC\main.c:281: DAC0H = ((unsigned int)v >> 8);
      0003AA 8F D3            [24] 2285 	mov	_DAC0H,r7
                           00034A  2286 	C$main.c$282$1$48 ==.
                           00034A  2287 	XG$esc_DAC0$0$0 ==.
      0003AC 22               [24] 2288 	ret
                                   2289 ;------------------------------------------------------------
                                   2290 ;Allocation info for local variables in function 'le_adc0'
                                   2291 ;------------------------------------------------------------
                                   2292 ;ganho                     Allocated with name '_le_adc0_PARM_2'
                                   2293 ;canal                     Allocated to registers 
                                   2294 ;------------------------------------------------------------
                           00034B  2295 	G$le_adc0$0$0 ==.
                           00034B  2296 	C$main.c$301$1$48 ==.
                                   2297 ;	Z:\MICAP\ADC\main.c:301: unsigned int le_adc0(unsigned char canal, unsigned char ganho)
                                   2298 ;	-----------------------------------------
                                   2299 ;	 function le_adc0
                                   2300 ;	-----------------------------------------
      0003AD                       2301 _le_adc0:
      0003AD 85 82 BB         [24] 2302 	mov	_AMX0SL,dpl
                           00034E  2303 	C$main.c$307$1$50 ==.
                                   2304 ;	Z:\MICAP\ADC\main.c:307: ADC0CF &= 0xF8;
      0003B0 53 BC F8         [24] 2305 	anl	_ADC0CF,#0xf8
                           000351  2306 	C$main.c$308$1$50 ==.
                                   2307 ;	Z:\MICAP\ADC\main.c:308: ADC0CF |= ganho;
      0003B3 E5 10            [12] 2308 	mov	a,_le_adc0_PARM_2
      0003B5 42 BC            [12] 2309 	orl	_ADC0CF,a
                           000355  2310 	C$main.c$310$1$50 ==.
                                   2311 ;	Z:\MICAP\ADC\main.c:310: AD0BUSY = 1;
      0003B7 D2 EC            [12] 2312 	setb	_AD0BUSY
                           000357  2313 	C$main.c$311$1$50 ==.
                                   2314 ;	Z:\MICAP\ADC\main.c:311: NOP();
      0003B9 00               [12] 2315 	NOP	
                           000358  2316 	C$main.c$312$1$50 ==.
                                   2317 ;	Z:\MICAP\ADC\main.c:312: while(AD0BUSY);
      0003BA                       2318 00101$:
      0003BA 20 EC FD         [24] 2319 	jb	_AD0BUSY,00101$
                           00035B  2320 	C$main.c$314$1$50 ==.
                                   2321 ;	Z:\MICAP\ADC\main.c:314: return ((ADC0H << 8) | ADC0L);
      0003BD AF BF            [24] 2322 	mov	r7,_ADC0H
      0003BF 7E 00            [12] 2323 	mov	r6,#0x00
      0003C1 AC BE            [24] 2324 	mov	r4,_ADC0L
      0003C3 7D 00            [12] 2325 	mov	r5,#0x00
      0003C5 EC               [12] 2326 	mov	a,r4
      0003C6 4E               [12] 2327 	orl	a,r6
      0003C7 F5 82            [12] 2328 	mov	dpl,a
      0003C9 ED               [12] 2329 	mov	a,r5
      0003CA 4F               [12] 2330 	orl	a,r7
      0003CB F5 83            [12] 2331 	mov	dph,a
                           00036B  2332 	C$main.c$315$1$50 ==.
                           00036B  2333 	XG$le_adc0$0$0 ==.
      0003CD 22               [24] 2334 	ret
                                   2335 ;------------------------------------------------------------
                                   2336 ;Allocation info for local variables in function 'main'
                                   2337 ;------------------------------------------------------------
                                   2338 ;ladc                      Allocated to registers r6 r7 
                                   2339 ;------------------------------------------------------------
                           00036C  2340 	G$main$0$0 ==.
                           00036C  2341 	C$main.c$317$1$50 ==.
                                   2342 ;	Z:\MICAP\ADC\main.c:317: void main()
                                   2343 ;	-----------------------------------------
                                   2344 ;	 function main
                                   2345 ;	-----------------------------------------
      0003CE                       2346 _main:
                           00036C  2347 	C$main.c$321$1$51 ==.
                                   2348 ;	Z:\MICAP\ADC\main.c:321: Init_Device();
      0003CE 12 00 C2         [24] 2349 	lcall	_Init_Device
                           00036F  2350 	C$main.c$322$1$51 ==.
                                   2351 ;	Z:\MICAP\ADC\main.c:322: SFRPAGE = LEGACY_PAGE;
      0003D1 75 84 00         [24] 2352 	mov	_SFRPAGE,#0x00
                           000372  2353 	C$main.c$324$1$51 ==.
                                   2354 ;	Z:\MICAP\ADC\main.c:324: Ini_glcd();
      0003D4 12 01 BB         [24] 2355 	lcall	_Ini_glcd
                           000375  2356 	C$main.c$325$1$51 ==.
                                   2357 ;	Z:\MICAP\ADC\main.c:325: limpa_glcd(0);
      0003D7 C2 06            [12] 2358 	clr	_limpa_glcd_PARM_1
      0003D9 12 02 5D         [24] 2359 	lcall	_limpa_glcd
                           00037A  2360 	C$main.c$326$1$51 ==.
                                   2361 ;	Z:\MICAP\ADC\main.c:326: limpa_glcd(1);
      0003DC D2 06            [12] 2362 	setb	_limpa_glcd_PARM_1
      0003DE 12 02 5D         [24] 2363 	lcall	_limpa_glcd
                           00037F  2364 	C$main.c$329$1$51 ==.
                                   2365 ;	Z:\MICAP\ADC\main.c:329: while(1)
      0003E1                       2366 00102$:
                           00037F  2367 	C$main.c$331$2$52 ==.
                                   2368 ;	Z:\MICAP\ADC\main.c:331: ladc = le_adc0(AIN0_1, G1);
      0003E1 75 10 00         [24] 2369 	mov	_le_adc0_PARM_2,#0x00
      0003E4 75 82 01         [24] 2370 	mov	dpl,#0x01
      0003E7 12 03 AD         [24] 2371 	lcall	_le_adc0
      0003EA AE 82            [24] 2372 	mov	r6,dpl
      0003EC AF 83            [24] 2373 	mov	r7,dph
                           00038C  2374 	C$main.c$332$2$52 ==.
                                   2375 ;	Z:\MICAP\ADC\main.c:332: printf_fast_f("\x02 ADC0 = %04u", ladc);
      0003EE C0 07            [24] 2376 	push	ar7
      0003F0 C0 06            [24] 2377 	push	ar6
      0003F2 C0 06            [24] 2378 	push	ar6
      0003F4 C0 07            [24] 2379 	push	ar7
      0003F6 74 DA            [12] 2380 	mov	a,#___str_0
      0003F8 C0 E0            [24] 2381 	push	acc
      0003FA 74 0D            [12] 2382 	mov	a,#(___str_0 >> 8)
      0003FC C0 E0            [24] 2383 	push	acc
      0003FE 12 04 80         [24] 2384 	lcall	_printf_fast_f
      000401 E5 81            [12] 2385 	mov	a,sp
      000403 24 FC            [12] 2386 	add	a,#0xfc
      000405 F5 81            [12] 2387 	mov	sp,a
      000407 D0 06            [24] 2388 	pop	ar6
      000409 D0 07            [24] 2389 	pop	ar7
                           0003A9  2390 	C$main.c$333$1$51 ==.
                                   2391 ;	Z:\MICAP\ADC\main.c:333: printf_fast_f("\x04 Vin = %3.1fV", 2.43 * ladc / 4096);
      00040B 8E 82            [24] 2392 	mov	dpl,r6
      00040D 8F 83            [24] 2393 	mov	dph,r7
      00040F 12 0A 70         [24] 2394 	lcall	___uint2fs
      000412 AC 82            [24] 2395 	mov	r4,dpl
      000414 AD 83            [24] 2396 	mov	r5,dph
      000416 AE F0            [24] 2397 	mov	r6,b
      000418 FF               [12] 2398 	mov	r7,a
      000419 C0 04            [24] 2399 	push	ar4
      00041B C0 05            [24] 2400 	push	ar5
      00041D C0 06            [24] 2401 	push	ar6
      00041F C0 07            [24] 2402 	push	ar7
      000421 90 85 1F         [24] 2403 	mov	dptr,#0x851f
      000424 75 F0 1B         [24] 2404 	mov	b,#0x1b
      000427 74 40            [12] 2405 	mov	a,#0x40
      000429 12 09 01         [24] 2406 	lcall	___fsmul
      00042C AC 82            [24] 2407 	mov	r4,dpl
      00042E AD 83            [24] 2408 	mov	r5,dph
      000430 AE F0            [24] 2409 	mov	r6,b
      000432 FF               [12] 2410 	mov	r7,a
      000433 E5 81            [12] 2411 	mov	a,sp
      000435 24 FC            [12] 2412 	add	a,#0xfc
      000437 F5 81            [12] 2413 	mov	sp,a
      000439 E4               [12] 2414 	clr	a
      00043A C0 E0            [24] 2415 	push	acc
      00043C C0 E0            [24] 2416 	push	acc
      00043E 74 80            [12] 2417 	mov	a,#0x80
      000440 C0 E0            [24] 2418 	push	acc
      000442 74 45            [12] 2419 	mov	a,#0x45
      000444 C0 E0            [24] 2420 	push	acc
      000446 8C 82            [24] 2421 	mov	dpl,r4
      000448 8D 83            [24] 2422 	mov	dph,r5
      00044A 8E F0            [24] 2423 	mov	b,r6
      00044C EF               [12] 2424 	mov	a,r7
      00044D 12 0A CB         [24] 2425 	lcall	___fsdiv
      000450 AC 82            [24] 2426 	mov	r4,dpl
      000452 AD 83            [24] 2427 	mov	r5,dph
      000454 AE F0            [24] 2428 	mov	r6,b
      000456 FF               [12] 2429 	mov	r7,a
      000457 E5 81            [12] 2430 	mov	a,sp
      000459 24 FC            [12] 2431 	add	a,#0xfc
      00045B F5 81            [12] 2432 	mov	sp,a
      00045D C0 04            [24] 2433 	push	ar4
      00045F C0 05            [24] 2434 	push	ar5
      000461 C0 06            [24] 2435 	push	ar6
      000463 C0 07            [24] 2436 	push	ar7
      000465 74 E8            [12] 2437 	mov	a,#___str_1
      000467 C0 E0            [24] 2438 	push	acc
      000469 74 0D            [12] 2439 	mov	a,#(___str_1 >> 8)
      00046B C0 E0            [24] 2440 	push	acc
      00046D 12 04 80         [24] 2441 	lcall	_printf_fast_f
      000470 E5 81            [12] 2442 	mov	a,sp
      000472 24 FA            [12] 2443 	add	a,#0xfa
      000474 F5 81            [12] 2444 	mov	sp,a
                           000414  2445 	C$main.c$334$2$52 ==.
                                   2446 ;	Z:\MICAP\ADC\main.c:334: delay_ms(500);
      000476 90 01 F4         [24] 2447 	mov	dptr,#0x01f4
      000479 12 00 DB         [24] 2448 	lcall	_delay_ms
      00047C 02 03 E1         [24] 2449 	ljmp	00102$
                           00041D  2450 	C$main.c$336$1$51 ==.
                           00041D  2451 	XG$main$0$0 ==.
      00047F 22               [24] 2452 	ret
                                   2453 	.area CSEG    (CODE)
                                   2454 	.area CONST   (CODE)
                           000000  2455 G$fonte$0$0 == .
      000BFA                       2456 _fonte:
      000BFA 00                    2457 	.db #0x00	; 0
      000BFB 00                    2458 	.db #0x00	; 0
      000BFC 00                    2459 	.db #0x00	; 0
      000BFD 00                    2460 	.db #0x00	; 0
      000BFE 00                    2461 	.db #0x00	; 0
      000BFF 00                    2462 	.db #0x00	; 0
      000C00 00                    2463 	.db #0x00	; 0
      000C01 5F                    2464 	.db #0x5f	; 95
      000C02 00                    2465 	.db #0x00	; 0
      000C03 00                    2466 	.db #0x00	; 0
      000C04 00                    2467 	.db #0x00	; 0
      000C05 07                    2468 	.db #0x07	; 7
      000C06 00                    2469 	.db #0x00	; 0
      000C07 07                    2470 	.db #0x07	; 7
      000C08 00                    2471 	.db #0x00	; 0
      000C09 14                    2472 	.db #0x14	; 20
      000C0A 7F                    2473 	.db #0x7f	; 127
      000C0B 14                    2474 	.db #0x14	; 20
      000C0C 7F                    2475 	.db #0x7f	; 127
      000C0D 14                    2476 	.db #0x14	; 20
      000C0E 24                    2477 	.db #0x24	; 36
      000C0F 2A                    2478 	.db #0x2a	; 42
      000C10 7F                    2479 	.db #0x7f	; 127
      000C11 2A                    2480 	.db #0x2a	; 42
      000C12 12                    2481 	.db #0x12	; 18
      000C13 23                    2482 	.db #0x23	; 35
      000C14 13                    2483 	.db #0x13	; 19
      000C15 08                    2484 	.db #0x08	; 8
      000C16 64                    2485 	.db #0x64	; 100	'd'
      000C17 62                    2486 	.db #0x62	; 98	'b'
      000C18 36                    2487 	.db #0x36	; 54	'6'
      000C19 49                    2488 	.db #0x49	; 73	'I'
      000C1A 55                    2489 	.db #0x55	; 85	'U'
      000C1B 22                    2490 	.db #0x22	; 34
      000C1C 50                    2491 	.db #0x50	; 80	'P'
      000C1D 00                    2492 	.db #0x00	; 0
      000C1E 05                    2493 	.db #0x05	; 5
      000C1F 03                    2494 	.db #0x03	; 3
      000C20 00                    2495 	.db #0x00	; 0
      000C21 00                    2496 	.db #0x00	; 0
      000C22 00                    2497 	.db #0x00	; 0
      000C23 1C                    2498 	.db #0x1c	; 28
      000C24 22                    2499 	.db #0x22	; 34
      000C25 41                    2500 	.db #0x41	; 65	'A'
      000C26 00                    2501 	.db #0x00	; 0
      000C27 00                    2502 	.db #0x00	; 0
      000C28 41                    2503 	.db #0x41	; 65	'A'
      000C29 22                    2504 	.db #0x22	; 34
      000C2A 1C                    2505 	.db #0x1c	; 28
      000C2B 00                    2506 	.db #0x00	; 0
      000C2C 08                    2507 	.db #0x08	; 8
      000C2D 2A                    2508 	.db #0x2a	; 42
      000C2E 1C                    2509 	.db #0x1c	; 28
      000C2F 2A                    2510 	.db #0x2a	; 42
      000C30 08                    2511 	.db #0x08	; 8
      000C31 08                    2512 	.db #0x08	; 8
      000C32 08                    2513 	.db #0x08	; 8
      000C33 3E                    2514 	.db #0x3e	; 62
      000C34 08                    2515 	.db #0x08	; 8
      000C35 08                    2516 	.db #0x08	; 8
      000C36 00                    2517 	.db #0x00	; 0
      000C37 50                    2518 	.db #0x50	; 80	'P'
      000C38 30                    2519 	.db #0x30	; 48	'0'
      000C39 00                    2520 	.db #0x00	; 0
      000C3A 00                    2521 	.db #0x00	; 0
      000C3B 08                    2522 	.db #0x08	; 8
      000C3C 08                    2523 	.db #0x08	; 8
      000C3D 08                    2524 	.db #0x08	; 8
      000C3E 08                    2525 	.db #0x08	; 8
      000C3F 08                    2526 	.db #0x08	; 8
      000C40 00                    2527 	.db #0x00	; 0
      000C41 30                    2528 	.db #0x30	; 48	'0'
      000C42 30                    2529 	.db #0x30	; 48	'0'
      000C43 00                    2530 	.db #0x00	; 0
      000C44 00                    2531 	.db #0x00	; 0
      000C45 20                    2532 	.db #0x20	; 32
      000C46 10                    2533 	.db #0x10	; 16
      000C47 08                    2534 	.db #0x08	; 8
      000C48 04                    2535 	.db #0x04	; 4
      000C49 02                    2536 	.db #0x02	; 2
      000C4A 3E                    2537 	.db #0x3e	; 62
      000C4B 51                    2538 	.db #0x51	; 81	'Q'
      000C4C 49                    2539 	.db #0x49	; 73	'I'
      000C4D 45                    2540 	.db #0x45	; 69	'E'
      000C4E 3E                    2541 	.db #0x3e	; 62
      000C4F 00                    2542 	.db #0x00	; 0
      000C50 42                    2543 	.db #0x42	; 66	'B'
      000C51 7F                    2544 	.db #0x7f	; 127
      000C52 40                    2545 	.db #0x40	; 64
      000C53 00                    2546 	.db #0x00	; 0
      000C54 42                    2547 	.db #0x42	; 66	'B'
      000C55 61                    2548 	.db #0x61	; 97	'a'
      000C56 51                    2549 	.db #0x51	; 81	'Q'
      000C57 49                    2550 	.db #0x49	; 73	'I'
      000C58 46                    2551 	.db #0x46	; 70	'F'
      000C59 21                    2552 	.db #0x21	; 33
      000C5A 41                    2553 	.db #0x41	; 65	'A'
      000C5B 45                    2554 	.db #0x45	; 69	'E'
      000C5C 4B                    2555 	.db #0x4b	; 75	'K'
      000C5D 31                    2556 	.db #0x31	; 49	'1'
      000C5E 18                    2557 	.db #0x18	; 24
      000C5F 14                    2558 	.db #0x14	; 20
      000C60 12                    2559 	.db #0x12	; 18
      000C61 7F                    2560 	.db #0x7f	; 127
      000C62 10                    2561 	.db #0x10	; 16
      000C63 27                    2562 	.db #0x27	; 39
      000C64 45                    2563 	.db #0x45	; 69	'E'
      000C65 45                    2564 	.db #0x45	; 69	'E'
      000C66 45                    2565 	.db #0x45	; 69	'E'
      000C67 39                    2566 	.db #0x39	; 57	'9'
      000C68 3C                    2567 	.db #0x3c	; 60
      000C69 4A                    2568 	.db #0x4a	; 74	'J'
      000C6A 49                    2569 	.db #0x49	; 73	'I'
      000C6B 49                    2570 	.db #0x49	; 73	'I'
      000C6C 30                    2571 	.db #0x30	; 48	'0'
      000C6D 01                    2572 	.db #0x01	; 1
      000C6E 71                    2573 	.db #0x71	; 113	'q'
      000C6F 09                    2574 	.db #0x09	; 9
      000C70 05                    2575 	.db #0x05	; 5
      000C71 03                    2576 	.db #0x03	; 3
      000C72 36                    2577 	.db #0x36	; 54	'6'
      000C73 49                    2578 	.db #0x49	; 73	'I'
      000C74 49                    2579 	.db #0x49	; 73	'I'
      000C75 49                    2580 	.db #0x49	; 73	'I'
      000C76 36                    2581 	.db #0x36	; 54	'6'
      000C77 06                    2582 	.db #0x06	; 6
      000C78 49                    2583 	.db #0x49	; 73	'I'
      000C79 49                    2584 	.db #0x49	; 73	'I'
      000C7A 29                    2585 	.db #0x29	; 41
      000C7B 1E                    2586 	.db #0x1e	; 30
      000C7C 00                    2587 	.db #0x00	; 0
      000C7D 36                    2588 	.db #0x36	; 54	'6'
      000C7E 36                    2589 	.db #0x36	; 54	'6'
      000C7F 00                    2590 	.db #0x00	; 0
      000C80 00                    2591 	.db #0x00	; 0
      000C81 00                    2592 	.db #0x00	; 0
      000C82 56                    2593 	.db #0x56	; 86	'V'
      000C83 36                    2594 	.db #0x36	; 54	'6'
      000C84 00                    2595 	.db #0x00	; 0
      000C85 00                    2596 	.db #0x00	; 0
      000C86 00                    2597 	.db #0x00	; 0
      000C87 08                    2598 	.db #0x08	; 8
      000C88 14                    2599 	.db #0x14	; 20
      000C89 22                    2600 	.db #0x22	; 34
      000C8A 41                    2601 	.db #0x41	; 65	'A'
      000C8B 14                    2602 	.db #0x14	; 20
      000C8C 14                    2603 	.db #0x14	; 20
      000C8D 14                    2604 	.db #0x14	; 20
      000C8E 14                    2605 	.db #0x14	; 20
      000C8F 14                    2606 	.db #0x14	; 20
      000C90 41                    2607 	.db #0x41	; 65	'A'
      000C91 22                    2608 	.db #0x22	; 34
      000C92 14                    2609 	.db #0x14	; 20
      000C93 08                    2610 	.db #0x08	; 8
      000C94 00                    2611 	.db #0x00	; 0
      000C95 02                    2612 	.db #0x02	; 2
      000C96 01                    2613 	.db #0x01	; 1
      000C97 51                    2614 	.db #0x51	; 81	'Q'
      000C98 09                    2615 	.db #0x09	; 9
      000C99 06                    2616 	.db #0x06	; 6
      000C9A 32                    2617 	.db #0x32	; 50	'2'
      000C9B 49                    2618 	.db #0x49	; 73	'I'
      000C9C 79                    2619 	.db #0x79	; 121	'y'
      000C9D 41                    2620 	.db #0x41	; 65	'A'
      000C9E 3E                    2621 	.db #0x3e	; 62
      000C9F 7E                    2622 	.db #0x7e	; 126
      000CA0 11                    2623 	.db #0x11	; 17
      000CA1 11                    2624 	.db #0x11	; 17
      000CA2 11                    2625 	.db #0x11	; 17
      000CA3 7E                    2626 	.db #0x7e	; 126
      000CA4 7F                    2627 	.db #0x7f	; 127
      000CA5 49                    2628 	.db #0x49	; 73	'I'
      000CA6 49                    2629 	.db #0x49	; 73	'I'
      000CA7 49                    2630 	.db #0x49	; 73	'I'
      000CA8 36                    2631 	.db #0x36	; 54	'6'
      000CA9 3E                    2632 	.db #0x3e	; 62
      000CAA 41                    2633 	.db #0x41	; 65	'A'
      000CAB 41                    2634 	.db #0x41	; 65	'A'
      000CAC 41                    2635 	.db #0x41	; 65	'A'
      000CAD 22                    2636 	.db #0x22	; 34
      000CAE 7F                    2637 	.db #0x7f	; 127
      000CAF 41                    2638 	.db #0x41	; 65	'A'
      000CB0 41                    2639 	.db #0x41	; 65	'A'
      000CB1 22                    2640 	.db #0x22	; 34
      000CB2 1C                    2641 	.db #0x1c	; 28
      000CB3 7F                    2642 	.db #0x7f	; 127
      000CB4 49                    2643 	.db #0x49	; 73	'I'
      000CB5 49                    2644 	.db #0x49	; 73	'I'
      000CB6 49                    2645 	.db #0x49	; 73	'I'
      000CB7 41                    2646 	.db #0x41	; 65	'A'
      000CB8 7F                    2647 	.db #0x7f	; 127
      000CB9 09                    2648 	.db #0x09	; 9
      000CBA 09                    2649 	.db #0x09	; 9
      000CBB 01                    2650 	.db #0x01	; 1
      000CBC 01                    2651 	.db #0x01	; 1
      000CBD 3E                    2652 	.db #0x3e	; 62
      000CBE 41                    2653 	.db #0x41	; 65	'A'
      000CBF 41                    2654 	.db #0x41	; 65	'A'
      000CC0 51                    2655 	.db #0x51	; 81	'Q'
      000CC1 32                    2656 	.db #0x32	; 50	'2'
      000CC2 7F                    2657 	.db #0x7f	; 127
      000CC3 08                    2658 	.db #0x08	; 8
      000CC4 08                    2659 	.db #0x08	; 8
      000CC5 08                    2660 	.db #0x08	; 8
      000CC6 7F                    2661 	.db #0x7f	; 127
      000CC7 00                    2662 	.db #0x00	; 0
      000CC8 41                    2663 	.db #0x41	; 65	'A'
      000CC9 7F                    2664 	.db #0x7f	; 127
      000CCA 41                    2665 	.db #0x41	; 65	'A'
      000CCB 00                    2666 	.db #0x00	; 0
      000CCC 20                    2667 	.db #0x20	; 32
      000CCD 40                    2668 	.db #0x40	; 64
      000CCE 41                    2669 	.db #0x41	; 65	'A'
      000CCF 3F                    2670 	.db #0x3f	; 63
      000CD0 01                    2671 	.db #0x01	; 1
      000CD1 7F                    2672 	.db #0x7f	; 127
      000CD2 08                    2673 	.db #0x08	; 8
      000CD3 14                    2674 	.db #0x14	; 20
      000CD4 22                    2675 	.db #0x22	; 34
      000CD5 41                    2676 	.db #0x41	; 65	'A'
      000CD6 7F                    2677 	.db #0x7f	; 127
      000CD7 40                    2678 	.db #0x40	; 64
      000CD8 40                    2679 	.db #0x40	; 64
      000CD9 40                    2680 	.db #0x40	; 64
      000CDA 40                    2681 	.db #0x40	; 64
      000CDB 7F                    2682 	.db #0x7f	; 127
      000CDC 02                    2683 	.db #0x02	; 2
      000CDD 04                    2684 	.db #0x04	; 4
      000CDE 02                    2685 	.db #0x02	; 2
      000CDF 7F                    2686 	.db #0x7f	; 127
      000CE0 7F                    2687 	.db #0x7f	; 127
      000CE1 04                    2688 	.db #0x04	; 4
      000CE2 08                    2689 	.db #0x08	; 8
      000CE3 10                    2690 	.db #0x10	; 16
      000CE4 7F                    2691 	.db #0x7f	; 127
      000CE5 3E                    2692 	.db #0x3e	; 62
      000CE6 41                    2693 	.db #0x41	; 65	'A'
      000CE7 41                    2694 	.db #0x41	; 65	'A'
      000CE8 41                    2695 	.db #0x41	; 65	'A'
      000CE9 3E                    2696 	.db #0x3e	; 62
      000CEA 7F                    2697 	.db #0x7f	; 127
      000CEB 09                    2698 	.db #0x09	; 9
      000CEC 09                    2699 	.db #0x09	; 9
      000CED 09                    2700 	.db #0x09	; 9
      000CEE 06                    2701 	.db #0x06	; 6
      000CEF 3E                    2702 	.db #0x3e	; 62
      000CF0 41                    2703 	.db #0x41	; 65	'A'
      000CF1 51                    2704 	.db #0x51	; 81	'Q'
      000CF2 21                    2705 	.db #0x21	; 33
      000CF3 5E                    2706 	.db #0x5e	; 94
      000CF4 7F                    2707 	.db #0x7f	; 127
      000CF5 09                    2708 	.db #0x09	; 9
      000CF6 19                    2709 	.db #0x19	; 25
      000CF7 29                    2710 	.db #0x29	; 41
      000CF8 46                    2711 	.db #0x46	; 70	'F'
      000CF9 46                    2712 	.db #0x46	; 70	'F'
      000CFA 49                    2713 	.db #0x49	; 73	'I'
      000CFB 49                    2714 	.db #0x49	; 73	'I'
      000CFC 49                    2715 	.db #0x49	; 73	'I'
      000CFD 31                    2716 	.db #0x31	; 49	'1'
      000CFE 01                    2717 	.db #0x01	; 1
      000CFF 01                    2718 	.db #0x01	; 1
      000D00 7F                    2719 	.db #0x7f	; 127
      000D01 01                    2720 	.db #0x01	; 1
      000D02 01                    2721 	.db #0x01	; 1
      000D03 3F                    2722 	.db #0x3f	; 63
      000D04 40                    2723 	.db #0x40	; 64
      000D05 40                    2724 	.db #0x40	; 64
      000D06 40                    2725 	.db #0x40	; 64
      000D07 3F                    2726 	.db #0x3f	; 63
      000D08 1F                    2727 	.db #0x1f	; 31
      000D09 20                    2728 	.db #0x20	; 32
      000D0A 40                    2729 	.db #0x40	; 64
      000D0B 20                    2730 	.db #0x20	; 32
      000D0C 1F                    2731 	.db #0x1f	; 31
      000D0D 7F                    2732 	.db #0x7f	; 127
      000D0E 20                    2733 	.db #0x20	; 32
      000D0F 18                    2734 	.db #0x18	; 24
      000D10 20                    2735 	.db #0x20	; 32
      000D11 7F                    2736 	.db #0x7f	; 127
      000D12 63                    2737 	.db #0x63	; 99	'c'
      000D13 14                    2738 	.db #0x14	; 20
      000D14 08                    2739 	.db #0x08	; 8
      000D15 14                    2740 	.db #0x14	; 20
      000D16 63                    2741 	.db #0x63	; 99	'c'
      000D17 03                    2742 	.db #0x03	; 3
      000D18 04                    2743 	.db #0x04	; 4
      000D19 78                    2744 	.db #0x78	; 120	'x'
      000D1A 04                    2745 	.db #0x04	; 4
      000D1B 03                    2746 	.db #0x03	; 3
      000D1C 61                    2747 	.db #0x61	; 97	'a'
      000D1D 51                    2748 	.db #0x51	; 81	'Q'
      000D1E 49                    2749 	.db #0x49	; 73	'I'
      000D1F 45                    2750 	.db #0x45	; 69	'E'
      000D20 43                    2751 	.db #0x43	; 67	'C'
      000D21 00                    2752 	.db #0x00	; 0
      000D22 00                    2753 	.db #0x00	; 0
      000D23 7F                    2754 	.db #0x7f	; 127
      000D24 41                    2755 	.db #0x41	; 65	'A'
      000D25 41                    2756 	.db #0x41	; 65	'A'
      000D26 02                    2757 	.db #0x02	; 2
      000D27 04                    2758 	.db #0x04	; 4
      000D28 08                    2759 	.db #0x08	; 8
      000D29 10                    2760 	.db #0x10	; 16
      000D2A 20                    2761 	.db #0x20	; 32
      000D2B 41                    2762 	.db #0x41	; 65	'A'
      000D2C 41                    2763 	.db #0x41	; 65	'A'
      000D2D 7F                    2764 	.db #0x7f	; 127
      000D2E 00                    2765 	.db #0x00	; 0
      000D2F 00                    2766 	.db #0x00	; 0
      000D30 04                    2767 	.db #0x04	; 4
      000D31 02                    2768 	.db #0x02	; 2
      000D32 01                    2769 	.db #0x01	; 1
      000D33 02                    2770 	.db #0x02	; 2
      000D34 04                    2771 	.db #0x04	; 4
      000D35 40                    2772 	.db #0x40	; 64
      000D36 40                    2773 	.db #0x40	; 64
      000D37 40                    2774 	.db #0x40	; 64
      000D38 40                    2775 	.db #0x40	; 64
      000D39 40                    2776 	.db #0x40	; 64
      000D3A 00                    2777 	.db #0x00	; 0
      000D3B 01                    2778 	.db #0x01	; 1
      000D3C 02                    2779 	.db #0x02	; 2
      000D3D 04                    2780 	.db #0x04	; 4
      000D3E 00                    2781 	.db #0x00	; 0
      000D3F 20                    2782 	.db #0x20	; 32
      000D40 54                    2783 	.db #0x54	; 84	'T'
      000D41 54                    2784 	.db #0x54	; 84	'T'
      000D42 54                    2785 	.db #0x54	; 84	'T'
      000D43 78                    2786 	.db #0x78	; 120	'x'
      000D44 7F                    2787 	.db #0x7f	; 127
      000D45 48                    2788 	.db #0x48	; 72	'H'
      000D46 44                    2789 	.db #0x44	; 68	'D'
      000D47 44                    2790 	.db #0x44	; 68	'D'
      000D48 38                    2791 	.db #0x38	; 56	'8'
      000D49 38                    2792 	.db #0x38	; 56	'8'
      000D4A 44                    2793 	.db #0x44	; 68	'D'
      000D4B 44                    2794 	.db #0x44	; 68	'D'
      000D4C 44                    2795 	.db #0x44	; 68	'D'
      000D4D 20                    2796 	.db #0x20	; 32
      000D4E 38                    2797 	.db #0x38	; 56	'8'
      000D4F 44                    2798 	.db #0x44	; 68	'D'
      000D50 44                    2799 	.db #0x44	; 68	'D'
      000D51 48                    2800 	.db #0x48	; 72	'H'
      000D52 7F                    2801 	.db #0x7f	; 127
      000D53 38                    2802 	.db #0x38	; 56	'8'
      000D54 54                    2803 	.db #0x54	; 84	'T'
      000D55 54                    2804 	.db #0x54	; 84	'T'
      000D56 54                    2805 	.db #0x54	; 84	'T'
      000D57 18                    2806 	.db #0x18	; 24
      000D58 08                    2807 	.db #0x08	; 8
      000D59 7E                    2808 	.db #0x7e	; 126
      000D5A 09                    2809 	.db #0x09	; 9
      000D5B 01                    2810 	.db #0x01	; 1
      000D5C 02                    2811 	.db #0x02	; 2
      000D5D 08                    2812 	.db #0x08	; 8
      000D5E 14                    2813 	.db #0x14	; 20
      000D5F 54                    2814 	.db #0x54	; 84	'T'
      000D60 54                    2815 	.db #0x54	; 84	'T'
      000D61 3C                    2816 	.db #0x3c	; 60
      000D62 7F                    2817 	.db #0x7f	; 127
      000D63 08                    2818 	.db #0x08	; 8
      000D64 04                    2819 	.db #0x04	; 4
      000D65 04                    2820 	.db #0x04	; 4
      000D66 78                    2821 	.db #0x78	; 120	'x'
      000D67 00                    2822 	.db #0x00	; 0
      000D68 44                    2823 	.db #0x44	; 68	'D'
      000D69 7D                    2824 	.db #0x7d	; 125
      000D6A 40                    2825 	.db #0x40	; 64
      000D6B 00                    2826 	.db #0x00	; 0
      000D6C 20                    2827 	.db #0x20	; 32
      000D6D 40                    2828 	.db #0x40	; 64
      000D6E 44                    2829 	.db #0x44	; 68	'D'
      000D6F 3D                    2830 	.db #0x3d	; 61
      000D70 00                    2831 	.db #0x00	; 0
      000D71 00                    2832 	.db #0x00	; 0
      000D72 7F                    2833 	.db #0x7f	; 127
      000D73 10                    2834 	.db #0x10	; 16
      000D74 28                    2835 	.db #0x28	; 40
      000D75 44                    2836 	.db #0x44	; 68	'D'
      000D76 00                    2837 	.db #0x00	; 0
      000D77 41                    2838 	.db #0x41	; 65	'A'
      000D78 7F                    2839 	.db #0x7f	; 127
      000D79 40                    2840 	.db #0x40	; 64
      000D7A 00                    2841 	.db #0x00	; 0
      000D7B 7C                    2842 	.db #0x7c	; 124
      000D7C 04                    2843 	.db #0x04	; 4
      000D7D 18                    2844 	.db #0x18	; 24
      000D7E 04                    2845 	.db #0x04	; 4
      000D7F 78                    2846 	.db #0x78	; 120	'x'
      000D80 7C                    2847 	.db #0x7c	; 124
      000D81 08                    2848 	.db #0x08	; 8
      000D82 04                    2849 	.db #0x04	; 4
      000D83 04                    2850 	.db #0x04	; 4
      000D84 78                    2851 	.db #0x78	; 120	'x'
      000D85 38                    2852 	.db #0x38	; 56	'8'
      000D86 44                    2853 	.db #0x44	; 68	'D'
      000D87 44                    2854 	.db #0x44	; 68	'D'
      000D88 44                    2855 	.db #0x44	; 68	'D'
      000D89 38                    2856 	.db #0x38	; 56	'8'
      000D8A 7C                    2857 	.db #0x7c	; 124
      000D8B 14                    2858 	.db #0x14	; 20
      000D8C 14                    2859 	.db #0x14	; 20
      000D8D 14                    2860 	.db #0x14	; 20
      000D8E 08                    2861 	.db #0x08	; 8
      000D8F 08                    2862 	.db #0x08	; 8
      000D90 14                    2863 	.db #0x14	; 20
      000D91 14                    2864 	.db #0x14	; 20
      000D92 18                    2865 	.db #0x18	; 24
      000D93 7C                    2866 	.db #0x7c	; 124
      000D94 7C                    2867 	.db #0x7c	; 124
      000D95 08                    2868 	.db #0x08	; 8
      000D96 04                    2869 	.db #0x04	; 4
      000D97 04                    2870 	.db #0x04	; 4
      000D98 08                    2871 	.db #0x08	; 8
      000D99 48                    2872 	.db #0x48	; 72	'H'
      000D9A 54                    2873 	.db #0x54	; 84	'T'
      000D9B 54                    2874 	.db #0x54	; 84	'T'
      000D9C 54                    2875 	.db #0x54	; 84	'T'
      000D9D 20                    2876 	.db #0x20	; 32
      000D9E 04                    2877 	.db #0x04	; 4
      000D9F 3F                    2878 	.db #0x3f	; 63
      000DA0 44                    2879 	.db #0x44	; 68	'D'
      000DA1 40                    2880 	.db #0x40	; 64
      000DA2 20                    2881 	.db #0x20	; 32
      000DA3 3C                    2882 	.db #0x3c	; 60
      000DA4 40                    2883 	.db #0x40	; 64
      000DA5 40                    2884 	.db #0x40	; 64
      000DA6 20                    2885 	.db #0x20	; 32
      000DA7 7C                    2886 	.db #0x7c	; 124
      000DA8 1C                    2887 	.db #0x1c	; 28
      000DA9 20                    2888 	.db #0x20	; 32
      000DAA 40                    2889 	.db #0x40	; 64
      000DAB 20                    2890 	.db #0x20	; 32
      000DAC 1C                    2891 	.db #0x1c	; 28
      000DAD 3C                    2892 	.db #0x3c	; 60
      000DAE 40                    2893 	.db #0x40	; 64
      000DAF 30                    2894 	.db #0x30	; 48	'0'
      000DB0 40                    2895 	.db #0x40	; 64
      000DB1 3C                    2896 	.db #0x3c	; 60
      000DB2 44                    2897 	.db #0x44	; 68	'D'
      000DB3 28                    2898 	.db #0x28	; 40
      000DB4 10                    2899 	.db #0x10	; 16
      000DB5 28                    2900 	.db #0x28	; 40
      000DB6 44                    2901 	.db #0x44	; 68	'D'
      000DB7 0C                    2902 	.db #0x0c	; 12
      000DB8 50                    2903 	.db #0x50	; 80	'P'
      000DB9 50                    2904 	.db #0x50	; 80	'P'
      000DBA 50                    2905 	.db #0x50	; 80	'P'
      000DBB 3C                    2906 	.db #0x3c	; 60
      000DBC 44                    2907 	.db #0x44	; 68	'D'
      000DBD 64                    2908 	.db #0x64	; 100	'd'
      000DBE 54                    2909 	.db #0x54	; 84	'T'
      000DBF 4C                    2910 	.db #0x4c	; 76	'L'
      000DC0 44                    2911 	.db #0x44	; 68	'D'
      000DC1 00                    2912 	.db #0x00	; 0
      000DC2 08                    2913 	.db #0x08	; 8
      000DC3 36                    2914 	.db #0x36	; 54	'6'
      000DC4 41                    2915 	.db #0x41	; 65	'A'
      000DC5 00                    2916 	.db #0x00	; 0
      000DC6 00                    2917 	.db #0x00	; 0
      000DC7 00                    2918 	.db #0x00	; 0
      000DC8 7F                    2919 	.db #0x7f	; 127
      000DC9 00                    2920 	.db #0x00	; 0
      000DCA 00                    2921 	.db #0x00	; 0
      000DCB 00                    2922 	.db #0x00	; 0
      000DCC 41                    2923 	.db #0x41	; 65	'A'
      000DCD 36                    2924 	.db #0x36	; 54	'6'
      000DCE 08                    2925 	.db #0x08	; 8
      000DCF 00                    2926 	.db #0x00	; 0
      000DD0 08                    2927 	.db #0x08	; 8
      000DD1 08                    2928 	.db #0x08	; 8
      000DD2 2A                    2929 	.db #0x2a	; 42
      000DD3 1C                    2930 	.db #0x1c	; 28
      000DD4 08                    2931 	.db #0x08	; 8
      000DD5 08                    2932 	.db #0x08	; 8
      000DD6 1C                    2933 	.db #0x1c	; 28
      000DD7 2A                    2934 	.db #0x2a	; 42
      000DD8 08                    2935 	.db #0x08	; 8
      000DD9 08                    2936 	.db #0x08	; 8
                           0001E0  2937 Fmain$__str_0$0$0 == .
      000DDA                       2938 ___str_0:
      000DDA 02                    2939 	.db 0x02
      000DDB 20 41 44 43 30 20 3D  2940 	.ascii " ADC0 = %04u"
             20 25 30 34 75
      000DE7 00                    2941 	.db 0x00
                           0001EE  2942 Fmain$__str_1$0$0 == .
      000DE8                       2943 ___str_1:
      000DE8 04                    2944 	.db 0x04
      000DE9 20 56 69 6E 20 3D 20  2945 	.ascii " Vin = %3.1fV"
             25 33 2E 31 66 56
      000DF6 00                    2946 	.db 0x00
                                   2947 	.area XINIT   (CODE)
                                   2948 	.area CABS    (ABS,CODE)
