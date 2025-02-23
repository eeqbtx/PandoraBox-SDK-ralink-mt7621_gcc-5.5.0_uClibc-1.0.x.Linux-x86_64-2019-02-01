/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _RADIO_DTOP_REG_CSR_H_
#define _RADIO_DTOP_REG_CSR_H_


#ifndef __RADIO_DTOP_REG_CSR_BASE_ADDRESS
#define __RADIO_DTOP_REG_CSR_BASE_ADDRESS (0x47340)
#endif


// 0x0 (TOP0)
#define TOP0_ICON_CODE_LS_LSB                                                  24
#define TOP0_ICON_CODE_LS_MSB                                                  31
#define TOP0_ICON_CODE_LS_MASK                                                 0xff000000
#define TOP0_ICON_CODE_LS_GET(x)                                               (((x) & TOP0_ICON_CODE_LS_MASK) >> TOP0_ICON_CODE_LS_LSB)
#define TOP0_ICON_CODE_LS_SET(x)                                               (((0 | (x)) << TOP0_ICON_CODE_LS_LSB) & TOP0_ICON_CODE_LS_MASK)
#define TOP0_ICON_CODE_LS_RESET                                                0x0
#define TOP0_ICPTAT_CODE_LS_LSB                                                16
#define TOP0_ICPTAT_CODE_LS_MSB                                                23
#define TOP0_ICPTAT_CODE_LS_MASK                                               0xff0000
#define TOP0_ICPTAT_CODE_LS_GET(x)                                             (((x) & TOP0_ICPTAT_CODE_LS_MASK) >> TOP0_ICPTAT_CODE_LS_LSB)
#define TOP0_ICPTAT_CODE_LS_SET(x)                                             (((0 | (x)) << TOP0_ICPTAT_CODE_LS_LSB) & TOP0_ICPTAT_CODE_LS_MASK)
#define TOP0_ICPTAT_CODE_LS_RESET                                              0x0
#define TOP0_VREF_ADJ_LS_LSB                                                   12
#define TOP0_VREF_ADJ_LS_MSB                                                   15
#define TOP0_VREF_ADJ_LS_MASK                                                  0xf000
#define TOP0_VREF_ADJ_LS_GET(x)                                                (((x) & TOP0_VREF_ADJ_LS_MASK) >> TOP0_VREF_ADJ_LS_LSB)
#define TOP0_VREF_ADJ_LS_SET(x)                                                (((0 | (x)) << TOP0_VREF_ADJ_LS_LSB) & TOP0_VREF_ADJ_LS_MASK)
#define TOP0_VREF_ADJ_LS_RESET                                                 0x0
#define TOP0_BIAS_CTAT_ADJ_LS_LSB                                              8
#define TOP0_BIAS_CTAT_ADJ_LS_MSB                                              11
#define TOP0_BIAS_CTAT_ADJ_LS_MASK                                             0xf00
#define TOP0_BIAS_CTAT_ADJ_LS_GET(x)                                           (((x) & TOP0_BIAS_CTAT_ADJ_LS_MASK) >> TOP0_BIAS_CTAT_ADJ_LS_LSB)
#define TOP0_BIAS_CTAT_ADJ_LS_SET(x)                                           (((0 | (x)) << TOP0_BIAS_CTAT_ADJ_LS_LSB) & TOP0_BIAS_CTAT_ADJ_LS_MASK)
#define TOP0_BIAS_CTAT_ADJ_LS_RESET                                            0x0
#define TOP0_LOCALRBIAS_LSB                                                    7
#define TOP0_LOCALRBIAS_MSB                                                    7
#define TOP0_LOCALRBIAS_MASK                                                   0x80
#define TOP0_LOCALRBIAS_GET(x)                                                 (((x) & TOP0_LOCALRBIAS_MASK) >> TOP0_LOCALRBIAS_LSB)
#define TOP0_LOCALRBIAS_SET(x)                                                 (((0 | (x)) << TOP0_LOCALRBIAS_LSB) & TOP0_LOCALRBIAS_MASK)
#define TOP0_LOCALRBIAS_RESET                                                  0x0
#define TOP0_LOCALVREF_LSB                                                     6
#define TOP0_LOCALVREF_MSB                                                     6
#define TOP0_LOCALVREF_MASK                                                    0x40
#define TOP0_LOCALVREF_GET(x)                                                  (((x) & TOP0_LOCALVREF_MASK) >> TOP0_LOCALVREF_LSB)
#define TOP0_LOCALVREF_SET(x)                                                  (((0 | (x)) << TOP0_LOCALVREF_LSB) & TOP0_LOCALVREF_MASK)
#define TOP0_LOCALVREF_RESET                                                   0x0
#define TOP0_LOCALBIAS_CTAT_LSB                                                5
#define TOP0_LOCALBIAS_CTAT_MSB                                                5
#define TOP0_LOCALBIAS_CTAT_MASK                                               0x20
#define TOP0_LOCALBIAS_CTAT_GET(x)                                             (((x) & TOP0_LOCALBIAS_CTAT_MASK) >> TOP0_LOCALBIAS_CTAT_LSB)
#define TOP0_LOCALBIAS_CTAT_SET(x)                                             (((0 | (x)) << TOP0_LOCALBIAS_CTAT_LSB) & TOP0_LOCALBIAS_CTAT_MASK)
#define TOP0_LOCALBIAS_CTAT_RESET                                              0x0
#define TOP0_LOCALXTAL_LSB                                                     4
#define TOP0_LOCALXTAL_MSB                                                     4
#define TOP0_LOCALXTAL_MASK                                                    0x10
#define TOP0_LOCALXTAL_GET(x)                                                  (((x) & TOP0_LOCALXTAL_MASK) >> TOP0_LOCALXTAL_LSB)
#define TOP0_LOCALXTAL_SET(x)                                                  (((0 | (x)) << TOP0_LOCALXTAL_LSB) & TOP0_LOCALXTAL_MASK)
#define TOP0_LOCALXTAL_RESET                                                   0x0
#define TOP0_RESERVED_0_LSB                                                    0
#define TOP0_RESERVED_0_MSB                                                    3
#define TOP0_RESERVED_0_MASK                                                   0xf
#define TOP0_RESERVED_0_GET(x)                                                 (((x) & TOP0_RESERVED_0_MASK) >> TOP0_RESERVED_0_LSB)
#define TOP0_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP0_RESERVED_0_LSB) & TOP0_RESERVED_0_MASK)
#define TOP0_RESERVED_0_RESET                                                  0x0
#define TOP0_ADDRESS                                                           (0x0 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP0_RSTMASK                                                           0xffffffff
#define TOP0_RESET                                                             0x0

