/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _MAC_HWSCH_REG_H_
#define _MAC_HWSCH_REG_H_


#ifndef __MAC_HWSCH_REG_BASE_ADDRESS
#define __MAC_HWSCH_REG_BASE_ADDRESS (0x3f400)
#endif


// 0x0 (HWSCH_DIFS_LIMIT_1_0)
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_LSB                           16
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_MSB                           25
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_MASK                          0x3ff0000
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_MASK) >> HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_LSB)
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_LSB) & HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_MASK)
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_1_RESET                         0x1c
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_LSB                           0
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_MSB                           9
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_MASK                          0x3ff
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_MASK) >> HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_LSB)
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_LSB) & HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_MASK)
#define HWSCH_DIFS_LIMIT_1_0_SW_MTU_DIFS_LIMIT_0_RESET                         0x25
#define HWSCH_DIFS_LIMIT_1_0_ADDRESS                                           (0x0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_1_0_RSTMASK                                           0x3ff03ff
#define HWSCH_DIFS_LIMIT_1_0_RESET                                             0x1c0025

// 0x4 (HWSCH_DIFS_LIMIT_3_2)
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_LSB                           16
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_MSB                           25
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_MASK                          0x3ff0000
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_MASK) >> HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_LSB)
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_LSB) & HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_MASK)
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_3_RESET                         0x1c
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_LSB                           0
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_MSB                           9
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_MASK                          0x3ff
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_MASK) >> HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_LSB)
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_LSB) & HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_MASK)
#define HWSCH_DIFS_LIMIT_3_2_SW_MTU_DIFS_LIMIT_2_RESET                         0x25
#define HWSCH_DIFS_LIMIT_3_2_ADDRESS                                           (0x4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_3_2_RSTMASK                                           0x3ff03ff
#define HWSCH_DIFS_LIMIT_3_2_RESET                                             0x1c0025

// 0x8 (HWSCH_DIFS_LIMIT_5_4)
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_LSB                           16
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_MSB                           25
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_MASK                          0x3ff0000
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_MASK) >> HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_LSB)
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_LSB) & HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_MASK)
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_5_RESET                         0x1c
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_LSB                           0
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_MSB                           9
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_MASK                          0x3ff
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_MASK) >> HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_LSB)
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_LSB) & HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_MASK)
#define HWSCH_DIFS_LIMIT_5_4_SW_MTU_DIFS_LIMIT_4_RESET                         0x25
#define HWSCH_DIFS_LIMIT_5_4_ADDRESS                                           (0x8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_5_4_RSTMASK                                           0x3ff03ff
#define HWSCH_DIFS_LIMIT_5_4_RESET                                             0x1c0025

// 0xc (HWSCH_DIFS_LIMIT_7_6)
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_LSB                           16
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_MSB                           25
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_MASK                          0x3ff0000
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_MASK) >> HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_LSB)
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_LSB) & HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_MASK)
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_7_RESET                         0x1c
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_LSB                           0
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_MSB                           9
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_MASK                          0x3ff
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_MASK) >> HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_LSB)
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_LSB) & HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_MASK)
#define HWSCH_DIFS_LIMIT_7_6_SW_MTU_DIFS_LIMIT_6_RESET                         0x25
#define HWSCH_DIFS_LIMIT_7_6_ADDRESS                                           (0xc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_7_6_RSTMASK                                           0x3ff03ff
#define HWSCH_DIFS_LIMIT_7_6_RESET                                             0x1c0025

// 0x10 (HWSCH_DIFS_LIMIT_9_8)
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_LSB                           16
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_MSB                           25
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_MASK                          0x3ff0000
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_MASK) >> HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_LSB)
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_LSB) & HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_MASK)
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_9_RESET                         0x1c
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_LSB                           0
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_MSB                           9
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_MASK                          0x3ff
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_GET(x)                        (((x) & HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_MASK) >> HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_LSB)
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_SET(x)                        (((0 | (x)) << HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_LSB) & HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_MASK)
#define HWSCH_DIFS_LIMIT_9_8_SW_MTU_DIFS_LIMIT_8_RESET                         0x25
#define HWSCH_DIFS_LIMIT_9_8_ADDRESS                                           (0x10 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_9_8_RSTMASK                                           0x3ff03ff
#define HWSCH_DIFS_LIMIT_9_8_RESET                                             0x1c0025

// 0x14 (HWSCH_DIFS_LIMIT_11_10)
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_LSB                        16
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_MSB                        25
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_MASK                       0x3ff0000
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_MASK) >> HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_LSB)
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_LSB) & HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_MASK)
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_11_RESET                      0x1c
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_LSB                        0
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_MSB                        9
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_MASK                       0x3ff
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_MASK) >> HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_LSB)
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_LSB) & HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_MASK)
#define HWSCH_DIFS_LIMIT_11_10_SW_MTU_DIFS_LIMIT_10_RESET                      0x25
#define HWSCH_DIFS_LIMIT_11_10_ADDRESS                                         (0x14 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_11_10_RSTMASK                                         0x3ff03ff
#define HWSCH_DIFS_LIMIT_11_10_RESET                                           0x1c0025

// 0x18 (HWSCH_DIFS_LIMIT_13_12)
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_LSB                        16
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_MSB                        25
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_MASK                       0x3ff0000
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_MASK) >> HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_LSB)
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_LSB) & HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_MASK)
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_13_RESET                      0x1c
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_LSB                        0
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_MSB                        9
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_MASK                       0x3ff
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_MASK) >> HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_LSB)
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_LSB) & HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_MASK)
#define HWSCH_DIFS_LIMIT_13_12_SW_MTU_DIFS_LIMIT_12_RESET                      0x25
#define HWSCH_DIFS_LIMIT_13_12_ADDRESS                                         (0x18 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_13_12_RSTMASK                                         0x3ff03ff
#define HWSCH_DIFS_LIMIT_13_12_RESET                                           0x1c0025

// 0x1c (HWSCH_DIFS_LIMIT_15_14)
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_LSB                        16
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_MSB                        25
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_MASK                       0x3ff0000
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_MASK) >> HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_LSB)
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_LSB) & HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_MASK)
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_15_RESET                      0x1c
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_LSB                        0
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_MSB                        9
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_MASK                       0x3ff
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_GET(x)                     (((x) & HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_MASK) >> HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_LSB)
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_SET(x)                     (((0 | (x)) << HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_LSB) & HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_MASK)
#define HWSCH_DIFS_LIMIT_15_14_SW_MTU_DIFS_LIMIT_14_RESET                      0x25
#define HWSCH_DIFS_LIMIT_15_14_ADDRESS                                         (0x1c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DIFS_LIMIT_15_14_RSTMASK                                         0x3ff03ff
#define HWSCH_DIFS_LIMIT_15_14_RESET                                           0x1c0025

// 0x20 (HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_LSB                       8
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_MSB                       16
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_MASK                      0x1ff00
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_GET(x)                    (((x) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_MASK) >> HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_LSB)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_SET(x)                    (((0 | (x)) << HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_LSB) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_MASK)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_PIFS_LIMIT_RESET                     0x19
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_LSB                   0
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_MSB                   7
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_MASK                  0xff
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_GET(x)                (((x) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_MASK) >> HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_LSB)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_SET(x)                (((0 | (x)) << HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_LSB) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_MASK)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_SW_MTU_SLOT_LIMIT_RESET                 0x9
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_ADDRESS                                 (0x20 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_RSTMASK                                 0x1ffff
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_RESET                                   0x1909

// 0x24 (HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_LSB                 0
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_MSB                 15
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_MASK                0xffff
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_GET(x)              (((x) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_MASK) >> HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_LSB)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_SET(x)              (((0 | (x)) << HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_LSB) & HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_MASK)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_SW_MTU_EIFS_LIMIT_RESET               0x5a
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_ADDRESS                               (0x24 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_RSTMASK                               0xffff
#define HWSCH_EIFS_PIFS_BCN_SLOT_LIMIT_1_RESET                                 0x5a

// 0x28 (HWSCH_COEX_CTRL)
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_LSB                               2
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_MSB                               2
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_MASK                              0x4
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_GET(x)                            (((x) & HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_MASK) >> HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_LSB)
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_SET(x)                            (((0 | (x)) << HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_LSB) & HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_MASK)
#define HWSCH_COEX_CTRL_BT_DISALLOW_SELF_GEN_RESET                             0x0
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_LSB                               1
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_MSB                               1
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_MASK                              0x2
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_GET(x)                            (((x) & HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_MASK) >> HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_LSB)
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_SET(x)                            (((0 | (x)) << HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_LSB) & HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_MASK)
#define HWSCH_COEX_CTRL_QUIET_ACK_CTS_ENABLE_RESET                             0x0
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_LSB                                   0
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_MSB                                   0
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_MASK                                  0x1
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_GET(x)                                (((x) & HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_MASK) >> HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_LSB)
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_SET(x)                                (((0 | (x)) << HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_LSB) & HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_MASK)
#define HWSCH_COEX_CTRL_QUIET_CBF_ENABLE_RESET                                 0x0
#define HWSCH_COEX_CTRL_ADDRESS                                                (0x28 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_COEX_CTRL_RSTMASK                                                0x7
#define HWSCH_COEX_CTRL_RESET                                                  0x0

// 0x30 (HWSCH_NAV_CNT)
#define HWSCH_NAV_CNT_NAV_CNT_LSB                                              0
#define HWSCH_NAV_CNT_NAV_CNT_MSB                                              31
#define HWSCH_NAV_CNT_NAV_CNT_MASK                                             0xffffffff
#define HWSCH_NAV_CNT_NAV_CNT_GET(x)                                           (((x) & HWSCH_NAV_CNT_NAV_CNT_MASK) >> HWSCH_NAV_CNT_NAV_CNT_LSB)
#define HWSCH_NAV_CNT_NAV_CNT_SET(x)                                           (((0 | (x)) << HWSCH_NAV_CNT_NAV_CNT_LSB) & HWSCH_NAV_CNT_NAV_CNT_MASK)
#define HWSCH_NAV_CNT_NAV_CNT_RESET                                            0xff
#define HWSCH_NAV_CNT_ADDRESS                                                  (0x30 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_NAV_CNT_RSTMASK                                                  0xffffffff
#define HWSCH_NAV_CNT_RESET                                                    0xff

// 0x34 (HWSCH_SW_MTU_SHADOW_NAV_CNT)
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_LSB                  0
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_MSB                  31
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_MASK                 0xffffffff
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_GET(x)               (((x) & HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_MASK) >> HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_LSB)
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_SET(x)               (((0 | (x)) << HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_LSB) & HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_MASK)
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_SW_MTU_SHADOW_NAV_CNT_RESET                0xff
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_ADDRESS                                    (0x34 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_RSTMASK                                    0xffffffff
#define HWSCH_SW_MTU_SHADOW_NAV_CNT_RESET                                      0xff

// 0x38 (HWSCH_BKOF_CNT_0_1)
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_LSB                                      16
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_MSB                                      31
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_MASK                                     0xffff0000
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_GET(x)                                   (((x) & HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_MASK) >> HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_LSB)
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_LSB) & HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_MASK)
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_1_RESET                                    0x4
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_LSB                                      0
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_MSB                                      15
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_MASK                                     0xffff
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_GET(x)                                   (((x) & HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_MASK) >> HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_LSB)
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_LSB) & HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_MASK)
#define HWSCH_BKOF_CNT_0_1_BKOF_CNT_0_RESET                                    0x3
#define HWSCH_BKOF_CNT_0_1_ADDRESS                                             (0x38 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_0_1_RSTMASK                                             0xffffffff
#define HWSCH_BKOF_CNT_0_1_RESET                                               0x40003

// 0x40 (HWSCH_BKOF_CNT_2_3)
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_LSB                                      16
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_MSB                                      31
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_MASK                                     0xffff0000
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_GET(x)                                   (((x) & HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_MASK) >> HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_LSB)
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_LSB) & HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_MASK)
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_3_RESET                                    0x1
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_LSB                                      0
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_MSB                                      15
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_MASK                                     0xffff
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_GET(x)                                   (((x) & HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_MASK) >> HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_LSB)
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_LSB) & HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_MASK)
#define HWSCH_BKOF_CNT_2_3_BKOF_CNT_2_RESET                                    0x7
#define HWSCH_BKOF_CNT_2_3_ADDRESS                                             (0x40 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_2_3_RSTMASK                                             0xffffffff
#define HWSCH_BKOF_CNT_2_3_RESET                                               0x10007

// 0x48 (HWSCH_BKOF_CNT_4_5)
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_LSB                                      16
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_MSB                                      31
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_MASK                                     0xffff0000
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_GET(x)                                   (((x) & HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_MASK) >> HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_LSB)
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_LSB) & HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_MASK)
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_5_RESET                                    0x5
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_LSB                                      0
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_MSB                                      15
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_MASK                                     0xffff
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_GET(x)                                   (((x) & HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_MASK) >> HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_LSB)
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_LSB) & HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_MASK)
#define HWSCH_BKOF_CNT_4_5_BKOF_CNT_4_RESET                                    0x2
#define HWSCH_BKOF_CNT_4_5_ADDRESS                                             (0x48 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_4_5_RSTMASK                                             0xffffffff
#define HWSCH_BKOF_CNT_4_5_RESET                                               0x50002

// 0x50 (HWSCH_BKOF_CNT_6_7)
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_LSB                                      16
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_MSB                                      31
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_MASK                                     0xffff0000
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_GET(x)                                   (((x) & HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_MASK) >> HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_LSB)
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_LSB) & HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_MASK)
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_7_RESET                                    0x0
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_LSB                                      0
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_MSB                                      15
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_MASK                                     0xffff
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_GET(x)                                   (((x) & HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_MASK) >> HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_LSB)
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_LSB) & HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_MASK)
#define HWSCH_BKOF_CNT_6_7_BKOF_CNT_6_RESET                                    0x6
#define HWSCH_BKOF_CNT_6_7_ADDRESS                                             (0x50 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_6_7_RSTMASK                                             0xffffffff
#define HWSCH_BKOF_CNT_6_7_RESET                                               0x6

// 0x58 (HWSCH_BKOF_CNT_8_9)
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_LSB                                      16
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_MSB                                      31
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_MASK                                     0xffff0000
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_GET(x)                                   (((x) & HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_MASK) >> HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_LSB)
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_LSB) & HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_MASK)
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_9_RESET                                    0x0
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_LSB                                      0
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_MSB                                      15
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_MASK                                     0xffff
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_GET(x)                                   (((x) & HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_MASK) >> HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_LSB)
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_SET(x)                                   (((0 | (x)) << HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_LSB) & HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_MASK)
#define HWSCH_BKOF_CNT_8_9_BKOF_CNT_8_RESET                                    0x0
#define HWSCH_BKOF_CNT_8_9_ADDRESS                                             (0x58 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_8_9_RSTMASK                                             0xffffffff
#define HWSCH_BKOF_CNT_8_9_RESET                                               0x0

// 0x60 (HWSCH_BKOF_CNT_10_11)
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_LSB                                   16
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_MSB                                   31
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_MASK                                  0xffff0000
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_GET(x)                                (((x) & HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_MASK) >> HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_LSB)
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_LSB) & HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_MASK)
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_11_RESET                                 0x0
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_LSB                                   0
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_MSB                                   15
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_MASK                                  0xffff
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_GET(x)                                (((x) & HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_MASK) >> HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_LSB)
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_LSB) & HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_MASK)
#define HWSCH_BKOF_CNT_10_11_BKOF_CNT_10_RESET                                 0x0
#define HWSCH_BKOF_CNT_10_11_ADDRESS                                           (0x60 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_10_11_RSTMASK                                           0xffffffff
#define HWSCH_BKOF_CNT_10_11_RESET                                             0x0

// 0x68 (HWSCH_BKOF_CNT_12_13)
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_LSB                                   16
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_MSB                                   31
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_MASK                                  0xffff0000
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_GET(x)                                (((x) & HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_MASK) >> HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_LSB)
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_LSB) & HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_MASK)
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_13_RESET                                 0x0
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_LSB                                   0
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_MSB                                   15
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_MASK                                  0xffff
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_GET(x)                                (((x) & HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_MASK) >> HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_LSB)
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_LSB) & HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_MASK)
#define HWSCH_BKOF_CNT_12_13_BKOF_CNT_12_RESET                                 0x0
#define HWSCH_BKOF_CNT_12_13_ADDRESS                                           (0x68 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_12_13_RSTMASK                                           0xffffffff
#define HWSCH_BKOF_CNT_12_13_RESET                                             0x0

