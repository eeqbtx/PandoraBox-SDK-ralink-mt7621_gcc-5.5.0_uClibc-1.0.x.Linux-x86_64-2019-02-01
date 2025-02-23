/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CHN0_RXBB_REG_CSR_H_
#define _CHN0_RXBB_REG_CSR_H_


#ifndef __CHN0_RXBB_REG_CSR_BASE_ADDRESS
#define __CHN0_RXBB_REG_CSR_BASE_ADDRESS (0x46100)
#endif


// 0x0 (CHN0_RXBB_0)
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_LSB                                         31
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_MSB                                         31
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_MASK                                        0x80000000
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_GET(x)                                      (((x) & CHN0_RXBB_0_RX_RXIN2TIA_EN_MASK) >> CHN0_RXBB_0_RX_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_SET(x)                                      (((0 | (x)) << CHN0_RXBB_0_RX_RXIN2TIA_EN_LSB) & CHN0_RXBB_0_RX_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_0_RX_RXIN2TIA_EN_RESET                                       0x1
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_LSB                                        30
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_MSB                                        30
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_MASK                                       0x40000000
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_GET(x)                                     (((x) & CHN0_RXBB_0_RX_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_0_RX_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_RX_TIA2RXOUT_EN_LSB) & CHN0_RXBB_0_RX_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_0_RX_TIA2RXOUT_EN_RESET                                      0x0
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_LSB                                         29
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_MSB                                         29
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_MASK                                        0x20000000
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_GET(x)                                      (((x) & CHN0_RXBB_0_RX_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_0_RX_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_SET(x)                                      (((0 | (x)) << CHN0_RXBB_0_RX_BQ2RXOUT_EN_LSB) & CHN0_RXBB_0_RX_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_0_RX_BQ2RXOUT_EN_RESET                                       0x1
#define CHN0_RXBB_0_RX_TX2BQ1_EN_LSB                                           28
#define CHN0_RXBB_0_RX_TX2BQ1_EN_MSB                                           28
#define CHN0_RXBB_0_RX_TX2BQ1_EN_MASK                                          0x10000000
#define CHN0_RXBB_0_RX_TX2BQ1_EN_GET(x)                                        (((x) & CHN0_RXBB_0_RX_TX2BQ1_EN_MASK) >> CHN0_RXBB_0_RX_TX2BQ1_EN_LSB)
#define CHN0_RXBB_0_RX_TX2BQ1_EN_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_RX_TX2BQ1_EN_LSB) & CHN0_RXBB_0_RX_TX2BQ1_EN_MASK)
#define CHN0_RXBB_0_RX_TX2BQ1_EN_RESET                                         0x0
#define CHN0_RXBB_0_RX_TX2TIA_EN_LSB                                           27
#define CHN0_RXBB_0_RX_TX2TIA_EN_MSB                                           27
#define CHN0_RXBB_0_RX_TX2TIA_EN_MASK                                          0x8000000
#define CHN0_RXBB_0_RX_TX2TIA_EN_GET(x)                                        (((x) & CHN0_RXBB_0_RX_TX2TIA_EN_MASK) >> CHN0_RXBB_0_RX_TX2TIA_EN_LSB)
#define CHN0_RXBB_0_RX_TX2TIA_EN_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_RX_TX2TIA_EN_LSB) & CHN0_RXBB_0_RX_TX2TIA_EN_MASK)
#define CHN0_RXBB_0_RX_TX2TIA_EN_RESET                                         0x0
#define CHN0_RXBB_0_RX_EN_BQ1_LSB                                              26
#define CHN0_RXBB_0_RX_EN_BQ1_MSB                                              26
#define CHN0_RXBB_0_RX_EN_BQ1_MASK                                             0x4000000
#define CHN0_RXBB_0_RX_EN_BQ1_GET(x)                                           (((x) & CHN0_RXBB_0_RX_EN_BQ1_MASK) >> CHN0_RXBB_0_RX_EN_BQ1_LSB)
#define CHN0_RXBB_0_RX_EN_BQ1_SET(x)                                           (((0 | (x)) << CHN0_RXBB_0_RX_EN_BQ1_LSB) & CHN0_RXBB_0_RX_EN_BQ1_MASK)
#define CHN0_RXBB_0_RX_EN_BQ1_RESET                                            0x1
#define CHN0_RXBB_0_RX_EN_BQ2_LSB                                              25
#define CHN0_RXBB_0_RX_EN_BQ2_MSB                                              25
#define CHN0_RXBB_0_RX_EN_BQ2_MASK                                             0x2000000
#define CHN0_RXBB_0_RX_EN_BQ2_GET(x)                                           (((x) & CHN0_RXBB_0_RX_EN_BQ2_MASK) >> CHN0_RXBB_0_RX_EN_BQ2_LSB)
#define CHN0_RXBB_0_RX_EN_BQ2_SET(x)                                           (((0 | (x)) << CHN0_RXBB_0_RX_EN_BQ2_LSB) & CHN0_RXBB_0_RX_EN_BQ2_MASK)
#define CHN0_RXBB_0_RX_EN_BQ2_RESET                                            0x1
#define CHN0_RXBB_0_RX_EN_TIA_LSB                                              24
#define CHN0_RXBB_0_RX_EN_TIA_MSB                                              24
#define CHN0_RXBB_0_RX_EN_TIA_MASK                                             0x1000000
#define CHN0_RXBB_0_RX_EN_TIA_GET(x)                                           (((x) & CHN0_RXBB_0_RX_EN_TIA_MASK) >> CHN0_RXBB_0_RX_EN_TIA_LSB)
#define CHN0_RXBB_0_RX_EN_TIA_SET(x)                                           (((0 | (x)) << CHN0_RXBB_0_RX_EN_TIA_LSB) & CHN0_RXBB_0_RX_EN_TIA_MASK)
#define CHN0_RXBB_0_RX_EN_TIA_RESET                                            0x1
#define CHN0_RXBB_0_RX_EN_DCOC_LSB                                             23
#define CHN0_RXBB_0_RX_EN_DCOC_MSB                                             23
#define CHN0_RXBB_0_RX_EN_DCOC_MASK                                            0x800000
#define CHN0_RXBB_0_RX_EN_DCOC_GET(x)                                          (((x) & CHN0_RXBB_0_RX_EN_DCOC_MASK) >> CHN0_RXBB_0_RX_EN_DCOC_LSB)
#define CHN0_RXBB_0_RX_EN_DCOC_SET(x)                                          (((0 | (x)) << CHN0_RXBB_0_RX_EN_DCOC_LSB) & CHN0_RXBB_0_RX_EN_DCOC_MASK)
#define CHN0_RXBB_0_RX_EN_DCOC_RESET                                           0x1
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_LSB                                      22
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_MSB                                      22
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_MASK                                     0x400000
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALFC_RXIN2TIA_EN_MASK) >> CHN0_RXBB_0_CALFC_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALFC_RXIN2TIA_EN_LSB) & CHN0_RXBB_0_CALFC_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_0_CALFC_RXIN2TIA_EN_RESET                                    0x0
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_LSB                                     21
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_MSB                                     21
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_MASK                                    0x200000
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_GET(x)                                  (((x) & CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_SET(x)                                  (((0 | (x)) << CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_LSB) & CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALFC_TIA2RXOUT_EN_RESET                                   0x0
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_LSB                                      20
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_MSB                                      20
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_MASK                                     0x100000
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_LSB) & CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALFC_BQ2RXOUT_EN_RESET                                    0x1
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_LSB                                        19
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_MSB                                        19
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_MASK                                       0x80000
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALFC_TX2BQ1_EN_MASK) >> CHN0_RXBB_0_CALFC_TX2BQ1_EN_LSB)
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALFC_TX2BQ1_EN_LSB) & CHN0_RXBB_0_CALFC_TX2BQ1_EN_MASK)
#define CHN0_RXBB_0_CALFC_TX2BQ1_EN_RESET                                      0x0
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_LSB                                        18
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_MSB                                        18
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_MASK                                       0x40000
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALFC_TX2TIA_EN_MASK) >> CHN0_RXBB_0_CALFC_TX2TIA_EN_LSB)
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALFC_TX2TIA_EN_LSB) & CHN0_RXBB_0_CALFC_TX2TIA_EN_MASK)
#define CHN0_RXBB_0_CALFC_TX2TIA_EN_RESET                                      0x1
#define CHN0_RXBB_0_CALFC_EN_BQ1_LSB                                           17
#define CHN0_RXBB_0_CALFC_EN_BQ1_MSB                                           17
#define CHN0_RXBB_0_CALFC_EN_BQ1_MASK                                          0x20000
#define CHN0_RXBB_0_CALFC_EN_BQ1_GET(x)                                        (((x) & CHN0_RXBB_0_CALFC_EN_BQ1_MASK) >> CHN0_RXBB_0_CALFC_EN_BQ1_LSB)
#define CHN0_RXBB_0_CALFC_EN_BQ1_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALFC_EN_BQ1_LSB) & CHN0_RXBB_0_CALFC_EN_BQ1_MASK)
#define CHN0_RXBB_0_CALFC_EN_BQ1_RESET                                         0x1
#define CHN0_RXBB_0_CALFC_EN_BQ2_LSB                                           16
#define CHN0_RXBB_0_CALFC_EN_BQ2_MSB                                           16
#define CHN0_RXBB_0_CALFC_EN_BQ2_MASK                                          0x10000
#define CHN0_RXBB_0_CALFC_EN_BQ2_GET(x)                                        (((x) & CHN0_RXBB_0_CALFC_EN_BQ2_MASK) >> CHN0_RXBB_0_CALFC_EN_BQ2_LSB)
#define CHN0_RXBB_0_CALFC_EN_BQ2_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALFC_EN_BQ2_LSB) & CHN0_RXBB_0_CALFC_EN_BQ2_MASK)
#define CHN0_RXBB_0_CALFC_EN_BQ2_RESET                                         0x1
#define CHN0_RXBB_0_CALFC_EN_TIA_LSB                                           15
#define CHN0_RXBB_0_CALFC_EN_TIA_MSB                                           15
#define CHN0_RXBB_0_CALFC_EN_TIA_MASK                                          0x8000
#define CHN0_RXBB_0_CALFC_EN_TIA_GET(x)                                        (((x) & CHN0_RXBB_0_CALFC_EN_TIA_MASK) >> CHN0_RXBB_0_CALFC_EN_TIA_LSB)
#define CHN0_RXBB_0_CALFC_EN_TIA_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALFC_EN_TIA_LSB) & CHN0_RXBB_0_CALFC_EN_TIA_MASK)
#define CHN0_RXBB_0_CALFC_EN_TIA_RESET                                         0x1
#define CHN0_RXBB_0_CALFC_EN_DCOC_LSB                                          14
#define CHN0_RXBB_0_CALFC_EN_DCOC_MSB                                          14
#define CHN0_RXBB_0_CALFC_EN_DCOC_MASK                                         0x4000
#define CHN0_RXBB_0_CALFC_EN_DCOC_GET(x)                                       (((x) & CHN0_RXBB_0_CALFC_EN_DCOC_MASK) >> CHN0_RXBB_0_CALFC_EN_DCOC_LSB)
#define CHN0_RXBB_0_CALFC_EN_DCOC_SET(x)                                       (((0 | (x)) << CHN0_RXBB_0_CALFC_EN_DCOC_LSB) & CHN0_RXBB_0_CALFC_EN_DCOC_MASK)
#define CHN0_RXBB_0_CALFC_EN_DCOC_RESET                                        0x0
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_LSB                                      13
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_MSB                                      13
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_MASK                                     0x2000
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALRX_RXIN2TIA_EN_MASK) >> CHN0_RXBB_0_CALRX_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALRX_RXIN2TIA_EN_LSB) & CHN0_RXBB_0_CALRX_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_0_CALRX_RXIN2TIA_EN_RESET                                    0x1
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_LSB                                     12
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_MSB                                     12
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_MASK                                    0x1000
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_GET(x)                                  (((x) & CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_SET(x)                                  (((0 | (x)) << CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_LSB) & CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALRX_TIA2RXOUT_EN_RESET                                   0x0
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_LSB                                      11
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_MSB                                      11
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_MASK                                     0x800
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_LSB) & CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALRX_BQ2RXOUT_EN_RESET                                    0x1
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_LSB                                        10
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_MSB                                        10
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_MASK                                       0x400
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALRX_TX2BQ1_EN_MASK) >> CHN0_RXBB_0_CALRX_TX2BQ1_EN_LSB)
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALRX_TX2BQ1_EN_LSB) & CHN0_RXBB_0_CALRX_TX2BQ1_EN_MASK)
#define CHN0_RXBB_0_CALRX_TX2BQ1_EN_RESET                                      0x0
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_LSB                                        9
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_MSB                                        9
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_MASK                                       0x200
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALRX_TX2TIA_EN_MASK) >> CHN0_RXBB_0_CALRX_TX2TIA_EN_LSB)
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALRX_TX2TIA_EN_LSB) & CHN0_RXBB_0_CALRX_TX2TIA_EN_MASK)
#define CHN0_RXBB_0_CALRX_TX2TIA_EN_RESET                                      0x0
#define CHN0_RXBB_0_CALRX_EN_BQ1_LSB                                           8
#define CHN0_RXBB_0_CALRX_EN_BQ1_MSB                                           8
#define CHN0_RXBB_0_CALRX_EN_BQ1_MASK                                          0x100
#define CHN0_RXBB_0_CALRX_EN_BQ1_GET(x)                                        (((x) & CHN0_RXBB_0_CALRX_EN_BQ1_MASK) >> CHN0_RXBB_0_CALRX_EN_BQ1_LSB)
#define CHN0_RXBB_0_CALRX_EN_BQ1_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALRX_EN_BQ1_LSB) & CHN0_RXBB_0_CALRX_EN_BQ1_MASK)
#define CHN0_RXBB_0_CALRX_EN_BQ1_RESET                                         0x1
#define CHN0_RXBB_0_CALRX_EN_BQ2_LSB                                           7
#define CHN0_RXBB_0_CALRX_EN_BQ2_MSB                                           7
#define CHN0_RXBB_0_CALRX_EN_BQ2_MASK                                          0x80
#define CHN0_RXBB_0_CALRX_EN_BQ2_GET(x)                                        (((x) & CHN0_RXBB_0_CALRX_EN_BQ2_MASK) >> CHN0_RXBB_0_CALRX_EN_BQ2_LSB)
#define CHN0_RXBB_0_CALRX_EN_BQ2_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALRX_EN_BQ2_LSB) & CHN0_RXBB_0_CALRX_EN_BQ2_MASK)
#define CHN0_RXBB_0_CALRX_EN_BQ2_RESET                                         0x1
#define CHN0_RXBB_0_CALRX_EN_TIA_LSB                                           6
#define CHN0_RXBB_0_CALRX_EN_TIA_MSB                                           6
#define CHN0_RXBB_0_CALRX_EN_TIA_MASK                                          0x40
#define CHN0_RXBB_0_CALRX_EN_TIA_GET(x)                                        (((x) & CHN0_RXBB_0_CALRX_EN_TIA_MASK) >> CHN0_RXBB_0_CALRX_EN_TIA_LSB)
#define CHN0_RXBB_0_CALRX_EN_TIA_SET(x)                                        (((0 | (x)) << CHN0_RXBB_0_CALRX_EN_TIA_LSB) & CHN0_RXBB_0_CALRX_EN_TIA_MASK)
#define CHN0_RXBB_0_CALRX_EN_TIA_RESET                                         0x1
#define CHN0_RXBB_0_CALRX_EN_DCOC_LSB                                          5
#define CHN0_RXBB_0_CALRX_EN_DCOC_MSB                                          5
#define CHN0_RXBB_0_CALRX_EN_DCOC_MASK                                         0x20
#define CHN0_RXBB_0_CALRX_EN_DCOC_GET(x)                                       (((x) & CHN0_RXBB_0_CALRX_EN_DCOC_MASK) >> CHN0_RXBB_0_CALRX_EN_DCOC_LSB)
#define CHN0_RXBB_0_CALRX_EN_DCOC_SET(x)                                       (((0 | (x)) << CHN0_RXBB_0_CALRX_EN_DCOC_LSB) & CHN0_RXBB_0_CALRX_EN_DCOC_MASK)
#define CHN0_RXBB_0_CALRX_EN_DCOC_RESET                                        0x1
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_LSB                                      4
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_MSB                                      4
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_MASK                                     0x10
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALTX_RXIN2TIA_EN_MASK) >> CHN0_RXBB_0_CALTX_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALTX_RXIN2TIA_EN_LSB) & CHN0_RXBB_0_CALTX_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_0_CALTX_RXIN2TIA_EN_RESET                                    0x1
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_LSB                                     3
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_MSB                                     3
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_MASK                                    0x8
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_GET(x)                                  (((x) & CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_SET(x)                                  (((0 | (x)) << CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_LSB) & CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALTX_TIA2RXOUT_EN_RESET                                   0x1
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_LSB                                      2
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_MSB                                      2
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_MASK                                     0x4
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_GET(x)                                   (((x) & CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_SET(x)                                   (((0 | (x)) << CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_LSB) & CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_0_CALTX_BQ2RXOUT_EN_RESET                                    0x0
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_LSB                                        1
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_MSB                                        1
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_MASK                                       0x2
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALTX_TX2BQ1_EN_MASK) >> CHN0_RXBB_0_CALTX_TX2BQ1_EN_LSB)
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALTX_TX2BQ1_EN_LSB) & CHN0_RXBB_0_CALTX_TX2BQ1_EN_MASK)
#define CHN0_RXBB_0_CALTX_TX2BQ1_EN_RESET                                      0x0
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_LSB                                        0
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_MSB                                        0
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_MASK                                       0x1
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_GET(x)                                     (((x) & CHN0_RXBB_0_CALTX_TX2TIA_EN_MASK) >> CHN0_RXBB_0_CALTX_TX2TIA_EN_LSB)
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_0_CALTX_TX2TIA_EN_LSB) & CHN0_RXBB_0_CALTX_TX2TIA_EN_MASK)
#define CHN0_RXBB_0_CALTX_TX2TIA_EN_RESET                                      0x0
#define CHN0_RXBB_0_ADDRESS                                                    (0x0 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_0_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_0_RESET                                                      0xa797a9f8