// 0x4 (TOP1)
#define TOP1_CAPINDAC_LS_LSB                                                   25
#define TOP1_CAPINDAC_LS_MSB                                                   31
#define TOP1_CAPINDAC_LS_MASK                                                  0xfe000000
#define TOP1_CAPINDAC_LS_GET(x)                                                (((x) & TOP1_CAPINDAC_LS_MASK) >> TOP1_CAPINDAC_LS_LSB)
#define TOP1_CAPINDAC_LS_SET(x)                                                (((0 | (x)) << TOP1_CAPINDAC_LS_LSB) & TOP1_CAPINDAC_LS_MASK)
#define TOP1_CAPINDAC_LS_RESET                                                 0x52
#define TOP1_CAPOUTDAC_LS_LSB                                                  18
#define TOP1_CAPOUTDAC_LS_MSB                                                  24
#define TOP1_CAPOUTDAC_LS_MASK                                                 0x1fc0000
#define TOP1_CAPOUTDAC_LS_GET(x)                                               (((x) & TOP1_CAPOUTDAC_LS_MASK) >> TOP1_CAPOUTDAC_LS_LSB)
#define TOP1_CAPOUTDAC_LS_SET(x)                                               (((0 | (x)) << TOP1_CAPOUTDAC_LS_LSB) & TOP1_CAPOUTDAC_LS_MASK)
#define TOP1_CAPOUTDAC_LS_RESET                                                0x52
#define TOP1_XO_VREG18_LS_LSB                                                  15
#define TOP1_XO_VREG18_LS_MSB                                                  17
#define TOP1_XO_VREG18_LS_MASK                                                 0x38000
#define TOP1_XO_VREG18_LS_GET(x)                                               (((x) & TOP1_XO_VREG18_LS_MASK) >> TOP1_XO_VREG18_LS_LSB)
#define TOP1_XO_VREG18_LS_SET(x)                                               (((0 | (x)) << TOP1_XO_VREG18_LS_LSB) & TOP1_XO_VREG18_LS_MASK)
#define TOP1_XO_VREG18_LS_RESET                                                0x1
#define TOP1_XO_VREG11_LS_LSB                                                  13
#define TOP1_XO_VREG11_LS_MSB                                                  14
#define TOP1_XO_VREG11_LS_MASK                                                 0x6000
#define TOP1_XO_VREG11_LS_GET(x)                                               (((x) & TOP1_XO_VREG11_LS_MASK) >> TOP1_XO_VREG11_LS_LSB)
#define TOP1_XO_VREG11_LS_SET(x)                                               (((0 | (x)) << TOP1_XO_VREG11_LS_LSB) & TOP1_XO_VREG11_LS_MASK)
#define TOP1_XO_VREG11_LS_RESET                                                0x1
#define TOP1_BIBXOSC_LS_LSB                                                    10
#define TOP1_BIBXOSC_LS_MSB                                                    12
#define TOP1_BIBXOSC_LS_MASK                                                   0x1c00
#define TOP1_BIBXOSC_LS_GET(x)                                                 (((x) & TOP1_BIBXOSC_LS_MASK) >> TOP1_BIBXOSC_LS_LSB)
#define TOP1_BIBXOSC_LS_SET(x)                                                 (((0 | (x)) << TOP1_BIBXOSC_LS_LSB) & TOP1_BIBXOSC_LS_MASK)
#define TOP1_BIBXOSC_LS_RESET                                                  0x4
#define TOP1_LEN_LS_LSB                                                        8
#define TOP1_LEN_LS_MSB                                                        9
#define TOP1_LEN_LS_MASK                                                       0x300
#define TOP1_LEN_LS_GET(x)                                                     (((x) & TOP1_LEN_LS_MASK) >> TOP1_LEN_LS_LSB)
#define TOP1_LEN_LS_SET(x)                                                     (((0 | (x)) << TOP1_LEN_LS_LSB) & TOP1_LEN_LS_MASK)
#define TOP1_LEN_LS_RESET                                                      0x3
#define TOP1_XO_DCC_EN_LS_LSB                                                  7
#define TOP1_XO_DCC_EN_LS_MSB                                                  7
#define TOP1_XO_DCC_EN_LS_MASK                                                 0x80
#define TOP1_XO_DCC_EN_LS_GET(x)                                               (((x) & TOP1_XO_DCC_EN_LS_MASK) >> TOP1_XO_DCC_EN_LS_LSB)
#define TOP1_XO_DCC_EN_LS_SET(x)                                               (((0 | (x)) << TOP1_XO_DCC_EN_LS_LSB) & TOP1_XO_DCC_EN_LS_MASK)
#define TOP1_XO_DCC_EN_LS_RESET                                                0x0
#define TOP1_XO_DRV_DCC_BUF_P_LS_LSB                                           4
#define TOP1_XO_DRV_DCC_BUF_P_LS_MSB                                           6
#define TOP1_XO_DRV_DCC_BUF_P_LS_MASK                                          0x70
#define TOP1_XO_DRV_DCC_BUF_P_LS_GET(x)                                        (((x) & TOP1_XO_DRV_DCC_BUF_P_LS_MASK) >> TOP1_XO_DRV_DCC_BUF_P_LS_LSB)
#define TOP1_XO_DRV_DCC_BUF_P_LS_SET(x)                                        (((0 | (x)) << TOP1_XO_DRV_DCC_BUF_P_LS_LSB) & TOP1_XO_DRV_DCC_BUF_P_LS_MASK)
#define TOP1_XO_DRV_DCC_BUF_P_LS_RESET                                         0x1
#define TOP1_XO_DRV_DCC_BUF_N_LS_LSB                                           1
#define TOP1_XO_DRV_DCC_BUF_N_LS_MSB                                           3
#define TOP1_XO_DRV_DCC_BUF_N_LS_MASK                                          0xe
#define TOP1_XO_DRV_DCC_BUF_N_LS_GET(x)                                        (((x) & TOP1_XO_DRV_DCC_BUF_N_LS_MASK) >> TOP1_XO_DRV_DCC_BUF_N_LS_LSB)
#define TOP1_XO_DRV_DCC_BUF_N_LS_SET(x)                                        (((0 | (x)) << TOP1_XO_DRV_DCC_BUF_N_LS_LSB) & TOP1_XO_DRV_DCC_BUF_N_LS_MASK)
#define TOP1_XO_DRV_DCC_BUF_N_LS_RESET                                         0x1
#define TOP1_RESERVED_0_LSB                                                    0
#define TOP1_RESERVED_0_MSB                                                    0
#define TOP1_RESERVED_0_MASK                                                   0x1
#define TOP1_RESERVED_0_GET(x)                                                 (((x) & TOP1_RESERVED_0_MASK) >> TOP1_RESERVED_0_LSB)
#define TOP1_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP1_RESERVED_0_LSB) & TOP1_RESERVED_0_MASK)
#define TOP1_RESERVED_0_RESET                                                  0x0
#define TOP1_ADDRESS                                                           (0x4 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP1_RSTMASK                                                           0xffffffff
#define TOP1_RESET                                                             0xa548b312

// 0x8 (TOP2)
#define TOP2_OTP_SPARE_OVR_EN_LSB                                              31
#define TOP2_OTP_SPARE_OVR_EN_MSB                                              31
#define TOP2_OTP_SPARE_OVR_EN_MASK                                             0x80000000
#define TOP2_OTP_SPARE_OVR_EN_GET(x)                                           (((x) & TOP2_OTP_SPARE_OVR_EN_MASK) >> TOP2_OTP_SPARE_OVR_EN_LSB)
#define TOP2_OTP_SPARE_OVR_EN_SET(x)                                           (((0 | (x)) << TOP2_OTP_SPARE_OVR_EN_LSB) & TOP2_OTP_SPARE_OVR_EN_MASK)
#define TOP2_OTP_SPARE_OVR_EN_RESET                                            0x0
#define TOP2_OTP_SPARE_LS_LSB                                                  25
#define TOP2_OTP_SPARE_LS_MSB                                                  30
#define TOP2_OTP_SPARE_LS_MASK                                                 0x7e000000
#define TOP2_OTP_SPARE_LS_GET(x)                                               (((x) & TOP2_OTP_SPARE_LS_MASK) >> TOP2_OTP_SPARE_LS_LSB)
#define TOP2_OTP_SPARE_LS_SET(x)                                               (((0 | (x)) << TOP2_OTP_SPARE_LS_LSB) & TOP2_OTP_SPARE_LS_MASK)
#define TOP2_OTP_SPARE_LS_RESET                                                0x0
#define TOP2_RESERVED_0_LSB                                                    0
#define TOP2_RESERVED_0_MSB                                                    24
#define TOP2_RESERVED_0_MASK                                                   0x1ffffff
#define TOP2_RESERVED_0_GET(x)                                                 (((x) & TOP2_RESERVED_0_MASK) >> TOP2_RESERVED_0_LSB)
#define TOP2_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP2_RESERVED_0_LSB) & TOP2_RESERVED_0_MASK)
#define TOP2_RESERVED_0_RESET                                                  0x0
#define TOP2_ADDRESS                                                           (0x8 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP2_RSTMASK                                                           0xffffffff
#define TOP2_RESET                                                             0x0