// 0x70 (HWSCH_BKOF_CNT_14_15)
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_LSB                                   16
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_MSB                                   31
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_MASK                                  0xffff0000
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_GET(x)                                (((x) & HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_MASK) >> HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_LSB)
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_LSB) & HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_MASK)
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_15_RESET                                 0x0
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_LSB                                   0
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_MSB                                   15
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_MASK                                  0xffff
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_GET(x)                                (((x) & HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_MASK) >> HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_LSB)
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_SET(x)                                (((0 | (x)) << HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_LSB) & HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_MASK)
#define HWSCH_BKOF_CNT_14_15_BKOF_CNT_14_RESET                                 0x0
#define HWSCH_BKOF_CNT_14_15_ADDRESS                                           (0x70 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BKOF_CNT_14_15_RSTMASK                                           0xffffffff
#define HWSCH_BKOF_CNT_14_15_RESET                                             0x0

// 0x78 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_SW_MTU_CW_REG_0_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_ADDRESS                             (0x78 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_0_RESET                               0x7

// 0x7c (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_SW_MTU_CW_REG_1_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_ADDRESS                             (0x7c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_1_RESET                               0x7

// 0x80 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_SW_MTU_CW_REG_2_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_ADDRESS                             (0x80 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_2_RESET                               0x7

// 0x84 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_SW_MTU_CW_REG_3_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_ADDRESS                             (0x84 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_3_RESET                               0x7

// 0x88 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_SW_MTU_CW_REG_4_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_ADDRESS                             (0x88 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_4_RESET                               0x7

// 0x8c (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_SW_MTU_CW_REG_5_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_ADDRESS                             (0x8c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_5_RESET                               0x7

// 0x90 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_SW_MTU_CW_REG_6_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_ADDRESS                             (0x90 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_6_RESET                               0x7

// 0x94 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_SW_MTU_CW_REG_7_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_ADDRESS                             (0x94 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_7_RESET                               0x7

// 0x98 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_SW_MTU_CW_REG_8_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_ADDRESS                             (0x98 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_8_RESET                               0x7

// 0x9c (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_LSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_MSB          19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_MASK         0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_GET(x)       (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_SET(x)       (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_UPDATE_VALID_RESET        0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_LSB                 0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_MSB                 15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_MASK                0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_GET(x)              (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_SET(x)              (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_SW_MTU_CW_REG_9_RESET               0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_ADDRESS                             (0x9c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_RSTMASK                             0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_9_RESET                               0x7

// 0xa0 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_SW_MTU_CW_REG_10_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_ADDRESS                            (0xa0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_10_RESET                              0x7

// 0xa4 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_SW_MTU_CW_REG_11_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_ADDRESS                            (0xa4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_11_RESET                              0x7

// 0xa8 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_SW_MTU_CW_REG_12_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_ADDRESS                            (0xa8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_12_RESET                              0x7

// 0xac (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_SW_MTU_CW_REG_13_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_ADDRESS                            (0xac + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_13_RESET                              0x7

// 0xb0 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_SW_MTU_CW_REG_14_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_ADDRESS                            (0xb0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_14_RESET                              0x7

// 0xb4 (HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_LSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_MSB         19
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_MASK        0x80000
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_GET(x)      (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_SET(x)      (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_UPDATE_VALID_RESET       0x0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_LSB               0
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_MSB               15
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_MASK              0xffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_GET(x)            (((x) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_MASK) >> HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_LSB)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_SET(x)            (((0 | (x)) << HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_LSB) & HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_MASK)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_SW_MTU_CW_REG_15_RESET             0x7
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_ADDRESS                            (0xb4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_RSTMASK                            0x8ffff
#define HWSCH_CW_REG_CONTROL_FOR_BACKOFF_15_RESET                              0x7

// 0xb8 (HWSCH_SW_CW_MIN_CW_MAX_0)
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_LSB) & HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MAX_0_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_LSB) & HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_0_SW_CW_MIN_0_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_0_ADDRESS                                       (0xb8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_0_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_0_RESET                                         0x3ff000f

// 0xbc (HWSCH_SW_CW_MIN_CW_MAX_1)
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_LSB) & HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MAX_1_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_LSB) & HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_1_SW_CW_MIN_1_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_1_ADDRESS                                       (0xbc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_1_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_1_RESET                                         0x3ff000f

// 0xc0 (HWSCH_SW_CW_MIN_CW_MAX_2)
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_LSB) & HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MAX_2_RESET                             0x7
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_LSB) & HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_2_SW_CW_MIN_2_RESET                             0x3
#define HWSCH_SW_CW_MIN_CW_MAX_2_ADDRESS                                       (0xc0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_2_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_2_RESET                                         0x70003

// 0xc4 (HWSCH_SW_CW_MIN_CW_MAX_3)
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_LSB) & HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MAX_3_RESET                             0x7
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_LSB) & HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_3_SW_CW_MIN_3_RESET                             0x3
#define HWSCH_SW_CW_MIN_CW_MAX_3_ADDRESS                                       (0xc4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_3_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_3_RESET                                         0x70003

// 0xc8 (HWSCH_SW_CW_MIN_CW_MAX_4)
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_LSB) & HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MAX_4_RESET                             0x7
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_LSB) & HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_4_SW_CW_MIN_4_RESET                             0x3
#define HWSCH_SW_CW_MIN_CW_MAX_4_ADDRESS                                       (0xc8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_4_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_4_RESET                                         0x70003

// 0xcc (HWSCH_SW_CW_MIN_CW_MAX_5)
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_LSB) & HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MAX_5_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_LSB) & HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_5_SW_CW_MIN_5_RESET                             0x7
#define HWSCH_SW_CW_MIN_CW_MAX_5_ADDRESS                                       (0xcc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_5_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_5_RESET                                         0xf0007

// 0xd0 (HWSCH_SW_CW_MIN_CW_MAX_6)
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_LSB) & HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MAX_6_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_LSB) & HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_6_SW_CW_MIN_6_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_6_ADDRESS                                       (0xd0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_6_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_6_RESET                                         0x3ff000f

// 0xd4 (HWSCH_SW_CW_MIN_CW_MAX_7)
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_LSB) & HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MAX_7_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_LSB) & HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_7_SW_CW_MIN_7_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_7_ADDRESS                                       (0xd4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_7_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_7_RESET                                         0x3ff000f

// 0xd8 (HWSCH_SW_CW_MIN_CW_MAX_8)
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_LSB) & HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MAX_8_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_LSB) & HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_8_SW_CW_MIN_8_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_8_ADDRESS                                       (0xd8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_8_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_8_RESET                                         0x3ff000f

// 0xdc (HWSCH_SW_CW_MIN_CW_MAX_9)
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_LSB                               16
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_MSB                               31
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_MASK                              0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_LSB) & HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MAX_9_RESET                             0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_LSB                               0
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_MSB                               15
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_MASK                              0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_GET(x)                            (((x) & HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_SET(x)                            (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_LSB) & HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_9_SW_CW_MIN_9_RESET                             0xf
#define HWSCH_SW_CW_MIN_CW_MAX_9_ADDRESS                                       (0xdc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_9_RSTMASK                                       0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_9_RESET                                         0x3ff000f

// 0xe0 (HWSCH_SW_CW_MIN_CW_MAX_10)
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_LSB) & HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MAX_10_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_LSB) & HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_10_SW_CW_MIN_10_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_10_ADDRESS                                      (0xe0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_10_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_10_RESET                                        0x3ff000f

// 0xe4 (HWSCH_SW_CW_MIN_CW_MAX_11)
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_LSB) & HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MAX_11_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_LSB) & HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_11_SW_CW_MIN_11_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_11_ADDRESS                                      (0xe4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_11_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_11_RESET                                        0x3ff000f

// 0xe8 (HWSCH_SW_CW_MIN_CW_MAX_12)
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_LSB) & HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MAX_12_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_LSB) & HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_12_SW_CW_MIN_12_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_12_ADDRESS                                      (0xe8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_12_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_12_RESET                                        0x3ff000f

// 0xec (HWSCH_SW_CW_MIN_CW_MAX_13)
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_LSB) & HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MAX_13_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_LSB) & HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_13_SW_CW_MIN_13_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_13_ADDRESS                                      (0xec + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_13_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_13_RESET                                        0x3ff000f

// 0xf0 (HWSCH_SW_CW_MIN_CW_MAX_14)
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_LSB) & HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MAX_14_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_LSB) & HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_14_SW_CW_MIN_14_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_14_ADDRESS                                      (0xf0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_14_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_14_RESET                                        0x3ff000f

// 0xf4 (HWSCH_SW_CW_MIN_CW_MAX_15)
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_LSB                             16
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_MSB                             31
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_MASK                            0xffff0000
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_LSB) & HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MAX_15_RESET                           0x3ff
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_LSB                             0
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_MSB                             15
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_MASK                            0xffff
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_GET(x)                          (((x) & HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_MASK) >> HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_LSB)
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_SET(x)                          (((0 | (x)) << HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_LSB) & HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_MASK)
#define HWSCH_SW_CW_MIN_CW_MAX_15_SW_CW_MIN_15_RESET                           0xf
#define HWSCH_SW_CW_MIN_CW_MAX_15_ADDRESS                                      (0xf4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CW_MIN_CW_MAX_15_RSTMASK                                      0xffffffff
#define HWSCH_SW_CW_MIN_CW_MAX_15_RESET                                        0x3ff000f

// 0xf8 (HWSCH_CW_ACTION_CTRL)
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_LSB                                0
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_MSB                                25
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_MASK                               0x3ffffff
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_GET(x)                             (((x) & HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_MASK) >> HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_LSB)
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_SET(x)                             (((0 | (x)) << HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_LSB) & HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_MASK)
#define HWSCH_CW_ACTION_CTRL_CW_ACTION_CTRL_RESET                              0x10082
#define HWSCH_CW_ACTION_CTRL_ADDRESS                                           (0xf8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CW_ACTION_CTRL_RSTMASK                                           0x3ffffff
#define HWSCH_CW_ACTION_CTRL_RESET                                             0x10082

// 0x100 (HWSCH_MTU_TIMEOUT_STATUS)
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_LSB                         4
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_MSB                         4
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_MASK                        0x10
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_GET(x)                      (((x) & HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_MASK) >> HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_LSB)
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_SET(x)                      (((0 | (x)) << HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_LSB) & HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_MASK)
#define HWSCH_MTU_TIMEOUT_STATUS_QUATERNARY_CCA_TO_RESET                       0x0
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_LSB                           3
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_MSB                           3
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_MASK                          0x8
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_GET(x)                        (((x) & HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_MASK) >> HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_LSB)
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_SET(x)                        (((0 | (x)) << HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_LSB) & HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_MASK)
#define HWSCH_MTU_TIMEOUT_STATUS_TERTIARY_CCA_TO_RESET                         0x0
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_LSB                          2
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_MSB                          2
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_MASK                         0x4
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_GET(x)                       (((x) & HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_MASK) >> HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_LSB)
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_SET(x)                       (((0 | (x)) << HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_LSB) & HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_MASK)
#define HWSCH_MTU_TIMEOUT_STATUS_SECONDARY_CCA_TO_RESET                        0x0
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_LSB                                   1
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_MSB                                   1
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_MASK                                  0x2
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_GET(x)                                (((x) & HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_MASK) >> HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_LSB)
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_SET(x)                                (((0 | (x)) << HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_LSB) & HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_MASK)
#define HWSCH_MTU_TIMEOUT_STATUS_SIFS_TO_RESET                                 0x0
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_LSB                                   0
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_MSB                                   0
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_MASK                                  0x1
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_GET(x)                                (((x) & HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_MASK) >> HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_LSB)
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_SET(x)                                (((0 | (x)) << HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_LSB) & HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_MASK)
#define HWSCH_MTU_TIMEOUT_STATUS_PIFS_TO_RESET                                 0x0
#define HWSCH_MTU_TIMEOUT_STATUS_ADDRESS                                       (0x100 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_MTU_TIMEOUT_STATUS_RSTMASK                                       0x1f
#define HWSCH_MTU_TIMEOUT_STATUS_RESET                                         0x0

// 0x10c (HWSCH_CCA_COUNTER0)
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_LSB                                    0
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_MSB                                    31
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_MASK                                   0xffffffff
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_GET(x)                                 (((x) & HWSCH_CCA_COUNTER0_CCA_COUNTER0_MASK) >> HWSCH_CCA_COUNTER0_CCA_COUNTER0_LSB)
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_SET(x)                                 (((0 | (x)) << HWSCH_CCA_COUNTER0_CCA_COUNTER0_LSB) & HWSCH_CCA_COUNTER0_CCA_COUNTER0_MASK)
#define HWSCH_CCA_COUNTER0_CCA_COUNTER0_RESET                                  0x0
#define HWSCH_CCA_COUNTER0_ADDRESS                                             (0x10c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_COUNTER0_RSTMASK                                             0xffffffff
#define HWSCH_CCA_COUNTER0_RESET                                               0x0

// 0x110 (HWSCH_CCA_COUNTER1)
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_LSB                                    0
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_MSB                                    31
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_MASK                                   0xffffffff
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_GET(x)                                 (((x) & HWSCH_CCA_COUNTER1_CCA_COUNTER1_MASK) >> HWSCH_CCA_COUNTER1_CCA_COUNTER1_LSB)
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_SET(x)                                 (((0 | (x)) << HWSCH_CCA_COUNTER1_CCA_COUNTER1_LSB) & HWSCH_CCA_COUNTER1_CCA_COUNTER1_MASK)
#define HWSCH_CCA_COUNTER1_CCA_COUNTER1_RESET                                  0x0
#define HWSCH_CCA_COUNTER1_ADDRESS                                             (0x110 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_COUNTER1_RSTMASK                                             0xffffffff
#define HWSCH_CCA_COUNTER1_RESET                                               0x0

// 0x114 (HWSCH_CCA_COUNTER2)
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_LSB                                    0
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_MSB                                    31
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_MASK                                   0xffffffff
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_GET(x)                                 (((x) & HWSCH_CCA_COUNTER2_CCA_COUNTER2_MASK) >> HWSCH_CCA_COUNTER2_CCA_COUNTER2_LSB)
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_SET(x)                                 (((0 | (x)) << HWSCH_CCA_COUNTER2_CCA_COUNTER2_LSB) & HWSCH_CCA_COUNTER2_CCA_COUNTER2_MASK)
#define HWSCH_CCA_COUNTER2_CCA_COUNTER2_RESET                                  0x0
#define HWSCH_CCA_COUNTER2_ADDRESS                                             (0x114 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_COUNTER2_RSTMASK                                             0xffffffff
#define HWSCH_CCA_COUNTER2_RESET                                               0x0

// 0x118 (HWSCH_CCA_CONTROL_REG_1)
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_LSB                       29
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_MSB                       29
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_MASK                      0x20000000
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_MASK) >> HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_LSB)
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_LSB) & HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_MASK)
#define HWSCH_CCA_CONTROL_REG_1_CONSIDER_RX_CCA_ONLY_RESET                     0x0
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_LSB                             26
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_MSB                             28
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_MASK                            0x1c000000
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_GET(x)                          (((x) & HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_MASK) >> HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_LSB)
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_SET(x)                          (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_LSB) & HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_MASK)
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT2_SEL_RESET                           0x0
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_LSB                             23
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_MSB                             25
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_MASK                            0x3800000
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_GET(x)                          (((x) & HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_MASK) >> HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_LSB)
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_SET(x)                          (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_LSB) & HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_MASK)
#define HWSCH_CCA_CONTROL_REG_1_CCA_COUNT1_SEL_RESET                           0x0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_LSB                      22
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_MSB                      22
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_MASK                     0x400000
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_MASK) >> HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_LSB)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_LSB) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_MASK)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_BKOF_GOTO_IDLE_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_LSB                            21
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_MSB                            21
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_MASK                           0x200000
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_GET(x)                         (((x) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_MASK) >> HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_LSB)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_SET(x)                         (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_LSB) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_MASK)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_CCA_FLAG_RESET                          0x0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_LSB                  19
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_MSB                  20
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_MASK                 0x180000
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_GET(x)               (((x) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_MASK) >> HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_LSB)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_SET(x)               (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_LSB) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_MASK)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_FINAL_CCA_SEL_RESET                0x0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_LSB                    16
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_MSB                    18
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_MASK                   0x70000
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_GET(x)                 (((x) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_MASK) >> HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_LSB)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_SET(x)                 (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_LSB) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_MASK)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_PIFS_RAW_CCA_SEL_RESET                  0x0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_LSB                        0
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_MSB                        15
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_MASK                       0xffff
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_MASK) >> HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_LSB)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_LSB) & HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_MASK)
#define HWSCH_CCA_CONTROL_REG_1_SW_MTU_EIFS_CCA_SEL_RESET                      0x0
#define HWSCH_CCA_CONTROL_REG_1_ADDRESS                                        (0x118 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_1_RSTMASK                                        0x3fffffff
#define HWSCH_CCA_CONTROL_REG_1_RESET                                          0x0

