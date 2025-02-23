/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CHN7_TPC_REG_CSR_H_
#define _CHN7_TPC_REG_CSR_H_


#ifndef __CHN7_TPC_REG_CSR_BASE_ADDRESS
#define __CHN7_TPC_REG_CSR_BASE_ADDRESS (0x47e80)
#endif


// 0x0 (CHN7_TPC1)
#define CHN7_TPC1_CLPC_EN_OVR_LSB                                              30
#define CHN7_TPC1_CLPC_EN_OVR_MSB                                              31
#define CHN7_TPC1_CLPC_EN_OVR_MASK                                             0xc0000000
#define CHN7_TPC1_CLPC_EN_OVR_GET(x)                                           (((x) & CHN7_TPC1_CLPC_EN_OVR_MASK) >> CHN7_TPC1_CLPC_EN_OVR_LSB)
#define CHN7_TPC1_CLPC_EN_OVR_SET(x)                                           (((0 | (x)) << CHN7_TPC1_CLPC_EN_OVR_LSB) & CHN7_TPC1_CLPC_EN_OVR_MASK)
#define CHN7_TPC1_CLPC_EN_OVR_RESET                                            0x0
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_LSB                                       28
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_MSB                                       29
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_MASK                                      0x30000000
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_GET(x)                                    (((x) & CHN7_TPC1_SET_TIA_HIGAIN_OVR_MASK) >> CHN7_TPC1_SET_TIA_HIGAIN_OVR_LSB)
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_SET(x)                                    (((0 | (x)) << CHN7_TPC1_SET_TIA_HIGAIN_OVR_LSB) & CHN7_TPC1_SET_TIA_HIGAIN_OVR_MASK)
#define CHN7_TPC1_SET_TIA_HIGAIN_OVR_RESET                                     0x0
#define CHN7_TPC1_LPF_BW_SEL_LSB                                               24
#define CHN7_TPC1_LPF_BW_SEL_MSB                                               27
#define CHN7_TPC1_LPF_BW_SEL_MASK                                              0xf000000
#define CHN7_TPC1_LPF_BW_SEL_GET(x)                                            (((x) & CHN7_TPC1_LPF_BW_SEL_MASK) >> CHN7_TPC1_LPF_BW_SEL_LSB)
#define CHN7_TPC1_LPF_BW_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC1_LPF_BW_SEL_LSB) & CHN7_TPC1_LPF_BW_SEL_MASK)
#define CHN7_TPC1_LPF_BW_SEL_RESET                                             0x2
#define CHN7_TPC1_TIA_RT_SEL_LSB                                               23
#define CHN7_TPC1_TIA_RT_SEL_MSB                                               23
#define CHN7_TPC1_TIA_RT_SEL_MASK                                              0x800000
#define CHN7_TPC1_TIA_RT_SEL_GET(x)                                            (((x) & CHN7_TPC1_TIA_RT_SEL_MASK) >> CHN7_TPC1_TIA_RT_SEL_LSB)
#define CHN7_TPC1_TIA_RT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC1_TIA_RT_SEL_LSB) & CHN7_TPC1_TIA_RT_SEL_MASK)
#define CHN7_TPC1_TIA_RT_SEL_RESET                                             0x1
#define CHN7_TPC1_VCMOUT_SET_LSB                                               20
#define CHN7_TPC1_VCMOUT_SET_MSB                                               22
#define CHN7_TPC1_VCMOUT_SET_MASK                                              0x700000
#define CHN7_TPC1_VCMOUT_SET_GET(x)                                            (((x) & CHN7_TPC1_VCMOUT_SET_MASK) >> CHN7_TPC1_VCMOUT_SET_LSB)
#define CHN7_TPC1_VCMOUT_SET_SET(x)                                            (((0 | (x)) << CHN7_TPC1_VCMOUT_SET_LSB) & CHN7_TPC1_VCMOUT_SET_MASK)
#define CHN7_TPC1_VCMOUT_SET_RESET                                             0x4
#define CHN7_TPC1_VREF_SET_LSB                                                 18
#define CHN7_TPC1_VREF_SET_MSB                                                 19
#define CHN7_TPC1_VREF_SET_MASK                                                0xc0000
#define CHN7_TPC1_VREF_SET_GET(x)                                              (((x) & CHN7_TPC1_VREF_SET_MASK) >> CHN7_TPC1_VREF_SET_LSB)
#define CHN7_TPC1_VREF_SET_SET(x)                                              (((0 | (x)) << CHN7_TPC1_VREF_SET_LSB) & CHN7_TPC1_VREF_SET_MASK)
#define CHN7_TPC1_VREF_SET_RESET                                               0x1
#define CHN7_TPC1_ATB_SEL_LSB                                                  14
#define CHN7_TPC1_ATB_SEL_MSB                                                  17
#define CHN7_TPC1_ATB_SEL_MASK                                                 0x3c000
#define CHN7_TPC1_ATB_SEL_GET(x)                                               (((x) & CHN7_TPC1_ATB_SEL_MASK) >> CHN7_TPC1_ATB_SEL_LSB)
#define CHN7_TPC1_ATB_SEL_SET(x)                                               (((0 | (x)) << CHN7_TPC1_ATB_SEL_LSB) & CHN7_TPC1_ATB_SEL_MASK)
#define CHN7_TPC1_ATB_SEL_RESET                                                0x0
#define CHN7_TPC1_EN_XPDET_LSB                                                 13
#define CHN7_TPC1_EN_XPDET_MSB                                                 13
#define CHN7_TPC1_EN_XPDET_MASK                                                0x2000
#define CHN7_TPC1_EN_XPDET_GET(x)                                              (((x) & CHN7_TPC1_EN_XPDET_MASK) >> CHN7_TPC1_EN_XPDET_LSB)
#define CHN7_TPC1_EN_XPDET_SET(x)                                              (((0 | (x)) << CHN7_TPC1_EN_XPDET_LSB) & CHN7_TPC1_EN_XPDET_MASK)
#define CHN7_TPC1_EN_XPDET_RESET                                               0x0
#define CHN7_TPC1_RESERVED_0_LSB                                               8
#define CHN7_TPC1_RESERVED_0_MSB                                               12
#define CHN7_TPC1_RESERVED_0_MASK                                              0x1f00
#define CHN7_TPC1_RESERVED_0_GET(x)                                            (((x) & CHN7_TPC1_RESERVED_0_MASK) >> CHN7_TPC1_RESERVED_0_LSB)
#define CHN7_TPC1_RESERVED_0_SET(x)                                            (((0 | (x)) << CHN7_TPC1_RESERVED_0_LSB) & CHN7_TPC1_RESERVED_0_MASK)
#define CHN7_TPC1_RESERVED_0_RESET                                             0x0
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_LSB                                    6
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_MSB                                    7
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_MASK                                   0xc0
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_GET(x)                                 (((x) & CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_MASK) >> CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_LSB)
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_SET(x)                                 (((0 | (x)) << CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_LSB) & CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_MASK)
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_2G_RESET                                  0x3
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_LSB                                    4
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_MSB                                    5
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_MASK                                   0x30
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_GET(x)                                 (((x) & CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_MASK) >> CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_LSB)
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_SET(x)                                 (((0 | (x)) << CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_LSB) & CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_MASK)
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_2G_RESET                                  0x3
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_LSB                                    2
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_MSB                                    3
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_MASK                                   0xc
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_GET(x)                                 (((x) & CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_MASK) >> CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_LSB)
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_SET(x)                                 (((0 | (x)) << CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_LSB) & CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_MASK)
#define CHN7_TPC1_SQ_GAIN_TIA_HIGAIN_5G_RESET                                  0x1
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_LSB                                    0
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_MSB                                    1
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_MASK                                   0x3
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_GET(x)                                 (((x) & CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_MASK) >> CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_LSB)
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_SET(x)                                 (((0 | (x)) << CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_LSB) & CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_MASK)
#define CHN7_TPC1_SQ_GAIN_TIA_LOGAIN_5G_RESET                                  0x1
#define CHN7_TPC1_ADDRESS                                                      (0x0 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC1_RSTMASK                                                      0xffffffff
#define CHN7_TPC1_RESET                                                        0x2c400f5

// 0x4 (CHN7_TPC2)
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_LSB                                       29
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_MSB                                       31
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_MASK                                      0xe0000000
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_GET(x)                                    (((x) & CHN7_TPC2_TIA_HIGAIN_CTRL_2G_MASK) >> CHN7_TPC2_TIA_HIGAIN_CTRL_2G_LSB)
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_SET(x)                                    (((0 | (x)) << CHN7_TPC2_TIA_HIGAIN_CTRL_2G_LSB) & CHN7_TPC2_TIA_HIGAIN_CTRL_2G_MASK)
#define CHN7_TPC2_TIA_HIGAIN_CTRL_2G_RESET                                     0x4
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_LSB                              27
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_MSB                              28
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_MASK                             0x18000000
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_GET(x)                           (((x) & CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_MASK) >> CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_LSB)
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_SET(x)                           (((0 | (x)) << CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_LSB) & CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_MASK)
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_HIGAIN_2G_RESET                            0x1
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_LSB                                  20
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_MSB                                  26
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_MASK                                 0x7f00000
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_GET(x)                               (((x) & CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_MASK) >> CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_LSB)
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_SET(x)                               (((0 | (x)) << CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_LSB) & CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_MASK)
#define CHN7_TPC2_DCOC_DAC1_TIA_HIGAIN_2G_RESET                                0x40
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_LSB                                  15
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_MSB                                  19
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_MASK                                 0xf8000
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_GET(x)                               (((x) & CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_MASK) >> CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_LSB)
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_SET(x)                               (((0 | (x)) << CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_LSB) & CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_MASK)
#define CHN7_TPC2_DCOC_DAC2_TIA_HIGAIN_2G_RESET                                0x10
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_LSB                              13
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_MSB                              14
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_MASK                             0x6000
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_GET(x)                           (((x) & CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_MASK) >> CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_LSB)
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_SET(x)                           (((0 | (x)) << CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_LSB) & CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_MASK)
#define CHN7_TPC2_LPF_GAIN_CTRL_TIA_LOGAIN_2G_RESET                            0x1
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_LSB                                  6
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_MSB                                  12
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_MASK                                 0x1fc0
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_GET(x)                               (((x) & CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_MASK) >> CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_LSB)
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_SET(x)                               (((0 | (x)) << CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_LSB) & CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_MASK)
#define CHN7_TPC2_DCOC_DAC1_TIA_LOGAIN_2G_RESET                                0x40
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_LSB                                  1
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_MSB                                  5
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_MASK                                 0x3e
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_GET(x)                               (((x) & CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_MASK) >> CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_LSB)
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_SET(x)                               (((0 | (x)) << CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_LSB) & CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_MASK)
#define CHN7_TPC2_DCOC_DAC2_TIA_LOGAIN_2G_RESET                                0x10
#define CHN7_TPC2_RESERVED_0_LSB                                               0
#define CHN7_TPC2_RESERVED_0_MSB                                               0
#define CHN7_TPC2_RESERVED_0_MASK                                              0x1
#define CHN7_TPC2_RESERVED_0_GET(x)                                            (((x) & CHN7_TPC2_RESERVED_0_MASK) >> CHN7_TPC2_RESERVED_0_LSB)
#define CHN7_TPC2_RESERVED_0_SET(x)                                            (((0 | (x)) << CHN7_TPC2_RESERVED_0_LSB) & CHN7_TPC2_RESERVED_0_MASK)
#define CHN7_TPC2_RESERVED_0_RESET                                             0x0
#define CHN7_TPC2_ADDRESS                                                      (0x4 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC2_RSTMASK                                                      0xffffffff
#define CHN7_TPC2_RESET                                                        0x8c083020