// 0xc (TOP3)
#define TOP3_CPUPLL_SRESET_L_OVR_LSB                                           30
#define TOP3_CPUPLL_SRESET_L_OVR_MSB                                           31
#define TOP3_CPUPLL_SRESET_L_OVR_MASK                                          0xc0000000
#define TOP3_CPUPLL_SRESET_L_OVR_GET(x)                                        (((x) & TOP3_CPUPLL_SRESET_L_OVR_MASK) >> TOP3_CPUPLL_SRESET_L_OVR_LSB)
#define TOP3_CPUPLL_SRESET_L_OVR_SET(x)                                        (((0 | (x)) << TOP3_CPUPLL_SRESET_L_OVR_LSB) & TOP3_CPUPLL_SRESET_L_OVR_MASK)
#define TOP3_CPUPLL_SRESET_L_OVR_RESET                                         0x0
#define TOP3_CPUPLLREGPWD_OVR_LSB                                              28
#define TOP3_CPUPLLREGPWD_OVR_MSB                                              29
#define TOP3_CPUPLLREGPWD_OVR_MASK                                             0x30000000
#define TOP3_CPUPLLREGPWD_OVR_GET(x)                                           (((x) & TOP3_CPUPLLREGPWD_OVR_MASK) >> TOP3_CPUPLLREGPWD_OVR_LSB)
#define TOP3_CPUPLLREGPWD_OVR_SET(x)                                           (((0 | (x)) << TOP3_CPUPLLREGPWD_OVR_LSB) & TOP3_CPUPLLREGPWD_OVR_MASK)
#define TOP3_CPUPLLREGPWD_OVR_RESET                                            0x0
#define TOP3_CPUPLLREGLVL_LSB                                                  26
#define TOP3_CPUPLLREGLVL_MSB                                                  27
#define TOP3_CPUPLLREGLVL_MASK                                                 0xc000000
#define TOP3_CPUPLLREGLVL_GET(x)                                               (((x) & TOP3_CPUPLLREGLVL_MASK) >> TOP3_CPUPLLREGLVL_LSB)
#define TOP3_CPUPLLREGLVL_SET(x)                                               (((0 | (x)) << TOP3_CPUPLLREGLVL_LSB) & TOP3_CPUPLLREGLVL_MASK)
#define TOP3_CPUPLLREGLVL_RESET                                                0x1
#define TOP3_CPUPLLREG_ATBHSEL_LSB                                             24
#define TOP3_CPUPLLREG_ATBHSEL_MSB                                             25
#define TOP3_CPUPLLREG_ATBHSEL_MASK                                            0x3000000
#define TOP3_CPUPLLREG_ATBHSEL_GET(x)                                          (((x) & TOP3_CPUPLLREG_ATBHSEL_MASK) >> TOP3_CPUPLLREG_ATBHSEL_LSB)
#define TOP3_CPUPLLREG_ATBHSEL_SET(x)                                          (((0 | (x)) << TOP3_CPUPLLREG_ATBHSEL_LSB) & TOP3_CPUPLLREG_ATBHSEL_MASK)
#define TOP3_CPUPLLREG_ATBHSEL_RESET                                           0x0
#define TOP3_CPUPLLPWD_OVR_LSB                                                 22
#define TOP3_CPUPLLPWD_OVR_MSB                                                 23
#define TOP3_CPUPLLPWD_OVR_MASK                                                0xc00000
#define TOP3_CPUPLLPWD_OVR_GET(x)                                              (((x) & TOP3_CPUPLLPWD_OVR_MASK) >> TOP3_CPUPLLPWD_OVR_LSB)
#define TOP3_CPUPLLPWD_OVR_SET(x)                                              (((0 | (x)) << TOP3_CPUPLLPWD_OVR_LSB) & TOP3_CPUPLLPWD_OVR_MASK)
#define TOP3_CPUPLLPWD_OVR_RESET                                               0x0
#define TOP3_CPUPLLBYPASS_OVR_LSB                                              20
#define TOP3_CPUPLLBYPASS_OVR_MSB                                              21
#define TOP3_CPUPLLBYPASS_OVR_MASK                                             0x300000
#define TOP3_CPUPLLBYPASS_OVR_GET(x)                                           (((x) & TOP3_CPUPLLBYPASS_OVR_MASK) >> TOP3_CPUPLLBYPASS_OVR_LSB)
#define TOP3_CPUPLLBYPASS_OVR_SET(x)                                           (((0 | (x)) << TOP3_CPUPLLBYPASS_OVR_LSB) & TOP3_CPUPLLBYPASS_OVR_MASK)
#define TOP3_CPUPLLBYPASS_OVR_RESET                                            0x0
#define TOP3_CPUPLLREG_BYPASS_LSB                                              19
#define TOP3_CPUPLLREG_BYPASS_MSB                                              19
#define TOP3_CPUPLLREG_BYPASS_MASK                                             0x80000
#define TOP3_CPUPLLREG_BYPASS_GET(x)                                           (((x) & TOP3_CPUPLLREG_BYPASS_MASK) >> TOP3_CPUPLLREG_BYPASS_LSB)
#define TOP3_CPUPLLREG_BYPASS_SET(x)                                           (((0 | (x)) << TOP3_CPUPLLREG_BYPASS_LSB) & TOP3_CPUPLLREG_BYPASS_MASK)
#define TOP3_CPUPLLREG_BYPASS_RESET                                            0x0
#define TOP3_RESERVED_0_LSB                                                    16
#define TOP3_RESERVED_0_MSB                                                    18
#define TOP3_RESERVED_0_MASK                                                   0x70000
#define TOP3_RESERVED_0_GET(x)                                                 (((x) & TOP3_RESERVED_0_MASK) >> TOP3_RESERVED_0_LSB)
#define TOP3_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP3_RESERVED_0_LSB) & TOP3_RESERVED_0_MASK)
#define TOP3_RESERVED_0_RESET                                                  0x0
#define TOP3_BBPLL_SRESET_L_OVR_LSB                                            14
#define TOP3_BBPLL_SRESET_L_OVR_MSB                                            15
#define TOP3_BBPLL_SRESET_L_OVR_MASK                                           0xc000
#define TOP3_BBPLL_SRESET_L_OVR_GET(x)                                         (((x) & TOP3_BBPLL_SRESET_L_OVR_MASK) >> TOP3_BBPLL_SRESET_L_OVR_LSB)
#define TOP3_BBPLL_SRESET_L_OVR_SET(x)                                         (((0 | (x)) << TOP3_BBPLL_SRESET_L_OVR_LSB) & TOP3_BBPLL_SRESET_L_OVR_MASK)
#define TOP3_BBPLL_SRESET_L_OVR_RESET                                          0x0
#define TOP3_BBPLLREGPWD_OVR_LSB                                               12
#define TOP3_BBPLLREGPWD_OVR_MSB                                               13
#define TOP3_BBPLLREGPWD_OVR_MASK                                              0x3000
#define TOP3_BBPLLREGPWD_OVR_GET(x)                                            (((x) & TOP3_BBPLLREGPWD_OVR_MASK) >> TOP3_BBPLLREGPWD_OVR_LSB)
#define TOP3_BBPLLREGPWD_OVR_SET(x)                                            (((0 | (x)) << TOP3_BBPLLREGPWD_OVR_LSB) & TOP3_BBPLLREGPWD_OVR_MASK)
#define TOP3_BBPLLREGPWD_OVR_RESET                                             0x0
#define TOP3_BBPLLREGLVL_LSB                                                   10
#define TOP3_BBPLLREGLVL_MSB                                                   11
#define TOP3_BBPLLREGLVL_MASK                                                  0xc00
#define TOP3_BBPLLREGLVL_GET(x)                                                (((x) & TOP3_BBPLLREGLVL_MASK) >> TOP3_BBPLLREGLVL_LSB)
#define TOP3_BBPLLREGLVL_SET(x)                                                (((0 | (x)) << TOP3_BBPLLREGLVL_LSB) & TOP3_BBPLLREGLVL_MASK)
#define TOP3_BBPLLREGLVL_RESET                                                 0x1
#define TOP3_BBPLLREG_ATBHSEL_LSB                                              8
#define TOP3_BBPLLREG_ATBHSEL_MSB                                              9
#define TOP3_BBPLLREG_ATBHSEL_MASK                                             0x300
#define TOP3_BBPLLREG_ATBHSEL_GET(x)                                           (((x) & TOP3_BBPLLREG_ATBHSEL_MASK) >> TOP3_BBPLLREG_ATBHSEL_LSB)
#define TOP3_BBPLLREG_ATBHSEL_SET(x)                                           (((0 | (x)) << TOP3_BBPLLREG_ATBHSEL_LSB) & TOP3_BBPLLREG_ATBHSEL_MASK)
#define TOP3_BBPLLREG_ATBHSEL_RESET                                            0x0
#define TOP3_BBPLLPWD_OVR_LSB                                                  6
#define TOP3_BBPLLPWD_OVR_MSB                                                  7
#define TOP3_BBPLLPWD_OVR_MASK                                                 0xc0
#define TOP3_BBPLLPWD_OVR_GET(x)                                               (((x) & TOP3_BBPLLPWD_OVR_MASK) >> TOP3_BBPLLPWD_OVR_LSB)
#define TOP3_BBPLLPWD_OVR_SET(x)                                               (((0 | (x)) << TOP3_BBPLLPWD_OVR_LSB) & TOP3_BBPLLPWD_OVR_MASK)
#define TOP3_BBPLLPWD_OVR_RESET                                                0x0
#define TOP3_BBPLLBYPASS_OVR_LSB                                               4
#define TOP3_BBPLLBYPASS_OVR_MSB                                               5
#define TOP3_BBPLLBYPASS_OVR_MASK                                              0x30
#define TOP3_BBPLLBYPASS_OVR_GET(x)                                            (((x) & TOP3_BBPLLBYPASS_OVR_MASK) >> TOP3_BBPLLBYPASS_OVR_LSB)
#define TOP3_BBPLLBYPASS_OVR_SET(x)                                            (((0 | (x)) << TOP3_BBPLLBYPASS_OVR_LSB) & TOP3_BBPLLBYPASS_OVR_MASK)
#define TOP3_BBPLLBYPASS_OVR_RESET                                             0x0
#define TOP3_BBPLLREG_BYPASS_LSB                                               3
#define TOP3_BBPLLREG_BYPASS_MSB                                               3
#define TOP3_BBPLLREG_BYPASS_MASK                                              0x8
#define TOP3_BBPLLREG_BYPASS_GET(x)                                            (((x) & TOP3_BBPLLREG_BYPASS_MASK) >> TOP3_BBPLLREG_BYPASS_LSB)
#define TOP3_BBPLLREG_BYPASS_SET(x)                                            (((0 | (x)) << TOP3_BBPLLREG_BYPASS_LSB) & TOP3_BBPLLREG_BYPASS_MASK)
#define TOP3_BBPLLREG_BYPASS_RESET                                             0x0
#define TOP3_RESERVED_1_LSB                                                    0
#define TOP3_RESERVED_1_MSB                                                    2
#define TOP3_RESERVED_1_MASK                                                   0x7
#define TOP3_RESERVED_1_GET(x)                                                 (((x) & TOP3_RESERVED_1_MASK) >> TOP3_RESERVED_1_LSB)
#define TOP3_RESERVED_1_SET(x)                                                 (((0 | (x)) << TOP3_RESERVED_1_LSB) & TOP3_RESERVED_1_MASK)
#define TOP3_RESERVED_1_RESET                                                  0x0
#define TOP3_ADDRESS                                                           (0xc + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP3_RSTMASK                                                           0xffffffff
#define TOP3_RESET                                                             0x4000400