// 0x11c (HWSCH_CCA_CONTROL_REG_2)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_LSB                18
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_MSB                26
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_MASK               0x7fc0000
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_GET(x)             (((x) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_MASK) >> HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_LSB)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_SET(x)             (((0 | (x)) << HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_LSB) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_MASK)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_QUATERNARY_CCA_LIMIT_RESET              0x19
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_LSB                  9
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_MSB                  17
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_MASK                 0x3fe00
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_GET(x)               (((x) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_MASK) >> HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_LSB)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_SET(x)               (((0 | (x)) << HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_LSB) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_MASK)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_TERTIARY_CCA_LIMIT_RESET                0x19
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_LSB                 0
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_MSB                 8
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_MASK                0x1ff
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_GET(x)              (((x) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_MASK) >> HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_LSB)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_SET(x)              (((0 | (x)) << HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_LSB) & HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_MASK)
#define HWSCH_CCA_CONTROL_REG_2_SW_MTU_SECONDARY_CCA_LIMIT_RESET               0x19
#define HWSCH_CCA_CONTROL_REG_2_ADDRESS                                        (0x11c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_2_RSTMASK                                        0x7ffffff
#define HWSCH_CCA_CONTROL_REG_2_RESET                                          0x643219

// 0x120 (HWSCH_CCA_CONTROL_REG_3)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_LSB                        28
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_MSB                        31
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_MASK                       0xf0000000
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL7_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_LSB                        24
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_MSB                        27
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_MASK                       0xf000000
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL6_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_LSB                        20
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_MSB                        23
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_MASK                       0xf00000
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL5_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_LSB                        16
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_MSB                        19
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_MASK                       0xf0000
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL4_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_LSB                        12
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_MSB                        15
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_MASK                       0xf000
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL3_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_LSB                        8
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_MSB                        11
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_MASK                       0xf00
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL2_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_LSB                        4
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_MSB                        7
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_MASK                       0xf0
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL1_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_LSB                        0
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_MSB                        3
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_MASK                       0xf
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_MASK) >> HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_LSB)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_LSB) & HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_MASK)
#define HWSCH_CCA_CONTROL_REG_3_SW_MTU_RAW_CCA_SEL0_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_3_ADDRESS                                        (0x120 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_3_RSTMASK                                        0xffffffff
#define HWSCH_CCA_CONTROL_REG_3_RESET                                          0x55555555

// 0x124 (HWSCH_CCA_CONTROL_REG_4)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_LSB                       28
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_MSB                       31
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_MASK                      0xf0000000
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL15_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_LSB                       24
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_MSB                       27
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_MASK                      0xf000000
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL14_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_LSB                       20
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_MSB                       23
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_MASK                      0xf00000
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL13_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_LSB                       16
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_MSB                       19
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_MASK                      0xf0000
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL12_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_LSB                       12
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_MSB                       15
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_MASK                      0xf000
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL11_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_LSB                       8
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_MSB                       11
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_MASK                      0xf00
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_GET(x)                    (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_SET(x)                    (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL10_RESET                     0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_LSB                        4
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_MSB                        7
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_MASK                       0xf0
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL9_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_LSB                        0
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_MSB                        3
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_MASK                       0xf
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_GET(x)                     (((x) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_MASK) >> HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_LSB)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_SET(x)                     (((0 | (x)) << HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_LSB) & HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_MASK)
#define HWSCH_CCA_CONTROL_REG_4_SW_MTU_RAW_CCA_SEL8_RESET                      0x5
#define HWSCH_CCA_CONTROL_REG_4_ADDRESS                                        (0x124 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_4_RSTMASK                                        0xffffffff
#define HWSCH_CCA_CONTROL_REG_4_RESET                                          0x55555555

// 0x128 (HWSCH_CCA_CONTROL_REG_5)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_LSB                      28
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_MSB                      31
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_MASK                     0xf0000000
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL7_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_LSB                      24
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_MSB                      27
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_MASK                     0xf000000
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL6_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_LSB                      20
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_MSB                      23
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_MASK                     0xf00000
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL5_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_LSB                      16
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_MSB                      19
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_MASK                     0xf0000
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL4_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_LSB                      12
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_MSB                      15
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_MASK                     0xf000
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL3_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_LSB                      8
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_MSB                      11
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_MASK                     0xf00
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL2_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_LSB                      4
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_MSB                      7
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_MASK                     0xf0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL1_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_LSB                      0
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_MSB                      3
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_MASK                     0xf
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_MASK) >> HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_LSB)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_LSB) & HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_MASK)
#define HWSCH_CCA_CONTROL_REG_5_SW_MTU_FINAL_CCA_SEL0_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_5_ADDRESS                                        (0x128 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_5_RSTMASK                                        0xffffffff
#define HWSCH_CCA_CONTROL_REG_5_RESET                                          0x0

// 0x12c (HWSCH_CCA_CONTROL_REG_6)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_LSB                     28
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_MSB                     31
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_MASK                    0xf0000000
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL15_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_LSB                     24
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_MSB                     27
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_MASK                    0xf000000
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL14_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_LSB                     20
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_MSB                     23
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_MASK                    0xf00000
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL13_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_LSB                     16
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_MSB                     19
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_MASK                    0xf0000
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL12_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_LSB                     12
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_MSB                     15
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_MASK                    0xf000
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL11_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_LSB                     8
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_MSB                     11
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_MASK                    0xf00
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_GET(x)                  (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_SET(x)                  (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL10_RESET                   0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_LSB                      4
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_MSB                      7
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_MASK                     0xf0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL9_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_LSB                      0
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_MSB                      3
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_MASK                     0xf
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_GET(x)                   (((x) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_MASK) >> HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_LSB)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_SET(x)                   (((0 | (x)) << HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_LSB) & HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_MASK)
#define HWSCH_CCA_CONTROL_REG_6_SW_MTU_FINAL_CCA_SEL8_RESET                    0x0
#define HWSCH_CCA_CONTROL_REG_6_ADDRESS                                        (0x12c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_CONTROL_REG_6_RSTMASK                                        0xffffffff
#define HWSCH_CCA_CONTROL_REG_6_RESET                                          0x0

// 0x130 (HWSCH_MTU_GLOBAL_CONTROL)
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_LSB                 15
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_MSB                 15
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_MASK                0x8000
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_GET(x)              (((x) & HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_MASK) >> HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_LSB)
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_SET(x)              (((0 | (x)) << HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_LSB) & HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_MASK)
#define HWSCH_MTU_GLOBAL_CONTROL_BLOCK_TLV_TX_IN_CRYPTO_RX_RESET               0x0
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_LSB          14
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_MSB          14
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_MASK         0x4000
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_GET(x)       (((x) & HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_MASK) >> HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_LSB)
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_SET(x)       (((0 | (x)) << HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_LSB) & HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_MASK)
#define HWSCH_MTU_GLOBAL_CONTROL_ENABLE_CCA_SENSING_IN_PIFS_BURST_RESET        0x0
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_LSB             13
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_MSB             13
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_MASK            0x2000
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_GET(x)          (((x) & HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_MASK) >> HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_LSB)
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_SET(x)          (((0 | (x)) << HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_LSB) & HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_MASK)
#define HWSCH_MTU_GLOBAL_CONTROL_DISABLE_SIFS_TO_PIFS_RECOVERY_RESET           0x0
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_LSB             12
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_MSB             12
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_MASK            0x1000
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_GET(x)          (((x) & HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_MASK) >> HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_LSB)
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_SET(x)          (((0 | (x)) << HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_LSB) & HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_MASK)
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_NAV_BASED_ON_RTS_VALID_RESET           0x0
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_LSB                   0
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_MSB                   11
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_MASK                  0xfff
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_GET(x)                (((x) & HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_MASK) >> HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_LSB)
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_SET(x)                (((0 | (x)) << HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_LSB) & HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_MASK)
#define HWSCH_MTU_GLOBAL_CONTROL_SW_MTU_RTS_NAV_TO_LIMIT_RESET                 0xee
#define HWSCH_MTU_GLOBAL_CONTROL_ADDRESS                                       (0x130 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_MTU_GLOBAL_CONTROL_RSTMASK                                       0xffff
#define HWSCH_MTU_GLOBAL_CONTROL_RESET                                         0xee

// 0x134 (HWSCH_PREBKOFF_LIMITS)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_LSB                  22
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_MSB                  27
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_MASK                 0xfc00000
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_GET(x)               (((x) & HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_MASK) >> HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_LSB)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_SET(x)               (((0 | (x)) << HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_LSB) & HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_MASK)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_PIFS_WIDTH_LIMIT_RESET                0x5
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_LSB                  16
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_MSB                  21
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_MASK                 0x3f0000
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_GET(x)               (((x) & HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_MASK) >> HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_LSB)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_SET(x)               (((0 | (x)) << HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_LSB) & HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_MASK)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_TXP_SIFS_WIDTH_LIMIT_RESET                0xa
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_LSB               8
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_MSB               15
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_MASK              0xff00
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_GET(x)            (((x) & HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_MASK) >> HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_LSB)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_SET(x)            (((0 | (x)) << HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_LSB) & HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_MASK)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_CLKS_RESET             0x1
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_LSB                 0
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_MSB                 7
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_MASK                0xff
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_GET(x)              (((x) & HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_MASK) >> HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_LSB)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_SET(x)              (((0 | (x)) << HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_LSB) & HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_MASK)
#define HWSCH_PREBKOFF_LIMITS_SW_MTU_EARLY_SW_INT_LIMIT_US_RESET               0x4
#define HWSCH_PREBKOFF_LIMITS_ADDRESS                                          (0x134 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_PREBKOFF_LIMITS_RSTMASK                                          0xfffffff
#define HWSCH_PREBKOFF_LIMITS_RESET                                            0x14a0104

// 0x138 (HWSCH_MTU_FOR_HMAC_CONTROLS)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_LSB             27
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_MSB             31
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_MASK            0xf8000000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_GET(x)          (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_SET(x)          (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_AUTO_FLUSH_TLV_START_DELAY_RESET           0x10
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_LSB   26
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_MSB   26
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_MASK  0x4000000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_GET(x) (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_SET(x) (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_INCLUDE_UNDERRUN_RESET 0x1
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_LSB             25
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_MSB             25
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_MASK            0x2000000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_GET(x)          (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_SET(x)          (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_FAIL_AUTO_FLUSH_ENABLE_RESET           0x1
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_LSB            24
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_MSB            24
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_MASK           0x1000000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_GET(x)         (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_SET(x)         (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_FES_START_AUTO_FLUSH_ENABLE_RESET          0x0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_LSB           23
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_MSB           23
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_MASK          0x800000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_GET(x)        (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_SET(x)        (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_CHECK_ENABLE_RESET         0x0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_LSB             20
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_MSB             22
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_MASK            0x700000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_GET(x)          (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_SET(x)          (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SVD_RDY_TIMEOUT_SLOT_LIMIT_RESET           0x0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_LSB                16
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_MSB                19
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_MASK               0xf0000
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_GET(x)             (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_SET(x)             (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_WARM_TX_LIMIT_US_RESET              0x0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_LSB                0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_MSB                15
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_MASK               0xffff
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_GET(x)             (((x) & HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_MASK) >> HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_LSB)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_SET(x)             (((0 | (x)) << HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_LSB) & HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_MASK)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_SW_MTU_HW_BACKOFF_VALID_RESET              0x0
#define HWSCH_MTU_FOR_HMAC_CONTROLS_ADDRESS                                    (0x138 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_MTU_FOR_HMAC_CONTROLS_RSTMASK                                    0xffffffff
#define HWSCH_MTU_FOR_HMAC_CONTROLS_RESET                                      0x86000000

// 0x13c (HWSCH_LFSR_DATA_1_0)
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_LSB                                    16
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_MSB                                    31
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_MASK                                   0xffff0000
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_GET(x)                                 (((x) & HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_MASK) >> HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_LSB)
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_LSB) & HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_MASK)
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_1_RESET                                  0x0
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_LSB                                    0
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_MSB                                    15
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_MASK                                   0xffff
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_GET(x)                                 (((x) & HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_MASK) >> HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_LSB)
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_LSB) & HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_MASK)
#define HWSCH_LFSR_DATA_1_0_LFSR_DATA_0_RESET                                  0x0
#define HWSCH_LFSR_DATA_1_0_ADDRESS                                            (0x13c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_1_0_RSTMASK                                            0xffffffff
#define HWSCH_LFSR_DATA_1_0_RESET                                              0x0

// 0x140 (HWSCH_LFSR_DATA_3_2)
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_LSB                                    16
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_MSB                                    31
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_MASK                                   0xffff0000
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_GET(x)                                 (((x) & HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_MASK) >> HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_LSB)
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_LSB) & HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_MASK)
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_3_RESET                                  0x0
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_LSB                                    0
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_MSB                                    15
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_MASK                                   0xffff
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_GET(x)                                 (((x) & HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_MASK) >> HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_LSB)
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_LSB) & HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_MASK)
#define HWSCH_LFSR_DATA_3_2_LFSR_DATA_2_RESET                                  0x0
#define HWSCH_LFSR_DATA_3_2_ADDRESS                                            (0x140 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_3_2_RSTMASK                                            0xffffffff
#define HWSCH_LFSR_DATA_3_2_RESET                                              0x0

// 0x144 (HWSCH_LFSR_DATA_5_4)
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_LSB                                    16
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_MSB                                    31
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_MASK                                   0xffff0000
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_GET(x)                                 (((x) & HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_MASK) >> HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_LSB)
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_LSB) & HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_MASK)
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_5_RESET                                  0x0
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_LSB                                    0
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_MSB                                    15
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_MASK                                   0xffff
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_GET(x)                                 (((x) & HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_MASK) >> HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_LSB)
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_LSB) & HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_MASK)
#define HWSCH_LFSR_DATA_5_4_LFSR_DATA_4_RESET                                  0x0
#define HWSCH_LFSR_DATA_5_4_ADDRESS                                            (0x144 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_5_4_RSTMASK                                            0xffffffff
#define HWSCH_LFSR_DATA_5_4_RESET                                              0x0

// 0x148 (HWSCH_LFSR_DATA_7_6)
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_LSB                                    16
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_MSB                                    31
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_MASK                                   0xffff0000
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_GET(x)                                 (((x) & HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_MASK) >> HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_LSB)
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_LSB) & HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_MASK)
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_7_RESET                                  0x0
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_LSB                                    0
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_MSB                                    15
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_MASK                                   0xffff
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_GET(x)                                 (((x) & HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_MASK) >> HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_LSB)
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_LSB) & HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_MASK)
#define HWSCH_LFSR_DATA_7_6_LFSR_DATA_6_RESET                                  0x0
#define HWSCH_LFSR_DATA_7_6_ADDRESS                                            (0x148 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_7_6_RSTMASK                                            0xffffffff
#define HWSCH_LFSR_DATA_7_6_RESET                                              0x0