// 0x8 (CHN7_TPC3)
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_LSB                                       29
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_MSB                                       31
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_MASK                                      0xe0000000
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_GET(x)                                    (((x) & CHN7_TPC3_TIA_HIGAIN_CTRL_5G_MASK) >> CHN7_TPC3_TIA_HIGAIN_CTRL_5G_LSB)
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_SET(x)                                    (((0 | (x)) << CHN7_TPC3_TIA_HIGAIN_CTRL_5G_LSB) & CHN7_TPC3_TIA_HIGAIN_CTRL_5G_MASK)
#define CHN7_TPC3_TIA_HIGAIN_CTRL_5G_RESET                                     0x2
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_LSB                              27
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_MSB                              28
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_MASK                             0x18000000
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_GET(x)                           (((x) & CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_MASK) >> CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_LSB)
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_SET(x)                           (((0 | (x)) << CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_LSB) & CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_MASK)
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_HIGAIN_5G_RESET                            0x1
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_LSB                                  20
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_MSB                                  26
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_MASK                                 0x7f00000
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_GET(x)                               (((x) & CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_MASK) >> CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_LSB)
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_SET(x)                               (((0 | (x)) << CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_LSB) & CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_MASK)
#define CHN7_TPC3_DCOC_DAC1_TIA_HIGAIN_5G_RESET                                0x40
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_LSB                                  15
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_MSB                                  19
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_MASK                                 0xf8000
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_GET(x)                               (((x) & CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_MASK) >> CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_LSB)
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_SET(x)                               (((0 | (x)) << CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_LSB) & CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_MASK)
#define CHN7_TPC3_DCOC_DAC2_TIA_HIGAIN_5G_RESET                                0x10
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_LSB                              13
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_MSB                              14
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_MASK                             0x6000
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_GET(x)                           (((x) & CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_MASK) >> CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_LSB)
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_SET(x)                           (((0 | (x)) << CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_LSB) & CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_MASK)
#define CHN7_TPC3_LPF_GAIN_CTRL_TIA_LOGAIN_5G_RESET                            0x1
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_LSB                                  6
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_MSB                                  12
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_MASK                                 0x1fc0
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_GET(x)                               (((x) & CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_MASK) >> CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_LSB)
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_SET(x)                               (((0 | (x)) << CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_LSB) & CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_MASK)
#define CHN7_TPC3_DCOC_DAC1_TIA_LOGAIN_5G_RESET                                0x40
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_LSB                                  1
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_MSB                                  5
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_MASK                                 0x3e
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_GET(x)                               (((x) & CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_MASK) >> CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_LSB)
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_SET(x)                               (((0 | (x)) << CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_LSB) & CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_MASK)
#define CHN7_TPC3_DCOC_DAC2_TIA_LOGAIN_5G_RESET                                0x10
#define CHN7_TPC3_RESERVED_0_LSB                                               0
#define CHN7_TPC3_RESERVED_0_MSB                                               0
#define CHN7_TPC3_RESERVED_0_MASK                                              0x1
#define CHN7_TPC3_RESERVED_0_GET(x)                                            (((x) & CHN7_TPC3_RESERVED_0_MASK) >> CHN7_TPC3_RESERVED_0_LSB)
#define CHN7_TPC3_RESERVED_0_SET(x)                                            (((0 | (x)) << CHN7_TPC3_RESERVED_0_LSB) & CHN7_TPC3_RESERVED_0_MASK)
#define CHN7_TPC3_RESERVED_0_RESET                                             0x0
#define CHN7_TPC3_ADDRESS                                                      (0x8 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC3_RSTMASK                                                      0xffffffff
#define CHN7_TPC3_RESET                                                        0x4c083020

// 0xc (CHN7_TPC4)
#define CHN7_TPC4_IC_BIASN_CTRL_LSB                                            29
#define CHN7_TPC4_IC_BIASN_CTRL_MSB                                            31
#define CHN7_TPC4_IC_BIASN_CTRL_MASK                                           0xe0000000
#define CHN7_TPC4_IC_BIASN_CTRL_GET(x)                                         (((x) & CHN7_TPC4_IC_BIASN_CTRL_MASK) >> CHN7_TPC4_IC_BIASN_CTRL_LSB)
#define CHN7_TPC4_IC_BIASN_CTRL_SET(x)                                         (((0 | (x)) << CHN7_TPC4_IC_BIASN_CTRL_LSB) & CHN7_TPC4_IC_BIASN_CTRL_MASK)
#define CHN7_TPC4_IC_BIASN_CTRL_RESET                                          0x3
#define CHN7_TPC4_IC_BIASP_CTRL_LSB                                            26
#define CHN7_TPC4_IC_BIASP_CTRL_MSB                                            28
#define CHN7_TPC4_IC_BIASP_CTRL_MASK                                           0x1c000000
#define CHN7_TPC4_IC_BIASP_CTRL_GET(x)                                         (((x) & CHN7_TPC4_IC_BIASP_CTRL_MASK) >> CHN7_TPC4_IC_BIASP_CTRL_LSB)
#define CHN7_TPC4_IC_BIASP_CTRL_SET(x)                                         (((0 | (x)) << CHN7_TPC4_IC_BIASP_CTRL_LSB) & CHN7_TPC4_IC_BIASP_CTRL_MASK)
#define CHN7_TPC4_IC_BIASP_CTRL_RESET                                          0x3
#define CHN7_TPC4_IC_IDAC_CTRL_LSB                                             23
#define CHN7_TPC4_IC_IDAC_CTRL_MSB                                             25
#define CHN7_TPC4_IC_IDAC_CTRL_MASK                                            0x3800000
#define CHN7_TPC4_IC_IDAC_CTRL_GET(x)                                          (((x) & CHN7_TPC4_IC_IDAC_CTRL_MASK) >> CHN7_TPC4_IC_IDAC_CTRL_LSB)
#define CHN7_TPC4_IC_IDAC_CTRL_SET(x)                                          (((0 | (x)) << CHN7_TPC4_IC_IDAC_CTRL_LSB) & CHN7_TPC4_IC_IDAC_CTRL_MASK)
#define CHN7_TPC4_IC_IDAC_CTRL_RESET                                           0x3
#define CHN7_TPC4_IC_G_CTRL_LSB                                                20
#define CHN7_TPC4_IC_G_CTRL_MSB                                                22
#define CHN7_TPC4_IC_G_CTRL_MASK                                               0x700000
#define CHN7_TPC4_IC_G_CTRL_GET(x)                                             (((x) & CHN7_TPC4_IC_G_CTRL_MASK) >> CHN7_TPC4_IC_G_CTRL_LSB)
#define CHN7_TPC4_IC_G_CTRL_SET(x)                                             (((0 | (x)) << CHN7_TPC4_IC_G_CTRL_LSB) & CHN7_TPC4_IC_G_CTRL_MASK)
#define CHN7_TPC4_IC_G_CTRL_RESET                                              0x3
#define CHN7_TPC4_IC_LPF_CTRL_LSB                                              17
#define CHN7_TPC4_IC_LPF_CTRL_MSB                                              19
#define CHN7_TPC4_IC_LPF_CTRL_MASK                                             0xe0000
#define CHN7_TPC4_IC_LPF_CTRL_GET(x)                                           (((x) & CHN7_TPC4_IC_LPF_CTRL_MASK) >> CHN7_TPC4_IC_LPF_CTRL_LSB)
#define CHN7_TPC4_IC_LPF_CTRL_SET(x)                                           (((0 | (x)) << CHN7_TPC4_IC_LPF_CTRL_LSB) & CHN7_TPC4_IC_LPF_CTRL_MASK)
#define CHN7_TPC4_IC_LPF_CTRL_RESET                                            0x3
#define CHN7_TPC4_IC_REFGEN_CTRL_LSB                                           14
#define CHN7_TPC4_IC_REFGEN_CTRL_MSB                                           16
#define CHN7_TPC4_IC_REFGEN_CTRL_MASK                                          0x1c000
#define CHN7_TPC4_IC_REFGEN_CTRL_GET(x)                                        (((x) & CHN7_TPC4_IC_REFGEN_CTRL_MASK) >> CHN7_TPC4_IC_REFGEN_CTRL_LSB)
#define CHN7_TPC4_IC_REFGEN_CTRL_SET(x)                                        (((0 | (x)) << CHN7_TPC4_IC_REFGEN_CTRL_LSB) & CHN7_TPC4_IC_REFGEN_CTRL_MASK)
#define CHN7_TPC4_IC_REFGEN_CTRL_RESET                                         0x3
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_LSB                                        11
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_MSB                                        13
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_MASK                                       0x3800
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_GET(x)                                     (((x) & CHN7_TPC4_IC_VCMOUTGEN_CTRL_MASK) >> CHN7_TPC4_IC_VCMOUTGEN_CTRL_LSB)
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_SET(x)                                     (((0 | (x)) << CHN7_TPC4_IC_VCMOUTGEN_CTRL_LSB) & CHN7_TPC4_IC_VCMOUTGEN_CTRL_MASK)
#define CHN7_TPC4_IC_VCMOUTGEN_CTRL_RESET                                      0x3
#define CHN7_TPC4_IC_TIA_CTRL_LSB                                              8
#define CHN7_TPC4_IC_TIA_CTRL_MSB                                              10
#define CHN7_TPC4_IC_TIA_CTRL_MASK                                             0x700
#define CHN7_TPC4_IC_TIA_CTRL_GET(x)                                           (((x) & CHN7_TPC4_IC_TIA_CTRL_MASK) >> CHN7_TPC4_IC_TIA_CTRL_LSB)
#define CHN7_TPC4_IC_TIA_CTRL_SET(x)                                           (((0 | (x)) << CHN7_TPC4_IC_TIA_CTRL_LSB) & CHN7_TPC4_IC_TIA_CTRL_MASK)
#define CHN7_TPC4_IC_TIA_CTRL_RESET                                            0x3
#define CHN7_TPC4_IC_VDAC_CTRL_LSB                                             5
#define CHN7_TPC4_IC_VDAC_CTRL_MSB                                             7
#define CHN7_TPC4_IC_VDAC_CTRL_MASK                                            0xe0
#define CHN7_TPC4_IC_VDAC_CTRL_GET(x)                                          (((x) & CHN7_TPC4_IC_VDAC_CTRL_MASK) >> CHN7_TPC4_IC_VDAC_CTRL_LSB)
#define CHN7_TPC4_IC_VDAC_CTRL_SET(x)                                          (((0 | (x)) << CHN7_TPC4_IC_VDAC_CTRL_LSB) & CHN7_TPC4_IC_VDAC_CTRL_MASK)
#define CHN7_TPC4_IC_VDAC_CTRL_RESET                                           0x3
#define CHN7_TPC4_IC_ATB_CTRL_LSB                                              2
#define CHN7_TPC4_IC_ATB_CTRL_MSB                                              4
#define CHN7_TPC4_IC_ATB_CTRL_MASK                                             0x1c
#define CHN7_TPC4_IC_ATB_CTRL_GET(x)                                           (((x) & CHN7_TPC4_IC_ATB_CTRL_MASK) >> CHN7_TPC4_IC_ATB_CTRL_LSB)
#define CHN7_TPC4_IC_ATB_CTRL_SET(x)                                           (((0 | (x)) << CHN7_TPC4_IC_ATB_CTRL_LSB) & CHN7_TPC4_IC_ATB_CTRL_MASK)
#define CHN7_TPC4_IC_ATB_CTRL_RESET                                            0x0
#define CHN7_TPC4_RESERVED_0_LSB                                               0
#define CHN7_TPC4_RESERVED_0_MSB                                               1
#define CHN7_TPC4_RESERVED_0_MASK                                              0x3
#define CHN7_TPC4_RESERVED_0_GET(x)                                            (((x) & CHN7_TPC4_RESERVED_0_MASK) >> CHN7_TPC4_RESERVED_0_LSB)
#define CHN7_TPC4_RESERVED_0_SET(x)                                            (((0 | (x)) << CHN7_TPC4_RESERVED_0_LSB) & CHN7_TPC4_RESERVED_0_MASK)
#define CHN7_TPC4_RESERVED_0_RESET                                             0x0
#define CHN7_TPC4_ADDRESS                                                      (0xc + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC4_RSTMASK                                                      0xffffffff
#define CHN7_TPC4_RESET                                                        0x6db6db60