// 0x10 (TOP4)
#define TOP4_VDD_DIV_R_ENABLE_LSB                                              31
#define TOP4_VDD_DIV_R_ENABLE_MSB                                              31
#define TOP4_VDD_DIV_R_ENABLE_MASK                                             0x80000000
#define TOP4_VDD_DIV_R_ENABLE_GET(x)                                           (((x) & TOP4_VDD_DIV_R_ENABLE_MASK) >> TOP4_VDD_DIV_R_ENABLE_LSB)
#define TOP4_VDD_DIV_R_ENABLE_SET(x)                                           (((0 | (x)) << TOP4_VDD_DIV_R_ENABLE_LSB) & TOP4_VDD_DIV_R_ENABLE_MASK)
#define TOP4_VDD_DIV_R_ENABLE_RESET                                            0x0
#define TOP4_BIAS_JUMPSTART_LSB                                                30
#define TOP4_BIAS_JUMPSTART_MSB                                                30
#define TOP4_BIAS_JUMPSTART_MASK                                               0x40000000
#define TOP4_BIAS_JUMPSTART_GET(x)                                             (((x) & TOP4_BIAS_JUMPSTART_MASK) >> TOP4_BIAS_JUMPSTART_LSB)
#define TOP4_BIAS_JUMPSTART_SET(x)                                             (((0 | (x)) << TOP4_BIAS_JUMPSTART_LSB) & TOP4_BIAS_JUMPSTART_MASK)
#define TOP4_BIAS_JUMPSTART_RESET                                              0x0
#define TOP4_PTAT_ENABLE_LSB                                                   29
#define TOP4_PTAT_ENABLE_MSB                                                   29
#define TOP4_PTAT_ENABLE_MASK                                                  0x20000000
#define TOP4_PTAT_ENABLE_GET(x)                                                (((x) & TOP4_PTAT_ENABLE_MASK) >> TOP4_PTAT_ENABLE_LSB)
#define TOP4_PTAT_ENABLE_SET(x)                                                (((0 | (x)) << TOP4_PTAT_ENABLE_LSB) & TOP4_PTAT_ENABLE_MASK)
#define TOP4_PTAT_ENABLE_RESET                                                 0x1
#define TOP4_PTAT_STATIC_ENABLE_LSB                                            28
#define TOP4_PTAT_STATIC_ENABLE_MSB                                            28
#define TOP4_PTAT_STATIC_ENABLE_MASK                                           0x10000000
#define TOP4_PTAT_STATIC_ENABLE_GET(x)                                         (((x) & TOP4_PTAT_STATIC_ENABLE_MASK) >> TOP4_PTAT_STATIC_ENABLE_LSB)
#define TOP4_PTAT_STATIC_ENABLE_SET(x)                                         (((0 | (x)) << TOP4_PTAT_STATIC_ENABLE_LSB) & TOP4_PTAT_STATIC_ENABLE_MASK)
#define TOP4_PTAT_STATIC_ENABLE_RESET                                          0x0
#define TOP4_TMX_VBGRCAL_ENABLE_LSB                                            27
#define TOP4_TMX_VBGRCAL_ENABLE_MSB                                            27
#define TOP4_TMX_VBGRCAL_ENABLE_MASK                                           0x8000000
#define TOP4_TMX_VBGRCAL_ENABLE_GET(x)                                         (((x) & TOP4_TMX_VBGRCAL_ENABLE_MASK) >> TOP4_TMX_VBGRCAL_ENABLE_LSB)
#define TOP4_TMX_VBGRCAL_ENABLE_SET(x)                                         (((0 | (x)) << TOP4_TMX_VBGRCAL_ENABLE_LSB) & TOP4_TMX_VBGRCAL_ENABLE_MASK)
#define TOP4_TMX_VBGRCAL_ENABLE_RESET                                          0x0
#define TOP4_ICAL_PATH_ENABLE_LSB                                              26
#define TOP4_ICAL_PATH_ENABLE_MSB                                              26
#define TOP4_ICAL_PATH_ENABLE_MASK                                             0x4000000
#define TOP4_ICAL_PATH_ENABLE_GET(x)                                           (((x) & TOP4_ICAL_PATH_ENABLE_MASK) >> TOP4_ICAL_PATH_ENABLE_LSB)
#define TOP4_ICAL_PATH_ENABLE_SET(x)                                           (((0 | (x)) << TOP4_ICAL_PATH_ENABLE_LSB) & TOP4_ICAL_PATH_ENABLE_MASK)
#define TOP4_ICAL_PATH_ENABLE_RESET                                            0x0
#define TOP4_LPF_ENABLE_LSB                                                    25
#define TOP4_LPF_ENABLE_MSB                                                    25
#define TOP4_LPF_ENABLE_MASK                                                   0x2000000
#define TOP4_LPF_ENABLE_GET(x)                                                 (((x) & TOP4_LPF_ENABLE_MASK) >> TOP4_LPF_ENABLE_LSB)
#define TOP4_LPF_ENABLE_SET(x)                                                 (((0 | (x)) << TOP4_LPF_ENABLE_LSB) & TOP4_LPF_ENABLE_MASK)
#define TOP4_LPF_ENABLE_RESET                                                  0x1
#define TOP4_VBGR_PATH_ENABLE_LSB                                              24
#define TOP4_VBGR_PATH_ENABLE_MSB                                              24
#define TOP4_VBGR_PATH_ENABLE_MASK                                             0x1000000
#define TOP4_VBGR_PATH_ENABLE_GET(x)                                           (((x) & TOP4_VBGR_PATH_ENABLE_MASK) >> TOP4_VBGR_PATH_ENABLE_LSB)
#define TOP4_VBGR_PATH_ENABLE_SET(x)                                           (((0 | (x)) << TOP4_VBGR_PATH_ENABLE_LSB) & TOP4_VBGR_PATH_ENABLE_MASK)
#define TOP4_VBGR_PATH_ENABLE_RESET                                            0x0
#define TOP4_VBGR_UT_PATH_ENABLE_LSB                                           23
#define TOP4_VBGR_UT_PATH_ENABLE_MSB                                           23
#define TOP4_VBGR_UT_PATH_ENABLE_MASK                                          0x800000
#define TOP4_VBGR_UT_PATH_ENABLE_GET(x)                                        (((x) & TOP4_VBGR_UT_PATH_ENABLE_MASK) >> TOP4_VBGR_UT_PATH_ENABLE_LSB)
#define TOP4_VBGR_UT_PATH_ENABLE_SET(x)                                        (((0 | (x)) << TOP4_VBGR_UT_PATH_ENABLE_LSB) & TOP4_VBGR_UT_PATH_ENABLE_MASK)
#define TOP4_VBGR_UT_PATH_ENABLE_RESET                                         0x0
#define TOP4_TEMP_ENABLE_LSB                                                   22
#define TOP4_TEMP_ENABLE_MSB                                                   22
#define TOP4_TEMP_ENABLE_MASK                                                  0x400000
#define TOP4_TEMP_ENABLE_GET(x)                                                (((x) & TOP4_TEMP_ENABLE_MASK) >> TOP4_TEMP_ENABLE_LSB)
#define TOP4_TEMP_ENABLE_SET(x)                                                (((0 | (x)) << TOP4_TEMP_ENABLE_LSB) & TOP4_TEMP_ENABLE_MASK)
#define TOP4_TEMP_ENABLE_RESET                                                 0x0
#define TOP4_BIAS_TEST_LSB                                                     19
#define TOP4_BIAS_TEST_MSB                                                     21
#define TOP4_BIAS_TEST_MASK                                                    0x380000
#define TOP4_BIAS_TEST_GET(x)                                                  (((x) & TOP4_BIAS_TEST_MASK) >> TOP4_BIAS_TEST_LSB)
#define TOP4_BIAS_TEST_SET(x)                                                  (((0 | (x)) << TOP4_BIAS_TEST_LSB) & TOP4_BIAS_TEST_MASK)
#define TOP4_BIAS_TEST_RESET                                                   0x0
#define TOP4_BIASON_OVR_LSB                                                    17
#define TOP4_BIASON_OVR_MSB                                                    18
#define TOP4_BIASON_OVR_MASK                                                   0x60000
#define TOP4_BIASON_OVR_GET(x)                                                 (((x) & TOP4_BIASON_OVR_MASK) >> TOP4_BIASON_OVR_LSB)
#define TOP4_BIASON_OVR_SET(x)                                                 (((0 | (x)) << TOP4_BIASON_OVR_LSB) & TOP4_BIASON_OVR_MASK)
#define TOP4_BIASON_OVR_RESET                                                  0x0
#define TOP4_CURSEL_LSB                                                        15
#define TOP4_CURSEL_MSB                                                        16
#define TOP4_CURSEL_MASK                                                       0x18000
#define TOP4_CURSEL_GET(x)                                                     (((x) & TOP4_CURSEL_MASK) >> TOP4_CURSEL_LSB)
#define TOP4_CURSEL_SET(x)                                                     (((0 | (x)) << TOP4_CURSEL_LSB) & TOP4_CURSEL_MASK)
#define TOP4_CURSEL_RESET                                                      0x1
#define TOP4_PEN_OVR_LSB                                                       13
#define TOP4_PEN_OVR_MSB                                                       14
#define TOP4_PEN_OVR_MASK                                                      0x6000
#define TOP4_PEN_OVR_GET(x)                                                    (((x) & TOP4_PEN_OVR_MASK) >> TOP4_PEN_OVR_LSB)
#define TOP4_PEN_OVR_SET(x)                                                    (((0 | (x)) << TOP4_PEN_OVR_LSB) & TOP4_PEN_OVR_MASK)
#define TOP4_PEN_OVR_RESET                                                     0x0
#define TOP4_BBCLK_TEST_LSB                                                    12
#define TOP4_BBCLK_TEST_MSB                                                    12
#define TOP4_BBCLK_TEST_MASK                                                   0x1000
#define TOP4_BBCLK_TEST_GET(x)                                                 (((x) & TOP4_BBCLK_TEST_MASK) >> TOP4_BBCLK_TEST_LSB)
#define TOP4_BBCLK_TEST_SET(x)                                                 (((0 | (x)) << TOP4_BBCLK_TEST_LSB) & TOP4_BBCLK_TEST_MASK)
#define TOP4_BBCLK_TEST_RESET                                                  0x0
#define TOP4_BBCLK_TEST_DIFFON_LSB                                             11
#define TOP4_BBCLK_TEST_DIFFON_MSB                                             11
#define TOP4_BBCLK_TEST_DIFFON_MASK                                            0x800
#define TOP4_BBCLK_TEST_DIFFON_GET(x)                                          (((x) & TOP4_BBCLK_TEST_DIFFON_MASK) >> TOP4_BBCLK_TEST_DIFFON_LSB)
#define TOP4_BBCLK_TEST_DIFFON_SET(x)                                          (((0 | (x)) << TOP4_BBCLK_TEST_DIFFON_LSB) & TOP4_BBCLK_TEST_DIFFON_MASK)
#define TOP4_BBCLK_TEST_DIFFON_RESET                                           0x0
#define TOP4_RESERVED_0_LSB                                                    8
#define TOP4_RESERVED_0_MSB                                                    10
#define TOP4_RESERVED_0_MASK                                                   0x700
#define TOP4_RESERVED_0_GET(x)                                                 (((x) & TOP4_RESERVED_0_MASK) >> TOP4_RESERVED_0_LSB)
#define TOP4_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP4_RESERVED_0_LSB) & TOP4_RESERVED_0_MASK)
#define TOP4_RESERVED_0_RESET                                                  0x0
#define TOP4_TOP_ABSEL_LSB                                                     4
#define TOP4_TOP_ABSEL_MSB                                                     7
#define TOP4_TOP_ABSEL_MASK                                                    0xf0
#define TOP4_TOP_ABSEL_GET(x)                                                  (((x) & TOP4_TOP_ABSEL_MASK) >> TOP4_TOP_ABSEL_LSB)
#define TOP4_TOP_ABSEL_SET(x)                                                  (((0 | (x)) << TOP4_TOP_ABSEL_LSB) & TOP4_TOP_ABSEL_MASK)
#define TOP4_TOP_ABSEL_RESET                                                   0x0
#define TOP4_TOP_ABSELH_LSB                                                    0
#define TOP4_TOP_ABSELH_MSB                                                    3
#define TOP4_TOP_ABSELH_MASK                                                   0xf
#define TOP4_TOP_ABSELH_GET(x)                                                 (((x) & TOP4_TOP_ABSELH_MASK) >> TOP4_TOP_ABSELH_LSB)
#define TOP4_TOP_ABSELH_SET(x)                                                 (((0 | (x)) << TOP4_TOP_ABSELH_LSB) & TOP4_TOP_ABSELH_MASK)
#define TOP4_TOP_ABSELH_RESET                                                  0x0
#define TOP4_ADDRESS                                                           (0x10 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP4_RSTMASK                                                           0xffffffff
#define TOP4_RESET                                                             0x22008000

