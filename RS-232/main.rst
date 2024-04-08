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
                                     30 	.globl _Timer_Init
                                     31 	.globl _Reset_Sources_Init
                                     32 	.globl _P7_7
                                     33 	.globl _P7_6
                                     34 	.globl _P7_5
                                     35 	.globl _P7_4
                                     36 	.globl _P7_3
                                     37 	.globl _P7_2
                                     38 	.globl _P7_1
                                     39 	.globl _P7_0
                                     40 	.globl _P6_7
                                     41 	.globl _P6_6
                                     42 	.globl _P6_5
                                     43 	.globl _P6_4
                                     44 	.globl _P6_3
                                     45 	.globl _P6_2
                                     46 	.globl _P6_1
                                     47 	.globl _P6_0
                                     48 	.globl _P5_7
                                     49 	.globl _P5_6
                                     50 	.globl _P5_5
                                     51 	.globl _P5_4
                                     52 	.globl _P5_3
                                     53 	.globl _P5_2
                                     54 	.globl _P5_1
                                     55 	.globl _P5_0
                                     56 	.globl _P4_7
                                     57 	.globl _P4_6
                                     58 	.globl _P4_5
                                     59 	.globl _P4_4
                                     60 	.globl _P4_3
                                     61 	.globl _P4_2
                                     62 	.globl _P4_1
                                     63 	.globl _P4_0
                                     64 	.globl _P3_7
                                     65 	.globl _P3_6
                                     66 	.globl _P3_5
                                     67 	.globl _P3_4
                                     68 	.globl _P3_3
                                     69 	.globl _P3_2
                                     70 	.globl _P3_1
                                     71 	.globl _P3_0
                                     72 	.globl _P2_7
                                     73 	.globl _P2_6
                                     74 	.globl _P2_5
                                     75 	.globl _P2_4
                                     76 	.globl _P2_3
                                     77 	.globl _P2_2
                                     78 	.globl _P2_1
                                     79 	.globl _P2_0
                                     80 	.globl _P1_7
                                     81 	.globl _P1_6
                                     82 	.globl _P1_5
                                     83 	.globl _P1_4
                                     84 	.globl _P1_3
                                     85 	.globl _P1_2
                                     86 	.globl _P1_1
                                     87 	.globl _P1_0
                                     88 	.globl _P0_7
                                     89 	.globl _P0_6
                                     90 	.globl _P0_5
                                     91 	.globl _P0_4
                                     92 	.globl _P0_3
                                     93 	.globl _P0_2
                                     94 	.globl _P0_1
                                     95 	.globl _P0_0
                                     96 	.globl _CANTEST
                                     97 	.globl _CANCCE
                                     98 	.globl _CANDAR
                                     99 	.globl _CANIF
                                    100 	.globl _CANEIE
                                    101 	.globl _CANSIE
                                    102 	.globl _CANIE
                                    103 	.globl _CANINIT
                                    104 	.globl _SPIEN
                                    105 	.globl _TXBMT
                                    106 	.globl _NSSMD0
                                    107 	.globl _NSSMD1
                                    108 	.globl _RXOVRN
                                    109 	.globl _MODF
                                    110 	.globl _WCOL
                                    111 	.globl _SPIF
                                    112 	.globl _AD2WINT
                                    113 	.globl _AD2CM0
                                    114 	.globl _AD2CM1
                                    115 	.globl _AD2CM2
                                    116 	.globl _AD2BUSY
                                    117 	.globl _AD2INT
                                    118 	.globl _AD2TM
                                    119 	.globl _AD2EN
                                    120 	.globl _AD0LJST
                                    121 	.globl _AD0WINT
                                    122 	.globl _AD0CM0
                                    123 	.globl _AD0CM1
                                    124 	.globl _AD0BUSY
                                    125 	.globl _AD0INT
                                    126 	.globl _AD0TM
                                    127 	.globl _AD0EN
                                    128 	.globl _CCF0
                                    129 	.globl _CCF1
                                    130 	.globl _CCF2
                                    131 	.globl _CCF3
                                    132 	.globl _CCF4
                                    133 	.globl _CCF5
                                    134 	.globl _CR
                                    135 	.globl _CF
                                    136 	.globl _P
                                    137 	.globl _F1
                                    138 	.globl _OV
                                    139 	.globl _RS0
                                    140 	.globl _RS1
                                    141 	.globl _F0
                                    142 	.globl _AC
                                    143 	.globl _CY
                                    144 	.globl _CPRL4
                                    145 	.globl _CT4
                                    146 	.globl _TR4
                                    147 	.globl _EXEN4
                                    148 	.globl _EXF4
                                    149 	.globl _TF4
                                    150 	.globl _CPRL3
                                    151 	.globl _CT3
                                    152 	.globl _TR3
                                    153 	.globl _EXEN3
                                    154 	.globl _EXF3
                                    155 	.globl _TF3
                                    156 	.globl _CPRL2
                                    157 	.globl _CT2
                                    158 	.globl _TR2
                                    159 	.globl _EXEN2
                                    160 	.globl _EXF2
                                    161 	.globl _TF2
                                    162 	.globl _LEC0
                                    163 	.globl _LEC1
                                    164 	.globl _LEC2
                                    165 	.globl _TXOK
                                    166 	.globl _RXOK
                                    167 	.globl _EPASS
                                    168 	.globl _EWARN
                                    169 	.globl _BOFF
                                    170 	.globl _SMBTOE
                                    171 	.globl _SMBFTE
                                    172 	.globl _AA
                                    173 	.globl _SI
                                    174 	.globl _STO
                                    175 	.globl _STA
                                    176 	.globl _ENSMB
                                    177 	.globl _BUSY
                                    178 	.globl _PX0
                                    179 	.globl _PT0
                                    180 	.globl _PX1
                                    181 	.globl _PT1
                                    182 	.globl _PS0
                                    183 	.globl _PT2
                                    184 	.globl _EX0
                                    185 	.globl _ET0
                                    186 	.globl _EX1
                                    187 	.globl _ET1
                                    188 	.globl _ES0
                                    189 	.globl _ET2
                                    190 	.globl _EA
                                    191 	.globl _RI1
                                    192 	.globl _TI1
                                    193 	.globl _RB81
                                    194 	.globl _TB81
                                    195 	.globl _REN1
                                    196 	.globl _MCE1
                                    197 	.globl _S1MODE
                                    198 	.globl _RI0
                                    199 	.globl _TI0
                                    200 	.globl _RB80
                                    201 	.globl _TB80
                                    202 	.globl _REN0
                                    203 	.globl _SM20
                                    204 	.globl _SM10
                                    205 	.globl _SM00
                                    206 	.globl _CP2HYN0
                                    207 	.globl _CP2HYN1
                                    208 	.globl _CP2HYP0
                                    209 	.globl _CP2HYP1
                                    210 	.globl _CP2FIF
                                    211 	.globl _CP2RIF
                                    212 	.globl _CP2OUT
                                    213 	.globl _CP2EN
                                    214 	.globl _CP1HYN0
                                    215 	.globl _CP1HYN1
                                    216 	.globl _CP1HYP0
                                    217 	.globl _CP1HYP1
                                    218 	.globl _CP1FIF
                                    219 	.globl _CP1RIF
                                    220 	.globl _CP1OUT
                                    221 	.globl _CP1EN
                                    222 	.globl _CP0HYN0
                                    223 	.globl _CP0HYN1
                                    224 	.globl _CP0HYP0
                                    225 	.globl _CP0HYP1
                                    226 	.globl _CP0FIF
                                    227 	.globl _CP0RIF
                                    228 	.globl _CP0OUT
                                    229 	.globl _CP0EN
                                    230 	.globl _IT0
                                    231 	.globl _IE0
                                    232 	.globl _IT1
                                    233 	.globl _IE1
                                    234 	.globl _TR0
                                    235 	.globl _TF0
                                    236 	.globl _TR1
                                    237 	.globl _TF1
                                    238 	.globl __XPAGE
                                    239 	.globl _DP
                                    240 	.globl _ADC0
                                    241 	.globl _ADC0LT
                                    242 	.globl _ADC0GT
                                    243 	.globl _TMR4
                                    244 	.globl _TMR3
                                    245 	.globl _TMR2
                                    246 	.globl _RCAP4
                                    247 	.globl _RCAP3
                                    248 	.globl _RCAP2
                                    249 	.globl _DAC1
                                    250 	.globl _DAC0
                                    251 	.globl _CAN0DAT
                                    252 	.globl _PCA0CP5
                                    253 	.globl _PCA0CP4
                                    254 	.globl _PCA0CP3
                                    255 	.globl _PCA0CP2
                                    256 	.globl _PCA0CP1
                                    257 	.globl _PCA0CP0
                                    258 	.globl _PCA0
                                    259 	.globl _WDTCN
                                    260 	.globl _PCA0CPH1
                                    261 	.globl _PCA0CPL1
                                    262 	.globl _PCA0CPH0
                                    263 	.globl _PCA0CPL0
                                    264 	.globl _PCA0H
                                    265 	.globl _PCA0L
                                    266 	.globl _P7
                                    267 	.globl _CAN0CN
                                    268 	.globl _SPI0CN
                                    269 	.globl _EIP2
                                    270 	.globl _EIP1
                                    271 	.globl _B
                                    272 	.globl _RSTSRC
                                    273 	.globl _PCA0CPH4
                                    274 	.globl _PCA0CPL4
                                    275 	.globl _PCA0CPH3
                                    276 	.globl _PCA0CPL3
                                    277 	.globl _PCA0CPH2
                                    278 	.globl _PCA0CPL2
                                    279 	.globl _P6
                                    280 	.globl _ADC2CN
                                    281 	.globl _ADC0CN
                                    282 	.globl _EIE2
                                    283 	.globl _EIE1
                                    284 	.globl _XBR3
                                    285 	.globl _XBR2
                                    286 	.globl _XBR1
                                    287 	.globl _PCA0CPH5
                                    288 	.globl _XBR0
                                    289 	.globl _PCA0CPL5
                                    290 	.globl _ACC
                                    291 	.globl _PCA0CPM5
                                    292 	.globl _PCA0CPM4
                                    293 	.globl _PCA0CPM3
                                    294 	.globl _PCA0CPM2
                                    295 	.globl _CAN0TST
                                    296 	.globl _PCA0CPM1
                                    297 	.globl _CAN0ADR
                                    298 	.globl _PCA0CPM0
                                    299 	.globl _CAN0DATH
                                    300 	.globl _PCA0MD
                                    301 	.globl _P5
                                    302 	.globl _CAN0DATL
                                    303 	.globl _PCA0CN
                                    304 	.globl _HVA0CN
                                    305 	.globl _DAC1CN
                                    306 	.globl _DAC0CN
                                    307 	.globl _DAC1H
                                    308 	.globl _DAC0H
                                    309 	.globl _DAC1L
                                    310 	.globl _DAC0L
                                    311 	.globl _REF0CN
                                    312 	.globl _PSW
                                    313 	.globl _SMB0CR
                                    314 	.globl _TMR4H
                                    315 	.globl _TMR3H
                                    316 	.globl _TMR2H
                                    317 	.globl _TMR4L
                                    318 	.globl _TMR3L
                                    319 	.globl _TMR2L
                                    320 	.globl _RCAP4H
                                    321 	.globl _RCAP3H
                                    322 	.globl _RCAP2H
                                    323 	.globl _RCAP4L
                                    324 	.globl _RCAP3L
                                    325 	.globl _RCAP2L
                                    326 	.globl _TMR4CF
                                    327 	.globl _TMR3CF
                                    328 	.globl _TMR2CF
                                    329 	.globl _P4
                                    330 	.globl _TMR4CN
                                    331 	.globl _TMR3CN
                                    332 	.globl _TMR2CN
                                    333 	.globl _ADC0LTH
                                    334 	.globl _ADC2LT
                                    335 	.globl _ADC0LTL
                                    336 	.globl _ADC0GTH
                                    337 	.globl _ADC2GT
                                    338 	.globl _ADC0GTL
                                    339 	.globl _SMB0ADR
                                    340 	.globl _SMB0DAT
                                    341 	.globl _SMB0STA
                                    342 	.globl _CAN0STA
                                    343 	.globl _SMB0CN
                                    344 	.globl _ADC0H
                                    345 	.globl _ADC2
                                    346 	.globl _ADC0L
                                    347 	.globl _ADC2CF
                                    348 	.globl _ADC0CF
                                    349 	.globl _AMX2SL
                                    350 	.globl _AMX0SL
                                    351 	.globl _AMX0CF
                                    352 	.globl _AMX0PRT
                                    353 	.globl _AMX2CF
                                    354 	.globl _SADEN0
                                    355 	.globl _IP
                                    356 	.globl _FLACL
                                    357 	.globl _FLSCL
                                    358 	.globl _P3
                                    359 	.globl _P3MDIN
                                    360 	.globl _P2MDIN
                                    361 	.globl _P1MDIN
                                    362 	.globl _SADDR1
                                    363 	.globl _SADDR0
                                    364 	.globl _IE
                                    365 	.globl _P3MDOUT
                                    366 	.globl _P2MDOUT
                                    367 	.globl _P1MDOUT
                                    368 	.globl _P0MDOUT
                                    369 	.globl _EMI0CF
                                    370 	.globl _EMI0CN
                                    371 	.globl _EMI0TC
                                    372 	.globl _P2
                                    373 	.globl _P7MDOUT
                                    374 	.globl _P6MDOUT
                                    375 	.globl _P5MDOUT
                                    376 	.globl _SPI0CKR
                                    377 	.globl _P4MDOUT
                                    378 	.globl _SPI0DAT
                                    379 	.globl _SPI0CFG
                                    380 	.globl _SBUF1
                                    381 	.globl _SBUF0
                                    382 	.globl _SCON1
                                    383 	.globl _SCON0
                                    384 	.globl _CLKSEL
                                    385 	.globl _SFRPGCN
                                    386 	.globl _SSTA0
                                    387 	.globl _P1
                                    388 	.globl _PSCTL
                                    389 	.globl _CKCON
                                    390 	.globl _TH1
                                    391 	.globl _OSCXCN
                                    392 	.globl _TH0
                                    393 	.globl _OSCICL
                                    394 	.globl _TL1
                                    395 	.globl _OSCICN
                                    396 	.globl _TL0
                                    397 	.globl _CPT2MD
                                    398 	.globl _CPT1MD
                                    399 	.globl _CPT0MD
                                    400 	.globl _TMOD
                                    401 	.globl _CPT2CN
                                    402 	.globl _CPT1CN
                                    403 	.globl _CPT0CN
                                    404 	.globl _TCON
                                    405 	.globl _PCON
                                    406 	.globl _SFRLAST
                                    407 	.globl _SFRNEXT
                                    408 	.globl _SFRPAGE
                                    409 	.globl _DPH
                                    410 	.globl _DPL
                                    411 	.globl _SP
                                    412 	.globl _P0
                                    413 	.globl _fbr
                                    414 	.globl _limpa_glcd_PARM_1
                                    415 	.globl _conf_pag_PARM_2
                                    416 	.globl _conf_Y_PARM_2
                                    417 	.globl _esc_glcd_PARM_3
                                    418 	.globl _esc_glcd_PARM_2
                                    419 	.globl _le_glcd_PARM_2
                                    420 	.globl _le_glcd_PARM_1
                                    421 	.globl _putchar
                                    422 ;--------------------------------------------------------
                                    423 ; special function registers
                                    424 ;--------------------------------------------------------
                                    425 	.area RSEG    (ABS,DATA)
      000000                        426 	.org 0x0000
                           000080   427 G$P0$0$0 == 0x0080
                           000080   428 _P0	=	0x0080
                           000081   429 G$SP$0$0 == 0x0081
                           000081   430 _SP	=	0x0081
                           000082   431 G$DPL$0$0 == 0x0082
                           000082   432 _DPL	=	0x0082
                           000083   433 G$DPH$0$0 == 0x0083
                           000083   434 _DPH	=	0x0083
                           000084   435 G$SFRPAGE$0$0 == 0x0084
                           000084   436 _SFRPAGE	=	0x0084
                           000085   437 G$SFRNEXT$0$0 == 0x0085
                           000085   438 _SFRNEXT	=	0x0085
                           000086   439 G$SFRLAST$0$0 == 0x0086
                           000086   440 _SFRLAST	=	0x0086
                           000087   441 G$PCON$0$0 == 0x0087
                           000087   442 _PCON	=	0x0087
                           000088   443 G$TCON$0$0 == 0x0088
                           000088   444 _TCON	=	0x0088
                           000088   445 G$CPT0CN$0$0 == 0x0088
                           000088   446 _CPT0CN	=	0x0088
                           000088   447 G$CPT1CN$0$0 == 0x0088
                           000088   448 _CPT1CN	=	0x0088
                           000088   449 G$CPT2CN$0$0 == 0x0088
                           000088   450 _CPT2CN	=	0x0088
                           000089   451 G$TMOD$0$0 == 0x0089
                           000089   452 _TMOD	=	0x0089
                           000089   453 G$CPT0MD$0$0 == 0x0089
                           000089   454 _CPT0MD	=	0x0089
                           000089   455 G$CPT1MD$0$0 == 0x0089
                           000089   456 _CPT1MD	=	0x0089
                           000089   457 G$CPT2MD$0$0 == 0x0089
                           000089   458 _CPT2MD	=	0x0089
                           00008A   459 G$TL0$0$0 == 0x008a
                           00008A   460 _TL0	=	0x008a
                           00008A   461 G$OSCICN$0$0 == 0x008a
                           00008A   462 _OSCICN	=	0x008a
                           00008B   463 G$TL1$0$0 == 0x008b
                           00008B   464 _TL1	=	0x008b
                           00008B   465 G$OSCICL$0$0 == 0x008b
                           00008B   466 _OSCICL	=	0x008b
                           00008C   467 G$TH0$0$0 == 0x008c
                           00008C   468 _TH0	=	0x008c
                           00008C   469 G$OSCXCN$0$0 == 0x008c
                           00008C   470 _OSCXCN	=	0x008c
                           00008D   471 G$TH1$0$0 == 0x008d
                           00008D   472 _TH1	=	0x008d
                           00008E   473 G$CKCON$0$0 == 0x008e
                           00008E   474 _CKCON	=	0x008e
                           00008F   475 G$PSCTL$0$0 == 0x008f
                           00008F   476 _PSCTL	=	0x008f
                           000090   477 G$P1$0$0 == 0x0090
                           000090   478 _P1	=	0x0090
                           000091   479 G$SSTA0$0$0 == 0x0091
                           000091   480 _SSTA0	=	0x0091
                           000096   481 G$SFRPGCN$0$0 == 0x0096
                           000096   482 _SFRPGCN	=	0x0096
                           000097   483 G$CLKSEL$0$0 == 0x0097
                           000097   484 _CLKSEL	=	0x0097
                           000098   485 G$SCON0$0$0 == 0x0098
                           000098   486 _SCON0	=	0x0098
                           000098   487 G$SCON1$0$0 == 0x0098
                           000098   488 _SCON1	=	0x0098
                           000099   489 G$SBUF0$0$0 == 0x0099
                           000099   490 _SBUF0	=	0x0099
                           000099   491 G$SBUF1$0$0 == 0x0099
                           000099   492 _SBUF1	=	0x0099
                           00009A   493 G$SPI0CFG$0$0 == 0x009a
                           00009A   494 _SPI0CFG	=	0x009a
                           00009B   495 G$SPI0DAT$0$0 == 0x009b
                           00009B   496 _SPI0DAT	=	0x009b
                           00009C   497 G$P4MDOUT$0$0 == 0x009c
                           00009C   498 _P4MDOUT	=	0x009c
                           00009D   499 G$SPI0CKR$0$0 == 0x009d
                           00009D   500 _SPI0CKR	=	0x009d
                           00009D   501 G$P5MDOUT$0$0 == 0x009d
                           00009D   502 _P5MDOUT	=	0x009d
                           00009E   503 G$P6MDOUT$0$0 == 0x009e
                           00009E   504 _P6MDOUT	=	0x009e
                           00009F   505 G$P7MDOUT$0$0 == 0x009f
                           00009F   506 _P7MDOUT	=	0x009f
                           0000A0   507 G$P2$0$0 == 0x00a0
                           0000A0   508 _P2	=	0x00a0
                           0000A1   509 G$EMI0TC$0$0 == 0x00a1
                           0000A1   510 _EMI0TC	=	0x00a1
                           0000A2   511 G$EMI0CN$0$0 == 0x00a2
                           0000A2   512 _EMI0CN	=	0x00a2
                           0000A3   513 G$EMI0CF$0$0 == 0x00a3
                           0000A3   514 _EMI0CF	=	0x00a3
                           0000A4   515 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   516 _P0MDOUT	=	0x00a4
                           0000A5   517 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   518 _P1MDOUT	=	0x00a5
                           0000A6   519 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   520 _P2MDOUT	=	0x00a6
                           0000A7   521 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   522 _P3MDOUT	=	0x00a7
                           0000A8   523 G$IE$0$0 == 0x00a8
                           0000A8   524 _IE	=	0x00a8
                           0000A9   525 G$SADDR0$0$0 == 0x00a9
                           0000A9   526 _SADDR0	=	0x00a9
                           0000A9   527 G$SADDR1$0$0 == 0x00a9
                           0000A9   528 _SADDR1	=	0x00a9
                           0000AD   529 G$P1MDIN$0$0 == 0x00ad
                           0000AD   530 _P1MDIN	=	0x00ad
                           0000AE   531 G$P2MDIN$0$0 == 0x00ae
                           0000AE   532 _P2MDIN	=	0x00ae
                           0000AF   533 G$P3MDIN$0$0 == 0x00af
                           0000AF   534 _P3MDIN	=	0x00af
                           0000B0   535 G$P3$0$0 == 0x00b0
                           0000B0   536 _P3	=	0x00b0
                           0000B7   537 G$FLSCL$0$0 == 0x00b7
                           0000B7   538 _FLSCL	=	0x00b7
                           0000B7   539 G$FLACL$0$0 == 0x00b7
                           0000B7   540 _FLACL	=	0x00b7
                           0000B8   541 G$IP$0$0 == 0x00b8
                           0000B8   542 _IP	=	0x00b8
                           0000B9   543 G$SADEN0$0$0 == 0x00b9
                           0000B9   544 _SADEN0	=	0x00b9
                           0000BA   545 G$AMX2CF$0$0 == 0x00ba
                           0000BA   546 _AMX2CF	=	0x00ba
                           0000BD   547 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   548 _AMX0PRT	=	0x00bd
                           0000BA   549 G$AMX0CF$0$0 == 0x00ba
                           0000BA   550 _AMX0CF	=	0x00ba
                           0000BB   551 G$AMX0SL$0$0 == 0x00bb
                           0000BB   552 _AMX0SL	=	0x00bb
                           0000BB   553 G$AMX2SL$0$0 == 0x00bb
                           0000BB   554 _AMX2SL	=	0x00bb
                           0000BC   555 G$ADC0CF$0$0 == 0x00bc
                           0000BC   556 _ADC0CF	=	0x00bc
                           0000BC   557 G$ADC2CF$0$0 == 0x00bc
                           0000BC   558 _ADC2CF	=	0x00bc
                           0000BE   559 G$ADC0L$0$0 == 0x00be
                           0000BE   560 _ADC0L	=	0x00be
                           0000BE   561 G$ADC2$0$0 == 0x00be
                           0000BE   562 _ADC2	=	0x00be
                           0000BF   563 G$ADC0H$0$0 == 0x00bf
                           0000BF   564 _ADC0H	=	0x00bf
                           0000C0   565 G$SMB0CN$0$0 == 0x00c0
                           0000C0   566 _SMB0CN	=	0x00c0
                           0000C0   567 G$CAN0STA$0$0 == 0x00c0
                           0000C0   568 _CAN0STA	=	0x00c0
                           0000C1   569 G$SMB0STA$0$0 == 0x00c1
                           0000C1   570 _SMB0STA	=	0x00c1
                           0000C2   571 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   572 _SMB0DAT	=	0x00c2
                           0000C3   573 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   574 _SMB0ADR	=	0x00c3
                           0000C4   575 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   576 _ADC0GTL	=	0x00c4
                           0000C4   577 G$ADC2GT$0$0 == 0x00c4
                           0000C4   578 _ADC2GT	=	0x00c4
                           0000C5   579 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   580 _ADC0GTH	=	0x00c5
                           0000C6   581 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   582 _ADC0LTL	=	0x00c6
                           0000C6   583 G$ADC2LT$0$0 == 0x00c6
                           0000C6   584 _ADC2LT	=	0x00c6
                           0000C7   585 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   586 _ADC0LTH	=	0x00c7
                           0000C8   587 G$TMR2CN$0$0 == 0x00c8
                           0000C8   588 _TMR2CN	=	0x00c8
                           0000C8   589 G$TMR3CN$0$0 == 0x00c8
                           0000C8   590 _TMR3CN	=	0x00c8
                           0000C8   591 G$TMR4CN$0$0 == 0x00c8
                           0000C8   592 _TMR4CN	=	0x00c8
                           0000C8   593 G$P4$0$0 == 0x00c8
                           0000C8   594 _P4	=	0x00c8
                           0000C9   595 G$TMR2CF$0$0 == 0x00c9
                           0000C9   596 _TMR2CF	=	0x00c9
                           0000C9   597 G$TMR3CF$0$0 == 0x00c9
                           0000C9   598 _TMR3CF	=	0x00c9
                           0000C9   599 G$TMR4CF$0$0 == 0x00c9
                           0000C9   600 _TMR4CF	=	0x00c9
                           0000CA   601 G$RCAP2L$0$0 == 0x00ca
                           0000CA   602 _RCAP2L	=	0x00ca
                           0000CA   603 G$RCAP3L$0$0 == 0x00ca
                           0000CA   604 _RCAP3L	=	0x00ca
                           0000CA   605 G$RCAP4L$0$0 == 0x00ca
                           0000CA   606 _RCAP4L	=	0x00ca
                           0000CB   607 G$RCAP2H$0$0 == 0x00cb
                           0000CB   608 _RCAP2H	=	0x00cb
                           0000CB   609 G$RCAP3H$0$0 == 0x00cb
                           0000CB   610 _RCAP3H	=	0x00cb
                           0000CB   611 G$RCAP4H$0$0 == 0x00cb
                           0000CB   612 _RCAP4H	=	0x00cb
                           0000CC   613 G$TMR2L$0$0 == 0x00cc
                           0000CC   614 _TMR2L	=	0x00cc
                           0000CC   615 G$TMR3L$0$0 == 0x00cc
                           0000CC   616 _TMR3L	=	0x00cc
                           0000CC   617 G$TMR4L$0$0 == 0x00cc
                           0000CC   618 _TMR4L	=	0x00cc
                           0000CD   619 G$TMR2H$0$0 == 0x00cd
                           0000CD   620 _TMR2H	=	0x00cd
                           0000CD   621 G$TMR3H$0$0 == 0x00cd
                           0000CD   622 _TMR3H	=	0x00cd
                           0000CD   623 G$TMR4H$0$0 == 0x00cd
                           0000CD   624 _TMR4H	=	0x00cd
                           0000CF   625 G$SMB0CR$0$0 == 0x00cf
                           0000CF   626 _SMB0CR	=	0x00cf
                           0000D0   627 G$PSW$0$0 == 0x00d0
                           0000D0   628 _PSW	=	0x00d0
                           0000D1   629 G$REF0CN$0$0 == 0x00d1
                           0000D1   630 _REF0CN	=	0x00d1
                           0000D2   631 G$DAC0L$0$0 == 0x00d2
                           0000D2   632 _DAC0L	=	0x00d2
                           0000D2   633 G$DAC1L$0$0 == 0x00d2
                           0000D2   634 _DAC1L	=	0x00d2
                           0000D3   635 G$DAC0H$0$0 == 0x00d3
                           0000D3   636 _DAC0H	=	0x00d3
                           0000D3   637 G$DAC1H$0$0 == 0x00d3
                           0000D3   638 _DAC1H	=	0x00d3
                           0000D4   639 G$DAC0CN$0$0 == 0x00d4
                           0000D4   640 _DAC0CN	=	0x00d4
                           0000D4   641 G$DAC1CN$0$0 == 0x00d4
                           0000D4   642 _DAC1CN	=	0x00d4
                           0000D6   643 G$HVA0CN$0$0 == 0x00d6
                           0000D6   644 _HVA0CN	=	0x00d6
                           0000D8   645 G$PCA0CN$0$0 == 0x00d8
                           0000D8   646 _PCA0CN	=	0x00d8
                           0000D8   647 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   648 _CAN0DATL	=	0x00d8
                           0000D8   649 G$P5$0$0 == 0x00d8
                           0000D8   650 _P5	=	0x00d8
                           0000D9   651 G$PCA0MD$0$0 == 0x00d9
                           0000D9   652 _PCA0MD	=	0x00d9
                           0000D9   653 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   654 _CAN0DATH	=	0x00d9
                           0000DA   655 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   656 _PCA0CPM0	=	0x00da
                           0000DA   657 G$CAN0ADR$0$0 == 0x00da
                           0000DA   658 _CAN0ADR	=	0x00da
                           0000DB   659 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   660 _PCA0CPM1	=	0x00db
                           0000DB   661 G$CAN0TST$0$0 == 0x00db
                           0000DB   662 _CAN0TST	=	0x00db
                           0000DC   663 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   664 _PCA0CPM2	=	0x00dc
                           0000DD   665 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   666 _PCA0CPM3	=	0x00dd
                           0000DE   667 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   668 _PCA0CPM4	=	0x00de
                           0000DF   669 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   670 _PCA0CPM5	=	0x00df
                           0000E0   671 G$ACC$0$0 == 0x00e0
                           0000E0   672 _ACC	=	0x00e0
                           0000E1   673 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   674 _PCA0CPL5	=	0x00e1
                           0000E1   675 G$XBR0$0$0 == 0x00e1
                           0000E1   676 _XBR0	=	0x00e1
                           0000E2   677 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   678 _PCA0CPH5	=	0x00e2
                           0000E2   679 G$XBR1$0$0 == 0x00e2
                           0000E2   680 _XBR1	=	0x00e2
                           0000E3   681 G$XBR2$0$0 == 0x00e3
                           0000E3   682 _XBR2	=	0x00e3
                           0000E4   683 G$XBR3$0$0 == 0x00e4
                           0000E4   684 _XBR3	=	0x00e4
                           0000E6   685 G$EIE1$0$0 == 0x00e6
                           0000E6   686 _EIE1	=	0x00e6
                           0000E7   687 G$EIE2$0$0 == 0x00e7
                           0000E7   688 _EIE2	=	0x00e7
                           0000E8   689 G$ADC0CN$0$0 == 0x00e8
                           0000E8   690 _ADC0CN	=	0x00e8
                           0000E8   691 G$ADC2CN$0$0 == 0x00e8
                           0000E8   692 _ADC2CN	=	0x00e8
                           0000E8   693 G$P6$0$0 == 0x00e8
                           0000E8   694 _P6	=	0x00e8
                           0000E9   695 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   696 _PCA0CPL2	=	0x00e9
                           0000EA   697 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   698 _PCA0CPH2	=	0x00ea
                           0000EB   699 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   700 _PCA0CPL3	=	0x00eb
                           0000EC   701 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   702 _PCA0CPH3	=	0x00ec
                           0000ED   703 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   704 _PCA0CPL4	=	0x00ed
                           0000EE   705 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   706 _PCA0CPH4	=	0x00ee
                           0000EF   707 G$RSTSRC$0$0 == 0x00ef
                           0000EF   708 _RSTSRC	=	0x00ef
                           0000F0   709 G$B$0$0 == 0x00f0
                           0000F0   710 _B	=	0x00f0
                           0000F6   711 G$EIP1$0$0 == 0x00f6
                           0000F6   712 _EIP1	=	0x00f6
                           0000F7   713 G$EIP2$0$0 == 0x00f7
                           0000F7   714 _EIP2	=	0x00f7
                           0000F8   715 G$SPI0CN$0$0 == 0x00f8
                           0000F8   716 _SPI0CN	=	0x00f8
                           0000F8   717 G$CAN0CN$0$0 == 0x00f8
                           0000F8   718 _CAN0CN	=	0x00f8
                           0000F8   719 G$P7$0$0 == 0x00f8
                           0000F8   720 _P7	=	0x00f8
                           0000F9   721 G$PCA0L$0$0 == 0x00f9
                           0000F9   722 _PCA0L	=	0x00f9
                           0000FA   723 G$PCA0H$0$0 == 0x00fa
                           0000FA   724 _PCA0H	=	0x00fa
                           0000FB   725 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   726 _PCA0CPL0	=	0x00fb
                           0000FC   727 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   728 _PCA0CPH0	=	0x00fc
                           0000FD   729 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   730 _PCA0CPL1	=	0x00fd
                           0000FE   731 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   732 _PCA0CPH1	=	0x00fe
                           0000FF   733 G$WDTCN$0$0 == 0x00ff
                           0000FF   734 _WDTCN	=	0x00ff
                           00FAF9   735 G$PCA0$0$0 == 0xfaf9
                           00FAF9   736 _PCA0	=	0xfaf9
                           00FCFB   737 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   738 _PCA0CP0	=	0xfcfb
                           00FEFD   739 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   740 _PCA0CP1	=	0xfefd
                           00EAE9   741 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   742 _PCA0CP2	=	0xeae9
                           00ECEB   743 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   744 _PCA0CP3	=	0xeceb
                           00EEED   745 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   746 _PCA0CP4	=	0xeeed
                           00E2E1   747 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   748 _PCA0CP5	=	0xe2e1
                           00D9D8   749 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   750 _CAN0DAT	=	0xd9d8
                           00D3D2   751 G$DAC0$0$0 == 0xd3d2
                           00D3D2   752 _DAC0	=	0xd3d2
                           00D3D2   753 G$DAC1$0$0 == 0xd3d2
                           00D3D2   754 _DAC1	=	0xd3d2
                           00CBCA   755 G$RCAP2$0$0 == 0xcbca
                           00CBCA   756 _RCAP2	=	0xcbca
                           00CBCA   757 G$RCAP3$0$0 == 0xcbca
                           00CBCA   758 _RCAP3	=	0xcbca
                           00CBCA   759 G$RCAP4$0$0 == 0xcbca
                           00CBCA   760 _RCAP4	=	0xcbca
                           00CDCC   761 G$TMR2$0$0 == 0xcdcc
                           00CDCC   762 _TMR2	=	0xcdcc
                           00CDCC   763 G$TMR3$0$0 == 0xcdcc
                           00CDCC   764 _TMR3	=	0xcdcc
                           00CDCC   765 G$TMR4$0$0 == 0xcdcc
                           00CDCC   766 _TMR4	=	0xcdcc
                           00C5C4   767 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   768 _ADC0GT	=	0xc5c4
                           00C7C6   769 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   770 _ADC0LT	=	0xc7c6
                           00BFBE   771 G$ADC0$0$0 == 0xbfbe
                           00BFBE   772 _ADC0	=	0xbfbe
                           008382   773 G$DP$0$0 == 0x8382
                           008382   774 _DP	=	0x8382
                           0000A2   775 G$_XPAGE$0$0 == 0x00a2
                           0000A2   776 __XPAGE	=	0x00a2
                                    777 ;--------------------------------------------------------
                                    778 ; special function bits
                                    779 ;--------------------------------------------------------
                                    780 	.area RSEG    (ABS,DATA)
      000000                        781 	.org 0x0000
                           00008F   782 G$TF1$0$0 == 0x008f
                           00008F   783 _TF1	=	0x008f
                           00008E   784 G$TR1$0$0 == 0x008e
                           00008E   785 _TR1	=	0x008e
                           00008D   786 G$TF0$0$0 == 0x008d
                           00008D   787 _TF0	=	0x008d
                           00008C   788 G$TR0$0$0 == 0x008c
                           00008C   789 _TR0	=	0x008c
                           00008B   790 G$IE1$0$0 == 0x008b
                           00008B   791 _IE1	=	0x008b
                           00008A   792 G$IT1$0$0 == 0x008a
                           00008A   793 _IT1	=	0x008a
                           000089   794 G$IE0$0$0 == 0x0089
                           000089   795 _IE0	=	0x0089
                           000088   796 G$IT0$0$0 == 0x0088
                           000088   797 _IT0	=	0x0088
                           00008F   798 G$CP0EN$0$0 == 0x008f
                           00008F   799 _CP0EN	=	0x008f
                           00008E   800 G$CP0OUT$0$0 == 0x008e
                           00008E   801 _CP0OUT	=	0x008e
                           00008D   802 G$CP0RIF$0$0 == 0x008d
                           00008D   803 _CP0RIF	=	0x008d
                           00008C   804 G$CP0FIF$0$0 == 0x008c
                           00008C   805 _CP0FIF	=	0x008c
                           00008B   806 G$CP0HYP1$0$0 == 0x008b
                           00008B   807 _CP0HYP1	=	0x008b
                           00008A   808 G$CP0HYP0$0$0 == 0x008a
                           00008A   809 _CP0HYP0	=	0x008a
                           000089   810 G$CP0HYN1$0$0 == 0x0089
                           000089   811 _CP0HYN1	=	0x0089
                           000088   812 G$CP0HYN0$0$0 == 0x0088
                           000088   813 _CP0HYN0	=	0x0088
                           00008F   814 G$CP1EN$0$0 == 0x008f
                           00008F   815 _CP1EN	=	0x008f
                           00008E   816 G$CP1OUT$0$0 == 0x008e
                           00008E   817 _CP1OUT	=	0x008e
                           00008D   818 G$CP1RIF$0$0 == 0x008d
                           00008D   819 _CP1RIF	=	0x008d
                           00008C   820 G$CP1FIF$0$0 == 0x008c
                           00008C   821 _CP1FIF	=	0x008c
                           00008B   822 G$CP1HYP1$0$0 == 0x008b
                           00008B   823 _CP1HYP1	=	0x008b
                           00008A   824 G$CP1HYP0$0$0 == 0x008a
                           00008A   825 _CP1HYP0	=	0x008a
                           000089   826 G$CP1HYN1$0$0 == 0x0089
                           000089   827 _CP1HYN1	=	0x0089
                           000088   828 G$CP1HYN0$0$0 == 0x0088
                           000088   829 _CP1HYN0	=	0x0088
                           00008F   830 G$CP2EN$0$0 == 0x008f
                           00008F   831 _CP2EN	=	0x008f
                           00008E   832 G$CP2OUT$0$0 == 0x008e
                           00008E   833 _CP2OUT	=	0x008e
                           00008D   834 G$CP2RIF$0$0 == 0x008d
                           00008D   835 _CP2RIF	=	0x008d
                           00008C   836 G$CP2FIF$0$0 == 0x008c
                           00008C   837 _CP2FIF	=	0x008c
                           00008B   838 G$CP2HYP1$0$0 == 0x008b
                           00008B   839 _CP2HYP1	=	0x008b
                           00008A   840 G$CP2HYP0$0$0 == 0x008a
                           00008A   841 _CP2HYP0	=	0x008a
                           000089   842 G$CP2HYN1$0$0 == 0x0089
                           000089   843 _CP2HYN1	=	0x0089
                           000088   844 G$CP2HYN0$0$0 == 0x0088
                           000088   845 _CP2HYN0	=	0x0088
                           00009F   846 G$SM00$0$0 == 0x009f
                           00009F   847 _SM00	=	0x009f
                           00009E   848 G$SM10$0$0 == 0x009e
                           00009E   849 _SM10	=	0x009e
                           00009D   850 G$SM20$0$0 == 0x009d
                           00009D   851 _SM20	=	0x009d
                           00009C   852 G$REN0$0$0 == 0x009c
                           00009C   853 _REN0	=	0x009c
                           00009B   854 G$TB80$0$0 == 0x009b
                           00009B   855 _TB80	=	0x009b
                           00009A   856 G$RB80$0$0 == 0x009a
                           00009A   857 _RB80	=	0x009a
                           000099   858 G$TI0$0$0 == 0x0099
                           000099   859 _TI0	=	0x0099
                           000098   860 G$RI0$0$0 == 0x0098
                           000098   861 _RI0	=	0x0098
                           00009F   862 G$S1MODE$0$0 == 0x009f
                           00009F   863 _S1MODE	=	0x009f
                           00009D   864 G$MCE1$0$0 == 0x009d
                           00009D   865 _MCE1	=	0x009d
                           00009C   866 G$REN1$0$0 == 0x009c
                           00009C   867 _REN1	=	0x009c
                           00009B   868 G$TB81$0$0 == 0x009b
                           00009B   869 _TB81	=	0x009b
                           00009A   870 G$RB81$0$0 == 0x009a
                           00009A   871 _RB81	=	0x009a
                           000099   872 G$TI1$0$0 == 0x0099
                           000099   873 _TI1	=	0x0099
                           000098   874 G$RI1$0$0 == 0x0098
                           000098   875 _RI1	=	0x0098
                           0000AF   876 G$EA$0$0 == 0x00af
                           0000AF   877 _EA	=	0x00af
                           0000AD   878 G$ET2$0$0 == 0x00ad
                           0000AD   879 _ET2	=	0x00ad
                           0000AC   880 G$ES0$0$0 == 0x00ac
                           0000AC   881 _ES0	=	0x00ac
                           0000AB   882 G$ET1$0$0 == 0x00ab
                           0000AB   883 _ET1	=	0x00ab
                           0000AA   884 G$EX1$0$0 == 0x00aa
                           0000AA   885 _EX1	=	0x00aa
                           0000A9   886 G$ET0$0$0 == 0x00a9
                           0000A9   887 _ET0	=	0x00a9
                           0000A8   888 G$EX0$0$0 == 0x00a8
                           0000A8   889 _EX0	=	0x00a8
                           0000BD   890 G$PT2$0$0 == 0x00bd
                           0000BD   891 _PT2	=	0x00bd
                           0000BC   892 G$PS0$0$0 == 0x00bc
                           0000BC   893 _PS0	=	0x00bc
                           0000BB   894 G$PT1$0$0 == 0x00bb
                           0000BB   895 _PT1	=	0x00bb
                           0000BA   896 G$PX1$0$0 == 0x00ba
                           0000BA   897 _PX1	=	0x00ba
                           0000B9   898 G$PT0$0$0 == 0x00b9
                           0000B9   899 _PT0	=	0x00b9
                           0000B8   900 G$PX0$0$0 == 0x00b8
                           0000B8   901 _PX0	=	0x00b8
                           0000C7   902 G$BUSY$0$0 == 0x00c7
                           0000C7   903 _BUSY	=	0x00c7
                           0000C6   904 G$ENSMB$0$0 == 0x00c6
                           0000C6   905 _ENSMB	=	0x00c6
                           0000C5   906 G$STA$0$0 == 0x00c5
                           0000C5   907 _STA	=	0x00c5
                           0000C4   908 G$STO$0$0 == 0x00c4
                           0000C4   909 _STO	=	0x00c4
                           0000C3   910 G$SI$0$0 == 0x00c3
                           0000C3   911 _SI	=	0x00c3
                           0000C2   912 G$AA$0$0 == 0x00c2
                           0000C2   913 _AA	=	0x00c2
                           0000C1   914 G$SMBFTE$0$0 == 0x00c1
                           0000C1   915 _SMBFTE	=	0x00c1
                           0000C0   916 G$SMBTOE$0$0 == 0x00c0
                           0000C0   917 _SMBTOE	=	0x00c0
                           0000C7   918 G$BOFF$0$0 == 0x00c7
                           0000C7   919 _BOFF	=	0x00c7
                           0000C6   920 G$EWARN$0$0 == 0x00c6
                           0000C6   921 _EWARN	=	0x00c6
                           0000C5   922 G$EPASS$0$0 == 0x00c5
                           0000C5   923 _EPASS	=	0x00c5
                           0000C4   924 G$RXOK$0$0 == 0x00c4
                           0000C4   925 _RXOK	=	0x00c4
                           0000C3   926 G$TXOK$0$0 == 0x00c3
                           0000C3   927 _TXOK	=	0x00c3
                           0000C2   928 G$LEC2$0$0 == 0x00c2
                           0000C2   929 _LEC2	=	0x00c2
                           0000C1   930 G$LEC1$0$0 == 0x00c1
                           0000C1   931 _LEC1	=	0x00c1
                           0000C0   932 G$LEC0$0$0 == 0x00c0
                           0000C0   933 _LEC0	=	0x00c0
                           0000CF   934 G$TF2$0$0 == 0x00cf
                           0000CF   935 _TF2	=	0x00cf
                           0000CE   936 G$EXF2$0$0 == 0x00ce
                           0000CE   937 _EXF2	=	0x00ce
                           0000CB   938 G$EXEN2$0$0 == 0x00cb
                           0000CB   939 _EXEN2	=	0x00cb
                           0000CA   940 G$TR2$0$0 == 0x00ca
                           0000CA   941 _TR2	=	0x00ca
                           0000C9   942 G$CT2$0$0 == 0x00c9
                           0000C9   943 _CT2	=	0x00c9
                           0000C8   944 G$CPRL2$0$0 == 0x00c8
                           0000C8   945 _CPRL2	=	0x00c8
                           0000CF   946 G$TF3$0$0 == 0x00cf
                           0000CF   947 _TF3	=	0x00cf
                           0000CE   948 G$EXF3$0$0 == 0x00ce
                           0000CE   949 _EXF3	=	0x00ce
                           0000CB   950 G$EXEN3$0$0 == 0x00cb
                           0000CB   951 _EXEN3	=	0x00cb
                           0000CA   952 G$TR3$0$0 == 0x00ca
                           0000CA   953 _TR3	=	0x00ca
                           0000C9   954 G$CT3$0$0 == 0x00c9
                           0000C9   955 _CT3	=	0x00c9
                           0000C8   956 G$CPRL3$0$0 == 0x00c8
                           0000C8   957 _CPRL3	=	0x00c8
                           0000CF   958 G$TF4$0$0 == 0x00cf
                           0000CF   959 _TF4	=	0x00cf
                           0000CE   960 G$EXF4$0$0 == 0x00ce
                           0000CE   961 _EXF4	=	0x00ce
                           0000CB   962 G$EXEN4$0$0 == 0x00cb
                           0000CB   963 _EXEN4	=	0x00cb
                           0000CA   964 G$TR4$0$0 == 0x00ca
                           0000CA   965 _TR4	=	0x00ca
                           0000C9   966 G$CT4$0$0 == 0x00c9
                           0000C9   967 _CT4	=	0x00c9
                           0000C8   968 G$CPRL4$0$0 == 0x00c8
                           0000C8   969 _CPRL4	=	0x00c8
                           0000D7   970 G$CY$0$0 == 0x00d7
                           0000D7   971 _CY	=	0x00d7
                           0000D6   972 G$AC$0$0 == 0x00d6
                           0000D6   973 _AC	=	0x00d6
                           0000D5   974 G$F0$0$0 == 0x00d5
                           0000D5   975 _F0	=	0x00d5
                           0000D4   976 G$RS1$0$0 == 0x00d4
                           0000D4   977 _RS1	=	0x00d4
                           0000D3   978 G$RS0$0$0 == 0x00d3
                           0000D3   979 _RS0	=	0x00d3
                           0000D2   980 G$OV$0$0 == 0x00d2
                           0000D2   981 _OV	=	0x00d2
                           0000D1   982 G$F1$0$0 == 0x00d1
                           0000D1   983 _F1	=	0x00d1
                           0000D0   984 G$P$0$0 == 0x00d0
                           0000D0   985 _P	=	0x00d0
                           0000DF   986 G$CF$0$0 == 0x00df
                           0000DF   987 _CF	=	0x00df
                           0000DE   988 G$CR$0$0 == 0x00de
                           0000DE   989 _CR	=	0x00de
                           0000DD   990 G$CCF5$0$0 == 0x00dd
                           0000DD   991 _CCF5	=	0x00dd
                           0000DC   992 G$CCF4$0$0 == 0x00dc
                           0000DC   993 _CCF4	=	0x00dc
                           0000DB   994 G$CCF3$0$0 == 0x00db
                           0000DB   995 _CCF3	=	0x00db
                           0000DA   996 G$CCF2$0$0 == 0x00da
                           0000DA   997 _CCF2	=	0x00da
                           0000D9   998 G$CCF1$0$0 == 0x00d9
                           0000D9   999 _CCF1	=	0x00d9
                           0000D8  1000 G$CCF0$0$0 == 0x00d8
                           0000D8  1001 _CCF0	=	0x00d8
                           0000EF  1002 G$AD0EN$0$0 == 0x00ef
                           0000EF  1003 _AD0EN	=	0x00ef
                           0000EE  1004 G$AD0TM$0$0 == 0x00ee
                           0000EE  1005 _AD0TM	=	0x00ee
                           0000ED  1006 G$AD0INT$0$0 == 0x00ed
                           0000ED  1007 _AD0INT	=	0x00ed
                           0000EC  1008 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1009 _AD0BUSY	=	0x00ec
                           0000EB  1010 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1011 _AD0CM1	=	0x00eb
                           0000EA  1012 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1013 _AD0CM0	=	0x00ea
                           0000E9  1014 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1015 _AD0WINT	=	0x00e9
                           0000E8  1016 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1017 _AD0LJST	=	0x00e8
                           0000EF  1018 G$AD2EN$0$0 == 0x00ef
                           0000EF  1019 _AD2EN	=	0x00ef
                           0000EE  1020 G$AD2TM$0$0 == 0x00ee
                           0000EE  1021 _AD2TM	=	0x00ee
                           0000ED  1022 G$AD2INT$0$0 == 0x00ed
                           0000ED  1023 _AD2INT	=	0x00ed
                           0000EC  1024 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1025 _AD2BUSY	=	0x00ec
                           0000EB  1026 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1027 _AD2CM2	=	0x00eb
                           0000EA  1028 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1029 _AD2CM1	=	0x00ea
                           0000E9  1030 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1031 _AD2CM0	=	0x00e9
                           0000E8  1032 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1033 _AD2WINT	=	0x00e8
                           0000FF  1034 G$SPIF$0$0 == 0x00ff
                           0000FF  1035 _SPIF	=	0x00ff
                           0000FE  1036 G$WCOL$0$0 == 0x00fe
                           0000FE  1037 _WCOL	=	0x00fe
                           0000FD  1038 G$MODF$0$0 == 0x00fd
                           0000FD  1039 _MODF	=	0x00fd
                           0000FC  1040 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1041 _RXOVRN	=	0x00fc
                           0000FB  1042 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1043 _NSSMD1	=	0x00fb
                           0000FA  1044 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1045 _NSSMD0	=	0x00fa
                           0000F9  1046 G$TXBMT$0$0 == 0x00f9
                           0000F9  1047 _TXBMT	=	0x00f9
                           0000F8  1048 G$SPIEN$0$0 == 0x00f8
                           0000F8  1049 _SPIEN	=	0x00f8
                           0000F8  1050 G$CANINIT$0$0 == 0x00f8
                           0000F8  1051 _CANINIT	=	0x00f8
                           0000F9  1052 G$CANIE$0$0 == 0x00f9
                           0000F9  1053 _CANIE	=	0x00f9
                           0000FA  1054 G$CANSIE$0$0 == 0x00fa
                           0000FA  1055 _CANSIE	=	0x00fa
                           0000FB  1056 G$CANEIE$0$0 == 0x00fb
                           0000FB  1057 _CANEIE	=	0x00fb
                           0000FC  1058 G$CANIF$0$0 == 0x00fc
                           0000FC  1059 _CANIF	=	0x00fc
                           0000FD  1060 G$CANDAR$0$0 == 0x00fd
                           0000FD  1061 _CANDAR	=	0x00fd
                           0000FE  1062 G$CANCCE$0$0 == 0x00fe
                           0000FE  1063 _CANCCE	=	0x00fe
                           0000FF  1064 G$CANTEST$0$0 == 0x00ff
                           0000FF  1065 _CANTEST	=	0x00ff
                           000080  1066 G$P0_0$0$0 == 0x0080
                           000080  1067 _P0_0	=	0x0080
                           000081  1068 G$P0_1$0$0 == 0x0081
                           000081  1069 _P0_1	=	0x0081
                           000082  1070 G$P0_2$0$0 == 0x0082
                           000082  1071 _P0_2	=	0x0082
                           000083  1072 G$P0_3$0$0 == 0x0083
                           000083  1073 _P0_3	=	0x0083
                           000084  1074 G$P0_4$0$0 == 0x0084
                           000084  1075 _P0_4	=	0x0084
                           000085  1076 G$P0_5$0$0 == 0x0085
                           000085  1077 _P0_5	=	0x0085
                           000086  1078 G$P0_6$0$0 == 0x0086
                           000086  1079 _P0_6	=	0x0086
                           000087  1080 G$P0_7$0$0 == 0x0087
                           000087  1081 _P0_7	=	0x0087
                           000090  1082 G$P1_0$0$0 == 0x0090
                           000090  1083 _P1_0	=	0x0090
                           000091  1084 G$P1_1$0$0 == 0x0091
                           000091  1085 _P1_1	=	0x0091
                           000092  1086 G$P1_2$0$0 == 0x0092
                           000092  1087 _P1_2	=	0x0092
                           000093  1088 G$P1_3$0$0 == 0x0093
                           000093  1089 _P1_3	=	0x0093
                           000094  1090 G$P1_4$0$0 == 0x0094
                           000094  1091 _P1_4	=	0x0094
                           000095  1092 G$P1_5$0$0 == 0x0095
                           000095  1093 _P1_5	=	0x0095
                           000096  1094 G$P1_6$0$0 == 0x0096
                           000096  1095 _P1_6	=	0x0096
                           000097  1096 G$P1_7$0$0 == 0x0097
                           000097  1097 _P1_7	=	0x0097
                           0000A0  1098 G$P2_0$0$0 == 0x00a0
                           0000A0  1099 _P2_0	=	0x00a0
                           0000A1  1100 G$P2_1$0$0 == 0x00a1
                           0000A1  1101 _P2_1	=	0x00a1
                           0000A2  1102 G$P2_2$0$0 == 0x00a2
                           0000A2  1103 _P2_2	=	0x00a2
                           0000A3  1104 G$P2_3$0$0 == 0x00a3
                           0000A3  1105 _P2_3	=	0x00a3
                           0000A4  1106 G$P2_4$0$0 == 0x00a4
                           0000A4  1107 _P2_4	=	0x00a4
                           0000A5  1108 G$P2_5$0$0 == 0x00a5
                           0000A5  1109 _P2_5	=	0x00a5
                           0000A6  1110 G$P2_6$0$0 == 0x00a6
                           0000A6  1111 _P2_6	=	0x00a6
                           0000A7  1112 G$P2_7$0$0 == 0x00a7
                           0000A7  1113 _P2_7	=	0x00a7
                           0000B0  1114 G$P3_0$0$0 == 0x00b0
                           0000B0  1115 _P3_0	=	0x00b0
                           0000B1  1116 G$P3_1$0$0 == 0x00b1
                           0000B1  1117 _P3_1	=	0x00b1
                           0000B2  1118 G$P3_2$0$0 == 0x00b2
                           0000B2  1119 _P3_2	=	0x00b2
                           0000B3  1120 G$P3_3$0$0 == 0x00b3
                           0000B3  1121 _P3_3	=	0x00b3
                           0000B4  1122 G$P3_4$0$0 == 0x00b4
                           0000B4  1123 _P3_4	=	0x00b4
                           0000B5  1124 G$P3_5$0$0 == 0x00b5
                           0000B5  1125 _P3_5	=	0x00b5
                           0000B6  1126 G$P3_6$0$0 == 0x00b6
                           0000B6  1127 _P3_6	=	0x00b6
                           0000B7  1128 G$P3_7$0$0 == 0x00b7
                           0000B7  1129 _P3_7	=	0x00b7
                           0000C8  1130 G$P4_0$0$0 == 0x00c8
                           0000C8  1131 _P4_0	=	0x00c8
                           0000C9  1132 G$P4_1$0$0 == 0x00c9
                           0000C9  1133 _P4_1	=	0x00c9
                           0000CA  1134 G$P4_2$0$0 == 0x00ca
                           0000CA  1135 _P4_2	=	0x00ca
                           0000CB  1136 G$P4_3$0$0 == 0x00cb
                           0000CB  1137 _P4_3	=	0x00cb
                           0000CC  1138 G$P4_4$0$0 == 0x00cc
                           0000CC  1139 _P4_4	=	0x00cc
                           0000CD  1140 G$P4_5$0$0 == 0x00cd
                           0000CD  1141 _P4_5	=	0x00cd
                           0000CE  1142 G$P4_6$0$0 == 0x00ce
                           0000CE  1143 _P4_6	=	0x00ce
                           0000CF  1144 G$P4_7$0$0 == 0x00cf
                           0000CF  1145 _P4_7	=	0x00cf
                           0000D8  1146 G$P5_0$0$0 == 0x00d8
                           0000D8  1147 _P5_0	=	0x00d8
                           0000D9  1148 G$P5_1$0$0 == 0x00d9
                           0000D9  1149 _P5_1	=	0x00d9
                           0000DA  1150 G$P5_2$0$0 == 0x00da
                           0000DA  1151 _P5_2	=	0x00da
                           0000DB  1152 G$P5_3$0$0 == 0x00db
                           0000DB  1153 _P5_3	=	0x00db
                           0000DC  1154 G$P5_4$0$0 == 0x00dc
                           0000DC  1155 _P5_4	=	0x00dc
                           0000DD  1156 G$P5_5$0$0 == 0x00dd
                           0000DD  1157 _P5_5	=	0x00dd
                           0000DE  1158 G$P5_6$0$0 == 0x00de
                           0000DE  1159 _P5_6	=	0x00de
                           0000DF  1160 G$P5_7$0$0 == 0x00df
                           0000DF  1161 _P5_7	=	0x00df
                           0000E8  1162 G$P6_0$0$0 == 0x00e8
                           0000E8  1163 _P6_0	=	0x00e8
                           0000E9  1164 G$P6_1$0$0 == 0x00e9
                           0000E9  1165 _P6_1	=	0x00e9
                           0000EA  1166 G$P6_2$0$0 == 0x00ea
                           0000EA  1167 _P6_2	=	0x00ea
                           0000EB  1168 G$P6_3$0$0 == 0x00eb
                           0000EB  1169 _P6_3	=	0x00eb
                           0000EC  1170 G$P6_4$0$0 == 0x00ec
                           0000EC  1171 _P6_4	=	0x00ec
                           0000ED  1172 G$P6_5$0$0 == 0x00ed
                           0000ED  1173 _P6_5	=	0x00ed
                           0000EE  1174 G$P6_6$0$0 == 0x00ee
                           0000EE  1175 _P6_6	=	0x00ee
                           0000EF  1176 G$P6_7$0$0 == 0x00ef
                           0000EF  1177 _P6_7	=	0x00ef
                           0000F8  1178 G$P7_0$0$0 == 0x00f8
                           0000F8  1179 _P7_0	=	0x00f8
                           0000F9  1180 G$P7_1$0$0 == 0x00f9
                           0000F9  1181 _P7_1	=	0x00f9
                           0000FA  1182 G$P7_2$0$0 == 0x00fa
                           0000FA  1183 _P7_2	=	0x00fa
                           0000FB  1184 G$P7_3$0$0 == 0x00fb
                           0000FB  1185 _P7_3	=	0x00fb
                           0000FC  1186 G$P7_4$0$0 == 0x00fc
                           0000FC  1187 _P7_4	=	0x00fc
                           0000FD  1188 G$P7_5$0$0 == 0x00fd
                           0000FD  1189 _P7_5	=	0x00fd
                           0000FE  1190 G$P7_6$0$0 == 0x00fe
                           0000FE  1191 _P7_6	=	0x00fe
                           0000FF  1192 G$P7_7$0$0 == 0x00ff
                           0000FF  1193 _P7_7	=	0x00ff
                                   1194 ;--------------------------------------------------------
                                   1195 ; overlayable register banks
                                   1196 ;--------------------------------------------------------
                                   1197 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1198 	.ds 8
                                   1199 ;--------------------------------------------------------
                                   1200 ; internal ram data
                                   1201 ;--------------------------------------------------------
                                   1202 	.area DSEG    (DATA)
                                   1203 ;--------------------------------------------------------
                                   1204 ; overlayable items in internal ram 
                                   1205 ;--------------------------------------------------------
                                   1206 	.area	OSEG    (OVR,DATA)
                                   1207 	.area	OSEG    (OVR,DATA)
                                   1208 	.area	OSEG    (OVR,DATA)
                                   1209 	.area	OSEG    (OVR,DATA)
                                   1210 	.area	OSEG    (OVR,DATA)
                                   1211 ;--------------------------------------------------------
                                   1212 ; Stack segment in internal ram 
                                   1213 ;--------------------------------------------------------
                                   1214 	.area	SSEG
      000022                       1215 __start__stack:
      000022                       1216 	.ds	1
                                   1217 
                                   1218 ;--------------------------------------------------------
                                   1219 ; indirectly addressable internal ram data
                                   1220 ;--------------------------------------------------------
                                   1221 	.area ISEG    (DATA)
                                   1222 ;--------------------------------------------------------
                                   1223 ; absolute internal ram data
                                   1224 ;--------------------------------------------------------
                                   1225 	.area IABS    (ABS,DATA)
                                   1226 	.area IABS    (ABS,DATA)
                                   1227 ;--------------------------------------------------------
                                   1228 ; bit data
                                   1229 ;--------------------------------------------------------
                                   1230 	.area BSEG    (BIT)
                           000000  1231 Lmain.le_glcd$cd$1$30==.
      000000                       1232 _le_glcd_PARM_1:
      000000                       1233 	.ds 1
                           000001  1234 Lmain.le_glcd$cs$1$30==.
      000001                       1235 _le_glcd_PARM_2:
      000001                       1236 	.ds 1
                           000002  1237 Lmain.esc_glcd$cd$1$32==.
      000002                       1238 _esc_glcd_PARM_2:
      000002                       1239 	.ds 1
                           000003  1240 Lmain.esc_glcd$cs$1$32==.
      000003                       1241 _esc_glcd_PARM_3:
      000003                       1242 	.ds 1
                           000004  1243 Lmain.conf_Y$cs$1$36==.
      000004                       1244 _conf_Y_PARM_2:
      000004                       1245 	.ds 1
                           000005  1246 Lmain.conf_pag$cs$1$38==.
      000005                       1247 _conf_pag_PARM_2:
      000005                       1248 	.ds 1
                           000006  1249 Lmain.limpa_glcd$cs$1$40==.
      000006                       1250 _limpa_glcd_PARM_1:
      000006                       1251 	.ds 1
                           000007  1252 G$fbr$0$0==.
      000007                       1253 _fbr::
      000007                       1254 	.ds 1
                                   1255 ;--------------------------------------------------------
                                   1256 ; paged external ram data
                                   1257 ;--------------------------------------------------------
                                   1258 	.area PSEG    (PAG,XDATA)
                                   1259 ;--------------------------------------------------------
                                   1260 ; external ram data
                                   1261 ;--------------------------------------------------------
                                   1262 	.area XSEG    (XDATA)
                                   1263 ;--------------------------------------------------------
                                   1264 ; absolute external ram data
                                   1265 ;--------------------------------------------------------
                                   1266 	.area XABS    (ABS,XDATA)
                                   1267 ;--------------------------------------------------------
                                   1268 ; external initialized ram data
                                   1269 ;--------------------------------------------------------
                                   1270 	.area XISEG   (XDATA)
                                   1271 	.area HOME    (CODE)
                                   1272 	.area GSINIT0 (CODE)
                                   1273 	.area GSINIT1 (CODE)
                                   1274 	.area GSINIT2 (CODE)
                                   1275 	.area GSINIT3 (CODE)
                                   1276 	.area GSINIT4 (CODE)
                                   1277 	.area GSINIT5 (CODE)
                                   1278 	.area GSINIT  (CODE)
                                   1279 	.area GSFINAL (CODE)
                                   1280 	.area CSEG    (CODE)
                                   1281 ;--------------------------------------------------------
                                   1282 ; interrupt vector 
                                   1283 ;--------------------------------------------------------
                                   1284 	.area HOME    (CODE)
      000000                       1285 __interrupt_vect:
      000000 02 00 29         [24] 1286 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1287 	reti
      000004                       1288 	.ds	7
      00000B 32               [24] 1289 	reti
      00000C                       1290 	.ds	7
      000013 32               [24] 1291 	reti
      000014                       1292 	.ds	7
      00001B 32               [24] 1293 	reti
      00001C                       1294 	.ds	7
      000023 02 02 DE         [24] 1295 	ljmp	_int_serial
                                   1296 ;--------------------------------------------------------
                                   1297 ; global & static initialisations
                                   1298 ;--------------------------------------------------------
                                   1299 	.area HOME    (CODE)
                                   1300 	.area GSINIT  (CODE)
                                   1301 	.area GSFINAL (CODE)
                                   1302 	.area GSINIT  (CODE)
                                   1303 	.globl __sdcc_gsinit_startup
                                   1304 	.globl __sdcc_program_startup
                                   1305 	.globl __start__stack
                                   1306 	.globl __mcs51_genXINIT
                                   1307 	.globl __mcs51_genXRAMCLEAR
                                   1308 	.globl __mcs51_genRAMCLEAR
                           000000  1309 	C$main.c$257$1$48 ==.
                                   1310 ;	Z:\MICAP\RS-232\main.c:257: volatile __bit fbr = 0;
      000082 C2 07            [12] 1311 	clr	_fbr
                                   1312 	.area GSFINAL (CODE)
      000084 02 00 26         [24] 1313 	ljmp	__sdcc_program_startup
                                   1314 ;--------------------------------------------------------
                                   1315 ; Home
                                   1316 ;--------------------------------------------------------
                                   1317 	.area HOME    (CODE)
                                   1318 	.area HOME    (CODE)
      000026                       1319 __sdcc_program_startup:
      000026 02 02 E6         [24] 1320 	ljmp	_main
                                   1321 ;	return from main will return to caller
                                   1322 ;--------------------------------------------------------
                                   1323 ; code
                                   1324 ;--------------------------------------------------------
                                   1325 	.area CSEG    (CODE)
                                   1326 ;------------------------------------------------------------
                                   1327 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1328 ;------------------------------------------------------------
                           000000  1329 	G$Reset_Sources_Init$0$0 ==.
                           000000  1330 	C$config.c$10$0$0 ==.
                                   1331 ;	Z:\MICAP\RS-232\/config.c:10: void Reset_Sources_Init()
                                   1332 ;	-----------------------------------------
                                   1333 ;	 function Reset_Sources_Init
                                   1334 ;	-----------------------------------------
      000087                       1335 _Reset_Sources_Init:
                           000007  1336 	ar7 = 0x07
                           000006  1337 	ar6 = 0x06
                           000005  1338 	ar5 = 0x05
                           000004  1339 	ar4 = 0x04
                           000003  1340 	ar3 = 0x03
                           000002  1341 	ar2 = 0x02
                           000001  1342 	ar1 = 0x01
                           000000  1343 	ar0 = 0x00
                           000000  1344 	C$config.c$12$1$1 ==.
                                   1345 ;	Z:\MICAP\RS-232\/config.c:12: WDTCN     = 0xDE;
      000087 75 FF DE         [24] 1346 	mov	_WDTCN,#0xde
                           000003  1347 	C$config.c$13$1$1 ==.
                                   1348 ;	Z:\MICAP\RS-232\/config.c:13: WDTCN     = 0xAD;
      00008A 75 FF AD         [24] 1349 	mov	_WDTCN,#0xad
                           000006  1350 	C$config.c$14$1$1 ==.
                           000006  1351 	XG$Reset_Sources_Init$0$0 ==.
      00008D 22               [24] 1352 	ret
                                   1353 ;------------------------------------------------------------
                                   1354 ;Allocation info for local variables in function 'Timer_Init'
                                   1355 ;------------------------------------------------------------
                           000007  1356 	G$Timer_Init$0$0 ==.
                           000007  1357 	C$config.c$16$1$1 ==.
                                   1358 ;	Z:\MICAP\RS-232\/config.c:16: void Timer_Init()
                                   1359 ;	-----------------------------------------
                                   1360 ;	 function Timer_Init
                                   1361 ;	-----------------------------------------
      00008E                       1362 _Timer_Init:
                           000007  1363 	C$config.c$18$1$2 ==.
                                   1364 ;	Z:\MICAP\RS-232\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      00008E 75 84 00         [24] 1365 	mov	_SFRPAGE,#0x00
                           00000A  1366 	C$config.c$19$1$2 ==.
                                   1367 ;	Z:\MICAP\RS-232\/config.c:19: TCON      = 0x40;
      000091 75 88 40         [24] 1368 	mov	_TCON,#0x40
                           00000D  1369 	C$config.c$20$1$2 ==.
                                   1370 ;	Z:\MICAP\RS-232\/config.c:20: TMOD      = 0x21;
      000094 75 89 21         [24] 1371 	mov	_TMOD,#0x21
                           000010  1372 	C$config.c$21$1$2 ==.
                                   1373 ;	Z:\MICAP\RS-232\/config.c:21: CKCON     = 0x18;
      000097 75 8E 18         [24] 1374 	mov	_CKCON,#0x18
                           000013  1375 	C$config.c$22$1$2 ==.
                                   1376 ;	Z:\MICAP\RS-232\/config.c:22: TH1       = 0xAF;
      00009A 75 8D AF         [24] 1377 	mov	_TH1,#0xaf
                           000016  1378 	C$config.c$23$1$2 ==.
                                   1379 ;	Z:\MICAP\RS-232\/config.c:23: SFRPAGE   = TMR4_PAGE;
      00009D 75 84 02         [24] 1380 	mov	_SFRPAGE,#0x02
                           000019  1381 	C$config.c$24$1$2 ==.
                                   1382 ;	Z:\MICAP\RS-232\/config.c:24: TMR4CN    = 0x04;
      0000A0 75 C8 04         [24] 1383 	mov	_TMR4CN,#0x04
                           00001C  1384 	C$config.c$25$1$2 ==.
                                   1385 ;	Z:\MICAP\RS-232\/config.c:25: TMR4CF    = 0x02;
      0000A3 75 C9 02         [24] 1386 	mov	_TMR4CF,#0x02
                           00001F  1387 	C$config.c$26$1$2 ==.
                                   1388 ;	Z:\MICAP\RS-232\/config.c:26: RCAP4L    = 0x8D;
      0000A6 75 CA 8D         [24] 1389 	mov	_RCAP4L,#0x8d
                           000022  1390 	C$config.c$27$1$2 ==.
                                   1391 ;	Z:\MICAP\RS-232\/config.c:27: RCAP4H    = 0x34;
      0000A9 75 CB 34         [24] 1392 	mov	_RCAP4H,#0x34
                           000025  1393 	C$config.c$28$1$2 ==.
                           000025  1394 	XG$Timer_Init$0$0 ==.
      0000AC 22               [24] 1395 	ret
                                   1396 ;------------------------------------------------------------
                                   1397 ;Allocation info for local variables in function 'UART_Init'
                                   1398 ;------------------------------------------------------------
                           000026  1399 	G$UART_Init$0$0 ==.
                           000026  1400 	C$config.c$30$1$2 ==.
                                   1401 ;	Z:\MICAP\RS-232\/config.c:30: void UART_Init()
                                   1402 ;	-----------------------------------------
                                   1403 ;	 function UART_Init
                                   1404 ;	-----------------------------------------
      0000AD                       1405 _UART_Init:
                           000026  1406 	C$config.c$32$1$3 ==.
                                   1407 ;	Z:\MICAP\RS-232\/config.c:32: SFRPAGE   = UART0_PAGE;
      0000AD 75 84 00         [24] 1408 	mov	_SFRPAGE,#0x00
                           000029  1409 	C$config.c$33$1$3 ==.
                                   1410 ;	Z:\MICAP\RS-232\/config.c:33: SCON0     = 0x70;
      0000B0 75 98 70         [24] 1411 	mov	_SCON0,#0x70
                           00002C  1412 	C$config.c$34$1$3 ==.
                           00002C  1413 	XG$UART_Init$0$0 ==.
      0000B3 22               [24] 1414 	ret
                                   1415 ;------------------------------------------------------------
                                   1416 ;Allocation info for local variables in function 'SMBus_Init'
                                   1417 ;------------------------------------------------------------
                           00002D  1418 	G$SMBus_Init$0$0 ==.
                           00002D  1419 	C$config.c$36$1$3 ==.
                                   1420 ;	Z:\MICAP\RS-232\/config.c:36: void SMBus_Init()
                                   1421 ;	-----------------------------------------
                                   1422 ;	 function SMBus_Init
                                   1423 ;	-----------------------------------------
      0000B4                       1424 _SMBus_Init:
                           00002D  1425 	C$config.c$38$1$4 ==.
                                   1426 ;	Z:\MICAP\RS-232\/config.c:38: SFRPAGE   = SMB0_PAGE;
      0000B4 75 84 00         [24] 1427 	mov	_SFRPAGE,#0x00
                           000030  1428 	C$config.c$39$1$4 ==.
                                   1429 ;	Z:\MICAP\RS-232\/config.c:39: SMB0CN    = 0x41;
      0000B7 75 C0 41         [24] 1430 	mov	_SMB0CN,#0x41
                           000033  1431 	C$config.c$40$1$4 ==.
                                   1432 ;	Z:\MICAP\RS-232\/config.c:40: SMB0CR    = 0xE9;
      0000BA 75 CF E9         [24] 1433 	mov	_SMB0CR,#0xe9
                           000036  1434 	C$config.c$41$1$4 ==.
                           000036  1435 	XG$SMBus_Init$0$0 ==.
      0000BD 22               [24] 1436 	ret
                                   1437 ;------------------------------------------------------------
                                   1438 ;Allocation info for local variables in function 'SPI_Init'
                                   1439 ;------------------------------------------------------------
                           000037  1440 	G$SPI_Init$0$0 ==.
                           000037  1441 	C$config.c$43$1$4 ==.
                                   1442 ;	Z:\MICAP\RS-232\/config.c:43: void SPI_Init()
                                   1443 ;	-----------------------------------------
                                   1444 ;	 function SPI_Init
                                   1445 ;	-----------------------------------------
      0000BE                       1446 _SPI_Init:
                           000037  1447 	C$config.c$45$1$5 ==.
                                   1448 ;	Z:\MICAP\RS-232\/config.c:45: SFRPAGE   = SPI0_PAGE;
      0000BE 75 84 00         [24] 1449 	mov	_SFRPAGE,#0x00
                           00003A  1450 	C$config.c$46$1$5 ==.
                                   1451 ;	Z:\MICAP\RS-232\/config.c:46: SPI0CFG   = 0x40;
      0000C1 75 9A 40         [24] 1452 	mov	_SPI0CFG,#0x40
                           00003D  1453 	C$config.c$47$1$5 ==.
                                   1454 ;	Z:\MICAP\RS-232\/config.c:47: SPI0CN    = 0x01;
      0000C4 75 F8 01         [24] 1455 	mov	_SPI0CN,#0x01
                           000040  1456 	C$config.c$48$1$5 ==.
                                   1457 ;	Z:\MICAP\RS-232\/config.c:48: SPI0CKR   = 0x7C;
      0000C7 75 9D 7C         [24] 1458 	mov	_SPI0CKR,#0x7c
                           000043  1459 	C$config.c$49$1$5 ==.
                           000043  1460 	XG$SPI_Init$0$0 ==.
      0000CA 22               [24] 1461 	ret
                                   1462 ;------------------------------------------------------------
                                   1463 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1464 ;------------------------------------------------------------
                           000044  1465 	G$Port_IO_Init$0$0 ==.
                           000044  1466 	C$config.c$51$1$5 ==.
                                   1467 ;	Z:\MICAP\RS-232\/config.c:51: void Port_IO_Init()
                                   1468 ;	-----------------------------------------
                                   1469 ;	 function Port_IO_Init
                                   1470 ;	-----------------------------------------
      0000CB                       1471 _Port_IO_Init:
                           000044  1472 	C$config.c$89$1$6 ==.
                                   1473 ;	Z:\MICAP\RS-232\/config.c:89: SFRPAGE   = CONFIG_PAGE;
      0000CB 75 84 0F         [24] 1474 	mov	_SFRPAGE,#0x0f
                           000047  1475 	C$config.c$90$1$6 ==.
                                   1476 ;	Z:\MICAP\RS-232\/config.c:90: XBR0      = 0x04;
      0000CE 75 E1 04         [24] 1477 	mov	_XBR0,#0x04
                           00004A  1478 	C$config.c$91$1$6 ==.
                                   1479 ;	Z:\MICAP\RS-232\/config.c:91: XBR2      = 0x40;
      0000D1 75 E3 40         [24] 1480 	mov	_XBR2,#0x40
                           00004D  1481 	C$config.c$92$1$6 ==.
                           00004D  1482 	XG$Port_IO_Init$0$0 ==.
      0000D4 22               [24] 1483 	ret
                                   1484 ;------------------------------------------------------------
                                   1485 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1486 ;------------------------------------------------------------
                                   1487 ;i                         Allocated to registers r6 r7 
                                   1488 ;------------------------------------------------------------
                           00004E  1489 	G$Oscillator_Init$0$0 ==.
                           00004E  1490 	C$config.c$94$1$6 ==.
                                   1491 ;	Z:\MICAP\RS-232\/config.c:94: void Oscillator_Init()
                                   1492 ;	-----------------------------------------
                                   1493 ;	 function Oscillator_Init
                                   1494 ;	-----------------------------------------
      0000D5                       1495 _Oscillator_Init:
                           00004E  1496 	C$config.c$97$1$7 ==.
                                   1497 ;	Z:\MICAP\RS-232\/config.c:97: SFRPAGE   = CONFIG_PAGE;
      0000D5 75 84 0F         [24] 1498 	mov	_SFRPAGE,#0x0f
                           000051  1499 	C$config.c$98$1$7 ==.
                                   1500 ;	Z:\MICAP\RS-232\/config.c:98: OSCXCN    = 0x67;
      0000D8 75 8C 67         [24] 1501 	mov	_OSCXCN,#0x67
                           000054  1502 	C$config.c$99$1$7 ==.
                                   1503 ;	Z:\MICAP\RS-232\/config.c:99: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      0000DB 7E B8            [12] 1504 	mov	r6,#0xb8
      0000DD 7F 0B            [12] 1505 	mov	r7,#0x0b
      0000DF                       1506 00107$:
      0000DF EE               [12] 1507 	mov	a,r6
      0000E0 24 FF            [12] 1508 	add	a,#0xff
      0000E2 FC               [12] 1509 	mov	r4,a
      0000E3 EF               [12] 1510 	mov	a,r7
      0000E4 34 FF            [12] 1511 	addc	a,#0xff
      0000E6 FD               [12] 1512 	mov	r5,a
      0000E7 8C 06            [24] 1513 	mov	ar6,r4
      0000E9 8D 07            [24] 1514 	mov	ar7,r5
      0000EB EC               [12] 1515 	mov	a,r4
      0000EC 4D               [12] 1516 	orl	a,r5
      0000ED 70 F0            [24] 1517 	jnz	00107$
                           000068  1518 	C$config.c$100$1$7 ==.
                                   1519 ;	Z:\MICAP\RS-232\/config.c:100: while ((OSCXCN & 0x80) == 0);
      0000EF                       1520 00102$:
      0000EF E5 8C            [12] 1521 	mov	a,_OSCXCN
      0000F1 30 E7 FB         [24] 1522 	jnb	acc.7,00102$
                           00006D  1523 	C$config.c$101$1$7 ==.
                                   1524 ;	Z:\MICAP\RS-232\/config.c:101: CLKSEL    = 0x01;
      0000F4 75 97 01         [24] 1525 	mov	_CLKSEL,#0x01
                           000070  1526 	C$config.c$102$1$7 ==.
                           000070  1527 	XG$Oscillator_Init$0$0 ==.
      0000F7 22               [24] 1528 	ret
                                   1529 ;------------------------------------------------------------
                                   1530 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1531 ;------------------------------------------------------------
                           000071  1532 	G$Interrupts_Init$0$0 ==.
                           000071  1533 	C$config.c$104$1$7 ==.
                                   1534 ;	Z:\MICAP\RS-232\/config.c:104: void Interrupts_Init()
                                   1535 ;	-----------------------------------------
                                   1536 ;	 function Interrupts_Init
                                   1537 ;	-----------------------------------------
      0000F8                       1538 _Interrupts_Init:
                           000071  1539 	C$config.c$106$1$8 ==.
                                   1540 ;	Z:\MICAP\RS-232\/config.c:106: IE        = 0x90;
      0000F8 75 A8 90         [24] 1541 	mov	_IE,#0x90
                           000074  1542 	C$config.c$107$1$8 ==.
                           000074  1543 	XG$Interrupts_Init$0$0 ==.
      0000FB 22               [24] 1544 	ret
                                   1545 ;------------------------------------------------------------
                                   1546 ;Allocation info for local variables in function 'Init_Device'
                                   1547 ;------------------------------------------------------------
                           000075  1548 	G$Init_Device$0$0 ==.
                           000075  1549 	C$config.c$111$1$8 ==.
                                   1550 ;	Z:\MICAP\RS-232\/config.c:111: void Init_Device(void)
                                   1551 ;	-----------------------------------------
                                   1552 ;	 function Init_Device
                                   1553 ;	-----------------------------------------
      0000FC                       1554 _Init_Device:
                           000075  1555 	C$config.c$113$1$10 ==.
                                   1556 ;	Z:\MICAP\RS-232\/config.c:113: Reset_Sources_Init();
      0000FC 12 00 87         [24] 1557 	lcall	_Reset_Sources_Init
                           000078  1558 	C$config.c$114$1$10 ==.
                                   1559 ;	Z:\MICAP\RS-232\/config.c:114: Timer_Init();
      0000FF 12 00 8E         [24] 1560 	lcall	_Timer_Init
                           00007B  1561 	C$config.c$115$1$10 ==.
                                   1562 ;	Z:\MICAP\RS-232\/config.c:115: UART_Init();
      000102 12 00 AD         [24] 1563 	lcall	_UART_Init
                           00007E  1564 	C$config.c$116$1$10 ==.
                                   1565 ;	Z:\MICAP\RS-232\/config.c:116: SMBus_Init();
      000105 12 00 B4         [24] 1566 	lcall	_SMBus_Init
                           000081  1567 	C$config.c$117$1$10 ==.
                                   1568 ;	Z:\MICAP\RS-232\/config.c:117: SPI_Init();
      000108 12 00 BE         [24] 1569 	lcall	_SPI_Init
                           000084  1570 	C$config.c$118$1$10 ==.
                                   1571 ;	Z:\MICAP\RS-232\/config.c:118: Port_IO_Init();
      00010B 12 00 CB         [24] 1572 	lcall	_Port_IO_Init
                           000087  1573 	C$config.c$119$1$10 ==.
                                   1574 ;	Z:\MICAP\RS-232\/config.c:119: Oscillator_Init();
      00010E 12 00 D5         [24] 1575 	lcall	_Oscillator_Init
                           00008A  1576 	C$config.c$120$1$10 ==.
                                   1577 ;	Z:\MICAP\RS-232\/config.c:120: Interrupts_Init();
      000111 12 00 F8         [24] 1578 	lcall	_Interrupts_Init
                           00008D  1579 	C$config.c$121$1$10 ==.
                           00008D  1580 	XG$Init_Device$0$0 ==.
      000114 22               [24] 1581 	ret
                                   1582 ;------------------------------------------------------------
                                   1583 ;Allocation info for local variables in function 'delay_ms'
                                   1584 ;------------------------------------------------------------
                                   1585 ;t                         Allocated to registers r6 r7 
                                   1586 ;------------------------------------------------------------
                           00008E  1587 	G$delay_ms$0$0 ==.
                           00008E  1588 	C$main.c$27$1$10 ==.
                                   1589 ;	Z:\MICAP\RS-232\main.c:27: void delay_ms(unsigned int t)
                                   1590 ;	-----------------------------------------
                                   1591 ;	 function delay_ms
                                   1592 ;	-----------------------------------------
      000115                       1593 _delay_ms:
      000115 AE 82            [24] 1594 	mov	r6,dpl
      000117 AF 83            [24] 1595 	mov	r7,dph
                           000092  1596 	C$main.c$29$1$25 ==.
                                   1597 ;	Z:\MICAP\RS-232\main.c:29: TMOD &= 0xFC;
      000119 53 89 FC         [24] 1598 	anl	_TMOD,#0xfc
                           000095  1599 	C$main.c$30$1$25 ==.
                                   1600 ;	Z:\MICAP\RS-232\main.c:30: TMOD |= 0x01;
      00011C 43 89 01         [24] 1601 	orl	_TMOD,#0x01
                           000098  1602 	C$main.c$32$1$25 ==.
                                   1603 ;	Z:\MICAP\RS-232\main.c:32: while(t--)
      00011F                       1604 00104$:
      00011F 8E 04            [24] 1605 	mov	ar4,r6
      000121 8F 05            [24] 1606 	mov	ar5,r7
      000123 1E               [12] 1607 	dec	r6
      000124 BE FF 01         [24] 1608 	cjne	r6,#0xff,00122$
      000127 1F               [12] 1609 	dec	r7
      000128                       1610 00122$:
      000128 EC               [12] 1611 	mov	a,r4
      000129 4D               [12] 1612 	orl	a,r5
      00012A 60 11            [24] 1613 	jz	00107$
                           0000A5  1614 	C$main.c$34$2$26 ==.
                                   1615 ;	Z:\MICAP\RS-232\main.c:34: TR0 = 0;
      00012C C2 8C            [12] 1616 	clr	_TR0
                           0000A7  1617 	C$main.c$35$2$26 ==.
                                   1618 ;	Z:\MICAP\RS-232\main.c:35: TF0 = 0;
      00012E C2 8D            [12] 1619 	clr	_TF0
                           0000A9  1620 	C$main.c$36$2$26 ==.
                                   1621 ;	Z:\MICAP\RS-232\main.c:36: TL0 = 0x58;
      000130 75 8A 58         [24] 1622 	mov	_TL0,#0x58
                           0000AC  1623 	C$main.c$37$2$26 ==.
                                   1624 ;	Z:\MICAP\RS-232\main.c:37: TH0 = 0x9E;
      000133 75 8C 9E         [24] 1625 	mov	_TH0,#0x9e
                           0000AF  1626 	C$main.c$38$2$26 ==.
                                   1627 ;	Z:\MICAP\RS-232\main.c:38: TR0 = 1;
      000136 D2 8C            [12] 1628 	setb	_TR0
                           0000B1  1629 	C$main.c$40$2$26 ==.
                                   1630 ;	Z:\MICAP\RS-232\main.c:40: while (TF0 != 1);
      000138                       1631 00101$:
      000138 20 8D E4         [24] 1632 	jb	_TF0,00104$
      00013B 80 FB            [24] 1633 	sjmp	00101$
      00013D                       1634 00107$:
                           0000B6  1635 	C$main.c$42$1$25 ==.
                           0000B6  1636 	XG$delay_ms$0$0 ==.
      00013D 22               [24] 1637 	ret
                                   1638 ;------------------------------------------------------------
                                   1639 ;Allocation info for local variables in function 'delay_us'
                                   1640 ;------------------------------------------------------------
                                   1641 ;t                         Allocated to registers r6 r7 
                                   1642 ;------------------------------------------------------------
                           0000B7  1643 	G$delay_us$0$0 ==.
                           0000B7  1644 	C$main.c$45$1$25 ==.
                                   1645 ;	Z:\MICAP\RS-232\main.c:45: void delay_us(unsigned int t)
                                   1646 ;	-----------------------------------------
                                   1647 ;	 function delay_us
                                   1648 ;	-----------------------------------------
      00013E                       1649 _delay_us:
      00013E AE 82            [24] 1650 	mov	r6,dpl
      000140 AF 83            [24] 1651 	mov	r7,dph
                           0000BB  1652 	C$main.c$47$1$28 ==.
                                   1653 ;	Z:\MICAP\RS-232\main.c:47: TR0 = 0;
      000142 C2 8C            [12] 1654 	clr	_TR0
                           0000BD  1655 	C$main.c$48$1$28 ==.
                                   1656 ;	Z:\MICAP\RS-232\main.c:48: TF0 = 0;
      000144 C2 8D            [12] 1657 	clr	_TF0
                           0000BF  1658 	C$main.c$49$1$28 ==.
                                   1659 ;	Z:\MICAP\RS-232\main.c:49: TMOD &= 0xFC;
      000146 53 89 FC         [24] 1660 	anl	_TMOD,#0xfc
                           0000C2  1661 	C$main.c$50$1$28 ==.
                                   1662 ;	Z:\MICAP\RS-232\main.c:50: TMOD |= 0x02;
      000149 43 89 02         [24] 1663 	orl	_TMOD,#0x02
                           0000C5  1664 	C$main.c$51$1$28 ==.
                                   1665 ;	Z:\MICAP\RS-232\main.c:51: TL0 = 0xE7;
      00014C 75 8A E7         [24] 1666 	mov	_TL0,#0xe7
                           0000C8  1667 	C$main.c$52$1$28 ==.
                                   1668 ;	Z:\MICAP\RS-232\main.c:52: TH0 = 0xE7;
      00014F 75 8C E7         [24] 1669 	mov	_TH0,#0xe7
                           0000CB  1670 	C$main.c$53$1$28 ==.
                                   1671 ;	Z:\MICAP\RS-232\main.c:53: TR0 = 1;
      000152 D2 8C            [12] 1672 	setb	_TR0
                           0000CD  1673 	C$main.c$55$1$28 ==.
                                   1674 ;	Z:\MICAP\RS-232\main.c:55: while(t--)
      000154                       1675 00104$:
      000154 8E 04            [24] 1676 	mov	ar4,r6
      000156 8F 05            [24] 1677 	mov	ar5,r7
      000158 1E               [12] 1678 	dec	r6
      000159 BE FF 01         [24] 1679 	cjne	r6,#0xff,00119$
      00015C 1F               [12] 1680 	dec	r7
      00015D                       1681 00119$:
      00015D EC               [12] 1682 	mov	a,r4
      00015E 4D               [12] 1683 	orl	a,r5
      00015F 60 05            [24] 1684 	jz	00107$
                           0000DA  1685 	C$main.c$57$2$29 ==.
                                   1686 ;	Z:\MICAP\RS-232\main.c:57: while (TF0 != 1);
      000161                       1687 00101$:
                           0000DA  1688 	C$main.c$58$2$29 ==.
                                   1689 ;	Z:\MICAP\RS-232\main.c:58: TF0 = 0;
      000161 10 8D F0         [24] 1690 	jbc	_TF0,00104$
      000164 80 FB            [24] 1691 	sjmp	00101$
      000166                       1692 00107$:
                           0000DF  1693 	C$main.c$60$1$28 ==.
                           0000DF  1694 	XG$delay_us$0$0 ==.
      000166 22               [24] 1695 	ret
                                   1696 ;------------------------------------------------------------
                                   1697 ;Allocation info for local variables in function 'le_glcd'
                                   1698 ;------------------------------------------------------------
                                   1699 ;byte                      Allocated to registers 
                                   1700 ;------------------------------------------------------------
                           0000E0  1701 	G$le_glcd$0$0 ==.
                           0000E0  1702 	C$main.c$161$1$28 ==.
                                   1703 ;	Z:\MICAP\RS-232\main.c:161: unsigned char le_glcd(__bit cd, __bit cs)
                                   1704 ;	-----------------------------------------
                                   1705 ;	 function le_glcd
                                   1706 ;	-----------------------------------------
      000167                       1707 _le_glcd:
                           0000E0  1708 	C$main.c$164$1$31 ==.
                                   1709 ;	Z:\MICAP\RS-232\main.c:164: RW = 1;
      000167 D2 A3            [12] 1710 	setb	_P2_3
                           0000E2  1711 	C$main.c$165$1$31 ==.
                                   1712 ;	Z:\MICAP\RS-232\main.c:165: CS1 = cs;
      000169 A2 01            [12] 1713 	mov	c,_le_glcd_PARM_2
      00016B 92 A0            [24] 1714 	mov	_P2_0,c
                           0000E6  1715 	C$main.c$166$1$31 ==.
                                   1716 ;	Z:\MICAP\RS-232\main.c:166: CS2 = !cs;
      00016D A2 01            [12] 1717 	mov	c,_le_glcd_PARM_2
      00016F B3               [12] 1718 	cpl	c
      000170 92 A1            [24] 1719 	mov	_P2_1,c
                           0000EB  1720 	C$main.c$167$1$31 ==.
                                   1721 ;	Z:\MICAP\RS-232\main.c:167: RS = cd;
      000172 A2 00            [12] 1722 	mov	c,_le_glcd_PARM_1
      000174 92 A2            [24] 1723 	mov	_P2_2,c
                           0000EF  1724 	C$main.c$168$1$31 ==.
                                   1725 ;	Z:\MICAP\RS-232\main.c:168: NOP4();
      000176 00               [12] 1726 	NOP	
      000177 00               [12] 1727 	NOP	
      000178 00               [12] 1728 	NOP	
      000179 00               [12] 1729 	NOP	
                           0000F3  1730 	C$main.c$169$1$31 ==.
                                   1731 ;	Z:\MICAP\RS-232\main.c:169: E = 1;
      00017A D2 A4            [12] 1732 	setb	_P2_4
                           0000F5  1733 	C$main.c$170$1$31 ==.
                                   1734 ;	Z:\MICAP\RS-232\main.c:170: NOP8();
      00017C 00               [12] 1735 	NOP	
      00017D 00               [12] 1736 	NOP	
      00017E 00               [12] 1737 	NOP	
      00017F 00               [12] 1738 	NOP	
      000180 00               [12] 1739 	NOP	
      000181 00               [12] 1740 	NOP	
      000182 00               [12] 1741 	NOP	
      000183 00               [12] 1742 	NOP	
                           0000FD  1743 	C$main.c$171$1$31 ==.
                                   1744 ;	Z:\MICAP\RS-232\main.c:171: SFRPAGE = CONFIG_PAGE;
      000184 75 84 0F         [24] 1745 	mov	_SFRPAGE,#0x0f
                           000100  1746 	C$main.c$172$1$31 ==.
                                   1747 ;	Z:\MICAP\RS-232\main.c:172: byte = DB;
      000187 85 C8 82         [24] 1748 	mov	dpl,_P4
                           000103  1749 	C$main.c$173$1$31 ==.
                                   1750 ;	Z:\MICAP\RS-232\main.c:173: SFRPAGE = LEGACY_PAGE;
      00018A 75 84 00         [24] 1751 	mov	_SFRPAGE,#0x00
                           000106  1752 	C$main.c$174$1$31 ==.
                                   1753 ;	Z:\MICAP\RS-232\main.c:174: NOP4();
      00018D 00               [12] 1754 	NOP	
      00018E 00               [12] 1755 	NOP	
      00018F 00               [12] 1756 	NOP	
      000190 00               [12] 1757 	NOP	
                           00010A  1758 	C$main.c$175$1$31 ==.
                                   1759 ;	Z:\MICAP\RS-232\main.c:175: E = 0;
      000191 C2 A4            [12] 1760 	clr	_P2_4
                           00010C  1761 	C$main.c$176$1$31 ==.
                                   1762 ;	Z:\MICAP\RS-232\main.c:176: NOP12();
      000193 00               [12] 1763 	NOP	
      000194 00               [12] 1764 	NOP	
      000195 00               [12] 1765 	NOP	
      000196 00               [12] 1766 	NOP	
      000197 00               [12] 1767 	NOP	
      000198 00               [12] 1768 	NOP	
      000199 00               [12] 1769 	NOP	
      00019A 00               [12] 1770 	NOP	
      00019B 00               [12] 1771 	NOP	
      00019C 00               [12] 1772 	NOP	
      00019D 00               [12] 1773 	NOP	
      00019E 00               [12] 1774 	NOP	
                           000118  1775 	C$main.c$177$1$31 ==.
                                   1776 ;	Z:\MICAP\RS-232\main.c:177: return(byte);
                           000118  1777 	C$main.c$178$1$31 ==.
                           000118  1778 	XG$le_glcd$0$0 ==.
      00019F 22               [24] 1779 	ret
                                   1780 ;------------------------------------------------------------
                                   1781 ;Allocation info for local variables in function 'esc_glcd'
                                   1782 ;------------------------------------------------------------
                                   1783 ;byte                      Allocated to registers r7 
                                   1784 ;------------------------------------------------------------
                           000119  1785 	G$esc_glcd$0$0 ==.
                           000119  1786 	C$main.c$180$1$31 ==.
                                   1787 ;	Z:\MICAP\RS-232\main.c:180: void esc_glcd(unsigned char byte, __bit cd, __bit cs)
                                   1788 ;	-----------------------------------------
                                   1789 ;	 function esc_glcd
                                   1790 ;	-----------------------------------------
      0001A0                       1791 _esc_glcd:
      0001A0 AF 82            [24] 1792 	mov	r7,dpl
                           00011B  1793 	C$main.c$182$1$33 ==.
                                   1794 ;	Z:\MICAP\RS-232\main.c:182: while (le_glcd(CO,cs) & 0x80);
      0001A2                       1795 00101$:
      0001A2 C2 00            [12] 1796 	clr	_le_glcd_PARM_1
      0001A4 A2 03            [12] 1797 	mov	c,_esc_glcd_PARM_3
      0001A6 92 01            [24] 1798 	mov	_le_glcd_PARM_2,c
      0001A8 C0 07            [24] 1799 	push	ar7
      0001AA 12 01 67         [24] 1800 	lcall	_le_glcd
      0001AD E5 82            [12] 1801 	mov	a,dpl
      0001AF D0 07            [24] 1802 	pop	ar7
      0001B1 20 E7 EE         [24] 1803 	jb	acc.7,00101$
                           00012D  1804 	C$main.c$183$1$33 ==.
                                   1805 ;	Z:\MICAP\RS-232\main.c:183: RW = 0;
      0001B4 C2 A3            [12] 1806 	clr	_P2_3
                           00012F  1807 	C$main.c$184$1$33 ==.
                                   1808 ;	Z:\MICAP\RS-232\main.c:184: CS1 = cs;
      0001B6 A2 03            [12] 1809 	mov	c,_esc_glcd_PARM_3
      0001B8 92 A0            [24] 1810 	mov	_P2_0,c
                           000133  1811 	C$main.c$185$1$33 ==.
                                   1812 ;	Z:\MICAP\RS-232\main.c:185: CS2 = !cs;
      0001BA A2 03            [12] 1813 	mov	c,_esc_glcd_PARM_3
      0001BC B3               [12] 1814 	cpl	c
      0001BD 92 A1            [24] 1815 	mov	_P2_1,c
                           000138  1816 	C$main.c$186$1$33 ==.
                                   1817 ;	Z:\MICAP\RS-232\main.c:186: RS = cd;
      0001BF A2 02            [12] 1818 	mov	c,_esc_glcd_PARM_2
      0001C1 92 A2            [24] 1819 	mov	_P2_2,c
                           00013C  1820 	C$main.c$187$1$33 ==.
                                   1821 ;	Z:\MICAP\RS-232\main.c:187: SFRPAGE = CONFIG_PAGE;
      0001C3 75 84 0F         [24] 1822 	mov	_SFRPAGE,#0x0f
                           00013F  1823 	C$main.c$188$1$33 ==.
                                   1824 ;	Z:\MICAP\RS-232\main.c:188: DB = byte;
      0001C6 8F C8            [24] 1825 	mov	_P4,r7
                           000141  1826 	C$main.c$189$1$33 ==.
                                   1827 ;	Z:\MICAP\RS-232\main.c:189: SFRPAGE = LEGACY_PAGE;
      0001C8 75 84 00         [24] 1828 	mov	_SFRPAGE,#0x00
                           000144  1829 	C$main.c$190$1$33 ==.
                                   1830 ;	Z:\MICAP\RS-232\main.c:190: NOP4();
      0001CB 00               [12] 1831 	NOP	
      0001CC 00               [12] 1832 	NOP	
      0001CD 00               [12] 1833 	NOP	
      0001CE 00               [12] 1834 	NOP	
                           000148  1835 	C$main.c$191$1$33 ==.
                                   1836 ;	Z:\MICAP\RS-232\main.c:191: E = 1;
      0001CF D2 A4            [12] 1837 	setb	_P2_4
                           00014A  1838 	C$main.c$192$1$33 ==.
                                   1839 ;	Z:\MICAP\RS-232\main.c:192: NOP12();
      0001D1 00               [12] 1840 	NOP	
      0001D2 00               [12] 1841 	NOP	
      0001D3 00               [12] 1842 	NOP	
      0001D4 00               [12] 1843 	NOP	
      0001D5 00               [12] 1844 	NOP	
      0001D6 00               [12] 1845 	NOP	
      0001D7 00               [12] 1846 	NOP	
      0001D8 00               [12] 1847 	NOP	
      0001D9 00               [12] 1848 	NOP	
      0001DA 00               [12] 1849 	NOP	
      0001DB 00               [12] 1850 	NOP	
      0001DC 00               [12] 1851 	NOP	
                           000156  1852 	C$main.c$193$1$33 ==.
                                   1853 ;	Z:\MICAP\RS-232\main.c:193: E = 0;	
      0001DD C2 A4            [12] 1854 	clr	_P2_4
                           000158  1855 	C$main.c$194$1$33 ==.
                                   1856 ;	Z:\MICAP\RS-232\main.c:194: SFRPAGE = CONFIG_PAGE;
      0001DF 75 84 0F         [24] 1857 	mov	_SFRPAGE,#0x0f
                           00015B  1858 	C$main.c$195$1$33 ==.
                                   1859 ;	Z:\MICAP\RS-232\main.c:195: DB = 0xFF;
      0001E2 75 C8 FF         [24] 1860 	mov	_P4,#0xff
                           00015E  1861 	C$main.c$196$1$33 ==.
                                   1862 ;	Z:\MICAP\RS-232\main.c:196: SFRPAGE = LEGACY_PAGE;
      0001E5 75 84 00         [24] 1863 	mov	_SFRPAGE,#0x00
                           000161  1864 	C$main.c$197$1$33 ==.
                                   1865 ;	Z:\MICAP\RS-232\main.c:197: RW = 1;
      0001E8 D2 A3            [12] 1866 	setb	_P2_3
                           000163  1867 	C$main.c$198$1$33 ==.
                                   1868 ;	Z:\MICAP\RS-232\main.c:198: NOP12();
      0001EA 00               [12] 1869 	NOP	
      0001EB 00               [12] 1870 	NOP	
      0001EC 00               [12] 1871 	NOP	
      0001ED 00               [12] 1872 	NOP	
      0001EE 00               [12] 1873 	NOP	
      0001EF 00               [12] 1874 	NOP	
      0001F0 00               [12] 1875 	NOP	
      0001F1 00               [12] 1876 	NOP	
      0001F2 00               [12] 1877 	NOP	
      0001F3 00               [12] 1878 	NOP	
      0001F4 00               [12] 1879 	NOP	
      0001F5 00               [12] 1880 	NOP	
                           00016F  1881 	C$main.c$199$1$33 ==.
                           00016F  1882 	XG$esc_glcd$0$0 ==.
      0001F6 22               [24] 1883 	ret
                                   1884 ;------------------------------------------------------------
                                   1885 ;Allocation info for local variables in function 'Ini_glcd'
                                   1886 ;------------------------------------------------------------
                           000170  1887 	G$Ini_glcd$0$0 ==.
                           000170  1888 	C$main.c$201$1$33 ==.
                                   1889 ;	Z:\MICAP\RS-232\main.c:201: void Ini_glcd(void)
                                   1890 ;	-----------------------------------------
                                   1891 ;	 function Ini_glcd
                                   1892 ;	-----------------------------------------
      0001F7                       1893 _Ini_glcd:
                           000170  1894 	C$main.c$203$1$35 ==.
                                   1895 ;	Z:\MICAP\RS-232\main.c:203: E = 0;
      0001F7 C2 A4            [12] 1896 	clr	_P2_4
                           000172  1897 	C$main.c$204$1$35 ==.
                                   1898 ;	Z:\MICAP\RS-232\main.c:204: RST = 1;
      0001F9 D2 A5            [12] 1899 	setb	_P2_5
                           000174  1900 	C$main.c$205$1$35 ==.
                                   1901 ;	Z:\MICAP\RS-232\main.c:205: CS1 = 1;
      0001FB D2 A0            [12] 1902 	setb	_P2_0
                           000176  1903 	C$main.c$206$1$35 ==.
                                   1904 ;	Z:\MICAP\RS-232\main.c:206: CS2 = 1;
      0001FD D2 A1            [12] 1905 	setb	_P2_1
                           000178  1906 	C$main.c$208$1$35 ==.
                                   1907 ;	Z:\MICAP\RS-232\main.c:208: SFRPAGE = CONFIG_PAGE;
      0001FF 75 84 0F         [24] 1908 	mov	_SFRPAGE,#0x0f
                           00017B  1909 	C$main.c$209$1$35 ==.
                                   1910 ;	Z:\MICAP\RS-232\main.c:209: DB = 0xFF;
      000202 75 C8 FF         [24] 1911 	mov	_P4,#0xff
                           00017E  1912 	C$main.c$210$1$35 ==.
                                   1913 ;	Z:\MICAP\RS-232\main.c:210: SFRPAGE = LEGACY_PAGE;
      000205 75 84 00         [24] 1914 	mov	_SFRPAGE,#0x00
                           000181  1915 	C$main.c$212$1$35 ==.
                                   1916 ;	Z:\MICAP\RS-232\main.c:212: while(le_glcd(CO, ESQ) & 0x10);
      000208                       1917 00101$:
      000208 C2 00            [12] 1918 	clr	_le_glcd_PARM_1
      00020A C2 01            [12] 1919 	clr	_le_glcd_PARM_2
      00020C 12 01 67         [24] 1920 	lcall	_le_glcd
      00020F E5 82            [12] 1921 	mov	a,dpl
      000211 20 E4 F4         [24] 1922 	jb	acc.4,00101$
                           00018D  1923 	C$main.c$213$1$35 ==.
                                   1924 ;	Z:\MICAP\RS-232\main.c:213: while(le_glcd(CO, DIR) & 0x10);
      000214                       1925 00104$:
      000214 C2 00            [12] 1926 	clr	_le_glcd_PARM_1
      000216 D2 01            [12] 1927 	setb	_le_glcd_PARM_2
      000218 12 01 67         [24] 1928 	lcall	_le_glcd
      00021B E5 82            [12] 1929 	mov	a,dpl
      00021D 20 E4 F4         [24] 1930 	jb	acc.4,00104$
                           000199  1931 	C$main.c$215$1$35 ==.
                                   1932 ;	Z:\MICAP\RS-232\main.c:215: esc_glcd(0x3F, CO, ESQ);
      000220 C2 02            [12] 1933 	clr	_esc_glcd_PARM_2
      000222 C2 03            [12] 1934 	clr	_esc_glcd_PARM_3
      000224 75 82 3F         [24] 1935 	mov	dpl,#0x3f
      000227 12 01 A0         [24] 1936 	lcall	_esc_glcd
                           0001A3  1937 	C$main.c$216$1$35 ==.
                                   1938 ;	Z:\MICAP\RS-232\main.c:216: esc_glcd(0x3F, CO, DIR);
      00022A C2 02            [12] 1939 	clr	_esc_glcd_PARM_2
      00022C D2 03            [12] 1940 	setb	_esc_glcd_PARM_3
      00022E 75 82 3F         [24] 1941 	mov	dpl,#0x3f
      000231 12 01 A0         [24] 1942 	lcall	_esc_glcd
                           0001AD  1943 	C$main.c$217$1$35 ==.
                                   1944 ;	Z:\MICAP\RS-232\main.c:217: esc_glcd(0x40, CO, ESQ);
      000234 C2 02            [12] 1945 	clr	_esc_glcd_PARM_2
      000236 C2 03            [12] 1946 	clr	_esc_glcd_PARM_3
      000238 75 82 40         [24] 1947 	mov	dpl,#0x40
      00023B 12 01 A0         [24] 1948 	lcall	_esc_glcd
                           0001B7  1949 	C$main.c$218$1$35 ==.
                                   1950 ;	Z:\MICAP\RS-232\main.c:218: esc_glcd(0xB8, CO, ESQ);
      00023E C2 02            [12] 1951 	clr	_esc_glcd_PARM_2
      000240 C2 03            [12] 1952 	clr	_esc_glcd_PARM_3
      000242 75 82 B8         [24] 1953 	mov	dpl,#0xb8
      000245 12 01 A0         [24] 1954 	lcall	_esc_glcd
                           0001C1  1955 	C$main.c$219$1$35 ==.
                                   1956 ;	Z:\MICAP\RS-232\main.c:219: esc_glcd(0xC0, CO, ESQ);
      000248 C2 02            [12] 1957 	clr	_esc_glcd_PARM_2
      00024A C2 03            [12] 1958 	clr	_esc_glcd_PARM_3
      00024C 75 82 C0         [24] 1959 	mov	dpl,#0xc0
      00024F 12 01 A0         [24] 1960 	lcall	_esc_glcd
                           0001CB  1961 	C$main.c$220$1$35 ==.
                                   1962 ;	Z:\MICAP\RS-232\main.c:220: esc_glcd(0x40, CO, DIR);
      000252 C2 02            [12] 1963 	clr	_esc_glcd_PARM_2
      000254 D2 03            [12] 1964 	setb	_esc_glcd_PARM_3
      000256 75 82 40         [24] 1965 	mov	dpl,#0x40
      000259 12 01 A0         [24] 1966 	lcall	_esc_glcd
                           0001D5  1967 	C$main.c$221$1$35 ==.
                                   1968 ;	Z:\MICAP\RS-232\main.c:221: esc_glcd(0xB8, CO, DIR);
      00025C C2 02            [12] 1969 	clr	_esc_glcd_PARM_2
      00025E D2 03            [12] 1970 	setb	_esc_glcd_PARM_3
      000260 75 82 B8         [24] 1971 	mov	dpl,#0xb8
      000263 12 01 A0         [24] 1972 	lcall	_esc_glcd
                           0001DF  1973 	C$main.c$222$1$35 ==.
                                   1974 ;	Z:\MICAP\RS-232\main.c:222: esc_glcd(0xC0, CO, DIR);
      000266 C2 02            [12] 1975 	clr	_esc_glcd_PARM_2
      000268 D2 03            [12] 1976 	setb	_esc_glcd_PARM_3
      00026A 75 82 C0         [24] 1977 	mov	dpl,#0xc0
      00026D 12 01 A0         [24] 1978 	lcall	_esc_glcd
                           0001E9  1979 	C$main.c$223$1$35 ==.
                           0001E9  1980 	XG$Ini_glcd$0$0 ==.
      000270 22               [24] 1981 	ret
                                   1982 ;------------------------------------------------------------
                                   1983 ;Allocation info for local variables in function 'conf_Y'
                                   1984 ;------------------------------------------------------------
                                   1985 ;y                         Allocated to registers r7 
                                   1986 ;------------------------------------------------------------
                           0001EA  1987 	G$conf_Y$0$0 ==.
                           0001EA  1988 	C$main.c$225$1$35 ==.
                                   1989 ;	Z:\MICAP\RS-232\main.c:225: void conf_Y(unsigned char y, __bit cs)
                                   1990 ;	-----------------------------------------
                                   1991 ;	 function conf_Y
                                   1992 ;	-----------------------------------------
      000271                       1993 _conf_Y:
      000271 AF 82            [24] 1994 	mov	r7,dpl
                           0001EC  1995 	C$main.c$227$1$37 ==.
                                   1996 ;	Z:\MICAP\RS-232\main.c:227: y &= 0x3F;
      000273 53 07 3F         [24] 1997 	anl	ar7,#0x3f
                           0001EF  1998 	C$main.c$228$1$37 ==.
                                   1999 ;	Z:\MICAP\RS-232\main.c:228: esc_glcd(0x40 | y, CO, cs);
      000276 74 40            [12] 2000 	mov	a,#0x40
      000278 4F               [12] 2001 	orl	a,r7
      000279 F5 82            [12] 2002 	mov	dpl,a
      00027B C2 02            [12] 2003 	clr	_esc_glcd_PARM_2
      00027D A2 04            [12] 2004 	mov	c,_conf_Y_PARM_2
      00027F 92 03            [24] 2005 	mov	_esc_glcd_PARM_3,c
      000281 12 01 A0         [24] 2006 	lcall	_esc_glcd
                           0001FD  2007 	C$main.c$229$1$37 ==.
                           0001FD  2008 	XG$conf_Y$0$0 ==.
      000284 22               [24] 2009 	ret
                                   2010 ;------------------------------------------------------------
                                   2011 ;Allocation info for local variables in function 'conf_pag'
                                   2012 ;------------------------------------------------------------
                                   2013 ;pag                       Allocated to registers r7 
                                   2014 ;------------------------------------------------------------
                           0001FE  2015 	G$conf_pag$0$0 ==.
                           0001FE  2016 	C$main.c$231$1$37 ==.
                                   2017 ;	Z:\MICAP\RS-232\main.c:231: void conf_pag(unsigned char pag, __bit cs)
                                   2018 ;	-----------------------------------------
                                   2019 ;	 function conf_pag
                                   2020 ;	-----------------------------------------
      000285                       2021 _conf_pag:
      000285 AF 82            [24] 2022 	mov	r7,dpl
                           000200  2023 	C$main.c$233$1$39 ==.
                                   2024 ;	Z:\MICAP\RS-232\main.c:233: pag &= 0x07;
      000287 53 07 07         [24] 2025 	anl	ar7,#0x07
                           000203  2026 	C$main.c$234$1$39 ==.
                                   2027 ;	Z:\MICAP\RS-232\main.c:234: esc_glcd(0xB8 | pag, CO, cs);
      00028A 74 B8            [12] 2028 	mov	a,#0xb8
      00028C 4F               [12] 2029 	orl	a,r7
      00028D F5 82            [12] 2030 	mov	dpl,a
      00028F C2 02            [12] 2031 	clr	_esc_glcd_PARM_2
      000291 A2 05            [12] 2032 	mov	c,_conf_pag_PARM_2
      000293 92 03            [24] 2033 	mov	_esc_glcd_PARM_3,c
      000295 12 01 A0         [24] 2034 	lcall	_esc_glcd
                           000211  2035 	C$main.c$235$1$39 ==.
                           000211  2036 	XG$conf_pag$0$0 ==.
      000298 22               [24] 2037 	ret
                                   2038 ;------------------------------------------------------------
                                   2039 ;Allocation info for local variables in function 'limpa_glcd'
                                   2040 ;------------------------------------------------------------
                                   2041 ;i                         Allocated to registers r7 
                                   2042 ;j                         Allocated to registers r6 
                                   2043 ;------------------------------------------------------------
                           000212  2044 	G$limpa_glcd$0$0 ==.
                           000212  2045 	C$main.c$237$1$39 ==.
                                   2046 ;	Z:\MICAP\RS-232\main.c:237: void limpa_glcd(__bit cs)
                                   2047 ;	-----------------------------------------
                                   2048 ;	 function limpa_glcd
                                   2049 ;	-----------------------------------------
      000299                       2050 _limpa_glcd:
                           000212  2051 	C$main.c$241$1$41 ==.
                                   2052 ;	Z:\MICAP\RS-232\main.c:241: for(i = 0; i < 8; i++)
      000299 7F 00            [12] 2053 	mov	r7,#0x00
      00029B                       2054 00105$:
                           000214  2055 	C$main.c$243$2$42 ==.
                                   2056 ;	Z:\MICAP\RS-232\main.c:243: conf_pag(i, cs);
      00029B A2 06            [12] 2057 	mov	c,_limpa_glcd_PARM_1
      00029D 92 05            [24] 2058 	mov	_conf_pag_PARM_2,c
      00029F 8F 82            [24] 2059 	mov	dpl,r7
      0002A1 C0 07            [24] 2060 	push	ar7
      0002A3 12 02 85         [24] 2061 	lcall	_conf_pag
                           00021F  2062 	C$main.c$244$2$42 ==.
                                   2063 ;	Z:\MICAP\RS-232\main.c:244: conf_Y(0, cs);
      0002A6 A2 06            [12] 2064 	mov	c,_limpa_glcd_PARM_1
      0002A8 92 04            [24] 2065 	mov	_conf_Y_PARM_2,c
      0002AA 75 82 00         [24] 2066 	mov	dpl,#0x00
      0002AD 12 02 71         [24] 2067 	lcall	_conf_Y
      0002B0 D0 07            [24] 2068 	pop	ar7
                           00022B  2069 	C$main.c$245$1$41 ==.
                                   2070 ;	Z:\MICAP\RS-232\main.c:245: for(j = 0; j < 64; j++)
      0002B2 7E 00            [12] 2071 	mov	r6,#0x00
      0002B4                       2072 00103$:
                           00022D  2073 	C$main.c$246$2$42 ==.
                                   2074 ;	Z:\MICAP\RS-232\main.c:246: esc_glcd(0x00, DA, cs);
      0002B4 D2 02            [12] 2075 	setb	_esc_glcd_PARM_2
      0002B6 A2 06            [12] 2076 	mov	c,_limpa_glcd_PARM_1
      0002B8 92 03            [24] 2077 	mov	_esc_glcd_PARM_3,c
      0002BA 75 82 00         [24] 2078 	mov	dpl,#0x00
      0002BD C0 07            [24] 2079 	push	ar7
      0002BF C0 06            [24] 2080 	push	ar6
      0002C1 12 01 A0         [24] 2081 	lcall	_esc_glcd
      0002C4 D0 06            [24] 2082 	pop	ar6
      0002C6 D0 07            [24] 2083 	pop	ar7
                           000241  2084 	C$main.c$245$2$42 ==.
                                   2085 ;	Z:\MICAP\RS-232\main.c:245: for(j = 0; j < 64; j++)
      0002C8 0E               [12] 2086 	inc	r6
      0002C9 BE 40 00         [24] 2087 	cjne	r6,#0x40,00120$
      0002CC                       2088 00120$:
      0002CC 40 E6            [24] 2089 	jc	00103$
                           000247  2090 	C$main.c$241$1$41 ==.
                                   2091 ;	Z:\MICAP\RS-232\main.c:241: for(i = 0; i < 8; i++)
      0002CE 0F               [12] 2092 	inc	r7
      0002CF BF 08 00         [24] 2093 	cjne	r7,#0x08,00122$
      0002D2                       2094 00122$:
      0002D2 40 C7            [24] 2095 	jc	00105$
                           00024D  2096 	C$main.c$248$1$41 ==.
                           00024D  2097 	XG$limpa_glcd$0$0 ==.
      0002D4 22               [24] 2098 	ret
                                   2099 ;------------------------------------------------------------
                                   2100 ;Allocation info for local variables in function 'putchar'
                                   2101 ;------------------------------------------------------------
                                   2102 ;c                         Allocated to registers 
                                   2103 ;------------------------------------------------------------
                           00024E  2104 	G$putchar$0$0 ==.
                           00024E  2105 	C$main.c$250$1$41 ==.
                                   2106 ;	Z:\MICAP\RS-232\main.c:250: void putchar(char c)
                                   2107 ;	-----------------------------------------
                                   2108 ;	 function putchar
                                   2109 ;	-----------------------------------------
      0002D5                       2110 _putchar:
      0002D5 85 82 99         [24] 2111 	mov	_SBUF0,dpl
                           000251  2112 	C$main.c$253$1$44 ==.
                                   2113 ;	Z:\MICAP\RS-232\main.c:253: while(TI0 == 0);
      0002D8                       2114 00101$:
                           000251  2115 	C$main.c$254$1$44 ==.
                                   2116 ;	Z:\MICAP\RS-232\main.c:254: TI0 = 0;
      0002D8 10 99 02         [24] 2117 	jbc	_TI0,00112$
      0002DB 80 FB            [24] 2118 	sjmp	00101$
      0002DD                       2119 00112$:
                           000256  2120 	C$main.c$255$1$44 ==.
                           000256  2121 	XG$putchar$0$0 ==.
      0002DD 22               [24] 2122 	ret
                                   2123 ;------------------------------------------------------------
                                   2124 ;Allocation info for local variables in function 'int_serial'
                                   2125 ;------------------------------------------------------------
                           000257  2126 	G$int_serial$0$0 ==.
                           000257  2127 	C$main.c$259$1$44 ==.
                                   2128 ;	Z:\MICAP\RS-232\main.c:259: void int_serial(void) __interrupt 4{
                                   2129 ;	-----------------------------------------
                                   2130 ;	 function int_serial
                                   2131 ;	-----------------------------------------
      0002DE                       2132 _int_serial:
                           000257  2133 	C$main.c$260$1$46 ==.
                                   2134 ;	Z:\MICAP\RS-232\main.c:260: if(RI0)	{
      0002DE 30 98 04         [24] 2135 	jnb	_RI0,00103$
                           00025A  2136 	C$main.c$261$2$47 ==.
                                   2137 ;	Z:\MICAP\RS-232\main.c:261: fbr = 1;
      0002E1 D2 07            [12] 2138 	setb	_fbr
                           00025C  2139 	C$main.c$262$2$47 ==.
                                   2140 ;	Z:\MICAP\RS-232\main.c:262: RI0 = 0;
      0002E3 C2 98            [12] 2141 	clr	_RI0
      0002E5                       2142 00103$:
                           00025E  2143 	C$main.c$264$1$46 ==.
                           00025E  2144 	XG$int_serial$0$0 ==.
      0002E5 32               [24] 2145 	reti
                                   2146 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2147 ;	eliminated unneeded push/pop psw
                                   2148 ;	eliminated unneeded push/pop dpl
                                   2149 ;	eliminated unneeded push/pop dph
                                   2150 ;	eliminated unneeded push/pop b
                                   2151 ;	eliminated unneeded push/pop acc
                                   2152 ;------------------------------------------------------------
                                   2153 ;Allocation info for local variables in function 'main'
                                   2154 ;------------------------------------------------------------
                           00025F  2155 	G$main$0$0 ==.
                           00025F  2156 	C$main.c$266$1$46 ==.
                                   2157 ;	Z:\MICAP\RS-232\main.c:266: void main()
                                   2158 ;	-----------------------------------------
                                   2159 ;	 function main
                                   2160 ;	-----------------------------------------
      0002E6                       2161 _main:
                           00025F  2162 	C$main.c$268$1$48 ==.
                                   2163 ;	Z:\MICAP\RS-232\main.c:268: Init_Device();
      0002E6 12 00 FC         [24] 2164 	lcall	_Init_Device
                           000262  2165 	C$main.c$269$1$48 ==.
                                   2166 ;	Z:\MICAP\RS-232\main.c:269: SFRPAGE = LEGACY_PAGE;
      0002E9 75 84 00         [24] 2167 	mov	_SFRPAGE,#0x00
                           000265  2168 	C$main.c$270$1$48 ==.
                                   2169 ;	Z:\MICAP\RS-232\main.c:270: SMB0CN &= ~0x40; // Desabilita SMBus
      0002EC 53 C0 BF         [24] 2170 	anl	_SMB0CN,#0xbf
                           000268  2171 	C$main.c$271$1$48 ==.
                                   2172 ;	Z:\MICAP\RS-232\main.c:271: SMB0CN |= 0x40; // Habilita SMBus
      0002EF 43 C0 40         [24] 2173 	orl	_SMB0CN,#0x40
                           00026B  2174 	C$main.c$278$1$48 ==.
                                   2175 ;	Z:\MICAP\RS-232\main.c:278: while(1){
      0002F2                       2176 00112$:
                           00026B  2177 	C$main.c$279$2$49 ==.
                                   2178 ;	Z:\MICAP\RS-232\main.c:279: if(fbr){
                           00026B  2179 	C$main.c$280$3$50 ==.
                                   2180 ;	Z:\MICAP\RS-232\main.c:280: fbr = 0;
      0002F2 10 07 02         [24] 2181 	jbc	_fbr,00137$
      0002F5 80 FB            [24] 2182 	sjmp	00112$
      0002F7                       2183 00137$:
                           000270  2184 	C$main.c$281$3$50 ==.
                                   2185 ;	Z:\MICAP\RS-232\main.c:281: switch(SBUF0){
      0002F7 AF 99            [24] 2186 	mov	r7,_SBUF0
      0002F9 BF 61 02         [24] 2187 	cjne	r7,#0x61,00138$
      0002FC 80 0D            [24] 2188 	sjmp	00101$
      0002FE                       2189 00138$:
      0002FE BF 62 02         [24] 2190 	cjne	r7,#0x62,00139$
      000301 80 4C            [24] 2191 	sjmp	00105$
      000303                       2192 00139$:
      000303 BF 6D 02         [24] 2193 	cjne	r7,#0x6d,00140$
      000306 80 4B            [24] 2194 	sjmp	00106$
      000308                       2195 00140$:
      000308 02 03 92         [24] 2196 	ljmp	00107$
                           000284  2197 	C$main.c$283$4$51 ==.
                                   2198 ;	Z:\MICAP\RS-232\main.c:283: case 'a':
      00030B                       2199 00101$:
                           000284  2200 	C$main.c$284$4$51 ==.
                                   2201 ;	Z:\MICAP\RS-232\main.c:284: printf_fast_f("Qualquer tecla pra sair\n");
      00030B 74 69            [12] 2202 	mov	a,#___str_0
      00030D C0 E0            [24] 2203 	push	acc
      00030F 74 0A            [12] 2204 	mov	a,#(___str_0 >> 8)
      000311 C0 E0            [24] 2205 	push	acc
      000313 12 03 A5         [24] 2206 	lcall	_printf_fast_f
      000316 15 81            [12] 2207 	dec	sp
      000318 15 81            [12] 2208 	dec	sp
                           000293  2209 	C$main.c$285$5$52 ==.
                                   2210 ;	Z:\MICAP\RS-232\main.c:285: do{
      00031A                       2211 00102$:
                           000293  2212 	C$main.c$286$5$52 ==.
                                   2213 ;	Z:\MICAP\RS-232\main.c:286: printf_fast_f("P1 = %3u \r", P1);
      00031A AE 90            [24] 2214 	mov	r6,_P1
      00031C 7F 00            [12] 2215 	mov	r7,#0x00
      00031E C0 06            [24] 2216 	push	ar6
      000320 C0 07            [24] 2217 	push	ar7
      000322 74 82            [12] 2218 	mov	a,#___str_1
      000324 C0 E0            [24] 2219 	push	acc
      000326 74 0A            [12] 2220 	mov	a,#(___str_1 >> 8)
      000328 C0 E0            [24] 2221 	push	acc
      00032A 12 03 A5         [24] 2222 	lcall	_printf_fast_f
      00032D E5 81            [12] 2223 	mov	a,sp
      00032F 24 FC            [12] 2224 	add	a,#0xfc
      000331 F5 81            [12] 2225 	mov	sp,a
                           0002AC  2226 	C$main.c$287$5$52 ==.
                                   2227 ;	Z:\MICAP\RS-232\main.c:287: delay_ms(500);
      000333 90 01 F4         [24] 2228 	mov	dptr,#0x01f4
      000336 12 01 15         [24] 2229 	lcall	_delay_ms
                           0002B2  2230 	C$main.c$288$4$51 ==.
                                   2231 ;	Z:\MICAP\RS-232\main.c:288: } while(!fbr);
                           0002B2  2232 	C$main.c$289$4$51 ==.
                                   2233 ;	Z:\MICAP\RS-232\main.c:289: fbr = 0;
      000339 10 07 02         [24] 2234 	jbc	_fbr,00141$
      00033C 80 DC            [24] 2235 	sjmp	00102$
      00033E                       2236 00141$:
                           0002B7  2237 	C$main.c$290$4$51 ==.
                                   2238 ;	Z:\MICAP\RS-232\main.c:290: printf_fast_f("\n");
      00033E 74 8D            [12] 2239 	mov	a,#___str_2
      000340 C0 E0            [24] 2240 	push	acc
      000342 74 0A            [12] 2241 	mov	a,#(___str_2 >> 8)
      000344 C0 E0            [24] 2242 	push	acc
      000346 12 03 A5         [24] 2243 	lcall	_printf_fast_f
      000349 15 81            [12] 2244 	dec	sp
      00034B 15 81            [12] 2245 	dec	sp
                           0002C6  2246 	C$main.c$291$4$51 ==.
                                   2247 ;	Z:\MICAP\RS-232\main.c:291: break;
                           0002C6  2248 	C$main.c$293$4$51 ==.
                                   2249 ;	Z:\MICAP\RS-232\main.c:293: case 'b':
      00034D 80 A3            [24] 2250 	sjmp	00112$
      00034F                       2251 00105$:
                           0002C8  2252 	C$main.c$294$4$51 ==.
                                   2253 ;	Z:\MICAP\RS-232\main.c:294: P0_7 = !P0_7;
      00034F B2 87            [12] 2254 	cpl	_P0_7
                           0002CA  2255 	C$main.c$295$4$51 ==.
                                   2256 ;	Z:\MICAP\RS-232\main.c:295: break;
                           0002CA  2257 	C$main.c$297$4$51 ==.
                                   2258 ;	Z:\MICAP\RS-232\main.c:297: case 'm':
      000351 80 9F            [24] 2259 	sjmp	00112$
      000353                       2260 00106$:
                           0002CC  2261 	C$main.c$298$4$51 ==.
                                   2262 ;	Z:\MICAP\RS-232\main.c:298: printf_fast_f("\n\n\n");
      000353 74 8F            [12] 2263 	mov	a,#___str_3
      000355 C0 E0            [24] 2264 	push	acc
      000357 74 0A            [12] 2265 	mov	a,#(___str_3 >> 8)
      000359 C0 E0            [24] 2266 	push	acc
      00035B 12 03 A5         [24] 2267 	lcall	_printf_fast_f
      00035E 15 81            [12] 2268 	dec	sp
      000360 15 81            [12] 2269 	dec	sp
                           0002DB  2270 	C$main.c$299$4$51 ==.
                                   2271 ;	Z:\MICAP\RS-232\main.c:299: printf_fast_f("MENU\n");
      000362 74 93            [12] 2272 	mov	a,#___str_4
      000364 C0 E0            [24] 2273 	push	acc
      000366 74 0A            [12] 2274 	mov	a,#(___str_4 >> 8)
      000368 C0 E0            [24] 2275 	push	acc
      00036A 12 03 A5         [24] 2276 	lcall	_printf_fast_f
      00036D 15 81            [12] 2277 	dec	sp
      00036F 15 81            [12] 2278 	dec	sp
                           0002EA  2279 	C$main.c$300$4$51 ==.
                                   2280 ;	Z:\MICAP\RS-232\main.c:300: printf_fast_f("a - Le P1\n");
      000371 74 99            [12] 2281 	mov	a,#___str_5
      000373 C0 E0            [24] 2282 	push	acc
      000375 74 0A            [12] 2283 	mov	a,#(___str_5 >> 8)
      000377 C0 E0            [24] 2284 	push	acc
      000379 12 03 A5         [24] 2285 	lcall	_printf_fast_f
      00037C 15 81            [12] 2286 	dec	sp
      00037E 15 81            [12] 2287 	dec	sp
                           0002F9  2288 	C$main.c$301$4$51 ==.
                                   2289 ;	Z:\MICAP\RS-232\main.c:301: printf_fast_f("b - Inverte P0_7\n");
      000380 74 A4            [12] 2290 	mov	a,#___str_6
      000382 C0 E0            [24] 2291 	push	acc
      000384 74 0A            [12] 2292 	mov	a,#(___str_6 >> 8)
      000386 C0 E0            [24] 2293 	push	acc
      000388 12 03 A5         [24] 2294 	lcall	_printf_fast_f
      00038B 15 81            [12] 2295 	dec	sp
      00038D 15 81            [12] 2296 	dec	sp
                           000308  2297 	C$main.c$302$4$51 ==.
                                   2298 ;	Z:\MICAP\RS-232\main.c:302: break;
      00038F 02 02 F2         [24] 2299 	ljmp	00112$
                           00030B  2300 	C$main.c$304$4$51 ==.
                                   2301 ;	Z:\MICAP\RS-232\main.c:304: default:
      000392                       2302 00107$:
                           00030B  2303 	C$main.c$305$4$51 ==.
                                   2304 ;	Z:\MICAP\RS-232\main.c:305: printf_fast_f("default\n");
      000392 74 B6            [12] 2305 	mov	a,#___str_7
      000394 C0 E0            [24] 2306 	push	acc
      000396 74 0A            [12] 2307 	mov	a,#(___str_7 >> 8)
      000398 C0 E0            [24] 2308 	push	acc
      00039A 12 03 A5         [24] 2309 	lcall	_printf_fast_f
      00039D 15 81            [12] 2310 	dec	sp
      00039F 15 81            [12] 2311 	dec	sp
                           00031A  2312 	C$main.c$307$1$48 ==.
                                   2313 ;	Z:\MICAP\RS-232\main.c:307: }
      0003A1 02 02 F2         [24] 2314 	ljmp	00112$
                           00031D  2315 	C$main.c$310$1$48 ==.
                           00031D  2316 	XG$main$0$0 ==.
      0003A4 22               [24] 2317 	ret
                                   2318 	.area CSEG    (CODE)
                                   2319 	.area CONST   (CODE)
                           000000  2320 G$fonte$0$0 == .
      000889                       2321 _fonte:
      000889 00                    2322 	.db #0x00	; 0
      00088A 00                    2323 	.db #0x00	; 0
      00088B 00                    2324 	.db #0x00	; 0
      00088C 00                    2325 	.db #0x00	; 0
      00088D 00                    2326 	.db #0x00	; 0
      00088E 00                    2327 	.db #0x00	; 0
      00088F 00                    2328 	.db #0x00	; 0
      000890 5F                    2329 	.db #0x5f	; 95
      000891 00                    2330 	.db #0x00	; 0
      000892 00                    2331 	.db #0x00	; 0
      000893 00                    2332 	.db #0x00	; 0
      000894 07                    2333 	.db #0x07	; 7
      000895 00                    2334 	.db #0x00	; 0
      000896 07                    2335 	.db #0x07	; 7
      000897 00                    2336 	.db #0x00	; 0
      000898 14                    2337 	.db #0x14	; 20
      000899 7F                    2338 	.db #0x7f	; 127
      00089A 14                    2339 	.db #0x14	; 20
      00089B 7F                    2340 	.db #0x7f	; 127
      00089C 14                    2341 	.db #0x14	; 20
      00089D 24                    2342 	.db #0x24	; 36
      00089E 2A                    2343 	.db #0x2a	; 42
      00089F 7F                    2344 	.db #0x7f	; 127
      0008A0 2A                    2345 	.db #0x2a	; 42
      0008A1 12                    2346 	.db #0x12	; 18
      0008A2 23                    2347 	.db #0x23	; 35
      0008A3 13                    2348 	.db #0x13	; 19
      0008A4 08                    2349 	.db #0x08	; 8
      0008A5 64                    2350 	.db #0x64	; 100	'd'
      0008A6 62                    2351 	.db #0x62	; 98	'b'
      0008A7 36                    2352 	.db #0x36	; 54	'6'
      0008A8 49                    2353 	.db #0x49	; 73	'I'
      0008A9 55                    2354 	.db #0x55	; 85	'U'
      0008AA 22                    2355 	.db #0x22	; 34
      0008AB 50                    2356 	.db #0x50	; 80	'P'
      0008AC 00                    2357 	.db #0x00	; 0
      0008AD 05                    2358 	.db #0x05	; 5
      0008AE 03                    2359 	.db #0x03	; 3
      0008AF 00                    2360 	.db #0x00	; 0
      0008B0 00                    2361 	.db #0x00	; 0
      0008B1 00                    2362 	.db #0x00	; 0
      0008B2 1C                    2363 	.db #0x1c	; 28
      0008B3 22                    2364 	.db #0x22	; 34
      0008B4 41                    2365 	.db #0x41	; 65	'A'
      0008B5 00                    2366 	.db #0x00	; 0
      0008B6 00                    2367 	.db #0x00	; 0
      0008B7 41                    2368 	.db #0x41	; 65	'A'
      0008B8 22                    2369 	.db #0x22	; 34
      0008B9 1C                    2370 	.db #0x1c	; 28
      0008BA 00                    2371 	.db #0x00	; 0
      0008BB 08                    2372 	.db #0x08	; 8
      0008BC 2A                    2373 	.db #0x2a	; 42
      0008BD 1C                    2374 	.db #0x1c	; 28
      0008BE 2A                    2375 	.db #0x2a	; 42
      0008BF 08                    2376 	.db #0x08	; 8
      0008C0 08                    2377 	.db #0x08	; 8
      0008C1 08                    2378 	.db #0x08	; 8
      0008C2 3E                    2379 	.db #0x3e	; 62
      0008C3 08                    2380 	.db #0x08	; 8
      0008C4 08                    2381 	.db #0x08	; 8
      0008C5 00                    2382 	.db #0x00	; 0
      0008C6 50                    2383 	.db #0x50	; 80	'P'
      0008C7 30                    2384 	.db #0x30	; 48	'0'
      0008C8 00                    2385 	.db #0x00	; 0
      0008C9 00                    2386 	.db #0x00	; 0
      0008CA 08                    2387 	.db #0x08	; 8
      0008CB 08                    2388 	.db #0x08	; 8
      0008CC 08                    2389 	.db #0x08	; 8
      0008CD 08                    2390 	.db #0x08	; 8
      0008CE 08                    2391 	.db #0x08	; 8
      0008CF 00                    2392 	.db #0x00	; 0
      0008D0 30                    2393 	.db #0x30	; 48	'0'
      0008D1 30                    2394 	.db #0x30	; 48	'0'
      0008D2 00                    2395 	.db #0x00	; 0
      0008D3 00                    2396 	.db #0x00	; 0
      0008D4 20                    2397 	.db #0x20	; 32
      0008D5 10                    2398 	.db #0x10	; 16
      0008D6 08                    2399 	.db #0x08	; 8
      0008D7 04                    2400 	.db #0x04	; 4
      0008D8 02                    2401 	.db #0x02	; 2
      0008D9 3E                    2402 	.db #0x3e	; 62
      0008DA 51                    2403 	.db #0x51	; 81	'Q'
      0008DB 49                    2404 	.db #0x49	; 73	'I'
      0008DC 45                    2405 	.db #0x45	; 69	'E'
      0008DD 3E                    2406 	.db #0x3e	; 62
      0008DE 00                    2407 	.db #0x00	; 0
      0008DF 42                    2408 	.db #0x42	; 66	'B'
      0008E0 7F                    2409 	.db #0x7f	; 127
      0008E1 40                    2410 	.db #0x40	; 64
      0008E2 00                    2411 	.db #0x00	; 0
      0008E3 42                    2412 	.db #0x42	; 66	'B'
      0008E4 61                    2413 	.db #0x61	; 97	'a'
      0008E5 51                    2414 	.db #0x51	; 81	'Q'
      0008E6 49                    2415 	.db #0x49	; 73	'I'
      0008E7 46                    2416 	.db #0x46	; 70	'F'
      0008E8 21                    2417 	.db #0x21	; 33
      0008E9 41                    2418 	.db #0x41	; 65	'A'
      0008EA 45                    2419 	.db #0x45	; 69	'E'
      0008EB 4B                    2420 	.db #0x4b	; 75	'K'
      0008EC 31                    2421 	.db #0x31	; 49	'1'
      0008ED 18                    2422 	.db #0x18	; 24
      0008EE 14                    2423 	.db #0x14	; 20
      0008EF 12                    2424 	.db #0x12	; 18
      0008F0 7F                    2425 	.db #0x7f	; 127
      0008F1 10                    2426 	.db #0x10	; 16
      0008F2 27                    2427 	.db #0x27	; 39
      0008F3 45                    2428 	.db #0x45	; 69	'E'
      0008F4 45                    2429 	.db #0x45	; 69	'E'
      0008F5 45                    2430 	.db #0x45	; 69	'E'
      0008F6 39                    2431 	.db #0x39	; 57	'9'
      0008F7 3C                    2432 	.db #0x3c	; 60
      0008F8 4A                    2433 	.db #0x4a	; 74	'J'
      0008F9 49                    2434 	.db #0x49	; 73	'I'
      0008FA 49                    2435 	.db #0x49	; 73	'I'
      0008FB 30                    2436 	.db #0x30	; 48	'0'
      0008FC 01                    2437 	.db #0x01	; 1
      0008FD 71                    2438 	.db #0x71	; 113	'q'
      0008FE 09                    2439 	.db #0x09	; 9
      0008FF 05                    2440 	.db #0x05	; 5
      000900 03                    2441 	.db #0x03	; 3
      000901 36                    2442 	.db #0x36	; 54	'6'
      000902 49                    2443 	.db #0x49	; 73	'I'
      000903 49                    2444 	.db #0x49	; 73	'I'
      000904 49                    2445 	.db #0x49	; 73	'I'
      000905 36                    2446 	.db #0x36	; 54	'6'
      000906 06                    2447 	.db #0x06	; 6
      000907 49                    2448 	.db #0x49	; 73	'I'
      000908 49                    2449 	.db #0x49	; 73	'I'
      000909 29                    2450 	.db #0x29	; 41
      00090A 1E                    2451 	.db #0x1e	; 30
      00090B 00                    2452 	.db #0x00	; 0
      00090C 36                    2453 	.db #0x36	; 54	'6'
      00090D 36                    2454 	.db #0x36	; 54	'6'
      00090E 00                    2455 	.db #0x00	; 0
      00090F 00                    2456 	.db #0x00	; 0
      000910 00                    2457 	.db #0x00	; 0
      000911 56                    2458 	.db #0x56	; 86	'V'
      000912 36                    2459 	.db #0x36	; 54	'6'
      000913 00                    2460 	.db #0x00	; 0
      000914 00                    2461 	.db #0x00	; 0
      000915 00                    2462 	.db #0x00	; 0
      000916 08                    2463 	.db #0x08	; 8
      000917 14                    2464 	.db #0x14	; 20
      000918 22                    2465 	.db #0x22	; 34
      000919 41                    2466 	.db #0x41	; 65	'A'
      00091A 14                    2467 	.db #0x14	; 20
      00091B 14                    2468 	.db #0x14	; 20
      00091C 14                    2469 	.db #0x14	; 20
      00091D 14                    2470 	.db #0x14	; 20
      00091E 14                    2471 	.db #0x14	; 20
      00091F 41                    2472 	.db #0x41	; 65	'A'
      000920 22                    2473 	.db #0x22	; 34
      000921 14                    2474 	.db #0x14	; 20
      000922 08                    2475 	.db #0x08	; 8
      000923 00                    2476 	.db #0x00	; 0
      000924 02                    2477 	.db #0x02	; 2
      000925 01                    2478 	.db #0x01	; 1
      000926 51                    2479 	.db #0x51	; 81	'Q'
      000927 09                    2480 	.db #0x09	; 9
      000928 06                    2481 	.db #0x06	; 6
      000929 32                    2482 	.db #0x32	; 50	'2'
      00092A 49                    2483 	.db #0x49	; 73	'I'
      00092B 79                    2484 	.db #0x79	; 121	'y'
      00092C 41                    2485 	.db #0x41	; 65	'A'
      00092D 3E                    2486 	.db #0x3e	; 62
      00092E 7E                    2487 	.db #0x7e	; 126
      00092F 11                    2488 	.db #0x11	; 17
      000930 11                    2489 	.db #0x11	; 17
      000931 11                    2490 	.db #0x11	; 17
      000932 7E                    2491 	.db #0x7e	; 126
      000933 7F                    2492 	.db #0x7f	; 127
      000934 49                    2493 	.db #0x49	; 73	'I'
      000935 49                    2494 	.db #0x49	; 73	'I'
      000936 49                    2495 	.db #0x49	; 73	'I'
      000937 36                    2496 	.db #0x36	; 54	'6'
      000938 3E                    2497 	.db #0x3e	; 62
      000939 41                    2498 	.db #0x41	; 65	'A'
      00093A 41                    2499 	.db #0x41	; 65	'A'
      00093B 41                    2500 	.db #0x41	; 65	'A'
      00093C 22                    2501 	.db #0x22	; 34
      00093D 7F                    2502 	.db #0x7f	; 127
      00093E 41                    2503 	.db #0x41	; 65	'A'
      00093F 41                    2504 	.db #0x41	; 65	'A'
      000940 22                    2505 	.db #0x22	; 34
      000941 1C                    2506 	.db #0x1c	; 28
      000942 7F                    2507 	.db #0x7f	; 127
      000943 49                    2508 	.db #0x49	; 73	'I'
      000944 49                    2509 	.db #0x49	; 73	'I'
      000945 49                    2510 	.db #0x49	; 73	'I'
      000946 41                    2511 	.db #0x41	; 65	'A'
      000947 7F                    2512 	.db #0x7f	; 127
      000948 09                    2513 	.db #0x09	; 9
      000949 09                    2514 	.db #0x09	; 9
      00094A 01                    2515 	.db #0x01	; 1
      00094B 01                    2516 	.db #0x01	; 1
      00094C 3E                    2517 	.db #0x3e	; 62
      00094D 41                    2518 	.db #0x41	; 65	'A'
      00094E 41                    2519 	.db #0x41	; 65	'A'
      00094F 51                    2520 	.db #0x51	; 81	'Q'
      000950 32                    2521 	.db #0x32	; 50	'2'
      000951 7F                    2522 	.db #0x7f	; 127
      000952 08                    2523 	.db #0x08	; 8
      000953 08                    2524 	.db #0x08	; 8
      000954 08                    2525 	.db #0x08	; 8
      000955 7F                    2526 	.db #0x7f	; 127
      000956 00                    2527 	.db #0x00	; 0
      000957 41                    2528 	.db #0x41	; 65	'A'
      000958 7F                    2529 	.db #0x7f	; 127
      000959 41                    2530 	.db #0x41	; 65	'A'
      00095A 00                    2531 	.db #0x00	; 0
      00095B 20                    2532 	.db #0x20	; 32
      00095C 40                    2533 	.db #0x40	; 64
      00095D 41                    2534 	.db #0x41	; 65	'A'
      00095E 3F                    2535 	.db #0x3f	; 63
      00095F 01                    2536 	.db #0x01	; 1
      000960 7F                    2537 	.db #0x7f	; 127
      000961 08                    2538 	.db #0x08	; 8
      000962 14                    2539 	.db #0x14	; 20
      000963 22                    2540 	.db #0x22	; 34
      000964 41                    2541 	.db #0x41	; 65	'A'
      000965 7F                    2542 	.db #0x7f	; 127
      000966 40                    2543 	.db #0x40	; 64
      000967 40                    2544 	.db #0x40	; 64
      000968 40                    2545 	.db #0x40	; 64
      000969 40                    2546 	.db #0x40	; 64
      00096A 7F                    2547 	.db #0x7f	; 127
      00096B 02                    2548 	.db #0x02	; 2
      00096C 04                    2549 	.db #0x04	; 4
      00096D 02                    2550 	.db #0x02	; 2
      00096E 7F                    2551 	.db #0x7f	; 127
      00096F 7F                    2552 	.db #0x7f	; 127
      000970 04                    2553 	.db #0x04	; 4
      000971 08                    2554 	.db #0x08	; 8
      000972 10                    2555 	.db #0x10	; 16
      000973 7F                    2556 	.db #0x7f	; 127
      000974 3E                    2557 	.db #0x3e	; 62
      000975 41                    2558 	.db #0x41	; 65	'A'
      000976 41                    2559 	.db #0x41	; 65	'A'
      000977 41                    2560 	.db #0x41	; 65	'A'
      000978 3E                    2561 	.db #0x3e	; 62
      000979 7F                    2562 	.db #0x7f	; 127
      00097A 09                    2563 	.db #0x09	; 9
      00097B 09                    2564 	.db #0x09	; 9
      00097C 09                    2565 	.db #0x09	; 9
      00097D 06                    2566 	.db #0x06	; 6
      00097E 3E                    2567 	.db #0x3e	; 62
      00097F 41                    2568 	.db #0x41	; 65	'A'
      000980 51                    2569 	.db #0x51	; 81	'Q'
      000981 21                    2570 	.db #0x21	; 33
      000982 5E                    2571 	.db #0x5e	; 94
      000983 7F                    2572 	.db #0x7f	; 127
      000984 09                    2573 	.db #0x09	; 9
      000985 19                    2574 	.db #0x19	; 25
      000986 29                    2575 	.db #0x29	; 41
      000987 46                    2576 	.db #0x46	; 70	'F'
      000988 46                    2577 	.db #0x46	; 70	'F'
      000989 49                    2578 	.db #0x49	; 73	'I'
      00098A 49                    2579 	.db #0x49	; 73	'I'
      00098B 49                    2580 	.db #0x49	; 73	'I'
      00098C 31                    2581 	.db #0x31	; 49	'1'
      00098D 01                    2582 	.db #0x01	; 1
      00098E 01                    2583 	.db #0x01	; 1
      00098F 7F                    2584 	.db #0x7f	; 127
      000990 01                    2585 	.db #0x01	; 1
      000991 01                    2586 	.db #0x01	; 1
      000992 3F                    2587 	.db #0x3f	; 63
      000993 40                    2588 	.db #0x40	; 64
      000994 40                    2589 	.db #0x40	; 64
      000995 40                    2590 	.db #0x40	; 64
      000996 3F                    2591 	.db #0x3f	; 63
      000997 1F                    2592 	.db #0x1f	; 31
      000998 20                    2593 	.db #0x20	; 32
      000999 40                    2594 	.db #0x40	; 64
      00099A 20                    2595 	.db #0x20	; 32
      00099B 1F                    2596 	.db #0x1f	; 31
      00099C 7F                    2597 	.db #0x7f	; 127
      00099D 20                    2598 	.db #0x20	; 32
      00099E 18                    2599 	.db #0x18	; 24
      00099F 20                    2600 	.db #0x20	; 32
      0009A0 7F                    2601 	.db #0x7f	; 127
      0009A1 63                    2602 	.db #0x63	; 99	'c'
      0009A2 14                    2603 	.db #0x14	; 20
      0009A3 08                    2604 	.db #0x08	; 8
      0009A4 14                    2605 	.db #0x14	; 20
      0009A5 63                    2606 	.db #0x63	; 99	'c'
      0009A6 03                    2607 	.db #0x03	; 3
      0009A7 04                    2608 	.db #0x04	; 4
      0009A8 78                    2609 	.db #0x78	; 120	'x'
      0009A9 04                    2610 	.db #0x04	; 4
      0009AA 03                    2611 	.db #0x03	; 3
      0009AB 61                    2612 	.db #0x61	; 97	'a'
      0009AC 51                    2613 	.db #0x51	; 81	'Q'
      0009AD 49                    2614 	.db #0x49	; 73	'I'
      0009AE 45                    2615 	.db #0x45	; 69	'E'
      0009AF 43                    2616 	.db #0x43	; 67	'C'
      0009B0 00                    2617 	.db #0x00	; 0
      0009B1 00                    2618 	.db #0x00	; 0
      0009B2 7F                    2619 	.db #0x7f	; 127
      0009B3 41                    2620 	.db #0x41	; 65	'A'
      0009B4 41                    2621 	.db #0x41	; 65	'A'
      0009B5 02                    2622 	.db #0x02	; 2
      0009B6 04                    2623 	.db #0x04	; 4
      0009B7 08                    2624 	.db #0x08	; 8
      0009B8 10                    2625 	.db #0x10	; 16
      0009B9 20                    2626 	.db #0x20	; 32
      0009BA 41                    2627 	.db #0x41	; 65	'A'
      0009BB 41                    2628 	.db #0x41	; 65	'A'
      0009BC 7F                    2629 	.db #0x7f	; 127
      0009BD 00                    2630 	.db #0x00	; 0
      0009BE 00                    2631 	.db #0x00	; 0
      0009BF 04                    2632 	.db #0x04	; 4
      0009C0 02                    2633 	.db #0x02	; 2
      0009C1 01                    2634 	.db #0x01	; 1
      0009C2 02                    2635 	.db #0x02	; 2
      0009C3 04                    2636 	.db #0x04	; 4
      0009C4 40                    2637 	.db #0x40	; 64
      0009C5 40                    2638 	.db #0x40	; 64
      0009C6 40                    2639 	.db #0x40	; 64
      0009C7 40                    2640 	.db #0x40	; 64
      0009C8 40                    2641 	.db #0x40	; 64
      0009C9 00                    2642 	.db #0x00	; 0
      0009CA 01                    2643 	.db #0x01	; 1
      0009CB 02                    2644 	.db #0x02	; 2
      0009CC 04                    2645 	.db #0x04	; 4
      0009CD 00                    2646 	.db #0x00	; 0
      0009CE 20                    2647 	.db #0x20	; 32
      0009CF 54                    2648 	.db #0x54	; 84	'T'
      0009D0 54                    2649 	.db #0x54	; 84	'T'
      0009D1 54                    2650 	.db #0x54	; 84	'T'
      0009D2 78                    2651 	.db #0x78	; 120	'x'
      0009D3 7F                    2652 	.db #0x7f	; 127
      0009D4 48                    2653 	.db #0x48	; 72	'H'
      0009D5 44                    2654 	.db #0x44	; 68	'D'
      0009D6 44                    2655 	.db #0x44	; 68	'D'
      0009D7 38                    2656 	.db #0x38	; 56	'8'
      0009D8 38                    2657 	.db #0x38	; 56	'8'
      0009D9 44                    2658 	.db #0x44	; 68	'D'
      0009DA 44                    2659 	.db #0x44	; 68	'D'
      0009DB 44                    2660 	.db #0x44	; 68	'D'
      0009DC 20                    2661 	.db #0x20	; 32
      0009DD 38                    2662 	.db #0x38	; 56	'8'
      0009DE 44                    2663 	.db #0x44	; 68	'D'
      0009DF 44                    2664 	.db #0x44	; 68	'D'
      0009E0 48                    2665 	.db #0x48	; 72	'H'
      0009E1 7F                    2666 	.db #0x7f	; 127
      0009E2 38                    2667 	.db #0x38	; 56	'8'
      0009E3 54                    2668 	.db #0x54	; 84	'T'
      0009E4 54                    2669 	.db #0x54	; 84	'T'
      0009E5 54                    2670 	.db #0x54	; 84	'T'
      0009E6 18                    2671 	.db #0x18	; 24
      0009E7 08                    2672 	.db #0x08	; 8
      0009E8 7E                    2673 	.db #0x7e	; 126
      0009E9 09                    2674 	.db #0x09	; 9
      0009EA 01                    2675 	.db #0x01	; 1
      0009EB 02                    2676 	.db #0x02	; 2
      0009EC 08                    2677 	.db #0x08	; 8
      0009ED 14                    2678 	.db #0x14	; 20
      0009EE 54                    2679 	.db #0x54	; 84	'T'
      0009EF 54                    2680 	.db #0x54	; 84	'T'
      0009F0 3C                    2681 	.db #0x3c	; 60
      0009F1 7F                    2682 	.db #0x7f	; 127
      0009F2 08                    2683 	.db #0x08	; 8
      0009F3 04                    2684 	.db #0x04	; 4
      0009F4 04                    2685 	.db #0x04	; 4
      0009F5 78                    2686 	.db #0x78	; 120	'x'
      0009F6 00                    2687 	.db #0x00	; 0
      0009F7 44                    2688 	.db #0x44	; 68	'D'
      0009F8 7D                    2689 	.db #0x7d	; 125
      0009F9 40                    2690 	.db #0x40	; 64
      0009FA 00                    2691 	.db #0x00	; 0
      0009FB 20                    2692 	.db #0x20	; 32
      0009FC 40                    2693 	.db #0x40	; 64
      0009FD 44                    2694 	.db #0x44	; 68	'D'
      0009FE 3D                    2695 	.db #0x3d	; 61
      0009FF 00                    2696 	.db #0x00	; 0
      000A00 00                    2697 	.db #0x00	; 0
      000A01 7F                    2698 	.db #0x7f	; 127
      000A02 10                    2699 	.db #0x10	; 16
      000A03 28                    2700 	.db #0x28	; 40
      000A04 44                    2701 	.db #0x44	; 68	'D'
      000A05 00                    2702 	.db #0x00	; 0
      000A06 41                    2703 	.db #0x41	; 65	'A'
      000A07 7F                    2704 	.db #0x7f	; 127
      000A08 40                    2705 	.db #0x40	; 64
      000A09 00                    2706 	.db #0x00	; 0
      000A0A 7C                    2707 	.db #0x7c	; 124
      000A0B 04                    2708 	.db #0x04	; 4
      000A0C 18                    2709 	.db #0x18	; 24
      000A0D 04                    2710 	.db #0x04	; 4
      000A0E 78                    2711 	.db #0x78	; 120	'x'
      000A0F 7C                    2712 	.db #0x7c	; 124
      000A10 08                    2713 	.db #0x08	; 8
      000A11 04                    2714 	.db #0x04	; 4
      000A12 04                    2715 	.db #0x04	; 4
      000A13 78                    2716 	.db #0x78	; 120	'x'
      000A14 38                    2717 	.db #0x38	; 56	'8'
      000A15 44                    2718 	.db #0x44	; 68	'D'
      000A16 44                    2719 	.db #0x44	; 68	'D'
      000A17 44                    2720 	.db #0x44	; 68	'D'
      000A18 38                    2721 	.db #0x38	; 56	'8'
      000A19 7C                    2722 	.db #0x7c	; 124
      000A1A 14                    2723 	.db #0x14	; 20
      000A1B 14                    2724 	.db #0x14	; 20
      000A1C 14                    2725 	.db #0x14	; 20
      000A1D 08                    2726 	.db #0x08	; 8
      000A1E 08                    2727 	.db #0x08	; 8
      000A1F 14                    2728 	.db #0x14	; 20
      000A20 14                    2729 	.db #0x14	; 20
      000A21 18                    2730 	.db #0x18	; 24
      000A22 7C                    2731 	.db #0x7c	; 124
      000A23 7C                    2732 	.db #0x7c	; 124
      000A24 08                    2733 	.db #0x08	; 8
      000A25 04                    2734 	.db #0x04	; 4
      000A26 04                    2735 	.db #0x04	; 4
      000A27 08                    2736 	.db #0x08	; 8
      000A28 48                    2737 	.db #0x48	; 72	'H'
      000A29 54                    2738 	.db #0x54	; 84	'T'
      000A2A 54                    2739 	.db #0x54	; 84	'T'
      000A2B 54                    2740 	.db #0x54	; 84	'T'
      000A2C 20                    2741 	.db #0x20	; 32
      000A2D 04                    2742 	.db #0x04	; 4
      000A2E 3F                    2743 	.db #0x3f	; 63
      000A2F 44                    2744 	.db #0x44	; 68	'D'
      000A30 40                    2745 	.db #0x40	; 64
      000A31 20                    2746 	.db #0x20	; 32
      000A32 3C                    2747 	.db #0x3c	; 60
      000A33 40                    2748 	.db #0x40	; 64
      000A34 40                    2749 	.db #0x40	; 64
      000A35 20                    2750 	.db #0x20	; 32
      000A36 7C                    2751 	.db #0x7c	; 124
      000A37 1C                    2752 	.db #0x1c	; 28
      000A38 20                    2753 	.db #0x20	; 32
      000A39 40                    2754 	.db #0x40	; 64
      000A3A 20                    2755 	.db #0x20	; 32
      000A3B 1C                    2756 	.db #0x1c	; 28
      000A3C 3C                    2757 	.db #0x3c	; 60
      000A3D 40                    2758 	.db #0x40	; 64
      000A3E 30                    2759 	.db #0x30	; 48	'0'
      000A3F 40                    2760 	.db #0x40	; 64
      000A40 3C                    2761 	.db #0x3c	; 60
      000A41 44                    2762 	.db #0x44	; 68	'D'
      000A42 28                    2763 	.db #0x28	; 40
      000A43 10                    2764 	.db #0x10	; 16
      000A44 28                    2765 	.db #0x28	; 40
      000A45 44                    2766 	.db #0x44	; 68	'D'
      000A46 0C                    2767 	.db #0x0c	; 12
      000A47 50                    2768 	.db #0x50	; 80	'P'
      000A48 50                    2769 	.db #0x50	; 80	'P'
      000A49 50                    2770 	.db #0x50	; 80	'P'
      000A4A 3C                    2771 	.db #0x3c	; 60
      000A4B 44                    2772 	.db #0x44	; 68	'D'
      000A4C 64                    2773 	.db #0x64	; 100	'd'
      000A4D 54                    2774 	.db #0x54	; 84	'T'
      000A4E 4C                    2775 	.db #0x4c	; 76	'L'
      000A4F 44                    2776 	.db #0x44	; 68	'D'
      000A50 00                    2777 	.db #0x00	; 0
      000A51 08                    2778 	.db #0x08	; 8
      000A52 36                    2779 	.db #0x36	; 54	'6'
      000A53 41                    2780 	.db #0x41	; 65	'A'
      000A54 00                    2781 	.db #0x00	; 0
      000A55 00                    2782 	.db #0x00	; 0
      000A56 00                    2783 	.db #0x00	; 0
      000A57 7F                    2784 	.db #0x7f	; 127
      000A58 00                    2785 	.db #0x00	; 0
      000A59 00                    2786 	.db #0x00	; 0
      000A5A 00                    2787 	.db #0x00	; 0
      000A5B 41                    2788 	.db #0x41	; 65	'A'
      000A5C 36                    2789 	.db #0x36	; 54	'6'
      000A5D 08                    2790 	.db #0x08	; 8
      000A5E 00                    2791 	.db #0x00	; 0
      000A5F 08                    2792 	.db #0x08	; 8
      000A60 08                    2793 	.db #0x08	; 8
      000A61 2A                    2794 	.db #0x2a	; 42
      000A62 1C                    2795 	.db #0x1c	; 28
      000A63 08                    2796 	.db #0x08	; 8
      000A64 08                    2797 	.db #0x08	; 8
      000A65 1C                    2798 	.db #0x1c	; 28
      000A66 2A                    2799 	.db #0x2a	; 42
      000A67 08                    2800 	.db #0x08	; 8
      000A68 08                    2801 	.db #0x08	; 8
                           0001E0  2802 Fmain$__str_0$0$0 == .
      000A69                       2803 ___str_0:
      000A69 51 75 61 6C 71 75 65  2804 	.ascii "Qualquer tecla pra sair"
             72 20 74 65 63 6C 61
             20 70 72 61 20 73 61
             69 72
      000A80 0A                    2805 	.db 0x0a
      000A81 00                    2806 	.db 0x00
                           0001F9  2807 Fmain$__str_1$0$0 == .
      000A82                       2808 ___str_1:
      000A82 50 31 20 3D 20 25 33  2809 	.ascii "P1 = %3u "
             75 20
      000A8B 0D                    2810 	.db 0x0d
      000A8C 00                    2811 	.db 0x00
                           000204  2812 Fmain$__str_2$0$0 == .
      000A8D                       2813 ___str_2:
      000A8D 0A                    2814 	.db 0x0a
      000A8E 00                    2815 	.db 0x00
                           000206  2816 Fmain$__str_3$0$0 == .
      000A8F                       2817 ___str_3:
      000A8F 0A                    2818 	.db 0x0a
      000A90 0A                    2819 	.db 0x0a
      000A91 0A                    2820 	.db 0x0a
      000A92 00                    2821 	.db 0x00
                           00020A  2822 Fmain$__str_4$0$0 == .
      000A93                       2823 ___str_4:
      000A93 4D 45 4E 55           2824 	.ascii "MENU"
      000A97 0A                    2825 	.db 0x0a
      000A98 00                    2826 	.db 0x00
                           000210  2827 Fmain$__str_5$0$0 == .
      000A99                       2828 ___str_5:
      000A99 61 20 2D 20 4C 65 20  2829 	.ascii "a - Le P1"
             50 31
      000AA2 0A                    2830 	.db 0x0a
      000AA3 00                    2831 	.db 0x00
                           00021B  2832 Fmain$__str_6$0$0 == .
      000AA4                       2833 ___str_6:
      000AA4 62 20 2D 20 49 6E 76  2834 	.ascii "b - Inverte P0_7"
             65 72 74 65 20 50 30
             5F 37
      000AB4 0A                    2835 	.db 0x0a
      000AB5 00                    2836 	.db 0x00
                           00022D  2837 Fmain$__str_7$0$0 == .
      000AB6                       2838 ___str_7:
      000AB6 64 65 66 61 75 6C 74  2839 	.ascii "default"
      000ABD 0A                    2840 	.db 0x0a
      000ABE 00                    2841 	.db 0x00
                                   2842 	.area XINIT   (CODE)
                                   2843 	.area CABS    (ABS,CODE)