// 0x10 (CHN7_TPC5)
#define CHN7_TPC5_IC_SPARE_0_CTRL_LSB                                          29
#define CHN7_TPC5_IC_SPARE_0_CTRL_MSB                                          31
#define CHN7_TPC5_IC_SPARE_0_CTRL_MASK                                         0xe0000000
#define CHN7_TPC5_IC_SPARE_0_CTRL_GET(x)                                       (((x) & CHN7_TPC5_IC_SPARE_0_CTRL_MASK) >> CHN7_TPC5_IC_SPARE_0_CTRL_LSB)
#define CHN7_TPC5_IC_SPARE_0_CTRL_SET(x)                                       (((0 | (x)) << CHN7_TPC5_IC_SPARE_0_CTRL_LSB) & CHN7_TPC5_IC_SPARE_0_CTRL_MASK)
#define CHN7_TPC5_IC_SPARE_0_CTRL_RESET                                        0x0
#define CHN7_TPC5_IC_SPARE_1_CTRL_LSB                                          26
#define CHN7_TPC5_IC_SPARE_1_CTRL_MSB                                          28
#define CHN7_TPC5_IC_SPARE_1_CTRL_MASK                                         0x1c000000
#define CHN7_TPC5_IC_SPARE_1_CTRL_GET(x)                                       (((x) & CHN7_TPC5_IC_SPARE_1_CTRL_MASK) >> CHN7_TPC5_IC_SPARE_1_CTRL_LSB)
#define CHN7_TPC5_IC_SPARE_1_CTRL_SET(x)                                       (((0 | (x)) << CHN7_TPC5_IC_SPARE_1_CTRL_LSB) & CHN7_TPC5_IC_SPARE_1_CTRL_MASK)
#define CHN7_TPC5_IC_SPARE_1_CTRL_RESET                                        0x0
#define CHN7_TPC5_IR_REFGEN_CTRL_LSB                                           23
#define CHN7_TPC5_IR_REFGEN_CTRL_MSB                                           25
#define CHN7_TPC5_IR_REFGEN_CTRL_MASK                                          0x3800000
#define CHN7_TPC5_IR_REFGEN_CTRL_GET(x)                                        (((x) & CHN7_TPC5_IR_REFGEN_CTRL_MASK) >> CHN7_TPC5_IR_REFGEN_CTRL_LSB)
#define CHN7_TPC5_IR_REFGEN_CTRL_SET(x)                                        (((0 | (x)) << CHN7_TPC5_IR_REFGEN_CTRL_LSB) & CHN7_TPC5_IR_REFGEN_CTRL_MASK)
#define CHN7_TPC5_IR_REFGEN_CTRL_RESET                                         0x3
#define CHN7_TPC5_IR_TIA_CTRL_LSB                                              20
#define CHN7_TPC5_IR_TIA_CTRL_MSB                                              22
#define CHN7_TPC5_IR_TIA_CTRL_MASK                                             0x700000
#define CHN7_TPC5_IR_TIA_CTRL_GET(x)                                           (((x) & CHN7_TPC5_IR_TIA_CTRL_MASK) >> CHN7_TPC5_IR_TIA_CTRL_LSB)
#define CHN7_TPC5_IR_TIA_CTRL_SET(x)                                           (((0 | (x)) << CHN7_TPC5_IR_TIA_CTRL_LSB) & CHN7_TPC5_IR_TIA_CTRL_MASK)
#define CHN7_TPC5_IR_TIA_CTRL_RESET                                            0x3
#define CHN7_TPC5_IR_VDAC_CTRL_LSB                                             17
#define CHN7_TPC5_IR_VDAC_CTRL_MSB                                             19
#define CHN7_TPC5_IR_VDAC_CTRL_MASK                                            0xe0000
#define CHN7_TPC5_IR_VDAC_CTRL_GET(x)                                          (((x) & CHN7_TPC5_IR_VDAC_CTRL_MASK) >> CHN7_TPC5_IR_VDAC_CTRL_LSB)
#define CHN7_TPC5_IR_VDAC_CTRL_SET(x)                                          (((0 | (x)) << CHN7_TPC5_IR_VDAC_CTRL_LSB) & CHN7_TPC5_IR_VDAC_CTRL_MASK)
#define CHN7_TPC5_IR_VDAC_CTRL_RESET                                           0x1
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_LSB                                        14
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_MSB                                        16
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_MASK                                       0x1c000
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_GET(x)                                     (((x) & CHN7_TPC5_IR_VDAC_SINK_CTRL_MASK) >> CHN7_TPC5_IR_VDAC_SINK_CTRL_LSB)
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_SET(x)                                     (((0 | (x)) << CHN7_TPC5_IR_VDAC_SINK_CTRL_LSB) & CHN7_TPC5_IR_VDAC_SINK_CTRL_MASK)
#define CHN7_TPC5_IR_VDAC_SINK_CTRL_RESET                                      0x1
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_LSB                                        11
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_MSB                                        13
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_MASK                                       0x3800
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_GET(x)                                     (((x) & CHN7_TPC5_IR_VCMOUTGEN_CTRL_MASK) >> CHN7_TPC5_IR_VCMOUTGEN_CTRL_LSB)
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_SET(x)                                     (((0 | (x)) << CHN7_TPC5_IR_VCMOUTGEN_CTRL_LSB) & CHN7_TPC5_IR_VCMOUTGEN_CTRL_MASK)
#define CHN7_TPC5_IR_VCMOUTGEN_CTRL_RESET                                      0x3
#define CHN7_TPC5_IR_ATB_CTRL_LSB                                              8
#define CHN7_TPC5_IR_ATB_CTRL_MSB                                              10
#define CHN7_TPC5_IR_ATB_CTRL_MASK                                             0x700
#define CHN7_TPC5_IR_ATB_CTRL_GET(x)                                           (((x) & CHN7_TPC5_IR_ATB_CTRL_MASK) >> CHN7_TPC5_IR_ATB_CTRL_LSB)
#define CHN7_TPC5_IR_ATB_CTRL_SET(x)                                           (((0 | (x)) << CHN7_TPC5_IR_ATB_CTRL_LSB) & CHN7_TPC5_IR_ATB_CTRL_MASK)
#define CHN7_TPC5_IR_ATB_CTRL_RESET                                            0x0
#define CHN7_TPC5_IR_SPARE_0_CTRL_LSB                                          5
#define CHN7_TPC5_IR_SPARE_0_CTRL_MSB                                          7
#define CHN7_TPC5_IR_SPARE_0_CTRL_MASK                                         0xe0
#define CHN7_TPC5_IR_SPARE_0_CTRL_GET(x)                                       (((x) & CHN7_TPC5_IR_SPARE_0_CTRL_MASK) >> CHN7_TPC5_IR_SPARE_0_CTRL_LSB)
#define CHN7_TPC5_IR_SPARE_0_CTRL_SET(x)                                       (((0 | (x)) << CHN7_TPC5_IR_SPARE_0_CTRL_LSB) & CHN7_TPC5_IR_SPARE_0_CTRL_MASK)
#define CHN7_TPC5_IR_SPARE_0_CTRL_RESET                                        0x0
#define CHN7_TPC5_IR_SPARE_1_CTRL_LSB                                          2
#define CHN7_TPC5_IR_SPARE_1_CTRL_MSB                                          4
#define CHN7_TPC5_IR_SPARE_1_CTRL_MASK                                         0x1c
#define CHN7_TPC5_IR_SPARE_1_CTRL_GET(x)                                       (((x) & CHN7_TPC5_IR_SPARE_1_CTRL_MASK) >> CHN7_TPC5_IR_SPARE_1_CTRL_LSB)
#define CHN7_TPC5_IR_SPARE_1_CTRL_SET(x)                                       (((0 | (x)) << CHN7_TPC5_IR_SPARE_1_CTRL_LSB) & CHN7_TPC5_IR_SPARE_1_CTRL_MASK)
#define CHN7_TPC5_IR_SPARE_1_CTRL_RESET                                        0x0
#define CHN7_TPC5_RESERVED_0_LSB                                               0
#define CHN7_TPC5_RESERVED_0_MSB                                               1
#define CHN7_TPC5_RESERVED_0_MASK                                              0x3
#define CHN7_TPC5_RESERVED_0_GET(x)                                            (((x) & CHN7_TPC5_RESERVED_0_MASK) >> CHN7_TPC5_RESERVED_0_LSB)
#define CHN7_TPC5_RESERVED_0_SET(x)                                            (((0 | (x)) << CHN7_TPC5_RESERVED_0_LSB) & CHN7_TPC5_RESERVED_0_MASK)
#define CHN7_TPC5_RESERVED_0_RESET                                             0x0
#define CHN7_TPC5_ADDRESS                                                      (0x10 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC5_RSTMASK                                                      0xffffffff
#define CHN7_TPC5_RESET                                                        0x1b25800