// 0x14 (TOP5)
#define TOP5_SYN_DCLK_ON_SEL_LSB                                               31
#define TOP5_SYN_DCLK_ON_SEL_MSB                                               31
#define TOP5_SYN_DCLK_ON_SEL_MASK                                              0x80000000
#define TOP5_SYN_DCLK_ON_SEL_GET(x)                                            (((x) & TOP5_SYN_DCLK_ON_SEL_MASK) >> TOP5_SYN_DCLK_ON_SEL_LSB)
#define TOP5_SYN_DCLK_ON_SEL_SET(x)                                            (((0 | (x)) << TOP5_SYN_DCLK_ON_SEL_LSB) & TOP5_SYN_DCLK_ON_SEL_MASK)
#define TOP5_SYN_DCLK_ON_SEL_RESET                                             0x0
#define TOP5_XO_FASTCH_OVR_LSB                                                 30
#define TOP5_XO_FASTCH_OVR_MSB                                                 30
#define TOP5_XO_FASTCH_OVR_MASK                                                0x40000000
#define TOP5_XO_FASTCH_OVR_GET(x)                                              (((x) & TOP5_XO_FASTCH_OVR_MASK) >> TOP5_XO_FASTCH_OVR_LSB)
#define TOP5_XO_FASTCH_OVR_SET(x)                                              (((0 | (x)) << TOP5_XO_FASTCH_OVR_LSB) & TOP5_XO_FASTCH_OVR_MASK)
#define TOP5_XO_FASTCH_OVR_RESET                                               0x0
#define TOP5_XO_REG_FASTCH_LS_LSB                                              29
#define TOP5_XO_REG_FASTCH_LS_MSB                                              29
#define TOP5_XO_REG_FASTCH_LS_MASK                                             0x20000000
#define TOP5_XO_REG_FASTCH_LS_GET(x)                                           (((x) & TOP5_XO_REG_FASTCH_LS_MASK) >> TOP5_XO_REG_FASTCH_LS_LSB)
#define TOP5_XO_REG_FASTCH_LS_SET(x)                                           (((0 | (x)) << TOP5_XO_REG_FASTCH_LS_LSB) & TOP5_XO_REG_FASTCH_LS_MASK)
#define TOP5_XO_REG_FASTCH_LS_RESET                                            0x0
#define TOP5_XO_DRV_FASTCH_LS_LSB                                              28
#define TOP5_XO_DRV_FASTCH_LS_MSB                                              28
#define TOP5_XO_DRV_FASTCH_LS_MASK                                             0x10000000
#define TOP5_XO_DRV_FASTCH_LS_GET(x)                                           (((x) & TOP5_XO_DRV_FASTCH_LS_MASK) >> TOP5_XO_DRV_FASTCH_LS_LSB)
#define TOP5_XO_DRV_FASTCH_LS_SET(x)                                           (((0 | (x)) << TOP5_XO_DRV_FASTCH_LS_LSB) & TOP5_XO_DRV_FASTCH_LS_MASK)
#define TOP5_XO_DRV_FASTCH_LS_RESET                                            0x0
#define TOP5_XO_REG18_EN_OVR_LSB                                               26
#define TOP5_XO_REG18_EN_OVR_MSB                                               27
#define TOP5_XO_REG18_EN_OVR_MASK                                              0xc000000
#define TOP5_XO_REG18_EN_OVR_GET(x)                                            (((x) & TOP5_XO_REG18_EN_OVR_MASK) >> TOP5_XO_REG18_EN_OVR_LSB)
#define TOP5_XO_REG18_EN_OVR_SET(x)                                            (((0 | (x)) << TOP5_XO_REG18_EN_OVR_LSB) & TOP5_XO_REG18_EN_OVR_MASK)
#define TOP5_XO_REG18_EN_OVR_RESET                                             0x0
#define TOP5_XO_REG11_EN_OVR_LSB                                               24
#define TOP5_XO_REG11_EN_OVR_MSB                                               25
#define TOP5_XO_REG11_EN_OVR_MASK                                              0x3000000
#define TOP5_XO_REG11_EN_OVR_GET(x)                                            (((x) & TOP5_XO_REG11_EN_OVR_MASK) >> TOP5_XO_REG11_EN_OVR_LSB)
#define TOP5_XO_REG11_EN_OVR_SET(x)                                            (((0 | (x)) << TOP5_XO_REG11_EN_OVR_LSB) & TOP5_XO_REG11_EN_OVR_MASK)
#define TOP5_XO_REG11_EN_OVR_RESET                                             0x0
#define TOP5_XO_REG18_BYPASS_LSB                                               23
#define TOP5_XO_REG18_BYPASS_MSB                                               23
#define TOP5_XO_REG18_BYPASS_MASK                                              0x800000
#define TOP5_XO_REG18_BYPASS_GET(x)                                            (((x) & TOP5_XO_REG18_BYPASS_MASK) >> TOP5_XO_REG18_BYPASS_LSB)
#define TOP5_XO_REG18_BYPASS_SET(x)                                            (((0 | (x)) << TOP5_XO_REG18_BYPASS_LSB) & TOP5_XO_REG18_BYPASS_MASK)
#define TOP5_XO_REG18_BYPASS_RESET                                             0x0
#define TOP5_XO_REG11_BYPASS_LSB                                               22
#define TOP5_XO_REG11_BYPASS_MSB                                               22
#define TOP5_XO_REG11_BYPASS_MASK                                              0x400000
#define TOP5_XO_REG11_BYPASS_GET(x)                                            (((x) & TOP5_XO_REG11_BYPASS_MASK) >> TOP5_XO_REG11_BYPASS_LSB)
#define TOP5_XO_REG11_BYPASS_SET(x)                                            (((0 | (x)) << TOP5_XO_REG11_BYPASS_LSB) & TOP5_XO_REG11_BYPASS_MASK)
#define TOP5_XO_REG11_BYPASS_RESET                                             0x0
#define TOP5_TMODE_OVR_LSB                                                     20
#define TOP5_TMODE_OVR_MSB                                                     21
#define TOP5_TMODE_OVR_MASK                                                    0x300000
#define TOP5_TMODE_OVR_GET(x)                                                  (((x) & TOP5_TMODE_OVR_MASK) >> TOP5_TMODE_OVR_LSB)
#define TOP5_TMODE_OVR_SET(x)                                                  (((0 | (x)) << TOP5_TMODE_OVR_LSB) & TOP5_TMODE_OVR_MASK)
#define TOP5_TMODE_OVR_RESET                                                   0x2
#define TOP5_OSCON_OVR_LSB                                                     18
#define TOP5_OSCON_OVR_MSB                                                     19
#define TOP5_OSCON_OVR_MASK                                                    0xc0000
#define TOP5_OSCON_OVR_GET(x)                                                  (((x) & TOP5_OSCON_OVR_MASK) >> TOP5_OSCON_OVR_LSB)
#define TOP5_OSCON_OVR_SET(x)                                                  (((0 | (x)) << TOP5_OSCON_OVR_LSB) & TOP5_OSCON_OVR_MASK)
#define TOP5_OSCON_OVR_RESET                                                   0x0
#define TOP5_EN_CLKIN_LSB                                                      17
#define TOP5_EN_CLKIN_MSB                                                      17
#define TOP5_EN_CLKIN_MASK                                                     0x20000
#define TOP5_EN_CLKIN_GET(x)                                                   (((x) & TOP5_EN_CLKIN_MASK) >> TOP5_EN_CLKIN_LSB)
#define TOP5_EN_CLKIN_SET(x)                                                   (((0 | (x)) << TOP5_EN_CLKIN_LSB) & TOP5_EN_CLKIN_MASK)
#define TOP5_EN_CLKIN_RESET                                                    0x0
#define TOP5_EN_SYN_ACLK_LSB                                                   16
#define TOP5_EN_SYN_ACLK_MSB                                                   16
#define TOP5_EN_SYN_ACLK_MASK                                                  0x10000
#define TOP5_EN_SYN_ACLK_GET(x)                                                (((x) & TOP5_EN_SYN_ACLK_MASK) >> TOP5_EN_SYN_ACLK_LSB)
#define TOP5_EN_SYN_ACLK_SET(x)                                                (((0 | (x)) << TOP5_EN_SYN_ACLK_LSB) & TOP5_EN_SYN_ACLK_MASK)
#define TOP5_EN_SYN_ACLK_RESET                                                 0x0
#define TOP5_EN_SYN_DCLK_LSB                                                   15
#define TOP5_EN_SYN_DCLK_MSB                                                   15
#define TOP5_EN_SYN_DCLK_MASK                                                  0x8000
#define TOP5_EN_SYN_DCLK_GET(x)                                                (((x) & TOP5_EN_SYN_DCLK_MASK) >> TOP5_EN_SYN_DCLK_LSB)
#define TOP5_EN_SYN_DCLK_SET(x)                                                (((0 | (x)) << TOP5_EN_SYN_DCLK_LSB) & TOP5_EN_SYN_DCLK_MASK)
#define TOP5_EN_SYN_DCLK_RESET                                                 0x0
#define TOP5_EN_BBPLL_CLK_LSB                                                  14
#define TOP5_EN_BBPLL_CLK_MSB                                                  14
#define TOP5_EN_BBPLL_CLK_MASK                                                 0x4000
#define TOP5_EN_BBPLL_CLK_GET(x)                                               (((x) & TOP5_EN_BBPLL_CLK_MASK) >> TOP5_EN_BBPLL_CLK_LSB)
#define TOP5_EN_BBPLL_CLK_SET(x)                                               (((0 | (x)) << TOP5_EN_BBPLL_CLK_LSB) & TOP5_EN_BBPLL_CLK_MASK)
#define TOP5_EN_BBPLL_CLK_RESET                                                0x0
#define TOP5_EN_CPUPLL_CLK_LSB                                                 13
#define TOP5_EN_CPUPLL_CLK_MSB                                                 13
#define TOP5_EN_CPUPLL_CLK_MASK                                                0x2000
#define TOP5_EN_CPUPLL_CLK_GET(x)                                              (((x) & TOP5_EN_CPUPLL_CLK_MASK) >> TOP5_EN_CPUPLL_CLK_LSB)
#define TOP5_EN_CPUPLL_CLK_SET(x)                                              (((0 | (x)) << TOP5_EN_CPUPLL_CLK_LSB) & TOP5_EN_CPUPLL_CLK_MASK)
#define TOP5_EN_CPUPLL_CLK_RESET                                               0x0
#define TOP5_EN_SMPS_CLK_LSB                                                   12
#define TOP5_EN_SMPS_CLK_MSB                                                   12
#define TOP5_EN_SMPS_CLK_MASK                                                  0x1000
#define TOP5_EN_SMPS_CLK_GET(x)                                                (((x) & TOP5_EN_SMPS_CLK_MASK) >> TOP5_EN_SMPS_CLK_LSB)
#define TOP5_EN_SMPS_CLK_SET(x)                                                (((0 | (x)) << TOP5_EN_SMPS_CLK_LSB) & TOP5_EN_SMPS_CLK_MASK)
#define TOP5_EN_SMPS_CLK_RESET                                                 0x0
#define TOP5_DRV_SYNA_LSB                                                      10
#define TOP5_DRV_SYNA_MSB                                                      11
#define TOP5_DRV_SYNA_MASK                                                     0xc00
#define TOP5_DRV_SYNA_GET(x)                                                   (((x) & TOP5_DRV_SYNA_MASK) >> TOP5_DRV_SYNA_LSB)
#define TOP5_DRV_SYNA_SET(x)                                                   (((0 | (x)) << TOP5_DRV_SYNA_LSB) & TOP5_DRV_SYNA_MASK)
#define TOP5_DRV_SYNA_RESET                                                    0x3
#define TOP5_DRV_SYND_LSB                                                      8
#define TOP5_DRV_SYND_MSB                                                      9
#define TOP5_DRV_SYND_MASK                                                     0x300
#define TOP5_DRV_SYND_GET(x)                                                   (((x) & TOP5_DRV_SYND_MASK) >> TOP5_DRV_SYND_LSB)
#define TOP5_DRV_SYND_SET(x)                                                   (((0 | (x)) << TOP5_DRV_SYND_LSB) & TOP5_DRV_SYND_MASK)
#define TOP5_DRV_SYND_RESET                                                    0x3
#define TOP5_DRV_BBPLL_CLK_LSB                                                 6
#define TOP5_DRV_BBPLL_CLK_MSB                                                 7
#define TOP5_DRV_BBPLL_CLK_MASK                                                0xc0
#define TOP5_DRV_BBPLL_CLK_GET(x)                                              (((x) & TOP5_DRV_BBPLL_CLK_MASK) >> TOP5_DRV_BBPLL_CLK_LSB)
#define TOP5_DRV_BBPLL_CLK_SET(x)                                              (((0 | (x)) << TOP5_DRV_BBPLL_CLK_LSB) & TOP5_DRV_BBPLL_CLK_MASK)
#define TOP5_DRV_BBPLL_CLK_RESET                                               0x3
#define TOP5_DRV_CPUPLL_CLK_LSB                                                4
#define TOP5_DRV_CPUPLL_CLK_MSB                                                5
#define TOP5_DRV_CPUPLL_CLK_MASK                                               0x30
#define TOP5_DRV_CPUPLL_CLK_GET(x)                                             (((x) & TOP5_DRV_CPUPLL_CLK_MASK) >> TOP5_DRV_CPUPLL_CLK_LSB)
#define TOP5_DRV_CPUPLL_CLK_SET(x)                                             (((0 | (x)) << TOP5_DRV_CPUPLL_CLK_LSB) & TOP5_DRV_CPUPLL_CLK_MASK)
#define TOP5_DRV_CPUPLL_CLK_RESET                                              0x3
#define TOP5_DRV_SMPS_CLK_LSB                                                  2
#define TOP5_DRV_SMPS_CLK_MSB                                                  3
#define TOP5_DRV_SMPS_CLK_MASK                                                 0xc
#define TOP5_DRV_SMPS_CLK_GET(x)                                               (((x) & TOP5_DRV_SMPS_CLK_MASK) >> TOP5_DRV_SMPS_CLK_LSB)
#define TOP5_DRV_SMPS_CLK_SET(x)                                               (((0 | (x)) << TOP5_DRV_SMPS_CLK_LSB) & TOP5_DRV_SMPS_CLK_MASK)
#define TOP5_DRV_SMPS_CLK_RESET                                                0x3
#define TOP5_XO_DC_ADJUST_LSB                                                  1
#define TOP5_XO_DC_ADJUST_MSB                                                  1
#define TOP5_XO_DC_ADJUST_MASK                                                 0x2
#define TOP5_XO_DC_ADJUST_GET(x)                                               (((x) & TOP5_XO_DC_ADJUST_MASK) >> TOP5_XO_DC_ADJUST_LSB)
#define TOP5_XO_DC_ADJUST_SET(x)                                               (((0 | (x)) << TOP5_XO_DC_ADJUST_LSB) & TOP5_XO_DC_ADJUST_MASK)
#define TOP5_XO_DC_ADJUST_RESET                                                0x0
#define TOP5_XO_DOUBLE_EN_LSB                                                  0
#define TOP5_XO_DOUBLE_EN_MSB                                                  0
#define TOP5_XO_DOUBLE_EN_MASK                                                 0x1
#define TOP5_XO_DOUBLE_EN_GET(x)                                               (((x) & TOP5_XO_DOUBLE_EN_MASK) >> TOP5_XO_DOUBLE_EN_LSB)
#define TOP5_XO_DOUBLE_EN_SET(x)                                               (((0 | (x)) << TOP5_XO_DOUBLE_EN_LSB) & TOP5_XO_DOUBLE_EN_MASK)
#define TOP5_XO_DOUBLE_EN_RESET                                                0x1
#define TOP5_ADDRESS                                                           (0x14 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP5_RSTMASK                                                           0xffffffff
#define TOP5_RESET                                                             0x200ffd