// 0x14c (HWSCH_LFSR_DATA_9_8)
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_LSB                                    16
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_MSB                                    31
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_MASK                                   0xffff0000
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_GET(x)                                 (((x) & HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_MASK) >> HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_LSB)
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_LSB) & HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_MASK)
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_9_RESET                                  0x0
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_LSB                                    0
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_MSB                                    15
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_MASK                                   0xffff
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_GET(x)                                 (((x) & HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_MASK) >> HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_LSB)
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_SET(x)                                 (((0 | (x)) << HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_LSB) & HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_MASK)
#define HWSCH_LFSR_DATA_9_8_LFSR_DATA_8_RESET                                  0x0
#define HWSCH_LFSR_DATA_9_8_ADDRESS                                            (0x14c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_9_8_RSTMASK                                            0xffffffff
#define HWSCH_LFSR_DATA_9_8_RESET                                              0x0

// 0x150 (HWSCH_LFSR_DATA_11_10)
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_LSB                                 16
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_MSB                                 31
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_MASK                                0xffff0000
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_GET(x)                              (((x) & HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_MASK) >> HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_LSB)
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_LSB) & HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_MASK)
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_11_RESET                               0x0
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_LSB                                 0
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_MSB                                 15
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_MASK                                0xffff
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_GET(x)                              (((x) & HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_MASK) >> HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_LSB)
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_LSB) & HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_MASK)
#define HWSCH_LFSR_DATA_11_10_LFSR_DATA_10_RESET                               0x0
#define HWSCH_LFSR_DATA_11_10_ADDRESS                                          (0x150 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_11_10_RSTMASK                                          0xffffffff
#define HWSCH_LFSR_DATA_11_10_RESET                                            0x0

// 0x154 (HWSCH_LFSR_DATA_13_12)
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_LSB                                 16
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_MSB                                 31
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_MASK                                0xffff0000
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_GET(x)                              (((x) & HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_MASK) >> HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_LSB)
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_LSB) & HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_MASK)
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_13_RESET                               0x0
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_LSB                                 0
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_MSB                                 15
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_MASK                                0xffff
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_GET(x)                              (((x) & HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_MASK) >> HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_LSB)
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_LSB) & HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_MASK)
#define HWSCH_LFSR_DATA_13_12_LFSR_DATA_12_RESET                               0x0
#define HWSCH_LFSR_DATA_13_12_ADDRESS                                          (0x154 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_13_12_RSTMASK                                          0xffffffff
#define HWSCH_LFSR_DATA_13_12_RESET                                            0x0

// 0x158 (HWSCH_LFSR_DATA_15_14)
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_LSB                                 16
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_MSB                                 31
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_MASK                                0xffff0000
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_GET(x)                              (((x) & HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_MASK) >> HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_LSB)
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_LSB) & HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_MASK)
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_15_RESET                               0x0
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_LSB                                 0
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_MSB                                 15
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_MASK                                0xffff
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_GET(x)                              (((x) & HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_MASK) >> HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_LSB)
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_SET(x)                              (((0 | (x)) << HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_LSB) & HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_MASK)
#define HWSCH_LFSR_DATA_15_14_LFSR_DATA_14_RESET                               0x0
#define HWSCH_LFSR_DATA_15_14_ADDRESS                                          (0x158 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LFSR_DATA_15_14_RSTMASK                                          0xffffffff
#define HWSCH_LFSR_DATA_15_14_RESET                                            0x0