// 0x4 (CHN0_RXBB_1)
#define CHN0_RXBB_1_CALTX_EN_BQ1_LSB                                           31
#define CHN0_RXBB_1_CALTX_EN_BQ1_MSB                                           31
#define CHN0_RXBB_1_CALTX_EN_BQ1_MASK                                          0x80000000
#define CHN0_RXBB_1_CALTX_EN_BQ1_GET(x)                                        (((x) & CHN0_RXBB_1_CALTX_EN_BQ1_MASK) >> CHN0_RXBB_1_CALTX_EN_BQ1_LSB)
#define CHN0_RXBB_1_CALTX_EN_BQ1_SET(x)                                        (((0 | (x)) << CHN0_RXBB_1_CALTX_EN_BQ1_LSB) & CHN0_RXBB_1_CALTX_EN_BQ1_MASK)
#define CHN0_RXBB_1_CALTX_EN_BQ1_RESET                                         0x0
#define CHN0_RXBB_1_CALTX_EN_BQ2_LSB                                           30
#define CHN0_RXBB_1_CALTX_EN_BQ2_MSB                                           30
#define CHN0_RXBB_1_CALTX_EN_BQ2_MASK                                          0x40000000
#define CHN0_RXBB_1_CALTX_EN_BQ2_GET(x)                                        (((x) & CHN0_RXBB_1_CALTX_EN_BQ2_MASK) >> CHN0_RXBB_1_CALTX_EN_BQ2_LSB)
#define CHN0_RXBB_1_CALTX_EN_BQ2_SET(x)                                        (((0 | (x)) << CHN0_RXBB_1_CALTX_EN_BQ2_LSB) & CHN0_RXBB_1_CALTX_EN_BQ2_MASK)
#define CHN0_RXBB_1_CALTX_EN_BQ2_RESET                                         0x0
#define CHN0_RXBB_1_CALTX_EN_TIA_LSB                                           29
#define CHN0_RXBB_1_CALTX_EN_TIA_MSB                                           29
#define CHN0_RXBB_1_CALTX_EN_TIA_MASK                                          0x20000000
#define CHN0_RXBB_1_CALTX_EN_TIA_GET(x)                                        (((x) & CHN0_RXBB_1_CALTX_EN_TIA_MASK) >> CHN0_RXBB_1_CALTX_EN_TIA_LSB)
#define CHN0_RXBB_1_CALTX_EN_TIA_SET(x)                                        (((0 | (x)) << CHN0_RXBB_1_CALTX_EN_TIA_LSB) & CHN0_RXBB_1_CALTX_EN_TIA_MASK)
#define CHN0_RXBB_1_CALTX_EN_TIA_RESET                                         0x1
#define CHN0_RXBB_1_CALTX_EN_DCOC_LSB                                          28
#define CHN0_RXBB_1_CALTX_EN_DCOC_MSB                                          28
#define CHN0_RXBB_1_CALTX_EN_DCOC_MASK                                         0x10000000
#define CHN0_RXBB_1_CALTX_EN_DCOC_GET(x)                                       (((x) & CHN0_RXBB_1_CALTX_EN_DCOC_MASK) >> CHN0_RXBB_1_CALTX_EN_DCOC_LSB)
#define CHN0_RXBB_1_CALTX_EN_DCOC_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_CALTX_EN_DCOC_LSB) & CHN0_RXBB_1_CALTX_EN_DCOC_MASK)
#define CHN0_RXBB_1_CALTX_EN_DCOC_RESET                                        0x1
#define CHN0_RXBB_1_CALTX_BW_LSB                                               25
#define CHN0_RXBB_1_CALTX_BW_MSB                                               27
#define CHN0_RXBB_1_CALTX_BW_MASK                                              0xe000000
#define CHN0_RXBB_1_CALTX_BW_GET(x)                                            (((x) & CHN0_RXBB_1_CALTX_BW_MASK) >> CHN0_RXBB_1_CALTX_BW_LSB)
#define CHN0_RXBB_1_CALTX_BW_SET(x)                                            (((0 | (x)) << CHN0_RXBB_1_CALTX_BW_LSB) & CHN0_RXBB_1_CALTX_BW_MASK)
#define CHN0_RXBB_1_CALTX_BW_RESET                                             0x3
#define CHN0_RXBB_1_CALTX_RX_BQ1_LSB                                           23
#define CHN0_RXBB_1_CALTX_RX_BQ1_MSB                                           24
#define CHN0_RXBB_1_CALTX_RX_BQ1_MASK                                          0x1800000
#define CHN0_RXBB_1_CALTX_RX_BQ1_GET(x)                                        (((x) & CHN0_RXBB_1_CALTX_RX_BQ1_MASK) >> CHN0_RXBB_1_CALTX_RX_BQ1_LSB)
#define CHN0_RXBB_1_CALTX_RX_BQ1_SET(x)                                        (((0 | (x)) << CHN0_RXBB_1_CALTX_RX_BQ1_LSB) & CHN0_RXBB_1_CALTX_RX_BQ1_MASK)
#define CHN0_RXBB_1_CALTX_RX_BQ1_RESET                                         0x1
#define CHN0_RXBB_1_CALTX_RX_BQ2_LSB                                           19
#define CHN0_RXBB_1_CALTX_RX_BQ2_MSB                                           22
#define CHN0_RXBB_1_CALTX_RX_BQ2_MASK                                          0x780000
#define CHN0_RXBB_1_CALTX_RX_BQ2_GET(x)                                        (((x) & CHN0_RXBB_1_CALTX_RX_BQ2_MASK) >> CHN0_RXBB_1_CALTX_RX_BQ2_LSB)
#define CHN0_RXBB_1_CALTX_RX_BQ2_SET(x)                                        (((0 | (x)) << CHN0_RXBB_1_CALTX_RX_BQ2_LSB) & CHN0_RXBB_1_CALTX_RX_BQ2_MASK)
#define CHN0_RXBB_1_CALTX_RX_BQ2_RESET                                         0x7
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_LSB                                     18
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_MSB                                     18
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_MASK                                    0x40000
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_GET(x)                                  (((x) & CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_MASK) >> CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_SET(x)                                  (((0 | (x)) << CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_LSB) & CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_1_CALXPA_RXIN2TIA_EN_RESET                                   0x1
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_LSB                                    17
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_MSB                                    17
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_MASK                                   0x20000
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_GET(x)                                 (((x) & CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_SET(x)                                 (((0 | (x)) << CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_LSB) & CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_1_CALXPA_TIA2RXOUT_EN_RESET                                  0x1
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_LSB                                     16
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_MSB                                     16
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_MASK                                    0x10000
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_GET(x)                                  (((x) & CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_SET(x)                                  (((0 | (x)) << CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_LSB) & CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_1_CALXPA_BQ2RXOUT_EN_RESET                                   0x0
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_LSB                                       15
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_MSB                                       15
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_MASK                                      0x8000
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_GET(x)                                    (((x) & CHN0_RXBB_1_CALXPA_TX2BQ1_EN_MASK) >> CHN0_RXBB_1_CALXPA_TX2BQ1_EN_LSB)
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_SET(x)                                    (((0 | (x)) << CHN0_RXBB_1_CALXPA_TX2BQ1_EN_LSB) & CHN0_RXBB_1_CALXPA_TX2BQ1_EN_MASK)
#define CHN0_RXBB_1_CALXPA_TX2BQ1_EN_RESET                                     0x0
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_LSB                                       14
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_MSB                                       14
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_MASK                                      0x4000
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_GET(x)                                    (((x) & CHN0_RXBB_1_CALXPA_TX2TIA_EN_MASK) >> CHN0_RXBB_1_CALXPA_TX2TIA_EN_LSB)
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_SET(x)                                    (((0 | (x)) << CHN0_RXBB_1_CALXPA_TX2TIA_EN_LSB) & CHN0_RXBB_1_CALXPA_TX2TIA_EN_MASK)
#define CHN0_RXBB_1_CALXPA_TX2TIA_EN_RESET                                     0x0
#define CHN0_RXBB_1_CALXPA_EN_BQ1_LSB                                          13
#define CHN0_RXBB_1_CALXPA_EN_BQ1_MSB                                          13
#define CHN0_RXBB_1_CALXPA_EN_BQ1_MASK                                         0x2000
#define CHN0_RXBB_1_CALXPA_EN_BQ1_GET(x)                                       (((x) & CHN0_RXBB_1_CALXPA_EN_BQ1_MASK) >> CHN0_RXBB_1_CALXPA_EN_BQ1_LSB)
#define CHN0_RXBB_1_CALXPA_EN_BQ1_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_CALXPA_EN_BQ1_LSB) & CHN0_RXBB_1_CALXPA_EN_BQ1_MASK)
#define CHN0_RXBB_1_CALXPA_EN_BQ1_RESET                                        0x0
#define CHN0_RXBB_1_CALXPA_EN_BQ2_LSB                                          12
#define CHN0_RXBB_1_CALXPA_EN_BQ2_MSB                                          12
#define CHN0_RXBB_1_CALXPA_EN_BQ2_MASK                                         0x1000
#define CHN0_RXBB_1_CALXPA_EN_BQ2_GET(x)                                       (((x) & CHN0_RXBB_1_CALXPA_EN_BQ2_MASK) >> CHN0_RXBB_1_CALXPA_EN_BQ2_LSB)
#define CHN0_RXBB_1_CALXPA_EN_BQ2_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_CALXPA_EN_BQ2_LSB) & CHN0_RXBB_1_CALXPA_EN_BQ2_MASK)
#define CHN0_RXBB_1_CALXPA_EN_BQ2_RESET                                        0x0
#define CHN0_RXBB_1_CALXPA_EN_TIA_LSB                                          11
#define CHN0_RXBB_1_CALXPA_EN_TIA_MSB                                          11
#define CHN0_RXBB_1_CALXPA_EN_TIA_MASK                                         0x800
#define CHN0_RXBB_1_CALXPA_EN_TIA_GET(x)                                       (((x) & CHN0_RXBB_1_CALXPA_EN_TIA_MASK) >> CHN0_RXBB_1_CALXPA_EN_TIA_LSB)
#define CHN0_RXBB_1_CALXPA_EN_TIA_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_CALXPA_EN_TIA_LSB) & CHN0_RXBB_1_CALXPA_EN_TIA_MASK)
#define CHN0_RXBB_1_CALXPA_EN_TIA_RESET                                        0x1
#define CHN0_RXBB_1_CALXPA_EN_DCOC_LSB                                         10
#define CHN0_RXBB_1_CALXPA_EN_DCOC_MSB                                         10
#define CHN0_RXBB_1_CALXPA_EN_DCOC_MASK                                        0x400
#define CHN0_RXBB_1_CALXPA_EN_DCOC_GET(x)                                      (((x) & CHN0_RXBB_1_CALXPA_EN_DCOC_MASK) >> CHN0_RXBB_1_CALXPA_EN_DCOC_LSB)
#define CHN0_RXBB_1_CALXPA_EN_DCOC_SET(x)                                      (((0 | (x)) << CHN0_RXBB_1_CALXPA_EN_DCOC_LSB) & CHN0_RXBB_1_CALXPA_EN_DCOC_MASK)
#define CHN0_RXBB_1_CALXPA_EN_DCOC_RESET                                       0x1
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_LSB                                        9
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_MSB                                        9
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_MASK                                       0x200
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_GET(x)                                     (((x) & CHN0_RXBB_1_PEF_RXIN2TIA_EN_MASK) >> CHN0_RXBB_1_PEF_RXIN2TIA_EN_LSB)
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_1_PEF_RXIN2TIA_EN_LSB) & CHN0_RXBB_1_PEF_RXIN2TIA_EN_MASK)
#define CHN0_RXBB_1_PEF_RXIN2TIA_EN_RESET                                      0x0
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_LSB                                       8
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_MSB                                       8
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_MASK                                      0x100
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_GET(x)                                    (((x) & CHN0_RXBB_1_PEF_TIA2RXOUT_EN_MASK) >> CHN0_RXBB_1_PEF_TIA2RXOUT_EN_LSB)
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_SET(x)                                    (((0 | (x)) << CHN0_RXBB_1_PEF_TIA2RXOUT_EN_LSB) & CHN0_RXBB_1_PEF_TIA2RXOUT_EN_MASK)
#define CHN0_RXBB_1_PEF_TIA2RXOUT_EN_RESET                                     0x1
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_LSB                                        7
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_MSB                                        7
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_MASK                                       0x80
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_GET(x)                                     (((x) & CHN0_RXBB_1_PEF_BQ2RXOUT_EN_MASK) >> CHN0_RXBB_1_PEF_BQ2RXOUT_EN_LSB)
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_SET(x)                                     (((0 | (x)) << CHN0_RXBB_1_PEF_BQ2RXOUT_EN_LSB) & CHN0_RXBB_1_PEF_BQ2RXOUT_EN_MASK)
#define CHN0_RXBB_1_PEF_BQ2RXOUT_EN_RESET                                      0x0
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_LSB                                          6
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_MSB                                          6
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_MASK                                         0x40
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_GET(x)                                       (((x) & CHN0_RXBB_1_PEF_TX2BQ1_EN_MASK) >> CHN0_RXBB_1_PEF_TX2BQ1_EN_LSB)
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_PEF_TX2BQ1_EN_LSB) & CHN0_RXBB_1_PEF_TX2BQ1_EN_MASK)
#define CHN0_RXBB_1_PEF_TX2BQ1_EN_RESET                                        0x1
#define CHN0_RXBB_1_PEF_TX2TIA_EN_LSB                                          5
#define CHN0_RXBB_1_PEF_TX2TIA_EN_MSB                                          5
#define CHN0_RXBB_1_PEF_TX2TIA_EN_MASK                                         0x20
#define CHN0_RXBB_1_PEF_TX2TIA_EN_GET(x)                                       (((x) & CHN0_RXBB_1_PEF_TX2TIA_EN_MASK) >> CHN0_RXBB_1_PEF_TX2TIA_EN_LSB)
#define CHN0_RXBB_1_PEF_TX2TIA_EN_SET(x)                                       (((0 | (x)) << CHN0_RXBB_1_PEF_TX2TIA_EN_LSB) & CHN0_RXBB_1_PEF_TX2TIA_EN_MASK)
#define CHN0_RXBB_1_PEF_TX2TIA_EN_RESET                                        0x0
#define CHN0_RXBB_1_PEF_EN_BQ1_LSB                                             4
#define CHN0_RXBB_1_PEF_EN_BQ1_MSB                                             4
#define CHN0_RXBB_1_PEF_EN_BQ1_MASK                                            0x10
#define CHN0_RXBB_1_PEF_EN_BQ1_GET(x)                                          (((x) & CHN0_RXBB_1_PEF_EN_BQ1_MASK) >> CHN0_RXBB_1_PEF_EN_BQ1_LSB)
#define CHN0_RXBB_1_PEF_EN_BQ1_SET(x)                                          (((0 | (x)) << CHN0_RXBB_1_PEF_EN_BQ1_LSB) & CHN0_RXBB_1_PEF_EN_BQ1_MASK)
#define CHN0_RXBB_1_PEF_EN_BQ1_RESET                                           0x0
#define CHN0_RXBB_1_PEF_EN_BQ2_LSB                                             3
#define CHN0_RXBB_1_PEF_EN_BQ2_MSB                                             3
#define CHN0_RXBB_1_PEF_EN_BQ2_MASK                                            0x8
#define CHN0_RXBB_1_PEF_EN_BQ2_GET(x)                                          (((x) & CHN0_RXBB_1_PEF_EN_BQ2_MASK) >> CHN0_RXBB_1_PEF_EN_BQ2_LSB)
#define CHN0_RXBB_1_PEF_EN_BQ2_SET(x)                                          (((0 | (x)) << CHN0_RXBB_1_PEF_EN_BQ2_LSB) & CHN0_RXBB_1_PEF_EN_BQ2_MASK)
#define CHN0_RXBB_1_PEF_EN_BQ2_RESET                                           0x0
#define CHN0_RXBB_1_PEF_EN_TIA_LSB                                             2
#define CHN0_RXBB_1_PEF_EN_TIA_MSB                                             2
#define CHN0_RXBB_1_PEF_EN_TIA_MASK                                            0x4
#define CHN0_RXBB_1_PEF_EN_TIA_GET(x)                                          (((x) & CHN0_RXBB_1_PEF_EN_TIA_MASK) >> CHN0_RXBB_1_PEF_EN_TIA_LSB)
#define CHN0_RXBB_1_PEF_EN_TIA_SET(x)                                          (((0 | (x)) << CHN0_RXBB_1_PEF_EN_TIA_LSB) & CHN0_RXBB_1_PEF_EN_TIA_MASK)
#define CHN0_RXBB_1_PEF_EN_TIA_RESET                                           0x0
#define CHN0_RXBB_1_PEF_EN_DCOC_LSB                                            1
#define CHN0_RXBB_1_PEF_EN_DCOC_MSB                                            1
#define CHN0_RXBB_1_PEF_EN_DCOC_MASK                                           0x2
#define CHN0_RXBB_1_PEF_EN_DCOC_GET(x)                                         (((x) & CHN0_RXBB_1_PEF_EN_DCOC_MASK) >> CHN0_RXBB_1_PEF_EN_DCOC_LSB)
#define CHN0_RXBB_1_PEF_EN_DCOC_SET(x)                                         (((0 | (x)) << CHN0_RXBB_1_PEF_EN_DCOC_LSB) & CHN0_RXBB_1_PEF_EN_DCOC_MASK)
#define CHN0_RXBB_1_PEF_EN_DCOC_RESET                                          0x0
#define CHN0_RXBB_1_PEF_EN_LSB                                                 0
#define CHN0_RXBB_1_PEF_EN_MSB                                                 0
#define CHN0_RXBB_1_PEF_EN_MASK                                                0x1
#define CHN0_RXBB_1_PEF_EN_GET(x)                                              (((x) & CHN0_RXBB_1_PEF_EN_MASK) >> CHN0_RXBB_1_PEF_EN_LSB)
#define CHN0_RXBB_1_PEF_EN_SET(x)                                              (((0 | (x)) << CHN0_RXBB_1_PEF_EN_LSB) & CHN0_RXBB_1_PEF_EN_MASK)
#define CHN0_RXBB_1_PEF_EN_RESET                                               0x0
#define CHN0_RXBB_1_ADDRESS                                                    (0x4 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_1_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_1_RESET                                                      0x36be0d40

// 0x8 (CHN0_RXBB_2)
#define CHN0_RXBB_2_SWITCH_OVERRIDE_LSB                                        31
#define CHN0_RXBB_2_SWITCH_OVERRIDE_MSB                                        31
#define CHN0_RXBB_2_SWITCH_OVERRIDE_MASK                                       0x80000000
#define CHN0_RXBB_2_SWITCH_OVERRIDE_GET(x)                                     (((x) & CHN0_RXBB_2_SWITCH_OVERRIDE_MASK) >> CHN0_RXBB_2_SWITCH_OVERRIDE_LSB)
#define CHN0_RXBB_2_SWITCH_OVERRIDE_SET(x)                                     (((0 | (x)) << CHN0_RXBB_2_SWITCH_OVERRIDE_LSB) & CHN0_RXBB_2_SWITCH_OVERRIDE_MASK)
#define CHN0_RXBB_2_SWITCH_OVERRIDE_RESET                                      0x0
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_LSB                                         30
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_MSB                                         30
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_MASK                                        0x40000000
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_GET(x)                                      (((x) & CHN0_RXBB_2_RXIN2TIA_EN_LS_MASK) >> CHN0_RXBB_2_RXIN2TIA_EN_LS_LSB)
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_2_RXIN2TIA_EN_LS_LSB) & CHN0_RXBB_2_RXIN2TIA_EN_LS_MASK)
#define CHN0_RXBB_2_RXIN2TIA_EN_LS_RESET                                       0x0
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_LSB                                        29
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_MSB                                        29
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_MASK                                       0x20000000
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_GET(x)                                     (((x) & CHN0_RXBB_2_TIA2RXOUT_EN_LS_MASK) >> CHN0_RXBB_2_TIA2RXOUT_EN_LS_LSB)
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_SET(x)                                     (((0 | (x)) << CHN0_RXBB_2_TIA2RXOUT_EN_LS_LSB) & CHN0_RXBB_2_TIA2RXOUT_EN_LS_MASK)
#define CHN0_RXBB_2_TIA2RXOUT_EN_LS_RESET                                      0x0
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_LSB                                         28
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_MSB                                         28
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_MASK                                        0x10000000
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_GET(x)                                      (((x) & CHN0_RXBB_2_BQ2RXOUT_EN_LS_MASK) >> CHN0_RXBB_2_BQ2RXOUT_EN_LS_LSB)
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_2_BQ2RXOUT_EN_LS_LSB) & CHN0_RXBB_2_BQ2RXOUT_EN_LS_MASK)
#define CHN0_RXBB_2_BQ2RXOUT_EN_LS_RESET                                       0x0
#define CHN0_RXBB_2_TX2BQ1_EN_LS_LSB                                           27
#define CHN0_RXBB_2_TX2BQ1_EN_LS_MSB                                           27
#define CHN0_RXBB_2_TX2BQ1_EN_LS_MASK                                          0x8000000
#define CHN0_RXBB_2_TX2BQ1_EN_LS_GET(x)                                        (((x) & CHN0_RXBB_2_TX2BQ1_EN_LS_MASK) >> CHN0_RXBB_2_TX2BQ1_EN_LS_LSB)
#define CHN0_RXBB_2_TX2BQ1_EN_LS_SET(x)                                        (((0 | (x)) << CHN0_RXBB_2_TX2BQ1_EN_LS_LSB) & CHN0_RXBB_2_TX2BQ1_EN_LS_MASK)
#define CHN0_RXBB_2_TX2BQ1_EN_LS_RESET                                         0x0
#define CHN0_RXBB_2_TX2TIA_EN_LS_LSB                                           26
#define CHN0_RXBB_2_TX2TIA_EN_LS_MSB                                           26
#define CHN0_RXBB_2_TX2TIA_EN_LS_MASK                                          0x4000000
#define CHN0_RXBB_2_TX2TIA_EN_LS_GET(x)                                        (((x) & CHN0_RXBB_2_TX2TIA_EN_LS_MASK) >> CHN0_RXBB_2_TX2TIA_EN_LS_LSB)
#define CHN0_RXBB_2_TX2TIA_EN_LS_SET(x)                                        (((0 | (x)) << CHN0_RXBB_2_TX2TIA_EN_LS_LSB) & CHN0_RXBB_2_TX2TIA_EN_LS_MASK)
#define CHN0_RXBB_2_TX2TIA_EN_LS_RESET                                         0x0
#define CHN0_RXBB_2_EN_BQ1_OVR_LSB                                             24
#define CHN0_RXBB_2_EN_BQ1_OVR_MSB                                             25
#define CHN0_RXBB_2_EN_BQ1_OVR_MASK                                            0x3000000
#define CHN0_RXBB_2_EN_BQ1_OVR_GET(x)                                          (((x) & CHN0_RXBB_2_EN_BQ1_OVR_MASK) >> CHN0_RXBB_2_EN_BQ1_OVR_LSB)
#define CHN0_RXBB_2_EN_BQ1_OVR_SET(x)                                          (((0 | (x)) << CHN0_RXBB_2_EN_BQ1_OVR_LSB) & CHN0_RXBB_2_EN_BQ1_OVR_MASK)
#define CHN0_RXBB_2_EN_BQ1_OVR_RESET                                           0x0
#define CHN0_RXBB_2_EN_BQ2_OVR_LSB                                             22
#define CHN0_RXBB_2_EN_BQ2_OVR_MSB                                             23
#define CHN0_RXBB_2_EN_BQ2_OVR_MASK                                            0xc00000
#define CHN0_RXBB_2_EN_BQ2_OVR_GET(x)                                          (((x) & CHN0_RXBB_2_EN_BQ2_OVR_MASK) >> CHN0_RXBB_2_EN_BQ2_OVR_LSB)
#define CHN0_RXBB_2_EN_BQ2_OVR_SET(x)                                          (((0 | (x)) << CHN0_RXBB_2_EN_BQ2_OVR_LSB) & CHN0_RXBB_2_EN_BQ2_OVR_MASK)
#define CHN0_RXBB_2_EN_BQ2_OVR_RESET                                           0x0
#define CHN0_RXBB_2_EN_TIA_OVR_LSB                                             20
#define CHN0_RXBB_2_EN_TIA_OVR_MSB                                             21
#define CHN0_RXBB_2_EN_TIA_OVR_MASK                                            0x300000
#define CHN0_RXBB_2_EN_TIA_OVR_GET(x)                                          (((x) & CHN0_RXBB_2_EN_TIA_OVR_MASK) >> CHN0_RXBB_2_EN_TIA_OVR_LSB)
#define CHN0_RXBB_2_EN_TIA_OVR_SET(x)                                          (((0 | (x)) << CHN0_RXBB_2_EN_TIA_OVR_LSB) & CHN0_RXBB_2_EN_TIA_OVR_MASK)
#define CHN0_RXBB_2_EN_TIA_OVR_RESET                                           0x0
#define CHN0_RXBB_2_EN_DCOC_OVR_LSB                                            18
#define CHN0_RXBB_2_EN_DCOC_OVR_MSB                                            19
#define CHN0_RXBB_2_EN_DCOC_OVR_MASK                                           0xc0000
#define CHN0_RXBB_2_EN_DCOC_OVR_GET(x)                                         (((x) & CHN0_RXBB_2_EN_DCOC_OVR_MASK) >> CHN0_RXBB_2_EN_DCOC_OVR_LSB)
#define CHN0_RXBB_2_EN_DCOC_OVR_SET(x)                                         (((0 | (x)) << CHN0_RXBB_2_EN_DCOC_OVR_LSB) & CHN0_RXBB_2_EN_DCOC_OVR_MASK)
#define CHN0_RXBB_2_EN_DCOC_OVR_RESET                                          0x0
#define CHN0_RXBB_2_EN_BIAS_OVR_LSB                                            16
#define CHN0_RXBB_2_EN_BIAS_OVR_MSB                                            17
#define CHN0_RXBB_2_EN_BIAS_OVR_MASK                                           0x30000
#define CHN0_RXBB_2_EN_BIAS_OVR_GET(x)                                         (((x) & CHN0_RXBB_2_EN_BIAS_OVR_MASK) >> CHN0_RXBB_2_EN_BIAS_OVR_LSB)
#define CHN0_RXBB_2_EN_BIAS_OVR_SET(x)                                         (((0 | (x)) << CHN0_RXBB_2_EN_BIAS_OVR_LSB) & CHN0_RXBB_2_EN_BIAS_OVR_MASK)
#define CHN0_RXBB_2_EN_BIAS_OVR_RESET                                          0x0
#define CHN0_RXBB_2_MANRXGAIN_LSB                                              15
#define CHN0_RXBB_2_MANRXGAIN_MSB                                              15
#define CHN0_RXBB_2_MANRXGAIN_MASK                                             0x8000
#define CHN0_RXBB_2_MANRXGAIN_GET(x)                                           (((x) & CHN0_RXBB_2_MANRXGAIN_MASK) >> CHN0_RXBB_2_MANRXGAIN_LSB)
#define CHN0_RXBB_2_MANRXGAIN_SET(x)                                           (((0 | (x)) << CHN0_RXBB_2_MANRXGAIN_LSB) & CHN0_RXBB_2_MANRXGAIN_MASK)
#define CHN0_RXBB_2_MANRXGAIN_RESET                                            0x0
#define CHN0_RXBB_2_TIAGAIN_LS_LSB                                             12
#define CHN0_RXBB_2_TIAGAIN_LS_MSB                                             14
#define CHN0_RXBB_2_TIAGAIN_LS_MASK                                            0x7000
#define CHN0_RXBB_2_TIAGAIN_LS_GET(x)                                          (((x) & CHN0_RXBB_2_TIAGAIN_LS_MASK) >> CHN0_RXBB_2_TIAGAIN_LS_LSB)
#define CHN0_RXBB_2_TIAGAIN_LS_SET(x)                                          (((0 | (x)) << CHN0_RXBB_2_TIAGAIN_LS_LSB) & CHN0_RXBB_2_TIAGAIN_LS_MASK)
#define CHN0_RXBB_2_TIAGAIN_LS_RESET                                           0x0
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_LSB                                       10
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_MSB                                       11
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_MASK                                      0xc00
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_GET(x)                                    (((x) & CHN0_RXBB_2_TIAGAIN_STEP_OVR_MASK) >> CHN0_RXBB_2_TIAGAIN_STEP_OVR_LSB)
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_SET(x)                                    (((0 | (x)) << CHN0_RXBB_2_TIAGAIN_STEP_OVR_LSB) & CHN0_RXBB_2_TIAGAIN_STEP_OVR_MASK)
#define CHN0_RXBB_2_TIAGAIN_STEP_OVR_RESET                                     0x0
#define CHN0_RXBB_2_RX_BQ1_LS_LSB                                              8
#define CHN0_RXBB_2_RX_BQ1_LS_MSB                                              9
#define CHN0_RXBB_2_RX_BQ1_LS_MASK                                             0x300
#define CHN0_RXBB_2_RX_BQ1_LS_GET(x)                                           (((x) & CHN0_RXBB_2_RX_BQ1_LS_MASK) >> CHN0_RXBB_2_RX_BQ1_LS_LSB)
#define CHN0_RXBB_2_RX_BQ1_LS_SET(x)                                           (((0 | (x)) << CHN0_RXBB_2_RX_BQ1_LS_LSB) & CHN0_RXBB_2_RX_BQ1_LS_MASK)
#define CHN0_RXBB_2_RX_BQ1_LS_RESET                                            0x1
#define CHN0_RXBB_2_RX_BQ2_LS_LSB                                              4
#define CHN0_RXBB_2_RX_BQ2_LS_MSB                                              7
#define CHN0_RXBB_2_RX_BQ2_LS_MASK                                             0xf0
#define CHN0_RXBB_2_RX_BQ2_LS_GET(x)                                           (((x) & CHN0_RXBB_2_RX_BQ2_LS_MASK) >> CHN0_RXBB_2_RX_BQ2_LS_LSB)
#define CHN0_RXBB_2_RX_BQ2_LS_SET(x)                                           (((0 | (x)) << CHN0_RXBB_2_RX_BQ2_LS_LSB) & CHN0_RXBB_2_RX_BQ2_LS_MASK)
#define CHN0_RXBB_2_RX_BQ2_LS_RESET                                            0x7
#define CHN0_RXBB_2_RESERVED_0_LSB                                             0
#define CHN0_RXBB_2_RESERVED_0_MSB                                             3
#define CHN0_RXBB_2_RESERVED_0_MASK                                            0xf
#define CHN0_RXBB_2_RESERVED_0_GET(x)                                          (((x) & CHN0_RXBB_2_RESERVED_0_MASK) >> CHN0_RXBB_2_RESERVED_0_LSB)
#define CHN0_RXBB_2_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN0_RXBB_2_RESERVED_0_LSB) & CHN0_RXBB_2_RESERVED_0_MASK)
#define CHN0_RXBB_2_RESERVED_0_RESET                                           0x0
#define CHN0_RXBB_2_ADDRESS                                                    (0x8 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_2_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_2_RESET                                                      0x170