// 0x18 (TOP6)
#define TOP6_XO_ICP_DCC_LSB                                                    30
#define TOP6_XO_ICP_DCC_MSB                                                    31
#define TOP6_XO_ICP_DCC_MASK                                                   0xc0000000
#define TOP6_XO_ICP_DCC_GET(x)                                                 (((x) & TOP6_XO_ICP_DCC_MASK) >> TOP6_XO_ICP_DCC_LSB)
#define TOP6_XO_ICP_DCC_SET(x)                                                 (((0 | (x)) << TOP6_XO_ICP_DCC_LSB) & TOP6_XO_ICP_DCC_MASK)
#define TOP6_XO_ICP_DCC_RESET                                                  0x0
#define TOP6_XO_SMALL_RSF_DUTY_LSB                                             29
#define TOP6_XO_SMALL_RSF_DUTY_MSB                                             29
#define TOP6_XO_SMALL_RSF_DUTY_MASK                                            0x20000000
#define TOP6_XO_SMALL_RSF_DUTY_GET(x)                                          (((x) & TOP6_XO_SMALL_RSF_DUTY_MASK) >> TOP6_XO_SMALL_RSF_DUTY_LSB)
#define TOP6_XO_SMALL_RSF_DUTY_SET(x)                                          (((0 | (x)) << TOP6_XO_SMALL_RSF_DUTY_LSB) & TOP6_XO_SMALL_RSF_DUTY_MASK)
#define TOP6_XO_SMALL_RSF_DUTY_RESET                                           0x0
#define TOP6_XO_ABSELH_LSB                                                     26
#define TOP6_XO_ABSELH_MSB                                                     28
#define TOP6_XO_ABSELH_MASK                                                    0x1c000000
#define TOP6_XO_ABSELH_GET(x)                                                  (((x) & TOP6_XO_ABSELH_MASK) >> TOP6_XO_ABSELH_LSB)
#define TOP6_XO_ABSELH_SET(x)                                                  (((0 | (x)) << TOP6_XO_ABSELH_LSB) & TOP6_XO_ABSELH_MASK)
#define TOP6_XO_ABSELH_RESET                                                   0x0
#define TOP6_XO_ABSEL_LSB                                                      24
#define TOP6_XO_ABSEL_MSB                                                      25
#define TOP6_XO_ABSEL_MASK                                                     0x3000000
#define TOP6_XO_ABSEL_GET(x)                                                   (((x) & TOP6_XO_ABSEL_MASK) >> TOP6_XO_ABSEL_LSB)
#define TOP6_XO_ABSEL_SET(x)                                                   (((0 | (x)) << TOP6_XO_ABSEL_LSB) & TOP6_XO_ABSEL_MASK)
#define TOP6_XO_ABSEL_RESET                                                    0x0
#define TOP6_RESERVED_0_LSB                                                    19
#define TOP6_RESERVED_0_MSB                                                    23
#define TOP6_RESERVED_0_MASK                                                   0xf80000
#define TOP6_RESERVED_0_GET(x)                                                 (((x) & TOP6_RESERVED_0_MASK) >> TOP6_RESERVED_0_LSB)
#define TOP6_RESERVED_0_SET(x)                                                 (((0 | (x)) << TOP6_RESERVED_0_LSB) & TOP6_RESERVED_0_MASK)
#define TOP6_RESERVED_0_RESET                                                  0x0
#define TOP6_PM_EN_LSB                                                         18
#define TOP6_PM_EN_MSB                                                         18
#define TOP6_PM_EN_MASK                                                        0x40000
#define TOP6_PM_EN_GET(x)                                                      (((x) & TOP6_PM_EN_MASK) >> TOP6_PM_EN_LSB)
#define TOP6_PM_EN_SET(x)                                                      (((0 | (x)) << TOP6_PM_EN_LSB) & TOP6_PM_EN_MASK)
#define TOP6_PM_EN_RESET                                                       0x0
#define TOP6_RINGOSC_SEL_LSB                                                   15
#define TOP6_RINGOSC_SEL_MSB                                                   17
#define TOP6_RINGOSC_SEL_MASK                                                  0x38000
#define TOP6_RINGOSC_SEL_GET(x)                                                (((x) & TOP6_RINGOSC_SEL_MASK) >> TOP6_RINGOSC_SEL_LSB)
#define TOP6_RINGOSC_SEL_SET(x)                                                (((0 | (x)) << TOP6_RINGOSC_SEL_LSB) & TOP6_RINGOSC_SEL_MASK)
#define TOP6_RINGOSC_SEL_RESET                                                 0x0
#define TOP6_RINGOSC_EN_LSB                                                    14
#define TOP6_RINGOSC_EN_MSB                                                    14
#define TOP6_RINGOSC_EN_MASK                                                   0x4000
#define TOP6_RINGOSC_EN_GET(x)                                                 (((x) & TOP6_RINGOSC_EN_MASK) >> TOP6_RINGOSC_EN_LSB)
#define TOP6_RINGOSC_EN_SET(x)                                                 (((0 | (x)) << TOP6_RINGOSC_EN_LSB) & TOP6_RINGOSC_EN_MASK)
#define TOP6_RINGOSC_EN_RESET                                                  0x0
#define TOP6_SETTLE_TIMER_LSB                                                  12
#define TOP6_SETTLE_TIMER_MSB                                                  13
#define TOP6_SETTLE_TIMER_MASK                                                 0x3000
#define TOP6_SETTLE_TIMER_GET(x)                                               (((x) & TOP6_SETTLE_TIMER_MASK) >> TOP6_SETTLE_TIMER_LSB)
#define TOP6_SETTLE_TIMER_SET(x)                                               (((0 | (x)) << TOP6_SETTLE_TIMER_LSB) & TOP6_SETTLE_TIMER_MASK)
#define TOP6_SETTLE_TIMER_RESET                                                0x0
#define TOP6_SAMPLE_WIN_LSB                                                    9
#define TOP6_SAMPLE_WIN_MSB                                                    11
#define TOP6_SAMPLE_WIN_MASK                                                   0xe00
#define TOP6_SAMPLE_WIN_GET(x)                                                 (((x) & TOP6_SAMPLE_WIN_MASK) >> TOP6_SAMPLE_WIN_LSB)
#define TOP6_SAMPLE_WIN_SET(x)                                                 (((0 | (x)) << TOP6_SAMPLE_WIN_LSB) & TOP6_SAMPLE_WIN_MASK)
#define TOP6_SAMPLE_WIN_RESET                                                  0x0
#define TOP6_RST_WARM_L_LS_LSB                                                 8
#define TOP6_RST_WARM_L_LS_MSB                                                 8
#define TOP6_RST_WARM_L_LS_MASK                                                0x100
#define TOP6_RST_WARM_L_LS_GET(x)                                              (((x) & TOP6_RST_WARM_L_LS_MASK) >> TOP6_RST_WARM_L_LS_LSB)
#define TOP6_RST_WARM_L_LS_SET(x)                                              (((0 | (x)) << TOP6_RST_WARM_L_LS_LSB) & TOP6_RST_WARM_L_LS_MASK)
#define TOP6_RST_WARM_L_LS_RESET                                               0x1
#define TOP6_DIG_TEST_CLK_SEL_LSB                                              7
#define TOP6_DIG_TEST_CLK_SEL_MSB                                              7
#define TOP6_DIG_TEST_CLK_SEL_MASK                                             0x80
#define TOP6_DIG_TEST_CLK_SEL_GET(x)                                           (((x) & TOP6_DIG_TEST_CLK_SEL_MASK) >> TOP6_DIG_TEST_CLK_SEL_LSB)
#define TOP6_DIG_TEST_CLK_SEL_SET(x)                                           (((0 | (x)) << TOP6_DIG_TEST_CLK_SEL_LSB) & TOP6_DIG_TEST_CLK_SEL_MASK)
#define TOP6_DIG_TEST_CLK_SEL_RESET                                            0x0
#define TOP6_EXTCLK_EN_LSB                                                     6
#define TOP6_EXTCLK_EN_MSB                                                     6
#define TOP6_EXTCLK_EN_MASK                                                    0x40
#define TOP6_EXTCLK_EN_GET(x)                                                  (((x) & TOP6_EXTCLK_EN_MASK) >> TOP6_EXTCLK_EN_LSB)
#define TOP6_EXTCLK_EN_SET(x)                                                  (((0 | (x)) << TOP6_EXTCLK_EN_LSB) & TOP6_EXTCLK_EN_MASK)
#define TOP6_EXTCLK_EN_RESET                                                   0x0
#define TOP6_FLIP_PLLCLK320_LSB                                                5
#define TOP6_FLIP_PLLCLK320_MSB                                                5
#define TOP6_FLIP_PLLCLK320_MASK                                               0x20
#define TOP6_FLIP_PLLCLK320_GET(x)                                             (((x) & TOP6_FLIP_PLLCLK320_MASK) >> TOP6_FLIP_PLLCLK320_LSB)
#define TOP6_FLIP_PLLCLK320_SET(x)                                             (((0 | (x)) << TOP6_FLIP_PLLCLK320_LSB) & TOP6_FLIP_PLLCLK320_MASK)
#define TOP6_FLIP_PLLCLK320_RESET                                              0x0
#define TOP6_FLIP_REFCLK40_LSB                                                 4
#define TOP6_FLIP_REFCLK40_MSB                                                 4
#define TOP6_FLIP_REFCLK40_MASK                                                0x10
#define TOP6_FLIP_REFCLK40_GET(x)                                              (((x) & TOP6_FLIP_REFCLK40_MASK) >> TOP6_FLIP_REFCLK40_LSB)
#define TOP6_FLIP_REFCLK40_SET(x)                                              (((0 | (x)) << TOP6_FLIP_REFCLK40_LSB) & TOP6_FLIP_REFCLK40_MASK)
#define TOP6_FLIP_REFCLK40_RESET                                               0x0
#define TOP6_REFCLK_SEL_LSB                                                    2
#define TOP6_REFCLK_SEL_MSB                                                    3
#define TOP6_REFCLK_SEL_MASK                                                   0xc
#define TOP6_REFCLK_SEL_GET(x)                                                 (((x) & TOP6_REFCLK_SEL_MASK) >> TOP6_REFCLK_SEL_LSB)
#define TOP6_REFCLK_SEL_SET(x)                                                 (((0 | (x)) << TOP6_REFCLK_SEL_LSB) & TOP6_REFCLK_SEL_MASK)
#define TOP6_REFCLK_SEL_RESET                                                  0x0
#define TOP6_GLOBAL_CLK_EN_OVR_LSB                                             0
#define TOP6_GLOBAL_CLK_EN_OVR_MSB                                             1
#define TOP6_GLOBAL_CLK_EN_OVR_MASK                                            0x3
#define TOP6_GLOBAL_CLK_EN_OVR_GET(x)                                          (((x) & TOP6_GLOBAL_CLK_EN_OVR_MASK) >> TOP6_GLOBAL_CLK_EN_OVR_LSB)
#define TOP6_GLOBAL_CLK_EN_OVR_SET(x)                                          (((0 | (x)) << TOP6_GLOBAL_CLK_EN_OVR_LSB) & TOP6_GLOBAL_CLK_EN_OVR_MASK)
#define TOP6_GLOBAL_CLK_EN_OVR_RESET                                           0x0
#define TOP6_ADDRESS                                                           (0x18 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP6_RSTMASK                                                           0xffffffff
#define TOP6_RESET                                                             0x100

