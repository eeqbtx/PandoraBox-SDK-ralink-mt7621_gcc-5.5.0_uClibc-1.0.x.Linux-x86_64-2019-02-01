/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CHN1_RXFE5G_REG_CSR_H_
#define _CHN1_RXFE5G_REG_CSR_H_


#ifndef __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS
#define __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS (0x46480)
#endif


// 0x0 (CHN1_RXFE5_0)
#define CHN1_RXFE5_0_OVRD_RXGAIN_LSB                                           31
#define CHN1_RXFE5_0_OVRD_RXGAIN_MSB                                           31
#define CHN1_RXFE5_0_OVRD_RXGAIN_MASK                                          0x80000000
#define CHN1_RXFE5_0_OVRD_RXGAIN_GET(x)                                        (((x) & CHN1_RXFE5_0_OVRD_RXGAIN_MASK) >> CHN1_RXFE5_0_OVRD_RXGAIN_LSB)
#define CHN1_RXFE5_0_OVRD_RXGAIN_SET(x)                                        (((0 | (x)) << CHN1_RXFE5_0_OVRD_RXGAIN_LSB) & CHN1_RXFE5_0_OVRD_RXGAIN_MASK)
#define CHN1_RXFE5_0_OVRD_RXGAIN_RESET                                         0x0
#define CHN1_RXFE5_0_LNAGAIN_LS_LSB                                            28
#define CHN1_RXFE5_0_LNAGAIN_LS_MSB                                            30
#define CHN1_RXFE5_0_LNAGAIN_LS_MASK                                           0x70000000
#define CHN1_RXFE5_0_LNAGAIN_LS_GET(x)                                         (((x) & CHN1_RXFE5_0_LNAGAIN_LS_MASK) >> CHN1_RXFE5_0_LNAGAIN_LS_LSB)
#define CHN1_RXFE5_0_LNAGAIN_LS_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_0_LNAGAIN_LS_LSB) & CHN1_RXFE5_0_LNAGAIN_LS_MASK)
#define CHN1_RXFE5_0_LNAGAIN_LS_RESET                                          0x0
#define CHN1_RXFE5_0_GMGAIN_LS_LSB                                             26
#define CHN1_RXFE5_0_GMGAIN_LS_MSB                                             27
#define CHN1_RXFE5_0_GMGAIN_LS_MASK                                            0xc000000
#define CHN1_RXFE5_0_GMGAIN_LS_GET(x)                                          (((x) & CHN1_RXFE5_0_GMGAIN_LS_MASK) >> CHN1_RXFE5_0_GMGAIN_LS_LSB)
#define CHN1_RXFE5_0_GMGAIN_LS_SET(x)                                          (((0 | (x)) << CHN1_RXFE5_0_GMGAIN_LS_LSB) & CHN1_RXFE5_0_GMGAIN_LS_MASK)
#define CHN1_RXFE5_0_GMGAIN_LS_RESET                                           0x0
#define CHN1_RXFE5_0_CALDC_LS_LSB                                              25
#define CHN1_RXFE5_0_CALDC_LS_MSB                                              25
#define CHN1_RXFE5_0_CALDC_LS_MASK                                             0x2000000
#define CHN1_RXFE5_0_CALDC_LS_GET(x)                                           (((x) & CHN1_RXFE5_0_CALDC_LS_MASK) >> CHN1_RXFE5_0_CALDC_LS_LSB)
#define CHN1_RXFE5_0_CALDC_LS_SET(x)                                           (((0 | (x)) << CHN1_RXFE5_0_CALDC_LS_LSB) & CHN1_RXFE5_0_CALDC_LS_MASK)
#define CHN1_RXFE5_0_CALDC_LS_RESET                                            0x0
#define CHN1_RXFE5_0_OVRD_AGC_CAL_LSB                                          24
#define CHN1_RXFE5_0_OVRD_AGC_CAL_MSB                                          24
#define CHN1_RXFE5_0_OVRD_AGC_CAL_MASK                                         0x1000000
#define CHN1_RXFE5_0_OVRD_AGC_CAL_GET(x)                                       (((x) & CHN1_RXFE5_0_OVRD_AGC_CAL_MASK) >> CHN1_RXFE5_0_OVRD_AGC_CAL_LSB)
#define CHN1_RXFE5_0_OVRD_AGC_CAL_SET(x)                                       (((0 | (x)) << CHN1_RXFE5_0_OVRD_AGC_CAL_LSB) & CHN1_RXFE5_0_OVRD_AGC_CAL_MASK)
#define CHN1_RXFE5_0_OVRD_AGC_CAL_RESET                                        0x0
#define CHN1_RXFE5_0_AGC_CAL_LS_LSB                                            23
#define CHN1_RXFE5_0_AGC_CAL_LS_MSB                                            23
#define CHN1_RXFE5_0_AGC_CAL_LS_MASK                                           0x800000
#define CHN1_RXFE5_0_AGC_CAL_LS_GET(x)                                         (((x) & CHN1_RXFE5_0_AGC_CAL_LS_MASK) >> CHN1_RXFE5_0_AGC_CAL_LS_LSB)
#define CHN1_RXFE5_0_AGC_CAL_LS_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_0_AGC_CAL_LS_LSB) & CHN1_RXFE5_0_AGC_CAL_LS_MASK)
#define CHN1_RXFE5_0_AGC_CAL_LS_RESET                                          0x0
#define CHN1_RXFE5_0_AGC_CALDAC_LS_LSB                                         16
#define CHN1_RXFE5_0_AGC_CALDAC_LS_MSB                                         22
#define CHN1_RXFE5_0_AGC_CALDAC_LS_MASK                                        0x7f0000
#define CHN1_RXFE5_0_AGC_CALDAC_LS_GET(x)                                      (((x) & CHN1_RXFE5_0_AGC_CALDAC_LS_MASK) >> CHN1_RXFE5_0_AGC_CALDAC_LS_LSB)
#define CHN1_RXFE5_0_AGC_CALDAC_LS_SET(x)                                      (((0 | (x)) << CHN1_RXFE5_0_AGC_CALDAC_LS_LSB) & CHN1_RXFE5_0_AGC_CALDAC_LS_MASK)
#define CHN1_RXFE5_0_AGC_CALDAC_LS_RESET                                       0x0
#define CHN1_RXFE5_0_AGC_DBDAC_LSB                                             12
#define CHN1_RXFE5_0_AGC_DBDAC_MSB                                             15
#define CHN1_RXFE5_0_AGC_DBDAC_MASK                                            0xf000
#define CHN1_RXFE5_0_AGC_DBDAC_GET(x)                                          (((x) & CHN1_RXFE5_0_AGC_DBDAC_MASK) >> CHN1_RXFE5_0_AGC_DBDAC_LSB)
#define CHN1_RXFE5_0_AGC_DBDAC_SET(x)                                          (((0 | (x)) << CHN1_RXFE5_0_AGC_DBDAC_LSB) & CHN1_RXFE5_0_AGC_DBDAC_MASK)
#define CHN1_RXFE5_0_AGC_DBDAC_RESET                                           0x0
#define CHN1_RXFE5_0_OVRD_BLK_LSB                                              11
#define CHN1_RXFE5_0_OVRD_BLK_MSB                                              11
#define CHN1_RXFE5_0_OVRD_BLK_MASK                                             0x800
#define CHN1_RXFE5_0_OVRD_BLK_GET(x)                                           (((x) & CHN1_RXFE5_0_OVRD_BLK_MASK) >> CHN1_RXFE5_0_OVRD_BLK_LSB)
#define CHN1_RXFE5_0_OVRD_BLK_SET(x)                                           (((0 | (x)) << CHN1_RXFE5_0_OVRD_BLK_LSB) & CHN1_RXFE5_0_OVRD_BLK_MASK)
#define CHN1_RXFE5_0_OVRD_BLK_RESET                                            0x0
#define CHN1_RXFE5_0_EN_LNA5_LS_LSB                                            10
#define CHN1_RXFE5_0_EN_LNA5_LS_MSB                                            10
#define CHN1_RXFE5_0_EN_LNA5_LS_MASK                                           0x400
#define CHN1_RXFE5_0_EN_LNA5_LS_GET(x)                                         (((x) & CHN1_RXFE5_0_EN_LNA5_LS_MASK) >> CHN1_RXFE5_0_EN_LNA5_LS_LSB)
#define CHN1_RXFE5_0_EN_LNA5_LS_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_0_EN_LNA5_LS_LSB) & CHN1_RXFE5_0_EN_LNA5_LS_MASK)
#define CHN1_RXFE5_0_EN_LNA5_LS_RESET                                          0x0
#define CHN1_RXFE5_0_EN_GM5_LS_LSB                                             9
#define CHN1_RXFE5_0_EN_GM5_LS_MSB                                             9
#define CHN1_RXFE5_0_EN_GM5_LS_MASK                                            0x200
#define CHN1_RXFE5_0_EN_GM5_LS_GET(x)                                          (((x) & CHN1_RXFE5_0_EN_GM5_LS_MASK) >> CHN1_RXFE5_0_EN_GM5_LS_LSB)
#define CHN1_RXFE5_0_EN_GM5_LS_SET(x)                                          (((0 | (x)) << CHN1_RXFE5_0_EN_GM5_LS_LSB) & CHN1_RXFE5_0_EN_GM5_LS_MASK)
#define CHN1_RXFE5_0_EN_GM5_LS_RESET                                           0x0
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_LSB                                        8
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_MSB                                        8
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_MASK                                       0x100
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_GET(x)                                     (((x) & CHN1_RXFE5_0_EN_AGC5_CAL_LS_MASK) >> CHN1_RXFE5_0_EN_AGC5_CAL_LS_LSB)
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_SET(x)                                     (((0 | (x)) << CHN1_RXFE5_0_EN_AGC5_CAL_LS_LSB) & CHN1_RXFE5_0_EN_AGC5_CAL_LS_MASK)
#define CHN1_RXFE5_0_EN_AGC5_CAL_LS_RESET                                      0x0
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_LSB                                       7
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_MSB                                       7
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_MASK                                      0x80
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_GET(x)                                    (((x) & CHN1_RXFE5_0_EN_RXLO5_DRV_LS_MASK) >> CHN1_RXFE5_0_EN_RXLO5_DRV_LS_LSB)
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_SET(x)                                    (((0 | (x)) << CHN1_RXFE5_0_EN_RXLO5_DRV_LS_LSB) & CHN1_RXFE5_0_EN_RXLO5_DRV_LS_MASK)
#define CHN1_RXFE5_0_EN_RXLO5_DRV_LS_RESET                                     0x0
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_LSB                                       6
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_MSB                                       6
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_MASK                                      0x40
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_GET(x)                                    (((x) & CHN1_RXFE5_0_EN_RX5_CALTX_LS_MASK) >> CHN1_RXFE5_0_EN_RX5_CALTX_LS_LSB)
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_SET(x)                                    (((0 | (x)) << CHN1_RXFE5_0_EN_RX5_CALTX_LS_LSB) & CHN1_RXFE5_0_EN_RX5_CALTX_LS_MASK)
#define CHN1_RXFE5_0_EN_RX5_CALTX_LS_RESET                                     0x0
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_LSB                                  5
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_MSB                                  5
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_MASK                                 0x20
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_GET(x)                               (((x) & CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_MASK) >> CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_LSB)
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_SET(x)                               (((0 | (x)) << CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_LSB) & CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_MASK)
#define CHN1_RXFE5_0_EN_RX5_CALTXSHIFT_LS_RESET                                0x0
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_LSB                                       4
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_MSB                                       4
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_MASK                                      0x10
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_GET(x)                                    (((x) & CHN1_RXFE5_0_EN_AGC5_PDET_LS_MASK) >> CHN1_RXFE5_0_EN_AGC5_PDET_LS_LSB)
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_SET(x)                                    (((0 | (x)) << CHN1_RXFE5_0_EN_AGC5_PDET_LS_LSB) & CHN1_RXFE5_0_EN_AGC5_PDET_LS_MASK)
#define CHN1_RXFE5_0_EN_AGC5_PDET_LS_RESET                                     0x0
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_LSB                                      3
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_MSB                                      3
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_MASK                                     0x8
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_GET(x)                                   (((x) & CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_MASK) >> CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_LSB)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_SET(x)                                   (((0 | (x)) << CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_LSB) & CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_MASK)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_LS_RESET                                    0x0
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_LSB                                  2
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_MSB                                  2
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_MASK                                 0x4
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_GET(x)                               (((x) & CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_MASK) >> CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_LSB)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_SET(x)                               (((0 | (x)) << CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_LSB) & CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_MASK)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_OTA_LS_RESET                                0x0
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_LSB                                 1
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_MSB                                 1
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_MASK                                0x2
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_GET(x)                              (((x) & CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_MASK) >> CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_LSB)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_SET(x)                              (((0 | (x)) << CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_LSB) & CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_MASK)
#define CHN1_RXFE5_0_EN_RX5_IM2CAL_BIAS_LS_RESET                               0x0
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_LSB                                     0
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_MSB                                     0
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_MASK                                    0x1
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_GET(x)                                  (((x) & CHN1_RXFE5_0_RXLO5_ENABLE_TXON_MASK) >> CHN1_RXFE5_0_RXLO5_ENABLE_TXON_LSB)
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_SET(x)                                  (((0 | (x)) << CHN1_RXFE5_0_RXLO5_ENABLE_TXON_LSB) & CHN1_RXFE5_0_RXLO5_ENABLE_TXON_MASK)
#define CHN1_RXFE5_0_RXLO5_ENABLE_TXON_RESET                                   0x0
#define CHN1_RXFE5_0_ADDRESS                                                   (0x0 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_RXFE5_0_RSTMASK                                                   0xffffffff
#define CHN1_RXFE5_0_RESET                                                     0x0