// 0x14 (CHN7_TPC6)
#define CHN7_TPC6_T0_IPT_SEL_LSB                                               26
#define CHN7_TPC6_T0_IPT_SEL_MSB                                               31
#define CHN7_TPC6_T0_IPT_SEL_MASK                                              0xfc000000
#define CHN7_TPC6_T0_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC6_T0_IPT_SEL_MASK) >> CHN7_TPC6_T0_IPT_SEL_LSB)
#define CHN7_TPC6_T0_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC6_T0_IPT_SEL_LSB) & CHN7_TPC6_T0_IPT_SEL_MASK)
#define CHN7_TPC6_T0_IPT_SEL_RESET                                             0x0
#define CHN7_TPC6_T0_IC_SEL_LSB                                                20
#define CHN7_TPC6_T0_IC_SEL_MSB                                                25
#define CHN7_TPC6_T0_IC_SEL_MASK                                               0x3f00000
#define CHN7_TPC6_T0_IC_SEL_GET(x)                                             (((x) & CHN7_TPC6_T0_IC_SEL_MASK) >> CHN7_TPC6_T0_IC_SEL_LSB)
#define CHN7_TPC6_T0_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC6_T0_IC_SEL_LSB) & CHN7_TPC6_T0_IC_SEL_MASK)
#define CHN7_TPC6_T0_IC_SEL_RESET                                              0x18
#define CHN7_TPC6_T0_IC_SINK_SEL_LSB                                           18
#define CHN7_TPC6_T0_IC_SINK_SEL_MSB                                           19
#define CHN7_TPC6_T0_IC_SINK_SEL_MASK                                          0xc0000
#define CHN7_TPC6_T0_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC6_T0_IC_SINK_SEL_MASK) >> CHN7_TPC6_T0_IC_SINK_SEL_LSB)
#define CHN7_TPC6_T0_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC6_T0_IC_SINK_SEL_LSB) & CHN7_TPC6_T0_IC_SINK_SEL_MASK)
#define CHN7_TPC6_T0_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC6_T0_IPT_SINK_SEL_LSB                                          17
#define CHN7_TPC6_T0_IPT_SINK_SEL_MSB                                          17
#define CHN7_TPC6_T0_IPT_SINK_SEL_MASK                                         0x20000
#define CHN7_TPC6_T0_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC6_T0_IPT_SINK_SEL_MASK) >> CHN7_TPC6_T0_IPT_SINK_SEL_LSB)
#define CHN7_TPC6_T0_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC6_T0_IPT_SINK_SEL_LSB) & CHN7_TPC6_T0_IPT_SINK_SEL_MASK)
#define CHN7_TPC6_T0_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC6_T0_IC40_SEL_LSB                                              16
#define CHN7_TPC6_T0_IC40_SEL_MSB                                              16
#define CHN7_TPC6_T0_IC40_SEL_MASK                                             0x10000
#define CHN7_TPC6_T0_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC6_T0_IC40_SEL_MASK) >> CHN7_TPC6_T0_IC40_SEL_LSB)
#define CHN7_TPC6_T0_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC6_T0_IC40_SEL_LSB) & CHN7_TPC6_T0_IC40_SEL_MASK)
#define CHN7_TPC6_T0_IC40_SEL_RESET                                            0x0
#define CHN7_TPC6_T1_IPT_SEL_LSB                                               10
#define CHN7_TPC6_T1_IPT_SEL_MSB                                               15
#define CHN7_TPC6_T1_IPT_SEL_MASK                                              0xfc00
#define CHN7_TPC6_T1_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC6_T1_IPT_SEL_MASK) >> CHN7_TPC6_T1_IPT_SEL_LSB)
#define CHN7_TPC6_T1_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC6_T1_IPT_SEL_LSB) & CHN7_TPC6_T1_IPT_SEL_MASK)
#define CHN7_TPC6_T1_IPT_SEL_RESET                                             0x0
#define CHN7_TPC6_T1_IC_SEL_LSB                                                4
#define CHN7_TPC6_T1_IC_SEL_MSB                                                9
#define CHN7_TPC6_T1_IC_SEL_MASK                                               0x3f0
#define CHN7_TPC6_T1_IC_SEL_GET(x)                                             (((x) & CHN7_TPC6_T1_IC_SEL_MASK) >> CHN7_TPC6_T1_IC_SEL_LSB)
#define CHN7_TPC6_T1_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC6_T1_IC_SEL_LSB) & CHN7_TPC6_T1_IC_SEL_MASK)
#define CHN7_TPC6_T1_IC_SEL_RESET                                              0x18
#define CHN7_TPC6_T1_IC_SINK_SEL_LSB                                           2
#define CHN7_TPC6_T1_IC_SINK_SEL_MSB                                           3
#define CHN7_TPC6_T1_IC_SINK_SEL_MASK                                          0xc
#define CHN7_TPC6_T1_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC6_T1_IC_SINK_SEL_MASK) >> CHN7_TPC6_T1_IC_SINK_SEL_LSB)
#define CHN7_TPC6_T1_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC6_T1_IC_SINK_SEL_LSB) & CHN7_TPC6_T1_IC_SINK_SEL_MASK)
#define CHN7_TPC6_T1_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC6_T1_IPT_SINK_SEL_LSB                                          1
#define CHN7_TPC6_T1_IPT_SINK_SEL_MSB                                          1
#define CHN7_TPC6_T1_IPT_SINK_SEL_MASK                                         0x2
#define CHN7_TPC6_T1_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC6_T1_IPT_SINK_SEL_MASK) >> CHN7_TPC6_T1_IPT_SINK_SEL_LSB)
#define CHN7_TPC6_T1_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC6_T1_IPT_SINK_SEL_LSB) & CHN7_TPC6_T1_IPT_SINK_SEL_MASK)
#define CHN7_TPC6_T1_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC6_T1_IC40_SEL_LSB                                              0
#define CHN7_TPC6_T1_IC40_SEL_MSB                                              0
#define CHN7_TPC6_T1_IC40_SEL_MASK                                             0x1
#define CHN7_TPC6_T1_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC6_T1_IC40_SEL_MASK) >> CHN7_TPC6_T1_IC40_SEL_LSB)
#define CHN7_TPC6_T1_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC6_T1_IC40_SEL_LSB) & CHN7_TPC6_T1_IC40_SEL_MASK)
#define CHN7_TPC6_T1_IC40_SEL_RESET                                            0x0
#define CHN7_TPC6_ADDRESS                                                      (0x14 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC6_RSTMASK                                                      0xffffffff
#define CHN7_TPC6_RESET                                                        0x18c018c