// 0x1c (TOP7)
#define TOP7_RADIO_DTOP_SPARE_LSB                                              0
#define TOP7_RADIO_DTOP_SPARE_MSB                                              31
#define TOP7_RADIO_DTOP_SPARE_MASK                                             0xffffffff
#define TOP7_RADIO_DTOP_SPARE_GET(x)                                           (((x) & TOP7_RADIO_DTOP_SPARE_MASK) >> TOP7_RADIO_DTOP_SPARE_LSB)
#define TOP7_RADIO_DTOP_SPARE_SET(x)                                           (((0 | (x)) << TOP7_RADIO_DTOP_SPARE_LSB) & TOP7_RADIO_DTOP_SPARE_MASK)
#define TOP7_RADIO_DTOP_SPARE_RESET                                            0x0
#define TOP7_ADDRESS                                                           (0x1c + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP7_RSTMASK                                                           0xffffffff
#define TOP7_RESET                                                             0x0

// 0x20 (TOP8)
#define TOP8_CHIP_ID_LSB                                                       16
#define TOP8_CHIP_ID_MSB                                                       31
#define TOP8_CHIP_ID_MASK                                                      0xffff0000
#define TOP8_CHIP_ID_GET(x)                                                    (((x) & TOP8_CHIP_ID_MASK) >> TOP8_CHIP_ID_LSB)
#define TOP8_CHIP_ID_SET(x)                                                    (((0 | (x)) << TOP8_CHIP_ID_LSB) & TOP8_CHIP_ID_MASK)
#define TOP8_CHIP_ID_RESET                                                     0x0
#define TOP8_ICON_LSB                                                          8
#define TOP8_ICON_MSB                                                          15
#define TOP8_ICON_MASK                                                         0xff00
#define TOP8_ICON_GET(x)                                                       (((x) & TOP8_ICON_MASK) >> TOP8_ICON_LSB)
#define TOP8_ICON_SET(x)                                                       (((0 | (x)) << TOP8_ICON_LSB) & TOP8_ICON_MASK)
#define TOP8_ICON_RESET                                                        0x0
#define TOP8_VREF_LSB                                                          4
#define TOP8_VREF_MSB                                                          7
#define TOP8_VREF_MASK                                                         0xf0
#define TOP8_VREF_GET(x)                                                       (((x) & TOP8_VREF_MASK) >> TOP8_VREF_LSB)
#define TOP8_VREF_SET(x)                                                       (((0 | (x)) << TOP8_VREF_LSB) & TOP8_VREF_MASK)
#define TOP8_VREF_RESET                                                        0x0
#define TOP8_BIAS_CTAT_LSB                                                     0
#define TOP8_BIAS_CTAT_MSB                                                     3
#define TOP8_BIAS_CTAT_MASK                                                    0xf
#define TOP8_BIAS_CTAT_GET(x)                                                  (((x) & TOP8_BIAS_CTAT_MASK) >> TOP8_BIAS_CTAT_LSB)
#define TOP8_BIAS_CTAT_SET(x)                                                  (((0 | (x)) << TOP8_BIAS_CTAT_LSB) & TOP8_BIAS_CTAT_MASK)
#define TOP8_BIAS_CTAT_RESET                                                   0x0
#define TOP8_ADDRESS                                                           (0x20 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP8_RSTMASK                                                           0xffffffff
#define TOP8_RESET                                                             0x0

