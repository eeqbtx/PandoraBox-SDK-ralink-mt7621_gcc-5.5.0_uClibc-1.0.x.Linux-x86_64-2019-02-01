/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CHN1_TXFE5G_REG_CSR_H_
#define _CHN1_TXFE5G_REG_CSR_H_


#ifndef __CHN1_TXFE5G_REG_CSR_BASE_ADDRESS
#define __CHN1_TXFE5G_REG_CSR_BASE_ADDRESS (0x464c0)
#endif


// 0x0 (CHN1_TXFE5_0)
#define CHN1_TXFE5_0_OVRD_BLK_LSB                                              31
#define CHN1_TXFE5_0_OVRD_BLK_MSB                                              31
#define CHN1_TXFE5_0_OVRD_BLK_MASK                                             0x80000000
#define CHN1_TXFE5_0_OVRD_BLK_GET(x)                                           (((x) & CHN1_TXFE5_0_OVRD_BLK_MASK) >> CHN1_TXFE5_0_OVRD_BLK_LSB)
#define CHN1_TXFE5_0_OVRD_BLK_SET(x)                                           (((0 | (x)) << CHN1_TXFE5_0_OVRD_BLK_LSB) & CHN1_TXFE5_0_OVRD_BLK_MASK)
#define CHN1_TXFE5_0_OVRD_BLK_RESET                                            0x0
#define CHN1_TXFE5_0_EN_STG1_DA_LS_LSB                                         30
#define CHN1_TXFE5_0_EN_STG1_DA_LS_MSB                                         30
#define CHN1_TXFE5_0_EN_STG1_DA_LS_MASK                                        0x40000000
#define CHN1_TXFE5_0_EN_STG1_DA_LS_GET(x)                                      (((x) & CHN1_TXFE5_0_EN_STG1_DA_LS_MASK) >> CHN1_TXFE5_0_EN_STG1_DA_LS_LSB)
#define CHN1_TXFE5_0_EN_STG1_DA_LS_SET(x)                                      (((0 | (x)) << CHN1_TXFE5_0_EN_STG1_DA_LS_LSB) & CHN1_TXFE5_0_EN_STG1_DA_LS_MASK)
#define CHN1_TXFE5_0_EN_STG1_DA_LS_RESET                                       0x0
#define CHN1_TXFE5_0_EN_UPC_LS_LSB                                             29
#define CHN1_TXFE5_0_EN_UPC_LS_MSB                                             29
#define CHN1_TXFE5_0_EN_UPC_LS_MASK                                            0x20000000
#define CHN1_TXFE5_0_EN_UPC_LS_GET(x)                                          (((x) & CHN1_TXFE5_0_EN_UPC_LS_MASK) >> CHN1_TXFE5_0_EN_UPC_LS_LSB)
#define CHN1_TXFE5_0_EN_UPC_LS_SET(x)                                          (((0 | (x)) << CHN1_TXFE5_0_EN_UPC_LS_LSB) & CHN1_TXFE5_0_EN_UPC_LS_MASK)
#define CHN1_TXFE5_0_EN_UPC_LS_RESET                                           0x0
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_LSB                                      28
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_MSB                                      28
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_MASK                                     0x10000000
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_GET(x)                                   (((x) & CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_MASK) >> CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_LSB)
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_SET(x)                                   (((0 | (x)) << CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_LSB) & CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_MASK)
#define CHN1_TXFE5_0_EN_LO_DRV_UPC_LS_RESET                                    0x0
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_LSB                                        27
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_MSB                                        27
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_MASK                                       0x8000000
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_GET(x)                                     (((x) & CHN1_TXFE5_0_EN_DA_CALTX_LS_MASK) >> CHN1_TXFE5_0_EN_DA_CALTX_LS_LSB)
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_SET(x)                                     (((0 | (x)) << CHN1_TXFE5_0_EN_DA_CALTX_LS_LSB) & CHN1_TXFE5_0_EN_DA_CALTX_LS_MASK)
#define CHN1_TXFE5_0_EN_DA_CALTX_LS_RESET                                      0x0
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_LSB                                   26
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_MSB                                   26
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_MASK                                  0x4000000
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_GET(x)                                (((x) & CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_MASK) >> CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_LSB)
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_SET(x)                                (((0 | (x)) << CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_LSB) & CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_MASK)
#define CHN1_TXFE5_0_EN_DA_CALTXSHIFT_LS_RESET                                 0x0
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_LSB                                         25
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_MSB                                         25
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_MASK                                        0x2000000
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_GET(x)                                      (((x) & CHN1_TXFE5_0_EN_ICGM_DA_LS_MASK) >> CHN1_TXFE5_0_EN_ICGM_DA_LS_LSB)
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_SET(x)                                      (((0 | (x)) << CHN1_TXFE5_0_EN_ICGM_DA_LS_LSB) & CHN1_TXFE5_0_EN_ICGM_DA_LS_MASK)
#define CHN1_TXFE5_0_EN_ICGM_DA_LS_RESET                                       0x0
#define CHN1_TXFE5_0_LOBUFDRV_LSB                                              22
#define CHN1_TXFE5_0_LOBUFDRV_MSB                                              24
#define CHN1_TXFE5_0_LOBUFDRV_MASK                                             0x1c00000
#define CHN1_TXFE5_0_LOBUFDRV_GET(x)                                           (((x) & CHN1_TXFE5_0_LOBUFDRV_MASK) >> CHN1_TXFE5_0_LOBUFDRV_LSB)
#define CHN1_TXFE5_0_LOBUFDRV_SET(x)                                           (((0 | (x)) << CHN1_TXFE5_0_LOBUFDRV_LSB) & CHN1_TXFE5_0_LOBUFDRV_MASK)
#define CHN1_TXFE5_0_LOBUFDRV_RESET                                            0x3
#define CHN1_TXFE5_0_PKEN_LO_UPC_LSB                                           20
#define CHN1_TXFE5_0_PKEN_LO_UPC_MSB                                           21
#define CHN1_TXFE5_0_PKEN_LO_UPC_MASK                                          0x300000
#define CHN1_TXFE5_0_PKEN_LO_UPC_GET(x)                                        (((x) & CHN1_TXFE5_0_PKEN_LO_UPC_MASK) >> CHN1_TXFE5_0_PKEN_LO_UPC_LSB)
#define CHN1_TXFE5_0_PKEN_LO_UPC_SET(x)                                        (((0 | (x)) << CHN1_TXFE5_0_PKEN_LO_UPC_LSB) & CHN1_TXFE5_0_PKEN_LO_UPC_MASK)
#define CHN1_TXFE5_0_PKEN_LO_UPC_RESET                                         0x0
#define CHN1_TXFE5_0_PKEN_LSB                                                  19
#define CHN1_TXFE5_0_PKEN_MSB                                                  19
#define CHN1_TXFE5_0_PKEN_MASK                                                 0x80000
#define CHN1_TXFE5_0_PKEN_GET(x)                                               (((x) & CHN1_TXFE5_0_PKEN_MASK) >> CHN1_TXFE5_0_PKEN_LSB)
#define CHN1_TXFE5_0_PKEN_SET(x)                                               (((0 | (x)) << CHN1_TXFE5_0_PKEN_LSB) & CHN1_TXFE5_0_PKEN_MASK)
#define CHN1_TXFE5_0_PKEN_RESET                                                0x0
#define CHN1_TXFE5_0_CTUNE_LSB                                                 14
#define CHN1_TXFE5_0_CTUNE_MSB                                                 18
#define CHN1_TXFE5_0_CTUNE_MASK                                                0x7c000
#define CHN1_TXFE5_0_CTUNE_GET(x)                                              (((x) & CHN1_TXFE5_0_CTUNE_MASK) >> CHN1_TXFE5_0_CTUNE_LSB)
#define CHN1_TXFE5_0_CTUNE_SET(x)                                              (((0 | (x)) << CHN1_TXFE5_0_CTUNE_LSB) & CHN1_TXFE5_0_CTUNE_MASK)
#define CHN1_TXFE5_0_CTUNE_RESET                                               0xf
#define CHN1_TXFE5_0_EN_CASFIX_LSB                                             13
#define CHN1_TXFE5_0_EN_CASFIX_MSB                                             13
#define CHN1_TXFE5_0_EN_CASFIX_MASK                                            0x2000
#define CHN1_TXFE5_0_EN_CASFIX_GET(x)                                          (((x) & CHN1_TXFE5_0_EN_CASFIX_MASK) >> CHN1_TXFE5_0_EN_CASFIX_LSB)
#define CHN1_TXFE5_0_EN_CASFIX_SET(x)                                          (((0 | (x)) << CHN1_TXFE5_0_EN_CASFIX_LSB) & CHN1_TXFE5_0_EN_CASFIX_MASK)
#define CHN1_TXFE5_0_EN_CASFIX_RESET                                           0x0
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_LSB                                      10
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_MSB                                      12
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_MASK                                     0x1c00
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_GET(x)                                   (((x) & CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_MASK) >> CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_LSB)
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_SET(x)                                   (((0 | (x)) << CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_LSB) & CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_MASK)
#define CHN1_TXFE5_0_CAS_BIAS_TUNE_DA_RESET                                    0x5
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_LSB                                 9
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_MSB                                 9
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_MASK                                0x200
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_GET(x)                              (((x) & CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_MASK) >> CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_LSB)
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_SET(x)                              (((0 | (x)) << CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_LSB) & CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_MASK)
#define CHN1_TXFE5_0_OPEN_SHORT_CALRESIDUE_RESET                               0x0
#define CHN1_TXFE5_0_DAON_MODE_SEL_LSB                                         8
#define CHN1_TXFE5_0_DAON_MODE_SEL_MSB                                         8
#define CHN1_TXFE5_0_DAON_MODE_SEL_MASK                                        0x100
#define CHN1_TXFE5_0_DAON_MODE_SEL_GET(x)                                      (((x) & CHN1_TXFE5_0_DAON_MODE_SEL_MASK) >> CHN1_TXFE5_0_DAON_MODE_SEL_LSB)
#define CHN1_TXFE5_0_DAON_MODE_SEL_SET(x)                                      (((0 | (x)) << CHN1_TXFE5_0_DAON_MODE_SEL_LSB) & CHN1_TXFE5_0_DAON_MODE_SEL_MASK)
#define CHN1_TXFE5_0_DAON_MODE_SEL_RESET                                       0x0
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_LSB                                     7
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_MSB                                     7
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_MASK                                    0x80
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_GET(x)                                  (((x) & CHN1_TXFE5_0_CALXPA_EN_STG1_DA_MASK) >> CHN1_TXFE5_0_CALXPA_EN_STG1_DA_LSB)
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_SET(x)                                  (((0 | (x)) << CHN1_TXFE5_0_CALXPA_EN_STG1_DA_LSB) & CHN1_TXFE5_0_CALXPA_EN_STG1_DA_MASK)
#define CHN1_TXFE5_0_CALXPA_EN_STG1_DA_RESET                                   0x1
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_LSB                                  6
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_MSB                                  6
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_MASK                                 0x40
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_GET(x)                               (((x) & CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_MASK) >> CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_LSB)
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_SET(x)                               (((0 | (x)) << CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_LSB) & CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_MASK)
#define CHN1_TXFE5_0_CALXPA_EN_LO_DRV_UPC_RESET                                0x1
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_LSB                                      5
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_MSB                                      5
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_MASK                                     0x20
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_GET(x)                                   (((x) & CHN1_TXFE5_0_CALTX_EN_STG1_DA_MASK) >> CHN1_TXFE5_0_CALTX_EN_STG1_DA_LSB)
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_SET(x)                                   (((0 | (x)) << CHN1_TXFE5_0_CALTX_EN_STG1_DA_LSB) & CHN1_TXFE5_0_CALTX_EN_STG1_DA_MASK)
#define CHN1_TXFE5_0_CALTX_EN_STG1_DA_RESET                                    0x1
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_LSB                                   4
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_MSB                                   4
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_MASK                                  0x10
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_GET(x)                                (((x) & CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_MASK) >> CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_LSB)
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_SET(x)                                (((0 | (x)) << CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_LSB) & CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_MASK)
#define CHN1_TXFE5_0_CALTX_EN_LO_DRV_UPC_RESET                                 0x1
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_LSB                                      3
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_MSB                                      3
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_MASK                                     0x8
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_GET(x)                                   (((x) & CHN1_TXFE5_0_CALRX_EN_STG1_DA_MASK) >> CHN1_TXFE5_0_CALRX_EN_STG1_DA_LSB)
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_SET(x)                                   (((0 | (x)) << CHN1_TXFE5_0_CALRX_EN_STG1_DA_LSB) & CHN1_TXFE5_0_CALRX_EN_STG1_DA_MASK)
#define CHN1_TXFE5_0_CALRX_EN_STG1_DA_RESET                                    0x1
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_LSB                                   2
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_MSB                                   2
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_MASK                                  0x4
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_GET(x)                                (((x) & CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_MASK) >> CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_LSB)
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_SET(x)                                (((0 | (x)) << CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_LSB) & CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_MASK)
#define CHN1_TXFE5_0_CALRX_EN_LO_DRV_UPC_RESET                                 0x1
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_LSB                                       1
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_MSB                                       1
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_MASK                                      0x2
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_GET(x)                                    (((x) & CHN1_TXFE5_0_CALXPA_ALL_DAON_MASK) >> CHN1_TXFE5_0_CALXPA_ALL_DAON_LSB)
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_SET(x)                                    (((0 | (x)) << CHN1_TXFE5_0_CALXPA_ALL_DAON_LSB) & CHN1_TXFE5_0_CALXPA_ALL_DAON_MASK)
#define CHN1_TXFE5_0_CALXPA_ALL_DAON_RESET                                     0x0
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_LSB                                    0
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_MSB                                    0
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_MASK                                   0x1
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_GET(x)                                 (((x) & CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_MASK) >> CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_LSB)
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_SET(x)                                 (((0 | (x)) << CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_LSB) & CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_MASK)
#define CHN1_TXFE5_0_RXON_EN_LO_DRV_UPC_RESET                                  0x0
#define CHN1_TXFE5_0_ADDRESS                                                   (0x0 + __CHN1_TXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_TXFE5_0_RSTMASK                                                   0xffffffff
#define CHN1_TXFE5_0_RESET                                                     0xc3d4fc