// 0x18 (CHN7_TPC7)
#define CHN7_TPC7_T2_IPT_SEL_LSB                                               26
#define CHN7_TPC7_T2_IPT_SEL_MSB                                               31
#define CHN7_TPC7_T2_IPT_SEL_MASK                                              0xfc000000
#define CHN7_TPC7_T2_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC7_T2_IPT_SEL_MASK) >> CHN7_TPC7_T2_IPT_SEL_LSB)
#define CHN7_TPC7_T2_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC7_T2_IPT_SEL_LSB) & CHN7_TPC7_T2_IPT_SEL_MASK)
#define CHN7_TPC7_T2_IPT_SEL_RESET                                             0x0
#define CHN7_TPC7_T2_IC_SEL_LSB                                                20
#define CHN7_TPC7_T2_IC_SEL_MSB                                                25
#define CHN7_TPC7_T2_IC_SEL_MASK                                               0x3f00000
#define CHN7_TPC7_T2_IC_SEL_GET(x)                                             (((x) & CHN7_TPC7_T2_IC_SEL_MASK) >> CHN7_TPC7_T2_IC_SEL_LSB)
#define CHN7_TPC7_T2_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC7_T2_IC_SEL_LSB) & CHN7_TPC7_T2_IC_SEL_MASK)
#define CHN7_TPC7_T2_IC_SEL_RESET                                              0x18
#define CHN7_TPC7_T2_IC_SINK_SEL_LSB                                           18
#define CHN7_TPC7_T2_IC_SINK_SEL_MSB                                           19
#define CHN7_TPC7_T2_IC_SINK_SEL_MASK                                          0xc0000
#define CHN7_TPC7_T2_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC7_T2_IC_SINK_SEL_MASK) >> CHN7_TPC7_T2_IC_SINK_SEL_LSB)
#define CHN7_TPC7_T2_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC7_T2_IC_SINK_SEL_LSB) & CHN7_TPC7_T2_IC_SINK_SEL_MASK)
#define CHN7_TPC7_T2_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC7_T2_IPT_SINK_SEL_LSB                                          17
#define CHN7_TPC7_T2_IPT_SINK_SEL_MSB                                          17
#define CHN7_TPC7_T2_IPT_SINK_SEL_MASK                                         0x20000
#define CHN7_TPC7_T2_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC7_T2_IPT_SINK_SEL_MASK) >> CHN7_TPC7_T2_IPT_SINK_SEL_LSB)
#define CHN7_TPC7_T2_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC7_T2_IPT_SINK_SEL_LSB) & CHN7_TPC7_T2_IPT_SINK_SEL_MASK)
#define CHN7_TPC7_T2_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC7_T2_IC40_SEL_LSB                                              16
#define CHN7_TPC7_T2_IC40_SEL_MSB                                              16
#define CHN7_TPC7_T2_IC40_SEL_MASK                                             0x10000
#define CHN7_TPC7_T2_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC7_T2_IC40_SEL_MASK) >> CHN7_TPC7_T2_IC40_SEL_LSB)
#define CHN7_TPC7_T2_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC7_T2_IC40_SEL_LSB) & CHN7_TPC7_T2_IC40_SEL_MASK)
#define CHN7_TPC7_T2_IC40_SEL_RESET                                            0x0
#define CHN7_TPC7_T3_IPT_SEL_LSB                                               10
#define CHN7_TPC7_T3_IPT_SEL_MSB                                               15
#define CHN7_TPC7_T3_IPT_SEL_MASK                                              0xfc00
#define CHN7_TPC7_T3_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC7_T3_IPT_SEL_MASK) >> CHN7_TPC7_T3_IPT_SEL_LSB)
#define CHN7_TPC7_T3_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC7_T3_IPT_SEL_LSB) & CHN7_TPC7_T3_IPT_SEL_MASK)
#define CHN7_TPC7_T3_IPT_SEL_RESET                                             0x0
#define CHN7_TPC7_T3_IC_SEL_LSB                                                4
#define CHN7_TPC7_T3_IC_SEL_MSB                                                9
#define CHN7_TPC7_T3_IC_SEL_MASK                                               0x3f0
#define CHN7_TPC7_T3_IC_SEL_GET(x)                                             (((x) & CHN7_TPC7_T3_IC_SEL_MASK) >> CHN7_TPC7_T3_IC_SEL_LSB)
#define CHN7_TPC7_T3_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC7_T3_IC_SEL_LSB) & CHN7_TPC7_T3_IC_SEL_MASK)
#define CHN7_TPC7_T3_IC_SEL_RESET                                              0x18
#define CHN7_TPC7_T3_IC_SINK_SEL_LSB                                           2
#define CHN7_TPC7_T3_IC_SINK_SEL_MSB                                           3
#define CHN7_TPC7_T3_IC_SINK_SEL_MASK                                          0xc
#define CHN7_TPC7_T3_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC7_T3_IC_SINK_SEL_MASK) >> CHN7_TPC7_T3_IC_SINK_SEL_LSB)
#define CHN7_TPC7_T3_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC7_T3_IC_SINK_SEL_LSB) & CHN7_TPC7_T3_IC_SINK_SEL_MASK)
#define CHN7_TPC7_T3_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC7_T3_IPT_SINK_SEL_LSB                                          1
#define CHN7_TPC7_T3_IPT_SINK_SEL_MSB                                          1
#define CHN7_TPC7_T3_IPT_SINK_SEL_MASK                                         0x2
#define CHN7_TPC7_T3_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC7_T3_IPT_SINK_SEL_MASK) >> CHN7_TPC7_T3_IPT_SINK_SEL_LSB)
#define CHN7_TPC7_T3_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC7_T3_IPT_SINK_SEL_LSB) & CHN7_TPC7_T3_IPT_SINK_SEL_MASK)
#define CHN7_TPC7_T3_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC7_T3_IC40_SEL_LSB                                              0
#define CHN7_TPC7_T3_IC40_SEL_MSB                                              0
#define CHN7_TPC7_T3_IC40_SEL_MASK                                             0x1
#define CHN7_TPC7_T3_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC7_T3_IC40_SEL_MASK) >> CHN7_TPC7_T3_IC40_SEL_LSB)
#define CHN7_TPC7_T3_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC7_T3_IC40_SEL_LSB) & CHN7_TPC7_T3_IC40_SEL_MASK)
#define CHN7_TPC7_T3_IC40_SEL_RESET                                            0x0
#define CHN7_TPC7_ADDRESS                                                      (0x18 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC7_RSTMASK                                                      0xffffffff
#define CHN7_TPC7_RESET                                                        0x18c018c

// 0x1c (CHN7_TPC8)
#define CHN7_TPC8_T4_IPT_SEL_LSB                                               26
#define CHN7_TPC8_T4_IPT_SEL_MSB                                               31
#define CHN7_TPC8_T4_IPT_SEL_MASK                                              0xfc000000
#define CHN7_TPC8_T4_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC8_T4_IPT_SEL_MASK) >> CHN7_TPC8_T4_IPT_SEL_LSB)
#define CHN7_TPC8_T4_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC8_T4_IPT_SEL_LSB) & CHN7_TPC8_T4_IPT_SEL_MASK)
#define CHN7_TPC8_T4_IPT_SEL_RESET                                             0x0
#define CHN7_TPC8_T4_IC_SEL_LSB                                                20
#define CHN7_TPC8_T4_IC_SEL_MSB                                                25
#define CHN7_TPC8_T4_IC_SEL_MASK                                               0x3f00000
#define CHN7_TPC8_T4_IC_SEL_GET(x)                                             (((x) & CHN7_TPC8_T4_IC_SEL_MASK) >> CHN7_TPC8_T4_IC_SEL_LSB)
#define CHN7_TPC8_T4_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC8_T4_IC_SEL_LSB) & CHN7_TPC8_T4_IC_SEL_MASK)
#define CHN7_TPC8_T4_IC_SEL_RESET                                              0x18
#define CHN7_TPC8_T4_IC_SINK_SEL_LSB                                           18
#define CHN7_TPC8_T4_IC_SINK_SEL_MSB                                           19
#define CHN7_TPC8_T4_IC_SINK_SEL_MASK                                          0xc0000
#define CHN7_TPC8_T4_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC8_T4_IC_SINK_SEL_MASK) >> CHN7_TPC8_T4_IC_SINK_SEL_LSB)
#define CHN7_TPC8_T4_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC8_T4_IC_SINK_SEL_LSB) & CHN7_TPC8_T4_IC_SINK_SEL_MASK)
#define CHN7_TPC8_T4_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC8_T4_IPT_SINK_SEL_LSB                                          17
#define CHN7_TPC8_T4_IPT_SINK_SEL_MSB                                          17
#define CHN7_TPC8_T4_IPT_SINK_SEL_MASK                                         0x20000
#define CHN7_TPC8_T4_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC8_T4_IPT_SINK_SEL_MASK) >> CHN7_TPC8_T4_IPT_SINK_SEL_LSB)
#define CHN7_TPC8_T4_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC8_T4_IPT_SINK_SEL_LSB) & CHN7_TPC8_T4_IPT_SINK_SEL_MASK)
#define CHN7_TPC8_T4_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC8_T4_IC40_SEL_LSB                                              16
#define CHN7_TPC8_T4_IC40_SEL_MSB                                              16
#define CHN7_TPC8_T4_IC40_SEL_MASK                                             0x10000
#define CHN7_TPC8_T4_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC8_T4_IC40_SEL_MASK) >> CHN7_TPC8_T4_IC40_SEL_LSB)
#define CHN7_TPC8_T4_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC8_T4_IC40_SEL_LSB) & CHN7_TPC8_T4_IC40_SEL_MASK)
#define CHN7_TPC8_T4_IC40_SEL_RESET                                            0x0
#define CHN7_TPC8_T5_IPT_SEL_LSB                                               10
#define CHN7_TPC8_T5_IPT_SEL_MSB                                               15
#define CHN7_TPC8_T5_IPT_SEL_MASK                                              0xfc00
#define CHN7_TPC8_T5_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC8_T5_IPT_SEL_MASK) >> CHN7_TPC8_T5_IPT_SEL_LSB)
#define CHN7_TPC8_T5_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC8_T5_IPT_SEL_LSB) & CHN7_TPC8_T5_IPT_SEL_MASK)
#define CHN7_TPC8_T5_IPT_SEL_RESET                                             0x0
#define CHN7_TPC8_T5_IC_SEL_LSB                                                4
#define CHN7_TPC8_T5_IC_SEL_MSB                                                9
#define CHN7_TPC8_T5_IC_SEL_MASK                                               0x3f0
#define CHN7_TPC8_T5_IC_SEL_GET(x)                                             (((x) & CHN7_TPC8_T5_IC_SEL_MASK) >> CHN7_TPC8_T5_IC_SEL_LSB)
#define CHN7_TPC8_T5_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC8_T5_IC_SEL_LSB) & CHN7_TPC8_T5_IC_SEL_MASK)
#define CHN7_TPC8_T5_IC_SEL_RESET                                              0x18
#define CHN7_TPC8_T5_IC_SINK_SEL_LSB                                           2
#define CHN7_TPC8_T5_IC_SINK_SEL_MSB                                           3
#define CHN7_TPC8_T5_IC_SINK_SEL_MASK                                          0xc
#define CHN7_TPC8_T5_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC8_T5_IC_SINK_SEL_MASK) >> CHN7_TPC8_T5_IC_SINK_SEL_LSB)
#define CHN7_TPC8_T5_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC8_T5_IC_SINK_SEL_LSB) & CHN7_TPC8_T5_IC_SINK_SEL_MASK)
#define CHN7_TPC8_T5_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC8_T5_IPT_SINK_SEL_LSB                                          1
#define CHN7_TPC8_T5_IPT_SINK_SEL_MSB                                          1
#define CHN7_TPC8_T5_IPT_SINK_SEL_MASK                                         0x2
#define CHN7_TPC8_T5_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC8_T5_IPT_SINK_SEL_MASK) >> CHN7_TPC8_T5_IPT_SINK_SEL_LSB)
#define CHN7_TPC8_T5_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC8_T5_IPT_SINK_SEL_LSB) & CHN7_TPC8_T5_IPT_SINK_SEL_MASK)
#define CHN7_TPC8_T5_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC8_T5_IC40_SEL_LSB                                              0
#define CHN7_TPC8_T5_IC40_SEL_MSB                                              0
#define CHN7_TPC8_T5_IC40_SEL_MASK                                             0x1
#define CHN7_TPC8_T5_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC8_T5_IC40_SEL_MASK) >> CHN7_TPC8_T5_IC40_SEL_LSB)
#define CHN7_TPC8_T5_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC8_T5_IC40_SEL_LSB) & CHN7_TPC8_T5_IC40_SEL_MASK)
#define CHN7_TPC8_T5_IC40_SEL_RESET                                            0x0
#define CHN7_TPC8_ADDRESS                                                      (0x1c + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC8_RSTMASK                                                      0xffffffff
#define CHN7_TPC8_RESET                                                        0x18c018c