// 0xc (CHN0_RXBB_3)
#define CHN0_RXBB_3_OFFSETI_LS_LSB                                             24
#define CHN0_RXBB_3_OFFSETI_LS_MSB                                             31
#define CHN0_RXBB_3_OFFSETI_LS_MASK                                            0xff000000
#define CHN0_RXBB_3_OFFSETI_LS_GET(x)                                          (((x) & CHN0_RXBB_3_OFFSETI_LS_MASK) >> CHN0_RXBB_3_OFFSETI_LS_LSB)
#define CHN0_RXBB_3_OFFSETI_LS_SET(x)                                          (((0 | (x)) << CHN0_RXBB_3_OFFSETI_LS_LSB) & CHN0_RXBB_3_OFFSETI_LS_MASK)
#define CHN0_RXBB_3_OFFSETI_LS_RESET                                           0x80
#define CHN0_RXBB_3_OFFSETQ_LS_LSB                                             16
#define CHN0_RXBB_3_OFFSETQ_LS_MSB                                             23
#define CHN0_RXBB_3_OFFSETQ_LS_MASK                                            0xff0000
#define CHN0_RXBB_3_OFFSETQ_LS_GET(x)                                          (((x) & CHN0_RXBB_3_OFFSETQ_LS_MASK) >> CHN0_RXBB_3_OFFSETQ_LS_LSB)
#define CHN0_RXBB_3_OFFSETQ_LS_SET(x)                                          (((0 | (x)) << CHN0_RXBB_3_OFFSETQ_LS_LSB) & CHN0_RXBB_3_OFFSETQ_LS_MASK)
#define CHN0_RXBB_3_OFFSETQ_LS_RESET                                           0x80
#define CHN0_RXBB_3_DC_OFFSET_OVR_LSB                                          15
#define CHN0_RXBB_3_DC_OFFSET_OVR_MSB                                          15
#define CHN0_RXBB_3_DC_OFFSET_OVR_MASK                                         0x8000
#define CHN0_RXBB_3_DC_OFFSET_OVR_GET(x)                                       (((x) & CHN0_RXBB_3_DC_OFFSET_OVR_MASK) >> CHN0_RXBB_3_DC_OFFSET_OVR_LSB)
#define CHN0_RXBB_3_DC_OFFSET_OVR_SET(x)                                       (((0 | (x)) << CHN0_RXBB_3_DC_OFFSET_OVR_LSB) & CHN0_RXBB_3_DC_OFFSET_OVR_MASK)
#define CHN0_RXBB_3_DC_OFFSET_OVR_RESET                                        0x0
#define CHN0_RXBB_3_RX_FILTERFC_OVR_LSB                                        14
#define CHN0_RXBB_3_RX_FILTERFC_OVR_MSB                                        14
#define CHN0_RXBB_3_RX_FILTERFC_OVR_MASK                                       0x4000
#define CHN0_RXBB_3_RX_FILTERFC_OVR_GET(x)                                     (((x) & CHN0_RXBB_3_RX_FILTERFC_OVR_MASK) >> CHN0_RXBB_3_RX_FILTERFC_OVR_LSB)
#define CHN0_RXBB_3_RX_FILTERFC_OVR_SET(x)                                     (((0 | (x)) << CHN0_RXBB_3_RX_FILTERFC_OVR_LSB) & CHN0_RXBB_3_RX_FILTERFC_OVR_MASK)
#define CHN0_RXBB_3_RX_FILTERFC_OVR_RESET                                      0x0
#define CHN0_RXBB_3_RX_FILTERFC_LS_LSB                                         9
#define CHN0_RXBB_3_RX_FILTERFC_LS_MSB                                         13
#define CHN0_RXBB_3_RX_FILTERFC_LS_MASK                                        0x3e00
#define CHN0_RXBB_3_RX_FILTERFC_LS_GET(x)                                      (((x) & CHN0_RXBB_3_RX_FILTERFC_LS_MASK) >> CHN0_RXBB_3_RX_FILTERFC_LS_LSB)
#define CHN0_RXBB_3_RX_FILTERFC_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_3_RX_FILTERFC_LS_LSB) & CHN0_RXBB_3_RX_FILTERFC_LS_MASK)
#define CHN0_RXBB_3_RX_FILTERFC_LS_RESET                                       0xc
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_LSB                                         8
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_MSB                                         8
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_MASK                                        0x100
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_GET(x)                                      (((x) & CHN0_RXBB_3_TIA_CFBCAL_OVR_MASK) >> CHN0_RXBB_3_TIA_CFBCAL_OVR_LSB)
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_SET(x)                                      (((0 | (x)) << CHN0_RXBB_3_TIA_CFBCAL_OVR_LSB) & CHN0_RXBB_3_TIA_CFBCAL_OVR_MASK)
#define CHN0_RXBB_3_TIA_CFBCAL_OVR_RESET                                       0x0
#define CHN0_RXBB_3_TIA_CFBCAL_LS_LSB                                          2
#define CHN0_RXBB_3_TIA_CFBCAL_LS_MSB                                          7
#define CHN0_RXBB_3_TIA_CFBCAL_LS_MASK                                         0xfc
#define CHN0_RXBB_3_TIA_CFBCAL_LS_GET(x)                                       (((x) & CHN0_RXBB_3_TIA_CFBCAL_LS_MASK) >> CHN0_RXBB_3_TIA_CFBCAL_LS_LSB)
#define CHN0_RXBB_3_TIA_CFBCAL_LS_SET(x)                                       (((0 | (x)) << CHN0_RXBB_3_TIA_CFBCAL_LS_LSB) & CHN0_RXBB_3_TIA_CFBCAL_LS_MASK)
#define CHN0_RXBB_3_TIA_CFBCAL_LS_RESET                                        0xa
#define CHN0_RXBB_3_RESERVED_0_LSB                                             0
#define CHN0_RXBB_3_RESERVED_0_MSB                                             1
#define CHN0_RXBB_3_RESERVED_0_MASK                                            0x3
#define CHN0_RXBB_3_RESERVED_0_GET(x)                                          (((x) & CHN0_RXBB_3_RESERVED_0_MASK) >> CHN0_RXBB_3_RESERVED_0_LSB)
#define CHN0_RXBB_3_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN0_RXBB_3_RESERVED_0_LSB) & CHN0_RXBB_3_RESERVED_0_MASK)
#define CHN0_RXBB_3_RESERVED_0_RESET                                           0x0
#define CHN0_RXBB_3_ADDRESS                                                    (0xc + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_3_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_3_RESET                                                      0x80801828