// 0x4 (CHN1_TXFE5_1)
#define CHN1_TXFE5_1_ICGM_TUNE_DA_LSB                                          28
#define CHN1_TXFE5_1_ICGM_TUNE_DA_MSB                                          31
#define CHN1_TXFE5_1_ICGM_TUNE_DA_MASK                                         0xf0000000
#define CHN1_TXFE5_1_ICGM_TUNE_DA_GET(x)                                       (((x) & CHN1_TXFE5_1_ICGM_TUNE_DA_MASK) >> CHN1_TXFE5_1_ICGM_TUNE_DA_LSB)
#define CHN1_TXFE5_1_ICGM_TUNE_DA_SET(x)                                       (((0 | (x)) << CHN1_TXFE5_1_ICGM_TUNE_DA_LSB) & CHN1_TXFE5_1_ICGM_TUNE_DA_MASK)
#define CHN1_TXFE5_1_ICGM_TUNE_DA_RESET                                        0x7
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_LSB                                      25
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_MSB                                      27
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_MASK                                     0xe000000
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_GET(x)                                   (((x) & CHN1_TXFE5_1_IB2_STG1_TUNE_DA_MASK) >> CHN1_TXFE5_1_IB2_STG1_TUNE_DA_LSB)
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_SET(x)                                   (((0 | (x)) << CHN1_TXFE5_1_IB2_STG1_TUNE_DA_LSB) & CHN1_TXFE5_1_IB2_STG1_TUNE_DA_MASK)
#define CHN1_TXFE5_1_IB2_STG1_TUNE_DA_RESET                                    0x2
#define CHN1_TXFE5_1_CIN_TUNE_DA_LSB                                           20
#define CHN1_TXFE5_1_CIN_TUNE_DA_MSB                                           24
#define CHN1_TXFE5_1_CIN_TUNE_DA_MASK                                          0x1f00000
#define CHN1_TXFE5_1_CIN_TUNE_DA_GET(x)                                        (((x) & CHN1_TXFE5_1_CIN_TUNE_DA_MASK) >> CHN1_TXFE5_1_CIN_TUNE_DA_LSB)
#define CHN1_TXFE5_1_CIN_TUNE_DA_SET(x)                                        (((0 | (x)) << CHN1_TXFE5_1_CIN_TUNE_DA_LSB) & CHN1_TXFE5_1_CIN_TUNE_DA_MASK)
#define CHN1_TXFE5_1_CIN_TUNE_DA_RESET                                         0x8
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_LSB                                         14
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_MSB                                         19
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_MASK                                        0xfc000
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_GET(x)                                      (((x) & CHN1_TXFE5_1_ISTG1_TUNE_DA_MASK) >> CHN1_TXFE5_1_ISTG1_TUNE_DA_LSB)
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_SET(x)                                      (((0 | (x)) << CHN1_TXFE5_1_ISTG1_TUNE_DA_LSB) & CHN1_TXFE5_1_ISTG1_TUNE_DA_MASK)
#define CHN1_TXFE5_1_ISTG1_TUNE_DA_RESET                                       0x19
#define CHN1_TXFE5_1_ATBSEL_DA_LSB                                             11
#define CHN1_TXFE5_1_ATBSEL_DA_MSB                                             13
#define CHN1_TXFE5_1_ATBSEL_DA_MASK                                            0x3800
#define CHN1_TXFE5_1_ATBSEL_DA_GET(x)                                          (((x) & CHN1_TXFE5_1_ATBSEL_DA_MASK) >> CHN1_TXFE5_1_ATBSEL_DA_LSB)
#define CHN1_TXFE5_1_ATBSEL_DA_SET(x)                                          (((0 | (x)) << CHN1_TXFE5_1_ATBSEL_DA_LSB) & CHN1_TXFE5_1_ATBSEL_DA_MASK)
#define CHN1_TXFE5_1_ATBSEL_DA_RESET                                           0x0
#define CHN1_TXFE5_1_RESERVED_0_LSB                                            10
#define CHN1_TXFE5_1_RESERVED_0_MSB                                            10
#define CHN1_TXFE5_1_RESERVED_0_MASK                                           0x400
#define CHN1_TXFE5_1_RESERVED_0_GET(x)                                         (((x) & CHN1_TXFE5_1_RESERVED_0_MASK) >> CHN1_TXFE5_1_RESERVED_0_LSB)
#define CHN1_TXFE5_1_RESERVED_0_SET(x)                                         (((0 | (x)) << CHN1_TXFE5_1_RESERVED_0_LSB) & CHN1_TXFE5_1_RESERVED_0_MASK)
#define CHN1_TXFE5_1_RESERVED_0_RESET                                          0x0
#define CHN1_TXFE5_1_CTUNE_VHT160_LSB                                          5
#define CHN1_TXFE5_1_CTUNE_VHT160_MSB                                          9
#define CHN1_TXFE5_1_CTUNE_VHT160_MASK                                         0x3e0
#define CHN1_TXFE5_1_CTUNE_VHT160_GET(x)                                       (((x) & CHN1_TXFE5_1_CTUNE_VHT160_MASK) >> CHN1_TXFE5_1_CTUNE_VHT160_LSB)
#define CHN1_TXFE5_1_CTUNE_VHT160_SET(x)                                       (((0 | (x)) << CHN1_TXFE5_1_CTUNE_VHT160_LSB) & CHN1_TXFE5_1_CTUNE_VHT160_MASK)
#define CHN1_TXFE5_1_CTUNE_VHT160_RESET                                        0xf
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_LSB                                    0
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_MSB                                    4
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_MASK                                   0x1f
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_GET(x)                                 (((x) & CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_MASK) >> CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_LSB)
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_SET(x)                                 (((0 | (x)) << CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_LSB) & CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_MASK)
#define CHN1_TXFE5_1_CIN_TUNE_DA_VHT160_RESET                                  0x8
#define CHN1_TXFE5_1_ADDRESS                                                   (0x4 + __CHN1_TXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_TXFE5_1_RSTMASK                                                   0xffffffff
#define CHN1_TXFE5_1_RESET                                                     0x748641e8

// 0x8 (CHN1_TXFE5_2)
#define CHN1_TXFE5_2_TXFE_SPARE_LSB                                            0
#define CHN1_TXFE5_2_TXFE_SPARE_MSB                                            31
#define CHN1_TXFE5_2_TXFE_SPARE_MASK                                           0xffffffff
#define CHN1_TXFE5_2_TXFE_SPARE_GET(x)                                         (((x) & CHN1_TXFE5_2_TXFE_SPARE_MASK) >> CHN1_TXFE5_2_TXFE_SPARE_LSB)
#define CHN1_TXFE5_2_TXFE_SPARE_SET(x)                                         (((0 | (x)) << CHN1_TXFE5_2_TXFE_SPARE_LSB) & CHN1_TXFE5_2_TXFE_SPARE_MASK)
#define CHN1_TXFE5_2_TXFE_SPARE_RESET                                          0x0
#define CHN1_TXFE5_2_ADDRESS                                                   (0x8 + __CHN1_TXFE5G_REG_CSR_BASE_ADDRESS)
#define CHN1_TXFE5_2_RSTMASK                                                   0xffffffff
#define CHN1_TXFE5_2_RESET                                                     0x0



#endif /* _CHN1_TXFE5G_REG_CSR_H_ */