// 0x20 (CHN7_TPC9)
#define CHN7_TPC9_T6_IPT_SEL_LSB                                               26
#define CHN7_TPC9_T6_IPT_SEL_MSB                                               31
#define CHN7_TPC9_T6_IPT_SEL_MASK                                              0xfc000000
#define CHN7_TPC9_T6_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC9_T6_IPT_SEL_MASK) >> CHN7_TPC9_T6_IPT_SEL_LSB)
#define CHN7_TPC9_T6_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC9_T6_IPT_SEL_LSB) & CHN7_TPC9_T6_IPT_SEL_MASK)
#define CHN7_TPC9_T6_IPT_SEL_RESET                                             0x0
#define CHN7_TPC9_T6_IC_SEL_LSB                                                20
#define CHN7_TPC9_T6_IC_SEL_MSB                                                25
#define CHN7_TPC9_T6_IC_SEL_MASK                                               0x3f00000
#define CHN7_TPC9_T6_IC_SEL_GET(x)                                             (((x) & CHN7_TPC9_T6_IC_SEL_MASK) >> CHN7_TPC9_T6_IC_SEL_LSB)
#define CHN7_TPC9_T6_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC9_T6_IC_SEL_LSB) & CHN7_TPC9_T6_IC_SEL_MASK)
#define CHN7_TPC9_T6_IC_SEL_RESET                                              0x18
#define CHN7_TPC9_T6_IC_SINK_SEL_LSB                                           18
#define CHN7_TPC9_T6_IC_SINK_SEL_MSB                                           19
#define CHN7_TPC9_T6_IC_SINK_SEL_MASK                                          0xc0000
#define CHN7_TPC9_T6_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC9_T6_IC_SINK_SEL_MASK) >> CHN7_TPC9_T6_IC_SINK_SEL_LSB)
#define CHN7_TPC9_T6_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC9_T6_IC_SINK_SEL_LSB) & CHN7_TPC9_T6_IC_SINK_SEL_MASK)
#define CHN7_TPC9_T6_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC9_T6_IPT_SINK_SEL_LSB                                          17
#define CHN7_TPC9_T6_IPT_SINK_SEL_MSB                                          17
#define CHN7_TPC9_T6_IPT_SINK_SEL_MASK                                         0x20000
#define CHN7_TPC9_T6_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC9_T6_IPT_SINK_SEL_MASK) >> CHN7_TPC9_T6_IPT_SINK_SEL_LSB)
#define CHN7_TPC9_T6_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC9_T6_IPT_SINK_SEL_LSB) & CHN7_TPC9_T6_IPT_SINK_SEL_MASK)
#define CHN7_TPC9_T6_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC9_T6_IC40_SEL_LSB                                              16
#define CHN7_TPC9_T6_IC40_SEL_MSB                                              16
#define CHN7_TPC9_T6_IC40_SEL_MASK                                             0x10000
#define CHN7_TPC9_T6_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC9_T6_IC40_SEL_MASK) >> CHN7_TPC9_T6_IC40_SEL_LSB)
#define CHN7_TPC9_T6_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC9_T6_IC40_SEL_LSB) & CHN7_TPC9_T6_IC40_SEL_MASK)
#define CHN7_TPC9_T6_IC40_SEL_RESET                                            0x0
#define CHN7_TPC9_T7_IPT_SEL_LSB                                               10
#define CHN7_TPC9_T7_IPT_SEL_MSB                                               15
#define CHN7_TPC9_T7_IPT_SEL_MASK                                              0xfc00
#define CHN7_TPC9_T7_IPT_SEL_GET(x)                                            (((x) & CHN7_TPC9_T7_IPT_SEL_MASK) >> CHN7_TPC9_T7_IPT_SEL_LSB)
#define CHN7_TPC9_T7_IPT_SEL_SET(x)                                            (((0 | (x)) << CHN7_TPC9_T7_IPT_SEL_LSB) & CHN7_TPC9_T7_IPT_SEL_MASK)
#define CHN7_TPC9_T7_IPT_SEL_RESET                                             0x0
#define CHN7_TPC9_T7_IC_SEL_LSB                                                4
#define CHN7_TPC9_T7_IC_SEL_MSB                                                9
#define CHN7_TPC9_T7_IC_SEL_MASK                                               0x3f0
#define CHN7_TPC9_T7_IC_SEL_GET(x)                                             (((x) & CHN7_TPC9_T7_IC_SEL_MASK) >> CHN7_TPC9_T7_IC_SEL_LSB)
#define CHN7_TPC9_T7_IC_SEL_SET(x)                                             (((0 | (x)) << CHN7_TPC9_T7_IC_SEL_LSB) & CHN7_TPC9_T7_IC_SEL_MASK)
#define CHN7_TPC9_T7_IC_SEL_RESET                                              0x18
#define CHN7_TPC9_T7_IC_SINK_SEL_LSB                                           2
#define CHN7_TPC9_T7_IC_SINK_SEL_MSB                                           3
#define CHN7_TPC9_T7_IC_SINK_SEL_MASK                                          0xc
#define CHN7_TPC9_T7_IC_SINK_SEL_GET(x)                                        (((x) & CHN7_TPC9_T7_IC_SINK_SEL_MASK) >> CHN7_TPC9_T7_IC_SINK_SEL_LSB)
#define CHN7_TPC9_T7_IC_SINK_SEL_SET(x)                                        (((0 | (x)) << CHN7_TPC9_T7_IC_SINK_SEL_LSB) & CHN7_TPC9_T7_IC_SINK_SEL_MASK)
#define CHN7_TPC9_T7_IC_SINK_SEL_RESET                                         0x3
#define CHN7_TPC9_T7_IPT_SINK_SEL_LSB                                          1
#define CHN7_TPC9_T7_IPT_SINK_SEL_MSB                                          1
#define CHN7_TPC9_T7_IPT_SINK_SEL_MASK                                         0x2
#define CHN7_TPC9_T7_IPT_SINK_SEL_GET(x)                                       (((x) & CHN7_TPC9_T7_IPT_SINK_SEL_MASK) >> CHN7_TPC9_T7_IPT_SINK_SEL_LSB)
#define CHN7_TPC9_T7_IPT_SINK_SEL_SET(x)                                       (((0 | (x)) << CHN7_TPC9_T7_IPT_SINK_SEL_LSB) & CHN7_TPC9_T7_IPT_SINK_SEL_MASK)
#define CHN7_TPC9_T7_IPT_SINK_SEL_RESET                                        0x0
#define CHN7_TPC9_T7_IC40_SEL_LSB                                              0
#define CHN7_TPC9_T7_IC40_SEL_MSB                                              0
#define CHN7_TPC9_T7_IC40_SEL_MASK                                             0x1
#define CHN7_TPC9_T7_IC40_SEL_GET(x)                                           (((x) & CHN7_TPC9_T7_IC40_SEL_MASK) >> CHN7_TPC9_T7_IC40_SEL_LSB)
#define CHN7_TPC9_T7_IC40_SEL_SET(x)                                           (((0 | (x)) << CHN7_TPC9_T7_IC40_SEL_LSB) & CHN7_TPC9_T7_IC40_SEL_MASK)
#define CHN7_TPC9_T7_IC40_SEL_RESET                                            0x0
#define CHN7_TPC9_ADDRESS                                                      (0x20 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC9_RSTMASK                                                      0xffffffff
#define CHN7_TPC9_RESET                                                        0x18c018c