// 0x4 (CHN1_RXFE5_1)
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_LSB                                24
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_MSB                                31
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_MASK                               0xff000000
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_GET(x)                             (((x) & CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_SET(x)                             (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_DAC_INT_RESET                              0x3f
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_LSB                                   21
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_MSB                                   23
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_MASK                                  0xe00000
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_GET(x)                                (((x) & CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_SET(x)                                (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_RSB_CONT_RESET                                 0x2
#define CHN1_RXFE5_1_RESERVED_0_LSB                                            20
#define CHN1_RXFE5_1_RESERVED_0_MSB                                            20
#define CHN1_RXFE5_1_RESERVED_0_MASK                                           0x100000
#define CHN1_RXFE5_1_RESERVED_0_GET(x)                                         (((x) & CHN1_RXFE5_1_RESERVED_0_MASK) >> CHN1_RXFE5_1_RESERVED_0_LSB)
#define CHN1_RXFE5_1_RESERVED_0_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_1_RESERVED_0_LSB) & CHN1_RXFE5_1_RESERVED_0_MASK)
#define CHN1_RXFE5_1_RESERVED_0_RESET                                          0x0
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_LSB                                    18
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_MSB                                    19
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_MASK                                   0xc0000
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_GET(x)                                 (((x) & CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_SET(x)                                 (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VGF_RESET                                  0x2
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_LSB                                16
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_MSB                                17
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_MASK                               0x30000
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_GET(x)                             (((x) & CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_SET(x)                             (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_MIX_VCM_TIA_RESET                              0x1
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_LSB                                  8
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_MSB                                  15
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_MASK                                 0xff00
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_GET(x)                               (((x) & CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_SET(x)                               (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_IDAC_RESET                                0x3f
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_LSB                                  0
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_MSB                                  7
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_MASK                                 0xff
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_GET(x)                               (((x) & CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_MASK) >> CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_LSB)
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_SET(x)                               (((0 | (x)) << CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_LSB) & CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_MASK)
#define CHN1_RXFE5_1_RX5_IM2CAL_VCAL_QDAC_RESET                                0x3f
#define CHN1_RXFE5_1_ADDRESS                                                   (0x4 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_RXFE5_1_RSTMASK                                                   0xffffffff
#define CHN1_RXFE5_1_RESET                                                     0x3f493f3f

// 0x8 (CHN1_RXFE5_2)
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_LSB                                      28
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_MSB                                      31
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_MASK                                     0xf0000000
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_GET(x)                                   (((x) & CHN1_RXFE5_2_RX5_IM2CAL_CONTI_MASK) >> CHN1_RXFE5_2_RX5_IM2CAL_CONTI_LSB)
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_SET(x)                                   (((0 | (x)) << CHN1_RXFE5_2_RX5_IM2CAL_CONTI_LSB) & CHN1_RXFE5_2_RX5_IM2CAL_CONTI_MASK)
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTI_RESET                                    0x4
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_LSB                                      24
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_MSB                                      27
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_MASK                                     0xf000000
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_GET(x)                                   (((x) & CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_MASK) >> CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_LSB)
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_SET(x)                                   (((0 | (x)) << CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_LSB) & CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_MASK)
#define CHN1_RXFE5_2_RX5_IM2CAL_CONTQ_RESET                                    0x4
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_LSB                                        20
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_MSB                                        23
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_MASK                                       0xf00000
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_GET(x)                                     (((x) & CHN1_RXFE5_2_DPD_ATTENU_SEL_MASK) >> CHN1_RXFE5_2_DPD_ATTENU_SEL_LSB)
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_SET(x)                                     (((0 | (x)) << CHN1_RXFE5_2_DPD_ATTENU_SEL_LSB) & CHN1_RXFE5_2_DPD_ATTENU_SEL_MASK)
#define CHN1_RXFE5_2_DPD_ATTENU_SEL_RESET                                      0x0
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_LSB                                        16
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_MSB                                        19
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_MASK                                       0xf0000
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_GET(x)                                     (((x) & CHN1_RXFE5_2_LNA_CM_LC_CSEL_MASK) >> CHN1_RXFE5_2_LNA_CM_LC_CSEL_LSB)
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_SET(x)                                     (((0 | (x)) << CHN1_RXFE5_2_LNA_CM_LC_CSEL_LSB) & CHN1_RXFE5_2_LNA_CM_LC_CSEL_MASK)
#define CHN1_RXFE5_2_LNA_CM_LC_CSEL_RESET                                      0x8
#define CHN1_RXFE5_2_LNA_CM_LC_EN_LSB                                          15
#define CHN1_RXFE5_2_LNA_CM_LC_EN_MSB                                          15
#define CHN1_RXFE5_2_LNA_CM_LC_EN_MASK                                         0x8000
#define CHN1_RXFE5_2_LNA_CM_LC_EN_GET(x)                                       (((x) & CHN1_RXFE5_2_LNA_CM_LC_EN_MASK) >> CHN1_RXFE5_2_LNA_CM_LC_EN_LSB)
#define CHN1_RXFE5_2_LNA_CM_LC_EN_SET(x)                                       (((0 | (x)) << CHN1_RXFE5_2_LNA_CM_LC_EN_LSB) & CHN1_RXFE5_2_LNA_CM_LC_EN_MASK)
#define CHN1_RXFE5_2_LNA_CM_LC_EN_RESET                                        0x0
#define CHN1_RXFE5_2_AGC_BW_CTRL_LSB                                           12
#define CHN1_RXFE5_2_AGC_BW_CTRL_MSB                                           14
#define CHN1_RXFE5_2_AGC_BW_CTRL_MASK                                          0x7000
#define CHN1_RXFE5_2_AGC_BW_CTRL_GET(x)                                        (((x) & CHN1_RXFE5_2_AGC_BW_CTRL_MASK) >> CHN1_RXFE5_2_AGC_BW_CTRL_LSB)
#define CHN1_RXFE5_2_AGC_BW_CTRL_SET(x)                                        (((0 | (x)) << CHN1_RXFE5_2_AGC_BW_CTRL_LSB) & CHN1_RXFE5_2_AGC_BW_CTRL_MASK)
#define CHN1_RXFE5_2_AGC_BW_CTRL_RESET                                         0x0
#define CHN1_RXFE5_2_AGC_RNG_CTRL_LSB                                          10
#define CHN1_RXFE5_2_AGC_RNG_CTRL_MSB                                          11
#define CHN1_RXFE5_2_AGC_RNG_CTRL_MASK                                         0xc00
#define CHN1_RXFE5_2_AGC_RNG_CTRL_GET(x)                                       (((x) & CHN1_RXFE5_2_AGC_RNG_CTRL_MASK) >> CHN1_RXFE5_2_AGC_RNG_CTRL_LSB)
#define CHN1_RXFE5_2_AGC_RNG_CTRL_SET(x)                                       (((0 | (x)) << CHN1_RXFE5_2_AGC_RNG_CTRL_LSB) & CHN1_RXFE5_2_AGC_RNG_CTRL_MASK)
#define CHN1_RXFE5_2_AGC_RNG_CTRL_RESET                                        0x0
#define CHN1_RXFE5_2_LOAD_DEQ_LSB                                              9
#define CHN1_RXFE5_2_LOAD_DEQ_MSB                                              9
#define CHN1_RXFE5_2_LOAD_DEQ_MASK                                             0x200
#define CHN1_RXFE5_2_LOAD_DEQ_GET(x)                                           (((x) & CHN1_RXFE5_2_LOAD_DEQ_MASK) >> CHN1_RXFE5_2_LOAD_DEQ_LSB)
#define CHN1_RXFE5_2_LOAD_DEQ_SET(x)                                           (((0 | (x)) << CHN1_RXFE5_2_LOAD_DEQ_LSB) & CHN1_RXFE5_2_LOAD_DEQ_MASK)
#define CHN1_RXFE5_2_LOAD_DEQ_RESET                                            0x0
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_LSB                                       8
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_MSB                                       8
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_MASK                                      0x100
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_GET(x)                                    (((x) & CHN1_RXFE5_2_BIAS_OTA_SHORTR_MASK) >> CHN1_RXFE5_2_BIAS_OTA_SHORTR_LSB)
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_SET(x)                                    (((0 | (x)) << CHN1_RXFE5_2_BIAS_OTA_SHORTR_LSB) & CHN1_RXFE5_2_BIAS_OTA_SHORTR_MASK)
#define CHN1_RXFE5_2_BIAS_OTA_SHORTR_RESET                                     0x1
#define CHN1_RXFE5_2_RXLO5_CTRL_LSB                                            5
#define CHN1_RXFE5_2_RXLO5_CTRL_MSB                                            7
#define CHN1_RXFE5_2_RXLO5_CTRL_MASK                                           0xe0
#define CHN1_RXFE5_2_RXLO5_CTRL_GET(x)                                         (((x) & CHN1_RXFE5_2_RXLO5_CTRL_MASK) >> CHN1_RXFE5_2_RXLO5_CTRL_LSB)
#define CHN1_RXFE5_2_RXLO5_CTRL_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_2_RXLO5_CTRL_LSB) & CHN1_RXFE5_2_RXLO5_CTRL_MASK)
#define CHN1_RXFE5_2_RXLO5_CTRL_RESET                                          0x0
#define CHN1_RXFE5_2_RESERVED_0_LSB                                            4
#define CHN1_RXFE5_2_RESERVED_0_MSB                                            4
#define CHN1_RXFE5_2_RESERVED_0_MASK                                           0x10
#define CHN1_RXFE5_2_RESERVED_0_GET(x)                                         (((x) & CHN1_RXFE5_2_RESERVED_0_MASK) >> CHN1_RXFE5_2_RESERVED_0_LSB)
#define CHN1_RXFE5_2_RESERVED_0_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_2_RESERVED_0_LSB) & CHN1_RXFE5_2_RESERVED_0_MASK)
#define CHN1_RXFE5_2_RESERVED_0_RESET                                          0x0
#define CHN1_RXFE5_2_ATBSEL_RX5_LSB                                            0
#define CHN1_RXFE5_2_ATBSEL_RX5_MSB                                            3
#define CHN1_RXFE5_2_ATBSEL_RX5_MASK                                           0xf
#define CHN1_RXFE5_2_ATBSEL_RX5_GET(x)                                         (((x) & CHN1_RXFE5_2_ATBSEL_RX5_MASK) >> CHN1_RXFE5_2_ATBSEL_RX5_LSB)
#define CHN1_RXFE5_2_ATBSEL_RX5_SET(x)                                         (((0 | (x)) << CHN1_RXFE5_2_ATBSEL_RX5_LSB) & CHN1_RXFE5_2_ATBSEL_RX5_MASK)
#define CHN1_RXFE5_2_ATBSEL_RX5_RESET                                          0x0
#define CHN1_RXFE5_2_ADDRESS                                                   (0x8 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_RXFE5_2_RSTMASK                                                   0xffffffff
#define CHN1_RXFE5_2_RESET                                                     0x44080100

// 0xc (CHN1_RXFE5_3)
#define CHN1_RXFE5_3_RXFE5G_SPARE_LSB                                          0
#define CHN1_RXFE5_3_RXFE5G_SPARE_MSB                                          31
#define CHN1_RXFE5_3_RXFE5G_SPARE_MASK                                         0xffffffff
#define CHN1_RXFE5_3_RXFE5G_SPARE_GET(x)                                       (((x) & CHN1_RXFE5_3_RXFE5G_SPARE_MASK) >> CHN1_RXFE5_3_RXFE5G_SPARE_LSB)
#define CHN1_RXFE5_3_RXFE5G_SPARE_SET(x)                                       (((0 | (x)) << CHN1_RXFE5_3_RXFE5G_SPARE_LSB) & CHN1_RXFE5_3_RXFE5G_SPARE_MASK)
#define CHN1_RXFE5_3_RXFE5G_SPARE_RESET                                        0x0
#define CHN1_RXFE5_3_ADDRESS                                                   (0xc + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_RXFE5_3_RSTMASK                                                   0xffffffff
#define CHN1_RXFE5_3_RESET                                                     0x0

// 0x10 (CHN1_LNA5_0)
#define CHN1_LNA5_0_G0_GP_LSB                                                  24
#define CHN1_LNA5_0_G0_GP_MSB                                                  31
#define CHN1_LNA5_0_G0_GP_MASK                                                 0xff000000
#define CHN1_LNA5_0_G0_GP_GET(x)                                               (((x) & CHN1_LNA5_0_G0_GP_MASK) >> CHN1_LNA5_0_G0_GP_LSB)
#define CHN1_LNA5_0_G0_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_0_G0_GP_LSB) & CHN1_LNA5_0_G0_GP_MASK)
#define CHN1_LNA5_0_G0_GP_RESET                                                0x2
#define CHN1_LNA5_0_RESERVED_0_LSB                                             23
#define CHN1_LNA5_0_RESERVED_0_MSB                                             23
#define CHN1_LNA5_0_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_0_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_0_RESERVED_0_MASK) >> CHN1_LNA5_0_RESERVED_0_LSB)
#define CHN1_LNA5_0_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_0_RESERVED_0_LSB) & CHN1_LNA5_0_RESERVED_0_MASK)
#define CHN1_LNA5_0_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_0_G0_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_0_G0_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_0_G0_INPCTUNE_VHT160_LSB) & CHN1_LNA5_0_G0_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_0_G0_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_0_G0_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_0_G0_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_0_G0_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_0_G0_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_0_G0_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_0_G0_INPCTUNE_LSB                                            13
#define CHN1_LNA5_0_G0_INPCTUNE_MSB                                            15
#define CHN1_LNA5_0_G0_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_0_G0_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_0_G0_INPCTUNE_MASK) >> CHN1_LNA5_0_G0_INPCTUNE_LSB)
#define CHN1_LNA5_0_G0_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_0_G0_INPCTUNE_LSB) & CHN1_LNA5_0_G0_INPCTUNE_MASK)
#define CHN1_LNA5_0_G0_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_0_G0_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_0_G0_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_0_G0_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_0_G0_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_0_G0_OUTCTUNE_MASK) >> CHN1_LNA5_0_G0_OUTCTUNE_LSB)
#define CHN1_LNA5_0_G0_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_0_G0_OUTCTUNE_LSB) & CHN1_LNA5_0_G0_OUTCTUNE_MASK)
#define CHN1_LNA5_0_G0_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_0_G0_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_0_G0_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_0_G0_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_0_G0_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_0_G0_IBIAS_CTRL_MASK) >> CHN1_LNA5_0_G0_IBIAS_CTRL_LSB)
#define CHN1_LNA5_0_G0_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_0_G0_IBIAS_CTRL_LSB) & CHN1_LNA5_0_G0_IBIAS_CTRL_MASK)
#define CHN1_LNA5_0_G0_IBIAS_CTRL_RESET                                        0x50
#define CHN1_LNA5_0_G0_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_0_G0_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_0_G0_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_0_G0_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_0_G0_SHUNT_MATCH_MASK) >> CHN1_LNA5_0_G0_SHUNT_MATCH_LSB)
#define CHN1_LNA5_0_G0_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_0_G0_SHUNT_MATCH_LSB) & CHN1_LNA5_0_G0_SHUNT_MATCH_MASK)
#define CHN1_LNA5_0_G0_SHUNT_MATCH_RESET                                       0x1
#define CHN1_LNA5_0_ADDRESS                                                    (0x10 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_0_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_0_RESET                                                      0x2254b41

// 0x14 (CHN1_LNA5_1)
#define CHN1_LNA5_1_G1_GP_LSB                                                  24
#define CHN1_LNA5_1_G1_GP_MSB                                                  31
#define CHN1_LNA5_1_G1_GP_MASK                                                 0xff000000
#define CHN1_LNA5_1_G1_GP_GET(x)                                               (((x) & CHN1_LNA5_1_G1_GP_MASK) >> CHN1_LNA5_1_G1_GP_LSB)
#define CHN1_LNA5_1_G1_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_1_G1_GP_LSB) & CHN1_LNA5_1_G1_GP_MASK)
#define CHN1_LNA5_1_G1_GP_RESET                                                0x4
#define CHN1_LNA5_1_RESERVED_0_LSB                                             23
#define CHN1_LNA5_1_RESERVED_0_MSB                                             23
#define CHN1_LNA5_1_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_1_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_1_RESERVED_0_MASK) >> CHN1_LNA5_1_RESERVED_0_LSB)
#define CHN1_LNA5_1_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_1_RESERVED_0_LSB) & CHN1_LNA5_1_RESERVED_0_MASK)
#define CHN1_LNA5_1_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_1_G1_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_1_G1_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_1_G1_INPCTUNE_VHT160_LSB) & CHN1_LNA5_1_G1_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_1_G1_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_1_G1_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_1_G1_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_1_G1_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_1_G1_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_1_G1_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_1_G1_INPCTUNE_LSB                                            13
#define CHN1_LNA5_1_G1_INPCTUNE_MSB                                            15
#define CHN1_LNA5_1_G1_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_1_G1_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_1_G1_INPCTUNE_MASK) >> CHN1_LNA5_1_G1_INPCTUNE_LSB)
#define CHN1_LNA5_1_G1_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_1_G1_INPCTUNE_LSB) & CHN1_LNA5_1_G1_INPCTUNE_MASK)
#define CHN1_LNA5_1_G1_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_1_G1_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_1_G1_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_1_G1_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_1_G1_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_1_G1_OUTCTUNE_MASK) >> CHN1_LNA5_1_G1_OUTCTUNE_LSB)
#define CHN1_LNA5_1_G1_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_1_G1_OUTCTUNE_LSB) & CHN1_LNA5_1_G1_OUTCTUNE_MASK)
#define CHN1_LNA5_1_G1_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_1_G1_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_1_G1_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_1_G1_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_1_G1_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_1_G1_IBIAS_CTRL_MASK) >> CHN1_LNA5_1_G1_IBIAS_CTRL_LSB)
#define CHN1_LNA5_1_G1_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_1_G1_IBIAS_CTRL_LSB) & CHN1_LNA5_1_G1_IBIAS_CTRL_MASK)
#define CHN1_LNA5_1_G1_IBIAS_CTRL_RESET                                        0x5a
#define CHN1_LNA5_1_G1_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_1_G1_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_1_G1_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_1_G1_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_1_G1_SHUNT_MATCH_MASK) >> CHN1_LNA5_1_G1_SHUNT_MATCH_LSB)
#define CHN1_LNA5_1_G1_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_1_G1_SHUNT_MATCH_LSB) & CHN1_LNA5_1_G1_SHUNT_MATCH_MASK)
#define CHN1_LNA5_1_G1_SHUNT_MATCH_RESET                                       0x1
#define CHN1_LNA5_1_ADDRESS                                                    (0x14 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_1_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_1_RESET                                                      0x4254b69

// 0x18 (CHN1_LNA5_2)
#define CHN1_LNA5_2_G2_GP_LSB                                                  24
#define CHN1_LNA5_2_G2_GP_MSB                                                  31
#define CHN1_LNA5_2_G2_GP_MASK                                                 0xff000000
#define CHN1_LNA5_2_G2_GP_GET(x)                                               (((x) & CHN1_LNA5_2_G2_GP_MASK) >> CHN1_LNA5_2_G2_GP_LSB)
#define CHN1_LNA5_2_G2_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_2_G2_GP_LSB) & CHN1_LNA5_2_G2_GP_MASK)
#define CHN1_LNA5_2_G2_GP_RESET                                                0xa
#define CHN1_LNA5_2_RESERVED_0_LSB                                             23
#define CHN1_LNA5_2_RESERVED_0_MSB                                             23
#define CHN1_LNA5_2_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_2_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_2_RESERVED_0_MASK) >> CHN1_LNA5_2_RESERVED_0_LSB)
#define CHN1_LNA5_2_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_2_RESERVED_0_LSB) & CHN1_LNA5_2_RESERVED_0_MASK)
#define CHN1_LNA5_2_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_2_G2_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_2_G2_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_2_G2_INPCTUNE_VHT160_LSB) & CHN1_LNA5_2_G2_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_2_G2_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_2_G2_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_2_G2_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_2_G2_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_2_G2_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_2_G2_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_2_G2_INPCTUNE_LSB                                            13
#define CHN1_LNA5_2_G2_INPCTUNE_MSB                                            15
#define CHN1_LNA5_2_G2_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_2_G2_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_2_G2_INPCTUNE_MASK) >> CHN1_LNA5_2_G2_INPCTUNE_LSB)
#define CHN1_LNA5_2_G2_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_2_G2_INPCTUNE_LSB) & CHN1_LNA5_2_G2_INPCTUNE_MASK)
#define CHN1_LNA5_2_G2_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_2_G2_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_2_G2_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_2_G2_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_2_G2_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_2_G2_OUTCTUNE_MASK) >> CHN1_LNA5_2_G2_OUTCTUNE_LSB)
#define CHN1_LNA5_2_G2_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_2_G2_OUTCTUNE_LSB) & CHN1_LNA5_2_G2_OUTCTUNE_MASK)
#define CHN1_LNA5_2_G2_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_2_G2_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_2_G2_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_2_G2_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_2_G2_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_2_G2_IBIAS_CTRL_MASK) >> CHN1_LNA5_2_G2_IBIAS_CTRL_LSB)
#define CHN1_LNA5_2_G2_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_2_G2_IBIAS_CTRL_LSB) & CHN1_LNA5_2_G2_IBIAS_CTRL_MASK)
#define CHN1_LNA5_2_G2_IBIAS_CTRL_RESET                                        0x46
#define CHN1_LNA5_2_G2_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_2_G2_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_2_G2_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_2_G2_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_2_G2_SHUNT_MATCH_MASK) >> CHN1_LNA5_2_G2_SHUNT_MATCH_LSB)
#define CHN1_LNA5_2_G2_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_2_G2_SHUNT_MATCH_LSB) & CHN1_LNA5_2_G2_SHUNT_MATCH_MASK)
#define CHN1_LNA5_2_G2_SHUNT_MATCH_RESET                                       0x1
#define CHN1_LNA5_2_ADDRESS                                                    (0x18 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_2_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_2_RESET                                                      0xa254b19

// 0x1c (CHN1_LNA5_3)
#define CHN1_LNA5_3_G3_GP_LSB                                                  24
#define CHN1_LNA5_3_G3_GP_MSB                                                  31
#define CHN1_LNA5_3_G3_GP_MASK                                                 0xff000000
#define CHN1_LNA5_3_G3_GP_GET(x)                                               (((x) & CHN1_LNA5_3_G3_GP_MASK) >> CHN1_LNA5_3_G3_GP_LSB)
#define CHN1_LNA5_3_G3_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_3_G3_GP_LSB) & CHN1_LNA5_3_G3_GP_MASK)
#define CHN1_LNA5_3_G3_GP_RESET                                                0x3
#define CHN1_LNA5_3_RESERVED_0_LSB                                             23
#define CHN1_LNA5_3_RESERVED_0_MSB                                             23
#define CHN1_LNA5_3_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_3_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_3_RESERVED_0_MASK) >> CHN1_LNA5_3_RESERVED_0_LSB)
#define CHN1_LNA5_3_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_3_RESERVED_0_LSB) & CHN1_LNA5_3_RESERVED_0_MASK)
#define CHN1_LNA5_3_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_3_G3_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_3_G3_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_3_G3_INPCTUNE_VHT160_LSB) & CHN1_LNA5_3_G3_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_3_G3_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_3_G3_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_3_G3_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_3_G3_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_3_G3_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_3_G3_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_3_G3_INPCTUNE_LSB                                            13
#define CHN1_LNA5_3_G3_INPCTUNE_MSB                                            15
#define CHN1_LNA5_3_G3_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_3_G3_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_3_G3_INPCTUNE_MASK) >> CHN1_LNA5_3_G3_INPCTUNE_LSB)
#define CHN1_LNA5_3_G3_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_3_G3_INPCTUNE_LSB) & CHN1_LNA5_3_G3_INPCTUNE_MASK)
#define CHN1_LNA5_3_G3_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_3_G3_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_3_G3_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_3_G3_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_3_G3_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_3_G3_OUTCTUNE_MASK) >> CHN1_LNA5_3_G3_OUTCTUNE_LSB)
#define CHN1_LNA5_3_G3_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_3_G3_OUTCTUNE_LSB) & CHN1_LNA5_3_G3_OUTCTUNE_MASK)
#define CHN1_LNA5_3_G3_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_3_G3_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_3_G3_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_3_G3_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_3_G3_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_3_G3_IBIAS_CTRL_MASK) >> CHN1_LNA5_3_G3_IBIAS_CTRL_LSB)
#define CHN1_LNA5_3_G3_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_3_G3_IBIAS_CTRL_LSB) & CHN1_LNA5_3_G3_IBIAS_CTRL_MASK)
#define CHN1_LNA5_3_G3_IBIAS_CTRL_RESET                                        0x37
#define CHN1_LNA5_3_G3_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_3_G3_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_3_G3_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_3_G3_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_3_G3_SHUNT_MATCH_MASK) >> CHN1_LNA5_3_G3_SHUNT_MATCH_LSB)
#define CHN1_LNA5_3_G3_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_3_G3_SHUNT_MATCH_LSB) & CHN1_LNA5_3_G3_SHUNT_MATCH_MASK)
#define CHN1_LNA5_3_G3_SHUNT_MATCH_RESET                                       0x0
#define CHN1_LNA5_3_ADDRESS                                                    (0x1c + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_3_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_3_RESET                                                      0x3254adc

// 0x20 (CHN1_LNA5_4)
#define CHN1_LNA5_4_G4_GP_LSB                                                  24
#define CHN1_LNA5_4_G4_GP_MSB                                                  31
#define CHN1_LNA5_4_G4_GP_MASK                                                 0xff000000
#define CHN1_LNA5_4_G4_GP_GET(x)                                               (((x) & CHN1_LNA5_4_G4_GP_MASK) >> CHN1_LNA5_4_G4_GP_LSB)
#define CHN1_LNA5_4_G4_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_4_G4_GP_LSB) & CHN1_LNA5_4_G4_GP_MASK)
#define CHN1_LNA5_4_G4_GP_RESET                                                0x5
#define CHN1_LNA5_4_RESERVED_0_LSB                                             23
#define CHN1_LNA5_4_RESERVED_0_MSB                                             23
#define CHN1_LNA5_4_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_4_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_4_RESERVED_0_MASK) >> CHN1_LNA5_4_RESERVED_0_LSB)
#define CHN1_LNA5_4_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_4_RESERVED_0_LSB) & CHN1_LNA5_4_RESERVED_0_MASK)
#define CHN1_LNA5_4_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_4_G4_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_4_G4_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_4_G4_INPCTUNE_VHT160_LSB) & CHN1_LNA5_4_G4_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_4_G4_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_4_G4_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_4_G4_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_4_G4_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_4_G4_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_4_G4_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_4_G4_INPCTUNE_LSB                                            13
#define CHN1_LNA5_4_G4_INPCTUNE_MSB                                            15
#define CHN1_LNA5_4_G4_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_4_G4_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_4_G4_INPCTUNE_MASK) >> CHN1_LNA5_4_G4_INPCTUNE_LSB)
#define CHN1_LNA5_4_G4_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_4_G4_INPCTUNE_LSB) & CHN1_LNA5_4_G4_INPCTUNE_MASK)
#define CHN1_LNA5_4_G4_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_4_G4_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_4_G4_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_4_G4_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_4_G4_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_4_G4_OUTCTUNE_MASK) >> CHN1_LNA5_4_G4_OUTCTUNE_LSB)
#define CHN1_LNA5_4_G4_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_4_G4_OUTCTUNE_LSB) & CHN1_LNA5_4_G4_OUTCTUNE_MASK)
#define CHN1_LNA5_4_G4_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_4_G4_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_4_G4_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_4_G4_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_4_G4_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_4_G4_IBIAS_CTRL_MASK) >> CHN1_LNA5_4_G4_IBIAS_CTRL_LSB)
#define CHN1_LNA5_4_G4_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_4_G4_IBIAS_CTRL_LSB) & CHN1_LNA5_4_G4_IBIAS_CTRL_MASK)
#define CHN1_LNA5_4_G4_IBIAS_CTRL_RESET                                        0x56
#define CHN1_LNA5_4_G4_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_4_G4_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_4_G4_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_4_G4_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_4_G4_SHUNT_MATCH_MASK) >> CHN1_LNA5_4_G4_SHUNT_MATCH_LSB)
#define CHN1_LNA5_4_G4_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_4_G4_SHUNT_MATCH_LSB) & CHN1_LNA5_4_G4_SHUNT_MATCH_MASK)
#define CHN1_LNA5_4_G4_SHUNT_MATCH_RESET                                       0x0
#define CHN1_LNA5_4_ADDRESS                                                    (0x20 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_4_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_4_RESET                                                      0x5254b58

// 0x24 (CHN1_LNA5_5)
#define CHN1_LNA5_5_G5_GP_LSB                                                  24
#define CHN1_LNA5_5_G5_GP_MSB                                                  31
#define CHN1_LNA5_5_G5_GP_MASK                                                 0xff000000
#define CHN1_LNA5_5_G5_GP_GET(x)                                               (((x) & CHN1_LNA5_5_G5_GP_MASK) >> CHN1_LNA5_5_G5_GP_LSB)
#define CHN1_LNA5_5_G5_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_5_G5_GP_LSB) & CHN1_LNA5_5_G5_GP_MASK)
#define CHN1_LNA5_5_G5_GP_RESET                                                0xc
#define CHN1_LNA5_5_RESERVED_0_LSB                                             23
#define CHN1_LNA5_5_RESERVED_0_MSB                                             23
#define CHN1_LNA5_5_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_5_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_5_RESERVED_0_MASK) >> CHN1_LNA5_5_RESERVED_0_LSB)
#define CHN1_LNA5_5_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_5_RESERVED_0_LSB) & CHN1_LNA5_5_RESERVED_0_MASK)
#define CHN1_LNA5_5_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_5_G5_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_5_G5_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_5_G5_INPCTUNE_VHT160_LSB) & CHN1_LNA5_5_G5_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_5_G5_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_5_G5_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_5_G5_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_5_G5_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_5_G5_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_5_G5_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_5_G5_INPCTUNE_LSB                                            13
#define CHN1_LNA5_5_G5_INPCTUNE_MSB                                            15
#define CHN1_LNA5_5_G5_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_5_G5_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_5_G5_INPCTUNE_MASK) >> CHN1_LNA5_5_G5_INPCTUNE_LSB)
#define CHN1_LNA5_5_G5_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_5_G5_INPCTUNE_LSB) & CHN1_LNA5_5_G5_INPCTUNE_MASK)
#define CHN1_LNA5_5_G5_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_5_G5_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_5_G5_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_5_G5_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_5_G5_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_5_G5_OUTCTUNE_MASK) >> CHN1_LNA5_5_G5_OUTCTUNE_LSB)
#define CHN1_LNA5_5_G5_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_5_G5_OUTCTUNE_LSB) & CHN1_LNA5_5_G5_OUTCTUNE_MASK)
#define CHN1_LNA5_5_G5_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_5_G5_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_5_G5_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_5_G5_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_5_G5_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_5_G5_IBIAS_CTRL_MASK) >> CHN1_LNA5_5_G5_IBIAS_CTRL_LSB)
#define CHN1_LNA5_5_G5_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_5_G5_IBIAS_CTRL_LSB) & CHN1_LNA5_5_G5_IBIAS_CTRL_MASK)
#define CHN1_LNA5_5_G5_IBIAS_CTRL_RESET                                        0x5a
#define CHN1_LNA5_5_G5_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_5_G5_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_5_G5_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_5_G5_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_5_G5_SHUNT_MATCH_MASK) >> CHN1_LNA5_5_G5_SHUNT_MATCH_LSB)
#define CHN1_LNA5_5_G5_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_5_G5_SHUNT_MATCH_LSB) & CHN1_LNA5_5_G5_SHUNT_MATCH_MASK)
#define CHN1_LNA5_5_G5_SHUNT_MATCH_RESET                                       0x0
#define CHN1_LNA5_5_ADDRESS                                                    (0x24 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_5_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_5_RESET                                                      0xc254b68

// 0x28 (CHN1_LNA5_6)
#define CHN1_LNA5_6_G6_GP_LSB                                                  24
#define CHN1_LNA5_6_G6_GP_MSB                                                  31
#define CHN1_LNA5_6_G6_GP_MASK                                                 0xff000000
#define CHN1_LNA5_6_G6_GP_GET(x)                                               (((x) & CHN1_LNA5_6_G6_GP_MASK) >> CHN1_LNA5_6_G6_GP_LSB)
#define CHN1_LNA5_6_G6_GP_SET(x)                                               (((0 | (x)) << CHN1_LNA5_6_G6_GP_LSB) & CHN1_LNA5_6_G6_GP_MASK)
#define CHN1_LNA5_6_G6_GP_RESET                                                0x1f
#define CHN1_LNA5_6_RESERVED_0_LSB                                             23
#define CHN1_LNA5_6_RESERVED_0_MSB                                             23
#define CHN1_LNA5_6_RESERVED_0_MASK                                            0x800000
#define CHN1_LNA5_6_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_6_RESERVED_0_MASK) >> CHN1_LNA5_6_RESERVED_0_LSB)
#define CHN1_LNA5_6_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_6_RESERVED_0_LSB) & CHN1_LNA5_6_RESERVED_0_MASK)
#define CHN1_LNA5_6_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_LSB                                     20
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_MSB                                     22
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_MASK                                    0x700000
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_6_G6_INPCTUNE_VHT160_MASK) >> CHN1_LNA5_6_G6_INPCTUNE_VHT160_LSB)
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_6_G6_INPCTUNE_VHT160_LSB) & CHN1_LNA5_6_G6_INPCTUNE_VHT160_MASK)
#define CHN1_LNA5_6_G6_INPCTUNE_VHT160_RESET                                   0x2
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_LSB                                     16
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_MSB                                     19
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_MASK                                    0xf0000
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_GET(x)                                  (((x) & CHN1_LNA5_6_G6_OUTCTUNE_VHT160_MASK) >> CHN1_LNA5_6_G6_OUTCTUNE_VHT160_LSB)
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_SET(x)                                  (((0 | (x)) << CHN1_LNA5_6_G6_OUTCTUNE_VHT160_LSB) & CHN1_LNA5_6_G6_OUTCTUNE_VHT160_MASK)
#define CHN1_LNA5_6_G6_OUTCTUNE_VHT160_RESET                                   0x5
#define CHN1_LNA5_6_G6_INPCTUNE_LSB                                            13
#define CHN1_LNA5_6_G6_INPCTUNE_MSB                                            15
#define CHN1_LNA5_6_G6_INPCTUNE_MASK                                           0xe000
#define CHN1_LNA5_6_G6_INPCTUNE_GET(x)                                         (((x) & CHN1_LNA5_6_G6_INPCTUNE_MASK) >> CHN1_LNA5_6_G6_INPCTUNE_LSB)
#define CHN1_LNA5_6_G6_INPCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_6_G6_INPCTUNE_LSB) & CHN1_LNA5_6_G6_INPCTUNE_MASK)
#define CHN1_LNA5_6_G6_INPCTUNE_RESET                                          0x2
#define CHN1_LNA5_6_G6_OUTCTUNE_LSB                                            9
#define CHN1_LNA5_6_G6_OUTCTUNE_MSB                                            12
#define CHN1_LNA5_6_G6_OUTCTUNE_MASK                                           0x1e00
#define CHN1_LNA5_6_G6_OUTCTUNE_GET(x)                                         (((x) & CHN1_LNA5_6_G6_OUTCTUNE_MASK) >> CHN1_LNA5_6_G6_OUTCTUNE_LSB)
#define CHN1_LNA5_6_G6_OUTCTUNE_SET(x)                                         (((0 | (x)) << CHN1_LNA5_6_G6_OUTCTUNE_LSB) & CHN1_LNA5_6_G6_OUTCTUNE_MASK)
#define CHN1_LNA5_6_G6_OUTCTUNE_RESET                                          0x5
#define CHN1_LNA5_6_G6_IBIAS_CTRL_LSB                                          2
#define CHN1_LNA5_6_G6_IBIAS_CTRL_MSB                                          8
#define CHN1_LNA5_6_G6_IBIAS_CTRL_MASK                                         0x1fc
#define CHN1_LNA5_6_G6_IBIAS_CTRL_GET(x)                                       (((x) & CHN1_LNA5_6_G6_IBIAS_CTRL_MASK) >> CHN1_LNA5_6_G6_IBIAS_CTRL_LSB)
#define CHN1_LNA5_6_G6_IBIAS_CTRL_SET(x)                                       (((0 | (x)) << CHN1_LNA5_6_G6_IBIAS_CTRL_LSB) & CHN1_LNA5_6_G6_IBIAS_CTRL_MASK)
#define CHN1_LNA5_6_G6_IBIAS_CTRL_RESET                                        0x46
#define CHN1_LNA5_6_G6_SHUNT_MATCH_LSB                                         0
#define CHN1_LNA5_6_G6_SHUNT_MATCH_MSB                                         1
#define CHN1_LNA5_6_G6_SHUNT_MATCH_MASK                                        0x3
#define CHN1_LNA5_6_G6_SHUNT_MATCH_GET(x)                                      (((x) & CHN1_LNA5_6_G6_SHUNT_MATCH_MASK) >> CHN1_LNA5_6_G6_SHUNT_MATCH_LSB)
#define CHN1_LNA5_6_G6_SHUNT_MATCH_SET(x)                                      (((0 | (x)) << CHN1_LNA5_6_G6_SHUNT_MATCH_LSB) & CHN1_LNA5_6_G6_SHUNT_MATCH_MASK)
#define CHN1_LNA5_6_G6_SHUNT_MATCH_RESET                                       0x0
#define CHN1_LNA5_6_ADDRESS                                                    (0x28 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_6_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_6_RESET                                                      0x1f254b18

// 0x2c (CHN1_LNA5_7)
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_LSB                                       27
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_MSB                                       31
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_MASK                                      0xf8000000
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_7_G0_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_7_G0_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_7_G0_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_7_G0_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_7_G0_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_7_G0_ATTEN_CAP_LSB                                           25
#define CHN1_LNA5_7_G0_ATTEN_CAP_MSB                                           26
#define CHN1_LNA5_7_G0_ATTEN_CAP_MASK                                          0x6000000
#define CHN1_LNA5_7_G0_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_7_G0_ATTEN_CAP_MASK) >> CHN1_LNA5_7_G0_ATTEN_CAP_LSB)
#define CHN1_LNA5_7_G0_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_7_G0_ATTEN_CAP_LSB) & CHN1_LNA5_7_G0_ATTEN_CAP_MASK)
#define CHN1_LNA5_7_G0_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_7_G0_AUX_EN_LSB                                              24
#define CHN1_LNA5_7_G0_AUX_EN_MSB                                              24
#define CHN1_LNA5_7_G0_AUX_EN_MASK                                             0x1000000
#define CHN1_LNA5_7_G0_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_7_G0_AUX_EN_MASK) >> CHN1_LNA5_7_G0_AUX_EN_LSB)
#define CHN1_LNA5_7_G0_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_7_G0_AUX_EN_LSB) & CHN1_LNA5_7_G0_AUX_EN_MASK)
#define CHN1_LNA5_7_G0_AUX_EN_RESET                                            0x1
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_LSB                                       19
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_MSB                                       23
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_MASK                                      0xf80000
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_7_G1_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_7_G1_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_7_G1_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_7_G1_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_7_G1_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_7_G1_ATTEN_CAP_LSB                                           17
#define CHN1_LNA5_7_G1_ATTEN_CAP_MSB                                           18
#define CHN1_LNA5_7_G1_ATTEN_CAP_MASK                                          0x60000
#define CHN1_LNA5_7_G1_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_7_G1_ATTEN_CAP_MASK) >> CHN1_LNA5_7_G1_ATTEN_CAP_LSB)
#define CHN1_LNA5_7_G1_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_7_G1_ATTEN_CAP_LSB) & CHN1_LNA5_7_G1_ATTEN_CAP_MASK)
#define CHN1_LNA5_7_G1_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_7_G1_AUX_EN_LSB                                              16
#define CHN1_LNA5_7_G1_AUX_EN_MSB                                              16
#define CHN1_LNA5_7_G1_AUX_EN_MASK                                             0x10000
#define CHN1_LNA5_7_G1_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_7_G1_AUX_EN_MASK) >> CHN1_LNA5_7_G1_AUX_EN_LSB)
#define CHN1_LNA5_7_G1_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_7_G1_AUX_EN_LSB) & CHN1_LNA5_7_G1_AUX_EN_MASK)
#define CHN1_LNA5_7_G1_AUX_EN_RESET                                            0x1
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_LSB                                       11
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_MSB                                       15
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_MASK                                      0xf800
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_7_G2_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_7_G2_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_7_G2_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_7_G2_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_7_G2_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_7_G2_ATTEN_CAP_LSB                                           9
#define CHN1_LNA5_7_G2_ATTEN_CAP_MSB                                           10
#define CHN1_LNA5_7_G2_ATTEN_CAP_MASK                                          0x600
#define CHN1_LNA5_7_G2_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_7_G2_ATTEN_CAP_MASK) >> CHN1_LNA5_7_G2_ATTEN_CAP_LSB)
#define CHN1_LNA5_7_G2_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_7_G2_ATTEN_CAP_LSB) & CHN1_LNA5_7_G2_ATTEN_CAP_MASK)
#define CHN1_LNA5_7_G2_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_7_G2_AUX_EN_LSB                                              8
#define CHN1_LNA5_7_G2_AUX_EN_MSB                                              8
#define CHN1_LNA5_7_G2_AUX_EN_MASK                                             0x100
#define CHN1_LNA5_7_G2_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_7_G2_AUX_EN_MASK) >> CHN1_LNA5_7_G2_AUX_EN_LSB)
#define CHN1_LNA5_7_G2_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_7_G2_AUX_EN_LSB) & CHN1_LNA5_7_G2_AUX_EN_MASK)
#define CHN1_LNA5_7_G2_AUX_EN_RESET                                            0x1
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_LSB                                       3
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_MSB                                       7
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_MASK                                      0xf8
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_7_G3_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_7_G3_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_7_G3_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_7_G3_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_7_G3_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_7_G3_ATTEN_CAP_LSB                                           1
#define CHN1_LNA5_7_G3_ATTEN_CAP_MSB                                           2
#define CHN1_LNA5_7_G3_ATTEN_CAP_MASK                                          0x6
#define CHN1_LNA5_7_G3_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_7_G3_ATTEN_CAP_MASK) >> CHN1_LNA5_7_G3_ATTEN_CAP_LSB)
#define CHN1_LNA5_7_G3_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_7_G3_ATTEN_CAP_LSB) & CHN1_LNA5_7_G3_ATTEN_CAP_MASK)
#define CHN1_LNA5_7_G3_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_7_G3_AUX_EN_LSB                                              0
#define CHN1_LNA5_7_G3_AUX_EN_MSB                                              0
#define CHN1_LNA5_7_G3_AUX_EN_MASK                                             0x1
#define CHN1_LNA5_7_G3_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_7_G3_AUX_EN_MASK) >> CHN1_LNA5_7_G3_AUX_EN_LSB)
#define CHN1_LNA5_7_G3_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_7_G3_AUX_EN_LSB) & CHN1_LNA5_7_G3_AUX_EN_MASK)
#define CHN1_LNA5_7_G3_AUX_EN_RESET                                            0x0
#define CHN1_LNA5_7_ADDRESS                                                    (0x2c + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_7_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_7_RESET                                                      0x1010100

// 0x30 (CHN1_LNA5_8)
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_LSB                                       27
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_MSB                                       31
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_MASK                                      0xf8000000
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_8_G4_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_8_G4_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_8_G4_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_8_G4_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_8_G4_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_8_G4_ATTEN_CAP_LSB                                           25
#define CHN1_LNA5_8_G4_ATTEN_CAP_MSB                                           26
#define CHN1_LNA5_8_G4_ATTEN_CAP_MASK                                          0x6000000
#define CHN1_LNA5_8_G4_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_8_G4_ATTEN_CAP_MASK) >> CHN1_LNA5_8_G4_ATTEN_CAP_LSB)
#define CHN1_LNA5_8_G4_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_8_G4_ATTEN_CAP_LSB) & CHN1_LNA5_8_G4_ATTEN_CAP_MASK)
#define CHN1_LNA5_8_G4_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_8_G4_AUX_EN_LSB                                              24
#define CHN1_LNA5_8_G4_AUX_EN_MSB                                              24
#define CHN1_LNA5_8_G4_AUX_EN_MASK                                             0x1000000
#define CHN1_LNA5_8_G4_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_8_G4_AUX_EN_MASK) >> CHN1_LNA5_8_G4_AUX_EN_LSB)
#define CHN1_LNA5_8_G4_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_8_G4_AUX_EN_LSB) & CHN1_LNA5_8_G4_AUX_EN_MASK)
#define CHN1_LNA5_8_G4_AUX_EN_RESET                                            0x0
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_LSB                                       19
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_MSB                                       23
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_MASK                                      0xf80000
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_8_G5_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_8_G5_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_8_G5_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_8_G5_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_8_G5_NGMIBIAS_CTRL_RESET                                     0x0
#define CHN1_LNA5_8_G5_ATTEN_CAP_LSB                                           17
#define CHN1_LNA5_8_G5_ATTEN_CAP_MSB                                           18
#define CHN1_LNA5_8_G5_ATTEN_CAP_MASK                                          0x60000
#define CHN1_LNA5_8_G5_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_8_G5_ATTEN_CAP_MASK) >> CHN1_LNA5_8_G5_ATTEN_CAP_LSB)
#define CHN1_LNA5_8_G5_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_8_G5_ATTEN_CAP_LSB) & CHN1_LNA5_8_G5_ATTEN_CAP_MASK)
#define CHN1_LNA5_8_G5_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_8_G5_AUX_EN_LSB                                              16
#define CHN1_LNA5_8_G5_AUX_EN_MSB                                              16
#define CHN1_LNA5_8_G5_AUX_EN_MASK                                             0x10000
#define CHN1_LNA5_8_G5_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_8_G5_AUX_EN_MASK) >> CHN1_LNA5_8_G5_AUX_EN_LSB)
#define CHN1_LNA5_8_G5_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_8_G5_AUX_EN_LSB) & CHN1_LNA5_8_G5_AUX_EN_MASK)
#define CHN1_LNA5_8_G5_AUX_EN_RESET                                            0x0
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_LSB                                       11
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_MSB                                       15
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_MASK                                      0xf800
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_GET(x)                                    (((x) & CHN1_LNA5_8_G6_NGMIBIAS_CTRL_MASK) >> CHN1_LNA5_8_G6_NGMIBIAS_CTRL_LSB)
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_SET(x)                                    (((0 | (x)) << CHN1_LNA5_8_G6_NGMIBIAS_CTRL_LSB) & CHN1_LNA5_8_G6_NGMIBIAS_CTRL_MASK)
#define CHN1_LNA5_8_G6_NGMIBIAS_CTRL_RESET                                     0x1e
#define CHN1_LNA5_8_G6_ATTEN_CAP_LSB                                           9
#define CHN1_LNA5_8_G6_ATTEN_CAP_MSB                                           10
#define CHN1_LNA5_8_G6_ATTEN_CAP_MASK                                          0x600
#define CHN1_LNA5_8_G6_ATTEN_CAP_GET(x)                                        (((x) & CHN1_LNA5_8_G6_ATTEN_CAP_MASK) >> CHN1_LNA5_8_G6_ATTEN_CAP_LSB)
#define CHN1_LNA5_8_G6_ATTEN_CAP_SET(x)                                        (((0 | (x)) << CHN1_LNA5_8_G6_ATTEN_CAP_LSB) & CHN1_LNA5_8_G6_ATTEN_CAP_MASK)
#define CHN1_LNA5_8_G6_ATTEN_CAP_RESET                                         0x0
#define CHN1_LNA5_8_G6_AUX_EN_LSB                                              8
#define CHN1_LNA5_8_G6_AUX_EN_MSB                                              8
#define CHN1_LNA5_8_G6_AUX_EN_MASK                                             0x100
#define CHN1_LNA5_8_G6_AUX_EN_GET(x)                                           (((x) & CHN1_LNA5_8_G6_AUX_EN_MASK) >> CHN1_LNA5_8_G6_AUX_EN_LSB)
#define CHN1_LNA5_8_G6_AUX_EN_SET(x)                                           (((0 | (x)) << CHN1_LNA5_8_G6_AUX_EN_LSB) & CHN1_LNA5_8_G6_AUX_EN_MASK)
#define CHN1_LNA5_8_G6_AUX_EN_RESET                                            0x0
#define CHN1_LNA5_8_RESERVED_0_LSB                                             0
#define CHN1_LNA5_8_RESERVED_0_MSB                                             7
#define CHN1_LNA5_8_RESERVED_0_MASK                                            0xff
#define CHN1_LNA5_8_RESERVED_0_GET(x)                                          (((x) & CHN1_LNA5_8_RESERVED_0_MASK) >> CHN1_LNA5_8_RESERVED_0_LSB)
#define CHN1_LNA5_8_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN1_LNA5_8_RESERVED_0_LSB) & CHN1_LNA5_8_RESERVED_0_MASK)
#define CHN1_LNA5_8_RESERVED_0_RESET                                           0x0
#define CHN1_LNA5_8_ADDRESS                                                    (0x30 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_LNA5_8_RSTMASK                                                    0xffffffff
#define CHN1_LNA5_8_RESET                                                      0xf000

// 0x34 (CHN1_GM5_0)
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_LSB                                       31
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_MSB                                       31
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_MASK                                      0x80000000
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_GET(x)                                    (((x) & CHN1_GM5_0_G0_GM_SIMPLE_BIAS_MASK) >> CHN1_GM5_0_G0_GM_SIMPLE_BIAS_LSB)
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_SET(x)                                    (((0 | (x)) << CHN1_GM5_0_G0_GM_SIMPLE_BIAS_LSB) & CHN1_GM5_0_G0_GM_SIMPLE_BIAS_MASK)
#define CHN1_GM5_0_G0_GM_SIMPLE_BIAS_RESET                                     0x0
#define CHN1_GM5_0_G0_GM_RDGEN_LSB                                             28
#define CHN1_GM5_0_G0_GM_RDGEN_MSB                                             30
#define CHN1_GM5_0_G0_GM_RDGEN_MASK                                            0x70000000
#define CHN1_GM5_0_G0_GM_RDGEN_GET(x)                                          (((x) & CHN1_GM5_0_G0_GM_RDGEN_MASK) >> CHN1_GM5_0_G0_GM_RDGEN_LSB)
#define CHN1_GM5_0_G0_GM_RDGEN_SET(x)                                          (((0 | (x)) << CHN1_GM5_0_G0_GM_RDGEN_LSB) & CHN1_GM5_0_G0_GM_RDGEN_MASK)
#define CHN1_GM5_0_G0_GM_RDGEN_RESET                                           0x3
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_LSB                                        24
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_MSB                                        27
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_MASK                                       0xf000000
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_GET(x)                                     (((x) & CHN1_GM5_0_G0_GM_IBIAS_CTRL_MASK) >> CHN1_GM5_0_G0_GM_IBIAS_CTRL_LSB)
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_SET(x)                                     (((0 | (x)) << CHN1_GM5_0_G0_GM_IBIAS_CTRL_LSB) & CHN1_GM5_0_G0_GM_IBIAS_CTRL_MASK)
#define CHN1_GM5_0_G0_GM_IBIAS_CTRL_RESET                                      0xb
#define CHN1_GM5_0_G0_GM_GAIN_LSB                                              22
#define CHN1_GM5_0_G0_GM_GAIN_MSB                                              23
#define CHN1_GM5_0_G0_GM_GAIN_MASK                                             0xc00000
#define CHN1_GM5_0_G0_GM_GAIN_GET(x)                                           (((x) & CHN1_GM5_0_G0_GM_GAIN_MASK) >> CHN1_GM5_0_G0_GM_GAIN_LSB)
#define CHN1_GM5_0_G0_GM_GAIN_SET(x)                                           (((0 | (x)) << CHN1_GM5_0_G0_GM_GAIN_LSB) & CHN1_GM5_0_G0_GM_GAIN_MASK)
#define CHN1_GM5_0_G0_GM_GAIN_RESET                                            0x0
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_LSB                                       21
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_MSB                                       21
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_MASK                                      0x200000
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_GET(x)                                    (((x) & CHN1_GM5_0_G1_GM_SIMPLE_BIAS_MASK) >> CHN1_GM5_0_G1_GM_SIMPLE_BIAS_LSB)
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_SET(x)                                    (((0 | (x)) << CHN1_GM5_0_G1_GM_SIMPLE_BIAS_LSB) & CHN1_GM5_0_G1_GM_SIMPLE_BIAS_MASK)
#define CHN1_GM5_0_G1_GM_SIMPLE_BIAS_RESET                                     0x0
#define CHN1_GM5_0_G1_GM_RDGEN_LSB                                             18
#define CHN1_GM5_0_G1_GM_RDGEN_MSB                                             20
#define CHN1_GM5_0_G1_GM_RDGEN_MASK                                            0x1c0000
#define CHN1_GM5_0_G1_GM_RDGEN_GET(x)                                          (((x) & CHN1_GM5_0_G1_GM_RDGEN_MASK) >> CHN1_GM5_0_G1_GM_RDGEN_LSB)
#define CHN1_GM5_0_G1_GM_RDGEN_SET(x)                                          (((0 | (x)) << CHN1_GM5_0_G1_GM_RDGEN_LSB) & CHN1_GM5_0_G1_GM_RDGEN_MASK)
#define CHN1_GM5_0_G1_GM_RDGEN_RESET                                           0x3
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_LSB                                        14
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_MSB                                        17
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_MASK                                       0x3c000
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_GET(x)                                     (((x) & CHN1_GM5_0_G1_GM_IBIAS_CTRL_MASK) >> CHN1_GM5_0_G1_GM_IBIAS_CTRL_LSB)
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_SET(x)                                     (((0 | (x)) << CHN1_GM5_0_G1_GM_IBIAS_CTRL_LSB) & CHN1_GM5_0_G1_GM_IBIAS_CTRL_MASK)
#define CHN1_GM5_0_G1_GM_IBIAS_CTRL_RESET                                      0xb
#define CHN1_GM5_0_G1_GM_GAIN_LSB                                              12
#define CHN1_GM5_0_G1_GM_GAIN_MSB                                              13
#define CHN1_GM5_0_G1_GM_GAIN_MASK                                             0x3000
#define CHN1_GM5_0_G1_GM_GAIN_GET(x)                                           (((x) & CHN1_GM5_0_G1_GM_GAIN_MASK) >> CHN1_GM5_0_G1_GM_GAIN_LSB)
#define CHN1_GM5_0_G1_GM_GAIN_SET(x)                                           (((0 | (x)) << CHN1_GM5_0_G1_GM_GAIN_LSB) & CHN1_GM5_0_G1_GM_GAIN_MASK)
#define CHN1_GM5_0_G1_GM_GAIN_RESET                                            0x1
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_LSB                                       11
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_MSB                                       11
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_MASK                                      0x800
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_GET(x)                                    (((x) & CHN1_GM5_0_G2_GM_SIMPLE_BIAS_MASK) >> CHN1_GM5_0_G2_GM_SIMPLE_BIAS_LSB)
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_SET(x)                                    (((0 | (x)) << CHN1_GM5_0_G2_GM_SIMPLE_BIAS_LSB) & CHN1_GM5_0_G2_GM_SIMPLE_BIAS_MASK)
#define CHN1_GM5_0_G2_GM_SIMPLE_BIAS_RESET                                     0x0
#define CHN1_GM5_0_G2_GM_RDGEN_LSB                                             8
#define CHN1_GM5_0_G2_GM_RDGEN_MSB                                             10
#define CHN1_GM5_0_G2_GM_RDGEN_MASK                                            0x700
#define CHN1_GM5_0_G2_GM_RDGEN_GET(x)                                          (((x) & CHN1_GM5_0_G2_GM_RDGEN_MASK) >> CHN1_GM5_0_G2_GM_RDGEN_LSB)
#define CHN1_GM5_0_G2_GM_RDGEN_SET(x)                                          (((0 | (x)) << CHN1_GM5_0_G2_GM_RDGEN_LSB) & CHN1_GM5_0_G2_GM_RDGEN_MASK)
#define CHN1_GM5_0_G2_GM_RDGEN_RESET                                           0x3
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_LSB                                        4
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_MSB                                        7
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_MASK                                       0xf0
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_GET(x)                                     (((x) & CHN1_GM5_0_G2_GM_IBIAS_CTRL_MASK) >> CHN1_GM5_0_G2_GM_IBIAS_CTRL_LSB)
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_SET(x)                                     (((0 | (x)) << CHN1_GM5_0_G2_GM_IBIAS_CTRL_LSB) & CHN1_GM5_0_G2_GM_IBIAS_CTRL_MASK)
#define CHN1_GM5_0_G2_GM_IBIAS_CTRL_RESET                                      0xb
#define CHN1_GM5_0_G2_GM_GAIN_LSB                                              2
#define CHN1_GM5_0_G2_GM_GAIN_MSB                                              3
#define CHN1_GM5_0_G2_GM_GAIN_MASK                                             0xc
#define CHN1_GM5_0_G2_GM_GAIN_GET(x)                                           (((x) & CHN1_GM5_0_G2_GM_GAIN_MASK) >> CHN1_GM5_0_G2_GM_GAIN_LSB)
#define CHN1_GM5_0_G2_GM_GAIN_SET(x)                                           (((0 | (x)) << CHN1_GM5_0_G2_GM_GAIN_LSB) & CHN1_GM5_0_G2_GM_GAIN_MASK)
#define CHN1_GM5_0_G2_GM_GAIN_RESET                                            0x2
#define CHN1_GM5_0_RESERVED_0_LSB                                              0
#define CHN1_GM5_0_RESERVED_0_MSB                                              1
#define CHN1_GM5_0_RESERVED_0_MASK                                             0x3
#define CHN1_GM5_0_RESERVED_0_GET(x)                                           (((x) & CHN1_GM5_0_RESERVED_0_MASK) >> CHN1_GM5_0_RESERVED_0_LSB)
#define CHN1_GM5_0_RESERVED_0_SET(x)                                           (((0 | (x)) << CHN1_GM5_0_RESERVED_0_LSB) & CHN1_GM5_0_RESERVED_0_MASK)
#define CHN1_GM5_0_RESERVED_0_RESET                                            0x0
#define CHN1_GM5_0_ADDRESS                                                     (0x34 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_GM5_0_RSTMASK                                                     0xffffffff
#define CHN1_GM5_0_RESET                                                       0x3b0ed3b8

// 0x38 (CHN1_GM5_1)
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_LSB                                       31
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_MSB                                       31
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_MASK                                      0x80000000
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_GET(x)                                    (((x) & CHN1_GM5_1_G3_GM_SIMPLE_BIAS_MASK) >> CHN1_GM5_1_G3_GM_SIMPLE_BIAS_LSB)
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_SET(x)                                    (((0 | (x)) << CHN1_GM5_1_G3_GM_SIMPLE_BIAS_LSB) & CHN1_GM5_1_G3_GM_SIMPLE_BIAS_MASK)
#define CHN1_GM5_1_G3_GM_SIMPLE_BIAS_RESET                                     0x0
#define CHN1_GM5_1_G3_GM_RDGEN_LSB                                             28
#define CHN1_GM5_1_G3_GM_RDGEN_MSB                                             30
#define CHN1_GM5_1_G3_GM_RDGEN_MASK                                            0x70000000
#define CHN1_GM5_1_G3_GM_RDGEN_GET(x)                                          (((x) & CHN1_GM5_1_G3_GM_RDGEN_MASK) >> CHN1_GM5_1_G3_GM_RDGEN_LSB)
#define CHN1_GM5_1_G3_GM_RDGEN_SET(x)                                          (((0 | (x)) << CHN1_GM5_1_G3_GM_RDGEN_LSB) & CHN1_GM5_1_G3_GM_RDGEN_MASK)
#define CHN1_GM5_1_G3_GM_RDGEN_RESET                                           0x3
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_LSB                                        24
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_MSB                                        27
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_MASK                                       0xf000000
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_GET(x)                                     (((x) & CHN1_GM5_1_G3_GM_IBIAS_CTRL_MASK) >> CHN1_GM5_1_G3_GM_IBIAS_CTRL_LSB)
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_SET(x)                                     (((0 | (x)) << CHN1_GM5_1_G3_GM_IBIAS_CTRL_LSB) & CHN1_GM5_1_G3_GM_IBIAS_CTRL_MASK)
#define CHN1_GM5_1_G3_GM_IBIAS_CTRL_RESET                                      0xb
#define CHN1_GM5_1_G3_GM_GAIN_LSB                                              22
#define CHN1_GM5_1_G3_GM_GAIN_MSB                                              23
#define CHN1_GM5_1_G3_GM_GAIN_MASK                                             0xc00000
#define CHN1_GM5_1_G3_GM_GAIN_GET(x)                                           (((x) & CHN1_GM5_1_G3_GM_GAIN_MASK) >> CHN1_GM5_1_G3_GM_GAIN_LSB)
#define CHN1_GM5_1_G3_GM_GAIN_SET(x)                                           (((0 | (x)) << CHN1_GM5_1_G3_GM_GAIN_LSB) & CHN1_GM5_1_G3_GM_GAIN_MASK)
#define CHN1_GM5_1_G3_GM_GAIN_RESET                                            0x3
#define CHN1_GM5_1_RESERVED_0_LSB                                              0
#define CHN1_GM5_1_RESERVED_0_MSB                                              21
#define CHN1_GM5_1_RESERVED_0_MASK                                             0x3fffff
#define CHN1_GM5_1_RESERVED_0_GET(x)                                           (((x) & CHN1_GM5_1_RESERVED_0_MASK) >> CHN1_GM5_1_RESERVED_0_LSB)
#define CHN1_GM5_1_RESERVED_0_SET(x)                                           (((0 | (x)) << CHN1_GM5_1_RESERVED_0_LSB) & CHN1_GM5_1_RESERVED_0_MASK)
#define CHN1_GM5_1_RESERVED_0_RESET                                            0x0
#define CHN1_GM5_1_ADDRESS                                                     (0x38 + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_GM5_1_RSTMASK                                                     0xffffffff
#define CHN1_GM5_1_RESET                                                       0x3bc00000

// 0x3c (CHN1_RXFE5_READ)
#define CHN1_RXFE5_READ_AGC_PKOUT_LSB                                          31
#define CHN1_RXFE5_READ_AGC_PKOUT_MSB                                          31
#define CHN1_RXFE5_READ_AGC_PKOUT_MASK                                         0x80000000
#define CHN1_RXFE5_READ_AGC_PKOUT_GET(x)                                       (((x) & CHN1_RXFE5_READ_AGC_PKOUT_MASK) >> CHN1_RXFE5_READ_AGC_PKOUT_LSB)
#define CHN1_RXFE5_READ_AGC_PKOUT_SET(x)                                       (((0 | (x)) << CHN1_RXFE5_READ_AGC_PKOUT_LSB) & CHN1_RXFE5_READ_AGC_PKOUT_MASK)
#define CHN1_RXFE5_READ_AGC_PKOUT_RESET                                        0x0
#define CHN1_RXFE5_READ_ADDRESS                                                (0x3c + __CHN1_RXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_RXFE5_READ_RSTMASK                                                0x80000000
#define CHN1_RXFE5_READ_RESET                                                  0x0



#endif /* _CHN1_RXFE5G_REG_CSR_H_ */