// 0x10 (CHN0_RXBB_4)
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_LSB                                      31
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_MSB                                      31
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_MASK                                     0x80000000
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_GET(x)                                   (((x) & CHN0_RXBB_4_TIA_ICIB_OVERRIDE_MASK) >> CHN0_RXBB_4_TIA_ICIB_OVERRIDE_LSB)
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_SET(x)                                   (((0 | (x)) << CHN0_RXBB_4_TIA_ICIB_OVERRIDE_LSB) & CHN0_RXBB_4_TIA_ICIB_OVERRIDE_MASK)
#define CHN0_RXBB_4_TIA_ICIB_OVERRIDE_RESET                                    0x0
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_LSB                                         28
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_MSB                                         30
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_MASK                                        0x70000000
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_GET(x)                                      (((x) & CHN0_RXBB_4_TIA_ICIBADJ_LS_MASK) >> CHN0_RXBB_4_TIA_ICIBADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_4_TIA_ICIBADJ_LS_LSB) & CHN0_RXBB_4_TIA_ICIBADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_ICIBADJ_LS_RESET                                       0x3
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_LSB                                       27
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_MSB                                       27
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_MASK                                      0x8000000
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_GET(x)                                    (((x) & CHN0_RXBB_4_TIA_ICB_OVERRIDE_MASK) >> CHN0_RXBB_4_TIA_ICB_OVERRIDE_LSB)
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_SET(x)                                    (((0 | (x)) << CHN0_RXBB_4_TIA_ICB_OVERRIDE_LSB) & CHN0_RXBB_4_TIA_ICB_OVERRIDE_MASK)
#define CHN0_RXBB_4_TIA_ICB_OVERRIDE_RESET                                     0x0
#define CHN0_RXBB_4_TIA_ICBADJ_LS_LSB                                          24
#define CHN0_RXBB_4_TIA_ICBADJ_LS_MSB                                          26
#define CHN0_RXBB_4_TIA_ICBADJ_LS_MASK                                         0x7000000
#define CHN0_RXBB_4_TIA_ICBADJ_LS_GET(x)                                       (((x) & CHN0_RXBB_4_TIA_ICBADJ_LS_MASK) >> CHN0_RXBB_4_TIA_ICBADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_ICBADJ_LS_SET(x)                                       (((0 | (x)) << CHN0_RXBB_4_TIA_ICBADJ_LS_LSB) & CHN0_RXBB_4_TIA_ICBADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_ICBADJ_LS_RESET                                        0x4
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_LSB                                       23
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_MSB                                       23
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_MASK                                      0x800000
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_GET(x)                                    (((x) & CHN0_RXBB_4_TIA_CC1_OVERRIDE_MASK) >> CHN0_RXBB_4_TIA_CC1_OVERRIDE_LSB)
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_SET(x)                                    (((0 | (x)) << CHN0_RXBB_4_TIA_CC1_OVERRIDE_LSB) & CHN0_RXBB_4_TIA_CC1_OVERRIDE_MASK)
#define CHN0_RXBB_4_TIA_CC1_OVERRIDE_RESET                                     0x0
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_LSB                                          21
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_MSB                                          22
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_MASK                                         0x600000
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_GET(x)                                       (((x) & CHN0_RXBB_4_TIA_CC1ADJ_LS_MASK) >> CHN0_RXBB_4_TIA_CC1ADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_SET(x)                                       (((0 | (x)) << CHN0_RXBB_4_TIA_CC1ADJ_LS_LSB) & CHN0_RXBB_4_TIA_CC1ADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_CC1ADJ_LS_RESET                                        0x1
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_LSB                                       20
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_MSB                                       20
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_MASK                                      0x100000
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_GET(x)                                    (((x) & CHN0_RXBB_4_TIA_CC2_OVERRIDE_MASK) >> CHN0_RXBB_4_TIA_CC2_OVERRIDE_LSB)
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_SET(x)                                    (((0 | (x)) << CHN0_RXBB_4_TIA_CC2_OVERRIDE_LSB) & CHN0_RXBB_4_TIA_CC2_OVERRIDE_MASK)
#define CHN0_RXBB_4_TIA_CC2_OVERRIDE_RESET                                     0x0
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_LSB                                          17
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_MSB                                          19
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_MASK                                         0xe0000
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_GET(x)                                       (((x) & CHN0_RXBB_4_TIA_CC2ADJ_LS_MASK) >> CHN0_RXBB_4_TIA_CC2ADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_SET(x)                                       (((0 | (x)) << CHN0_RXBB_4_TIA_CC2ADJ_LS_LSB) & CHN0_RXBB_4_TIA_CC2ADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_CC2ADJ_LS_RESET                                        0x1
#define CHN0_RXBB_4_TIA_OVERRIDE_LSB                                           16
#define CHN0_RXBB_4_TIA_OVERRIDE_MSB                                           16
#define CHN0_RXBB_4_TIA_OVERRIDE_MASK                                          0x10000
#define CHN0_RXBB_4_TIA_OVERRIDE_GET(x)                                        (((x) & CHN0_RXBB_4_TIA_OVERRIDE_MASK) >> CHN0_RXBB_4_TIA_OVERRIDE_LSB)
#define CHN0_RXBB_4_TIA_OVERRIDE_SET(x)                                        (((0 | (x)) << CHN0_RXBB_4_TIA_OVERRIDE_LSB) & CHN0_RXBB_4_TIA_OVERRIDE_MASK)
#define CHN0_RXBB_4_TIA_OVERRIDE_RESET                                         0x0
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_LSB                                         13
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_MSB                                         15
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_MASK                                        0xe000
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_GET(x)                                      (((x) & CHN0_RXBB_4_TIA_ICQ1ADJ_LS_MASK) >> CHN0_RXBB_4_TIA_ICQ1ADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_4_TIA_ICQ1ADJ_LS_LSB) & CHN0_RXBB_4_TIA_ICQ1ADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_ICQ1ADJ_LS_RESET                                       0x3
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_LSB                                         10
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_MSB                                         12
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_MASK                                        0x1c00
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_GET(x)                                      (((x) & CHN0_RXBB_4_TIA_ICQ2ADJ_LS_MASK) >> CHN0_RXBB_4_TIA_ICQ2ADJ_LS_LSB)
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_4_TIA_ICQ2ADJ_LS_LSB) & CHN0_RXBB_4_TIA_ICQ2ADJ_LS_MASK)
#define CHN0_RXBB_4_TIA_ICQ2ADJ_LS_RESET                                       0x2
#define CHN0_RXBB_4_TIA_RMCAP_LS_LSB                                           9
#define CHN0_RXBB_4_TIA_RMCAP_LS_MSB                                           9
#define CHN0_RXBB_4_TIA_RMCAP_LS_MASK                                          0x200
#define CHN0_RXBB_4_TIA_RMCAP_LS_GET(x)                                        (((x) & CHN0_RXBB_4_TIA_RMCAP_LS_MASK) >> CHN0_RXBB_4_TIA_RMCAP_LS_LSB)
#define CHN0_RXBB_4_TIA_RMCAP_LS_SET(x)                                        (((0 | (x)) << CHN0_RXBB_4_TIA_RMCAP_LS_LSB) & CHN0_RXBB_4_TIA_RMCAP_LS_MASK)
#define CHN0_RXBB_4_TIA_RMCAP_LS_RESET                                         0x0
#define CHN0_RXBB_4_TIA_RFBCAL_LSB                                             4
#define CHN0_RXBB_4_TIA_RFBCAL_MSB                                             8
#define CHN0_RXBB_4_TIA_RFBCAL_MASK                                            0x1f0
#define CHN0_RXBB_4_TIA_RFBCAL_GET(x)                                          (((x) & CHN0_RXBB_4_TIA_RFBCAL_MASK) >> CHN0_RXBB_4_TIA_RFBCAL_LSB)
#define CHN0_RXBB_4_TIA_RFBCAL_SET(x)                                          (((0 | (x)) << CHN0_RXBB_4_TIA_RFBCAL_LSB) & CHN0_RXBB_4_TIA_RFBCAL_MASK)
#define CHN0_RXBB_4_TIA_RFBCAL_RESET                                           0x4
#define CHN0_RXBB_4_TIA_CJAM_LSB                                               3
#define CHN0_RXBB_4_TIA_CJAM_MSB                                               3
#define CHN0_RXBB_4_TIA_CJAM_MASK                                              0x8
#define CHN0_RXBB_4_TIA_CJAM_GET(x)                                            (((x) & CHN0_RXBB_4_TIA_CJAM_MASK) >> CHN0_RXBB_4_TIA_CJAM_LSB)
#define CHN0_RXBB_4_TIA_CJAM_SET(x)                                            (((0 | (x)) << CHN0_RXBB_4_TIA_CJAM_LSB) & CHN0_RXBB_4_TIA_CJAM_MASK)
#define CHN0_RXBB_4_TIA_CJAM_RESET                                             0x0
#define CHN0_RXBB_4_RESERVED_0_LSB                                             0
#define CHN0_RXBB_4_RESERVED_0_MSB                                             2
#define CHN0_RXBB_4_RESERVED_0_MASK                                            0x7
#define CHN0_RXBB_4_RESERVED_0_GET(x)                                          (((x) & CHN0_RXBB_4_RESERVED_0_MASK) >> CHN0_RXBB_4_RESERVED_0_LSB)
#define CHN0_RXBB_4_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN0_RXBB_4_RESERVED_0_LSB) & CHN0_RXBB_4_RESERVED_0_MASK)
#define CHN0_RXBB_4_RESERVED_0_RESET                                           0x0
#define CHN0_RXBB_4_ADDRESS                                                    (0x10 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_4_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_4_RESET                                                      0x34226840

// 0x14 (CHN0_RXBB_5)
#define CHN0_RXBB_5_BQ_OVERRIDE_LSB                                            31
#define CHN0_RXBB_5_BQ_OVERRIDE_MSB                                            31
#define CHN0_RXBB_5_BQ_OVERRIDE_MASK                                           0x80000000
#define CHN0_RXBB_5_BQ_OVERRIDE_GET(x)                                         (((x) & CHN0_RXBB_5_BQ_OVERRIDE_MASK) >> CHN0_RXBB_5_BQ_OVERRIDE_LSB)
#define CHN0_RXBB_5_BQ_OVERRIDE_SET(x)                                         (((0 | (x)) << CHN0_RXBB_5_BQ_OVERRIDE_LSB) & CHN0_RXBB_5_BQ_OVERRIDE_MASK)
#define CHN0_RXBB_5_BQ_OVERRIDE_RESET                                          0x0
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_LSB                                          29
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_MSB                                          30
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_MASK                                         0x60000000
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_GET(x)                                       (((x) & CHN0_RXBB_5_BQ_BBRCSEL_LS_MASK) >> CHN0_RXBB_5_BQ_BBRCSEL_LS_LSB)
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_SET(x)                                       (((0 | (x)) << CHN0_RXBB_5_BQ_BBRCSEL_LS_LSB) & CHN0_RXBB_5_BQ_BBRCSEL_LS_MASK)
#define CHN0_RXBB_5_BQ_BBRCSEL_LS_RESET                                        0x0
#define CHN0_RXBB_5_BQ_S1_LS_LSB                                               23
#define CHN0_RXBB_5_BQ_S1_LS_MSB                                               28
#define CHN0_RXBB_5_BQ_S1_LS_MASK                                              0x1f800000
#define CHN0_RXBB_5_BQ_S1_LS_GET(x)                                            (((x) & CHN0_RXBB_5_BQ_S1_LS_MASK) >> CHN0_RXBB_5_BQ_S1_LS_LSB)
#define CHN0_RXBB_5_BQ_S1_LS_SET(x)                                            (((0 | (x)) << CHN0_RXBB_5_BQ_S1_LS_LSB) & CHN0_RXBB_5_BQ_S1_LS_MASK)
#define CHN0_RXBB_5_BQ_S1_LS_RESET                                             0x23
#define CHN0_RXBB_5_BQ_S2_LS_LSB                                               17
#define CHN0_RXBB_5_BQ_S2_LS_MSB                                               22
#define CHN0_RXBB_5_BQ_S2_LS_MASK                                              0x7e0000
#define CHN0_RXBB_5_BQ_S2_LS_GET(x)                                            (((x) & CHN0_RXBB_5_BQ_S2_LS_MASK) >> CHN0_RXBB_5_BQ_S2_LS_LSB)
#define CHN0_RXBB_5_BQ_S2_LS_SET(x)                                            (((0 | (x)) << CHN0_RXBB_5_BQ_S2_LS_LSB) & CHN0_RXBB_5_BQ_S2_LS_MASK)
#define CHN0_RXBB_5_BQ_S2_LS_RESET                                             0x23
#define CHN0_RXBB_5_BQ_S3_LS_LSB                                               11
#define CHN0_RXBB_5_BQ_S3_LS_MSB                                               16
#define CHN0_RXBB_5_BQ_S3_LS_MASK                                              0x1f800
#define CHN0_RXBB_5_BQ_S3_LS_GET(x)                                            (((x) & CHN0_RXBB_5_BQ_S3_LS_MASK) >> CHN0_RXBB_5_BQ_S3_LS_LSB)
#define CHN0_RXBB_5_BQ_S3_LS_SET(x)                                            (((0 | (x)) << CHN0_RXBB_5_BQ_S3_LS_LSB) & CHN0_RXBB_5_BQ_S3_LS_MASK)
#define CHN0_RXBB_5_BQ_S3_LS_RESET                                             0x23
#define CHN0_RXBB_5_BQ_S4_LS_LSB                                               5
#define CHN0_RXBB_5_BQ_S4_LS_MSB                                               10
#define CHN0_RXBB_5_BQ_S4_LS_MASK                                              0x7e0
#define CHN0_RXBB_5_BQ_S4_LS_GET(x)                                            (((x) & CHN0_RXBB_5_BQ_S4_LS_MASK) >> CHN0_RXBB_5_BQ_S4_LS_LSB)
#define CHN0_RXBB_5_BQ_S4_LS_SET(x)                                            (((0 | (x)) << CHN0_RXBB_5_BQ_S4_LS_LSB) & CHN0_RXBB_5_BQ_S4_LS_MASK)
#define CHN0_RXBB_5_BQ_S4_LS_RESET                                             0x10
#define CHN0_RXBB_5_BQ_RQ1_LS_LSB                                              0
#define CHN0_RXBB_5_BQ_RQ1_LS_MSB                                              4
#define CHN0_RXBB_5_BQ_RQ1_LS_MASK                                             0x1f
#define CHN0_RXBB_5_BQ_RQ1_LS_GET(x)                                           (((x) & CHN0_RXBB_5_BQ_RQ1_LS_MASK) >> CHN0_RXBB_5_BQ_RQ1_LS_LSB)
#define CHN0_RXBB_5_BQ_RQ1_LS_SET(x)                                           (((0 | (x)) << CHN0_RXBB_5_BQ_RQ1_LS_LSB) & CHN0_RXBB_5_BQ_RQ1_LS_MASK)
#define CHN0_RXBB_5_BQ_RQ1_LS_RESET                                            0x1d
#define CHN0_RXBB_5_ADDRESS                                                    (0x14 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_5_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_5_RESET                                                      0x11c71a1d

// 0x18 (CHN0_RXBB_6)
#define CHN0_RXBB_6_BQ_RQ2_LS_LSB                                              27
#define CHN0_RXBB_6_BQ_RQ2_LS_MSB                                              31
#define CHN0_RXBB_6_BQ_RQ2_LS_MASK                                             0xf8000000
#define CHN0_RXBB_6_BQ_RQ2_LS_GET(x)                                           (((x) & CHN0_RXBB_6_BQ_RQ2_LS_MASK) >> CHN0_RXBB_6_BQ_RQ2_LS_LSB)
#define CHN0_RXBB_6_BQ_RQ2_LS_SET(x)                                           (((0 | (x)) << CHN0_RXBB_6_BQ_RQ2_LS_LSB) & CHN0_RXBB_6_BQ_RQ2_LS_MASK)
#define CHN0_RXBB_6_BQ_RQ2_LS_RESET                                            0x1d
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_LSB                                         24
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_MSB                                         26
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_MASK                                        0x7000000
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_GET(x)                                      (((x) & CHN0_RXBB_6_ISEL_IC25BQ_LS_MASK) >> CHN0_RXBB_6_ISEL_IC25BQ_LS_LSB)
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_SET(x)                                      (((0 | (x)) << CHN0_RXBB_6_ISEL_IC25BQ_LS_LSB) & CHN0_RXBB_6_ISEL_IC25BQ_LS_MASK)
#define CHN0_RXBB_6_ISEL_IC25BQ_LS_RESET                                       0x3
#define CHN0_RXBB_6_ISEL_IC5OS_LSB                                             21
#define CHN0_RXBB_6_ISEL_IC5OS_MSB                                             23
#define CHN0_RXBB_6_ISEL_IC5OS_MASK                                            0xe00000
#define CHN0_RXBB_6_ISEL_IC5OS_GET(x)                                          (((x) & CHN0_RXBB_6_ISEL_IC5OS_MASK) >> CHN0_RXBB_6_ISEL_IC5OS_LSB)
#define CHN0_RXBB_6_ISEL_IC5OS_SET(x)                                          (((0 | (x)) << CHN0_RXBB_6_ISEL_IC5OS_LSB) & CHN0_RXBB_6_ISEL_IC5OS_MASK)
#define CHN0_RXBB_6_ISEL_IC5OS_RESET                                           0x2
#define CHN0_RXBB_6_RANGE_OSDAC_LSB                                            19
#define CHN0_RXBB_6_RANGE_OSDAC_MSB                                            20
#define CHN0_RXBB_6_RANGE_OSDAC_MASK                                           0x180000
#define CHN0_RXBB_6_RANGE_OSDAC_GET(x)                                         (((x) & CHN0_RXBB_6_RANGE_OSDAC_MASK) >> CHN0_RXBB_6_RANGE_OSDAC_LSB)
#define CHN0_RXBB_6_RANGE_OSDAC_SET(x)                                         (((0 | (x)) << CHN0_RXBB_6_RANGE_OSDAC_LSB) & CHN0_RXBB_6_RANGE_OSDAC_MASK)
#define CHN0_RXBB_6_RANGE_OSDAC_RESET                                          0x0
#define CHN0_RXBB_6_VSEL_BQ_VCM_LSB                                            17
#define CHN0_RXBB_6_VSEL_BQ_VCM_MSB                                            18
#define CHN0_RXBB_6_VSEL_BQ_VCM_MASK                                           0x60000
#define CHN0_RXBB_6_VSEL_BQ_VCM_GET(x)                                         (((x) & CHN0_RXBB_6_VSEL_BQ_VCM_MASK) >> CHN0_RXBB_6_VSEL_BQ_VCM_LSB)
#define CHN0_RXBB_6_VSEL_BQ_VCM_SET(x)                                         (((0 | (x)) << CHN0_RXBB_6_VSEL_BQ_VCM_LSB) & CHN0_RXBB_6_VSEL_BQ_VCM_MASK)
#define CHN0_RXBB_6_VSEL_BQ_VCM_RESET                                          0x0
#define CHN0_RXBB_6_VSEL_BQ_NCAS_LSB                                           14
#define CHN0_RXBB_6_VSEL_BQ_NCAS_MSB                                           16
#define CHN0_RXBB_6_VSEL_BQ_NCAS_MASK                                          0x1c000
#define CHN0_RXBB_6_VSEL_BQ_NCAS_GET(x)                                        (((x) & CHN0_RXBB_6_VSEL_BQ_NCAS_MASK) >> CHN0_RXBB_6_VSEL_BQ_NCAS_LSB)
#define CHN0_RXBB_6_VSEL_BQ_NCAS_SET(x)                                        (((0 | (x)) << CHN0_RXBB_6_VSEL_BQ_NCAS_LSB) & CHN0_RXBB_6_VSEL_BQ_NCAS_MASK)
#define CHN0_RXBB_6_VSEL_BQ_NCAS_RESET                                         0x7
#define CHN0_RXBB_6_BBFATBEN_LSB                                               13
#define CHN0_RXBB_6_BBFATBEN_MSB                                               13
#define CHN0_RXBB_6_BBFATBEN_MASK                                              0x2000
#define CHN0_RXBB_6_BBFATBEN_GET(x)                                            (((x) & CHN0_RXBB_6_BBFATBEN_MASK) >> CHN0_RXBB_6_BBFATBEN_LSB)
#define CHN0_RXBB_6_BBFATBEN_SET(x)                                            (((0 | (x)) << CHN0_RXBB_6_BBFATBEN_LSB) & CHN0_RXBB_6_BBFATBEN_MASK)
#define CHN0_RXBB_6_BBFATBEN_RESET                                             0x0
#define CHN0_RXBB_6_BBFATBSEL_LSB                                              10
#define CHN0_RXBB_6_BBFATBSEL_MSB                                              12
#define CHN0_RXBB_6_BBFATBSEL_MASK                                             0x1c00
#define CHN0_RXBB_6_BBFATBSEL_GET(x)                                           (((x) & CHN0_RXBB_6_BBFATBSEL_MASK) >> CHN0_RXBB_6_BBFATBSEL_LSB)
#define CHN0_RXBB_6_BBFATBSEL_SET(x)                                           (((0 | (x)) << CHN0_RXBB_6_BBFATBSEL_LSB) & CHN0_RXBB_6_BBFATBSEL_MASK)
#define CHN0_RXBB_6_BBFATBSEL_RESET                                            0x0
#define CHN0_RXBB_6_TESTI_SEL_LSB                                              7
#define CHN0_RXBB_6_TESTI_SEL_MSB                                              9
#define CHN0_RXBB_6_TESTI_SEL_MASK                                             0x380
#define CHN0_RXBB_6_TESTI_SEL_GET(x)                                           (((x) & CHN0_RXBB_6_TESTI_SEL_MASK) >> CHN0_RXBB_6_TESTI_SEL_LSB)
#define CHN0_RXBB_6_TESTI_SEL_SET(x)                                           (((0 | (x)) << CHN0_RXBB_6_TESTI_SEL_LSB) & CHN0_RXBB_6_TESTI_SEL_MASK)
#define CHN0_RXBB_6_TESTI_SEL_RESET                                            0x0
#define CHN0_RXBB_6_TESTQ_SEL_LSB                                              4
#define CHN0_RXBB_6_TESTQ_SEL_MSB                                              6
#define CHN0_RXBB_6_TESTQ_SEL_MASK                                             0x70
#define CHN0_RXBB_6_TESTQ_SEL_GET(x)                                           (((x) & CHN0_RXBB_6_TESTQ_SEL_MASK) >> CHN0_RXBB_6_TESTQ_SEL_LSB)
#define CHN0_RXBB_6_TESTQ_SEL_SET(x)                                           (((0 | (x)) << CHN0_RXBB_6_TESTQ_SEL_LSB) & CHN0_RXBB_6_TESTQ_SEL_MASK)
#define CHN0_RXBB_6_TESTQ_SEL_RESET                                            0x0
#define CHN0_RXBB_6_RESERVED_0_LSB                                             0
#define CHN0_RXBB_6_RESERVED_0_MSB                                             3
#define CHN0_RXBB_6_RESERVED_0_MASK                                            0xf
#define CHN0_RXBB_6_RESERVED_0_GET(x)                                          (((x) & CHN0_RXBB_6_RESERVED_0_MASK) >> CHN0_RXBB_6_RESERVED_0_LSB)
#define CHN0_RXBB_6_RESERVED_0_SET(x)                                          (((0 | (x)) << CHN0_RXBB_6_RESERVED_0_LSB) & CHN0_RXBB_6_RESERVED_0_MASK)
#define CHN0_RXBB_6_RESERVED_0_RESET                                           0x0
#define CHN0_RXBB_6_ADDRESS                                                    (0x18 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_6_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_6_RESET                                                      0xeb41c000

// 0x1c (CHN0_RXBB_7)
#define CHN0_RXBB_7_RXBB_SPARE_LSB                                             0
#define CHN0_RXBB_7_RXBB_SPARE_MSB                                             31
#define CHN0_RXBB_7_RXBB_SPARE_MASK                                            0xffffffff
#define CHN0_RXBB_7_RXBB_SPARE_GET(x)                                          (((x) & CHN0_RXBB_7_RXBB_SPARE_MASK) >> CHN0_RXBB_7_RXBB_SPARE_LSB)
#define CHN0_RXBB_7_RXBB_SPARE_SET(x)                                          (((0 | (x)) << CHN0_RXBB_7_RXBB_SPARE_LSB) & CHN0_RXBB_7_RXBB_SPARE_MASK)
#define CHN0_RXBB_7_RXBB_SPARE_RESET                                           0x0
#define CHN0_RXBB_7_ADDRESS                                                    (0x1c + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_7_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_7_RESET                                                      0x0

// 0x20 (CHN0_RXBB_8)
#define CHN0_RXBB_8_OFFSETI_DATA_LSB                                           24
#define CHN0_RXBB_8_OFFSETI_DATA_MSB                                           31
#define CHN0_RXBB_8_OFFSETI_DATA_MASK                                          0xff000000
#define CHN0_RXBB_8_OFFSETI_DATA_GET(x)                                        (((x) & CHN0_RXBB_8_OFFSETI_DATA_MASK) >> CHN0_RXBB_8_OFFSETI_DATA_LSB)
#define CHN0_RXBB_8_OFFSETI_DATA_SET(x)                                        (((0 | (x)) << CHN0_RXBB_8_OFFSETI_DATA_LSB) & CHN0_RXBB_8_OFFSETI_DATA_MASK)
#define CHN0_RXBB_8_OFFSETI_DATA_RESET                                         0x0
#define CHN0_RXBB_8_OFFSETQ_DATA_LSB                                           16
#define CHN0_RXBB_8_OFFSETQ_DATA_MSB                                           23
#define CHN0_RXBB_8_OFFSETQ_DATA_MASK                                          0xff0000
#define CHN0_RXBB_8_OFFSETQ_DATA_GET(x)                                        (((x) & CHN0_RXBB_8_OFFSETQ_DATA_MASK) >> CHN0_RXBB_8_OFFSETQ_DATA_LSB)
#define CHN0_RXBB_8_OFFSETQ_DATA_SET(x)                                        (((0 | (x)) << CHN0_RXBB_8_OFFSETQ_DATA_LSB) & CHN0_RXBB_8_OFFSETQ_DATA_MASK)
#define CHN0_RXBB_8_OFFSETQ_DATA_RESET                                         0x0
#define CHN0_RXBB_8_FILTERFC_DATA_LSB                                          11
#define CHN0_RXBB_8_FILTERFC_DATA_MSB                                          15
#define CHN0_RXBB_8_FILTERFC_DATA_MASK                                         0xf800
#define CHN0_RXBB_8_FILTERFC_DATA_GET(x)                                       (((x) & CHN0_RXBB_8_FILTERFC_DATA_MASK) >> CHN0_RXBB_8_FILTERFC_DATA_LSB)
#define CHN0_RXBB_8_FILTERFC_DATA_SET(x)                                       (((0 | (x)) << CHN0_RXBB_8_FILTERFC_DATA_LSB) & CHN0_RXBB_8_FILTERFC_DATA_MASK)
#define CHN0_RXBB_8_FILTERFC_DATA_RESET                                        0x0
#define CHN0_RXBB_8_ADDRESS                                                    (0x20 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_8_RSTMASK                                                    0xfffff800
#define CHN0_RXBB_8_RESET                                                      0x0

// 0x24 (CHN0_RXBB_9)
#define CHN0_RXBB_9_SS_RX_READBACK_LSB                                         0
#define CHN0_RXBB_9_SS_RX_READBACK_MSB                                         31
#define CHN0_RXBB_9_SS_RX_READBACK_MASK                                        0xffffffff
#define CHN0_RXBB_9_SS_RX_READBACK_GET(x)                                      (((x) & CHN0_RXBB_9_SS_RX_READBACK_MASK) >> CHN0_RXBB_9_SS_RX_READBACK_LSB)
#define CHN0_RXBB_9_SS_RX_READBACK_SET(x)                                      (((0 | (x)) << CHN0_RXBB_9_SS_RX_READBACK_LSB) & CHN0_RXBB_9_SS_RX_READBACK_MASK)
#define CHN0_RXBB_9_SS_RX_READBACK_RESET                                       0x0
#define CHN0_RXBB_9_ADDRESS                                                    (0x24 + __CHN0_RXBB_REG_CSR_BASE_ADDRESS)
#define CHN0_RXBB_9_RSTMASK                                                    0xffffffff
#define CHN0_RXBB_9_RESET                                                      0x0



#endif /* _CHN0_RXBB_REG_CSR_H_ */