// 0x24 (TOP9)
#define TOP9_CAPINDAC_LSB                                                      25
#define TOP9_CAPINDAC_MSB                                                      31
#define TOP9_CAPINDAC_MASK                                                     0xfe000000
#define TOP9_CAPINDAC_GET(x)                                                   (((x) & TOP9_CAPINDAC_MASK) >> TOP9_CAPINDAC_LSB)
#define TOP9_CAPINDAC_SET(x)                                                   (((0 | (x)) << TOP9_CAPINDAC_LSB) & TOP9_CAPINDAC_MASK)
#define TOP9_CAPINDAC_RESET                                                    0x0
#define TOP9_CAPOUTDAC_LSB                                                     18
#define TOP9_CAPOUTDAC_MSB                                                     24
#define TOP9_CAPOUTDAC_MASK                                                    0x1fc0000
#define TOP9_CAPOUTDAC_GET(x)                                                  (((x) & TOP9_CAPOUTDAC_MASK) >> TOP9_CAPOUTDAC_LSB)
#define TOP9_CAPOUTDAC_SET(x)                                                  (((0 | (x)) << TOP9_CAPOUTDAC_LSB) & TOP9_CAPOUTDAC_MASK)
#define TOP9_CAPOUTDAC_RESET                                                   0x0
#define TOP9_XO_VREG18_LSB                                                     15
#define TOP9_XO_VREG18_MSB                                                     17
#define TOP9_XO_VREG18_MASK                                                    0x38000
#define TOP9_XO_VREG18_GET(x)                                                  (((x) & TOP9_XO_VREG18_MASK) >> TOP9_XO_VREG18_LSB)
#define TOP9_XO_VREG18_SET(x)                                                  (((0 | (x)) << TOP9_XO_VREG18_LSB) & TOP9_XO_VREG18_MASK)
#define TOP9_XO_VREG18_RESET                                                   0x0
#define TOP9_XO_VREG11_LSB                                                     13
#define TOP9_XO_VREG11_MSB                                                     14
#define TOP9_XO_VREG11_MASK                                                    0x6000
#define TOP9_XO_VREG11_GET(x)                                                  (((x) & TOP9_XO_VREG11_MASK) >> TOP9_XO_VREG11_LSB)
#define TOP9_XO_VREG11_SET(x)                                                  (((0 | (x)) << TOP9_XO_VREG11_LSB) & TOP9_XO_VREG11_MASK)
#define TOP9_XO_VREG11_RESET                                                   0x0
#define TOP9_BIBXOSC_LSB                                                       10
#define TOP9_BIBXOSC_MSB                                                       12
#define TOP9_BIBXOSC_MASK                                                      0x1c00
#define TOP9_BIBXOSC_GET(x)                                                    (((x) & TOP9_BIBXOSC_MASK) >> TOP9_BIBXOSC_LSB)
#define TOP9_BIBXOSC_SET(x)                                                    (((0 | (x)) << TOP9_BIBXOSC_LSB) & TOP9_BIBXOSC_MASK)
#define TOP9_BIBXOSC_RESET                                                     0x0
#define TOP9_LEN_LSB                                                           8
#define TOP9_LEN_MSB                                                           9
#define TOP9_LEN_MASK                                                          0x300
#define TOP9_LEN_GET(x)                                                        (((x) & TOP9_LEN_MASK) >> TOP9_LEN_LSB)
#define TOP9_LEN_SET(x)                                                        (((0 | (x)) << TOP9_LEN_LSB) & TOP9_LEN_MASK)
#define TOP9_LEN_RESET                                                         0x0
#define TOP9_XO_DCC_EN_LSB                                                     7
#define TOP9_XO_DCC_EN_MSB                                                     7
#define TOP9_XO_DCC_EN_MASK                                                    0x80
#define TOP9_XO_DCC_EN_GET(x)                                                  (((x) & TOP9_XO_DCC_EN_MASK) >> TOP9_XO_DCC_EN_LSB)
#define TOP9_XO_DCC_EN_SET(x)                                                  (((0 | (x)) << TOP9_XO_DCC_EN_LSB) & TOP9_XO_DCC_EN_MASK)
#define TOP9_XO_DCC_EN_RESET                                                   0x0
#define TOP9_XO_DRV_DCC_BUF_P_LSB                                              4
#define TOP9_XO_DRV_DCC_BUF_P_MSB                                              6
#define TOP9_XO_DRV_DCC_BUF_P_MASK                                             0x70
#define TOP9_XO_DRV_DCC_BUF_P_GET(x)                                           (((x) & TOP9_XO_DRV_DCC_BUF_P_MASK) >> TOP9_XO_DRV_DCC_BUF_P_LSB)
#define TOP9_XO_DRV_DCC_BUF_P_SET(x)                                           (((0 | (x)) << TOP9_XO_DRV_DCC_BUF_P_LSB) & TOP9_XO_DRV_DCC_BUF_P_MASK)
#define TOP9_XO_DRV_DCC_BUF_P_RESET                                            0x0
#define TOP9_XO_DRV_DCC_BUF_N_LSB                                              1
#define TOP9_XO_DRV_DCC_BUF_N_MSB                                              3
#define TOP9_XO_DRV_DCC_BUF_N_MASK                                             0xe
#define TOP9_XO_DRV_DCC_BUF_N_GET(x)                                           (((x) & TOP9_XO_DRV_DCC_BUF_N_MASK) >> TOP9_XO_DRV_DCC_BUF_N_LSB)
#define TOP9_XO_DRV_DCC_BUF_N_SET(x)                                           (((0 | (x)) << TOP9_XO_DRV_DCC_BUF_N_LSB) & TOP9_XO_DRV_DCC_BUF_N_MASK)
#define TOP9_XO_DRV_DCC_BUF_N_RESET                                            0x0
#define TOP9_XO_CLKEN_SEL_LSB                                                  0
#define TOP9_XO_CLKEN_SEL_MSB                                                  0
#define TOP9_XO_CLKEN_SEL_MASK                                                 0x1
#define TOP9_XO_CLKEN_SEL_GET(x)                                               (((x) & TOP9_XO_CLKEN_SEL_MASK) >> TOP9_XO_CLKEN_SEL_LSB)
#define TOP9_XO_CLKEN_SEL_SET(x)                                               (((0 | (x)) << TOP9_XO_CLKEN_SEL_LSB) & TOP9_XO_CLKEN_SEL_MASK)
#define TOP9_XO_CLKEN_SEL_RESET                                                0x0
#define TOP9_ADDRESS                                                           (0x24 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP9_RSTMASK                                                           0xffffffff
#define TOP9_RESET                                                             0x0

// 0x28 (TOP10)
#define TOP10_TCXODET_LSB                                                      31
#define TOP10_TCXODET_MSB                                                      31
#define TOP10_TCXODET_MASK                                                     0x80000000
#define TOP10_TCXODET_GET(x)                                                   (((x) & TOP10_TCXODET_MASK) >> TOP10_TCXODET_LSB)
#define TOP10_TCXODET_SET(x)                                                   (((0 | (x)) << TOP10_TCXODET_LSB) & TOP10_TCXODET_MASK)
#define TOP10_TCXODET_RESET                                                    0x0
#define TOP10_OTP_SPARE_LSB                                                    25
#define TOP10_OTP_SPARE_MSB                                                    30
#define TOP10_OTP_SPARE_MASK                                                   0x7e000000
#define TOP10_OTP_SPARE_GET(x)                                                 (((x) & TOP10_OTP_SPARE_MASK) >> TOP10_OTP_SPARE_LSB)
#define TOP10_OTP_SPARE_SET(x)                                                 (((0 | (x)) << TOP10_OTP_SPARE_LSB) & TOP10_OTP_SPARE_MASK)
#define TOP10_OTP_SPARE_RESET                                                  0x0
#define TOP10_PM_COUNT_VALID_LSB                                               16
#define TOP10_PM_COUNT_VALID_MSB                                               16
#define TOP10_PM_COUNT_VALID_MASK                                              0x10000
#define TOP10_PM_COUNT_VALID_GET(x)                                            (((x) & TOP10_PM_COUNT_VALID_MASK) >> TOP10_PM_COUNT_VALID_LSB)
#define TOP10_PM_COUNT_VALID_SET(x)                                            (((0 | (x)) << TOP10_PM_COUNT_VALID_LSB) & TOP10_PM_COUNT_VALID_MASK)
#define TOP10_PM_COUNT_VALID_RESET                                             0x0
#define TOP10_PM_COUNT_LSB                                                     0
#define TOP10_PM_COUNT_MSB                                                     15
#define TOP10_PM_COUNT_MASK                                                    0xffff
#define TOP10_PM_COUNT_GET(x)                                                  (((x) & TOP10_PM_COUNT_MASK) >> TOP10_PM_COUNT_LSB)
#define TOP10_PM_COUNT_SET(x)                                                  (((0 | (x)) << TOP10_PM_COUNT_LSB) & TOP10_PM_COUNT_MASK)
#define TOP10_PM_COUNT_RESET                                                   0x0
#define TOP10_ADDRESS                                                          (0x28 + __RADIO_DTOP_REG_CSR_BASE_ADDRESS)
#define TOP10_RSTMASK                                                          0xfe01ffff
#define TOP10_RESET                                                            0x0



#endif /* _RADIO_DTOP_REG_CSR_H_ */
