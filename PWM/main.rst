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
                                     13 	.globl _int_serial
                                     14 	.globl _limpa_glcd
                                     15 	.globl _conf_pag
                                     16 	.globl _conf_Y
                                     17 	.globl _Ini_glcd
                                     18 	.globl _esc_glcd
                                     19 	.globl _le_glcd
                                     20 	.globl _delay_us
                                     21 	.globl _delay_ms
                                     22 	.globl _printf_fast_f
                                     23 	.globl _Init_Device
                                     24 	.globl _Interrupts_Init
                                     25 	.globl _Oscillator_Init
                                     26 	.globl _Port_IO_Init
                                     27 	.globl _SPI_Init
                                     28 	.globl _SMBus_Init
                                     29 	.globl _UART_Init
                                     30 	.globl _PCA_Init
                                     31 	.globl _Timer_Init
                                     32 	.globl _Reset_Sources_Init
                                     33 	.globl _P7_7
                                     34 	.globl _P7_6
                                     35 	.globl _P7_5
                                     36 	.globl _P7_4
                                     37 	.globl _P7_3
                                     38 	.globl _P7_2
                                     39 	.globl _P7_1
                                     40 	.globl _P7_0
                                     41 	.globl _P6_7
                                     42 	.globl _P6_6
                                     43 	.globl _P6_5
                                     44 	.globl _P6_4
                                     45 	.globl _P6_3
                                     46 	.globl _P6_2
                                     47 	.globl _P6_1
                                     48 	.globl _P6_0
                                     49 	.globl _P5_7
                                     50 	.globl _P5_6
                                     51 	.globl _P5_5
                                     52 	.globl _P5_4
                                     53 	.globl _P5_3
                                     54 	.globl _P5_2
                                     55 	.globl _P5_1
                                     56 	.globl _P5_0
                                     57 	.globl _P4_7
                                     58 	.globl _P4_6
                                     59 	.globl _P4_5
                                     60 	.globl _P4_4
                                     61 	.globl _P4_3
                                     62 	.globl _P4_2
                                     63 	.globl _P4_1
                                     64 	.globl _P4_0
                                     65 	.globl _P3_7
                                     66 	.globl _P3_6
                                     67 	.globl _P3_5
                                     68 	.globl _P3_4
                                     69 	.globl _P3_3
                                     70 	.globl _P3_2
                                     71 	.globl _P3_1
                                     72 	.globl _P3_0
                                     73 	.globl _P2_7
                                     74 	.globl _P2_6
                                     75 	.globl _P2_5
                                     76 	.globl _P2_4
                                     77 	.globl _P2_3
                                     78 	.globl _P2_2
                                     79 	.globl _P2_1
                                     80 	.globl _P2_0
                                     81 	.globl _P1_7
                                     82 	.globl _P1_6
                                     83 	.globl _P1_5
                                     84 	.globl _P1_4
                                     85 	.globl _P1_3
                                     86 	.globl _P1_2
                                     87 	.globl _P1_1
                                     88 	.globl _P1_0
                                     89 	.globl _P0_7
                                     90 	.globl _P0_6
                                     91 	.globl _P0_5
                                     92 	.globl _P0_4
                                     93 	.globl _P0_3
                                     94 	.globl _P0_2
                                     95 	.globl _P0_1
                                     96 	.globl _P0_0
                                     97 	.globl _CANTEST
                                     98 	.globl _CANCCE
                                     99 	.globl _CANDAR
                                    100 	.globl _CANIF
                                    101 	.globl _CANEIE
                                    102 	.globl _CANSIE
                                    103 	.globl _CANIE
                                    104 	.globl _CANINIT
                                    105 	.globl _SPIEN
                                    106 	.globl _TXBMT
                                    107 	.globl _NSSMD0
                                    108 	.globl _NSSMD1
                                    109 	.globl _RXOVRN
                                    110 	.globl _MODF
                                    111 	.globl _WCOL
                                    112 	.globl _SPIF
                                    113 	.globl _AD2WINT
                                    114 	.globl _AD2CM0
                                    115 	.globl _AD2CM1
                                    116 	.globl _AD2CM2
                                    117 	.globl _AD2BUSY
                                    118 	.globl _AD2INT
                                    119 	.globl _AD2TM
                                    120 	.globl _AD2EN
                                    121 	.globl _AD0LJST
                                    122 	.globl _AD0WINT
                                    123 	.globl _AD0CM0
                                    124 	.globl _AD0CM1
                                    125 	.globl _AD0BUSY
                                    126 	.globl _AD0INT
                                    127 	.globl _AD0TM
                                    128 	.globl _AD0EN
                                    129 	.globl _CCF0
                                    130 	.globl _CCF1
                                    131 	.globl _CCF2
                                    132 	.globl _CCF3
                                    133 	.globl _CCF4
                                    134 	.globl _CCF5
                                    135 	.globl _CR
                                    136 	.globl _CF
                                    137 	.globl _P
                                    138 	.globl _F1
                                    139 	.globl _OV
                                    140 	.globl _RS0
                                    141 	.globl _RS1
                                    142 	.globl _F0
                                    143 	.globl _AC
                                    144 	.globl _CY
                                    145 	.globl _CPRL4
                                    146 	.globl _CT4
                                    147 	.globl _TR4
                                    148 	.globl _EXEN4
                                    149 	.globl _EXF4
                                    150 	.globl _TF4
                                    151 	.globl _CPRL3
                                    152 	.globl _CT3
                                    153 	.globl _TR3
                                    154 	.globl _EXEN3
                                    155 	.globl _EXF3
                                    156 	.globl _TF3
                                    157 	.globl _CPRL2
                                    158 	.globl _CT2
                                    159 	.globl _TR2
                                    160 	.globl _EXEN2
                                    161 	.globl _EXF2
                                    162 	.globl _TF2
                                    163 	.globl _LEC0
                                    164 	.globl _LEC1
                                    165 	.globl _LEC2
                                    166 	.globl _TXOK
                                    167 	.globl _RXOK
                                    168 	.globl _EPASS
                                    169 	.globl _EWARN
                                    170 	.globl _BOFF
                                    171 	.globl _SMBTOE
                                    172 	.globl _SMBFTE
                                    173 	.globl _AA
                                    174 	.globl _SI
                                    175 	.globl _STO
                                    176 	.globl _STA
                                    177 	.globl _ENSMB
                                    178 	.globl _BUSY
                                    179 	.globl _PX0
                                    180 	.globl _PT0
                                    181 	.globl _PX1
                                    182 	.globl _PT1
                                    183 	.globl _PS0
                                    184 	.globl _PT2
                                    185 	.globl _EX0
                                    186 	.globl _ET0
                                    187 	.globl _EX1
                                    188 	.globl _ET1
                                    189 	.globl _ES0
                                    190 	.globl _ET2
                                    191 	.globl _EA
                                    192 	.globl _RI1
                                    193 	.globl _TI1
                                    194 	.globl _RB81
                                    195 	.globl _TB81
                                    196 	.globl _REN1
                                    197 	.globl _MCE1
                                    198 	.globl _S1MODE
                                    199 	.globl _RI0
                                    200 	.globl _TI0
                                    201 	.globl _RB80
                                    202 	.globl _TB80
                                    203 	.globl _REN0
                                    204 	.globl _SM20
                                    205 	.globl _SM10
                                    206 	.globl _SM00
                                    207 	.globl _CP2HYN0
                                    208 	.globl _CP2HYN1
                                    209 	.globl _CP2HYP0
                                    210 	.globl _CP2HYP1
                                    211 	.globl _CP2FIF
                                    212 	.globl _CP2RIF
                                    213 	.globl _CP2OUT
                                    214 	.globl _CP2EN
                                    215 	.globl _CP1HYN0
                                    216 	.globl _CP1HYN1
                                    217 	.globl _CP1HYP0
                                    218 	.globl _CP1HYP1
                                    219 	.globl _CP1FIF
                                    220 	.globl _CP1RIF
                                    221 	.globl _CP1OUT
                                    222 	.globl _CP1EN
                                    223 	.globl _CP0HYN0
                                    224 	.globl _CP0HYN1
                                    225 	.globl _CP0HYP0
                                    226 	.globl _CP0HYP1
                                    227 	.globl _CP0FIF
                                    228 	.globl _CP0RIF
                                    229 	.globl _CP0OUT
                                    230 	.globl _CP0EN
                                    231 	.globl _IT0
                                    232 	.globl _IE0
                                    233 	.globl _IT1
                                    234 	.globl _IE1
                                    235 	.globl _TR0
                                    236 	.globl _TF0
                                    237 	.globl _TR1
                                    238 	.globl _TF1
                                    239 	.globl __XPAGE
                                    240 	.globl _DP
                                    241 	.globl _ADC0
                                    242 	.globl _ADC0LT
                                    243 	.globl _ADC0GT
                                    244 	.globl _TMR4
                                    245 	.globl _TMR3
                                    246 	.globl _TMR2
                                    247 	.globl _RCAP4
                                    248 	.globl _RCAP3
                                    249 	.globl _RCAP2
                                    250 	.globl _DAC1
                                    251 	.globl _DAC0
                                    252 	.globl _CAN0DAT
                                    253 	.globl _PCA0CP5
                                    254 	.globl _PCA0CP4
                                    255 	.globl _PCA0CP3
                                    256 	.globl _PCA0CP2
                                    257 	.globl _PCA0CP1
                                    258 	.globl _PCA0CP0
                                    259 	.globl _PCA0
                                    260 	.globl _WDTCN
                                    261 	.globl _PCA0CPH1
                                    262 	.globl _PCA0CPL1
                                    263 	.globl _PCA0CPH0
                                    264 	.globl _PCA0CPL0
                                    265 	.globl _PCA0H
                                    266 	.globl _PCA0L
                                    267 	.globl _P7
                                    268 	.globl _CAN0CN
                                    269 	.globl _SPI0CN
                                    270 	.globl _EIP2
                                    271 	.globl _EIP1
                                    272 	.globl _B
                                    273 	.globl _RSTSRC
                                    274 	.globl _PCA0CPH4
                                    275 	.globl _PCA0CPL4
                                    276 	.globl _PCA0CPH3
                                    277 	.globl _PCA0CPL3
                                    278 	.globl _PCA0CPH2
                                    279 	.globl _PCA0CPL2
                                    280 	.globl _P6
                                    281 	.globl _ADC2CN
                                    282 	.globl _ADC0CN
                                    283 	.globl _EIE2
                                    284 	.globl _EIE1
                                    285 	.globl _XBR3
                                    286 	.globl _XBR2
                                    287 	.globl _XBR1
                                    288 	.globl _PCA0CPH5
                                    289 	.globl _XBR0
                                    290 	.globl _PCA0CPL5
                                    291 	.globl _ACC
                                    292 	.globl _PCA0CPM5
                                    293 	.globl _PCA0CPM4
                                    294 	.globl _PCA0CPM3
                                    295 	.globl _PCA0CPM2
                                    296 	.globl _CAN0TST
                                    297 	.globl _PCA0CPM1
                                    298 	.globl _CAN0ADR
                                    299 	.globl _PCA0CPM0
                                    300 	.globl _CAN0DATH
                                    301 	.globl _PCA0MD
                                    302 	.globl _P5
                                    303 	.globl _CAN0DATL
                                    304 	.globl _PCA0CN
                                    305 	.globl _HVA0CN
                                    306 	.globl _DAC1CN
                                    307 	.globl _DAC0CN
                                    308 	.globl _DAC1H
                                    309 	.globl _DAC0H
                                    310 	.globl _DAC1L
                                    311 	.globl _DAC0L
                                    312 	.globl _REF0CN
                                    313 	.globl _PSW
                                    314 	.globl _SMB0CR
                                    315 	.globl _TMR4H
                                    316 	.globl _TMR3H
                                    317 	.globl _TMR2H
                                    318 	.globl _TMR4L
                                    319 	.globl _TMR3L
                                    320 	.globl _TMR2L
                                    321 	.globl _RCAP4H
                                    322 	.globl _RCAP3H
                                    323 	.globl _RCAP2H
                                    324 	.globl _RCAP4L
                                    325 	.globl _RCAP3L
                                    326 	.globl _RCAP2L
                                    327 	.globl _TMR4CF
                                    328 	.globl _TMR3CF
                                    329 	.globl _TMR2CF
                                    330 	.globl _P4
                                    331 	.globl _TMR4CN
                                    332 	.globl _TMR3CN
                                    333 	.globl _TMR2CN
                                    334 	.globl _ADC0LTH
                                    335 	.globl _ADC2LT
                                    336 	.globl _ADC0LTL
                                    337 	.globl _ADC0GTH
                                    338 	.globl _ADC2GT
                                    339 	.globl _ADC0GTL
                                    340 	.globl _SMB0ADR
                                    341 	.globl _SMB0DAT
                                    342 	.globl _SMB0STA
                                    343 	.globl _CAN0STA
                                    344 	.globl _SMB0CN
                                    345 	.globl _ADC0H
                                    346 	.globl _ADC2
                                    347 	.globl _ADC0L
                                    348 	.globl _ADC2CF
                                    349 	.globl _ADC0CF
                                    350 	.globl _AMX2SL
                                    351 	.globl _AMX0SL
                                    352 	.globl _AMX0CF
                                    353 	.globl _AMX0PRT
                                    354 	.globl _AMX2CF
                                    355 	.globl _SADEN0
                                    356 	.globl _IP
                                    357 	.globl _FLACL
                                    358 	.globl _FLSCL
                                    359 	.globl _P3
                                    360 	.globl _P3MDIN
                                    361 	.globl _P2MDIN
                                    362 	.globl _P1MDIN
                                    363 	.globl _SADDR1
                                    364 	.globl _SADDR0
                                    365 	.globl _IE
                                    366 	.globl _P3MDOUT
                                    367 	.globl _P2MDOUT
                                    368 	.globl _P1MDOUT
                                    369 	.globl _P0MDOUT
                                    370 	.globl _EMI0CF
                                    371 	.globl _EMI0CN
                                    372 	.globl _EMI0TC
                                    373 	.globl _P2
                                    374 	.globl _P7MDOUT
                                    375 	.globl _P6MDOUT
                                    376 	.globl _P5MDOUT
                                    377 	.globl _SPI0CKR
                                    378 	.globl _P4MDOUT
                                    379 	.globl _SPI0DAT
                                    380 	.globl _SPI0CFG
                                    381 	.globl _SBUF1
                                    382 	.globl _SBUF0
                                    383 	.globl _SCON1
                                    384 	.globl _SCON0
                                    385 	.globl _CLKSEL
                                    386 	.globl _SFRPGCN
                                    387 	.globl _SSTA0
                                    388 	.globl _P1
                                    389 	.globl _PSCTL
                                    390 	.globl _CKCON
                                    391 	.globl _TH1
                                    392 	.globl _OSCXCN
                                    393 	.globl _TH0
                                    394 	.globl _OSCICL
                                    395 	.globl _TL1
                                    396 	.globl _OSCICN
                                    397 	.globl _TL0
                                    398 	.globl _CPT2MD
                                    399 	.globl _CPT1MD
                                    400 	.globl _CPT0MD
                                    401 	.globl _TMOD
                                    402 	.globl _CPT2CN
                                    403 	.globl _CPT1CN
                                    404 	.globl _CPT0CN
                                    405 	.globl _TCON
                                    406 	.globl _PCON
                                    407 	.globl _SFRLAST
                                    408 	.globl _SFRNEXT
                                    409 	.globl _SFRPAGE
                                    410 	.globl _DPH
                                    411 	.globl _DPL
                                    412 	.globl _SP
                                    413 	.globl _P0
                                    414 	.globl _fbr
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
                                   1204 ;--------------------------------------------------------
                                   1205 ; overlayable items in internal ram 
                                   1206 ;--------------------------------------------------------
                                   1207 	.area	OSEG    (OVR,DATA)
                                   1208 	.area	OSEG    (OVR,DATA)
                                   1209 	.area	OSEG    (OVR,DATA)
                                   1210 	.area	OSEG    (OVR,DATA)
                                   1211 	.area	OSEG    (OVR,DATA)
                                   1212 ;--------------------------------------------------------
                                   1213 ; Stack segment in internal ram 
                                   1214 ;--------------------------------------------------------
                                   1215 	.area	SSEG
      000022                       1216 __start__stack:
      000022                       1217 	.ds	1
                                   1218 
                                   1219 ;--------------------------------------------------------
                                   1220 ; indirectly addressable internal ram data
                                   1221 ;--------------------------------------------------------
                                   1222 	.area ISEG    (DATA)
                                   1223 ;--------------------------------------------------------
                                   1224 ; absolute internal ram data
                                   1225 ;--------------------------------------------------------
                                   1226 	.area IABS    (ABS,DATA)
                                   1227 	.area IABS    (ABS,DATA)
                                   1228 ;--------------------------------------------------------
                                   1229 ; bit data
                                   1230 ;--------------------------------------------------------
                                   1231 	.area BSEG    (BIT)
                           000000  1232 Lmain.le_glcd$cd$1$31==.
      000000                       1233 _le_glcd_PARM_1:
      000000                       1234 	.ds 1
                           000001  1235 Lmain.le_glcd$cs$1$31==.
      000001                       1236 _le_glcd_PARM_2:
      000001                       1237 	.ds 1
                           000002  1238 Lmain.esc_glcd$cd$1$33==.
      000002                       1239 _esc_glcd_PARM_2:
      000002                       1240 	.ds 1
                           000003  1241 Lmain.esc_glcd$cs$1$33==.
      000003                       1242 _esc_glcd_PARM_3:
      000003                       1243 	.ds 1
                           000004  1244 Lmain.conf_Y$cs$1$37==.
      000004                       1245 _conf_Y_PARM_2:
      000004                       1246 	.ds 1
                           000005  1247 Lmain.conf_pag$cs$1$39==.
      000005                       1248 _conf_pag_PARM_2:
      000005                       1249 	.ds 1
                           000006  1250 Lmain.limpa_glcd$cs$1$41==.
      000006                       1251 _limpa_glcd_PARM_1:
      000006                       1252 	.ds 1
                           000007  1253 G$fbr$0$0==.
      000007                       1254 _fbr::
      000007                       1255 	.ds 1
                                   1256 ;--------------------------------------------------------
                                   1257 ; paged external ram data
                                   1258 ;--------------------------------------------------------
                                   1259 	.area PSEG    (PAG,XDATA)
                                   1260 ;--------------------------------------------------------
                                   1261 ; external ram data
                                   1262 ;--------------------------------------------------------
                                   1263 	.area XSEG    (XDATA)
                                   1264 ;--------------------------------------------------------
                                   1265 ; absolute external ram data
                                   1266 ;--------------------------------------------------------
                                   1267 	.area XABS    (ABS,XDATA)
                                   1268 ;--------------------------------------------------------
                                   1269 ; external initialized ram data
                                   1270 ;--------------------------------------------------------
                                   1271 	.area XISEG   (XDATA)
                                   1272 	.area HOME    (CODE)
                                   1273 	.area GSINIT0 (CODE)
                                   1274 	.area GSINIT1 (CODE)
                                   1275 	.area GSINIT2 (CODE)
                                   1276 	.area GSINIT3 (CODE)
                                   1277 	.area GSINIT4 (CODE)
                                   1278 	.area GSINIT5 (CODE)
                                   1279 	.area GSINIT  (CODE)
                                   1280 	.area GSFINAL (CODE)
                                   1281 	.area CSEG    (CODE)
                                   1282 ;--------------------------------------------------------
                                   1283 ; interrupt vector 
                                   1284 ;--------------------------------------------------------
                                   1285 	.area HOME    (CODE)
      000000                       1286 __interrupt_vect:
      000000 02 00 29         [24] 1287 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1288 	reti
      000004                       1289 	.ds	7
      00000B 32               [24] 1290 	reti
      00000C                       1291 	.ds	7
      000013 32               [24] 1292 	reti
      000014                       1293 	.ds	7
      00001B 32               [24] 1294 	reti
      00001C                       1295 	.ds	7
      000023 02 02 EE         [24] 1296 	ljmp	_int_serial
                                   1297 ;--------------------------------------------------------
                                   1298 ; global & static initialisations
                                   1299 ;--------------------------------------------------------
                                   1300 	.area HOME    (CODE)
                                   1301 	.area GSINIT  (CODE)
                                   1302 	.area GSFINAL (CODE)
                                   1303 	.area GSINIT  (CODE)
                                   1304 	.globl __sdcc_gsinit_startup
                                   1305 	.globl __sdcc_program_startup
                                   1306 	.globl __start__stack
                                   1307 	.globl __mcs51_genXINIT
                                   1308 	.globl __mcs51_genXRAMCLEAR
                                   1309 	.globl __mcs51_genRAMCLEAR
                           000000  1310 	C$main.c$257$1$49 ==.
                                   1311 ;	Z:\MICAP\PWM\main.c:257: volatile __bit fbr = 0;
      000082 C2 07            [12] 1312 	clr	_fbr
                                   1313 	.area GSFINAL (CODE)
      000084 02 00 26         [24] 1314 	ljmp	__sdcc_program_startup
                                   1315 ;--------------------------------------------------------
                                   1316 ; Home
                                   1317 ;--------------------------------------------------------
                                   1318 	.area HOME    (CODE)
                                   1319 	.area HOME    (CODE)
      000026                       1320 __sdcc_program_startup:
      000026 02 02 F6         [24] 1321 	ljmp	_main
                                   1322 ;	return from main will return to caller
                                   1323 ;--------------------------------------------------------
                                   1324 ; code
                                   1325 ;--------------------------------------------------------
                                   1326 	.area CSEG    (CODE)
                                   1327 ;------------------------------------------------------------
                                   1328 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1329 ;------------------------------------------------------------
                           000000  1330 	G$Reset_Sources_Init$0$0 ==.
                           000000  1331 	C$config.c$10$0$0 ==.
                                   1332 ;	Z:\MICAP\PWM\/config.c:10: void Reset_Sources_Init()
                                   1333 ;	-----------------------------------------
                                   1334 ;	 function Reset_Sources_Init
                                   1335 ;	-----------------------------------------
      000087                       1336 _Reset_Sources_Init:
                           000007  1337 	ar7 = 0x07
                           000006  1338 	ar6 = 0x06
                           000005  1339 	ar5 = 0x05
                           000004  1340 	ar4 = 0x04
                           000003  1341 	ar3 = 0x03
                           000002  1342 	ar2 = 0x02
                           000001  1343 	ar1 = 0x01
                           000000  1344 	ar0 = 0x00
                           000000  1345 	C$config.c$12$1$1 ==.
                                   1346 ;	Z:\MICAP\PWM\/config.c:12: WDTCN     = 0xDE;
      000087 75 FF DE         [24] 1347 	mov	_WDTCN,#0xde
                           000003  1348 	C$config.c$13$1$1 ==.
                                   1349 ;	Z:\MICAP\PWM\/config.c:13: WDTCN     = 0xAD;
      00008A 75 FF AD         [24] 1350 	mov	_WDTCN,#0xad
                           000006  1351 	C$config.c$14$1$1 ==.
                           000006  1352 	XG$Reset_Sources_Init$0$0 ==.
      00008D 22               [24] 1353 	ret
                                   1354 ;------------------------------------------------------------
                                   1355 ;Allocation info for local variables in function 'Timer_Init'
                                   1356 ;------------------------------------------------------------
                           000007  1357 	G$Timer_Init$0$0 ==.
                           000007  1358 	C$config.c$16$1$1 ==.
                                   1359 ;	Z:\MICAP\PWM\/config.c:16: void Timer_Init()
                                   1360 ;	-----------------------------------------
                                   1361 ;	 function Timer_Init
                                   1362 ;	-----------------------------------------
      00008E                       1363 _Timer_Init:
                           000007  1364 	C$config.c$18$1$2 ==.
                                   1365 ;	Z:\MICAP\PWM\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      00008E 75 84 00         [24] 1366 	mov	_SFRPAGE,#0x00
                           00000A  1367 	C$config.c$19$1$2 ==.
                                   1368 ;	Z:\MICAP\PWM\/config.c:19: TCON      = 0x40;
      000091 75 88 40         [24] 1369 	mov	_TCON,#0x40
                           00000D  1370 	C$config.c$20$1$2 ==.
                                   1371 ;	Z:\MICAP\PWM\/config.c:20: TMOD      = 0x21;
      000094 75 89 21         [24] 1372 	mov	_TMOD,#0x21
                           000010  1373 	C$config.c$21$1$2 ==.
                                   1374 ;	Z:\MICAP\PWM\/config.c:21: CKCON     = 0x18;
      000097 75 8E 18         [24] 1375 	mov	_CKCON,#0x18
                           000013  1376 	C$config.c$22$1$2 ==.
                                   1377 ;	Z:\MICAP\PWM\/config.c:22: TH1       = 0xAF;
      00009A 75 8D AF         [24] 1378 	mov	_TH1,#0xaf
                           000016  1379 	C$config.c$23$1$2 ==.
                                   1380 ;	Z:\MICAP\PWM\/config.c:23: SFRPAGE   = TMR4_PAGE;
      00009D 75 84 02         [24] 1381 	mov	_SFRPAGE,#0x02
                           000019  1382 	C$config.c$24$1$2 ==.
                                   1383 ;	Z:\MICAP\PWM\/config.c:24: TMR4CN    = 0x04;
      0000A0 75 C8 04         [24] 1384 	mov	_TMR4CN,#0x04
                           00001C  1385 	C$config.c$25$1$2 ==.
                                   1386 ;	Z:\MICAP\PWM\/config.c:25: TMR4CF    = 0x02;
      0000A3 75 C9 02         [24] 1387 	mov	_TMR4CF,#0x02
                           00001F  1388 	C$config.c$26$1$2 ==.
                                   1389 ;	Z:\MICAP\PWM\/config.c:26: RCAP4L    = 0x8D;
      0000A6 75 CA 8D         [24] 1390 	mov	_RCAP4L,#0x8d
                           000022  1391 	C$config.c$27$1$2 ==.
                                   1392 ;	Z:\MICAP\PWM\/config.c:27: RCAP4H    = 0x34;
      0000A9 75 CB 34         [24] 1393 	mov	_RCAP4H,#0x34
                           000025  1394 	C$config.c$28$1$2 ==.
                           000025  1395 	XG$Timer_Init$0$0 ==.
      0000AC 22               [24] 1396 	ret
                                   1397 ;------------------------------------------------------------
                                   1398 ;Allocation info for local variables in function 'PCA_Init'
                                   1399 ;------------------------------------------------------------
                           000026  1400 	G$PCA_Init$0$0 ==.
                           000026  1401 	C$config.c$30$1$2 ==.
                                   1402 ;	Z:\MICAP\PWM\/config.c:30: void PCA_Init()
                                   1403 ;	-----------------------------------------
                                   1404 ;	 function PCA_Init
                                   1405 ;	-----------------------------------------
      0000AD                       1406 _PCA_Init:
                           000026  1407 	C$config.c$32$1$3 ==.
                                   1408 ;	Z:\MICAP\PWM\/config.c:32: SFRPAGE   = PCA0_PAGE;
      0000AD 75 84 00         [24] 1409 	mov	_SFRPAGE,#0x00
                           000029  1410 	C$config.c$33$1$3 ==.
                                   1411 ;	Z:\MICAP\PWM\/config.c:33: PCA0CN    = 0x40;
      0000B0 75 D8 40         [24] 1412 	mov	_PCA0CN,#0x40
                           00002C  1413 	C$config.c$34$1$3 ==.
                                   1414 ;	Z:\MICAP\PWM\/config.c:34: PCA0CPM0  = 0x42;
      0000B3 75 DA 42         [24] 1415 	mov	_PCA0CPM0,#0x42
                           00002F  1416 	C$config.c$35$1$3 ==.
                           00002F  1417 	XG$PCA_Init$0$0 ==.
      0000B6 22               [24] 1418 	ret
                                   1419 ;------------------------------------------------------------
                                   1420 ;Allocation info for local variables in function 'UART_Init'
                                   1421 ;------------------------------------------------------------
                           000030  1422 	G$UART_Init$0$0 ==.
                           000030  1423 	C$config.c$37$1$3 ==.
                                   1424 ;	Z:\MICAP\PWM\/config.c:37: void UART_Init()
                                   1425 ;	-----------------------------------------
                                   1426 ;	 function UART_Init
                                   1427 ;	-----------------------------------------
      0000B7                       1428 _UART_Init:
                           000030  1429 	C$config.c$39$1$4 ==.
                                   1430 ;	Z:\MICAP\PWM\/config.c:39: SFRPAGE   = UART0_PAGE;
      0000B7 75 84 00         [24] 1431 	mov	_SFRPAGE,#0x00
                           000033  1432 	C$config.c$40$1$4 ==.
                                   1433 ;	Z:\MICAP\PWM\/config.c:40: SCON0     = 0x70;
      0000BA 75 98 70         [24] 1434 	mov	_SCON0,#0x70
                           000036  1435 	C$config.c$41$1$4 ==.
                           000036  1436 	XG$UART_Init$0$0 ==.
      0000BD 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'SMBus_Init'
                                   1440 ;------------------------------------------------------------
                           000037  1441 	G$SMBus_Init$0$0 ==.
                           000037  1442 	C$config.c$43$1$4 ==.
                                   1443 ;	Z:\MICAP\PWM\/config.c:43: void SMBus_Init()
                                   1444 ;	-----------------------------------------
                                   1445 ;	 function SMBus_Init
                                   1446 ;	-----------------------------------------
      0000BE                       1447 _SMBus_Init:
                           000037  1448 	C$config.c$45$1$5 ==.
                                   1449 ;	Z:\MICAP\PWM\/config.c:45: SFRPAGE   = SMB0_PAGE;
      0000BE 75 84 00         [24] 1450 	mov	_SFRPAGE,#0x00
                           00003A  1451 	C$config.c$46$1$5 ==.
                                   1452 ;	Z:\MICAP\PWM\/config.c:46: SMB0CN    = 0x41;
      0000C1 75 C0 41         [24] 1453 	mov	_SMB0CN,#0x41
                           00003D  1454 	C$config.c$47$1$5 ==.
                                   1455 ;	Z:\MICAP\PWM\/config.c:47: SMB0CR    = 0xE9;
      0000C4 75 CF E9         [24] 1456 	mov	_SMB0CR,#0xe9
                           000040  1457 	C$config.c$48$1$5 ==.
                           000040  1458 	XG$SMBus_Init$0$0 ==.
      0000C7 22               [24] 1459 	ret
                                   1460 ;------------------------------------------------------------
                                   1461 ;Allocation info for local variables in function 'SPI_Init'
                                   1462 ;------------------------------------------------------------
                           000041  1463 	G$SPI_Init$0$0 ==.
                           000041  1464 	C$config.c$50$1$5 ==.
                                   1465 ;	Z:\MICAP\PWM\/config.c:50: void SPI_Init()
                                   1466 ;	-----------------------------------------
                                   1467 ;	 function SPI_Init
                                   1468 ;	-----------------------------------------
      0000C8                       1469 _SPI_Init:
                           000041  1470 	C$config.c$52$1$6 ==.
                                   1471 ;	Z:\MICAP\PWM\/config.c:52: SFRPAGE   = SPI0_PAGE;
      0000C8 75 84 00         [24] 1472 	mov	_SFRPAGE,#0x00
                           000044  1473 	C$config.c$53$1$6 ==.
                                   1474 ;	Z:\MICAP\PWM\/config.c:53: SPI0CFG   = 0x40;
      0000CB 75 9A 40         [24] 1475 	mov	_SPI0CFG,#0x40
                           000047  1476 	C$config.c$54$1$6 ==.
                                   1477 ;	Z:\MICAP\PWM\/config.c:54: SPI0CN    = 0x01;
      0000CE 75 F8 01         [24] 1478 	mov	_SPI0CN,#0x01
                           00004A  1479 	C$config.c$55$1$6 ==.
                                   1480 ;	Z:\MICAP\PWM\/config.c:55: SPI0CKR   = 0x7C;
      0000D1 75 9D 7C         [24] 1481 	mov	_SPI0CKR,#0x7c
                           00004D  1482 	C$config.c$56$1$6 ==.
                           00004D  1483 	XG$SPI_Init$0$0 ==.
      0000D4 22               [24] 1484 	ret
                                   1485 ;------------------------------------------------------------
                                   1486 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1487 ;------------------------------------------------------------
                           00004E  1488 	G$Port_IO_Init$0$0 ==.
                           00004E  1489 	C$config.c$58$1$6 ==.
                                   1490 ;	Z:\MICAP\PWM\/config.c:58: void Port_IO_Init()
                                   1491 ;	-----------------------------------------
                                   1492 ;	 function Port_IO_Init
                                   1493 ;	-----------------------------------------
      0000D5                       1494 _Port_IO_Init:
                           00004E  1495 	C$config.c$96$1$7 ==.
                                   1496 ;	Z:\MICAP\PWM\/config.c:96: SFRPAGE   = CONFIG_PAGE;
      0000D5 75 84 0F         [24] 1497 	mov	_SFRPAGE,#0x0f
                           000051  1498 	C$config.c$97$1$7 ==.
                                   1499 ;	Z:\MICAP\PWM\/config.c:97: P0MDOUT   = 0x84;
      0000D8 75 A4 84         [24] 1500 	mov	_P0MDOUT,#0x84
                           000054  1501 	C$config.c$98$1$7 ==.
                                   1502 ;	Z:\MICAP\PWM\/config.c:98: XBR0      = 0x0C;
      0000DB 75 E1 0C         [24] 1503 	mov	_XBR0,#0x0c
                           000057  1504 	C$config.c$99$1$7 ==.
                                   1505 ;	Z:\MICAP\PWM\/config.c:99: XBR2      = 0x40;
      0000DE 75 E3 40         [24] 1506 	mov	_XBR2,#0x40
                           00005A  1507 	C$config.c$100$1$7 ==.
                           00005A  1508 	XG$Port_IO_Init$0$0 ==.
      0000E1 22               [24] 1509 	ret
                                   1510 ;------------------------------------------------------------
                                   1511 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1512 ;------------------------------------------------------------
                                   1513 ;i                         Allocated to registers r6 r7 
                                   1514 ;------------------------------------------------------------
                           00005B  1515 	G$Oscillator_Init$0$0 ==.
                           00005B  1516 	C$config.c$102$1$7 ==.
                                   1517 ;	Z:\MICAP\PWM\/config.c:102: void Oscillator_Init()
                                   1518 ;	-----------------------------------------
                                   1519 ;	 function Oscillator_Init
                                   1520 ;	-----------------------------------------
      0000E2                       1521 _Oscillator_Init:
                           00005B  1522 	C$config.c$105$1$8 ==.
                                   1523 ;	Z:\MICAP\PWM\/config.c:105: SFRPAGE   = CONFIG_PAGE;
      0000E2 75 84 0F         [24] 1524 	mov	_SFRPAGE,#0x0f
                           00005E  1525 	C$config.c$106$1$8 ==.
                                   1526 ;	Z:\MICAP\PWM\/config.c:106: OSCXCN    = 0x67;
      0000E5 75 8C 67         [24] 1527 	mov	_OSCXCN,#0x67
                           000061  1528 	C$config.c$107$1$8 ==.
                                   1529 ;	Z:\MICAP\PWM\/config.c:107: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      0000E8 7E B8            [12] 1530 	mov	r6,#0xb8
      0000EA 7F 0B            [12] 1531 	mov	r7,#0x0b
      0000EC                       1532 00107$:
      0000EC EE               [12] 1533 	mov	a,r6
      0000ED 24 FF            [12] 1534 	add	a,#0xff
      0000EF FC               [12] 1535 	mov	r4,a
      0000F0 EF               [12] 1536 	mov	a,r7
      0000F1 34 FF            [12] 1537 	addc	a,#0xff
      0000F3 FD               [12] 1538 	mov	r5,a
      0000F4 8C 06            [24] 1539 	mov	ar6,r4
      0000F6 8D 07            [24] 1540 	mov	ar7,r5
      0000F8 EC               [12] 1541 	mov	a,r4
      0000F9 4D               [12] 1542 	orl	a,r5
      0000FA 70 F0            [24] 1543 	jnz	00107$
                           000075  1544 	C$config.c$108$1$8 ==.
                                   1545 ;	Z:\MICAP\PWM\/config.c:108: while ((OSCXCN & 0x80) == 0);
      0000FC                       1546 00102$:
      0000FC E5 8C            [12] 1547 	mov	a,_OSCXCN
      0000FE 30 E7 FB         [24] 1548 	jnb	acc.7,00102$
                           00007A  1549 	C$config.c$109$1$8 ==.
                                   1550 ;	Z:\MICAP\PWM\/config.c:109: CLKSEL    = 0x01;
      000101 75 97 01         [24] 1551 	mov	_CLKSEL,#0x01
                           00007D  1552 	C$config.c$110$1$8 ==.
                           00007D  1553 	XG$Oscillator_Init$0$0 ==.
      000104 22               [24] 1554 	ret
                                   1555 ;------------------------------------------------------------
                                   1556 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1557 ;------------------------------------------------------------
                           00007E  1558 	G$Interrupts_Init$0$0 ==.
                           00007E  1559 	C$config.c$112$1$8 ==.
                                   1560 ;	Z:\MICAP\PWM\/config.c:112: void Interrupts_Init()
                                   1561 ;	-----------------------------------------
                                   1562 ;	 function Interrupts_Init
                                   1563 ;	-----------------------------------------
      000105                       1564 _Interrupts_Init:
                           00007E  1565 	C$config.c$114$1$9 ==.
                                   1566 ;	Z:\MICAP\PWM\/config.c:114: IE        = 0x80;
      000105 75 A8 80         [24] 1567 	mov	_IE,#0x80
                           000081  1568 	C$config.c$115$1$9 ==.
                           000081  1569 	XG$Interrupts_Init$0$0 ==.
      000108 22               [24] 1570 	ret
                                   1571 ;------------------------------------------------------------
                                   1572 ;Allocation info for local variables in function 'Init_Device'
                                   1573 ;------------------------------------------------------------
                           000082  1574 	G$Init_Device$0$0 ==.
                           000082  1575 	C$config.c$119$1$9 ==.
                                   1576 ;	Z:\MICAP\PWM\/config.c:119: void Init_Device(void)
                                   1577 ;	-----------------------------------------
                                   1578 ;	 function Init_Device
                                   1579 ;	-----------------------------------------
      000109                       1580 _Init_Device:
                           000082  1581 	C$config.c$121$1$11 ==.
                                   1582 ;	Z:\MICAP\PWM\/config.c:121: Reset_Sources_Init();
      000109 12 00 87         [24] 1583 	lcall	_Reset_Sources_Init
                           000085  1584 	C$config.c$122$1$11 ==.
                                   1585 ;	Z:\MICAP\PWM\/config.c:122: Timer_Init();
      00010C 12 00 8E         [24] 1586 	lcall	_Timer_Init
                           000088  1587 	C$config.c$123$1$11 ==.
                                   1588 ;	Z:\MICAP\PWM\/config.c:123: PCA_Init();
      00010F 12 00 AD         [24] 1589 	lcall	_PCA_Init
                           00008B  1590 	C$config.c$124$1$11 ==.
                                   1591 ;	Z:\MICAP\PWM\/config.c:124: UART_Init();
      000112 12 00 B7         [24] 1592 	lcall	_UART_Init
                           00008E  1593 	C$config.c$125$1$11 ==.
                                   1594 ;	Z:\MICAP\PWM\/config.c:125: SMBus_Init();
      000115 12 00 BE         [24] 1595 	lcall	_SMBus_Init
                           000091  1596 	C$config.c$126$1$11 ==.
                                   1597 ;	Z:\MICAP\PWM\/config.c:126: SPI_Init();
      000118 12 00 C8         [24] 1598 	lcall	_SPI_Init
                           000094  1599 	C$config.c$127$1$11 ==.
                                   1600 ;	Z:\MICAP\PWM\/config.c:127: Port_IO_Init();
      00011B 12 00 D5         [24] 1601 	lcall	_Port_IO_Init
                           000097  1602 	C$config.c$128$1$11 ==.
                                   1603 ;	Z:\MICAP\PWM\/config.c:128: Oscillator_Init();
      00011E 12 00 E2         [24] 1604 	lcall	_Oscillator_Init
                           00009A  1605 	C$config.c$129$1$11 ==.
                                   1606 ;	Z:\MICAP\PWM\/config.c:129: Interrupts_Init();
      000121 12 01 05         [24] 1607 	lcall	_Interrupts_Init
                           00009D  1608 	C$config.c$130$1$11 ==.
                           00009D  1609 	XG$Init_Device$0$0 ==.
      000124 22               [24] 1610 	ret
                                   1611 ;------------------------------------------------------------
                                   1612 ;Allocation info for local variables in function 'delay_ms'
                                   1613 ;------------------------------------------------------------
                                   1614 ;t                         Allocated to registers r6 r7 
                                   1615 ;------------------------------------------------------------
                           00009E  1616 	G$delay_ms$0$0 ==.
                           00009E  1617 	C$main.c$27$1$11 ==.
                                   1618 ;	Z:\MICAP\PWM\main.c:27: void delay_ms(unsigned int t)
                                   1619 ;	-----------------------------------------
                                   1620 ;	 function delay_ms
                                   1621 ;	-----------------------------------------
      000125                       1622 _delay_ms:
      000125 AE 82            [24] 1623 	mov	r6,dpl
      000127 AF 83            [24] 1624 	mov	r7,dph
                           0000A2  1625 	C$main.c$29$1$26 ==.
                                   1626 ;	Z:\MICAP\PWM\main.c:29: TMOD &= 0xFC;
      000129 53 89 FC         [24] 1627 	anl	_TMOD,#0xfc
                           0000A5  1628 	C$main.c$30$1$26 ==.
                                   1629 ;	Z:\MICAP\PWM\main.c:30: TMOD |= 0x01;
      00012C 43 89 01         [24] 1630 	orl	_TMOD,#0x01
                           0000A8  1631 	C$main.c$32$1$26 ==.
                                   1632 ;	Z:\MICAP\PWM\main.c:32: while(t--)
      00012F                       1633 00104$:
      00012F 8E 04            [24] 1634 	mov	ar4,r6
      000131 8F 05            [24] 1635 	mov	ar5,r7
      000133 1E               [12] 1636 	dec	r6
      000134 BE FF 01         [24] 1637 	cjne	r6,#0xff,00122$
      000137 1F               [12] 1638 	dec	r7
      000138                       1639 00122$:
      000138 EC               [12] 1640 	mov	a,r4
      000139 4D               [12] 1641 	orl	a,r5
      00013A 60 11            [24] 1642 	jz	00107$
                           0000B5  1643 	C$main.c$34$2$27 ==.
                                   1644 ;	Z:\MICAP\PWM\main.c:34: TR0 = 0;
      00013C C2 8C            [12] 1645 	clr	_TR0
                           0000B7  1646 	C$main.c$35$2$27 ==.
                                   1647 ;	Z:\MICAP\PWM\main.c:35: TF0 = 0;
      00013E C2 8D            [12] 1648 	clr	_TF0
                           0000B9  1649 	C$main.c$36$2$27 ==.
                                   1650 ;	Z:\MICAP\PWM\main.c:36: TL0 = 0x58;
      000140 75 8A 58         [24] 1651 	mov	_TL0,#0x58
                           0000BC  1652 	C$main.c$37$2$27 ==.
                                   1653 ;	Z:\MICAP\PWM\main.c:37: TH0 = 0x9E;
      000143 75 8C 9E         [24] 1654 	mov	_TH0,#0x9e
                           0000BF  1655 	C$main.c$38$2$27 ==.
                                   1656 ;	Z:\MICAP\PWM\main.c:38: TR0 = 1;
      000146 D2 8C            [12] 1657 	setb	_TR0
                           0000C1  1658 	C$main.c$40$2$27 ==.
                                   1659 ;	Z:\MICAP\PWM\main.c:40: while (TF0 != 1);
      000148                       1660 00101$:
      000148 20 8D E4         [24] 1661 	jb	_TF0,00104$
      00014B 80 FB            [24] 1662 	sjmp	00101$
      00014D                       1663 00107$:
                           0000C6  1664 	C$main.c$42$1$26 ==.
                           0000C6  1665 	XG$delay_ms$0$0 ==.
      00014D 22               [24] 1666 	ret
                                   1667 ;------------------------------------------------------------
                                   1668 ;Allocation info for local variables in function 'delay_us'
                                   1669 ;------------------------------------------------------------
                                   1670 ;t                         Allocated to registers r6 r7 
                                   1671 ;------------------------------------------------------------
                           0000C7  1672 	G$delay_us$0$0 ==.
                           0000C7  1673 	C$main.c$45$1$26 ==.
                                   1674 ;	Z:\MICAP\PWM\main.c:45: void delay_us(unsigned int t)
                                   1675 ;	-----------------------------------------
                                   1676 ;	 function delay_us
                                   1677 ;	-----------------------------------------
      00014E                       1678 _delay_us:
      00014E AE 82            [24] 1679 	mov	r6,dpl
      000150 AF 83            [24] 1680 	mov	r7,dph
                           0000CB  1681 	C$main.c$47$1$29 ==.
                                   1682 ;	Z:\MICAP\PWM\main.c:47: TR0 = 0;
      000152 C2 8C            [12] 1683 	clr	_TR0
                           0000CD  1684 	C$main.c$48$1$29 ==.
                                   1685 ;	Z:\MICAP\PWM\main.c:48: TF0 = 0;
      000154 C2 8D            [12] 1686 	clr	_TF0
                           0000CF  1687 	C$main.c$49$1$29 ==.
                                   1688 ;	Z:\MICAP\PWM\main.c:49: TMOD &= 0xFC;
      000156 53 89 FC         [24] 1689 	anl	_TMOD,#0xfc
                           0000D2  1690 	C$main.c$50$1$29 ==.
                                   1691 ;	Z:\MICAP\PWM\main.c:50: TMOD |= 0x02;
      000159 43 89 02         [24] 1692 	orl	_TMOD,#0x02
                           0000D5  1693 	C$main.c$51$1$29 ==.
                                   1694 ;	Z:\MICAP\PWM\main.c:51: TL0 = 0xE7;
      00015C 75 8A E7         [24] 1695 	mov	_TL0,#0xe7
                           0000D8  1696 	C$main.c$52$1$29 ==.
                                   1697 ;	Z:\MICAP\PWM\main.c:52: TH0 = 0xE7;
      00015F 75 8C E7         [24] 1698 	mov	_TH0,#0xe7
                           0000DB  1699 	C$main.c$53$1$29 ==.
                                   1700 ;	Z:\MICAP\PWM\main.c:53: TR0 = 1;
      000162 D2 8C            [12] 1701 	setb	_TR0
                           0000DD  1702 	C$main.c$55$1$29 ==.
                                   1703 ;	Z:\MICAP\PWM\main.c:55: while(t--)
      000164                       1704 00104$:
      000164 8E 04            [24] 1705 	mov	ar4,r6
      000166 8F 05            [24] 1706 	mov	ar5,r7
      000168 1E               [12] 1707 	dec	r6
      000169 BE FF 01         [24] 1708 	cjne	r6,#0xff,00119$
      00016C 1F               [12] 1709 	dec	r7
      00016D                       1710 00119$:
      00016D EC               [12] 1711 	mov	a,r4
      00016E 4D               [12] 1712 	orl	a,r5
      00016F 60 05            [24] 1713 	jz	00107$
                           0000EA  1714 	C$main.c$57$2$30 ==.
                                   1715 ;	Z:\MICAP\PWM\main.c:57: while (TF0 != 1);
      000171                       1716 00101$:
                           0000EA  1717 	C$main.c$58$2$30 ==.
                                   1718 ;	Z:\MICAP\PWM\main.c:58: TF0 = 0;
      000171 10 8D F0         [24] 1719 	jbc	_TF0,00104$
      000174 80 FB            [24] 1720 	sjmp	00101$
      000176                       1721 00107$:
                           0000EF  1722 	C$main.c$60$1$29 ==.
                           0000EF  1723 	XG$delay_us$0$0 ==.
      000176 22               [24] 1724 	ret
                                   1725 ;------------------------------------------------------------
                                   1726 ;Allocation info for local variables in function 'le_glcd'
                                   1727 ;------------------------------------------------------------
                                   1728 ;byte                      Allocated to registers 
                                   1729 ;------------------------------------------------------------
                           0000F0  1730 	G$le_glcd$0$0 ==.
                           0000F0  1731 	C$main.c$161$1$29 ==.
                                   1732 ;	Z:\MICAP\PWM\main.c:161: unsigned char le_glcd(__bit cd, __bit cs)
                                   1733 ;	-----------------------------------------
                                   1734 ;	 function le_glcd
                                   1735 ;	-----------------------------------------
      000177                       1736 _le_glcd:
                           0000F0  1737 	C$main.c$164$1$32 ==.
                                   1738 ;	Z:\MICAP\PWM\main.c:164: RW = 1;
      000177 D2 A3            [12] 1739 	setb	_P2_3
                           0000F2  1740 	C$main.c$165$1$32 ==.
                                   1741 ;	Z:\MICAP\PWM\main.c:165: CS1 = cs;
      000179 A2 01            [12] 1742 	mov	c,_le_glcd_PARM_2
      00017B 92 A0            [24] 1743 	mov	_P2_0,c
                           0000F6  1744 	C$main.c$166$1$32 ==.
                                   1745 ;	Z:\MICAP\PWM\main.c:166: CS2 = !cs;
      00017D A2 01            [12] 1746 	mov	c,_le_glcd_PARM_2
      00017F B3               [12] 1747 	cpl	c
      000180 92 A1            [24] 1748 	mov	_P2_1,c
                           0000FB  1749 	C$main.c$167$1$32 ==.
                                   1750 ;	Z:\MICAP\PWM\main.c:167: RS = cd;
      000182 A2 00            [12] 1751 	mov	c,_le_glcd_PARM_1
      000184 92 A2            [24] 1752 	mov	_P2_2,c
                           0000FF  1753 	C$main.c$168$1$32 ==.
                                   1754 ;	Z:\MICAP\PWM\main.c:168: NOP4();
      000186 00               [12] 1755 	NOP	
      000187 00               [12] 1756 	NOP	
      000188 00               [12] 1757 	NOP	
      000189 00               [12] 1758 	NOP	
                           000103  1759 	C$main.c$169$1$32 ==.
                                   1760 ;	Z:\MICAP\PWM\main.c:169: E = 1;
      00018A D2 A4            [12] 1761 	setb	_P2_4
                           000105  1762 	C$main.c$170$1$32 ==.
                                   1763 ;	Z:\MICAP\PWM\main.c:170: NOP8();
      00018C 00               [12] 1764 	NOP	
      00018D 00               [12] 1765 	NOP	
      00018E 00               [12] 1766 	NOP	
      00018F 00               [12] 1767 	NOP	
      000190 00               [12] 1768 	NOP	
      000191 00               [12] 1769 	NOP	
      000192 00               [12] 1770 	NOP	
      000193 00               [12] 1771 	NOP	
                           00010D  1772 	C$main.c$171$1$32 ==.
                                   1773 ;	Z:\MICAP\PWM\main.c:171: SFRPAGE = CONFIG_PAGE;
      000194 75 84 0F         [24] 1774 	mov	_SFRPAGE,#0x0f
                           000110  1775 	C$main.c$172$1$32 ==.
                                   1776 ;	Z:\MICAP\PWM\main.c:172: byte = DB;
      000197 85 C8 82         [24] 1777 	mov	dpl,_P4
                           000113  1778 	C$main.c$173$1$32 ==.
                                   1779 ;	Z:\MICAP\PWM\main.c:173: SFRPAGE = LEGACY_PAGE;
      00019A 75 84 00         [24] 1780 	mov	_SFRPAGE,#0x00
                           000116  1781 	C$main.c$174$1$32 ==.
                                   1782 ;	Z:\MICAP\PWM\main.c:174: NOP4();
      00019D 00               [12] 1783 	NOP	
      00019E 00               [12] 1784 	NOP	
      00019F 00               [12] 1785 	NOP	
      0001A0 00               [12] 1786 	NOP	
                           00011A  1787 	C$main.c$175$1$32 ==.
                                   1788 ;	Z:\MICAP\PWM\main.c:175: E = 0;
      0001A1 C2 A4            [12] 1789 	clr	_P2_4
                           00011C  1790 	C$main.c$176$1$32 ==.
                                   1791 ;	Z:\MICAP\PWM\main.c:176: NOP12();
      0001A3 00               [12] 1792 	NOP	
      0001A4 00               [12] 1793 	NOP	
      0001A5 00               [12] 1794 	NOP	
      0001A6 00               [12] 1795 	NOP	
      0001A7 00               [12] 1796 	NOP	
      0001A8 00               [12] 1797 	NOP	
      0001A9 00               [12] 1798 	NOP	
      0001AA 00               [12] 1799 	NOP	
      0001AB 00               [12] 1800 	NOP	
      0001AC 00               [12] 1801 	NOP	
      0001AD 00               [12] 1802 	NOP	
      0001AE 00               [12] 1803 	NOP	
                           000128  1804 	C$main.c$177$1$32 ==.
                                   1805 ;	Z:\MICAP\PWM\main.c:177: return(byte);
                           000128  1806 	C$main.c$178$1$32 ==.
                           000128  1807 	XG$le_glcd$0$0 ==.
      0001AF 22               [24] 1808 	ret
                                   1809 ;------------------------------------------------------------
                                   1810 ;Allocation info for local variables in function 'esc_glcd'
                                   1811 ;------------------------------------------------------------
                                   1812 ;byte                      Allocated to registers r7 
                                   1813 ;------------------------------------------------------------
                           000129  1814 	G$esc_glcd$0$0 ==.
                           000129  1815 	C$main.c$180$1$32 ==.
                                   1816 ;	Z:\MICAP\PWM\main.c:180: void esc_glcd(unsigned char byte, __bit cd, __bit cs)
                                   1817 ;	-----------------------------------------
                                   1818 ;	 function esc_glcd
                                   1819 ;	-----------------------------------------
      0001B0                       1820 _esc_glcd:
      0001B0 AF 82            [24] 1821 	mov	r7,dpl
                           00012B  1822 	C$main.c$182$1$34 ==.
                                   1823 ;	Z:\MICAP\PWM\main.c:182: while (le_glcd(CO,cs) & 0x80);
      0001B2                       1824 00101$:
      0001B2 C2 00            [12] 1825 	clr	_le_glcd_PARM_1
      0001B4 A2 03            [12] 1826 	mov	c,_esc_glcd_PARM_3
      0001B6 92 01            [24] 1827 	mov	_le_glcd_PARM_2,c
      0001B8 C0 07            [24] 1828 	push	ar7
      0001BA 12 01 77         [24] 1829 	lcall	_le_glcd
      0001BD E5 82            [12] 1830 	mov	a,dpl
      0001BF D0 07            [24] 1831 	pop	ar7
      0001C1 20 E7 EE         [24] 1832 	jb	acc.7,00101$
                           00013D  1833 	C$main.c$183$1$34 ==.
                                   1834 ;	Z:\MICAP\PWM\main.c:183: RW = 0;
      0001C4 C2 A3            [12] 1835 	clr	_P2_3
                           00013F  1836 	C$main.c$184$1$34 ==.
                                   1837 ;	Z:\MICAP\PWM\main.c:184: CS1 = cs;
      0001C6 A2 03            [12] 1838 	mov	c,_esc_glcd_PARM_3
      0001C8 92 A0            [24] 1839 	mov	_P2_0,c
                           000143  1840 	C$main.c$185$1$34 ==.
                                   1841 ;	Z:\MICAP\PWM\main.c:185: CS2 = !cs;
      0001CA A2 03            [12] 1842 	mov	c,_esc_glcd_PARM_3
      0001CC B3               [12] 1843 	cpl	c
      0001CD 92 A1            [24] 1844 	mov	_P2_1,c
                           000148  1845 	C$main.c$186$1$34 ==.
                                   1846 ;	Z:\MICAP\PWM\main.c:186: RS = cd;
      0001CF A2 02            [12] 1847 	mov	c,_esc_glcd_PARM_2
      0001D1 92 A2            [24] 1848 	mov	_P2_2,c
                           00014C  1849 	C$main.c$187$1$34 ==.
                                   1850 ;	Z:\MICAP\PWM\main.c:187: SFRPAGE = CONFIG_PAGE;
      0001D3 75 84 0F         [24] 1851 	mov	_SFRPAGE,#0x0f
                           00014F  1852 	C$main.c$188$1$34 ==.
                                   1853 ;	Z:\MICAP\PWM\main.c:188: DB = byte;
      0001D6 8F C8            [24] 1854 	mov	_P4,r7
                           000151  1855 	C$main.c$189$1$34 ==.
                                   1856 ;	Z:\MICAP\PWM\main.c:189: SFRPAGE = LEGACY_PAGE;
      0001D8 75 84 00         [24] 1857 	mov	_SFRPAGE,#0x00
                           000154  1858 	C$main.c$190$1$34 ==.
                                   1859 ;	Z:\MICAP\PWM\main.c:190: NOP4();
      0001DB 00               [12] 1860 	NOP	
      0001DC 00               [12] 1861 	NOP	
      0001DD 00               [12] 1862 	NOP	
      0001DE 00               [12] 1863 	NOP	
                           000158  1864 	C$main.c$191$1$34 ==.
                                   1865 ;	Z:\MICAP\PWM\main.c:191: E = 1;
      0001DF D2 A4            [12] 1866 	setb	_P2_4
                           00015A  1867 	C$main.c$192$1$34 ==.
                                   1868 ;	Z:\MICAP\PWM\main.c:192: NOP12();
      0001E1 00               [12] 1869 	NOP	
      0001E2 00               [12] 1870 	NOP	
      0001E3 00               [12] 1871 	NOP	
      0001E4 00               [12] 1872 	NOP	
      0001E5 00               [12] 1873 	NOP	
      0001E6 00               [12] 1874 	NOP	
      0001E7 00               [12] 1875 	NOP	
      0001E8 00               [12] 1876 	NOP	
      0001E9 00               [12] 1877 	NOP	
      0001EA 00               [12] 1878 	NOP	
      0001EB 00               [12] 1879 	NOP	
      0001EC 00               [12] 1880 	NOP	
                           000166  1881 	C$main.c$193$1$34 ==.
                                   1882 ;	Z:\MICAP\PWM\main.c:193: E = 0;	
      0001ED C2 A4            [12] 1883 	clr	_P2_4
                           000168  1884 	C$main.c$194$1$34 ==.
                                   1885 ;	Z:\MICAP\PWM\main.c:194: SFRPAGE = CONFIG_PAGE;
      0001EF 75 84 0F         [24] 1886 	mov	_SFRPAGE,#0x0f
                           00016B  1887 	C$main.c$195$1$34 ==.
                                   1888 ;	Z:\MICAP\PWM\main.c:195: DB = 0xFF;
      0001F2 75 C8 FF         [24] 1889 	mov	_P4,#0xff
                           00016E  1890 	C$main.c$196$1$34 ==.
                                   1891 ;	Z:\MICAP\PWM\main.c:196: SFRPAGE = LEGACY_PAGE;
      0001F5 75 84 00         [24] 1892 	mov	_SFRPAGE,#0x00
                           000171  1893 	C$main.c$197$1$34 ==.
                                   1894 ;	Z:\MICAP\PWM\main.c:197: RW = 1;
      0001F8 D2 A3            [12] 1895 	setb	_P2_3
                           000173  1896 	C$main.c$198$1$34 ==.
                                   1897 ;	Z:\MICAP\PWM\main.c:198: NOP12();
      0001FA 00               [12] 1898 	NOP	
      0001FB 00               [12] 1899 	NOP	
      0001FC 00               [12] 1900 	NOP	
      0001FD 00               [12] 1901 	NOP	
      0001FE 00               [12] 1902 	NOP	
      0001FF 00               [12] 1903 	NOP	
      000200 00               [12] 1904 	NOP	
      000201 00               [12] 1905 	NOP	
      000202 00               [12] 1906 	NOP	
      000203 00               [12] 1907 	NOP	
      000204 00               [12] 1908 	NOP	
      000205 00               [12] 1909 	NOP	
                           00017F  1910 	C$main.c$199$1$34 ==.
                           00017F  1911 	XG$esc_glcd$0$0 ==.
      000206 22               [24] 1912 	ret
                                   1913 ;------------------------------------------------------------
                                   1914 ;Allocation info for local variables in function 'Ini_glcd'
                                   1915 ;------------------------------------------------------------
                           000180  1916 	G$Ini_glcd$0$0 ==.
                           000180  1917 	C$main.c$201$1$34 ==.
                                   1918 ;	Z:\MICAP\PWM\main.c:201: void Ini_glcd(void)
                                   1919 ;	-----------------------------------------
                                   1920 ;	 function Ini_glcd
                                   1921 ;	-----------------------------------------
      000207                       1922 _Ini_glcd:
                           000180  1923 	C$main.c$203$1$36 ==.
                                   1924 ;	Z:\MICAP\PWM\main.c:203: E = 0;
      000207 C2 A4            [12] 1925 	clr	_P2_4
                           000182  1926 	C$main.c$204$1$36 ==.
                                   1927 ;	Z:\MICAP\PWM\main.c:204: RST = 1;
      000209 D2 A5            [12] 1928 	setb	_P2_5
                           000184  1929 	C$main.c$205$1$36 ==.
                                   1930 ;	Z:\MICAP\PWM\main.c:205: CS1 = 1;
      00020B D2 A0            [12] 1931 	setb	_P2_0
                           000186  1932 	C$main.c$206$1$36 ==.
                                   1933 ;	Z:\MICAP\PWM\main.c:206: CS2 = 1;
      00020D D2 A1            [12] 1934 	setb	_P2_1
                           000188  1935 	C$main.c$208$1$36 ==.
                                   1936 ;	Z:\MICAP\PWM\main.c:208: SFRPAGE = CONFIG_PAGE;
      00020F 75 84 0F         [24] 1937 	mov	_SFRPAGE,#0x0f
                           00018B  1938 	C$main.c$209$1$36 ==.
                                   1939 ;	Z:\MICAP\PWM\main.c:209: DB = 0xFF;
      000212 75 C8 FF         [24] 1940 	mov	_P4,#0xff
                           00018E  1941 	C$main.c$210$1$36 ==.
                                   1942 ;	Z:\MICAP\PWM\main.c:210: SFRPAGE = LEGACY_PAGE;
      000215 75 84 00         [24] 1943 	mov	_SFRPAGE,#0x00
                           000191  1944 	C$main.c$212$1$36 ==.
                                   1945 ;	Z:\MICAP\PWM\main.c:212: while(le_glcd(CO, ESQ) & 0x10);
      000218                       1946 00101$:
      000218 C2 00            [12] 1947 	clr	_le_glcd_PARM_1
      00021A C2 01            [12] 1948 	clr	_le_glcd_PARM_2
      00021C 12 01 77         [24] 1949 	lcall	_le_glcd
      00021F E5 82            [12] 1950 	mov	a,dpl
      000221 20 E4 F4         [24] 1951 	jb	acc.4,00101$
                           00019D  1952 	C$main.c$213$1$36 ==.
                                   1953 ;	Z:\MICAP\PWM\main.c:213: while(le_glcd(CO, DIR) & 0x10);
      000224                       1954 00104$:
      000224 C2 00            [12] 1955 	clr	_le_glcd_PARM_1
      000226 D2 01            [12] 1956 	setb	_le_glcd_PARM_2
      000228 12 01 77         [24] 1957 	lcall	_le_glcd
      00022B E5 82            [12] 1958 	mov	a,dpl
      00022D 20 E4 F4         [24] 1959 	jb	acc.4,00104$
                           0001A9  1960 	C$main.c$215$1$36 ==.
                                   1961 ;	Z:\MICAP\PWM\main.c:215: esc_glcd(0x3F, CO, ESQ);
      000230 C2 02            [12] 1962 	clr	_esc_glcd_PARM_2
      000232 C2 03            [12] 1963 	clr	_esc_glcd_PARM_3
      000234 75 82 3F         [24] 1964 	mov	dpl,#0x3f
      000237 12 01 B0         [24] 1965 	lcall	_esc_glcd
                           0001B3  1966 	C$main.c$216$1$36 ==.
                                   1967 ;	Z:\MICAP\PWM\main.c:216: esc_glcd(0x3F, CO, DIR);
      00023A C2 02            [12] 1968 	clr	_esc_glcd_PARM_2
      00023C D2 03            [12] 1969 	setb	_esc_glcd_PARM_3
      00023E 75 82 3F         [24] 1970 	mov	dpl,#0x3f
      000241 12 01 B0         [24] 1971 	lcall	_esc_glcd
                           0001BD  1972 	C$main.c$217$1$36 ==.
                                   1973 ;	Z:\MICAP\PWM\main.c:217: esc_glcd(0x40, CO, ESQ);
      000244 C2 02            [12] 1974 	clr	_esc_glcd_PARM_2
      000246 C2 03            [12] 1975 	clr	_esc_glcd_PARM_3
      000248 75 82 40         [24] 1976 	mov	dpl,#0x40
      00024B 12 01 B0         [24] 1977 	lcall	_esc_glcd
                           0001C7  1978 	C$main.c$218$1$36 ==.
                                   1979 ;	Z:\MICAP\PWM\main.c:218: esc_glcd(0xB8, CO, ESQ);
      00024E C2 02            [12] 1980 	clr	_esc_glcd_PARM_2
      000250 C2 03            [12] 1981 	clr	_esc_glcd_PARM_3
      000252 75 82 B8         [24] 1982 	mov	dpl,#0xb8
      000255 12 01 B0         [24] 1983 	lcall	_esc_glcd
                           0001D1  1984 	C$main.c$219$1$36 ==.
                                   1985 ;	Z:\MICAP\PWM\main.c:219: esc_glcd(0xC0, CO, ESQ);
      000258 C2 02            [12] 1986 	clr	_esc_glcd_PARM_2
      00025A C2 03            [12] 1987 	clr	_esc_glcd_PARM_3
      00025C 75 82 C0         [24] 1988 	mov	dpl,#0xc0
      00025F 12 01 B0         [24] 1989 	lcall	_esc_glcd
                           0001DB  1990 	C$main.c$220$1$36 ==.
                                   1991 ;	Z:\MICAP\PWM\main.c:220: esc_glcd(0x40, CO, DIR);
      000262 C2 02            [12] 1992 	clr	_esc_glcd_PARM_2
      000264 D2 03            [12] 1993 	setb	_esc_glcd_PARM_3
      000266 75 82 40         [24] 1994 	mov	dpl,#0x40
      000269 12 01 B0         [24] 1995 	lcall	_esc_glcd
                           0001E5  1996 	C$main.c$221$1$36 ==.
                                   1997 ;	Z:\MICAP\PWM\main.c:221: esc_glcd(0xB8, CO, DIR);
      00026C C2 02            [12] 1998 	clr	_esc_glcd_PARM_2
      00026E D2 03            [12] 1999 	setb	_esc_glcd_PARM_3
      000270 75 82 B8         [24] 2000 	mov	dpl,#0xb8
      000273 12 01 B0         [24] 2001 	lcall	_esc_glcd
                           0001EF  2002 	C$main.c$222$1$36 ==.
                                   2003 ;	Z:\MICAP\PWM\main.c:222: esc_glcd(0xC0, CO, DIR);
      000276 C2 02            [12] 2004 	clr	_esc_glcd_PARM_2
      000278 D2 03            [12] 2005 	setb	_esc_glcd_PARM_3
      00027A 75 82 C0         [24] 2006 	mov	dpl,#0xc0
      00027D 12 01 B0         [24] 2007 	lcall	_esc_glcd
                           0001F9  2008 	C$main.c$223$1$36 ==.
                           0001F9  2009 	XG$Ini_glcd$0$0 ==.
      000280 22               [24] 2010 	ret
                                   2011 ;------------------------------------------------------------
                                   2012 ;Allocation info for local variables in function 'conf_Y'
                                   2013 ;------------------------------------------------------------
                                   2014 ;y                         Allocated to registers r7 
                                   2015 ;------------------------------------------------------------
                           0001FA  2016 	G$conf_Y$0$0 ==.
                           0001FA  2017 	C$main.c$225$1$36 ==.
                                   2018 ;	Z:\MICAP\PWM\main.c:225: void conf_Y(unsigned char y, __bit cs)
                                   2019 ;	-----------------------------------------
                                   2020 ;	 function conf_Y
                                   2021 ;	-----------------------------------------
      000281                       2022 _conf_Y:
      000281 AF 82            [24] 2023 	mov	r7,dpl
                           0001FC  2024 	C$main.c$227$1$38 ==.
                                   2025 ;	Z:\MICAP\PWM\main.c:227: y &= 0x3F;
      000283 53 07 3F         [24] 2026 	anl	ar7,#0x3f
                           0001FF  2027 	C$main.c$228$1$38 ==.
                                   2028 ;	Z:\MICAP\PWM\main.c:228: esc_glcd(0x40 | y, CO, cs);
      000286 74 40            [12] 2029 	mov	a,#0x40
      000288 4F               [12] 2030 	orl	a,r7
      000289 F5 82            [12] 2031 	mov	dpl,a
      00028B C2 02            [12] 2032 	clr	_esc_glcd_PARM_2
      00028D A2 04            [12] 2033 	mov	c,_conf_Y_PARM_2
      00028F 92 03            [24] 2034 	mov	_esc_glcd_PARM_3,c
      000291 12 01 B0         [24] 2035 	lcall	_esc_glcd
                           00020D  2036 	C$main.c$229$1$38 ==.
                           00020D  2037 	XG$conf_Y$0$0 ==.
      000294 22               [24] 2038 	ret
                                   2039 ;------------------------------------------------------------
                                   2040 ;Allocation info for local variables in function 'conf_pag'
                                   2041 ;------------------------------------------------------------
                                   2042 ;pag                       Allocated to registers r7 
                                   2043 ;------------------------------------------------------------
                           00020E  2044 	G$conf_pag$0$0 ==.
                           00020E  2045 	C$main.c$231$1$38 ==.
                                   2046 ;	Z:\MICAP\PWM\main.c:231: void conf_pag(unsigned char pag, __bit cs)
                                   2047 ;	-----------------------------------------
                                   2048 ;	 function conf_pag
                                   2049 ;	-----------------------------------------
      000295                       2050 _conf_pag:
      000295 AF 82            [24] 2051 	mov	r7,dpl
                           000210  2052 	C$main.c$233$1$40 ==.
                                   2053 ;	Z:\MICAP\PWM\main.c:233: pag &= 0x07;
      000297 53 07 07         [24] 2054 	anl	ar7,#0x07
                           000213  2055 	C$main.c$234$1$40 ==.
                                   2056 ;	Z:\MICAP\PWM\main.c:234: esc_glcd(0xB8 | pag, CO, cs);
      00029A 74 B8            [12] 2057 	mov	a,#0xb8
      00029C 4F               [12] 2058 	orl	a,r7
      00029D F5 82            [12] 2059 	mov	dpl,a
      00029F C2 02            [12] 2060 	clr	_esc_glcd_PARM_2
      0002A1 A2 05            [12] 2061 	mov	c,_conf_pag_PARM_2
      0002A3 92 03            [24] 2062 	mov	_esc_glcd_PARM_3,c
      0002A5 12 01 B0         [24] 2063 	lcall	_esc_glcd
                           000221  2064 	C$main.c$235$1$40 ==.
                           000221  2065 	XG$conf_pag$0$0 ==.
      0002A8 22               [24] 2066 	ret
                                   2067 ;------------------------------------------------------------
                                   2068 ;Allocation info for local variables in function 'limpa_glcd'
                                   2069 ;------------------------------------------------------------
                                   2070 ;i                         Allocated to registers r7 
                                   2071 ;j                         Allocated to registers r6 
                                   2072 ;------------------------------------------------------------
                           000222  2073 	G$limpa_glcd$0$0 ==.
                           000222  2074 	C$main.c$237$1$40 ==.
                                   2075 ;	Z:\MICAP\PWM\main.c:237: void limpa_glcd(__bit cs)
                                   2076 ;	-----------------------------------------
                                   2077 ;	 function limpa_glcd
                                   2078 ;	-----------------------------------------
      0002A9                       2079 _limpa_glcd:
                           000222  2080 	C$main.c$241$1$42 ==.
                                   2081 ;	Z:\MICAP\PWM\main.c:241: for(i = 0; i < 8; i++)
      0002A9 7F 00            [12] 2082 	mov	r7,#0x00
      0002AB                       2083 00105$:
                           000224  2084 	C$main.c$243$2$43 ==.
                                   2085 ;	Z:\MICAP\PWM\main.c:243: conf_pag(i, cs);
      0002AB A2 06            [12] 2086 	mov	c,_limpa_glcd_PARM_1
      0002AD 92 05            [24] 2087 	mov	_conf_pag_PARM_2,c
      0002AF 8F 82            [24] 2088 	mov	dpl,r7
      0002B1 C0 07            [24] 2089 	push	ar7
      0002B3 12 02 95         [24] 2090 	lcall	_conf_pag
                           00022F  2091 	C$main.c$244$2$43 ==.
                                   2092 ;	Z:\MICAP\PWM\main.c:244: conf_Y(0, cs);
      0002B6 A2 06            [12] 2093 	mov	c,_limpa_glcd_PARM_1
      0002B8 92 04            [24] 2094 	mov	_conf_Y_PARM_2,c
      0002BA 75 82 00         [24] 2095 	mov	dpl,#0x00
      0002BD 12 02 81         [24] 2096 	lcall	_conf_Y
      0002C0 D0 07            [24] 2097 	pop	ar7
                           00023B  2098 	C$main.c$245$1$42 ==.
                                   2099 ;	Z:\MICAP\PWM\main.c:245: for(j = 0; j < 64; j++)
      0002C2 7E 00            [12] 2100 	mov	r6,#0x00
      0002C4                       2101 00103$:
                           00023D  2102 	C$main.c$246$2$43 ==.
                                   2103 ;	Z:\MICAP\PWM\main.c:246: esc_glcd(0x00, DA, cs);
      0002C4 D2 02            [12] 2104 	setb	_esc_glcd_PARM_2
      0002C6 A2 06            [12] 2105 	mov	c,_limpa_glcd_PARM_1
      0002C8 92 03            [24] 2106 	mov	_esc_glcd_PARM_3,c
      0002CA 75 82 00         [24] 2107 	mov	dpl,#0x00
      0002CD C0 07            [24] 2108 	push	ar7
      0002CF C0 06            [24] 2109 	push	ar6
      0002D1 12 01 B0         [24] 2110 	lcall	_esc_glcd
      0002D4 D0 06            [24] 2111 	pop	ar6
      0002D6 D0 07            [24] 2112 	pop	ar7
                           000251  2113 	C$main.c$245$2$43 ==.
                                   2114 ;	Z:\MICAP\PWM\main.c:245: for(j = 0; j < 64; j++)
      0002D8 0E               [12] 2115 	inc	r6
      0002D9 BE 40 00         [24] 2116 	cjne	r6,#0x40,00120$
      0002DC                       2117 00120$:
      0002DC 40 E6            [24] 2118 	jc	00103$
                           000257  2119 	C$main.c$241$1$42 ==.
                                   2120 ;	Z:\MICAP\PWM\main.c:241: for(i = 0; i < 8; i++)
      0002DE 0F               [12] 2121 	inc	r7
      0002DF BF 08 00         [24] 2122 	cjne	r7,#0x08,00122$
      0002E2                       2123 00122$:
      0002E2 40 C7            [24] 2124 	jc	00105$
                           00025D  2125 	C$main.c$248$1$42 ==.
                           00025D  2126 	XG$limpa_glcd$0$0 ==.
      0002E4 22               [24] 2127 	ret
                                   2128 ;------------------------------------------------------------
                                   2129 ;Allocation info for local variables in function 'putchar'
                                   2130 ;------------------------------------------------------------
                                   2131 ;c                         Allocated to registers 
                                   2132 ;------------------------------------------------------------
                           00025E  2133 	G$putchar$0$0 ==.
                           00025E  2134 	C$main.c$250$1$42 ==.
                                   2135 ;	Z:\MICAP\PWM\main.c:250: void putchar(char c)
                                   2136 ;	-----------------------------------------
                                   2137 ;	 function putchar
                                   2138 ;	-----------------------------------------
      0002E5                       2139 _putchar:
      0002E5 85 82 99         [24] 2140 	mov	_SBUF0,dpl
                           000261  2141 	C$main.c$253$1$45 ==.
                                   2142 ;	Z:\MICAP\PWM\main.c:253: while(TI0 == 0);
      0002E8                       2143 00101$:
                           000261  2144 	C$main.c$254$1$45 ==.
                                   2145 ;	Z:\MICAP\PWM\main.c:254: TI0 = 0;
      0002E8 10 99 02         [24] 2146 	jbc	_TI0,00112$
      0002EB 80 FB            [24] 2147 	sjmp	00101$
      0002ED                       2148 00112$:
                           000266  2149 	C$main.c$255$1$45 ==.
                           000266  2150 	XG$putchar$0$0 ==.
      0002ED 22               [24] 2151 	ret
                                   2152 ;------------------------------------------------------------
                                   2153 ;Allocation info for local variables in function 'int_serial'
                                   2154 ;------------------------------------------------------------
                           000267  2155 	G$int_serial$0$0 ==.
                           000267  2156 	C$main.c$259$1$45 ==.
                                   2157 ;	Z:\MICAP\PWM\main.c:259: void int_serial(void) __interrupt 4{
                                   2158 ;	-----------------------------------------
                                   2159 ;	 function int_serial
                                   2160 ;	-----------------------------------------
      0002EE                       2161 _int_serial:
                           000267  2162 	C$main.c$260$1$47 ==.
                                   2163 ;	Z:\MICAP\PWM\main.c:260: if(RI0)	{
      0002EE 30 98 04         [24] 2164 	jnb	_RI0,00103$
                           00026A  2165 	C$main.c$261$2$48 ==.
                                   2166 ;	Z:\MICAP\PWM\main.c:261: fbr = 1;
      0002F1 D2 07            [12] 2167 	setb	_fbr
                           00026C  2168 	C$main.c$262$2$48 ==.
                                   2169 ;	Z:\MICAP\PWM\main.c:262: RI0 = 0;
      0002F3 C2 98            [12] 2170 	clr	_RI0
      0002F5                       2171 00103$:
                           00026E  2172 	C$main.c$264$1$47 ==.
                           00026E  2173 	XG$int_serial$0$0 ==.
      0002F5 32               [24] 2174 	reti
                                   2175 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2176 ;	eliminated unneeded push/pop psw
                                   2177 ;	eliminated unneeded push/pop dpl
                                   2178 ;	eliminated unneeded push/pop dph
                                   2179 ;	eliminated unneeded push/pop b
                                   2180 ;	eliminated unneeded push/pop acc
                                   2181 ;------------------------------------------------------------
                                   2182 ;Allocation info for local variables in function 'main'
                                   2183 ;------------------------------------------------------------
                           00026F  2184 	G$main$0$0 ==.
                           00026F  2185 	C$main.c$266$1$47 ==.
                                   2186 ;	Z:\MICAP\PWM\main.c:266: void main()
                                   2187 ;	-----------------------------------------
                                   2188 ;	 function main
                                   2189 ;	-----------------------------------------
      0002F6                       2190 _main:
                           00026F  2191 	C$main.c$268$1$49 ==.
                                   2192 ;	Z:\MICAP\PWM\main.c:268: Init_Device();
      0002F6 12 01 09         [24] 2193 	lcall	_Init_Device
                           000272  2194 	C$main.c$269$1$49 ==.
                                   2195 ;	Z:\MICAP\PWM\main.c:269: SFRPAGE = LEGACY_PAGE;
      0002F9 75 84 00         [24] 2196 	mov	_SFRPAGE,#0x00
                           000275  2197 	C$main.c$270$1$49 ==.
                                   2198 ;	Z:\MICAP\PWM\main.c:270: SMB0CN &= ~0x40; // Desabilita SMBus
      0002FC 53 C0 BF         [24] 2199 	anl	_SMB0CN,#0xbf
                           000278  2200 	C$main.c$271$1$49 ==.
                                   2201 ;	Z:\MICAP\PWM\main.c:271: SMB0CN |= 0x40; // Habilita SMBus
      0002FF 43 C0 40         [24] 2202 	orl	_SMB0CN,#0x40
                           00027B  2203 	C$main.c$278$1$49 ==.
                                   2204 ;	Z:\MICAP\PWM\main.c:278: while(1){
      000302                       2205 00114$:
                           00027B  2206 	C$main.c$279$2$50 ==.
                                   2207 ;	Z:\MICAP\PWM\main.c:279: if(fbr){
                           00027B  2208 	C$main.c$280$3$51 ==.
                                   2209 ;	Z:\MICAP\PWM\main.c:280: fbr = 0;
      000302 10 07 02         [24] 2210 	jbc	_fbr,00142$
      000305 80 FB            [24] 2211 	sjmp	00114$
      000307                       2212 00142$:
                           000280  2213 	C$main.c$281$3$51 ==.
                                   2214 ;	Z:\MICAP\PWM\main.c:281: switch(SBUF0){
      000307 AF 99            [24] 2215 	mov	r7,_SBUF0
      000309 BF 61 02         [24] 2216 	cjne	r7,#0x61,00143$
      00030C 80 0F            [24] 2217 	sjmp	00101$
      00030E                       2218 00143$:
      00030E BF 64 02         [24] 2219 	cjne	r7,#0x64,00144$
      000311 80 14            [24] 2220 	sjmp	00104$
      000313                       2221 00144$:
      000313 BF 69 02         [24] 2222 	cjne	r7,#0x69,00145$
      000316 80 17            [24] 2223 	sjmp	00107$
      000318                       2224 00145$:
                           000291  2225 	C$main.c$283$4$52 ==.
                                   2226 ;	Z:\MICAP\PWM\main.c:283: case 'a':
      000318 BF 6D 66         [24] 2227 	cjne	r7,#0x6d,00109$
      00031B 80 16            [24] 2228 	sjmp	00108$
      00031D                       2229 00101$:
                           000296  2230 	C$main.c$284$4$52 ==.
                                   2231 ;	Z:\MICAP\PWM\main.c:284: if(PCA0CPH0<255)
      00031D 74 01            [12] 2232 	mov	a,#0x100 - 0xff
      00031F 25 FC            [12] 2233 	add	a,_PCA0CPH0
      000321 40 DF            [24] 2234 	jc	00114$
                           00029C  2235 	C$main.c$285$4$52 ==.
                                   2236 ;	Z:\MICAP\PWM\main.c:285: PCA0CPH0--;
      000323 15 FC            [12] 2237 	dec	_PCA0CPH0
                           00029E  2238 	C$main.c$286$4$52 ==.
                                   2239 ;	Z:\MICAP\PWM\main.c:286: break;
                           00029E  2240 	C$main.c$288$4$52 ==.
                                   2241 ;	Z:\MICAP\PWM\main.c:288: case 'd':
      000325 80 DB            [24] 2242 	sjmp	00114$
      000327                       2243 00104$:
                           0002A0  2244 	C$main.c$289$4$52 ==.
                                   2245 ;	Z:\MICAP\PWM\main.c:289: if(PCA0CPH0>0)
      000327 E5 FC            [12] 2246 	mov	a,_PCA0CPH0
      000329 60 D7            [24] 2247 	jz	00114$
                           0002A4  2248 	C$main.c$290$4$52 ==.
                                   2249 ;	Z:\MICAP\PWM\main.c:290: PCA0CPH0++;
      00032B 05 FC            [12] 2250 	inc	_PCA0CPH0
                           0002A6  2251 	C$main.c$291$4$52 ==.
                                   2252 ;	Z:\MICAP\PWM\main.c:291: break;
                           0002A6  2253 	C$main.c$293$4$52 ==.
                                   2254 ;	Z:\MICAP\PWM\main.c:293: case 'i':
      00032D 80 D3            [24] 2255 	sjmp	00114$
      00032F                       2256 00107$:
                           0002A8  2257 	C$main.c$294$4$52 ==.
                                   2258 ;	Z:\MICAP\PWM\main.c:294: P0_7 = !P0_7;
      00032F B2 87            [12] 2259 	cpl	_P0_7
                           0002AA  2260 	C$main.c$295$4$52 ==.
                                   2261 ;	Z:\MICAP\PWM\main.c:295: break;
                           0002AA  2262 	C$main.c$297$4$52 ==.
                                   2263 ;	Z:\MICAP\PWM\main.c:297: case 'm':
      000331 80 CF            [24] 2264 	sjmp	00114$
      000333                       2265 00108$:
                           0002AC  2266 	C$main.c$298$4$52 ==.
                                   2267 ;	Z:\MICAP\PWM\main.c:298: printf_fast_f("\n\n\n");
      000333 74 58            [12] 2268 	mov	a,#___str_0
      000335 C0 E0            [24] 2269 	push	acc
      000337 74 0A            [12] 2270 	mov	a,#(___str_0 >> 8)
      000339 C0 E0            [24] 2271 	push	acc
      00033B 12 03 94         [24] 2272 	lcall	_printf_fast_f
      00033E 15 81            [12] 2273 	dec	sp
      000340 15 81            [12] 2274 	dec	sp
                           0002BB  2275 	C$main.c$299$4$52 ==.
                                   2276 ;	Z:\MICAP\PWM\main.c:299: printf_fast_f("MENU\n");
      000342 74 5C            [12] 2277 	mov	a,#___str_1
      000344 C0 E0            [24] 2278 	push	acc
      000346 74 0A            [12] 2279 	mov	a,#(___str_1 >> 8)
      000348 C0 E0            [24] 2280 	push	acc
      00034A 12 03 94         [24] 2281 	lcall	_printf_fast_f
      00034D 15 81            [12] 2282 	dec	sp
      00034F 15 81            [12] 2283 	dec	sp
                           0002CA  2284 	C$main.c$300$4$52 ==.
                                   2285 ;	Z:\MICAP\PWM\main.c:300: printf_fast_f("i - Inverte P0_7.\n");
      000351 74 62            [12] 2286 	mov	a,#___str_2
      000353 C0 E0            [24] 2287 	push	acc
      000355 74 0A            [12] 2288 	mov	a,#(___str_2 >> 8)
      000357 C0 E0            [24] 2289 	push	acc
      000359 12 03 94         [24] 2290 	lcall	_printf_fast_f
      00035C 15 81            [12] 2291 	dec	sp
      00035E 15 81            [12] 2292 	dec	sp
                           0002D9  2293 	C$main.c$301$4$52 ==.
                                   2294 ;	Z:\MICAP\PWM\main.c:301: printf_fast_f("a - Aumenta RPM do motor.\n");
      000360 74 75            [12] 2295 	mov	a,#___str_3
      000362 C0 E0            [24] 2296 	push	acc
      000364 74 0A            [12] 2297 	mov	a,#(___str_3 >> 8)
      000366 C0 E0            [24] 2298 	push	acc
      000368 12 03 94         [24] 2299 	lcall	_printf_fast_f
      00036B 15 81            [12] 2300 	dec	sp
      00036D 15 81            [12] 2301 	dec	sp
                           0002E8  2302 	C$main.c$302$4$52 ==.
                                   2303 ;	Z:\MICAP\PWM\main.c:302: printf_fast_f("d - Diminui RPM do motor.\n");
      00036F 74 90            [12] 2304 	mov	a,#___str_4
      000371 C0 E0            [24] 2305 	push	acc
      000373 74 0A            [12] 2306 	mov	a,#(___str_4 >> 8)
      000375 C0 E0            [24] 2307 	push	acc
      000377 12 03 94         [24] 2308 	lcall	_printf_fast_f
      00037A 15 81            [12] 2309 	dec	sp
      00037C 15 81            [12] 2310 	dec	sp
                           0002F7  2311 	C$main.c$303$4$52 ==.
                                   2312 ;	Z:\MICAP\PWM\main.c:303: break;
      00037E 02 03 02         [24] 2313 	ljmp	00114$
                           0002FA  2314 	C$main.c$305$4$52 ==.
                                   2315 ;	Z:\MICAP\PWM\main.c:305: default:
      000381                       2316 00109$:
                           0002FA  2317 	C$main.c$306$4$52 ==.
                                   2318 ;	Z:\MICAP\PWM\main.c:306: printf_fast_f("default\n");
      000381 74 AB            [12] 2319 	mov	a,#___str_5
      000383 C0 E0            [24] 2320 	push	acc
      000385 74 0A            [12] 2321 	mov	a,#(___str_5 >> 8)
      000387 C0 E0            [24] 2322 	push	acc
      000389 12 03 94         [24] 2323 	lcall	_printf_fast_f
      00038C 15 81            [12] 2324 	dec	sp
      00038E 15 81            [12] 2325 	dec	sp
                           000309  2326 	C$main.c$308$1$49 ==.
                                   2327 ;	Z:\MICAP\PWM\main.c:308: }
      000390 02 03 02         [24] 2328 	ljmp	00114$
                           00030C  2329 	C$main.c$311$1$49 ==.
                           00030C  2330 	XG$main$0$0 ==.
      000393 22               [24] 2331 	ret
                                   2332 	.area CSEG    (CODE)
                                   2333 	.area CONST   (CODE)
                           000000  2334 G$fonte$0$0 == .
      000878                       2335 _fonte:
      000878 00                    2336 	.db #0x00	; 0
      000879 00                    2337 	.db #0x00	; 0
      00087A 00                    2338 	.db #0x00	; 0
      00087B 00                    2339 	.db #0x00	; 0
      00087C 00                    2340 	.db #0x00	; 0
      00087D 00                    2341 	.db #0x00	; 0
      00087E 00                    2342 	.db #0x00	; 0
      00087F 5F                    2343 	.db #0x5f	; 95
      000880 00                    2344 	.db #0x00	; 0
      000881 00                    2345 	.db #0x00	; 0
      000882 00                    2346 	.db #0x00	; 0
      000883 07                    2347 	.db #0x07	; 7
      000884 00                    2348 	.db #0x00	; 0
      000885 07                    2349 	.db #0x07	; 7
      000886 00                    2350 	.db #0x00	; 0
      000887 14                    2351 	.db #0x14	; 20
      000888 7F                    2352 	.db #0x7f	; 127
      000889 14                    2353 	.db #0x14	; 20
      00088A 7F                    2354 	.db #0x7f	; 127
      00088B 14                    2355 	.db #0x14	; 20
      00088C 24                    2356 	.db #0x24	; 36
      00088D 2A                    2357 	.db #0x2a	; 42
      00088E 7F                    2358 	.db #0x7f	; 127
      00088F 2A                    2359 	.db #0x2a	; 42
      000890 12                    2360 	.db #0x12	; 18
      000891 23                    2361 	.db #0x23	; 35
      000892 13                    2362 	.db #0x13	; 19
      000893 08                    2363 	.db #0x08	; 8
      000894 64                    2364 	.db #0x64	; 100	'd'
      000895 62                    2365 	.db #0x62	; 98	'b'
      000896 36                    2366 	.db #0x36	; 54	'6'
      000897 49                    2367 	.db #0x49	; 73	'I'
      000898 55                    2368 	.db #0x55	; 85	'U'
      000899 22                    2369 	.db #0x22	; 34
      00089A 50                    2370 	.db #0x50	; 80	'P'
      00089B 00                    2371 	.db #0x00	; 0
      00089C 05                    2372 	.db #0x05	; 5
      00089D 03                    2373 	.db #0x03	; 3
      00089E 00                    2374 	.db #0x00	; 0
      00089F 00                    2375 	.db #0x00	; 0
      0008A0 00                    2376 	.db #0x00	; 0
      0008A1 1C                    2377 	.db #0x1c	; 28
      0008A2 22                    2378 	.db #0x22	; 34
      0008A3 41                    2379 	.db #0x41	; 65	'A'
      0008A4 00                    2380 	.db #0x00	; 0
      0008A5 00                    2381 	.db #0x00	; 0
      0008A6 41                    2382 	.db #0x41	; 65	'A'
      0008A7 22                    2383 	.db #0x22	; 34
      0008A8 1C                    2384 	.db #0x1c	; 28
      0008A9 00                    2385 	.db #0x00	; 0
      0008AA 08                    2386 	.db #0x08	; 8
      0008AB 2A                    2387 	.db #0x2a	; 42
      0008AC 1C                    2388 	.db #0x1c	; 28
      0008AD 2A                    2389 	.db #0x2a	; 42
      0008AE 08                    2390 	.db #0x08	; 8
      0008AF 08                    2391 	.db #0x08	; 8
      0008B0 08                    2392 	.db #0x08	; 8
      0008B1 3E                    2393 	.db #0x3e	; 62
      0008B2 08                    2394 	.db #0x08	; 8
      0008B3 08                    2395 	.db #0x08	; 8
      0008B4 00                    2396 	.db #0x00	; 0
      0008B5 50                    2397 	.db #0x50	; 80	'P'
      0008B6 30                    2398 	.db #0x30	; 48	'0'
      0008B7 00                    2399 	.db #0x00	; 0
      0008B8 00                    2400 	.db #0x00	; 0
      0008B9 08                    2401 	.db #0x08	; 8
      0008BA 08                    2402 	.db #0x08	; 8
      0008BB 08                    2403 	.db #0x08	; 8
      0008BC 08                    2404 	.db #0x08	; 8
      0008BD 08                    2405 	.db #0x08	; 8
      0008BE 00                    2406 	.db #0x00	; 0
      0008BF 30                    2407 	.db #0x30	; 48	'0'
      0008C0 30                    2408 	.db #0x30	; 48	'0'
      0008C1 00                    2409 	.db #0x00	; 0
      0008C2 00                    2410 	.db #0x00	; 0
      0008C3 20                    2411 	.db #0x20	; 32
      0008C4 10                    2412 	.db #0x10	; 16
      0008C5 08                    2413 	.db #0x08	; 8
      0008C6 04                    2414 	.db #0x04	; 4
      0008C7 02                    2415 	.db #0x02	; 2
      0008C8 3E                    2416 	.db #0x3e	; 62
      0008C9 51                    2417 	.db #0x51	; 81	'Q'
      0008CA 49                    2418 	.db #0x49	; 73	'I'
      0008CB 45                    2419 	.db #0x45	; 69	'E'
      0008CC 3E                    2420 	.db #0x3e	; 62
      0008CD 00                    2421 	.db #0x00	; 0
      0008CE 42                    2422 	.db #0x42	; 66	'B'
      0008CF 7F                    2423 	.db #0x7f	; 127
      0008D0 40                    2424 	.db #0x40	; 64
      0008D1 00                    2425 	.db #0x00	; 0
      0008D2 42                    2426 	.db #0x42	; 66	'B'
      0008D3 61                    2427 	.db #0x61	; 97	'a'
      0008D4 51                    2428 	.db #0x51	; 81	'Q'
      0008D5 49                    2429 	.db #0x49	; 73	'I'
      0008D6 46                    2430 	.db #0x46	; 70	'F'
      0008D7 21                    2431 	.db #0x21	; 33
      0008D8 41                    2432 	.db #0x41	; 65	'A'
      0008D9 45                    2433 	.db #0x45	; 69	'E'
      0008DA 4B                    2434 	.db #0x4b	; 75	'K'
      0008DB 31                    2435 	.db #0x31	; 49	'1'
      0008DC 18                    2436 	.db #0x18	; 24
      0008DD 14                    2437 	.db #0x14	; 20
      0008DE 12                    2438 	.db #0x12	; 18
      0008DF 7F                    2439 	.db #0x7f	; 127
      0008E0 10                    2440 	.db #0x10	; 16
      0008E1 27                    2441 	.db #0x27	; 39
      0008E2 45                    2442 	.db #0x45	; 69	'E'
      0008E3 45                    2443 	.db #0x45	; 69	'E'
      0008E4 45                    2444 	.db #0x45	; 69	'E'
      0008E5 39                    2445 	.db #0x39	; 57	'9'
      0008E6 3C                    2446 	.db #0x3c	; 60
      0008E7 4A                    2447 	.db #0x4a	; 74	'J'
      0008E8 49                    2448 	.db #0x49	; 73	'I'
      0008E9 49                    2449 	.db #0x49	; 73	'I'
      0008EA 30                    2450 	.db #0x30	; 48	'0'
      0008EB 01                    2451 	.db #0x01	; 1
      0008EC 71                    2452 	.db #0x71	; 113	'q'
      0008ED 09                    2453 	.db #0x09	; 9
      0008EE 05                    2454 	.db #0x05	; 5
      0008EF 03                    2455 	.db #0x03	; 3
      0008F0 36                    2456 	.db #0x36	; 54	'6'
      0008F1 49                    2457 	.db #0x49	; 73	'I'
      0008F2 49                    2458 	.db #0x49	; 73	'I'
      0008F3 49                    2459 	.db #0x49	; 73	'I'
      0008F4 36                    2460 	.db #0x36	; 54	'6'
      0008F5 06                    2461 	.db #0x06	; 6
      0008F6 49                    2462 	.db #0x49	; 73	'I'
      0008F7 49                    2463 	.db #0x49	; 73	'I'
      0008F8 29                    2464 	.db #0x29	; 41
      0008F9 1E                    2465 	.db #0x1e	; 30
      0008FA 00                    2466 	.db #0x00	; 0
      0008FB 36                    2467 	.db #0x36	; 54	'6'
      0008FC 36                    2468 	.db #0x36	; 54	'6'
      0008FD 00                    2469 	.db #0x00	; 0
      0008FE 00                    2470 	.db #0x00	; 0
      0008FF 00                    2471 	.db #0x00	; 0
      000900 56                    2472 	.db #0x56	; 86	'V'
      000901 36                    2473 	.db #0x36	; 54	'6'
      000902 00                    2474 	.db #0x00	; 0
      000903 00                    2475 	.db #0x00	; 0
      000904 00                    2476 	.db #0x00	; 0
      000905 08                    2477 	.db #0x08	; 8
      000906 14                    2478 	.db #0x14	; 20
      000907 22                    2479 	.db #0x22	; 34
      000908 41                    2480 	.db #0x41	; 65	'A'
      000909 14                    2481 	.db #0x14	; 20
      00090A 14                    2482 	.db #0x14	; 20
      00090B 14                    2483 	.db #0x14	; 20
      00090C 14                    2484 	.db #0x14	; 20
      00090D 14                    2485 	.db #0x14	; 20
      00090E 41                    2486 	.db #0x41	; 65	'A'
      00090F 22                    2487 	.db #0x22	; 34
      000910 14                    2488 	.db #0x14	; 20
      000911 08                    2489 	.db #0x08	; 8
      000912 00                    2490 	.db #0x00	; 0
      000913 02                    2491 	.db #0x02	; 2
      000914 01                    2492 	.db #0x01	; 1
      000915 51                    2493 	.db #0x51	; 81	'Q'
      000916 09                    2494 	.db #0x09	; 9
      000917 06                    2495 	.db #0x06	; 6
      000918 32                    2496 	.db #0x32	; 50	'2'
      000919 49                    2497 	.db #0x49	; 73	'I'
      00091A 79                    2498 	.db #0x79	; 121	'y'
      00091B 41                    2499 	.db #0x41	; 65	'A'
      00091C 3E                    2500 	.db #0x3e	; 62
      00091D 7E                    2501 	.db #0x7e	; 126
      00091E 11                    2502 	.db #0x11	; 17
      00091F 11                    2503 	.db #0x11	; 17
      000920 11                    2504 	.db #0x11	; 17
      000921 7E                    2505 	.db #0x7e	; 126
      000922 7F                    2506 	.db #0x7f	; 127
      000923 49                    2507 	.db #0x49	; 73	'I'
      000924 49                    2508 	.db #0x49	; 73	'I'
      000925 49                    2509 	.db #0x49	; 73	'I'
      000926 36                    2510 	.db #0x36	; 54	'6'
      000927 3E                    2511 	.db #0x3e	; 62
      000928 41                    2512 	.db #0x41	; 65	'A'
      000929 41                    2513 	.db #0x41	; 65	'A'
      00092A 41                    2514 	.db #0x41	; 65	'A'
      00092B 22                    2515 	.db #0x22	; 34
      00092C 7F                    2516 	.db #0x7f	; 127
      00092D 41                    2517 	.db #0x41	; 65	'A'
      00092E 41                    2518 	.db #0x41	; 65	'A'
      00092F 22                    2519 	.db #0x22	; 34
      000930 1C                    2520 	.db #0x1c	; 28
      000931 7F                    2521 	.db #0x7f	; 127
      000932 49                    2522 	.db #0x49	; 73	'I'
      000933 49                    2523 	.db #0x49	; 73	'I'
      000934 49                    2524 	.db #0x49	; 73	'I'
      000935 41                    2525 	.db #0x41	; 65	'A'
      000936 7F                    2526 	.db #0x7f	; 127
      000937 09                    2527 	.db #0x09	; 9
      000938 09                    2528 	.db #0x09	; 9
      000939 01                    2529 	.db #0x01	; 1
      00093A 01                    2530 	.db #0x01	; 1
      00093B 3E                    2531 	.db #0x3e	; 62
      00093C 41                    2532 	.db #0x41	; 65	'A'
      00093D 41                    2533 	.db #0x41	; 65	'A'
      00093E 51                    2534 	.db #0x51	; 81	'Q'
      00093F 32                    2535 	.db #0x32	; 50	'2'
      000940 7F                    2536 	.db #0x7f	; 127
      000941 08                    2537 	.db #0x08	; 8
      000942 08                    2538 	.db #0x08	; 8
      000943 08                    2539 	.db #0x08	; 8
      000944 7F                    2540 	.db #0x7f	; 127
      000945 00                    2541 	.db #0x00	; 0
      000946 41                    2542 	.db #0x41	; 65	'A'
      000947 7F                    2543 	.db #0x7f	; 127
      000948 41                    2544 	.db #0x41	; 65	'A'
      000949 00                    2545 	.db #0x00	; 0
      00094A 20                    2546 	.db #0x20	; 32
      00094B 40                    2547 	.db #0x40	; 64
      00094C 41                    2548 	.db #0x41	; 65	'A'
      00094D 3F                    2549 	.db #0x3f	; 63
      00094E 01                    2550 	.db #0x01	; 1
      00094F 7F                    2551 	.db #0x7f	; 127
      000950 08                    2552 	.db #0x08	; 8
      000951 14                    2553 	.db #0x14	; 20
      000952 22                    2554 	.db #0x22	; 34
      000953 41                    2555 	.db #0x41	; 65	'A'
      000954 7F                    2556 	.db #0x7f	; 127
      000955 40                    2557 	.db #0x40	; 64
      000956 40                    2558 	.db #0x40	; 64
      000957 40                    2559 	.db #0x40	; 64
      000958 40                    2560 	.db #0x40	; 64
      000959 7F                    2561 	.db #0x7f	; 127
      00095A 02                    2562 	.db #0x02	; 2
      00095B 04                    2563 	.db #0x04	; 4
      00095C 02                    2564 	.db #0x02	; 2
      00095D 7F                    2565 	.db #0x7f	; 127
      00095E 7F                    2566 	.db #0x7f	; 127
      00095F 04                    2567 	.db #0x04	; 4
      000960 08                    2568 	.db #0x08	; 8
      000961 10                    2569 	.db #0x10	; 16
      000962 7F                    2570 	.db #0x7f	; 127
      000963 3E                    2571 	.db #0x3e	; 62
      000964 41                    2572 	.db #0x41	; 65	'A'
      000965 41                    2573 	.db #0x41	; 65	'A'
      000966 41                    2574 	.db #0x41	; 65	'A'
      000967 3E                    2575 	.db #0x3e	; 62
      000968 7F                    2576 	.db #0x7f	; 127
      000969 09                    2577 	.db #0x09	; 9
      00096A 09                    2578 	.db #0x09	; 9
      00096B 09                    2579 	.db #0x09	; 9
      00096C 06                    2580 	.db #0x06	; 6
      00096D 3E                    2581 	.db #0x3e	; 62
      00096E 41                    2582 	.db #0x41	; 65	'A'
      00096F 51                    2583 	.db #0x51	; 81	'Q'
      000970 21                    2584 	.db #0x21	; 33
      000971 5E                    2585 	.db #0x5e	; 94
      000972 7F                    2586 	.db #0x7f	; 127
      000973 09                    2587 	.db #0x09	; 9
      000974 19                    2588 	.db #0x19	; 25
      000975 29                    2589 	.db #0x29	; 41
      000976 46                    2590 	.db #0x46	; 70	'F'
      000977 46                    2591 	.db #0x46	; 70	'F'
      000978 49                    2592 	.db #0x49	; 73	'I'
      000979 49                    2593 	.db #0x49	; 73	'I'
      00097A 49                    2594 	.db #0x49	; 73	'I'
      00097B 31                    2595 	.db #0x31	; 49	'1'
      00097C 01                    2596 	.db #0x01	; 1
      00097D 01                    2597 	.db #0x01	; 1
      00097E 7F                    2598 	.db #0x7f	; 127
      00097F 01                    2599 	.db #0x01	; 1
      000980 01                    2600 	.db #0x01	; 1
      000981 3F                    2601 	.db #0x3f	; 63
      000982 40                    2602 	.db #0x40	; 64
      000983 40                    2603 	.db #0x40	; 64
      000984 40                    2604 	.db #0x40	; 64
      000985 3F                    2605 	.db #0x3f	; 63
      000986 1F                    2606 	.db #0x1f	; 31
      000987 20                    2607 	.db #0x20	; 32
      000988 40                    2608 	.db #0x40	; 64
      000989 20                    2609 	.db #0x20	; 32
      00098A 1F                    2610 	.db #0x1f	; 31
      00098B 7F                    2611 	.db #0x7f	; 127
      00098C 20                    2612 	.db #0x20	; 32
      00098D 18                    2613 	.db #0x18	; 24
      00098E 20                    2614 	.db #0x20	; 32
      00098F 7F                    2615 	.db #0x7f	; 127
      000990 63                    2616 	.db #0x63	; 99	'c'
      000991 14                    2617 	.db #0x14	; 20
      000992 08                    2618 	.db #0x08	; 8
      000993 14                    2619 	.db #0x14	; 20
      000994 63                    2620 	.db #0x63	; 99	'c'
      000995 03                    2621 	.db #0x03	; 3
      000996 04                    2622 	.db #0x04	; 4
      000997 78                    2623 	.db #0x78	; 120	'x'
      000998 04                    2624 	.db #0x04	; 4
      000999 03                    2625 	.db #0x03	; 3
      00099A 61                    2626 	.db #0x61	; 97	'a'
      00099B 51                    2627 	.db #0x51	; 81	'Q'
      00099C 49                    2628 	.db #0x49	; 73	'I'
      00099D 45                    2629 	.db #0x45	; 69	'E'
      00099E 43                    2630 	.db #0x43	; 67	'C'
      00099F 00                    2631 	.db #0x00	; 0
      0009A0 00                    2632 	.db #0x00	; 0
      0009A1 7F                    2633 	.db #0x7f	; 127
      0009A2 41                    2634 	.db #0x41	; 65	'A'
      0009A3 41                    2635 	.db #0x41	; 65	'A'
      0009A4 02                    2636 	.db #0x02	; 2
      0009A5 04                    2637 	.db #0x04	; 4
      0009A6 08                    2638 	.db #0x08	; 8
      0009A7 10                    2639 	.db #0x10	; 16
      0009A8 20                    2640 	.db #0x20	; 32
      0009A9 41                    2641 	.db #0x41	; 65	'A'
      0009AA 41                    2642 	.db #0x41	; 65	'A'
      0009AB 7F                    2643 	.db #0x7f	; 127
      0009AC 00                    2644 	.db #0x00	; 0
      0009AD 00                    2645 	.db #0x00	; 0
      0009AE 04                    2646 	.db #0x04	; 4
      0009AF 02                    2647 	.db #0x02	; 2
      0009B0 01                    2648 	.db #0x01	; 1
      0009B1 02                    2649 	.db #0x02	; 2
      0009B2 04                    2650 	.db #0x04	; 4
      0009B3 40                    2651 	.db #0x40	; 64
      0009B4 40                    2652 	.db #0x40	; 64
      0009B5 40                    2653 	.db #0x40	; 64
      0009B6 40                    2654 	.db #0x40	; 64
      0009B7 40                    2655 	.db #0x40	; 64
      0009B8 00                    2656 	.db #0x00	; 0
      0009B9 01                    2657 	.db #0x01	; 1
      0009BA 02                    2658 	.db #0x02	; 2
      0009BB 04                    2659 	.db #0x04	; 4
      0009BC 00                    2660 	.db #0x00	; 0
      0009BD 20                    2661 	.db #0x20	; 32
      0009BE 54                    2662 	.db #0x54	; 84	'T'
      0009BF 54                    2663 	.db #0x54	; 84	'T'
      0009C0 54                    2664 	.db #0x54	; 84	'T'
      0009C1 78                    2665 	.db #0x78	; 120	'x'
      0009C2 7F                    2666 	.db #0x7f	; 127
      0009C3 48                    2667 	.db #0x48	; 72	'H'
      0009C4 44                    2668 	.db #0x44	; 68	'D'
      0009C5 44                    2669 	.db #0x44	; 68	'D'
      0009C6 38                    2670 	.db #0x38	; 56	'8'
      0009C7 38                    2671 	.db #0x38	; 56	'8'
      0009C8 44                    2672 	.db #0x44	; 68	'D'
      0009C9 44                    2673 	.db #0x44	; 68	'D'
      0009CA 44                    2674 	.db #0x44	; 68	'D'
      0009CB 20                    2675 	.db #0x20	; 32
      0009CC 38                    2676 	.db #0x38	; 56	'8'
      0009CD 44                    2677 	.db #0x44	; 68	'D'
      0009CE 44                    2678 	.db #0x44	; 68	'D'
      0009CF 48                    2679 	.db #0x48	; 72	'H'
      0009D0 7F                    2680 	.db #0x7f	; 127
      0009D1 38                    2681 	.db #0x38	; 56	'8'
      0009D2 54                    2682 	.db #0x54	; 84	'T'
      0009D3 54                    2683 	.db #0x54	; 84	'T'
      0009D4 54                    2684 	.db #0x54	; 84	'T'
      0009D5 18                    2685 	.db #0x18	; 24
      0009D6 08                    2686 	.db #0x08	; 8
      0009D7 7E                    2687 	.db #0x7e	; 126
      0009D8 09                    2688 	.db #0x09	; 9
      0009D9 01                    2689 	.db #0x01	; 1
      0009DA 02                    2690 	.db #0x02	; 2
      0009DB 08                    2691 	.db #0x08	; 8
      0009DC 14                    2692 	.db #0x14	; 20
      0009DD 54                    2693 	.db #0x54	; 84	'T'
      0009DE 54                    2694 	.db #0x54	; 84	'T'
      0009DF 3C                    2695 	.db #0x3c	; 60
      0009E0 7F                    2696 	.db #0x7f	; 127
      0009E1 08                    2697 	.db #0x08	; 8
      0009E2 04                    2698 	.db #0x04	; 4
      0009E3 04                    2699 	.db #0x04	; 4
      0009E4 78                    2700 	.db #0x78	; 120	'x'
      0009E5 00                    2701 	.db #0x00	; 0
      0009E6 44                    2702 	.db #0x44	; 68	'D'
      0009E7 7D                    2703 	.db #0x7d	; 125
      0009E8 40                    2704 	.db #0x40	; 64
      0009E9 00                    2705 	.db #0x00	; 0
      0009EA 20                    2706 	.db #0x20	; 32
      0009EB 40                    2707 	.db #0x40	; 64
      0009EC 44                    2708 	.db #0x44	; 68	'D'
      0009ED 3D                    2709 	.db #0x3d	; 61
      0009EE 00                    2710 	.db #0x00	; 0
      0009EF 00                    2711 	.db #0x00	; 0
      0009F0 7F                    2712 	.db #0x7f	; 127
      0009F1 10                    2713 	.db #0x10	; 16
      0009F2 28                    2714 	.db #0x28	; 40
      0009F3 44                    2715 	.db #0x44	; 68	'D'
      0009F4 00                    2716 	.db #0x00	; 0
      0009F5 41                    2717 	.db #0x41	; 65	'A'
      0009F6 7F                    2718 	.db #0x7f	; 127
      0009F7 40                    2719 	.db #0x40	; 64
      0009F8 00                    2720 	.db #0x00	; 0
      0009F9 7C                    2721 	.db #0x7c	; 124
      0009FA 04                    2722 	.db #0x04	; 4
      0009FB 18                    2723 	.db #0x18	; 24
      0009FC 04                    2724 	.db #0x04	; 4
      0009FD 78                    2725 	.db #0x78	; 120	'x'
      0009FE 7C                    2726 	.db #0x7c	; 124
      0009FF 08                    2727 	.db #0x08	; 8
      000A00 04                    2728 	.db #0x04	; 4
      000A01 04                    2729 	.db #0x04	; 4
      000A02 78                    2730 	.db #0x78	; 120	'x'
      000A03 38                    2731 	.db #0x38	; 56	'8'
      000A04 44                    2732 	.db #0x44	; 68	'D'
      000A05 44                    2733 	.db #0x44	; 68	'D'
      000A06 44                    2734 	.db #0x44	; 68	'D'
      000A07 38                    2735 	.db #0x38	; 56	'8'
      000A08 7C                    2736 	.db #0x7c	; 124
      000A09 14                    2737 	.db #0x14	; 20
      000A0A 14                    2738 	.db #0x14	; 20
      000A0B 14                    2739 	.db #0x14	; 20
      000A0C 08                    2740 	.db #0x08	; 8
      000A0D 08                    2741 	.db #0x08	; 8
      000A0E 14                    2742 	.db #0x14	; 20
      000A0F 14                    2743 	.db #0x14	; 20
      000A10 18                    2744 	.db #0x18	; 24
      000A11 7C                    2745 	.db #0x7c	; 124
      000A12 7C                    2746 	.db #0x7c	; 124
      000A13 08                    2747 	.db #0x08	; 8
      000A14 04                    2748 	.db #0x04	; 4
      000A15 04                    2749 	.db #0x04	; 4
      000A16 08                    2750 	.db #0x08	; 8
      000A17 48                    2751 	.db #0x48	; 72	'H'
      000A18 54                    2752 	.db #0x54	; 84	'T'
      000A19 54                    2753 	.db #0x54	; 84	'T'
      000A1A 54                    2754 	.db #0x54	; 84	'T'
      000A1B 20                    2755 	.db #0x20	; 32
      000A1C 04                    2756 	.db #0x04	; 4
      000A1D 3F                    2757 	.db #0x3f	; 63
      000A1E 44                    2758 	.db #0x44	; 68	'D'
      000A1F 40                    2759 	.db #0x40	; 64
      000A20 20                    2760 	.db #0x20	; 32
      000A21 3C                    2761 	.db #0x3c	; 60
      000A22 40                    2762 	.db #0x40	; 64
      000A23 40                    2763 	.db #0x40	; 64
      000A24 20                    2764 	.db #0x20	; 32
      000A25 7C                    2765 	.db #0x7c	; 124
      000A26 1C                    2766 	.db #0x1c	; 28
      000A27 20                    2767 	.db #0x20	; 32
      000A28 40                    2768 	.db #0x40	; 64
      000A29 20                    2769 	.db #0x20	; 32
      000A2A 1C                    2770 	.db #0x1c	; 28
      000A2B 3C                    2771 	.db #0x3c	; 60
      000A2C 40                    2772 	.db #0x40	; 64
      000A2D 30                    2773 	.db #0x30	; 48	'0'
      000A2E 40                    2774 	.db #0x40	; 64
      000A2F 3C                    2775 	.db #0x3c	; 60
      000A30 44                    2776 	.db #0x44	; 68	'D'
      000A31 28                    2777 	.db #0x28	; 40
      000A32 10                    2778 	.db #0x10	; 16
      000A33 28                    2779 	.db #0x28	; 40
      000A34 44                    2780 	.db #0x44	; 68	'D'
      000A35 0C                    2781 	.db #0x0c	; 12
      000A36 50                    2782 	.db #0x50	; 80	'P'
      000A37 50                    2783 	.db #0x50	; 80	'P'
      000A38 50                    2784 	.db #0x50	; 80	'P'
      000A39 3C                    2785 	.db #0x3c	; 60
      000A3A 44                    2786 	.db #0x44	; 68	'D'
      000A3B 64                    2787 	.db #0x64	; 100	'd'
      000A3C 54                    2788 	.db #0x54	; 84	'T'
      000A3D 4C                    2789 	.db #0x4c	; 76	'L'
      000A3E 44                    2790 	.db #0x44	; 68	'D'
      000A3F 00                    2791 	.db #0x00	; 0
      000A40 08                    2792 	.db #0x08	; 8
      000A41 36                    2793 	.db #0x36	; 54	'6'
      000A42 41                    2794 	.db #0x41	; 65	'A'
      000A43 00                    2795 	.db #0x00	; 0
      000A44 00                    2796 	.db #0x00	; 0
      000A45 00                    2797 	.db #0x00	; 0
      000A46 7F                    2798 	.db #0x7f	; 127
      000A47 00                    2799 	.db #0x00	; 0
      000A48 00                    2800 	.db #0x00	; 0
      000A49 00                    2801 	.db #0x00	; 0
      000A4A 41                    2802 	.db #0x41	; 65	'A'
      000A4B 36                    2803 	.db #0x36	; 54	'6'
      000A4C 08                    2804 	.db #0x08	; 8
      000A4D 00                    2805 	.db #0x00	; 0
      000A4E 08                    2806 	.db #0x08	; 8
      000A4F 08                    2807 	.db #0x08	; 8
      000A50 2A                    2808 	.db #0x2a	; 42
      000A51 1C                    2809 	.db #0x1c	; 28
      000A52 08                    2810 	.db #0x08	; 8
      000A53 08                    2811 	.db #0x08	; 8
      000A54 1C                    2812 	.db #0x1c	; 28
      000A55 2A                    2813 	.db #0x2a	; 42
      000A56 08                    2814 	.db #0x08	; 8
      000A57 08                    2815 	.db #0x08	; 8
                           0001E0  2816 Fmain$__str_0$0$0 == .
      000A58                       2817 ___str_0:
      000A58 0A                    2818 	.db 0x0a
      000A59 0A                    2819 	.db 0x0a
      000A5A 0A                    2820 	.db 0x0a
      000A5B 00                    2821 	.db 0x00
                           0001E4  2822 Fmain$__str_1$0$0 == .
      000A5C                       2823 ___str_1:
      000A5C 4D 45 4E 55           2824 	.ascii "MENU"
      000A60 0A                    2825 	.db 0x0a
      000A61 00                    2826 	.db 0x00
                           0001EA  2827 Fmain$__str_2$0$0 == .
      000A62                       2828 ___str_2:
      000A62 69 20 2D 20 49 6E 76  2829 	.ascii "i - Inverte P0_7."
             65 72 74 65 20 50 30
             5F 37 2E
      000A73 0A                    2830 	.db 0x0a
      000A74 00                    2831 	.db 0x00
                           0001FD  2832 Fmain$__str_3$0$0 == .
      000A75                       2833 ___str_3:
      000A75 61 20 2D 20 41 75 6D  2834 	.ascii "a - Aumenta RPM do motor."
             65 6E 74 61 20 52 50
             4D 20 64 6F 20 6D 6F
             74 6F 72 2E
      000A8E 0A                    2835 	.db 0x0a
      000A8F 00                    2836 	.db 0x00
                           000218  2837 Fmain$__str_4$0$0 == .
      000A90                       2838 ___str_4:
      000A90 64 20 2D 20 44 69 6D  2839 	.ascii "d - Diminui RPM do motor."
             69 6E 75 69 20 52 50
             4D 20 64 6F 20 6D 6F
             74 6F 72 2E
      000AA9 0A                    2840 	.db 0x0a
      000AAA 00                    2841 	.db 0x00
                           000233  2842 Fmain$__str_5$0$0 == .
      000AAB                       2843 ___str_5:
      000AAB 64 65 66 61 75 6C 74  2844 	.ascii "default"
      000AB2 0A                    2845 	.db 0x0a
      000AB3 00                    2846 	.db 0x00
                                   2847 	.area XINIT   (CODE)
                                   2848 	.area CABS    (ABS,CODE)