// 0x24 (CHN7_TPC10)
#define CHN7_TPC10_THERM_BND0_LSB                                              24
#define CHN7_TPC10_THERM_BND0_MSB                                              31
#define CHN7_TPC10_THERM_BND0_MASK                                             0xff000000
#define CHN7_TPC10_THERM_BND0_GET(x)                                           (((x) & CHN7_TPC10_THERM_BND0_MASK) >> CHN7_TPC10_THERM_BND0_LSB)
#define CHN7_TPC10_THERM_BND0_SET(x)                                           (((0 | (x)) << CHN7_TPC10_THERM_BND0_LSB) & CHN7_TPC10_THERM_BND0_MASK)
#define CHN7_TPC10_THERM_BND0_RESET                                            0x20
#define CHN7_TPC10_THERM_BND1_LSB                                              16
#define CHN7_TPC10_THERM_BND1_MSB                                              23
#define CHN7_TPC10_THERM_BND1_MASK                                             0xff0000
#define CHN7_TPC10_THERM_BND1_GET(x)                                           (((x) & CHN7_TPC10_THERM_BND1_MASK) >> CHN7_TPC10_THERM_BND1_LSB)
#define CHN7_TPC10_THERM_BND1_SET(x)                                           (((0 | (x)) << CHN7_TPC10_THERM_BND1_LSB) & CHN7_TPC10_THERM_BND1_MASK)
#define CHN7_TPC10_THERM_BND1_RESET                                            0x40
#define CHN7_TPC10_THERM_BND2_LSB                                              8
#define CHN7_TPC10_THERM_BND2_MSB                                              15
#define CHN7_TPC10_THERM_BND2_MASK                                             0xff00
#define CHN7_TPC10_THERM_BND2_GET(x)                                           (((x) & CHN7_TPC10_THERM_BND2_MASK) >> CHN7_TPC10_THERM_BND2_LSB)
#define CHN7_TPC10_THERM_BND2_SET(x)                                           (((0 | (x)) << CHN7_TPC10_THERM_BND2_LSB) & CHN7_TPC10_THERM_BND2_MASK)
#define CHN7_TPC10_THERM_BND2_RESET                                            0x60
#define CHN7_TPC10_THERM_BND3_LSB                                              0
#define CHN7_TPC10_THERM_BND3_MSB                                              7
#define CHN7_TPC10_THERM_BND3_MASK                                             0xff
#define CHN7_TPC10_THERM_BND3_GET(x)                                           (((x) & CHN7_TPC10_THERM_BND3_MASK) >> CHN7_TPC10_THERM_BND3_LSB)
#define CHN7_TPC10_THERM_BND3_SET(x)                                           (((0 | (x)) << CHN7_TPC10_THERM_BND3_LSB) & CHN7_TPC10_THERM_BND3_MASK)
#define CHN7_TPC10_THERM_BND3_RESET                                            0x80
#define CHN7_TPC10_ADDRESS                                                     (0x24 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC10_RSTMASK                                                     0xffffffff
#define CHN7_TPC10_RESET                                                       0x20406080

// 0x28 (CHN7_TPC11)
#define CHN7_TPC11_THERM_BND4_LSB                                              24
#define CHN7_TPC11_THERM_BND4_MSB                                              31
#define CHN7_TPC11_THERM_BND4_MASK                                             0xff000000
#define CHN7_TPC11_THERM_BND4_GET(x)                                           (((x) & CHN7_TPC11_THERM_BND4_MASK) >> CHN7_TPC11_THERM_BND4_LSB)
#define CHN7_TPC11_THERM_BND4_SET(x)                                           (((0 | (x)) << CHN7_TPC11_THERM_BND4_LSB) & CHN7_TPC11_THERM_BND4_MASK)
#define CHN7_TPC11_THERM_BND4_RESET                                            0xa0
#define CHN7_TPC11_THERM_BND5_LSB                                              16
#define CHN7_TPC11_THERM_BND5_MSB                                              23
#define CHN7_TPC11_THERM_BND5_MASK                                             0xff0000
#define CHN7_TPC11_THERM_BND5_GET(x)                                           (((x) & CHN7_TPC11_THERM_BND5_MASK) >> CHN7_TPC11_THERM_BND5_LSB)
#define CHN7_TPC11_THERM_BND5_SET(x)                                           (((0 | (x)) << CHN7_TPC11_THERM_BND5_LSB) & CHN7_TPC11_THERM_BND5_MASK)
#define CHN7_TPC11_THERM_BND5_RESET                                            0xc0
#define CHN7_TPC11_THERM_BND6_LSB                                              8
#define CHN7_TPC11_THERM_BND6_MSB                                              15
#define CHN7_TPC11_THERM_BND6_MASK                                             0xff00
#define CHN7_TPC11_THERM_BND6_GET(x)                                           (((x) & CHN7_TPC11_THERM_BND6_MASK) >> CHN7_TPC11_THERM_BND6_LSB)
#define CHN7_TPC11_THERM_BND6_SET(x)                                           (((0 | (x)) << CHN7_TPC11_THERM_BND6_LSB) & CHN7_TPC11_THERM_BND6_MASK)
#define CHN7_TPC11_THERM_BND6_RESET                                            0xe0
#define CHN7_TPC11_TPC_THERM_LOCAL_LSB                                         0
#define CHN7_TPC11_TPC_THERM_LOCAL_MSB                                         7
#define CHN7_TPC11_TPC_THERM_LOCAL_MASK                                        0xff
#define CHN7_TPC11_TPC_THERM_LOCAL_GET(x)                                      (((x) & CHN7_TPC11_TPC_THERM_LOCAL_MASK) >> CHN7_TPC11_TPC_THERM_LOCAL_LSB)
#define CHN7_TPC11_TPC_THERM_LOCAL_SET(x)                                      (((0 | (x)) << CHN7_TPC11_TPC_THERM_LOCAL_LSB) & CHN7_TPC11_TPC_THERM_LOCAL_MASK)
#define CHN7_TPC11_TPC_THERM_LOCAL_RESET                                       0x0
#define CHN7_TPC11_ADDRESS                                                     (0x28 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC11_RSTMASK                                                     0xffffffff
#define CHN7_TPC11_RESET                                                       0xa0c0e000