// 0x15c (HWSCH_LONG_SHORT_XMIT_LIMIT_0)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_LSB 0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_MSB 31
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_MASK 0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_GET(x) (((x) & HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_MASK) >> HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_LSB)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_SET(x) (((0 | (x)) << HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_LSB) & HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_MASK)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_SW_LONG_SHORT_XMIT_LIMIT_BKOF_3_TO_0_RESET 0x0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_ADDRESS                                  (0x15c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_RSTMASK                                  0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_0_RESET                                    0x0

// 0x160 (HWSCH_LONG_SHORT_XMIT_LIMIT_1)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_LSB 0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_MSB 31
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_MASK 0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_GET(x) (((x) & HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_MASK) >> HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_LSB)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_SET(x) (((0 | (x)) << HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_LSB) & HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_MASK)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_SW_LONG_SHORT_XMIT_LIMIT_BKOF_7_TO_4_RESET 0x0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_ADDRESS                                  (0x160 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_RSTMASK                                  0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_1_RESET                                    0x0

// 0x164 (HWSCH_LONG_SHORT_XMIT_LIMIT_2)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_LSB 0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_MSB 31
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_MASK 0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_GET(x) (((x) & HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_MASK) >> HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_LSB)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_SET(x) (((0 | (x)) << HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_LSB) & HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_MASK)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_SW_LONG_SHORT_XMIT_LIMIT_BKOF_11_TO_8_RESET 0x0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_ADDRESS                                  (0x164 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_RSTMASK                                  0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_2_RESET                                    0x0

// 0x168 (HWSCH_LONG_SHORT_XMIT_LIMIT_3)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_LSB 0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_MSB 31
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_MASK 0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_GET(x) (((x) & HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_MASK) >> HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_LSB)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_SET(x) (((0 | (x)) << HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_LSB) & HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_MASK)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_SW_LONG_SHORT_XMIT_LIMIT_BKOF_15_TO_12_RESET 0x0
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_ADDRESS                                  (0x168 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_RSTMASK                                  0xffffffff
#define HWSCH_LONG_SHORT_XMIT_LIMIT_3_RESET                                    0x0

// 0x16c (HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV)
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_LSB        0
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_MSB        14
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_MASK       0x7fff
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_GET(x)     (((x) & HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_MASK) >> HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_LSB)
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_SET(x)     (((0 | (x)) << HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_LSB) & HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_MASK)
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_SW_MTU_SIFS_LIMIT_FORINNAV_RESET      0x780
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_ADDRESS                               (0x16c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_RSTMASK                               0x7fff
#define HWSCH_SW_MTU_SIFS_LIMIT_FORINNAV_RESET                                 0x780

// 0x170 (HWSCH_PRIMARY_CCA_HISTOGRAM_LOW)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_LSB         0
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_MSB         31
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_MASK        0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_GET(x)      (((x) & HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_MASK) >> HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_LSB)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_SET(x)      (((0 | (x)) << HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_LSB) & HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_MASK)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_PRIMARY_CCA_HISTOGRAM31TO0_RESET       0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_ADDRESS                                (0x170 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_RSTMASK                                0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_LOW_RESET                                  0xffffffff

// 0x174 (HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_LSB       0
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_MSB       31
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_MASK      0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_GET(x)    (((x) & HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_MASK) >> HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_LSB)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_SET(x)    (((0 | (x)) << HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_LSB) & HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_MASK)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_PRIMARY_CCA_HISTOGRAM63TO32_RESET     0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_ADDRESS                               (0x174 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_RSTMASK                               0xffffffff
#define HWSCH_PRIMARY_CCA_HISTOGRAM_HIGH_RESET                                 0xffffffff

// 0x178 (HWSCH_SECONDARY_CCA_HISTOGRAM_LOW)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_LSB     0
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_MSB     31
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_MASK    0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_GET(x)  (((x) & HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_MASK) >> HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_LSB)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_SET(x)  (((0 | (x)) << HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_LSB) & HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_MASK)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_SECONDARY_CCA_HISTOGRAM31TO0_RESET   0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_ADDRESS                              (0x178 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_RSTMASK                              0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_LOW_RESET                                0xffffffff

// 0x17c (HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_LSB   0
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_MSB   31
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_MASK  0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_GET(x) (((x) & HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_MASK) >> HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_LSB)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_SET(x) (((0 | (x)) << HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_LSB) & HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_MASK)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_SECONDARY_CCA_HISTOGRAM63TO32_RESET 0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_ADDRESS                             (0x17c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_RSTMASK                             0xffffffff
#define HWSCH_SECONDARY_CCA_HISTOGRAM_HIGH_RESET                               0xffffffff

// 0x180 (HWSCH_TERTIARY_CCA_HISTOGRAM_LOW)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_LSB       0
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_MSB       31
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_MASK      0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_GET(x)    (((x) & HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_MASK) >> HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_LSB)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_SET(x)    (((0 | (x)) << HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_LSB) & HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_MASK)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_TERTIARY_CCA_HISTOGRAM31TO0_RESET     0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_ADDRESS                               (0x180 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_RSTMASK                               0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_LOW_RESET                                 0xffffffff

// 0x184 (HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_LSB     0
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_MSB     31
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_MASK    0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_GET(x)  (((x) & HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_MASK) >> HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_LSB)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_SET(x)  (((0 | (x)) << HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_LSB) & HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_MASK)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_TERTIARY_CCA_HISTOGRAM63TO32_RESET   0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_ADDRESS                              (0x184 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_RSTMASK                              0xffffffff
#define HWSCH_TERTIARY_CCA_HISTOGRAM_HIGH_RESET                                0xffffffff

// 0x188 (HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_LSB   0
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_MSB   31
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_MASK  0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_GET(x) (((x) & HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_MASK) >> HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_LSB)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_SET(x) (((0 | (x)) << HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_LSB) & HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_MASK)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_QUATERNARY_CCA_HISTOGRAM31TO0_RESET 0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_ADDRESS                             (0x188 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_RSTMASK                             0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_LOW_RESET                               0xffffffff

// 0x18c (HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_LSB 0
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_MSB 31
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_MASK 0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_GET(x) (((x) & HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_MASK) >> HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_LSB)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_SET(x) (((0 | (x)) << HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_LSB) & HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_MASK)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_QUATERNARY_CCA_HISTOGRAM63TO32_RESET 0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_ADDRESS                            (0x18c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_RSTMASK                            0xffffffff
#define HWSCH_QUATERNARY_CCA_HISTOGRAM_HIGH_RESET                              0xffffffff

// 0x19c (HWSCH_SW_CCA_HISTOGRAM_MASK_MISC)
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_LSB    8
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_MSB    13
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_MASK   0x3f00
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_GET(x) (((x) & HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_MASK) >> HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_LSB)
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_SET(x) (((0 | (x)) << HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_LSB) & HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_MASK)
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_SW_CCA_HISTOGRAM_SAMPLING_RATE_RESET  0x3
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_ADDRESS                               (0x19c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_RSTMASK                               0x3f00
#define HWSCH_SW_CCA_HISTOGRAM_MASK_MISC_RESET                                 0x300

// 0x1a0 (HWSCH_CCA_SECONDARY_HISTOGRAM)
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_LSB              0
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_MSB              31
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_MASK             0xffffffff
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_GET(x)           (((x) & HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_MASK) >> HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_LSB)
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_SET(x)           (((0 | (x)) << HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_LSB) & HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_MASK)
#define HWSCH_CCA_SECONDARY_HISTOGRAM_CCA_SECONDARY_HISTOGRAM_RESET            0x0
#define HWSCH_CCA_SECONDARY_HISTOGRAM_ADDRESS                                  (0x1a0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_SECONDARY_HISTOGRAM_RSTMASK                                  0xffffffff
#define HWSCH_CCA_SECONDARY_HISTOGRAM_RESET                                    0x0

// 0x1a4 (HWSCH_CCA_TERTIARY_HISTOGRAM)
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_LSB                0
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_MSB                31
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_MASK               0xffffffff
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_GET(x)             (((x) & HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_MASK) >> HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_LSB)
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_SET(x)             (((0 | (x)) << HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_LSB) & HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_MASK)
#define HWSCH_CCA_TERTIARY_HISTOGRAM_CCA_TERTIARY_HISTOGRAM_RESET              0x0
#define HWSCH_CCA_TERTIARY_HISTOGRAM_ADDRESS                                   (0x1a4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_TERTIARY_HISTOGRAM_RSTMASK                                   0xffffffff
#define HWSCH_CCA_TERTIARY_HISTOGRAM_RESET                                     0x0

// 0x1a8 (HWSCH_CCA_QUATERNARY_HISTOGRAM)
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_LSB            0
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_MSB            31
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_MASK           0xffffffff
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_GET(x)         (((x) & HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_MASK) >> HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_LSB)
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_SET(x)         (((0 | (x)) << HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_LSB) & HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_MASK)
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_CCA_QUATERNARY_HISTOGRAM_RESET          0x0
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_ADDRESS                                 (0x1a8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_RSTMASK                                 0xffffffff
#define HWSCH_CCA_QUATERNARY_HISTOGRAM_RESET                                   0x0

// 0x1ac (HWSCH_CMD_RING_BASE_0)
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_0_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_0_ADDRESS                                          (0x1ac + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_0_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_0_RESET                                            0x0

// 0x1b0 (HWSCH_CMD_RING_BASE_1)
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_1_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_1_ADDRESS                                          (0x1b0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_1_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_1_RESET                                            0x0

// 0x1b4 (HWSCH_CMD_RING_BASE_2)
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_2_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_2_ADDRESS                                          (0x1b4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_2_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_2_RESET                                            0x0

// 0x1b8 (HWSCH_CMD_RING_BASE_3)
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_3_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_3_ADDRESS                                          (0x1b8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_3_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_3_RESET                                            0x0

// 0x1bc (HWSCH_CMD_RING_BASE_4)
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_4_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_4_ADDRESS                                          (0x1bc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_4_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_4_RESET                                            0x0

// 0x1c0 (HWSCH_CMD_RING_BASE_5)
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_5_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_5_ADDRESS                                          (0x1c0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_5_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_5_RESET                                            0x0

// 0x1c4 (HWSCH_CMD_RING_BASE_6)
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_6_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_6_ADDRESS                                          (0x1c4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_6_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_6_RESET                                            0x0

// 0x1c8 (HWSCH_CMD_RING_BASE_7)
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_7_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_7_ADDRESS                                          (0x1c8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_7_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_7_RESET                                            0x0

// 0x1cc (HWSCH_CMD_RING_BASE_8)
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_8_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_8_ADDRESS                                          (0x1cc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_8_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_8_RESET                                            0x0

// 0x1d0 (HWSCH_CMD_RING_BASE_9)
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_LSB                     0
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_MSB                     31
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_MASK                    0xffffffff
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_9_HWSCH_CMD_RING_BASE_DATA_RESET                   0x0
#define HWSCH_CMD_RING_BASE_9_ADDRESS                                          (0x1d0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_9_RSTMASK                                          0xffffffff
#define HWSCH_CMD_RING_BASE_9_RESET                                            0x0

// 0x1d4 (HWSCH_CMD_RING_BASE_10)
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_10_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_10_ADDRESS                                         (0x1d4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_10_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_10_RESET                                           0x0

// 0x1d8 (HWSCH_CMD_RING_BASE_11)
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_11_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_11_ADDRESS                                         (0x1d8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_11_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_11_RESET                                           0x0

// 0x1dc (HWSCH_CMD_RING_BASE_12)
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_12_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_12_ADDRESS                                         (0x1dc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_12_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_12_RESET                                           0x0

// 0x1e0 (HWSCH_CMD_RING_BASE_13)
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_13_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_13_ADDRESS                                         (0x1e0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_13_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_13_RESET                                           0x0

// 0x1e4 (HWSCH_CMD_RING_BASE_14)
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_14_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_14_ADDRESS                                         (0x1e4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_14_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_14_RESET                                           0x0

// 0x1e8 (HWSCH_CMD_RING_BASE_15)
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_LSB                    0
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_MSB                    31
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_MASK                   0xffffffff
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_MASK) >> HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_LSB)
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_LSB) & HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_MASK)
#define HWSCH_CMD_RING_BASE_15_HWSCH_CMD_RING_BASE_DATA_RESET                  0x0
#define HWSCH_CMD_RING_BASE_15_ADDRESS                                         (0x1e8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_BASE_15_RSTMASK                                         0xffffffff
#define HWSCH_CMD_RING_BASE_15_RESET                                           0x0

// 0x1ec (HWSCH_CMD_RING_NUM_ENTRY_0)
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_0_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_0_ADDRESS                                     (0x1ec + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_0_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_0_RESET                                       0x100

// 0x1f0 (HWSCH_CMD_RING_NUM_ENTRY_1)
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_1_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_1_ADDRESS                                     (0x1f0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_1_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_1_RESET                                       0x100

// 0x1f4 (HWSCH_CMD_RING_NUM_ENTRY_2)
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_2_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_2_ADDRESS                                     (0x1f4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_2_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_2_RESET                                       0x100

// 0x1f8 (HWSCH_CMD_RING_NUM_ENTRY_3)
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_3_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_3_ADDRESS                                     (0x1f8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_3_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_3_RESET                                       0x100

// 0x1fc (HWSCH_CMD_RING_NUM_ENTRY_4)
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_4_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_4_ADDRESS                                     (0x1fc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_4_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_4_RESET                                       0x100

// 0x200 (HWSCH_CMD_RING_NUM_ENTRY_5)
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_5_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_5_ADDRESS                                     (0x200 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_5_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_5_RESET                                       0x100

// 0x204 (HWSCH_CMD_RING_NUM_ENTRY_6)
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_6_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_6_ADDRESS                                     (0x204 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_6_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_6_RESET                                       0x100

// 0x208 (HWSCH_CMD_RING_NUM_ENTRY_7)
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_7_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_7_ADDRESS                                     (0x208 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_7_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_7_RESET                                       0x100

// 0x20c (HWSCH_CMD_RING_NUM_ENTRY_8)
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_8_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_8_ADDRESS                                     (0x20c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_8_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_8_RESET                                       0x100

// 0x210 (HWSCH_CMD_RING_NUM_ENTRY_9)
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB           0
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB           15
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK          0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)        (((x) & HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_9_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET         0x100
#define HWSCH_CMD_RING_NUM_ENTRY_9_ADDRESS                                     (0x210 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_9_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_9_RESET                                       0x100

// 0x214 (HWSCH_CMD_RING_NUM_ENTRY_10)
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_10_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_10_ADDRESS                                    (0x214 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_10_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_10_RESET                                      0x100

// 0x218 (HWSCH_CMD_RING_NUM_ENTRY_11)
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_11_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_11_ADDRESS                                    (0x218 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_11_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_11_RESET                                      0x100

// 0x21c (HWSCH_CMD_RING_NUM_ENTRY_12)
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_12_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_12_ADDRESS                                    (0x21c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_12_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_12_RESET                                      0x100

// 0x220 (HWSCH_CMD_RING_NUM_ENTRY_13)
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_13_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_13_ADDRESS                                    (0x220 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_13_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_13_RESET                                      0x100

// 0x224 (HWSCH_CMD_RING_NUM_ENTRY_14)
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_14_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_14_ADDRESS                                    (0x224 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_14_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_14_RESET                                      0x100

// 0x228 (HWSCH_CMD_RING_NUM_ENTRY_15)
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB          0
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_MSB          15
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK         0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_GET(x)       (((x) & HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK) >> HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB)
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_LSB) & HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_MASK)
#define HWSCH_CMD_RING_NUM_ENTRY_15_HWSCH_CMD_RING_NUM_ENTRY_DATA_RESET        0x100
#define HWSCH_CMD_RING_NUM_ENTRY_15_ADDRESS                                    (0x228 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_NUM_ENTRY_15_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_NUM_ENTRY_15_RESET                                      0x100

// 0x22c (HWSCH_CMD_RING_HEAD_0)
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_0_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_0_ADDRESS                                          (0x22c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_0_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_0_RESET                                            0x0

// 0x230 (HWSCH_CMD_RING_HEAD_1)
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_1_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_1_ADDRESS                                          (0x230 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_1_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_1_RESET                                            0x0

// 0x234 (HWSCH_CMD_RING_HEAD_2)
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_2_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_2_ADDRESS                                          (0x234 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_2_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_2_RESET                                            0x0

// 0x238 (HWSCH_CMD_RING_HEAD_3)
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_3_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_3_ADDRESS                                          (0x238 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_3_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_3_RESET                                            0x0

// 0x23c (HWSCH_CMD_RING_HEAD_4)
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_4_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_4_ADDRESS                                          (0x23c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_4_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_4_RESET                                            0x0

// 0x240 (HWSCH_CMD_RING_HEAD_5)
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_5_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_5_ADDRESS                                          (0x240 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_5_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_5_RESET                                            0x0

// 0x244 (HWSCH_CMD_RING_HEAD_6)
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_6_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_6_ADDRESS                                          (0x244 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_6_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_6_RESET                                            0x0

// 0x248 (HWSCH_CMD_RING_HEAD_7)
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_7_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_7_ADDRESS                                          (0x248 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_7_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_7_RESET                                            0x0

// 0x24c (HWSCH_CMD_RING_HEAD_8)
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_8_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_8_ADDRESS                                          (0x24c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_8_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_8_RESET                                            0x0

// 0x250 (HWSCH_CMD_RING_HEAD_9)
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_LSB                     0
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_MSB                     15
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_9_HWSCH_CMD_RING_HEAD_DATA_RESET                   0x0
#define HWSCH_CMD_RING_HEAD_9_ADDRESS                                          (0x250 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_9_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_HEAD_9_RESET                                            0x0

// 0x254 (HWSCH_CMD_RING_HEAD_10)
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_10_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_10_ADDRESS                                         (0x254 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_10_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_10_RESET                                           0x0

// 0x258 (HWSCH_CMD_RING_HEAD_11)
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_11_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_11_ADDRESS                                         (0x258 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_11_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_11_RESET                                           0x0

// 0x25c (HWSCH_CMD_RING_HEAD_12)
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_12_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_12_ADDRESS                                         (0x25c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_12_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_12_RESET                                           0x0

// 0x260 (HWSCH_CMD_RING_HEAD_13)
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_13_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_13_ADDRESS                                         (0x260 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_13_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_13_RESET                                           0x0

// 0x264 (HWSCH_CMD_RING_HEAD_14)
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_14_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_14_ADDRESS                                         (0x264 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_14_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_14_RESET                                           0x0

// 0x268 (HWSCH_CMD_RING_HEAD_15)
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_LSB                    0
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_MSB                    15
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_MASK) >> HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_LSB)
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_LSB) & HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_MASK)
#define HWSCH_CMD_RING_HEAD_15_HWSCH_CMD_RING_HEAD_DATA_RESET                  0x0
#define HWSCH_CMD_RING_HEAD_15_ADDRESS                                         (0x268 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_HEAD_15_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_HEAD_15_RESET                                           0x0

// 0x26c (HWSCH_CMD_RING_TAIL_0)
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_0_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_0_ADDRESS                                          (0x26c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_0_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_0_RESET                                            0x0

// 0x270 (HWSCH_CMD_RING_TAIL_1)
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_1_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_1_ADDRESS                                          (0x270 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_1_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_1_RESET                                            0x0

// 0x274 (HWSCH_CMD_RING_TAIL_2)
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_2_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_2_ADDRESS                                          (0x274 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_2_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_2_RESET                                            0x0

// 0x278 (HWSCH_CMD_RING_TAIL_3)
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_3_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_3_ADDRESS                                          (0x278 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_3_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_3_RESET                                            0x0

// 0x27c (HWSCH_CMD_RING_TAIL_4)
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_4_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_4_ADDRESS                                          (0x27c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_4_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_4_RESET                                            0x0

// 0x280 (HWSCH_CMD_RING_TAIL_5)
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_5_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_5_ADDRESS                                          (0x280 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_5_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_5_RESET                                            0x0

// 0x284 (HWSCH_CMD_RING_TAIL_6)
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_6_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_6_ADDRESS                                          (0x284 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_6_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_6_RESET                                            0x0

// 0x288 (HWSCH_CMD_RING_TAIL_7)
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_7_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_7_ADDRESS                                          (0x288 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_7_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_7_RESET                                            0x0

// 0x28c (HWSCH_CMD_RING_TAIL_8)
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_8_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_8_ADDRESS                                          (0x28c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_8_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_8_RESET                                            0x0

// 0x290 (HWSCH_CMD_RING_TAIL_9)
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_LSB                     0
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_MSB                     15
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_MASK                    0xffff
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_GET(x)                  (((x) & HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_SET(x)                  (((0 | (x)) << HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_9_HWSCH_CMD_RING_TAIL_DATA_RESET                   0x0
#define HWSCH_CMD_RING_TAIL_9_ADDRESS                                          (0x290 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_9_RSTMASK                                          0xffff
#define HWSCH_CMD_RING_TAIL_9_RESET                                            0x0

// 0x294 (HWSCH_CMD_RING_TAIL_10)
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_10_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_10_ADDRESS                                         (0x294 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_10_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_10_RESET                                           0x0

// 0x298 (HWSCH_CMD_RING_TAIL_11)
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_11_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_11_ADDRESS                                         (0x298 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_11_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_11_RESET                                           0x0

// 0x29c (HWSCH_CMD_RING_TAIL_12)
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_12_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_12_ADDRESS                                         (0x29c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_12_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_12_RESET                                           0x0

// 0x2a0 (HWSCH_CMD_RING_TAIL_13)
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_13_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_13_ADDRESS                                         (0x2a0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_13_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_13_RESET                                           0x0

// 0x2a4 (HWSCH_CMD_RING_TAIL_14)
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_14_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_14_ADDRESS                                         (0x2a4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_14_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_14_RESET                                           0x0

// 0x2a8 (HWSCH_CMD_RING_TAIL_15)
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_LSB                    0
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_MSB                    15
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_MASK                   0xffff
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_GET(x)                 (((x) & HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_MASK) >> HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_LSB)
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_SET(x)                 (((0 | (x)) << HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_LSB) & HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_MASK)
#define HWSCH_CMD_RING_TAIL_15_HWSCH_CMD_RING_TAIL_DATA_RESET                  0x0
#define HWSCH_CMD_RING_TAIL_15_ADDRESS                                         (0x2a8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_TAIL_15_RSTMASK                                         0xffff
#define HWSCH_CMD_RING_TAIL_15_RESET                                           0x0

// 0x2ac (HWSCH_CMD_RING_THRESHOLD_0)
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_0_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_0_ADDRESS                                     (0x2ac + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_0_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_0_RESET                                       0xf0

// 0x2b0 (HWSCH_CMD_RING_THRESHOLD_1)
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_1_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_1_ADDRESS                                     (0x2b0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_1_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_1_RESET                                       0xf0

// 0x2b4 (HWSCH_CMD_RING_THRESHOLD_2)
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_2_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_2_ADDRESS                                     (0x2b4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_2_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_2_RESET                                       0xf0

// 0x2b8 (HWSCH_CMD_RING_THRESHOLD_3)
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_3_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_3_ADDRESS                                     (0x2b8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_3_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_3_RESET                                       0xf0

// 0x2bc (HWSCH_CMD_RING_THRESHOLD_4)
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_4_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_4_ADDRESS                                     (0x2bc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_4_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_4_RESET                                       0xf0

// 0x2c0 (HWSCH_CMD_RING_THRESHOLD_5)
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_5_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_5_ADDRESS                                     (0x2c0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_5_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_5_RESET                                       0xf0

// 0x2c4 (HWSCH_CMD_RING_THRESHOLD_6)
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_6_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_6_ADDRESS                                     (0x2c4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_6_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_6_RESET                                       0xf0

// 0x2c8 (HWSCH_CMD_RING_THRESHOLD_7)
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_7_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_7_ADDRESS                                     (0x2c8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_7_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_7_RESET                                       0xf0

// 0x2cc (HWSCH_CMD_RING_THRESHOLD_8)
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_8_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_8_ADDRESS                                     (0x2cc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_8_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_8_RESET                                       0xf0

// 0x2d0 (HWSCH_CMD_RING_THRESHOLD_9)
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_LSB           0
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_MSB           15
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_MASK          0xffff
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)        (((x) & HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)        (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_9_HWSCH_CMD_RING_THRESHOLD_DATA_RESET         0xf0
#define HWSCH_CMD_RING_THRESHOLD_9_ADDRESS                                     (0x2d0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_9_RSTMASK                                     0xffff
#define HWSCH_CMD_RING_THRESHOLD_9_RESET                                       0xf0

// 0x2d4 (HWSCH_CMD_RING_THRESHOLD_10)
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_10_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_10_ADDRESS                                    (0x2d4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_10_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_10_RESET                                      0xf0

// 0x2d8 (HWSCH_CMD_RING_THRESHOLD_11)
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_11_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_11_ADDRESS                                    (0x2d8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_11_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_11_RESET                                      0xf0

// 0x2dc (HWSCH_CMD_RING_THRESHOLD_12)
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_12_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_12_ADDRESS                                    (0x2dc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_12_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_12_RESET                                      0xf0

// 0x2e0 (HWSCH_CMD_RING_THRESHOLD_13)
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_13_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_13_ADDRESS                                    (0x2e0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_13_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_13_RESET                                      0xf0

// 0x2e4 (HWSCH_CMD_RING_THRESHOLD_14)
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_14_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_14_ADDRESS                                    (0x2e4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_14_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_14_RESET                                      0xf0

// 0x2e8 (HWSCH_CMD_RING_THRESHOLD_15)
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_LSB          0
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_MSB          15
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_MASK         0xffff
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_GET(x)       (((x) & HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_MASK) >> HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_LSB)
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_SET(x)       (((0 | (x)) << HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_LSB) & HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_MASK)
#define HWSCH_CMD_RING_THRESHOLD_15_HWSCH_CMD_RING_THRESHOLD_DATA_RESET        0xf0
#define HWSCH_CMD_RING_THRESHOLD_15_ADDRESS                                    (0x2e8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_THRESHOLD_15_RSTMASK                                    0xffff
#define HWSCH_CMD_RING_THRESHOLD_15_RESET                                      0xf0

// 0x2ec (HWSCH_STATUS_BASE)
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_LSB                           0
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_MSB                           31
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_MASK                          0xffffffff
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_GET(x)                        (((x) & HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_MASK) >> HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_LSB)
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_SET(x)                        (((0 | (x)) << HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_LSB) & HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_MASK)
#define HWSCH_STATUS_BASE_HWSCH_STATUS_BASE_DATA_RESET                         0x0
#define HWSCH_STATUS_BASE_ADDRESS                                              (0x2ec + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_STATUS_BASE_RSTMASK                                              0xffffffff
#define HWSCH_STATUS_BASE_RESET                                                0x0

// 0x2f0 (HWSCH_STATUS_NUM_ENTRY)
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_LSB                 0
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_MSB                 15
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_MASK                0xffff
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_GET(x)              (((x) & HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_MASK) >> HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_LSB)
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_SET(x)              (((0 | (x)) << HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_LSB) & HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_MASK)
#define HWSCH_STATUS_NUM_ENTRY_HWSCH_STATUS_NUM_ENTRY_DATA_RESET               0x40
#define HWSCH_STATUS_NUM_ENTRY_ADDRESS                                         (0x2f0 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_STATUS_NUM_ENTRY_RSTMASK                                         0xffff
#define HWSCH_STATUS_NUM_ENTRY_RESET                                           0x40

// 0x2f4 (HWSCH_STATUS_HEAD)
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_LSB                           0
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_MSB                           15
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_MASK                          0xffff
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_GET(x)                        (((x) & HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_MASK) >> HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_LSB)
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_SET(x)                        (((0 | (x)) << HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_LSB) & HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_MASK)
#define HWSCH_STATUS_HEAD_HWSCH_STATUS_HEAD_DATA_RESET                         0x0
#define HWSCH_STATUS_HEAD_ADDRESS                                              (0x2f4 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_STATUS_HEAD_RSTMASK                                              0xffff
#define HWSCH_STATUS_HEAD_RESET                                                0x0

// 0x2f8 (HWSCH_STATUS_TAIL)
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_LSB                           0
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_MSB                           15
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_MASK                          0xffff
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_GET(x)                        (((x) & HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_MASK) >> HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_LSB)
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_SET(x)                        (((0 | (x)) << HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_LSB) & HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_MASK)
#define HWSCH_STATUS_TAIL_HWSCH_STATUS_TAIL_DATA_RESET                         0x0
#define HWSCH_STATUS_TAIL_ADDRESS                                              (0x2f8 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_STATUS_TAIL_RSTMASK                                              0xffff
#define HWSCH_STATUS_TAIL_RESET                                                0x0

// 0x2fc (HWSCH_STATUS_RING_THRESHOLDS)
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_LSB                       16
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_MSB                       31
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_MASK                      0xffff0000
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_GET(x)                    (((x) & HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_MASK) >> HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_LSB)
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_SET(x)                    (((0 | (x)) << HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_LSB) & HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_MASK)
#define HWSCH_STATUS_RING_THRESHOLDS_PANIC_WATERMARK_RESET                     0x4
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_LSB                         0
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_MSB                         15
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_MASK                        0xffff
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_GET(x)                      (((x) & HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_MASK) >> HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_LSB)
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_SET(x)                      (((0 | (x)) << HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_LSB) & HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_MASK)
#define HWSCH_STATUS_RING_THRESHOLDS_LOW_WATERMARK_RESET                       0x10
#define HWSCH_STATUS_RING_THRESHOLDS_ADDRESS                                   (0x2fc + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_STATUS_RING_THRESHOLDS_RSTMASK                                   0xffffffff
#define HWSCH_STATUS_RING_THRESHOLDS_RESET                                     0x40010

// 0x300 (HWSCH_WATCHDOG_TIMER)
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_LSB                        0
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_MSB                        14
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_MASK                       0x7fff
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_GET(x)                     (((x) & HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_MASK) >> HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_LSB)
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_SET(x)                     (((0 | (x)) << HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_LSB) & HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_MASK)
#define HWSCH_WATCHDOG_TIMER_HWSCH_WATCHDOG_TIMEOUT_RESET                      0x100
#define HWSCH_WATCHDOG_TIMER_ADDRESS                                           (0x300 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_WATCHDOG_TIMER_RSTMASK                                           0x7fff
#define HWSCH_WATCHDOG_TIMER_RESET                                             0x100

// 0x304 (HWSCH_AXI_TIMEOUT)
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_LSB                                0
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_MSB                                15
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_MASK                               0xffff
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_GET(x)                             (((x) & HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_MASK) >> HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_LSB)
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_SET(x)                             (((0 | (x)) << HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_LSB) & HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_MASK)
#define HWSCH_AXI_TIMEOUT_HWSCH_AXI_TIMEOUT_RESET                              0x1f4
#define HWSCH_AXI_TIMEOUT_ADDRESS                                              (0x304 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_AXI_TIMEOUT_RSTMASK                                              0xffff
#define HWSCH_AXI_TIMEOUT_RESET                                                0x1f4

// 0x308 (HWSCH_CMD_RING_PAUSE)
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_LSB                             15
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_MSB                             15
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_MASK                            0x8000
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING15_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_LSB                             14
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_MSB                             14
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_MASK                            0x4000
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING14_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_LSB                             13
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_MSB                             13
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_MASK                            0x2000
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING13_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_LSB                             12
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_MSB                             12
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_MASK                            0x1000
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING12_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_LSB                             11
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_MSB                             11
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_MASK                            0x800
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING11_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_LSB                             10
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_MSB                             10
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_MASK                            0x400
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_GET(x)                          (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_SET(x)                          (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING10_PAUSED_RESET                           0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_LSB                              9
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_MSB                              9
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_MASK                             0x200
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING9_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_LSB                              8
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_MSB                              8
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_MASK                             0x100
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING8_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_LSB                              7
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_MSB                              7
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_MASK                             0x80
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING7_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_LSB                              6
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_MSB                              6
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_MASK                             0x40
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING6_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_LSB                              5
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_MSB                              5
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_MASK                             0x20
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING5_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_LSB                              4
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_MSB                              4
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_MASK                             0x10
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING4_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_LSB                              3
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_MSB                              3
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_MASK                             0x8
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING3_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_LSB                              2
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_MSB                              2
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_MASK                             0x4
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING2_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_LSB                              1
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_MSB                              1
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_MASK                             0x2
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING1_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_LSB                              0
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_MSB                              0
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_MASK                             0x1
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_GET(x)                           (((x) & HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_MASK) >> HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_LSB)
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_SET(x)                           (((0 | (x)) << HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_LSB) & HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_MASK)
#define HWSCH_CMD_RING_PAUSE_CMD_RING0_PAUSED_RESET                            0x0
#define HWSCH_CMD_RING_PAUSE_ADDRESS                                           (0x308 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_RING_PAUSE_RSTMASK                                           0xffff
#define HWSCH_CMD_RING_PAUSE_RESET                                             0x0

// 0x30c (HWSCH_FLUSH_CONTROL)
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_LSB                           0
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_MSB                           0
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_MASK                          0x1
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_GET(x)                        (((x) & HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_MASK) >> HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_LSB)
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_SET(x)                        (((0 | (x)) << HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_LSB) & HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_MASK)
#define HWSCH_FLUSH_CONTROL_FLUSH_REQUEST_ACTION_RESET                         0x0
#define HWSCH_FLUSH_CONTROL_ADDRESS                                            (0x30c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_FLUSH_CONTROL_RSTMASK                                            0x1
#define HWSCH_FLUSH_CONTROL_RESET                                              0x0

// 0x310 (HWSCH_SEND_FLUSH)
#define HWSCH_SEND_FLUSH_SEND_FLUSH_LSB                                        31
#define HWSCH_SEND_FLUSH_SEND_FLUSH_MSB                                        31
#define HWSCH_SEND_FLUSH_SEND_FLUSH_MASK                                       0x80000000
#define HWSCH_SEND_FLUSH_SEND_FLUSH_GET(x)                                     (((x) & HWSCH_SEND_FLUSH_SEND_FLUSH_MASK) >> HWSCH_SEND_FLUSH_SEND_FLUSH_LSB)
#define HWSCH_SEND_FLUSH_SEND_FLUSH_SET(x)                                     (((0 | (x)) << HWSCH_SEND_FLUSH_SEND_FLUSH_LSB) & HWSCH_SEND_FLUSH_SEND_FLUSH_MASK)
#define HWSCH_SEND_FLUSH_SEND_FLUSH_RESET                                      0x0
#define HWSCH_SEND_FLUSH_FLUSH_MASK_LSB                                        0
#define HWSCH_SEND_FLUSH_FLUSH_MASK_MSB                                        15
#define HWSCH_SEND_FLUSH_FLUSH_MASK_MASK                                       0xffff
#define HWSCH_SEND_FLUSH_FLUSH_MASK_GET(x)                                     (((x) & HWSCH_SEND_FLUSH_FLUSH_MASK_MASK) >> HWSCH_SEND_FLUSH_FLUSH_MASK_LSB)
#define HWSCH_SEND_FLUSH_FLUSH_MASK_SET(x)                                     (((0 | (x)) << HWSCH_SEND_FLUSH_FLUSH_MASK_LSB) & HWSCH_SEND_FLUSH_FLUSH_MASK_MASK)
#define HWSCH_SEND_FLUSH_FLUSH_MASK_RESET                                      0x0
#define HWSCH_SEND_FLUSH_ADDRESS                                               (0x310 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SEND_FLUSH_RSTMASK                                               0x8000ffff
#define HWSCH_SEND_FLUSH_RESET                                                 0x0

// 0x314 (HWSCH_FLUSH_STATUS)
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_LSB                                    0
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_MSB                                    0
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_MASK                                   0x1
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_GET(x)                                 (((x) & HWSCH_FLUSH_STATUS_FLUSH_STATUS_MASK) >> HWSCH_FLUSH_STATUS_FLUSH_STATUS_LSB)
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_SET(x)                                 (((0 | (x)) << HWSCH_FLUSH_STATUS_FLUSH_STATUS_LSB) & HWSCH_FLUSH_STATUS_FLUSH_STATUS_MASK)
#define HWSCH_FLUSH_STATUS_FLUSH_STATUS_RESET                                  0x0
#define HWSCH_FLUSH_STATUS_ADDRESS                                             (0x314 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_FLUSH_STATUS_RSTMASK                                             0x1
#define HWSCH_FLUSH_STATUS_RESET                                               0x0

// 0x318 (HWSCH_BOUNDARY_TIMER0)
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_LSB                  31
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_MSB                  31
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_MASK                 0x80000000
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_GET(x)               (((x) & HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_MASK) >> HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_LSB)
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_SET(x)               (((0 | (x)) << HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_LSB) & HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_MASK)
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_ENABLE_RESET                0x0
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_LSB                   0
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_MSB                   14
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_MASK                  0x7fff
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_GET(x)                (((x) & HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_MASK) >> HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_LSB)
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_SET(x)                (((0 | (x)) << HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_LSB) & HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_MASK)
#define HWSCH_BOUNDARY_TIMER0_HWSCH_BOUNDARY_TIMER_COUNT_RESET                 0x0
#define HWSCH_BOUNDARY_TIMER0_ADDRESS                                          (0x318 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BOUNDARY_TIMER0_RSTMASK                                          0x80007fff
#define HWSCH_BOUNDARY_TIMER0_RESET                                            0x0

// 0x31c (HWSCH_BOUNDARY_TIMER1)
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_LSB                  31
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_MSB                  31
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_MASK                 0x80000000
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_GET(x)               (((x) & HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_MASK) >> HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_LSB)
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_SET(x)               (((0 | (x)) << HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_LSB) & HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_MASK)
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_ENABLE_RESET                0x0
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_LSB                   0
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_MSB                   14
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_MASK                  0x7fff
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_GET(x)                (((x) & HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_MASK) >> HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_LSB)
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_SET(x)                (((0 | (x)) << HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_LSB) & HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_MASK)
#define HWSCH_BOUNDARY_TIMER1_HWSCH_BOUNDARY_TIMER_COUNT_RESET                 0x0
#define HWSCH_BOUNDARY_TIMER1_ADDRESS                                          (0x31c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BOUNDARY_TIMER1_RSTMASK                                          0x80007fff
#define HWSCH_BOUNDARY_TIMER1_RESET                                            0x0

// 0x320 (HWSCH_BOUNDARY_TIMER2)
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_LSB                  31
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_MSB                  31
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_MASK                 0x80000000
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_GET(x)               (((x) & HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_MASK) >> HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_LSB)
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_SET(x)               (((0 | (x)) << HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_LSB) & HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_MASK)
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_ENABLE_RESET                0x0
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_LSB                   0
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_MSB                   14
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_MASK                  0x7fff
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_GET(x)                (((x) & HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_MASK) >> HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_LSB)
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_SET(x)                (((0 | (x)) << HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_LSB) & HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_MASK)
#define HWSCH_BOUNDARY_TIMER2_HWSCH_BOUNDARY_TIMER_COUNT_RESET                 0x0
#define HWSCH_BOUNDARY_TIMER2_ADDRESS                                          (0x320 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BOUNDARY_TIMER2_RSTMASK                                          0x80007fff
#define HWSCH_BOUNDARY_TIMER2_RESET                                            0x0

// 0x324 (HWSCH_BOUNDARY_TIMER3)
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_LSB                  31
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_MSB                  31
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_MASK                 0x80000000
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_GET(x)               (((x) & HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_MASK) >> HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_LSB)
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_SET(x)               (((0 | (x)) << HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_LSB) & HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_MASK)
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_ENABLE_RESET                0x0
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_LSB                   0
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_MSB                   14
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_MASK                  0x7fff
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_GET(x)                (((x) & HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_MASK) >> HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_LSB)
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_SET(x)                (((0 | (x)) << HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_LSB) & HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_MASK)
#define HWSCH_BOUNDARY_TIMER3_HWSCH_BOUNDARY_TIMER_COUNT_RESET                 0x0
#define HWSCH_BOUNDARY_TIMER3_ADDRESS                                          (0x324 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BOUNDARY_TIMER3_RSTMASK                                          0x80007fff
#define HWSCH_BOUNDARY_TIMER3_RESET                                            0x0

// 0x328 (HWSCH_TXOP_CONTROL0)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_LSB                            24
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_MSB                            31
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_MASK                           0xff000000
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_GET(x)                         (((x) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_MASK) >> HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_LSB)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_LSB) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_MASK)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING3_RESET                          0x3
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_LSB                            16
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_MSB                            23
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_MASK                           0xff0000
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_GET(x)                         (((x) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_MASK) >> HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_LSB)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_LSB) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_MASK)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING2_RESET                          0x3
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_LSB                            8
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_MSB                            15
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_MASK                           0xff00
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_GET(x)                         (((x) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_MASK) >> HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_LSB)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_LSB) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_MASK)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING1_RESET                          0x3
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_LSB                            0
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_MSB                            7
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_MASK                           0xff
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_GET(x)                         (((x) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_MASK) >> HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_LSB)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_LSB) & HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_MASK)
#define HWSCH_TXOP_CONTROL0_TXOP_SEL_MASK_RING0_RESET                          0x3
#define HWSCH_TXOP_CONTROL0_ADDRESS                                            (0x328 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TXOP_CONTROL0_RSTMASK                                            0xffffffff
#define HWSCH_TXOP_CONTROL0_RESET                                              0x3030303

// 0x32c (HWSCH_TXOP_CONTROL1)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_LSB                            24
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_MSB                            31
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_MASK                           0xff000000
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_GET(x)                         (((x) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_MASK) >> HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_LSB)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_LSB) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_MASK)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING7_RESET                          0x3
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_LSB                            16
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_MSB                            23
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_MASK                           0xff0000
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_GET(x)                         (((x) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_MASK) >> HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_LSB)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_LSB) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_MASK)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING6_RESET                          0x3
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_LSB                            8
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_MSB                            15
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_MASK                           0xff00
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_GET(x)                         (((x) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_MASK) >> HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_LSB)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_LSB) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_MASK)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING5_RESET                          0x3
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_LSB                            0
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_MSB                            7
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_MASK                           0xff
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_GET(x)                         (((x) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_MASK) >> HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_LSB)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_LSB) & HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_MASK)
#define HWSCH_TXOP_CONTROL1_TXOP_SEL_MASK_RING4_RESET                          0x3
#define HWSCH_TXOP_CONTROL1_ADDRESS                                            (0x32c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TXOP_CONTROL1_RSTMASK                                            0xffffffff
#define HWSCH_TXOP_CONTROL1_RESET                                              0x3030303

// 0x330 (HWSCH_TXOP_CONTROL2)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_LSB                           24
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_MSB                           31
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_MASK                          0xff000000
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_GET(x)                        (((x) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_MASK) >> HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_LSB)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_LSB) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_MASK)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING11_RESET                         0x3
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_LSB                           16
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_MSB                           23
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_MASK                          0xff0000
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_GET(x)                        (((x) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_MASK) >> HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_LSB)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_LSB) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_MASK)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING10_RESET                         0x3
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_LSB                            8
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_MSB                            15
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_MASK                           0xff00
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_GET(x)                         (((x) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_MASK) >> HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_LSB)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_LSB) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_MASK)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING9_RESET                          0x3
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_LSB                            0
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_MSB                            7
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_MASK                           0xff
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_GET(x)                         (((x) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_MASK) >> HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_LSB)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_SET(x)                         (((0 | (x)) << HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_LSB) & HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_MASK)
#define HWSCH_TXOP_CONTROL2_TXOP_SEL_MASK_RING8_RESET                          0x3
#define HWSCH_TXOP_CONTROL2_ADDRESS                                            (0x330 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TXOP_CONTROL2_RSTMASK                                            0xffffffff
#define HWSCH_TXOP_CONTROL2_RESET                                              0x3030303

// 0x334 (HWSCH_TXOP_CONTROL3)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_LSB                           24
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_MSB                           31
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_MASK                          0xff000000
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_GET(x)                        (((x) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_MASK) >> HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_LSB)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_LSB) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_MASK)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING15_RESET                         0x3
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_LSB                           16
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_MSB                           23
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_MASK                          0xff0000
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_GET(x)                        (((x) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_MASK) >> HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_LSB)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_LSB) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_MASK)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING14_RESET                         0x3
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_LSB                           8
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_MSB                           15
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_MASK                          0xff00
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_GET(x)                        (((x) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_MASK) >> HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_LSB)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_LSB) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_MASK)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING13_RESET                         0x3
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_LSB                           0
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_MSB                           7
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_MASK                          0xff
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_GET(x)                        (((x) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_MASK) >> HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_LSB)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_SET(x)                        (((0 | (x)) << HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_LSB) & HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_MASK)
#define HWSCH_TXOP_CONTROL3_TXOP_SEL_MASK_RING12_RESET                         0x3
#define HWSCH_TXOP_CONTROL3_ADDRESS                                            (0x334 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TXOP_CONTROL3_RSTMASK                                            0xffffffff
#define HWSCH_TXOP_CONTROL3_RESET                                              0x3030303

// 0x338 (HWSCH_DEBUG_SELECT)
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_LSB                                    8
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_MSB                                    15
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_MASK                                   0xff00
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_GET(x)                                 (((x) & HWSCH_DEBUG_SELECT_BLOCK_SELECT_MASK) >> HWSCH_DEBUG_SELECT_BLOCK_SELECT_LSB)
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_SET(x)                                 (((0 | (x)) << HWSCH_DEBUG_SELECT_BLOCK_SELECT_LSB) & HWSCH_DEBUG_SELECT_BLOCK_SELECT_MASK)
#define HWSCH_DEBUG_SELECT_BLOCK_SELECT_RESET                                  0x0
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_LSB                                   0
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_MSB                                   7
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_MASK                                  0xff
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_GET(x)                                (((x) & HWSCH_DEBUG_SELECT_SIGNAL_SELECT_MASK) >> HWSCH_DEBUG_SELECT_SIGNAL_SELECT_LSB)
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_SET(x)                                (((0 | (x)) << HWSCH_DEBUG_SELECT_SIGNAL_SELECT_LSB) & HWSCH_DEBUG_SELECT_SIGNAL_SELECT_MASK)
#define HWSCH_DEBUG_SELECT_SIGNAL_SELECT_RESET                                 0x0
#define HWSCH_DEBUG_SELECT_ADDRESS                                             (0x338 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DEBUG_SELECT_RSTMASK                                             0xffff
#define HWSCH_DEBUG_SELECT_RESET                                               0x0

// 0x33c (HWSCH_DEBUG_OBS_U32)
#define HWSCH_DEBUG_OBS_U32_DATA_LSB                                           0
#define HWSCH_DEBUG_OBS_U32_DATA_MSB                                           31
#define HWSCH_DEBUG_OBS_U32_DATA_MASK                                          0xffffffff
#define HWSCH_DEBUG_OBS_U32_DATA_GET(x)                                        (((x) & HWSCH_DEBUG_OBS_U32_DATA_MASK) >> HWSCH_DEBUG_OBS_U32_DATA_LSB)
#define HWSCH_DEBUG_OBS_U32_DATA_SET(x)                                        (((0 | (x)) << HWSCH_DEBUG_OBS_U32_DATA_LSB) & HWSCH_DEBUG_OBS_U32_DATA_MASK)
#define HWSCH_DEBUG_OBS_U32_DATA_RESET                                         0x0
#define HWSCH_DEBUG_OBS_U32_ADDRESS                                            (0x33c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DEBUG_OBS_U32_RSTMASK                                            0xffffffff
#define HWSCH_DEBUG_OBS_U32_RESET                                              0x0

// 0x340 (HWSCH_DEBUG_OBS_L32)
#define HWSCH_DEBUG_OBS_L32_DATA_LSB                                           0
#define HWSCH_DEBUG_OBS_L32_DATA_MSB                                           31
#define HWSCH_DEBUG_OBS_L32_DATA_MASK                                          0xffffffff
#define HWSCH_DEBUG_OBS_L32_DATA_GET(x)                                        (((x) & HWSCH_DEBUG_OBS_L32_DATA_MASK) >> HWSCH_DEBUG_OBS_L32_DATA_LSB)
#define HWSCH_DEBUG_OBS_L32_DATA_SET(x)                                        (((0 | (x)) << HWSCH_DEBUG_OBS_L32_DATA_LSB) & HWSCH_DEBUG_OBS_L32_DATA_MASK)
#define HWSCH_DEBUG_OBS_L32_DATA_RESET                                         0x0
#define HWSCH_DEBUG_OBS_L32_ADDRESS                                            (0x340 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_DEBUG_OBS_L32_RSTMASK                                            0xffffffff
#define HWSCH_DEBUG_OBS_L32_RESET                                              0x0

// 0x344 (HWSCH_MGMT_STATS_CTRL)
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_LSB                                    31
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_MSB                                    31
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_MASK                                   0x80000000
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_GET(x)                                 (((x) & HWSCH_MGMT_STATS_CTRL_RESET_ALL_MASK) >> HWSCH_MGMT_STATS_CTRL_RESET_ALL_LSB)
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_SET(x)                                 (((0 | (x)) << HWSCH_MGMT_STATS_CTRL_RESET_ALL_LSB) & HWSCH_MGMT_STATS_CTRL_RESET_ALL_MASK)
#define HWSCH_MGMT_STATS_CTRL_RESET_ALL_RESET                                  0x1
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_LSB                               0
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_MSB                               15
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_MASK                              0xffff
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_GET(x)                            (((x) & HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_MASK) >> HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_LSB)
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_SET(x)                            (((0 | (x)) << HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_LSB) & HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_MASK)
#define HWSCH_MGMT_STATS_CTRL_MONITOR_BITMAP_RESET                             0xffff
#define HWSCH_MGMT_STATS_CTRL_ADDRESS                                          (0x344 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_MGMT_STATS_CTRL_RSTMASK                                          0x8000ffff
#define HWSCH_MGMT_STATS_CTRL_RESET                                            0x8000ffff

// 0x348 (HWSCH_ACK_PASS_STATS)
#define HWSCH_ACK_PASS_STATS_STATS_DIST_LSB                                    16
#define HWSCH_ACK_PASS_STATS_STATS_DIST_MSB                                    31
#define HWSCH_ACK_PASS_STATS_STATS_DIST_MASK                                   0xffff0000
#define HWSCH_ACK_PASS_STATS_STATS_DIST_GET(x)                                 (((x) & HWSCH_ACK_PASS_STATS_STATS_DIST_MASK) >> HWSCH_ACK_PASS_STATS_STATS_DIST_LSB)
#define HWSCH_ACK_PASS_STATS_STATS_DIST_SET(x)                                 (((0 | (x)) << HWSCH_ACK_PASS_STATS_STATS_DIST_LSB) & HWSCH_ACK_PASS_STATS_STATS_DIST_MASK)
#define HWSCH_ACK_PASS_STATS_STATS_DIST_RESET                                  0x0
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_LSB                                   0
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_MSB                                   15
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_MASK                                  0xffff
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_GET(x)                                (((x) & HWSCH_ACK_PASS_STATS_STATS_COUNT_MASK) >> HWSCH_ACK_PASS_STATS_STATS_COUNT_LSB)
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_SET(x)                                (((0 | (x)) << HWSCH_ACK_PASS_STATS_STATS_COUNT_LSB) & HWSCH_ACK_PASS_STATS_STATS_COUNT_MASK)
#define HWSCH_ACK_PASS_STATS_STATS_COUNT_RESET                                 0x0
#define HWSCH_ACK_PASS_STATS_ADDRESS                                           (0x348 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_ACK_PASS_STATS_RSTMASK                                           0xffffffff
#define HWSCH_ACK_PASS_STATS_RESET                                             0x0

// 0x34c (HWSCH_RETRY_STATS)
#define HWSCH_RETRY_STATS_STATS_DIST_LSB                                       16
#define HWSCH_RETRY_STATS_STATS_DIST_MSB                                       31
#define HWSCH_RETRY_STATS_STATS_DIST_MASK                                      0xffff0000
#define HWSCH_RETRY_STATS_STATS_DIST_GET(x)                                    (((x) & HWSCH_RETRY_STATS_STATS_DIST_MASK) >> HWSCH_RETRY_STATS_STATS_DIST_LSB)
#define HWSCH_RETRY_STATS_STATS_DIST_SET(x)                                    (((0 | (x)) << HWSCH_RETRY_STATS_STATS_DIST_LSB) & HWSCH_RETRY_STATS_STATS_DIST_MASK)
#define HWSCH_RETRY_STATS_STATS_DIST_RESET                                     0x0
#define HWSCH_RETRY_STATS_STATS_COUNT_LSB                                      0
#define HWSCH_RETRY_STATS_STATS_COUNT_MSB                                      15
#define HWSCH_RETRY_STATS_STATS_COUNT_MASK                                     0xffff
#define HWSCH_RETRY_STATS_STATS_COUNT_GET(x)                                   (((x) & HWSCH_RETRY_STATS_STATS_COUNT_MASK) >> HWSCH_RETRY_STATS_STATS_COUNT_LSB)
#define HWSCH_RETRY_STATS_STATS_COUNT_SET(x)                                   (((0 | (x)) << HWSCH_RETRY_STATS_STATS_COUNT_LSB) & HWSCH_RETRY_STATS_STATS_COUNT_MASK)
#define HWSCH_RETRY_STATS_STATS_COUNT_RESET                                    0x0
#define HWSCH_RETRY_STATS_ADDRESS                                              (0x34c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_RETRY_STATS_RSTMASK                                              0xffffffff
#define HWSCH_RETRY_STATS_RESET                                                0x0

// 0x350 (HWSCH_REQUEUE_STATS)
#define HWSCH_REQUEUE_STATS_STATS_DIST_LSB                                     16
#define HWSCH_REQUEUE_STATS_STATS_DIST_MSB                                     31
#define HWSCH_REQUEUE_STATS_STATS_DIST_MASK                                    0xffff0000
#define HWSCH_REQUEUE_STATS_STATS_DIST_GET(x)                                  (((x) & HWSCH_REQUEUE_STATS_STATS_DIST_MASK) >> HWSCH_REQUEUE_STATS_STATS_DIST_LSB)
#define HWSCH_REQUEUE_STATS_STATS_DIST_SET(x)                                  (((0 | (x)) << HWSCH_REQUEUE_STATS_STATS_DIST_LSB) & HWSCH_REQUEUE_STATS_STATS_DIST_MASK)
#define HWSCH_REQUEUE_STATS_STATS_DIST_RESET                                   0x0
#define HWSCH_REQUEUE_STATS_STATS_COUNT_LSB                                    0
#define HWSCH_REQUEUE_STATS_STATS_COUNT_MSB                                    15
#define HWSCH_REQUEUE_STATS_STATS_COUNT_MASK                                   0xffff
#define HWSCH_REQUEUE_STATS_STATS_COUNT_GET(x)                                 (((x) & HWSCH_REQUEUE_STATS_STATS_COUNT_MASK) >> HWSCH_REQUEUE_STATS_STATS_COUNT_LSB)
#define HWSCH_REQUEUE_STATS_STATS_COUNT_SET(x)                                 (((0 | (x)) << HWSCH_REQUEUE_STATS_STATS_COUNT_LSB) & HWSCH_REQUEUE_STATS_STATS_COUNT_MASK)
#define HWSCH_REQUEUE_STATS_STATS_COUNT_RESET                                  0x0
#define HWSCH_REQUEUE_STATS_ADDRESS                                            (0x350 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_REQUEUE_STATS_RSTMASK                                            0xffffffff
#define HWSCH_REQUEUE_STATS_RESET                                              0x0

// 0x354 (HWSCH_FILTER_STATS)
#define HWSCH_FILTER_STATS_STATS_DIST_LSB                                      16
#define HWSCH_FILTER_STATS_STATS_DIST_MSB                                      31
#define HWSCH_FILTER_STATS_STATS_DIST_MASK                                     0xffff0000
#define HWSCH_FILTER_STATS_STATS_DIST_GET(x)                                   (((x) & HWSCH_FILTER_STATS_STATS_DIST_MASK) >> HWSCH_FILTER_STATS_STATS_DIST_LSB)
#define HWSCH_FILTER_STATS_STATS_DIST_SET(x)                                   (((0 | (x)) << HWSCH_FILTER_STATS_STATS_DIST_LSB) & HWSCH_FILTER_STATS_STATS_DIST_MASK)
#define HWSCH_FILTER_STATS_STATS_DIST_RESET                                    0x0
#define HWSCH_FILTER_STATS_STATS_COUNT_LSB                                     0
#define HWSCH_FILTER_STATS_STATS_COUNT_MSB                                     15
#define HWSCH_FILTER_STATS_STATS_COUNT_MASK                                    0xffff
#define HWSCH_FILTER_STATS_STATS_COUNT_GET(x)                                  (((x) & HWSCH_FILTER_STATS_STATS_COUNT_MASK) >> HWSCH_FILTER_STATS_STATS_COUNT_LSB)
#define HWSCH_FILTER_STATS_STATS_COUNT_SET(x)                                  (((0 | (x)) << HWSCH_FILTER_STATS_STATS_COUNT_LSB) & HWSCH_FILTER_STATS_STATS_COUNT_MASK)
#define HWSCH_FILTER_STATS_STATS_COUNT_RESET                                   0x0
#define HWSCH_FILTER_STATS_ADDRESS                                             (0x354 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_FILTER_STATS_RSTMASK                                             0xffffffff
#define HWSCH_FILTER_STATS_RESET                                               0x0

// 0x358 (HWSCH_BSPLIT_STATS)
#define HWSCH_BSPLIT_STATS_STATS_DIST_LSB                                      16
#define HWSCH_BSPLIT_STATS_STATS_DIST_MSB                                      31
#define HWSCH_BSPLIT_STATS_STATS_DIST_MASK                                     0xffff0000
#define HWSCH_BSPLIT_STATS_STATS_DIST_GET(x)                                   (((x) & HWSCH_BSPLIT_STATS_STATS_DIST_MASK) >> HWSCH_BSPLIT_STATS_STATS_DIST_LSB)
#define HWSCH_BSPLIT_STATS_STATS_DIST_SET(x)                                   (((0 | (x)) << HWSCH_BSPLIT_STATS_STATS_DIST_LSB) & HWSCH_BSPLIT_STATS_STATS_DIST_MASK)
#define HWSCH_BSPLIT_STATS_STATS_DIST_RESET                                    0x0
#define HWSCH_BSPLIT_STATS_STATS_COUNT_LSB                                     0
#define HWSCH_BSPLIT_STATS_STATS_COUNT_MSB                                     15
#define HWSCH_BSPLIT_STATS_STATS_COUNT_MASK                                    0xffff
#define HWSCH_BSPLIT_STATS_STATS_COUNT_GET(x)                                  (((x) & HWSCH_BSPLIT_STATS_STATS_COUNT_MASK) >> HWSCH_BSPLIT_STATS_STATS_COUNT_LSB)
#define HWSCH_BSPLIT_STATS_STATS_COUNT_SET(x)                                  (((0 | (x)) << HWSCH_BSPLIT_STATS_STATS_COUNT_LSB) & HWSCH_BSPLIT_STATS_STATS_COUNT_MASK)
#define HWSCH_BSPLIT_STATS_STATS_COUNT_RESET                                   0x0
#define HWSCH_BSPLIT_STATS_ADDRESS                                             (0x358 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_BSPLIT_STATS_RSTMASK                                             0xffffffff
#define HWSCH_BSPLIT_STATS_RESET                                               0x0

// 0x35c (HWSCH_FLUSH_STATS)
#define HWSCH_FLUSH_STATS_STATS_DIST_LSB                                       16
#define HWSCH_FLUSH_STATS_STATS_DIST_MSB                                       31
#define HWSCH_FLUSH_STATS_STATS_DIST_MASK                                      0xffff0000
#define HWSCH_FLUSH_STATS_STATS_DIST_GET(x)                                    (((x) & HWSCH_FLUSH_STATS_STATS_DIST_MASK) >> HWSCH_FLUSH_STATS_STATS_DIST_LSB)
#define HWSCH_FLUSH_STATS_STATS_DIST_SET(x)                                    (((0 | (x)) << HWSCH_FLUSH_STATS_STATS_DIST_LSB) & HWSCH_FLUSH_STATS_STATS_DIST_MASK)
#define HWSCH_FLUSH_STATS_STATS_DIST_RESET                                     0x0
#define HWSCH_FLUSH_STATS_STATS_COUNT_LSB                                      0
#define HWSCH_FLUSH_STATS_STATS_COUNT_MSB                                      15
#define HWSCH_FLUSH_STATS_STATS_COUNT_MASK                                     0xffff
#define HWSCH_FLUSH_STATS_STATS_COUNT_GET(x)                                   (((x) & HWSCH_FLUSH_STATS_STATS_COUNT_MASK) >> HWSCH_FLUSH_STATS_STATS_COUNT_LSB)
#define HWSCH_FLUSH_STATS_STATS_COUNT_SET(x)                                   (((0 | (x)) << HWSCH_FLUSH_STATS_STATS_COUNT_LSB) & HWSCH_FLUSH_STATS_STATS_COUNT_MASK)
#define HWSCH_FLUSH_STATS_STATS_COUNT_RESET                                    0x0
#define HWSCH_FLUSH_STATS_ADDRESS                                              (0x35c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_FLUSH_STATS_RSTMASK                                              0xffffffff
#define HWSCH_FLUSH_STATS_RESET                                                0x0

// 0x360 (HWSCH_SEQEND_BIN_REG_0)
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_LSB                                  16
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_MSB                                  25
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_MASK                                 0x3ff0000
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_GET(x)                               (((x) & HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_MASK) >> HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_LSB)
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_SET(x)                               (((0 | (x)) << HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_LSB) & HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_MASK)
#define HWSCH_SEQEND_BIN_REG_0_REQUE_TYPE_RESET                                0x0
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_LSB                                  0
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_MSB                                  2
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_MASK                                 0x7
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_GET(x)                               (((x) & HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_MASK) >> HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_LSB)
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_SET(x)                               (((0 | (x)) << HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_LSB) & HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_MASK)
#define HWSCH_SEQEND_BIN_REG_0_RETRY_TYPE_RESET                                0x0
#define HWSCH_SEQEND_BIN_REG_0_ADDRESS                                         (0x360 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SEQEND_BIN_REG_0_RSTMASK                                         0x3ff0007
#define HWSCH_SEQEND_BIN_REG_0_RESET                                           0x0

// 0x364 (HWSCH_SEQEND_BIN_REG_1)
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_LSB                                  14
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_MSB                                  31
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_MASK                                 0xffffc000
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_GET(x)                               (((x) & HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_MASK) >> HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_LSB)
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_SET(x)                               (((0 | (x)) << HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_LSB) & HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_MASK)
#define HWSCH_SEQEND_BIN_REG_1_FLUSH_TYPE_RESET                                0x0
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_LSB                                 0
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_MSB                                 13
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_MASK                                0x3fff
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_GET(x)                              (((x) & HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_MASK) >> HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_LSB)
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_SET(x)                              (((0 | (x)) << HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_LSB) & HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_MASK)
#define HWSCH_SEQEND_BIN_REG_1_FILTER_TYPE_RESET                               0x0
#define HWSCH_SEQEND_BIN_REG_1_ADDRESS                                         (0x364 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_SEQEND_BIN_REG_1_RSTMASK                                         0xffffffff
#define HWSCH_SEQEND_BIN_REG_1_RESET                                           0x0

// 0x368 (HWSCH_TLV_IF_STATS)
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_LSB                                   16
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_MSB                                   31
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_MASK                                  0xffff0000
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_GET(x)                                (((x) & HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_MASK) >> HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_LSB)
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_SET(x)                                (((0 | (x)) << HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_LSB) & HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_MASK)
#define HWSCH_TLV_IF_STATS_TLV_OUT_COUNT_RESET                                 0x0
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_LSB                                    0
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_MSB                                    15
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_MASK                                   0xffff
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_GET(x)                                 (((x) & HWSCH_TLV_IF_STATS_TLV_IN_COUNT_MASK) >> HWSCH_TLV_IF_STATS_TLV_IN_COUNT_LSB)
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_SET(x)                                 (((0 | (x)) << HWSCH_TLV_IF_STATS_TLV_IN_COUNT_LSB) & HWSCH_TLV_IF_STATS_TLV_IN_COUNT_MASK)
#define HWSCH_TLV_IF_STATS_TLV_IN_COUNT_RESET                                  0x0
#define HWSCH_TLV_IF_STATS_ADDRESS                                             (0x368 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_TLV_IF_STATS_RSTMASK                                             0xffffffff
#define HWSCH_TLV_IF_STATS_RESET                                               0x0

// 0x36c (HWSCH_CMD_MGR_GLB_CTRL)
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_LSB                       8
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_MSB                       8
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_MASK                      0x100
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_GET(x)                    (((x) & HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_MASK) >> HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_LSB)
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_SET(x)                    (((0 | (x)) << HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_LSB) & HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_MASK)
#define HWSCH_CMD_MGR_GLB_CTRL_MAINTAIN_STATUS_ORDER_RESET                     0x0
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_LSB                               0
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_MSB                               7
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_MASK                              0xff
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_GET(x)                            (((x) & HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_MASK) >> HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_LSB)
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_SET(x)                            (((0 | (x)) << HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_LSB) & HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_MASK)
#define HWSCH_CMD_MGR_GLB_CTRL_REQUEUE_LIMIT_RESET                             0xff
#define HWSCH_CMD_MGR_GLB_CTRL_ADDRESS                                         (0x36c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CMD_MGR_GLB_CTRL_RSTMASK                                         0x1ff
#define HWSCH_CMD_MGR_GLB_CTRL_RESET                                           0xff

// 0x370 (HWSCH_WATCHDOG_STATUS)
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_LSB                            22
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_MSB                            22
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_MASK                           0x400000
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_GET(x)                         (((x) & HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_MASK) >> HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_LSB)
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_SET(x)                         (((0 | (x)) << HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_LSB) & HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_MASK)
#define HWSCH_WATCHDOG_STATUS_AXI_WR_RESP_ERROR_RESET                          0x0
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_LSB                               21
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_MSB                               21
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_MASK                              0x200000
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_GET(x)                            (((x) & HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_MASK) >> HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_LSB)
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_SET(x)                            (((0 | (x)) << HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_LSB) & HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_MASK)
#define HWSCH_WATCHDOG_STATUS_AXI_WR_TIMEOUT_RESET                             0x0
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_LSB                               20
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_MSB                               20
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_MASK                              0x100000
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_GET(x)                            (((x) & HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_MASK) >> HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_LSB)
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_SET(x)                            (((0 | (x)) << HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_LSB) & HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_MASK)
#define HWSCH_WATCHDOG_STATUS_AXI_RD_TIMEOUT_RESET                             0x0
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_LSB                                   19
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_MSB                                   19
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_MASK                                  0x80000
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_MASK) >> HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_LSB)
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_LSB) & HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_MASK)
#define HWSCH_WATCHDOG_STATUS_FLUSH_CTRL_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_LSB                                 18
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_MSB                                 18
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_MASK                                0x40000
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_GET(x)                              (((x) & HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_MASK) >> HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_LSB)
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_SET(x)                              (((0 | (x)) << HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_LSB) & HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_MASK)
#define HWSCH_WATCHDOG_STATUS_TX_STAT_CTRL_RESET                               0x0
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_LSB                                    17
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_MSB                                    17
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_MASK                                   0x20000
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_FES_SETUP_MASK) >> HWSCH_WATCHDOG_STATUS_FES_SETUP_LSB)
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_FES_SETUP_LSB) & HWSCH_WATCHDOG_STATUS_FES_SETUP_MASK)
#define HWSCH_WATCHDOG_STATUS_FES_SETUP_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_LSB                                     16
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_MSB                                     16
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_MASK                                    0x10000
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_GET(x)                                  (((x) & HWSCH_WATCHDOG_STATUS_MTU_WRAP_MASK) >> HWSCH_WATCHDOG_STATUS_MTU_WRAP_LSB)
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_SET(x)                                  (((0 | (x)) << HWSCH_WATCHDOG_STATUS_MTU_WRAP_LSB) & HWSCH_WATCHDOG_STATUS_MTU_WRAP_MASK)
#define HWSCH_WATCHDOG_STATUS_MTU_WRAP_RESET                                   0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_LSB                                   15
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_MSB                                   15
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_MASK                                  0x8000
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING15_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING15_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING15_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING15_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING15_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_LSB                                   14
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_MSB                                   14
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_MASK                                  0x4000
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING14_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING14_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING14_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING14_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING14_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_LSB                                   13
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_MSB                                   13
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_MASK                                  0x2000
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING13_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING13_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING13_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING13_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING13_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_LSB                                   12
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_MSB                                   12
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_MASK                                  0x1000
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING12_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING12_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING12_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING12_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING12_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_LSB                                   11
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_MSB                                   11
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_MASK                                  0x800
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING11_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING11_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING11_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING11_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING11_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_LSB                                   10
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_MSB                                   10
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_MASK                                  0x400
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_GET(x)                                (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING10_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING10_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_SET(x)                                (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING10_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING10_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING10_RESET                                 0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_LSB                                    9
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_MSB                                    9
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_MASK                                   0x200
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING9_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING9_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING9_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING9_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING9_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_LSB                                    8
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_MSB                                    8
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_MASK                                   0x100
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING8_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING8_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING8_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING8_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING8_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_LSB                                    7
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_MSB                                    7
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_MASK                                   0x80
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING7_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING7_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING7_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING7_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING7_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_LSB                                    6
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_MSB                                    6
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_MASK                                   0x40
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING6_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING6_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING6_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING6_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING6_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_LSB                                    5
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_MSB                                    5
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_MASK                                   0x20
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING5_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING5_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING5_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING5_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING5_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_LSB                                    4
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_MSB                                    4
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_MASK                                   0x10
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING4_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING4_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING4_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING4_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING4_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_LSB                                    3
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_MSB                                    3
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_MASK                                   0x8
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING3_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING3_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING3_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING3_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING3_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_LSB                                    2
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_MSB                                    2
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_MASK                                   0x4
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING2_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING2_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING2_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING2_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING2_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_LSB                                    1
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_MSB                                    1
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_MASK                                   0x2
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING1_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING1_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING1_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING1_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING1_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_LSB                                    0
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_MSB                                    0
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_MASK                                   0x1
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_GET(x)                                 (((x) & HWSCH_WATCHDOG_STATUS_CMD_RING0_MASK) >> HWSCH_WATCHDOG_STATUS_CMD_RING0_LSB)
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_SET(x)                                 (((0 | (x)) << HWSCH_WATCHDOG_STATUS_CMD_RING0_LSB) & HWSCH_WATCHDOG_STATUS_CMD_RING0_MASK)
#define HWSCH_WATCHDOG_STATUS_CMD_RING0_RESET                                  0x0
#define HWSCH_WATCHDOG_STATUS_ADDRESS                                          (0x370 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_WATCHDOG_STATUS_RSTMASK                                          0x7fffff
#define HWSCH_WATCHDOG_STATUS_RESET                                            0x0

// 0x374 (HWSCH_CLK_GATE_CONTROL)
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_LSB                           0
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_MSB                           22
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_MASK                          0x7fffff
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_GET(x)                        (((x) & HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_MASK) >> HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_LSB)
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_SET(x)                        (((0 | (x)) << HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_LSB) & HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_MASK)
#define HWSCH_CLK_GATE_CONTROL_CLK_GATE_OVERRIDE_RESET                         0x0
#define HWSCH_CLK_GATE_CONTROL_ADDRESS                                         (0x374 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_CLK_GATE_CONTROL_RSTMASK                                         0x7fffff
#define HWSCH_CLK_GATE_CONTROL_RESET                                           0x0

// 0x378 (HWSCH_EVT_CTRL_MTU_MASK)
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_LSB                                       0
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_MSB                                       14
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_MASK                                      0x7fff
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_GET(x)                                    (((x) & HWSCH_EVT_CTRL_MTU_MASK_MASK_MASK) >> HWSCH_EVT_CTRL_MTU_MASK_MASK_LSB)
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_SET(x)                                    (((0 | (x)) << HWSCH_EVT_CTRL_MTU_MASK_MASK_LSB) & HWSCH_EVT_CTRL_MTU_MASK_MASK_MASK)
#define HWSCH_EVT_CTRL_MTU_MASK_MASK_RESET                                     0x7fff
#define HWSCH_EVT_CTRL_MTU_MASK_ADDRESS                                        (0x378 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_EVT_CTRL_MTU_MASK_RSTMASK                                        0x7fff
#define HWSCH_EVT_CTRL_MTU_MASK_RESET                                          0x7fff

// 0x37c (MAC_SCH_EVENT_MASK_31_0)
#define MAC_SCH_EVENT_MASK_31_0_MASK_LSB                                       0
#define MAC_SCH_EVENT_MASK_31_0_MASK_MSB                                       31
#define MAC_SCH_EVENT_MASK_31_0_MASK_MASK                                      0xffffffff
#define MAC_SCH_EVENT_MASK_31_0_MASK_GET(x)                                    (((x) & MAC_SCH_EVENT_MASK_31_0_MASK_MASK) >> MAC_SCH_EVENT_MASK_31_0_MASK_LSB)
#define MAC_SCH_EVENT_MASK_31_0_MASK_SET(x)                                    (((0 | (x)) << MAC_SCH_EVENT_MASK_31_0_MASK_LSB) & MAC_SCH_EVENT_MASK_31_0_MASK_MASK)
#define MAC_SCH_EVENT_MASK_31_0_MASK_RESET                                     0x3fffff
#define MAC_SCH_EVENT_MASK_31_0_ADDRESS                                        (0x37c + __MAC_HWSCH_REG_BASE_ADDRESS)
#define MAC_SCH_EVENT_MASK_31_0_RSTMASK                                        0xffffffff
#define MAC_SCH_EVENT_MASK_31_0_RESET                                          0x3fffff

// 0x380 (MAC_SCH_EVENT_MASK_63_32)
#define MAC_SCH_EVENT_MASK_63_32_MASK_LSB                                      0
#define MAC_SCH_EVENT_MASK_63_32_MASK_MSB                                      2
#define MAC_SCH_EVENT_MASK_63_32_MASK_MASK                                     0x7
#define MAC_SCH_EVENT_MASK_63_32_MASK_GET(x)                                   (((x) & MAC_SCH_EVENT_MASK_63_32_MASK_MASK) >> MAC_SCH_EVENT_MASK_63_32_MASK_LSB)
#define MAC_SCH_EVENT_MASK_63_32_MASK_SET(x)                                   (((0 | (x)) << MAC_SCH_EVENT_MASK_63_32_MASK_LSB) & MAC_SCH_EVENT_MASK_63_32_MASK_MASK)
#define MAC_SCH_EVENT_MASK_63_32_MASK_RESET                                    0x7
#define MAC_SCH_EVENT_MASK_63_32_ADDRESS                                       (0x380 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define MAC_SCH_EVENT_MASK_63_32_RSTMASK                                       0x7
#define MAC_SCH_EVENT_MASK_63_32_RESET                                         0x7

// 0x384 (HWSCH_QUIET_FLUSH_STATS)
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_LSB                           16
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_MSB                           31
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_MASK                          0xffff0000
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_GET(x)                        (((x) & HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_MASK) >> HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_LSB)
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_SET(x)                        (((0 | (x)) << HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_LSB) & HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_MASK)
#define HWSCH_QUIET_FLUSH_STATS_AUTO_FLUSH_COUNT_RESET                         0x0
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_LSB                        0
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_MSB                        15
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_MASK                       0xffff
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_GET(x)                     (((x) & HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_MASK) >> HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_LSB)
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_SET(x)                     (((0 | (x)) << HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_LSB) & HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_MASK)
#define HWSCH_QUIET_FLUSH_STATS_PREBKOF_FLUSH_COUNT_RESET                      0x0
#define HWSCH_QUIET_FLUSH_STATS_ADDRESS                                        (0x384 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_QUIET_FLUSH_STATS_RSTMASK                                        0xffffffff
#define HWSCH_QUIET_FLUSH_STATS_RESET                                          0x0

// 0x388 (HWSCH_INTERNAL_CTL)
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_LSB                           0
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_MSB                           0
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_MASK                          0x1
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_GET(x)                        (((x) & HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_MASK) >> HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_LSB)
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_SET(x)                        (((0 | (x)) << HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_LSB) & HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_MASK)
#define HWSCH_INTERNAL_CTL_CASCADE_160MHZ_ENABLE_RESET                         0x0
#define HWSCH_INTERNAL_CTL_ADDRESS                                             (0x388 + __MAC_HWSCH_REG_BASE_ADDRESS)
#define HWSCH_INTERNAL_CTL_RSTMASK                                             0x1
#define HWSCH_INTERNAL_CTL_RESET                                               0x0



#endif /* _MAC_HWSCH_REG_H_ */