// 0x2c (CHN7_TPC12)
#define CHN7_TPC12_TPC_THERM_OVR_LSB                                           31
#define CHN7_TPC12_TPC_THERM_OVR_MSB                                           31
#define CHN7_TPC12_TPC_THERM_OVR_MASK                                          0x80000000
#define CHN7_TPC12_TPC_THERM_OVR_GET(x)                                        (((x) & CHN7_TPC12_TPC_THERM_OVR_MASK) >> CHN7_TPC12_TPC_THERM_OVR_LSB)
#define CHN7_TPC12_TPC_THERM_OVR_SET(x)                                        (((0 | (x)) << CHN7_TPC12_TPC_THERM_OVR_LSB) & CHN7_TPC12_TPC_THERM_OVR_MASK)
#define CHN7_TPC12_TPC_THERM_OVR_RESET                                         0x0
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_LSB                                30
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_MSB                                30
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_MASK                               0x40000000
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_GET(x)                             (((x) & CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_MASK) >> CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_LSB)
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_SET(x)                             (((0 | (x)) << CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_LSB) & CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_MASK)
#define CHN7_TPC12_TPC_TEMPSENSOR_FORCED_ON_RESET                              0x0
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_LSB                               29
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_MSB                               29
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_MASK                              0x20000000
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_GET(x)                            (((x) & CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_MASK) >> CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_LSB)
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_SET(x)                            (((0 | (x)) << CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_LSB) & CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_MASK)
#define CHN7_TPC12_TPC_VDD33SENSOR_FORCED_ON_RESET                             0x0
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_LSB                               28
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_MSB                               28
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_MASK                              0x10000000
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_GET(x)                            (((x) & CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_MASK) >> CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_LSB)
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_SET(x)                            (((0 | (x)) << CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_LSB) & CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_MASK)
#define CHN7_TPC12_TPC_VDD11SENSOR_FORCED_ON_RESET                             0x0
#define CHN7_TPC12_RESERVED_0_LSB                                              24
#define CHN7_TPC12_RESERVED_0_MSB                                              27
#define CHN7_TPC12_RESERVED_0_MASK                                             0xf000000
#define CHN7_TPC12_RESERVED_0_GET(x)                                           (((x) & CHN7_TPC12_RESERVED_0_MASK) >> CHN7_TPC12_RESERVED_0_LSB)
#define CHN7_TPC12_RESERVED_0_SET(x)                                           (((0 | (x)) << CHN7_TPC12_RESERVED_0_LSB) & CHN7_TPC12_RESERVED_0_MASK)
#define CHN7_TPC12_RESERVED_0_RESET                                            0x0
#define CHN7_TPC12_TPC_EXT_PDET_EN_LSB                                         23
#define CHN7_TPC12_TPC_EXT_PDET_EN_MSB                                         23
#define CHN7_TPC12_TPC_EXT_PDET_EN_MASK                                        0x800000
#define CHN7_TPC12_TPC_EXT_PDET_EN_GET(x)                                      (((x) & CHN7_TPC12_TPC_EXT_PDET_EN_MASK) >> CHN7_TPC12_TPC_EXT_PDET_EN_LSB)
#define CHN7_TPC12_TPC_EXT_PDET_EN_SET(x)                                      (((0 | (x)) << CHN7_TPC12_TPC_EXT_PDET_EN_LSB) & CHN7_TPC12_TPC_EXT_PDET_EN_MASK)
#define CHN7_TPC12_TPC_EXT_PDET_EN_RESET                                       0x0
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_LSB                                       20
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_MSB                                       22
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_MASK                                      0x700000
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_GET(x)                                    (((x) & CHN7_TPC12_TPC_EXT_PDET_ATTN_MASK) >> CHN7_TPC12_TPC_EXT_PDET_ATTN_LSB)
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_SET(x)                                    (((0 | (x)) << CHN7_TPC12_TPC_EXT_PDET_ATTN_LSB) & CHN7_TPC12_TPC_EXT_PDET_ATTN_MASK)
#define CHN7_TPC12_TPC_EXT_PDET_ATTN_RESET                                     0x0
#define CHN7_TPC12_TPC_R50_ADJ_LSB                                             17
#define CHN7_TPC12_TPC_R50_ADJ_MSB                                             19
#define CHN7_TPC12_TPC_R50_ADJ_MASK                                            0xe0000
#define CHN7_TPC12_TPC_R50_ADJ_GET(x)                                          (((x) & CHN7_TPC12_TPC_R50_ADJ_MASK) >> CHN7_TPC12_TPC_R50_ADJ_LSB)
#define CHN7_TPC12_TPC_R50_ADJ_SET(x)                                          (((0 | (x)) << CHN7_TPC12_TPC_R50_ADJ_LSB) & CHN7_TPC12_TPC_R50_ADJ_MASK)
#define CHN7_TPC12_TPC_R50_ADJ_RESET                                           0x3
#define CHN7_TPC12_TPC_ATTEN_OVR_LSB                                           16
#define CHN7_TPC12_TPC_ATTEN_OVR_MSB                                           16
#define CHN7_TPC12_TPC_ATTEN_OVR_MASK                                          0x10000
#define CHN7_TPC12_TPC_ATTEN_OVR_GET(x)                                        (((x) & CHN7_TPC12_TPC_ATTEN_OVR_MASK) >> CHN7_TPC12_TPC_ATTEN_OVR_LSB)
#define CHN7_TPC12_TPC_ATTEN_OVR_SET(x)                                        (((0 | (x)) << CHN7_TPC12_TPC_ATTEN_OVR_LSB) & CHN7_TPC12_TPC_ATTEN_OVR_MASK)
#define CHN7_TPC12_TPC_ATTEN_OVR_RESET                                         0x0
#define CHN7_TPC12_TPC_ATTEN_LOCAL_LSB                                         11
#define CHN7_TPC12_TPC_ATTEN_LOCAL_MSB                                         15
#define CHN7_TPC12_TPC_ATTEN_LOCAL_MASK                                        0xf800
#define CHN7_TPC12_TPC_ATTEN_LOCAL_GET(x)                                      (((x) & CHN7_TPC12_TPC_ATTEN_LOCAL_MASK) >> CHN7_TPC12_TPC_ATTEN_LOCAL_LSB)
#define CHN7_TPC12_TPC_ATTEN_LOCAL_SET(x)                                      (((0 | (x)) << CHN7_TPC12_TPC_ATTEN_LOCAL_LSB) & CHN7_TPC12_TPC_ATTEN_LOCAL_MASK)
#define CHN7_TPC12_TPC_ATTEN_LOCAL_RESET                                       0x0
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_LSB                                      9
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_MSB                                      10
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_MASK                                     0x600
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_GET(x)                                   (((x) & CHN7_TPC12_TPC_DCO_CAL_EN_OVR_MASK) >> CHN7_TPC12_TPC_DCO_CAL_EN_OVR_LSB)
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_SET(x)                                   (((0 | (x)) << CHN7_TPC12_TPC_DCO_CAL_EN_OVR_LSB) & CHN7_TPC12_TPC_DCO_CAL_EN_OVR_MASK)
#define CHN7_TPC12_TPC_DCO_CAL_EN_OVR_RESET                                    0x0
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_LSB                                 8
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_MSB                                 8
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_MASK                                0x100
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_GET(x)                              (((x) & CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_MASK) >> CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_LSB)
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_SET(x)                              (((0 | (x)) << CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_LSB) & CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_MASK)
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_2G_RESET                               0x0
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_LSB                                 7
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_MSB                                 7
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_MASK                                0x80
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_GET(x)                              (((x) & CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_MASK) >> CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_LSB)
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_SET(x)                              (((0 | (x)) << CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_LSB) & CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_MASK)
#define CHN7_TPC12_TPC_MAX_ATTN_DCO_CAL_5G_RESET                               0x0
#define CHN7_TPC12_TPC_SPARE_LSB                                               0
#define CHN7_TPC12_TPC_SPARE_MSB                                               6
#define CHN7_TPC12_TPC_SPARE_MASK                                              0x7f
#define CHN7_TPC12_TPC_SPARE_GET(x)                                            (((x) & CHN7_TPC12_TPC_SPARE_MASK) >> CHN7_TPC12_TPC_SPARE_LSB)
#define CHN7_TPC12_TPC_SPARE_SET(x)                                            (((0 | (x)) << CHN7_TPC12_TPC_SPARE_LSB) & CHN7_TPC12_TPC_SPARE_MASK)
#define CHN7_TPC12_TPC_SPARE_RESET                                             0x0
#define CHN7_TPC12_ADDRESS                                                     (0x2c + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC12_RSTMASK                                                     0xffffffff
#define CHN7_TPC12_RESET                                                       0x60000

// 0x30 (CHN7_TPC13)
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_LSB                                      31
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_MSB                                      31
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_MASK                                     0x80000000
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_GET(x)                                   (((x) & CHN7_TPC13_DPD_SHARE_PDET_PIN_MASK) >> CHN7_TPC13_DPD_SHARE_PDET_PIN_LSB)
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_SET(x)                                   (((0 | (x)) << CHN7_TPC13_DPD_SHARE_PDET_PIN_LSB) & CHN7_TPC13_DPD_SHARE_PDET_PIN_MASK)
#define CHN7_TPC13_DPD_SHARE_PDET_PIN_RESET                                    0x1
#define CHN7_TPC13_DPD_EN_OVR_LSB                                              29
#define CHN7_TPC13_DPD_EN_OVR_MSB                                              30
#define CHN7_TPC13_DPD_EN_OVR_MASK                                             0x60000000
#define CHN7_TPC13_DPD_EN_OVR_GET(x)                                           (((x) & CHN7_TPC13_DPD_EN_OVR_MASK) >> CHN7_TPC13_DPD_EN_OVR_LSB)
#define CHN7_TPC13_DPD_EN_OVR_SET(x)                                           (((0 | (x)) << CHN7_TPC13_DPD_EN_OVR_LSB) & CHN7_TPC13_DPD_EN_OVR_MASK)
#define CHN7_TPC13_DPD_EN_OVR_RESET                                            0x0
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_LSB                                      28
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_MSB                                      28
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_MASK                                     0x10000000
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_GET(x)                                   (((x) & CHN7_TPC13_DPD_CTRL_TPC_ATTEN_MASK) >> CHN7_TPC13_DPD_CTRL_TPC_ATTEN_LSB)
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_SET(x)                                   (((0 | (x)) << CHN7_TPC13_DPD_CTRL_TPC_ATTEN_LSB) & CHN7_TPC13_DPD_CTRL_TPC_ATTEN_MASK)
#define CHN7_TPC13_DPD_CTRL_TPC_ATTEN_RESET                                    0x1
#define CHN7_TPC13_DPD_ATTN_2G_LSB                                             24
#define CHN7_TPC13_DPD_ATTN_2G_MSB                                             27
#define CHN7_TPC13_DPD_ATTN_2G_MASK                                            0xf000000
#define CHN7_TPC13_DPD_ATTN_2G_GET(x)                                          (((x) & CHN7_TPC13_DPD_ATTN_2G_MASK) >> CHN7_TPC13_DPD_ATTN_2G_LSB)
#define CHN7_TPC13_DPD_ATTN_2G_SET(x)                                          (((0 | (x)) << CHN7_TPC13_DPD_ATTN_2G_LSB) & CHN7_TPC13_DPD_ATTN_2G_MASK)
#define CHN7_TPC13_DPD_ATTN_2G_RESET                                           0x7
#define CHN7_TPC13_DPD_ATTN_5G_LSB                                             20
#define CHN7_TPC13_DPD_ATTN_5G_MSB                                             23
#define CHN7_TPC13_DPD_ATTN_5G_MASK                                            0xf00000
#define CHN7_TPC13_DPD_ATTN_5G_GET(x)                                          (((x) & CHN7_TPC13_DPD_ATTN_5G_MASK) >> CHN7_TPC13_DPD_ATTN_5G_LSB)
#define CHN7_TPC13_DPD_ATTN_5G_SET(x)                                          (((0 | (x)) << CHN7_TPC13_DPD_ATTN_5G_LSB) & CHN7_TPC13_DPD_ATTN_5G_MASK)
#define CHN7_TPC13_DPD_ATTN_5G_RESET                                           0x7
#define CHN7_TPC13_DPD_ATB_SEL_LSB                                             19
#define CHN7_TPC13_DPD_ATB_SEL_MSB                                             19
#define CHN7_TPC13_DPD_ATB_SEL_MASK                                            0x80000
#define CHN7_TPC13_DPD_ATB_SEL_GET(x)                                          (((x) & CHN7_TPC13_DPD_ATB_SEL_MASK) >> CHN7_TPC13_DPD_ATB_SEL_LSB)
#define CHN7_TPC13_DPD_ATB_SEL_SET(x)                                          (((0 | (x)) << CHN7_TPC13_DPD_ATB_SEL_LSB) & CHN7_TPC13_DPD_ATB_SEL_MASK)
#define CHN7_TPC13_DPD_ATB_SEL_RESET                                           0x0
#define CHN7_TPC13_DPD_SPARE_LSB                                               0
#define CHN7_TPC13_DPD_SPARE_MSB                                               18
#define CHN7_TPC13_DPD_SPARE_MASK                                              0x7ffff
#define CHN7_TPC13_DPD_SPARE_GET(x)                                            (((x) & CHN7_TPC13_DPD_SPARE_MASK) >> CHN7_TPC13_DPD_SPARE_LSB)
#define CHN7_TPC13_DPD_SPARE_SET(x)                                            (((0 | (x)) << CHN7_TPC13_DPD_SPARE_LSB) & CHN7_TPC13_DPD_SPARE_MASK)
#define CHN7_TPC13_DPD_SPARE_RESET                                             0x0
#define CHN7_TPC13_ADDRESS                                                     (0x30 + __CHN7_TPC_REG_CSR_BASE_ADDRESS)
#define CHN7_TPC13_RSTMASK                                                     0xffffffff
#define CHN7_TPC13_RESET                                                       0x97700000



#endif /* _CHN7_TPC_REG_CSR_H_ */
