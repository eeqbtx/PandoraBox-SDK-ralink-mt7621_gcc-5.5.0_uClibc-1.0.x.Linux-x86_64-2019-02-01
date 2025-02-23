/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _EFUSE_REG_H_
#define _EFUSE_REG_H_


#ifndef __EFUSE_REG_BASE_ADDRESS
#define __EFUSE_REG_BASE_ADDRESS (0x86000)
#endif


// 0x0 (EFUSE_WR_ENABLE_REG)
#define EFUSE_WR_ENABLE_REG_V_LSB                                              0
#define EFUSE_WR_ENABLE_REG_V_MSB                                              0
#define EFUSE_WR_ENABLE_REG_V_MASK                                             0x1
#define EFUSE_WR_ENABLE_REG_V_GET(x)                                           (((x) & EFUSE_WR_ENABLE_REG_V_MASK) >> EFUSE_WR_ENABLE_REG_V_LSB)
#define EFUSE_WR_ENABLE_REG_V_SET(x)                                           (((0 | (x)) << EFUSE_WR_ENABLE_REG_V_LSB) & EFUSE_WR_ENABLE_REG_V_MASK)
#define EFUSE_WR_ENABLE_REG_V_RESET                                            0x0
#define EFUSE_WR_ENABLE_REG_ADDRESS                                            (0x0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_WR_ENABLE_REG_RSTMASK                                            0x1
#define EFUSE_WR_ENABLE_REG_RESET                                              0x0

// 0x4 (EFUSE_INT_ENABLE_REG)
#define EFUSE_INT_ENABLE_REG_V_LSB                                             0
#define EFUSE_INT_ENABLE_REG_V_MSB                                             0
#define EFUSE_INT_ENABLE_REG_V_MASK                                            0x1
#define EFUSE_INT_ENABLE_REG_V_GET(x)                                          (((x) & EFUSE_INT_ENABLE_REG_V_MASK) >> EFUSE_INT_ENABLE_REG_V_LSB)
#define EFUSE_INT_ENABLE_REG_V_SET(x)                                          (((0 | (x)) << EFUSE_INT_ENABLE_REG_V_LSB) & EFUSE_INT_ENABLE_REG_V_MASK)
#define EFUSE_INT_ENABLE_REG_V_RESET                                           0x1
#define EFUSE_INT_ENABLE_REG_ADDRESS                                           (0x4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INT_ENABLE_REG_RSTMASK                                           0x1
#define EFUSE_INT_ENABLE_REG_RESET                                             0x1

// 0x8 (EFUSE_INT_STATUS_REG)
#define EFUSE_INT_STATUS_REG_V_LSB                                             0
#define EFUSE_INT_STATUS_REG_V_MSB                                             0
#define EFUSE_INT_STATUS_REG_V_MASK                                            0x1
#define EFUSE_INT_STATUS_REG_V_GET(x)                                          (((x) & EFUSE_INT_STATUS_REG_V_MASK) >> EFUSE_INT_STATUS_REG_V_LSB)
#define EFUSE_INT_STATUS_REG_V_SET(x)                                          (((0 | (x)) << EFUSE_INT_STATUS_REG_V_LSB) & EFUSE_INT_STATUS_REG_V_MASK)
#define EFUSE_INT_STATUS_REG_V_RESET                                           0x0
#define EFUSE_INT_STATUS_REG_ADDRESS                                           (0x8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INT_STATUS_REG_RSTMASK                                           0x1
#define EFUSE_INT_STATUS_REG_RESET                                             0x0

// 0xc (BITMASK_WR_REG)
#define BITMASK_WR_REG_V_LSB                                                   0
#define BITMASK_WR_REG_V_MSB                                                   31
#define BITMASK_WR_REG_V_MASK                                                  0xffffffff
#define BITMASK_WR_REG_V_GET(x)                                                (((x) & BITMASK_WR_REG_V_MASK) >> BITMASK_WR_REG_V_LSB)
#define BITMASK_WR_REG_V_SET(x)                                                (((0 | (x)) << BITMASK_WR_REG_V_LSB) & BITMASK_WR_REG_V_MASK)
#define BITMASK_WR_REG_V_RESET                                                 0x0
#define BITMASK_WR_REG_ADDRESS                                                 (0xc + __EFUSE_REG_BASE_ADDRESS)
#define BITMASK_WR_REG_RSTMASK                                                 0xffffffff
#define BITMASK_WR_REG_RESET                                                   0x0

// 0x10 (VDDQ_SETTLE_TIME_REG)
#define VDDQ_SETTLE_TIME_REG_V_LSB                                             0
#define VDDQ_SETTLE_TIME_REG_V_MSB                                             31
#define VDDQ_SETTLE_TIME_REG_V_MASK                                            0xffffffff
#define VDDQ_SETTLE_TIME_REG_V_GET(x)                                          (((x) & VDDQ_SETTLE_TIME_REG_V_MASK) >> VDDQ_SETTLE_TIME_REG_V_LSB)
#define VDDQ_SETTLE_TIME_REG_V_SET(x)                                          (((0 | (x)) << VDDQ_SETTLE_TIME_REG_V_LSB) & VDDQ_SETTLE_TIME_REG_V_MASK)
#define VDDQ_SETTLE_TIME_REG_V_RESET                                           0x30
#define VDDQ_SETTLE_TIME_REG_ADDRESS                                           (0x10 + __EFUSE_REG_BASE_ADDRESS)
#define VDDQ_SETTLE_TIME_REG_RSTMASK                                           0xffffffff
#define VDDQ_SETTLE_TIME_REG_RESET                                             0x30

// 0x14 (VDDQ_HOLD_TIME_REG)
#define VDDQ_HOLD_TIME_REG_V_LSB                                               0
#define VDDQ_HOLD_TIME_REG_V_MSB                                               31
#define VDDQ_HOLD_TIME_REG_V_MASK                                              0xffffffff
#define VDDQ_HOLD_TIME_REG_V_GET(x)                                            (((x) & VDDQ_HOLD_TIME_REG_V_MASK) >> VDDQ_HOLD_TIME_REG_V_LSB)
#define VDDQ_HOLD_TIME_REG_V_SET(x)                                            (((0 | (x)) << VDDQ_HOLD_TIME_REG_V_LSB) & VDDQ_HOLD_TIME_REG_V_MASK)
#define VDDQ_HOLD_TIME_REG_V_RESET                                             0x1
#define VDDQ_HOLD_TIME_REG_ADDRESS                                             (0x14 + __EFUSE_REG_BASE_ADDRESS)
#define VDDQ_HOLD_TIME_REG_RSTMASK                                             0xffffffff
#define VDDQ_HOLD_TIME_REG_RESET                                               0x1

// 0x18 (RD_STROBE_PW_REG)
#define RD_STROBE_PW_REG_V_LSB                                                 0
#define RD_STROBE_PW_REG_V_MSB                                                 31
#define RD_STROBE_PW_REG_V_MASK                                                0xffffffff
#define RD_STROBE_PW_REG_V_GET(x)                                              (((x) & RD_STROBE_PW_REG_V_MASK) >> RD_STROBE_PW_REG_V_LSB)
#define RD_STROBE_PW_REG_V_SET(x)                                              (((0 | (x)) << RD_STROBE_PW_REG_V_LSB) & RD_STROBE_PW_REG_V_MASK)
#define RD_STROBE_PW_REG_V_RESET                                               0x2
#define RD_STROBE_PW_REG_ADDRESS                                               (0x18 + __EFUSE_REG_BASE_ADDRESS)
#define RD_STROBE_PW_REG_RSTMASK                                               0xffffffff
#define RD_STROBE_PW_REG_RESET                                                 0x2

// 0x1c (PG_STROBE_PW_REG)
#define PG_STROBE_PW_REG_V_LSB                                                 0
#define PG_STROBE_PW_REG_V_MSB                                                 31
#define PG_STROBE_PW_REG_V_MASK                                                0xffffffff
#define PG_STROBE_PW_REG_V_GET(x)                                              (((x) & PG_STROBE_PW_REG_V_MASK) >> PG_STROBE_PW_REG_V_LSB)
#define PG_STROBE_PW_REG_V_SET(x)                                              (((0 | (x)) << PG_STROBE_PW_REG_V_LSB) & PG_STROBE_PW_REG_V_MASK)
#define PG_STROBE_PW_REG_V_RESET                                               0x61
#define PG_STROBE_PW_REG_ADDRESS                                               (0x1c + __EFUSE_REG_BASE_ADDRESS)
#define PG_STROBE_PW_REG_RSTMASK                                               0xffffffff
#define PG_STROBE_PW_REG_RESET                                                 0x61

// 0x20 (PGENB_SETUP_HOLD_TIME_REG)
#define PGENB_SETUP_HOLD_TIME_REG_V_LSB                                        0
#define PGENB_SETUP_HOLD_TIME_REG_V_MSB                                        31
#define PGENB_SETUP_HOLD_TIME_REG_V_MASK                                       0xffffffff
#define PGENB_SETUP_HOLD_TIME_REG_V_GET(x)                                     (((x) & PGENB_SETUP_HOLD_TIME_REG_V_MASK) >> PGENB_SETUP_HOLD_TIME_REG_V_LSB)
#define PGENB_SETUP_HOLD_TIME_REG_V_SET(x)                                     (((0 | (x)) << PGENB_SETUP_HOLD_TIME_REG_V_LSB) & PGENB_SETUP_HOLD_TIME_REG_V_MASK)
#define PGENB_SETUP_HOLD_TIME_REG_V_RESET                                      0x1
#define PGENB_SETUP_HOLD_TIME_REG_ADDRESS                                      (0x20 + __EFUSE_REG_BASE_ADDRESS)
#define PGENB_SETUP_HOLD_TIME_REG_RSTMASK                                      0xffffffff
#define PGENB_SETUP_HOLD_TIME_REG_RESET                                        0x1

// 0x24 (STROBE_PULSE_INTERVAL_REG)
#define STROBE_PULSE_INTERVAL_REG_V_LSB                                        0
#define STROBE_PULSE_INTERVAL_REG_V_MSB                                        31
#define STROBE_PULSE_INTERVAL_REG_V_MASK                                       0xffffffff
#define STROBE_PULSE_INTERVAL_REG_V_GET(x)                                     (((x) & STROBE_PULSE_INTERVAL_REG_V_MASK) >> STROBE_PULSE_INTERVAL_REG_V_LSB)
#define STROBE_PULSE_INTERVAL_REG_V_SET(x)                                     (((0 | (x)) << STROBE_PULSE_INTERVAL_REG_V_LSB) & STROBE_PULSE_INTERVAL_REG_V_MASK)
#define STROBE_PULSE_INTERVAL_REG_V_RESET                                      0x1
#define STROBE_PULSE_INTERVAL_REG_ADDRESS                                      (0x24 + __EFUSE_REG_BASE_ADDRESS)
#define STROBE_PULSE_INTERVAL_REG_RSTMASK                                      0xffffffff
#define STROBE_PULSE_INTERVAL_REG_RESET                                        0x1

// 0x28 (CSB_ADDR_LOAD_SETUP_HOLD_REG)
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_LSB                                     0
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_MSB                                     31
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_MASK                                    0xffffffff
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_GET(x)                                  (((x) & CSB_ADDR_LOAD_SETUP_HOLD_REG_V_MASK) >> CSB_ADDR_LOAD_SETUP_HOLD_REG_V_LSB)
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_SET(x)                                  (((0 | (x)) << CSB_ADDR_LOAD_SETUP_HOLD_REG_V_LSB) & CSB_ADDR_LOAD_SETUP_HOLD_REG_V_MASK)
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_V_RESET                                   0x1
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_ADDRESS                                   (0x28 + __EFUSE_REG_BASE_ADDRESS)
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_RSTMASK                                   0xffffffff
#define CSB_ADDR_LOAD_SETUP_HOLD_REG_RESET                                     0x1

// 0x2c (SUR_PD_CSB_REG)
#define SUR_PD_CSB_REG_V_LSB                                                   0
#define SUR_PD_CSB_REG_V_MSB                                                   31
#define SUR_PD_CSB_REG_V_MASK                                                  0xffffffff
#define SUR_PD_CSB_REG_V_GET(x)                                                (((x) & SUR_PD_CSB_REG_V_MASK) >> SUR_PD_CSB_REG_V_LSB)
#define SUR_PD_CSB_REG_V_SET(x)                                                (((0 | (x)) << SUR_PD_CSB_REG_V_LSB) & SUR_PD_CSB_REG_V_MASK)
#define SUR_PD_CSB_REG_V_RESET                                                 0xd
#define SUR_PD_CSB_REG_ADDRESS                                                 (0x2c + __EFUSE_REG_BASE_ADDRESS)
#define SUR_PD_CSB_REG_RSTMASK                                                 0xffffffff
#define SUR_PD_CSB_REG_RESET                                                   0xd

// 0x30 (SUP_PS_CSB_REG)
#define SUP_PS_CSB_REG_V_LSB                                                   0
#define SUP_PS_CSB_REG_V_MSB                                                   31
#define SUP_PS_CSB_REG_V_MASK                                                  0xffffffff
#define SUP_PS_CSB_REG_V_GET(x)                                                (((x) & SUP_PS_CSB_REG_V_MASK) >> SUP_PS_CSB_REG_V_LSB)
#define SUP_PS_CSB_REG_V_SET(x)                                                (((0 | (x)) << SUP_PS_CSB_REG_V_LSB) & SUP_PS_CSB_REG_V_MASK)
#define SUP_PS_CSB_REG_V_RESET                                                 0x2
#define SUP_PS_CSB_REG_ADDRESS                                                 (0x30 + __EFUSE_REG_BASE_ADDRESS)
#define SUP_PS_CSB_REG_RSTMASK                                                 0xffffffff
#define SUP_PS_CSB_REG_RESET                                                   0x2

// 0x34 (EFUSE_BUZY_STATUS_REG)
#define EFUSE_BUZY_STATUS_REG_V_LSB                                            0
#define EFUSE_BUZY_STATUS_REG_V_MSB                                            0
#define EFUSE_BUZY_STATUS_REG_V_MASK                                           0x1
#define EFUSE_BUZY_STATUS_REG_V_GET(x)                                         (((x) & EFUSE_BUZY_STATUS_REG_V_MASK) >> EFUSE_BUZY_STATUS_REG_V_LSB)
#define EFUSE_BUZY_STATUS_REG_V_SET(x)                                         (((0 | (x)) << EFUSE_BUZY_STATUS_REG_V_LSB) & EFUSE_BUZY_STATUS_REG_V_MASK)
#define EFUSE_BUZY_STATUS_REG_V_RESET                                          0x0
#define EFUSE_BUZY_STATUS_REG_ADDRESS                                          (0x34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_BUZY_STATUS_REG_RSTMASK                                          0x1
#define EFUSE_BUZY_STATUS_REG_RESET                                            0x0

// 0x800 (EFUSE_INTF0)
#define EFUSE_INTF0_R_LSB                                                      0
#define EFUSE_INTF0_R_MSB                                                      31
#define EFUSE_INTF0_R_MASK                                                     0xffffffff
#define EFUSE_INTF0_R_GET(x)                                                   (((x) & EFUSE_INTF0_R_MASK) >> EFUSE_INTF0_R_LSB)
#define EFUSE_INTF0_R_SET(x)                                                   (((0 | (x)) << EFUSE_INTF0_R_LSB) & EFUSE_INTF0_R_MASK)
#define EFUSE_INTF0_R_RESET                                                    0x0
#define EFUSE_INTF0_ADDRESS                                                    (0x800 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_RSTMASK                                                    0xffffffff
#define EFUSE_INTF0_RESET                                                      0x0

// 0x800 (EFUSE_INTF0_0)
#define EFUSE_INTF0_R_0_LSB                                                    0
#define EFUSE_INTF0_R_0_MSB                                                    31
#define EFUSE_INTF0_R_0_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_0_GET(x)                                                 (((x) & EFUSE_INTF0_R_0_MASK) >> EFUSE_INTF0_R_0_LSB)
#define EFUSE_INTF0_R_0_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_0_LSB) & EFUSE_INTF0_R_0_MASK)
#define EFUSE_INTF0_R_0_RESET                                                  0x0
#define EFUSE_INTF0_0_ADDRESS                                                  (0x800 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_0_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_0_RESET                                                    0x0

// 0x804 (EFUSE_INTF0_1)
#define EFUSE_INTF0_R_1_LSB                                                    0
#define EFUSE_INTF0_R_1_MSB                                                    31
#define EFUSE_INTF0_R_1_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_1_GET(x)                                                 (((x) & EFUSE_INTF0_R_1_MASK) >> EFUSE_INTF0_R_1_LSB)
#define EFUSE_INTF0_R_1_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_1_LSB) & EFUSE_INTF0_R_1_MASK)
#define EFUSE_INTF0_R_1_RESET                                                  0x0
#define EFUSE_INTF0_1_ADDRESS                                                  (0x804 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_1_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_1_RESET                                                    0x0

// 0x808 (EFUSE_INTF0_2)
#define EFUSE_INTF0_R_2_LSB                                                    0
#define EFUSE_INTF0_R_2_MSB                                                    31
#define EFUSE_INTF0_R_2_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_2_GET(x)                                                 (((x) & EFUSE_INTF0_R_2_MASK) >> EFUSE_INTF0_R_2_LSB)
#define EFUSE_INTF0_R_2_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_2_LSB) & EFUSE_INTF0_R_2_MASK)
#define EFUSE_INTF0_R_2_RESET                                                  0x0
#define EFUSE_INTF0_2_ADDRESS                                                  (0x808 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_2_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_2_RESET                                                    0x0

// 0x80c (EFUSE_INTF0_3)
#define EFUSE_INTF0_R_3_LSB                                                    0
#define EFUSE_INTF0_R_3_MSB                                                    31
#define EFUSE_INTF0_R_3_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_3_GET(x)                                                 (((x) & EFUSE_INTF0_R_3_MASK) >> EFUSE_INTF0_R_3_LSB)
#define EFUSE_INTF0_R_3_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_3_LSB) & EFUSE_INTF0_R_3_MASK)
#define EFUSE_INTF0_R_3_RESET                                                  0x0
#define EFUSE_INTF0_3_ADDRESS                                                  (0x80c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_3_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_3_RESET                                                    0x0

// 0x810 (EFUSE_INTF0_4)
#define EFUSE_INTF0_R_4_LSB                                                    0
#define EFUSE_INTF0_R_4_MSB                                                    31
#define EFUSE_INTF0_R_4_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_4_GET(x)                                                 (((x) & EFUSE_INTF0_R_4_MASK) >> EFUSE_INTF0_R_4_LSB)
#define EFUSE_INTF0_R_4_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_4_LSB) & EFUSE_INTF0_R_4_MASK)
#define EFUSE_INTF0_R_4_RESET                                                  0x0
#define EFUSE_INTF0_4_ADDRESS                                                  (0x810 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_4_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_4_RESET                                                    0x0

// 0x814 (EFUSE_INTF0_5)
#define EFUSE_INTF0_R_5_LSB                                                    0
#define EFUSE_INTF0_R_5_MSB                                                    31
#define EFUSE_INTF0_R_5_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_5_GET(x)                                                 (((x) & EFUSE_INTF0_R_5_MASK) >> EFUSE_INTF0_R_5_LSB)
#define EFUSE_INTF0_R_5_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_5_LSB) & EFUSE_INTF0_R_5_MASK)
#define EFUSE_INTF0_R_5_RESET                                                  0x0
#define EFUSE_INTF0_5_ADDRESS                                                  (0x814 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_5_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_5_RESET                                                    0x0

// 0x818 (EFUSE_INTF0_6)
#define EFUSE_INTF0_R_6_LSB                                                    0
#define EFUSE_INTF0_R_6_MSB                                                    31
#define EFUSE_INTF0_R_6_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_6_GET(x)                                                 (((x) & EFUSE_INTF0_R_6_MASK) >> EFUSE_INTF0_R_6_LSB)
#define EFUSE_INTF0_R_6_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_6_LSB) & EFUSE_INTF0_R_6_MASK)
#define EFUSE_INTF0_R_6_RESET                                                  0x0
#define EFUSE_INTF0_6_ADDRESS                                                  (0x818 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_6_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_6_RESET                                                    0x0

// 0x81c (EFUSE_INTF0_7)
#define EFUSE_INTF0_R_7_LSB                                                    0
#define EFUSE_INTF0_R_7_MSB                                                    31
#define EFUSE_INTF0_R_7_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_7_GET(x)                                                 (((x) & EFUSE_INTF0_R_7_MASK) >> EFUSE_INTF0_R_7_LSB)
#define EFUSE_INTF0_R_7_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_7_LSB) & EFUSE_INTF0_R_7_MASK)
#define EFUSE_INTF0_R_7_RESET                                                  0x0
#define EFUSE_INTF0_7_ADDRESS                                                  (0x81c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_7_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_7_RESET                                                    0x0

// 0x820 (EFUSE_INTF0_8)
#define EFUSE_INTF0_R_8_LSB                                                    0
#define EFUSE_INTF0_R_8_MSB                                                    31
#define EFUSE_INTF0_R_8_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_8_GET(x)                                                 (((x) & EFUSE_INTF0_R_8_MASK) >> EFUSE_INTF0_R_8_LSB)
#define EFUSE_INTF0_R_8_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_8_LSB) & EFUSE_INTF0_R_8_MASK)
#define EFUSE_INTF0_R_8_RESET                                                  0x0
#define EFUSE_INTF0_8_ADDRESS                                                  (0x820 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_8_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_8_RESET                                                    0x0

// 0x824 (EFUSE_INTF0_9)
#define EFUSE_INTF0_R_9_LSB                                                    0
#define EFUSE_INTF0_R_9_MSB                                                    31
#define EFUSE_INTF0_R_9_MASK                                                   0xffffffff
#define EFUSE_INTF0_R_9_GET(x)                                                 (((x) & EFUSE_INTF0_R_9_MASK) >> EFUSE_INTF0_R_9_LSB)
#define EFUSE_INTF0_R_9_SET(x)                                                 (((0 | (x)) << EFUSE_INTF0_R_9_LSB) & EFUSE_INTF0_R_9_MASK)
#define EFUSE_INTF0_R_9_RESET                                                  0x0
#define EFUSE_INTF0_9_ADDRESS                                                  (0x824 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_9_RSTMASK                                                  0xffffffff
#define EFUSE_INTF0_9_RESET                                                    0x0

// 0x828 (EFUSE_INTF0_10)
#define EFUSE_INTF0_R_10_LSB                                                   0
#define EFUSE_INTF0_R_10_MSB                                                   31
#define EFUSE_INTF0_R_10_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_10_GET(x)                                                (((x) & EFUSE_INTF0_R_10_MASK) >> EFUSE_INTF0_R_10_LSB)
#define EFUSE_INTF0_R_10_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_10_LSB) & EFUSE_INTF0_R_10_MASK)
#define EFUSE_INTF0_R_10_RESET                                                 0x0
#define EFUSE_INTF0_10_ADDRESS                                                 (0x828 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_10_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_10_RESET                                                   0x0

// 0x82c (EFUSE_INTF0_11)
#define EFUSE_INTF0_R_11_LSB                                                   0
#define EFUSE_INTF0_R_11_MSB                                                   31
#define EFUSE_INTF0_R_11_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_11_GET(x)                                                (((x) & EFUSE_INTF0_R_11_MASK) >> EFUSE_INTF0_R_11_LSB)
#define EFUSE_INTF0_R_11_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_11_LSB) & EFUSE_INTF0_R_11_MASK)
#define EFUSE_INTF0_R_11_RESET                                                 0x0
#define EFUSE_INTF0_11_ADDRESS                                                 (0x82c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_11_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_11_RESET                                                   0x0

// 0x830 (EFUSE_INTF0_12)
#define EFUSE_INTF0_R_12_LSB                                                   0
#define EFUSE_INTF0_R_12_MSB                                                   31
#define EFUSE_INTF0_R_12_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_12_GET(x)                                                (((x) & EFUSE_INTF0_R_12_MASK) >> EFUSE_INTF0_R_12_LSB)
#define EFUSE_INTF0_R_12_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_12_LSB) & EFUSE_INTF0_R_12_MASK)
#define EFUSE_INTF0_R_12_RESET                                                 0x0
#define EFUSE_INTF0_12_ADDRESS                                                 (0x830 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_12_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_12_RESET                                                   0x0

// 0x834 (EFUSE_INTF0_13)
#define EFUSE_INTF0_R_13_LSB                                                   0
#define EFUSE_INTF0_R_13_MSB                                                   31
#define EFUSE_INTF0_R_13_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_13_GET(x)                                                (((x) & EFUSE_INTF0_R_13_MASK) >> EFUSE_INTF0_R_13_LSB)
#define EFUSE_INTF0_R_13_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_13_LSB) & EFUSE_INTF0_R_13_MASK)
#define EFUSE_INTF0_R_13_RESET                                                 0x0
#define EFUSE_INTF0_13_ADDRESS                                                 (0x834 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_13_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_13_RESET                                                   0x0

// 0x838 (EFUSE_INTF0_14)
#define EFUSE_INTF0_R_14_LSB                                                   0
#define EFUSE_INTF0_R_14_MSB                                                   31
#define EFUSE_INTF0_R_14_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_14_GET(x)                                                (((x) & EFUSE_INTF0_R_14_MASK) >> EFUSE_INTF0_R_14_LSB)
#define EFUSE_INTF0_R_14_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_14_LSB) & EFUSE_INTF0_R_14_MASK)
#define EFUSE_INTF0_R_14_RESET                                                 0x0
#define EFUSE_INTF0_14_ADDRESS                                                 (0x838 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_14_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_14_RESET                                                   0x0

// 0x83c (EFUSE_INTF0_15)
#define EFUSE_INTF0_R_15_LSB                                                   0
#define EFUSE_INTF0_R_15_MSB                                                   31
#define EFUSE_INTF0_R_15_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_15_GET(x)                                                (((x) & EFUSE_INTF0_R_15_MASK) >> EFUSE_INTF0_R_15_LSB)
#define EFUSE_INTF0_R_15_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_15_LSB) & EFUSE_INTF0_R_15_MASK)
#define EFUSE_INTF0_R_15_RESET                                                 0x0
#define EFUSE_INTF0_15_ADDRESS                                                 (0x83c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_15_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_15_RESET                                                   0x0

// 0x840 (EFUSE_INTF0_16)
#define EFUSE_INTF0_R_16_LSB                                                   0
#define EFUSE_INTF0_R_16_MSB                                                   31
#define EFUSE_INTF0_R_16_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_16_GET(x)                                                (((x) & EFUSE_INTF0_R_16_MASK) >> EFUSE_INTF0_R_16_LSB)
#define EFUSE_INTF0_R_16_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_16_LSB) & EFUSE_INTF0_R_16_MASK)
#define EFUSE_INTF0_R_16_RESET                                                 0x0
#define EFUSE_INTF0_16_ADDRESS                                                 (0x840 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_16_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_16_RESET                                                   0x0

// 0x844 (EFUSE_INTF0_17)
#define EFUSE_INTF0_R_17_LSB                                                   0
#define EFUSE_INTF0_R_17_MSB                                                   31
#define EFUSE_INTF0_R_17_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_17_GET(x)                                                (((x) & EFUSE_INTF0_R_17_MASK) >> EFUSE_INTF0_R_17_LSB)
#define EFUSE_INTF0_R_17_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_17_LSB) & EFUSE_INTF0_R_17_MASK)
#define EFUSE_INTF0_R_17_RESET                                                 0x0
#define EFUSE_INTF0_17_ADDRESS                                                 (0x844 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_17_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_17_RESET                                                   0x0

// 0x848 (EFUSE_INTF0_18)
#define EFUSE_INTF0_R_18_LSB                                                   0
#define EFUSE_INTF0_R_18_MSB                                                   31
#define EFUSE_INTF0_R_18_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_18_GET(x)                                                (((x) & EFUSE_INTF0_R_18_MASK) >> EFUSE_INTF0_R_18_LSB)
#define EFUSE_INTF0_R_18_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_18_LSB) & EFUSE_INTF0_R_18_MASK)
#define EFUSE_INTF0_R_18_RESET                                                 0x0
#define EFUSE_INTF0_18_ADDRESS                                                 (0x848 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_18_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_18_RESET                                                   0x0

// 0x84c (EFUSE_INTF0_19)
#define EFUSE_INTF0_R_19_LSB                                                   0
#define EFUSE_INTF0_R_19_MSB                                                   31
#define EFUSE_INTF0_R_19_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_19_GET(x)                                                (((x) & EFUSE_INTF0_R_19_MASK) >> EFUSE_INTF0_R_19_LSB)
#define EFUSE_INTF0_R_19_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_19_LSB) & EFUSE_INTF0_R_19_MASK)
#define EFUSE_INTF0_R_19_RESET                                                 0x0
#define EFUSE_INTF0_19_ADDRESS                                                 (0x84c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_19_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_19_RESET                                                   0x0

// 0x850 (EFUSE_INTF0_20)
#define EFUSE_INTF0_R_20_LSB                                                   0
#define EFUSE_INTF0_R_20_MSB                                                   31
#define EFUSE_INTF0_R_20_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_20_GET(x)                                                (((x) & EFUSE_INTF0_R_20_MASK) >> EFUSE_INTF0_R_20_LSB)
#define EFUSE_INTF0_R_20_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_20_LSB) & EFUSE_INTF0_R_20_MASK)
#define EFUSE_INTF0_R_20_RESET                                                 0x0
#define EFUSE_INTF0_20_ADDRESS                                                 (0x850 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_20_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_20_RESET                                                   0x0

// 0x854 (EFUSE_INTF0_21)
#define EFUSE_INTF0_R_21_LSB                                                   0
#define EFUSE_INTF0_R_21_MSB                                                   31
#define EFUSE_INTF0_R_21_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_21_GET(x)                                                (((x) & EFUSE_INTF0_R_21_MASK) >> EFUSE_INTF0_R_21_LSB)
#define EFUSE_INTF0_R_21_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_21_LSB) & EFUSE_INTF0_R_21_MASK)
#define EFUSE_INTF0_R_21_RESET                                                 0x0
#define EFUSE_INTF0_21_ADDRESS                                                 (0x854 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_21_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_21_RESET                                                   0x0

// 0x858 (EFUSE_INTF0_22)
#define EFUSE_INTF0_R_22_LSB                                                   0
#define EFUSE_INTF0_R_22_MSB                                                   31
#define EFUSE_INTF0_R_22_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_22_GET(x)                                                (((x) & EFUSE_INTF0_R_22_MASK) >> EFUSE_INTF0_R_22_LSB)
#define EFUSE_INTF0_R_22_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_22_LSB) & EFUSE_INTF0_R_22_MASK)
#define EFUSE_INTF0_R_22_RESET                                                 0x0
#define EFUSE_INTF0_22_ADDRESS                                                 (0x858 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_22_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_22_RESET                                                   0x0

// 0x85c (EFUSE_INTF0_23)
#define EFUSE_INTF0_R_23_LSB                                                   0
#define EFUSE_INTF0_R_23_MSB                                                   31
#define EFUSE_INTF0_R_23_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_23_GET(x)                                                (((x) & EFUSE_INTF0_R_23_MASK) >> EFUSE_INTF0_R_23_LSB)
#define EFUSE_INTF0_R_23_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_23_LSB) & EFUSE_INTF0_R_23_MASK)
#define EFUSE_INTF0_R_23_RESET                                                 0x0
#define EFUSE_INTF0_23_ADDRESS                                                 (0x85c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_23_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_23_RESET                                                   0x0

// 0x860 (EFUSE_INTF0_24)
#define EFUSE_INTF0_R_24_LSB                                                   0
#define EFUSE_INTF0_R_24_MSB                                                   31
#define EFUSE_INTF0_R_24_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_24_GET(x)                                                (((x) & EFUSE_INTF0_R_24_MASK) >> EFUSE_INTF0_R_24_LSB)
#define EFUSE_INTF0_R_24_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_24_LSB) & EFUSE_INTF0_R_24_MASK)
#define EFUSE_INTF0_R_24_RESET                                                 0x0
#define EFUSE_INTF0_24_ADDRESS                                                 (0x860 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_24_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_24_RESET                                                   0x0

// 0x864 (EFUSE_INTF0_25)
#define EFUSE_INTF0_R_25_LSB                                                   0
#define EFUSE_INTF0_R_25_MSB                                                   31
#define EFUSE_INTF0_R_25_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_25_GET(x)                                                (((x) & EFUSE_INTF0_R_25_MASK) >> EFUSE_INTF0_R_25_LSB)
#define EFUSE_INTF0_R_25_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_25_LSB) & EFUSE_INTF0_R_25_MASK)
#define EFUSE_INTF0_R_25_RESET                                                 0x0
#define EFUSE_INTF0_25_ADDRESS                                                 (0x864 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_25_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_25_RESET                                                   0x0

// 0x868 (EFUSE_INTF0_26)
#define EFUSE_INTF0_R_26_LSB                                                   0
#define EFUSE_INTF0_R_26_MSB                                                   31
#define EFUSE_INTF0_R_26_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_26_GET(x)                                                (((x) & EFUSE_INTF0_R_26_MASK) >> EFUSE_INTF0_R_26_LSB)
#define EFUSE_INTF0_R_26_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_26_LSB) & EFUSE_INTF0_R_26_MASK)
#define EFUSE_INTF0_R_26_RESET                                                 0x0
#define EFUSE_INTF0_26_ADDRESS                                                 (0x868 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_26_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_26_RESET                                                   0x0

// 0x86c (EFUSE_INTF0_27)
#define EFUSE_INTF0_R_27_LSB                                                   0
#define EFUSE_INTF0_R_27_MSB                                                   31
#define EFUSE_INTF0_R_27_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_27_GET(x)                                                (((x) & EFUSE_INTF0_R_27_MASK) >> EFUSE_INTF0_R_27_LSB)
#define EFUSE_INTF0_R_27_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_27_LSB) & EFUSE_INTF0_R_27_MASK)
#define EFUSE_INTF0_R_27_RESET                                                 0x0
#define EFUSE_INTF0_27_ADDRESS                                                 (0x86c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_27_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_27_RESET                                                   0x0

// 0x870 (EFUSE_INTF0_28)
#define EFUSE_INTF0_R_28_LSB                                                   0
#define EFUSE_INTF0_R_28_MSB                                                   31
#define EFUSE_INTF0_R_28_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_28_GET(x)                                                (((x) & EFUSE_INTF0_R_28_MASK) >> EFUSE_INTF0_R_28_LSB)
#define EFUSE_INTF0_R_28_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_28_LSB) & EFUSE_INTF0_R_28_MASK)
#define EFUSE_INTF0_R_28_RESET                                                 0x0
#define EFUSE_INTF0_28_ADDRESS                                                 (0x870 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_28_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_28_RESET                                                   0x0

// 0x874 (EFUSE_INTF0_29)
#define EFUSE_INTF0_R_29_LSB                                                   0
#define EFUSE_INTF0_R_29_MSB                                                   31
#define EFUSE_INTF0_R_29_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_29_GET(x)                                                (((x) & EFUSE_INTF0_R_29_MASK) >> EFUSE_INTF0_R_29_LSB)
#define EFUSE_INTF0_R_29_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_29_LSB) & EFUSE_INTF0_R_29_MASK)
#define EFUSE_INTF0_R_29_RESET                                                 0x0
#define EFUSE_INTF0_29_ADDRESS                                                 (0x874 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_29_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_29_RESET                                                   0x0

// 0x878 (EFUSE_INTF0_30)
#define EFUSE_INTF0_R_30_LSB                                                   0
#define EFUSE_INTF0_R_30_MSB                                                   31
#define EFUSE_INTF0_R_30_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_30_GET(x)                                                (((x) & EFUSE_INTF0_R_30_MASK) >> EFUSE_INTF0_R_30_LSB)
#define EFUSE_INTF0_R_30_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_30_LSB) & EFUSE_INTF0_R_30_MASK)
#define EFUSE_INTF0_R_30_RESET                                                 0x0
#define EFUSE_INTF0_30_ADDRESS                                                 (0x878 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_30_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_30_RESET                                                   0x0

// 0x87c (EFUSE_INTF0_31)
#define EFUSE_INTF0_R_31_LSB                                                   0
#define EFUSE_INTF0_R_31_MSB                                                   31
#define EFUSE_INTF0_R_31_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_31_GET(x)                                                (((x) & EFUSE_INTF0_R_31_MASK) >> EFUSE_INTF0_R_31_LSB)
#define EFUSE_INTF0_R_31_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_31_LSB) & EFUSE_INTF0_R_31_MASK)
#define EFUSE_INTF0_R_31_RESET                                                 0x0
#define EFUSE_INTF0_31_ADDRESS                                                 (0x87c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_31_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_31_RESET                                                   0x0

// 0x880 (EFUSE_INTF0_32)
#define EFUSE_INTF0_R_32_LSB                                                   0
#define EFUSE_INTF0_R_32_MSB                                                   31
#define EFUSE_INTF0_R_32_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_32_GET(x)                                                (((x) & EFUSE_INTF0_R_32_MASK) >> EFUSE_INTF0_R_32_LSB)
#define EFUSE_INTF0_R_32_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_32_LSB) & EFUSE_INTF0_R_32_MASK)
#define EFUSE_INTF0_R_32_RESET                                                 0x0
#define EFUSE_INTF0_32_ADDRESS                                                 (0x880 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_32_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_32_RESET                                                   0x0

// 0x884 (EFUSE_INTF0_33)
#define EFUSE_INTF0_R_33_LSB                                                   0
#define EFUSE_INTF0_R_33_MSB                                                   31
#define EFUSE_INTF0_R_33_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_33_GET(x)                                                (((x) & EFUSE_INTF0_R_33_MASK) >> EFUSE_INTF0_R_33_LSB)
#define EFUSE_INTF0_R_33_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_33_LSB) & EFUSE_INTF0_R_33_MASK)
#define EFUSE_INTF0_R_33_RESET                                                 0x0
#define EFUSE_INTF0_33_ADDRESS                                                 (0x884 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_33_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_33_RESET                                                   0x0

// 0x888 (EFUSE_INTF0_34)
#define EFUSE_INTF0_R_34_LSB                                                   0
#define EFUSE_INTF0_R_34_MSB                                                   31
#define EFUSE_INTF0_R_34_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_34_GET(x)                                                (((x) & EFUSE_INTF0_R_34_MASK) >> EFUSE_INTF0_R_34_LSB)
#define EFUSE_INTF0_R_34_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_34_LSB) & EFUSE_INTF0_R_34_MASK)
#define EFUSE_INTF0_R_34_RESET                                                 0x0
#define EFUSE_INTF0_34_ADDRESS                                                 (0x888 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_34_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_34_RESET                                                   0x0

// 0x88c (EFUSE_INTF0_35)
#define EFUSE_INTF0_R_35_LSB                                                   0
#define EFUSE_INTF0_R_35_MSB                                                   31
#define EFUSE_INTF0_R_35_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_35_GET(x)                                                (((x) & EFUSE_INTF0_R_35_MASK) >> EFUSE_INTF0_R_35_LSB)
#define EFUSE_INTF0_R_35_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_35_LSB) & EFUSE_INTF0_R_35_MASK)
#define EFUSE_INTF0_R_35_RESET                                                 0x0
#define EFUSE_INTF0_35_ADDRESS                                                 (0x88c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_35_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_35_RESET                                                   0x0

// 0x890 (EFUSE_INTF0_36)
#define EFUSE_INTF0_R_36_LSB                                                   0
#define EFUSE_INTF0_R_36_MSB                                                   31
#define EFUSE_INTF0_R_36_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_36_GET(x)                                                (((x) & EFUSE_INTF0_R_36_MASK) >> EFUSE_INTF0_R_36_LSB)
#define EFUSE_INTF0_R_36_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_36_LSB) & EFUSE_INTF0_R_36_MASK)
#define EFUSE_INTF0_R_36_RESET                                                 0x0
#define EFUSE_INTF0_36_ADDRESS                                                 (0x890 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_36_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_36_RESET                                                   0x0

// 0x894 (EFUSE_INTF0_37)
#define EFUSE_INTF0_R_37_LSB                                                   0
#define EFUSE_INTF0_R_37_MSB                                                   31
#define EFUSE_INTF0_R_37_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_37_GET(x)                                                (((x) & EFUSE_INTF0_R_37_MASK) >> EFUSE_INTF0_R_37_LSB)
#define EFUSE_INTF0_R_37_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_37_LSB) & EFUSE_INTF0_R_37_MASK)
#define EFUSE_INTF0_R_37_RESET                                                 0x0
#define EFUSE_INTF0_37_ADDRESS                                                 (0x894 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_37_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_37_RESET                                                   0x0

// 0x898 (EFUSE_INTF0_38)
#define EFUSE_INTF0_R_38_LSB                                                   0
#define EFUSE_INTF0_R_38_MSB                                                   31
#define EFUSE_INTF0_R_38_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_38_GET(x)                                                (((x) & EFUSE_INTF0_R_38_MASK) >> EFUSE_INTF0_R_38_LSB)
#define EFUSE_INTF0_R_38_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_38_LSB) & EFUSE_INTF0_R_38_MASK)
#define EFUSE_INTF0_R_38_RESET                                                 0x0
#define EFUSE_INTF0_38_ADDRESS                                                 (0x898 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_38_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_38_RESET                                                   0x0

// 0x89c (EFUSE_INTF0_39)
#define EFUSE_INTF0_R_39_LSB                                                   0
#define EFUSE_INTF0_R_39_MSB                                                   31
#define EFUSE_INTF0_R_39_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_39_GET(x)                                                (((x) & EFUSE_INTF0_R_39_MASK) >> EFUSE_INTF0_R_39_LSB)
#define EFUSE_INTF0_R_39_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_39_LSB) & EFUSE_INTF0_R_39_MASK)
#define EFUSE_INTF0_R_39_RESET                                                 0x0
#define EFUSE_INTF0_39_ADDRESS                                                 (0x89c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_39_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_39_RESET                                                   0x0

// 0x8a0 (EFUSE_INTF0_40)
#define EFUSE_INTF0_R_40_LSB                                                   0
#define EFUSE_INTF0_R_40_MSB                                                   31
#define EFUSE_INTF0_R_40_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_40_GET(x)                                                (((x) & EFUSE_INTF0_R_40_MASK) >> EFUSE_INTF0_R_40_LSB)
#define EFUSE_INTF0_R_40_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_40_LSB) & EFUSE_INTF0_R_40_MASK)
#define EFUSE_INTF0_R_40_RESET                                                 0x0
#define EFUSE_INTF0_40_ADDRESS                                                 (0x8a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_40_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_40_RESET                                                   0x0

// 0x8a4 (EFUSE_INTF0_41)
#define EFUSE_INTF0_R_41_LSB                                                   0
#define EFUSE_INTF0_R_41_MSB                                                   31
#define EFUSE_INTF0_R_41_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_41_GET(x)                                                (((x) & EFUSE_INTF0_R_41_MASK) >> EFUSE_INTF0_R_41_LSB)
#define EFUSE_INTF0_R_41_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_41_LSB) & EFUSE_INTF0_R_41_MASK)
#define EFUSE_INTF0_R_41_RESET                                                 0x0
#define EFUSE_INTF0_41_ADDRESS                                                 (0x8a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_41_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_41_RESET                                                   0x0

// 0x8a8 (EFUSE_INTF0_42)
#define EFUSE_INTF0_R_42_LSB                                                   0
#define EFUSE_INTF0_R_42_MSB                                                   31
#define EFUSE_INTF0_R_42_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_42_GET(x)                                                (((x) & EFUSE_INTF0_R_42_MASK) >> EFUSE_INTF0_R_42_LSB)
#define EFUSE_INTF0_R_42_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_42_LSB) & EFUSE_INTF0_R_42_MASK)
#define EFUSE_INTF0_R_42_RESET                                                 0x0
#define EFUSE_INTF0_42_ADDRESS                                                 (0x8a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_42_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_42_RESET                                                   0x0

// 0x8ac (EFUSE_INTF0_43)
#define EFUSE_INTF0_R_43_LSB                                                   0
#define EFUSE_INTF0_R_43_MSB                                                   31
#define EFUSE_INTF0_R_43_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_43_GET(x)                                                (((x) & EFUSE_INTF0_R_43_MASK) >> EFUSE_INTF0_R_43_LSB)
#define EFUSE_INTF0_R_43_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_43_LSB) & EFUSE_INTF0_R_43_MASK)
#define EFUSE_INTF0_R_43_RESET                                                 0x0
#define EFUSE_INTF0_43_ADDRESS                                                 (0x8ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_43_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_43_RESET                                                   0x0

// 0x8b0 (EFUSE_INTF0_44)
#define EFUSE_INTF0_R_44_LSB                                                   0
#define EFUSE_INTF0_R_44_MSB                                                   31
#define EFUSE_INTF0_R_44_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_44_GET(x)                                                (((x) & EFUSE_INTF0_R_44_MASK) >> EFUSE_INTF0_R_44_LSB)
#define EFUSE_INTF0_R_44_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_44_LSB) & EFUSE_INTF0_R_44_MASK)
#define EFUSE_INTF0_R_44_RESET                                                 0x0
#define EFUSE_INTF0_44_ADDRESS                                                 (0x8b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_44_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_44_RESET                                                   0x0

// 0x8b4 (EFUSE_INTF0_45)
#define EFUSE_INTF0_R_45_LSB                                                   0
#define EFUSE_INTF0_R_45_MSB                                                   31
#define EFUSE_INTF0_R_45_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_45_GET(x)                                                (((x) & EFUSE_INTF0_R_45_MASK) >> EFUSE_INTF0_R_45_LSB)
#define EFUSE_INTF0_R_45_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_45_LSB) & EFUSE_INTF0_R_45_MASK)
#define EFUSE_INTF0_R_45_RESET                                                 0x0
#define EFUSE_INTF0_45_ADDRESS                                                 (0x8b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_45_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_45_RESET                                                   0x0

// 0x8b8 (EFUSE_INTF0_46)
#define EFUSE_INTF0_R_46_LSB                                                   0
#define EFUSE_INTF0_R_46_MSB                                                   31
#define EFUSE_INTF0_R_46_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_46_GET(x)                                                (((x) & EFUSE_INTF0_R_46_MASK) >> EFUSE_INTF0_R_46_LSB)
#define EFUSE_INTF0_R_46_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_46_LSB) & EFUSE_INTF0_R_46_MASK)
#define EFUSE_INTF0_R_46_RESET                                                 0x0
#define EFUSE_INTF0_46_ADDRESS                                                 (0x8b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_46_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_46_RESET                                                   0x0

// 0x8bc (EFUSE_INTF0_47)
#define EFUSE_INTF0_R_47_LSB                                                   0
#define EFUSE_INTF0_R_47_MSB                                                   31
#define EFUSE_INTF0_R_47_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_47_GET(x)                                                (((x) & EFUSE_INTF0_R_47_MASK) >> EFUSE_INTF0_R_47_LSB)
#define EFUSE_INTF0_R_47_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_47_LSB) & EFUSE_INTF0_R_47_MASK)
#define EFUSE_INTF0_R_47_RESET                                                 0x0
#define EFUSE_INTF0_47_ADDRESS                                                 (0x8bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_47_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_47_RESET                                                   0x0

// 0x8c0 (EFUSE_INTF0_48)
#define EFUSE_INTF0_R_48_LSB                                                   0
#define EFUSE_INTF0_R_48_MSB                                                   31
#define EFUSE_INTF0_R_48_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_48_GET(x)                                                (((x) & EFUSE_INTF0_R_48_MASK) >> EFUSE_INTF0_R_48_LSB)
#define EFUSE_INTF0_R_48_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_48_LSB) & EFUSE_INTF0_R_48_MASK)
#define EFUSE_INTF0_R_48_RESET                                                 0x0
#define EFUSE_INTF0_48_ADDRESS                                                 (0x8c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_48_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_48_RESET                                                   0x0

// 0x8c4 (EFUSE_INTF0_49)
#define EFUSE_INTF0_R_49_LSB                                                   0
#define EFUSE_INTF0_R_49_MSB                                                   31
#define EFUSE_INTF0_R_49_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_49_GET(x)                                                (((x) & EFUSE_INTF0_R_49_MASK) >> EFUSE_INTF0_R_49_LSB)
#define EFUSE_INTF0_R_49_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_49_LSB) & EFUSE_INTF0_R_49_MASK)
#define EFUSE_INTF0_R_49_RESET                                                 0x0
#define EFUSE_INTF0_49_ADDRESS                                                 (0x8c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_49_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_49_RESET                                                   0x0

// 0x8c8 (EFUSE_INTF0_50)
#define EFUSE_INTF0_R_50_LSB                                                   0
#define EFUSE_INTF0_R_50_MSB                                                   31
#define EFUSE_INTF0_R_50_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_50_GET(x)                                                (((x) & EFUSE_INTF0_R_50_MASK) >> EFUSE_INTF0_R_50_LSB)
#define EFUSE_INTF0_R_50_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_50_LSB) & EFUSE_INTF0_R_50_MASK)
#define EFUSE_INTF0_R_50_RESET                                                 0x0
#define EFUSE_INTF0_50_ADDRESS                                                 (0x8c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_50_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_50_RESET                                                   0x0

// 0x8cc (EFUSE_INTF0_51)
#define EFUSE_INTF0_R_51_LSB                                                   0
#define EFUSE_INTF0_R_51_MSB                                                   31
#define EFUSE_INTF0_R_51_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_51_GET(x)                                                (((x) & EFUSE_INTF0_R_51_MASK) >> EFUSE_INTF0_R_51_LSB)
#define EFUSE_INTF0_R_51_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_51_LSB) & EFUSE_INTF0_R_51_MASK)
#define EFUSE_INTF0_R_51_RESET                                                 0x0
#define EFUSE_INTF0_51_ADDRESS                                                 (0x8cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_51_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_51_RESET                                                   0x0

// 0x8d0 (EFUSE_INTF0_52)
#define EFUSE_INTF0_R_52_LSB                                                   0
#define EFUSE_INTF0_R_52_MSB                                                   31
#define EFUSE_INTF0_R_52_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_52_GET(x)                                                (((x) & EFUSE_INTF0_R_52_MASK) >> EFUSE_INTF0_R_52_LSB)
#define EFUSE_INTF0_R_52_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_52_LSB) & EFUSE_INTF0_R_52_MASK)
#define EFUSE_INTF0_R_52_RESET                                                 0x0
#define EFUSE_INTF0_52_ADDRESS                                                 (0x8d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_52_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_52_RESET                                                   0x0

// 0x8d4 (EFUSE_INTF0_53)
#define EFUSE_INTF0_R_53_LSB                                                   0
#define EFUSE_INTF0_R_53_MSB                                                   31
#define EFUSE_INTF0_R_53_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_53_GET(x)                                                (((x) & EFUSE_INTF0_R_53_MASK) >> EFUSE_INTF0_R_53_LSB)
#define EFUSE_INTF0_R_53_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_53_LSB) & EFUSE_INTF0_R_53_MASK)
#define EFUSE_INTF0_R_53_RESET                                                 0x0
#define EFUSE_INTF0_53_ADDRESS                                                 (0x8d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_53_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_53_RESET                                                   0x0

// 0x8d8 (EFUSE_INTF0_54)
#define EFUSE_INTF0_R_54_LSB                                                   0
#define EFUSE_INTF0_R_54_MSB                                                   31
#define EFUSE_INTF0_R_54_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_54_GET(x)                                                (((x) & EFUSE_INTF0_R_54_MASK) >> EFUSE_INTF0_R_54_LSB)
#define EFUSE_INTF0_R_54_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_54_LSB) & EFUSE_INTF0_R_54_MASK)
#define EFUSE_INTF0_R_54_RESET                                                 0x0
#define EFUSE_INTF0_54_ADDRESS                                                 (0x8d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_54_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_54_RESET                                                   0x0

// 0x8dc (EFUSE_INTF0_55)
#define EFUSE_INTF0_R_55_LSB                                                   0
#define EFUSE_INTF0_R_55_MSB                                                   31
#define EFUSE_INTF0_R_55_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_55_GET(x)                                                (((x) & EFUSE_INTF0_R_55_MASK) >> EFUSE_INTF0_R_55_LSB)
#define EFUSE_INTF0_R_55_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_55_LSB) & EFUSE_INTF0_R_55_MASK)
#define EFUSE_INTF0_R_55_RESET                                                 0x0
#define EFUSE_INTF0_55_ADDRESS                                                 (0x8dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_55_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_55_RESET                                                   0x0

// 0x8e0 (EFUSE_INTF0_56)
#define EFUSE_INTF0_R_56_LSB                                                   0
#define EFUSE_INTF0_R_56_MSB                                                   31
#define EFUSE_INTF0_R_56_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_56_GET(x)                                                (((x) & EFUSE_INTF0_R_56_MASK) >> EFUSE_INTF0_R_56_LSB)
#define EFUSE_INTF0_R_56_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_56_LSB) & EFUSE_INTF0_R_56_MASK)
#define EFUSE_INTF0_R_56_RESET                                                 0x0
#define EFUSE_INTF0_56_ADDRESS                                                 (0x8e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_56_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_56_RESET                                                   0x0

// 0x8e4 (EFUSE_INTF0_57)
#define EFUSE_INTF0_R_57_LSB                                                   0
#define EFUSE_INTF0_R_57_MSB                                                   31
#define EFUSE_INTF0_R_57_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_57_GET(x)                                                (((x) & EFUSE_INTF0_R_57_MASK) >> EFUSE_INTF0_R_57_LSB)
#define EFUSE_INTF0_R_57_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_57_LSB) & EFUSE_INTF0_R_57_MASK)
#define EFUSE_INTF0_R_57_RESET                                                 0x0
#define EFUSE_INTF0_57_ADDRESS                                                 (0x8e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_57_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_57_RESET                                                   0x0

// 0x8e8 (EFUSE_INTF0_58)
#define EFUSE_INTF0_R_58_LSB                                                   0
#define EFUSE_INTF0_R_58_MSB                                                   31
#define EFUSE_INTF0_R_58_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_58_GET(x)                                                (((x) & EFUSE_INTF0_R_58_MASK) >> EFUSE_INTF0_R_58_LSB)
#define EFUSE_INTF0_R_58_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_58_LSB) & EFUSE_INTF0_R_58_MASK)
#define EFUSE_INTF0_R_58_RESET                                                 0x0
#define EFUSE_INTF0_58_ADDRESS                                                 (0x8e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_58_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_58_RESET                                                   0x0

// 0x8ec (EFUSE_INTF0_59)
#define EFUSE_INTF0_R_59_LSB                                                   0
#define EFUSE_INTF0_R_59_MSB                                                   31
#define EFUSE_INTF0_R_59_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_59_GET(x)                                                (((x) & EFUSE_INTF0_R_59_MASK) >> EFUSE_INTF0_R_59_LSB)
#define EFUSE_INTF0_R_59_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_59_LSB) & EFUSE_INTF0_R_59_MASK)
#define EFUSE_INTF0_R_59_RESET                                                 0x0
#define EFUSE_INTF0_59_ADDRESS                                                 (0x8ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_59_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_59_RESET                                                   0x0

// 0x8f0 (EFUSE_INTF0_60)
#define EFUSE_INTF0_R_60_LSB                                                   0
#define EFUSE_INTF0_R_60_MSB                                                   31
#define EFUSE_INTF0_R_60_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_60_GET(x)                                                (((x) & EFUSE_INTF0_R_60_MASK) >> EFUSE_INTF0_R_60_LSB)
#define EFUSE_INTF0_R_60_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_60_LSB) & EFUSE_INTF0_R_60_MASK)
#define EFUSE_INTF0_R_60_RESET                                                 0x0
#define EFUSE_INTF0_60_ADDRESS                                                 (0x8f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_60_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_60_RESET                                                   0x0

// 0x8f4 (EFUSE_INTF0_61)
#define EFUSE_INTF0_R_61_LSB                                                   0
#define EFUSE_INTF0_R_61_MSB                                                   31
#define EFUSE_INTF0_R_61_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_61_GET(x)                                                (((x) & EFUSE_INTF0_R_61_MASK) >> EFUSE_INTF0_R_61_LSB)
#define EFUSE_INTF0_R_61_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_61_LSB) & EFUSE_INTF0_R_61_MASK)
#define EFUSE_INTF0_R_61_RESET                                                 0x0
#define EFUSE_INTF0_61_ADDRESS                                                 (0x8f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_61_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_61_RESET                                                   0x0

// 0x8f8 (EFUSE_INTF0_62)
#define EFUSE_INTF0_R_62_LSB                                                   0
#define EFUSE_INTF0_R_62_MSB                                                   31
#define EFUSE_INTF0_R_62_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_62_GET(x)                                                (((x) & EFUSE_INTF0_R_62_MASK) >> EFUSE_INTF0_R_62_LSB)
#define EFUSE_INTF0_R_62_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_62_LSB) & EFUSE_INTF0_R_62_MASK)
#define EFUSE_INTF0_R_62_RESET                                                 0x0
#define EFUSE_INTF0_62_ADDRESS                                                 (0x8f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_62_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_62_RESET                                                   0x0

// 0x8fc (EFUSE_INTF0_63)
#define EFUSE_INTF0_R_63_LSB                                                   0
#define EFUSE_INTF0_R_63_MSB                                                   31
#define EFUSE_INTF0_R_63_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_63_GET(x)                                                (((x) & EFUSE_INTF0_R_63_MASK) >> EFUSE_INTF0_R_63_LSB)
#define EFUSE_INTF0_R_63_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_63_LSB) & EFUSE_INTF0_R_63_MASK)
#define EFUSE_INTF0_R_63_RESET                                                 0x0
#define EFUSE_INTF0_63_ADDRESS                                                 (0x8fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_63_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_63_RESET                                                   0x0

// 0x900 (EFUSE_INTF0_64)
#define EFUSE_INTF0_R_64_LSB                                                   0
#define EFUSE_INTF0_R_64_MSB                                                   31
#define EFUSE_INTF0_R_64_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_64_GET(x)                                                (((x) & EFUSE_INTF0_R_64_MASK) >> EFUSE_INTF0_R_64_LSB)
#define EFUSE_INTF0_R_64_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_64_LSB) & EFUSE_INTF0_R_64_MASK)
#define EFUSE_INTF0_R_64_RESET                                                 0x0
#define EFUSE_INTF0_64_ADDRESS                                                 (0x900 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_64_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_64_RESET                                                   0x0

// 0x904 (EFUSE_INTF0_65)
#define EFUSE_INTF0_R_65_LSB                                                   0
#define EFUSE_INTF0_R_65_MSB                                                   31
#define EFUSE_INTF0_R_65_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_65_GET(x)                                                (((x) & EFUSE_INTF0_R_65_MASK) >> EFUSE_INTF0_R_65_LSB)
#define EFUSE_INTF0_R_65_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_65_LSB) & EFUSE_INTF0_R_65_MASK)
#define EFUSE_INTF0_R_65_RESET                                                 0x0
#define EFUSE_INTF0_65_ADDRESS                                                 (0x904 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_65_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_65_RESET                                                   0x0

// 0x908 (EFUSE_INTF0_66)
#define EFUSE_INTF0_R_66_LSB                                                   0
#define EFUSE_INTF0_R_66_MSB                                                   31
#define EFUSE_INTF0_R_66_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_66_GET(x)                                                (((x) & EFUSE_INTF0_R_66_MASK) >> EFUSE_INTF0_R_66_LSB)
#define EFUSE_INTF0_R_66_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_66_LSB) & EFUSE_INTF0_R_66_MASK)
#define EFUSE_INTF0_R_66_RESET                                                 0x0
#define EFUSE_INTF0_66_ADDRESS                                                 (0x908 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_66_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_66_RESET                                                   0x0

// 0x90c (EFUSE_INTF0_67)
#define EFUSE_INTF0_R_67_LSB                                                   0
#define EFUSE_INTF0_R_67_MSB                                                   31
#define EFUSE_INTF0_R_67_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_67_GET(x)                                                (((x) & EFUSE_INTF0_R_67_MASK) >> EFUSE_INTF0_R_67_LSB)
#define EFUSE_INTF0_R_67_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_67_LSB) & EFUSE_INTF0_R_67_MASK)
#define EFUSE_INTF0_R_67_RESET                                                 0x0
#define EFUSE_INTF0_67_ADDRESS                                                 (0x90c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_67_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_67_RESET                                                   0x0

// 0x910 (EFUSE_INTF0_68)
#define EFUSE_INTF0_R_68_LSB                                                   0
#define EFUSE_INTF0_R_68_MSB                                                   31
#define EFUSE_INTF0_R_68_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_68_GET(x)                                                (((x) & EFUSE_INTF0_R_68_MASK) >> EFUSE_INTF0_R_68_LSB)
#define EFUSE_INTF0_R_68_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_68_LSB) & EFUSE_INTF0_R_68_MASK)
#define EFUSE_INTF0_R_68_RESET                                                 0x0
#define EFUSE_INTF0_68_ADDRESS                                                 (0x910 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_68_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_68_RESET                                                   0x0

// 0x914 (EFUSE_INTF0_69)
#define EFUSE_INTF0_R_69_LSB                                                   0
#define EFUSE_INTF0_R_69_MSB                                                   31
#define EFUSE_INTF0_R_69_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_69_GET(x)                                                (((x) & EFUSE_INTF0_R_69_MASK) >> EFUSE_INTF0_R_69_LSB)
#define EFUSE_INTF0_R_69_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_69_LSB) & EFUSE_INTF0_R_69_MASK)
#define EFUSE_INTF0_R_69_RESET                                                 0x0
#define EFUSE_INTF0_69_ADDRESS                                                 (0x914 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_69_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_69_RESET                                                   0x0

// 0x918 (EFUSE_INTF0_70)
#define EFUSE_INTF0_R_70_LSB                                                   0
#define EFUSE_INTF0_R_70_MSB                                                   31
#define EFUSE_INTF0_R_70_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_70_GET(x)                                                (((x) & EFUSE_INTF0_R_70_MASK) >> EFUSE_INTF0_R_70_LSB)
#define EFUSE_INTF0_R_70_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_70_LSB) & EFUSE_INTF0_R_70_MASK)
#define EFUSE_INTF0_R_70_RESET                                                 0x0
#define EFUSE_INTF0_70_ADDRESS                                                 (0x918 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_70_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_70_RESET                                                   0x0

// 0x91c (EFUSE_INTF0_71)
#define EFUSE_INTF0_R_71_LSB                                                   0
#define EFUSE_INTF0_R_71_MSB                                                   31
#define EFUSE_INTF0_R_71_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_71_GET(x)                                                (((x) & EFUSE_INTF0_R_71_MASK) >> EFUSE_INTF0_R_71_LSB)
#define EFUSE_INTF0_R_71_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_71_LSB) & EFUSE_INTF0_R_71_MASK)
#define EFUSE_INTF0_R_71_RESET                                                 0x0
#define EFUSE_INTF0_71_ADDRESS                                                 (0x91c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_71_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_71_RESET                                                   0x0

// 0x920 (EFUSE_INTF0_72)
#define EFUSE_INTF0_R_72_LSB                                                   0
#define EFUSE_INTF0_R_72_MSB                                                   31
#define EFUSE_INTF0_R_72_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_72_GET(x)                                                (((x) & EFUSE_INTF0_R_72_MASK) >> EFUSE_INTF0_R_72_LSB)
#define EFUSE_INTF0_R_72_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_72_LSB) & EFUSE_INTF0_R_72_MASK)
#define EFUSE_INTF0_R_72_RESET                                                 0x0
#define EFUSE_INTF0_72_ADDRESS                                                 (0x920 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_72_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_72_RESET                                                   0x0

// 0x924 (EFUSE_INTF0_73)
#define EFUSE_INTF0_R_73_LSB                                                   0
#define EFUSE_INTF0_R_73_MSB                                                   31
#define EFUSE_INTF0_R_73_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_73_GET(x)                                                (((x) & EFUSE_INTF0_R_73_MASK) >> EFUSE_INTF0_R_73_LSB)
#define EFUSE_INTF0_R_73_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_73_LSB) & EFUSE_INTF0_R_73_MASK)
#define EFUSE_INTF0_R_73_RESET                                                 0x0
#define EFUSE_INTF0_73_ADDRESS                                                 (0x924 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_73_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_73_RESET                                                   0x0

// 0x928 (EFUSE_INTF0_74)
#define EFUSE_INTF0_R_74_LSB                                                   0
#define EFUSE_INTF0_R_74_MSB                                                   31
#define EFUSE_INTF0_R_74_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_74_GET(x)                                                (((x) & EFUSE_INTF0_R_74_MASK) >> EFUSE_INTF0_R_74_LSB)
#define EFUSE_INTF0_R_74_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_74_LSB) & EFUSE_INTF0_R_74_MASK)
#define EFUSE_INTF0_R_74_RESET                                                 0x0
#define EFUSE_INTF0_74_ADDRESS                                                 (0x928 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_74_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_74_RESET                                                   0x0

// 0x92c (EFUSE_INTF0_75)
#define EFUSE_INTF0_R_75_LSB                                                   0
#define EFUSE_INTF0_R_75_MSB                                                   31
#define EFUSE_INTF0_R_75_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_75_GET(x)                                                (((x) & EFUSE_INTF0_R_75_MASK) >> EFUSE_INTF0_R_75_LSB)
#define EFUSE_INTF0_R_75_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_75_LSB) & EFUSE_INTF0_R_75_MASK)
#define EFUSE_INTF0_R_75_RESET                                                 0x0
#define EFUSE_INTF0_75_ADDRESS                                                 (0x92c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_75_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_75_RESET                                                   0x0

// 0x930 (EFUSE_INTF0_76)
#define EFUSE_INTF0_R_76_LSB                                                   0
#define EFUSE_INTF0_R_76_MSB                                                   31
#define EFUSE_INTF0_R_76_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_76_GET(x)                                                (((x) & EFUSE_INTF0_R_76_MASK) >> EFUSE_INTF0_R_76_LSB)
#define EFUSE_INTF0_R_76_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_76_LSB) & EFUSE_INTF0_R_76_MASK)
#define EFUSE_INTF0_R_76_RESET                                                 0x0
#define EFUSE_INTF0_76_ADDRESS                                                 (0x930 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_76_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_76_RESET                                                   0x0

// 0x934 (EFUSE_INTF0_77)
#define EFUSE_INTF0_R_77_LSB                                                   0
#define EFUSE_INTF0_R_77_MSB                                                   31
#define EFUSE_INTF0_R_77_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_77_GET(x)                                                (((x) & EFUSE_INTF0_R_77_MASK) >> EFUSE_INTF0_R_77_LSB)
#define EFUSE_INTF0_R_77_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_77_LSB) & EFUSE_INTF0_R_77_MASK)
#define EFUSE_INTF0_R_77_RESET                                                 0x0
#define EFUSE_INTF0_77_ADDRESS                                                 (0x934 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_77_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_77_RESET                                                   0x0

// 0x938 (EFUSE_INTF0_78)
#define EFUSE_INTF0_R_78_LSB                                                   0
#define EFUSE_INTF0_R_78_MSB                                                   31
#define EFUSE_INTF0_R_78_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_78_GET(x)                                                (((x) & EFUSE_INTF0_R_78_MASK) >> EFUSE_INTF0_R_78_LSB)
#define EFUSE_INTF0_R_78_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_78_LSB) & EFUSE_INTF0_R_78_MASK)
#define EFUSE_INTF0_R_78_RESET                                                 0x0
#define EFUSE_INTF0_78_ADDRESS                                                 (0x938 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_78_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_78_RESET                                                   0x0

// 0x93c (EFUSE_INTF0_79)
#define EFUSE_INTF0_R_79_LSB                                                   0
#define EFUSE_INTF0_R_79_MSB                                                   31
#define EFUSE_INTF0_R_79_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_79_GET(x)                                                (((x) & EFUSE_INTF0_R_79_MASK) >> EFUSE_INTF0_R_79_LSB)
#define EFUSE_INTF0_R_79_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_79_LSB) & EFUSE_INTF0_R_79_MASK)
#define EFUSE_INTF0_R_79_RESET                                                 0x0
#define EFUSE_INTF0_79_ADDRESS                                                 (0x93c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_79_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_79_RESET                                                   0x0

// 0x940 (EFUSE_INTF0_80)
#define EFUSE_INTF0_R_80_LSB                                                   0
#define EFUSE_INTF0_R_80_MSB                                                   31
#define EFUSE_INTF0_R_80_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_80_GET(x)                                                (((x) & EFUSE_INTF0_R_80_MASK) >> EFUSE_INTF0_R_80_LSB)
#define EFUSE_INTF0_R_80_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_80_LSB) & EFUSE_INTF0_R_80_MASK)
#define EFUSE_INTF0_R_80_RESET                                                 0x0
#define EFUSE_INTF0_80_ADDRESS                                                 (0x940 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_80_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_80_RESET                                                   0x0

// 0x944 (EFUSE_INTF0_81)
#define EFUSE_INTF0_R_81_LSB                                                   0
#define EFUSE_INTF0_R_81_MSB                                                   31
#define EFUSE_INTF0_R_81_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_81_GET(x)                                                (((x) & EFUSE_INTF0_R_81_MASK) >> EFUSE_INTF0_R_81_LSB)
#define EFUSE_INTF0_R_81_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_81_LSB) & EFUSE_INTF0_R_81_MASK)
#define EFUSE_INTF0_R_81_RESET                                                 0x0
#define EFUSE_INTF0_81_ADDRESS                                                 (0x944 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_81_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_81_RESET                                                   0x0

// 0x948 (EFUSE_INTF0_82)
#define EFUSE_INTF0_R_82_LSB                                                   0
#define EFUSE_INTF0_R_82_MSB                                                   31
#define EFUSE_INTF0_R_82_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_82_GET(x)                                                (((x) & EFUSE_INTF0_R_82_MASK) >> EFUSE_INTF0_R_82_LSB)
#define EFUSE_INTF0_R_82_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_82_LSB) & EFUSE_INTF0_R_82_MASK)
#define EFUSE_INTF0_R_82_RESET                                                 0x0
#define EFUSE_INTF0_82_ADDRESS                                                 (0x948 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_82_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_82_RESET                                                   0x0

// 0x94c (EFUSE_INTF0_83)
#define EFUSE_INTF0_R_83_LSB                                                   0
#define EFUSE_INTF0_R_83_MSB                                                   31
#define EFUSE_INTF0_R_83_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_83_GET(x)                                                (((x) & EFUSE_INTF0_R_83_MASK) >> EFUSE_INTF0_R_83_LSB)
#define EFUSE_INTF0_R_83_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_83_LSB) & EFUSE_INTF0_R_83_MASK)
#define EFUSE_INTF0_R_83_RESET                                                 0x0
#define EFUSE_INTF0_83_ADDRESS                                                 (0x94c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_83_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_83_RESET                                                   0x0

// 0x950 (EFUSE_INTF0_84)
#define EFUSE_INTF0_R_84_LSB                                                   0
#define EFUSE_INTF0_R_84_MSB                                                   31
#define EFUSE_INTF0_R_84_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_84_GET(x)                                                (((x) & EFUSE_INTF0_R_84_MASK) >> EFUSE_INTF0_R_84_LSB)
#define EFUSE_INTF0_R_84_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_84_LSB) & EFUSE_INTF0_R_84_MASK)
#define EFUSE_INTF0_R_84_RESET                                                 0x0
#define EFUSE_INTF0_84_ADDRESS                                                 (0x950 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_84_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_84_RESET                                                   0x0

// 0x954 (EFUSE_INTF0_85)
#define EFUSE_INTF0_R_85_LSB                                                   0
#define EFUSE_INTF0_R_85_MSB                                                   31
#define EFUSE_INTF0_R_85_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_85_GET(x)                                                (((x) & EFUSE_INTF0_R_85_MASK) >> EFUSE_INTF0_R_85_LSB)
#define EFUSE_INTF0_R_85_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_85_LSB) & EFUSE_INTF0_R_85_MASK)
#define EFUSE_INTF0_R_85_RESET                                                 0x0
#define EFUSE_INTF0_85_ADDRESS                                                 (0x954 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_85_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_85_RESET                                                   0x0

// 0x958 (EFUSE_INTF0_86)
#define EFUSE_INTF0_R_86_LSB                                                   0
#define EFUSE_INTF0_R_86_MSB                                                   31
#define EFUSE_INTF0_R_86_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_86_GET(x)                                                (((x) & EFUSE_INTF0_R_86_MASK) >> EFUSE_INTF0_R_86_LSB)
#define EFUSE_INTF0_R_86_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_86_LSB) & EFUSE_INTF0_R_86_MASK)
#define EFUSE_INTF0_R_86_RESET                                                 0x0
#define EFUSE_INTF0_86_ADDRESS                                                 (0x958 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_86_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_86_RESET                                                   0x0

// 0x95c (EFUSE_INTF0_87)
#define EFUSE_INTF0_R_87_LSB                                                   0
#define EFUSE_INTF0_R_87_MSB                                                   31
#define EFUSE_INTF0_R_87_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_87_GET(x)                                                (((x) & EFUSE_INTF0_R_87_MASK) >> EFUSE_INTF0_R_87_LSB)
#define EFUSE_INTF0_R_87_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_87_LSB) & EFUSE_INTF0_R_87_MASK)
#define EFUSE_INTF0_R_87_RESET                                                 0x0
#define EFUSE_INTF0_87_ADDRESS                                                 (0x95c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_87_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_87_RESET                                                   0x0

// 0x960 (EFUSE_INTF0_88)
#define EFUSE_INTF0_R_88_LSB                                                   0
#define EFUSE_INTF0_R_88_MSB                                                   31
#define EFUSE_INTF0_R_88_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_88_GET(x)                                                (((x) & EFUSE_INTF0_R_88_MASK) >> EFUSE_INTF0_R_88_LSB)
#define EFUSE_INTF0_R_88_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_88_LSB) & EFUSE_INTF0_R_88_MASK)
#define EFUSE_INTF0_R_88_RESET                                                 0x0
#define EFUSE_INTF0_88_ADDRESS                                                 (0x960 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_88_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_88_RESET                                                   0x0

// 0x964 (EFUSE_INTF0_89)
#define EFUSE_INTF0_R_89_LSB                                                   0
#define EFUSE_INTF0_R_89_MSB                                                   31
#define EFUSE_INTF0_R_89_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_89_GET(x)                                                (((x) & EFUSE_INTF0_R_89_MASK) >> EFUSE_INTF0_R_89_LSB)
#define EFUSE_INTF0_R_89_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_89_LSB) & EFUSE_INTF0_R_89_MASK)
#define EFUSE_INTF0_R_89_RESET                                                 0x0
#define EFUSE_INTF0_89_ADDRESS                                                 (0x964 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_89_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_89_RESET                                                   0x0

// 0x968 (EFUSE_INTF0_90)
#define EFUSE_INTF0_R_90_LSB                                                   0
#define EFUSE_INTF0_R_90_MSB                                                   31
#define EFUSE_INTF0_R_90_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_90_GET(x)                                                (((x) & EFUSE_INTF0_R_90_MASK) >> EFUSE_INTF0_R_90_LSB)
#define EFUSE_INTF0_R_90_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_90_LSB) & EFUSE_INTF0_R_90_MASK)
#define EFUSE_INTF0_R_90_RESET                                                 0x0
#define EFUSE_INTF0_90_ADDRESS                                                 (0x968 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_90_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_90_RESET                                                   0x0

// 0x96c (EFUSE_INTF0_91)
#define EFUSE_INTF0_R_91_LSB                                                   0
#define EFUSE_INTF0_R_91_MSB                                                   31
#define EFUSE_INTF0_R_91_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_91_GET(x)                                                (((x) & EFUSE_INTF0_R_91_MASK) >> EFUSE_INTF0_R_91_LSB)
#define EFUSE_INTF0_R_91_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_91_LSB) & EFUSE_INTF0_R_91_MASK)
#define EFUSE_INTF0_R_91_RESET                                                 0x0
#define EFUSE_INTF0_91_ADDRESS                                                 (0x96c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_91_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_91_RESET                                                   0x0

// 0x970 (EFUSE_INTF0_92)
#define EFUSE_INTF0_R_92_LSB                                                   0
#define EFUSE_INTF0_R_92_MSB                                                   31
#define EFUSE_INTF0_R_92_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_92_GET(x)                                                (((x) & EFUSE_INTF0_R_92_MASK) >> EFUSE_INTF0_R_92_LSB)
#define EFUSE_INTF0_R_92_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_92_LSB) & EFUSE_INTF0_R_92_MASK)
#define EFUSE_INTF0_R_92_RESET                                                 0x0
#define EFUSE_INTF0_92_ADDRESS                                                 (0x970 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_92_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_92_RESET                                                   0x0

// 0x974 (EFUSE_INTF0_93)
#define EFUSE_INTF0_R_93_LSB                                                   0
#define EFUSE_INTF0_R_93_MSB                                                   31
#define EFUSE_INTF0_R_93_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_93_GET(x)                                                (((x) & EFUSE_INTF0_R_93_MASK) >> EFUSE_INTF0_R_93_LSB)
#define EFUSE_INTF0_R_93_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_93_LSB) & EFUSE_INTF0_R_93_MASK)
#define EFUSE_INTF0_R_93_RESET                                                 0x0
#define EFUSE_INTF0_93_ADDRESS                                                 (0x974 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_93_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_93_RESET                                                   0x0

// 0x978 (EFUSE_INTF0_94)
#define EFUSE_INTF0_R_94_LSB                                                   0
#define EFUSE_INTF0_R_94_MSB                                                   31
#define EFUSE_INTF0_R_94_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_94_GET(x)                                                (((x) & EFUSE_INTF0_R_94_MASK) >> EFUSE_INTF0_R_94_LSB)
#define EFUSE_INTF0_R_94_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_94_LSB) & EFUSE_INTF0_R_94_MASK)
#define EFUSE_INTF0_R_94_RESET                                                 0x0
#define EFUSE_INTF0_94_ADDRESS                                                 (0x978 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_94_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_94_RESET                                                   0x0

// 0x97c (EFUSE_INTF0_95)
#define EFUSE_INTF0_R_95_LSB                                                   0
#define EFUSE_INTF0_R_95_MSB                                                   31
#define EFUSE_INTF0_R_95_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_95_GET(x)                                                (((x) & EFUSE_INTF0_R_95_MASK) >> EFUSE_INTF0_R_95_LSB)
#define EFUSE_INTF0_R_95_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_95_LSB) & EFUSE_INTF0_R_95_MASK)
#define EFUSE_INTF0_R_95_RESET                                                 0x0
#define EFUSE_INTF0_95_ADDRESS                                                 (0x97c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_95_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_95_RESET                                                   0x0

// 0x980 (EFUSE_INTF0_96)
#define EFUSE_INTF0_R_96_LSB                                                   0
#define EFUSE_INTF0_R_96_MSB                                                   31
#define EFUSE_INTF0_R_96_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_96_GET(x)                                                (((x) & EFUSE_INTF0_R_96_MASK) >> EFUSE_INTF0_R_96_LSB)
#define EFUSE_INTF0_R_96_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_96_LSB) & EFUSE_INTF0_R_96_MASK)
#define EFUSE_INTF0_R_96_RESET                                                 0x0
#define EFUSE_INTF0_96_ADDRESS                                                 (0x980 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_96_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_96_RESET                                                   0x0

// 0x984 (EFUSE_INTF0_97)
#define EFUSE_INTF0_R_97_LSB                                                   0
#define EFUSE_INTF0_R_97_MSB                                                   31
#define EFUSE_INTF0_R_97_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_97_GET(x)                                                (((x) & EFUSE_INTF0_R_97_MASK) >> EFUSE_INTF0_R_97_LSB)
#define EFUSE_INTF0_R_97_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_97_LSB) & EFUSE_INTF0_R_97_MASK)
#define EFUSE_INTF0_R_97_RESET                                                 0x0
#define EFUSE_INTF0_97_ADDRESS                                                 (0x984 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_97_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_97_RESET                                                   0x0

// 0x988 (EFUSE_INTF0_98)
#define EFUSE_INTF0_R_98_LSB                                                   0
#define EFUSE_INTF0_R_98_MSB                                                   31
#define EFUSE_INTF0_R_98_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_98_GET(x)                                                (((x) & EFUSE_INTF0_R_98_MASK) >> EFUSE_INTF0_R_98_LSB)
#define EFUSE_INTF0_R_98_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_98_LSB) & EFUSE_INTF0_R_98_MASK)
#define EFUSE_INTF0_R_98_RESET                                                 0x0
#define EFUSE_INTF0_98_ADDRESS                                                 (0x988 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_98_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_98_RESET                                                   0x0

// 0x98c (EFUSE_INTF0_99)
#define EFUSE_INTF0_R_99_LSB                                                   0
#define EFUSE_INTF0_R_99_MSB                                                   31
#define EFUSE_INTF0_R_99_MASK                                                  0xffffffff
#define EFUSE_INTF0_R_99_GET(x)                                                (((x) & EFUSE_INTF0_R_99_MASK) >> EFUSE_INTF0_R_99_LSB)
#define EFUSE_INTF0_R_99_SET(x)                                                (((0 | (x)) << EFUSE_INTF0_R_99_LSB) & EFUSE_INTF0_R_99_MASK)
#define EFUSE_INTF0_R_99_RESET                                                 0x0
#define EFUSE_INTF0_99_ADDRESS                                                 (0x98c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_99_RSTMASK                                                 0xffffffff
#define EFUSE_INTF0_99_RESET                                                   0x0

// 0x990 (EFUSE_INTF0_100)
#define EFUSE_INTF0_R_100_LSB                                                  0
#define EFUSE_INTF0_R_100_MSB                                                  31
#define EFUSE_INTF0_R_100_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_100_GET(x)                                               (((x) & EFUSE_INTF0_R_100_MASK) >> EFUSE_INTF0_R_100_LSB)
#define EFUSE_INTF0_R_100_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_100_LSB) & EFUSE_INTF0_R_100_MASK)
#define EFUSE_INTF0_R_100_RESET                                                0x0
#define EFUSE_INTF0_100_ADDRESS                                                (0x990 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_100_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_100_RESET                                                  0x0

// 0x994 (EFUSE_INTF0_101)
#define EFUSE_INTF0_R_101_LSB                                                  0
#define EFUSE_INTF0_R_101_MSB                                                  31
#define EFUSE_INTF0_R_101_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_101_GET(x)                                               (((x) & EFUSE_INTF0_R_101_MASK) >> EFUSE_INTF0_R_101_LSB)
#define EFUSE_INTF0_R_101_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_101_LSB) & EFUSE_INTF0_R_101_MASK)
#define EFUSE_INTF0_R_101_RESET                                                0x0
#define EFUSE_INTF0_101_ADDRESS                                                (0x994 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_101_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_101_RESET                                                  0x0

// 0x998 (EFUSE_INTF0_102)
#define EFUSE_INTF0_R_102_LSB                                                  0
#define EFUSE_INTF0_R_102_MSB                                                  31
#define EFUSE_INTF0_R_102_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_102_GET(x)                                               (((x) & EFUSE_INTF0_R_102_MASK) >> EFUSE_INTF0_R_102_LSB)
#define EFUSE_INTF0_R_102_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_102_LSB) & EFUSE_INTF0_R_102_MASK)
#define EFUSE_INTF0_R_102_RESET                                                0x0
#define EFUSE_INTF0_102_ADDRESS                                                (0x998 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_102_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_102_RESET                                                  0x0

// 0x99c (EFUSE_INTF0_103)
#define EFUSE_INTF0_R_103_LSB                                                  0
#define EFUSE_INTF0_R_103_MSB                                                  31
#define EFUSE_INTF0_R_103_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_103_GET(x)                                               (((x) & EFUSE_INTF0_R_103_MASK) >> EFUSE_INTF0_R_103_LSB)
#define EFUSE_INTF0_R_103_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_103_LSB) & EFUSE_INTF0_R_103_MASK)
#define EFUSE_INTF0_R_103_RESET                                                0x0
#define EFUSE_INTF0_103_ADDRESS                                                (0x99c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_103_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_103_RESET                                                  0x0

// 0x9a0 (EFUSE_INTF0_104)
#define EFUSE_INTF0_R_104_LSB                                                  0
#define EFUSE_INTF0_R_104_MSB                                                  31
#define EFUSE_INTF0_R_104_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_104_GET(x)                                               (((x) & EFUSE_INTF0_R_104_MASK) >> EFUSE_INTF0_R_104_LSB)
#define EFUSE_INTF0_R_104_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_104_LSB) & EFUSE_INTF0_R_104_MASK)
#define EFUSE_INTF0_R_104_RESET                                                0x0
#define EFUSE_INTF0_104_ADDRESS                                                (0x9a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_104_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_104_RESET                                                  0x0

// 0x9a4 (EFUSE_INTF0_105)
#define EFUSE_INTF0_R_105_LSB                                                  0
#define EFUSE_INTF0_R_105_MSB                                                  31
#define EFUSE_INTF0_R_105_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_105_GET(x)                                               (((x) & EFUSE_INTF0_R_105_MASK) >> EFUSE_INTF0_R_105_LSB)
#define EFUSE_INTF0_R_105_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_105_LSB) & EFUSE_INTF0_R_105_MASK)
#define EFUSE_INTF0_R_105_RESET                                                0x0
#define EFUSE_INTF0_105_ADDRESS                                                (0x9a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_105_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_105_RESET                                                  0x0

// 0x9a8 (EFUSE_INTF0_106)
#define EFUSE_INTF0_R_106_LSB                                                  0
#define EFUSE_INTF0_R_106_MSB                                                  31
#define EFUSE_INTF0_R_106_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_106_GET(x)                                               (((x) & EFUSE_INTF0_R_106_MASK) >> EFUSE_INTF0_R_106_LSB)
#define EFUSE_INTF0_R_106_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_106_LSB) & EFUSE_INTF0_R_106_MASK)
#define EFUSE_INTF0_R_106_RESET                                                0x0
#define EFUSE_INTF0_106_ADDRESS                                                (0x9a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_106_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_106_RESET                                                  0x0

// 0x9ac (EFUSE_INTF0_107)
#define EFUSE_INTF0_R_107_LSB                                                  0
#define EFUSE_INTF0_R_107_MSB                                                  31
#define EFUSE_INTF0_R_107_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_107_GET(x)                                               (((x) & EFUSE_INTF0_R_107_MASK) >> EFUSE_INTF0_R_107_LSB)
#define EFUSE_INTF0_R_107_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_107_LSB) & EFUSE_INTF0_R_107_MASK)
#define EFUSE_INTF0_R_107_RESET                                                0x0
#define EFUSE_INTF0_107_ADDRESS                                                (0x9ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_107_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_107_RESET                                                  0x0

// 0x9b0 (EFUSE_INTF0_108)
#define EFUSE_INTF0_R_108_LSB                                                  0
#define EFUSE_INTF0_R_108_MSB                                                  31
#define EFUSE_INTF0_R_108_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_108_GET(x)                                               (((x) & EFUSE_INTF0_R_108_MASK) >> EFUSE_INTF0_R_108_LSB)
#define EFUSE_INTF0_R_108_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_108_LSB) & EFUSE_INTF0_R_108_MASK)
#define EFUSE_INTF0_R_108_RESET                                                0x0
#define EFUSE_INTF0_108_ADDRESS                                                (0x9b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_108_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_108_RESET                                                  0x0

// 0x9b4 (EFUSE_INTF0_109)
#define EFUSE_INTF0_R_109_LSB                                                  0
#define EFUSE_INTF0_R_109_MSB                                                  31
#define EFUSE_INTF0_R_109_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_109_GET(x)                                               (((x) & EFUSE_INTF0_R_109_MASK) >> EFUSE_INTF0_R_109_LSB)
#define EFUSE_INTF0_R_109_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_109_LSB) & EFUSE_INTF0_R_109_MASK)
#define EFUSE_INTF0_R_109_RESET                                                0x0
#define EFUSE_INTF0_109_ADDRESS                                                (0x9b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_109_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_109_RESET                                                  0x0

// 0x9b8 (EFUSE_INTF0_110)
#define EFUSE_INTF0_R_110_LSB                                                  0
#define EFUSE_INTF0_R_110_MSB                                                  31
#define EFUSE_INTF0_R_110_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_110_GET(x)                                               (((x) & EFUSE_INTF0_R_110_MASK) >> EFUSE_INTF0_R_110_LSB)
#define EFUSE_INTF0_R_110_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_110_LSB) & EFUSE_INTF0_R_110_MASK)
#define EFUSE_INTF0_R_110_RESET                                                0x0
#define EFUSE_INTF0_110_ADDRESS                                                (0x9b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_110_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_110_RESET                                                  0x0

// 0x9bc (EFUSE_INTF0_111)
#define EFUSE_INTF0_R_111_LSB                                                  0
#define EFUSE_INTF0_R_111_MSB                                                  31
#define EFUSE_INTF0_R_111_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_111_GET(x)                                               (((x) & EFUSE_INTF0_R_111_MASK) >> EFUSE_INTF0_R_111_LSB)
#define EFUSE_INTF0_R_111_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_111_LSB) & EFUSE_INTF0_R_111_MASK)
#define EFUSE_INTF0_R_111_RESET                                                0x0
#define EFUSE_INTF0_111_ADDRESS                                                (0x9bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_111_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_111_RESET                                                  0x0

// 0x9c0 (EFUSE_INTF0_112)
#define EFUSE_INTF0_R_112_LSB                                                  0
#define EFUSE_INTF0_R_112_MSB                                                  31
#define EFUSE_INTF0_R_112_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_112_GET(x)                                               (((x) & EFUSE_INTF0_R_112_MASK) >> EFUSE_INTF0_R_112_LSB)
#define EFUSE_INTF0_R_112_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_112_LSB) & EFUSE_INTF0_R_112_MASK)
#define EFUSE_INTF0_R_112_RESET                                                0x0
#define EFUSE_INTF0_112_ADDRESS                                                (0x9c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_112_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_112_RESET                                                  0x0

// 0x9c4 (EFUSE_INTF0_113)
#define EFUSE_INTF0_R_113_LSB                                                  0
#define EFUSE_INTF0_R_113_MSB                                                  31
#define EFUSE_INTF0_R_113_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_113_GET(x)                                               (((x) & EFUSE_INTF0_R_113_MASK) >> EFUSE_INTF0_R_113_LSB)
#define EFUSE_INTF0_R_113_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_113_LSB) & EFUSE_INTF0_R_113_MASK)
#define EFUSE_INTF0_R_113_RESET                                                0x0
#define EFUSE_INTF0_113_ADDRESS                                                (0x9c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_113_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_113_RESET                                                  0x0

// 0x9c8 (EFUSE_INTF0_114)
#define EFUSE_INTF0_R_114_LSB                                                  0
#define EFUSE_INTF0_R_114_MSB                                                  31
#define EFUSE_INTF0_R_114_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_114_GET(x)                                               (((x) & EFUSE_INTF0_R_114_MASK) >> EFUSE_INTF0_R_114_LSB)
#define EFUSE_INTF0_R_114_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_114_LSB) & EFUSE_INTF0_R_114_MASK)
#define EFUSE_INTF0_R_114_RESET                                                0x0
#define EFUSE_INTF0_114_ADDRESS                                                (0x9c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_114_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_114_RESET                                                  0x0

// 0x9cc (EFUSE_INTF0_115)
#define EFUSE_INTF0_R_115_LSB                                                  0
#define EFUSE_INTF0_R_115_MSB                                                  31
#define EFUSE_INTF0_R_115_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_115_GET(x)                                               (((x) & EFUSE_INTF0_R_115_MASK) >> EFUSE_INTF0_R_115_LSB)
#define EFUSE_INTF0_R_115_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_115_LSB) & EFUSE_INTF0_R_115_MASK)
#define EFUSE_INTF0_R_115_RESET                                                0x0
#define EFUSE_INTF0_115_ADDRESS                                                (0x9cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_115_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_115_RESET                                                  0x0

// 0x9d0 (EFUSE_INTF0_116)
#define EFUSE_INTF0_R_116_LSB                                                  0
#define EFUSE_INTF0_R_116_MSB                                                  31
#define EFUSE_INTF0_R_116_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_116_GET(x)                                               (((x) & EFUSE_INTF0_R_116_MASK) >> EFUSE_INTF0_R_116_LSB)
#define EFUSE_INTF0_R_116_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_116_LSB) & EFUSE_INTF0_R_116_MASK)
#define EFUSE_INTF0_R_116_RESET                                                0x0
#define EFUSE_INTF0_116_ADDRESS                                                (0x9d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_116_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_116_RESET                                                  0x0

// 0x9d4 (EFUSE_INTF0_117)
#define EFUSE_INTF0_R_117_LSB                                                  0
#define EFUSE_INTF0_R_117_MSB                                                  31
#define EFUSE_INTF0_R_117_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_117_GET(x)                                               (((x) & EFUSE_INTF0_R_117_MASK) >> EFUSE_INTF0_R_117_LSB)
#define EFUSE_INTF0_R_117_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_117_LSB) & EFUSE_INTF0_R_117_MASK)
#define EFUSE_INTF0_R_117_RESET                                                0x0
#define EFUSE_INTF0_117_ADDRESS                                                (0x9d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_117_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_117_RESET                                                  0x0

// 0x9d8 (EFUSE_INTF0_118)
#define EFUSE_INTF0_R_118_LSB                                                  0
#define EFUSE_INTF0_R_118_MSB                                                  31
#define EFUSE_INTF0_R_118_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_118_GET(x)                                               (((x) & EFUSE_INTF0_R_118_MASK) >> EFUSE_INTF0_R_118_LSB)
#define EFUSE_INTF0_R_118_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_118_LSB) & EFUSE_INTF0_R_118_MASK)
#define EFUSE_INTF0_R_118_RESET                                                0x0
#define EFUSE_INTF0_118_ADDRESS                                                (0x9d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_118_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_118_RESET                                                  0x0

// 0x9dc (EFUSE_INTF0_119)
#define EFUSE_INTF0_R_119_LSB                                                  0
#define EFUSE_INTF0_R_119_MSB                                                  31
#define EFUSE_INTF0_R_119_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_119_GET(x)                                               (((x) & EFUSE_INTF0_R_119_MASK) >> EFUSE_INTF0_R_119_LSB)
#define EFUSE_INTF0_R_119_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_119_LSB) & EFUSE_INTF0_R_119_MASK)
#define EFUSE_INTF0_R_119_RESET                                                0x0
#define EFUSE_INTF0_119_ADDRESS                                                (0x9dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_119_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_119_RESET                                                  0x0

// 0x9e0 (EFUSE_INTF0_120)
#define EFUSE_INTF0_R_120_LSB                                                  0
#define EFUSE_INTF0_R_120_MSB                                                  31
#define EFUSE_INTF0_R_120_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_120_GET(x)                                               (((x) & EFUSE_INTF0_R_120_MASK) >> EFUSE_INTF0_R_120_LSB)
#define EFUSE_INTF0_R_120_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_120_LSB) & EFUSE_INTF0_R_120_MASK)
#define EFUSE_INTF0_R_120_RESET                                                0x0
#define EFUSE_INTF0_120_ADDRESS                                                (0x9e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_120_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_120_RESET                                                  0x0

// 0x9e4 (EFUSE_INTF0_121)
#define EFUSE_INTF0_R_121_LSB                                                  0
#define EFUSE_INTF0_R_121_MSB                                                  31
#define EFUSE_INTF0_R_121_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_121_GET(x)                                               (((x) & EFUSE_INTF0_R_121_MASK) >> EFUSE_INTF0_R_121_LSB)
#define EFUSE_INTF0_R_121_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_121_LSB) & EFUSE_INTF0_R_121_MASK)
#define EFUSE_INTF0_R_121_RESET                                                0x0
#define EFUSE_INTF0_121_ADDRESS                                                (0x9e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_121_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_121_RESET                                                  0x0

// 0x9e8 (EFUSE_INTF0_122)
#define EFUSE_INTF0_R_122_LSB                                                  0
#define EFUSE_INTF0_R_122_MSB                                                  31
#define EFUSE_INTF0_R_122_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_122_GET(x)                                               (((x) & EFUSE_INTF0_R_122_MASK) >> EFUSE_INTF0_R_122_LSB)
#define EFUSE_INTF0_R_122_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_122_LSB) & EFUSE_INTF0_R_122_MASK)
#define EFUSE_INTF0_R_122_RESET                                                0x0
#define EFUSE_INTF0_122_ADDRESS                                                (0x9e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_122_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_122_RESET                                                  0x0

// 0x9ec (EFUSE_INTF0_123)
#define EFUSE_INTF0_R_123_LSB                                                  0
#define EFUSE_INTF0_R_123_MSB                                                  31
#define EFUSE_INTF0_R_123_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_123_GET(x)                                               (((x) & EFUSE_INTF0_R_123_MASK) >> EFUSE_INTF0_R_123_LSB)
#define EFUSE_INTF0_R_123_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_123_LSB) & EFUSE_INTF0_R_123_MASK)
#define EFUSE_INTF0_R_123_RESET                                                0x0
#define EFUSE_INTF0_123_ADDRESS                                                (0x9ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_123_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_123_RESET                                                  0x0

// 0x9f0 (EFUSE_INTF0_124)
#define EFUSE_INTF0_R_124_LSB                                                  0
#define EFUSE_INTF0_R_124_MSB                                                  31
#define EFUSE_INTF0_R_124_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_124_GET(x)                                               (((x) & EFUSE_INTF0_R_124_MASK) >> EFUSE_INTF0_R_124_LSB)
#define EFUSE_INTF0_R_124_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_124_LSB) & EFUSE_INTF0_R_124_MASK)
#define EFUSE_INTF0_R_124_RESET                                                0x0
#define EFUSE_INTF0_124_ADDRESS                                                (0x9f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_124_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_124_RESET                                                  0x0

// 0x9f4 (EFUSE_INTF0_125)
#define EFUSE_INTF0_R_125_LSB                                                  0
#define EFUSE_INTF0_R_125_MSB                                                  31
#define EFUSE_INTF0_R_125_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_125_GET(x)                                               (((x) & EFUSE_INTF0_R_125_MASK) >> EFUSE_INTF0_R_125_LSB)
#define EFUSE_INTF0_R_125_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_125_LSB) & EFUSE_INTF0_R_125_MASK)
#define EFUSE_INTF0_R_125_RESET                                                0x0
#define EFUSE_INTF0_125_ADDRESS                                                (0x9f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_125_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_125_RESET                                                  0x0

// 0x9f8 (EFUSE_INTF0_126)
#define EFUSE_INTF0_R_126_LSB                                                  0
#define EFUSE_INTF0_R_126_MSB                                                  31
#define EFUSE_INTF0_R_126_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_126_GET(x)                                               (((x) & EFUSE_INTF0_R_126_MASK) >> EFUSE_INTF0_R_126_LSB)
#define EFUSE_INTF0_R_126_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_126_LSB) & EFUSE_INTF0_R_126_MASK)
#define EFUSE_INTF0_R_126_RESET                                                0x0
#define EFUSE_INTF0_126_ADDRESS                                                (0x9f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_126_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_126_RESET                                                  0x0

// 0x9fc (EFUSE_INTF0_127)
#define EFUSE_INTF0_R_127_LSB                                                  0
#define EFUSE_INTF0_R_127_MSB                                                  31
#define EFUSE_INTF0_R_127_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_127_GET(x)                                               (((x) & EFUSE_INTF0_R_127_MASK) >> EFUSE_INTF0_R_127_LSB)
#define EFUSE_INTF0_R_127_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_127_LSB) & EFUSE_INTF0_R_127_MASK)
#define EFUSE_INTF0_R_127_RESET                                                0x0
#define EFUSE_INTF0_127_ADDRESS                                                (0x9fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_127_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_127_RESET                                                  0x0

// 0xa00 (EFUSE_INTF0_128)
#define EFUSE_INTF0_R_128_LSB                                                  0
#define EFUSE_INTF0_R_128_MSB                                                  31
#define EFUSE_INTF0_R_128_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_128_GET(x)                                               (((x) & EFUSE_INTF0_R_128_MASK) >> EFUSE_INTF0_R_128_LSB)
#define EFUSE_INTF0_R_128_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_128_LSB) & EFUSE_INTF0_R_128_MASK)
#define EFUSE_INTF0_R_128_RESET                                                0x0
#define EFUSE_INTF0_128_ADDRESS                                                (0xa00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_128_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_128_RESET                                                  0x0

// 0xa04 (EFUSE_INTF0_129)
#define EFUSE_INTF0_R_129_LSB                                                  0
#define EFUSE_INTF0_R_129_MSB                                                  31
#define EFUSE_INTF0_R_129_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_129_GET(x)                                               (((x) & EFUSE_INTF0_R_129_MASK) >> EFUSE_INTF0_R_129_LSB)
#define EFUSE_INTF0_R_129_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_129_LSB) & EFUSE_INTF0_R_129_MASK)
#define EFUSE_INTF0_R_129_RESET                                                0x0
#define EFUSE_INTF0_129_ADDRESS                                                (0xa04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_129_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_129_RESET                                                  0x0

// 0xa08 (EFUSE_INTF0_130)
#define EFUSE_INTF0_R_130_LSB                                                  0
#define EFUSE_INTF0_R_130_MSB                                                  31
#define EFUSE_INTF0_R_130_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_130_GET(x)                                               (((x) & EFUSE_INTF0_R_130_MASK) >> EFUSE_INTF0_R_130_LSB)
#define EFUSE_INTF0_R_130_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_130_LSB) & EFUSE_INTF0_R_130_MASK)
#define EFUSE_INTF0_R_130_RESET                                                0x0
#define EFUSE_INTF0_130_ADDRESS                                                (0xa08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_130_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_130_RESET                                                  0x0

// 0xa0c (EFUSE_INTF0_131)
#define EFUSE_INTF0_R_131_LSB                                                  0
#define EFUSE_INTF0_R_131_MSB                                                  31
#define EFUSE_INTF0_R_131_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_131_GET(x)                                               (((x) & EFUSE_INTF0_R_131_MASK) >> EFUSE_INTF0_R_131_LSB)
#define EFUSE_INTF0_R_131_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_131_LSB) & EFUSE_INTF0_R_131_MASK)
#define EFUSE_INTF0_R_131_RESET                                                0x0
#define EFUSE_INTF0_131_ADDRESS                                                (0xa0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_131_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_131_RESET                                                  0x0

// 0xa10 (EFUSE_INTF0_132)
#define EFUSE_INTF0_R_132_LSB                                                  0
#define EFUSE_INTF0_R_132_MSB                                                  31
#define EFUSE_INTF0_R_132_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_132_GET(x)                                               (((x) & EFUSE_INTF0_R_132_MASK) >> EFUSE_INTF0_R_132_LSB)
#define EFUSE_INTF0_R_132_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_132_LSB) & EFUSE_INTF0_R_132_MASK)
#define EFUSE_INTF0_R_132_RESET                                                0x0
#define EFUSE_INTF0_132_ADDRESS                                                (0xa10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_132_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_132_RESET                                                  0x0

// 0xa14 (EFUSE_INTF0_133)
#define EFUSE_INTF0_R_133_LSB                                                  0
#define EFUSE_INTF0_R_133_MSB                                                  31
#define EFUSE_INTF0_R_133_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_133_GET(x)                                               (((x) & EFUSE_INTF0_R_133_MASK) >> EFUSE_INTF0_R_133_LSB)
#define EFUSE_INTF0_R_133_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_133_LSB) & EFUSE_INTF0_R_133_MASK)
#define EFUSE_INTF0_R_133_RESET                                                0x0
#define EFUSE_INTF0_133_ADDRESS                                                (0xa14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_133_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_133_RESET                                                  0x0

// 0xa18 (EFUSE_INTF0_134)
#define EFUSE_INTF0_R_134_LSB                                                  0
#define EFUSE_INTF0_R_134_MSB                                                  31
#define EFUSE_INTF0_R_134_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_134_GET(x)                                               (((x) & EFUSE_INTF0_R_134_MASK) >> EFUSE_INTF0_R_134_LSB)
#define EFUSE_INTF0_R_134_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_134_LSB) & EFUSE_INTF0_R_134_MASK)
#define EFUSE_INTF0_R_134_RESET                                                0x0
#define EFUSE_INTF0_134_ADDRESS                                                (0xa18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_134_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_134_RESET                                                  0x0

// 0xa1c (EFUSE_INTF0_135)
#define EFUSE_INTF0_R_135_LSB                                                  0
#define EFUSE_INTF0_R_135_MSB                                                  31
#define EFUSE_INTF0_R_135_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_135_GET(x)                                               (((x) & EFUSE_INTF0_R_135_MASK) >> EFUSE_INTF0_R_135_LSB)
#define EFUSE_INTF0_R_135_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_135_LSB) & EFUSE_INTF0_R_135_MASK)
#define EFUSE_INTF0_R_135_RESET                                                0x0
#define EFUSE_INTF0_135_ADDRESS                                                (0xa1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_135_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_135_RESET                                                  0x0

// 0xa20 (EFUSE_INTF0_136)
#define EFUSE_INTF0_R_136_LSB                                                  0
#define EFUSE_INTF0_R_136_MSB                                                  31
#define EFUSE_INTF0_R_136_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_136_GET(x)                                               (((x) & EFUSE_INTF0_R_136_MASK) >> EFUSE_INTF0_R_136_LSB)
#define EFUSE_INTF0_R_136_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_136_LSB) & EFUSE_INTF0_R_136_MASK)
#define EFUSE_INTF0_R_136_RESET                                                0x0
#define EFUSE_INTF0_136_ADDRESS                                                (0xa20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_136_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_136_RESET                                                  0x0

// 0xa24 (EFUSE_INTF0_137)
#define EFUSE_INTF0_R_137_LSB                                                  0
#define EFUSE_INTF0_R_137_MSB                                                  31
#define EFUSE_INTF0_R_137_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_137_GET(x)                                               (((x) & EFUSE_INTF0_R_137_MASK) >> EFUSE_INTF0_R_137_LSB)
#define EFUSE_INTF0_R_137_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_137_LSB) & EFUSE_INTF0_R_137_MASK)
#define EFUSE_INTF0_R_137_RESET                                                0x0
#define EFUSE_INTF0_137_ADDRESS                                                (0xa24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_137_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_137_RESET                                                  0x0

// 0xa28 (EFUSE_INTF0_138)
#define EFUSE_INTF0_R_138_LSB                                                  0
#define EFUSE_INTF0_R_138_MSB                                                  31
#define EFUSE_INTF0_R_138_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_138_GET(x)                                               (((x) & EFUSE_INTF0_R_138_MASK) >> EFUSE_INTF0_R_138_LSB)
#define EFUSE_INTF0_R_138_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_138_LSB) & EFUSE_INTF0_R_138_MASK)
#define EFUSE_INTF0_R_138_RESET                                                0x0
#define EFUSE_INTF0_138_ADDRESS                                                (0xa28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_138_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_138_RESET                                                  0x0

// 0xa2c (EFUSE_INTF0_139)
#define EFUSE_INTF0_R_139_LSB                                                  0
#define EFUSE_INTF0_R_139_MSB                                                  31
#define EFUSE_INTF0_R_139_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_139_GET(x)                                               (((x) & EFUSE_INTF0_R_139_MASK) >> EFUSE_INTF0_R_139_LSB)
#define EFUSE_INTF0_R_139_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_139_LSB) & EFUSE_INTF0_R_139_MASK)
#define EFUSE_INTF0_R_139_RESET                                                0x0
#define EFUSE_INTF0_139_ADDRESS                                                (0xa2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_139_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_139_RESET                                                  0x0

// 0xa30 (EFUSE_INTF0_140)
#define EFUSE_INTF0_R_140_LSB                                                  0
#define EFUSE_INTF0_R_140_MSB                                                  31
#define EFUSE_INTF0_R_140_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_140_GET(x)                                               (((x) & EFUSE_INTF0_R_140_MASK) >> EFUSE_INTF0_R_140_LSB)
#define EFUSE_INTF0_R_140_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_140_LSB) & EFUSE_INTF0_R_140_MASK)
#define EFUSE_INTF0_R_140_RESET                                                0x0
#define EFUSE_INTF0_140_ADDRESS                                                (0xa30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_140_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_140_RESET                                                  0x0

// 0xa34 (EFUSE_INTF0_141)
#define EFUSE_INTF0_R_141_LSB                                                  0
#define EFUSE_INTF0_R_141_MSB                                                  31
#define EFUSE_INTF0_R_141_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_141_GET(x)                                               (((x) & EFUSE_INTF0_R_141_MASK) >> EFUSE_INTF0_R_141_LSB)
#define EFUSE_INTF0_R_141_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_141_LSB) & EFUSE_INTF0_R_141_MASK)
#define EFUSE_INTF0_R_141_RESET                                                0x0
#define EFUSE_INTF0_141_ADDRESS                                                (0xa34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_141_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_141_RESET                                                  0x0

// 0xa38 (EFUSE_INTF0_142)
#define EFUSE_INTF0_R_142_LSB                                                  0
#define EFUSE_INTF0_R_142_MSB                                                  31
#define EFUSE_INTF0_R_142_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_142_GET(x)                                               (((x) & EFUSE_INTF0_R_142_MASK) >> EFUSE_INTF0_R_142_LSB)
#define EFUSE_INTF0_R_142_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_142_LSB) & EFUSE_INTF0_R_142_MASK)
#define EFUSE_INTF0_R_142_RESET                                                0x0
#define EFUSE_INTF0_142_ADDRESS                                                (0xa38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_142_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_142_RESET                                                  0x0

// 0xa3c (EFUSE_INTF0_143)
#define EFUSE_INTF0_R_143_LSB                                                  0
#define EFUSE_INTF0_R_143_MSB                                                  31
#define EFUSE_INTF0_R_143_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_143_GET(x)                                               (((x) & EFUSE_INTF0_R_143_MASK) >> EFUSE_INTF0_R_143_LSB)
#define EFUSE_INTF0_R_143_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_143_LSB) & EFUSE_INTF0_R_143_MASK)
#define EFUSE_INTF0_R_143_RESET                                                0x0
#define EFUSE_INTF0_143_ADDRESS                                                (0xa3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_143_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_143_RESET                                                  0x0

// 0xa40 (EFUSE_INTF0_144)
#define EFUSE_INTF0_R_144_LSB                                                  0
#define EFUSE_INTF0_R_144_MSB                                                  31
#define EFUSE_INTF0_R_144_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_144_GET(x)                                               (((x) & EFUSE_INTF0_R_144_MASK) >> EFUSE_INTF0_R_144_LSB)
#define EFUSE_INTF0_R_144_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_144_LSB) & EFUSE_INTF0_R_144_MASK)
#define EFUSE_INTF0_R_144_RESET                                                0x0
#define EFUSE_INTF0_144_ADDRESS                                                (0xa40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_144_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_144_RESET                                                  0x0

// 0xa44 (EFUSE_INTF0_145)
#define EFUSE_INTF0_R_145_LSB                                                  0
#define EFUSE_INTF0_R_145_MSB                                                  31
#define EFUSE_INTF0_R_145_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_145_GET(x)                                               (((x) & EFUSE_INTF0_R_145_MASK) >> EFUSE_INTF0_R_145_LSB)
#define EFUSE_INTF0_R_145_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_145_LSB) & EFUSE_INTF0_R_145_MASK)
#define EFUSE_INTF0_R_145_RESET                                                0x0
#define EFUSE_INTF0_145_ADDRESS                                                (0xa44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_145_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_145_RESET                                                  0x0

// 0xa48 (EFUSE_INTF0_146)
#define EFUSE_INTF0_R_146_LSB                                                  0
#define EFUSE_INTF0_R_146_MSB                                                  31
#define EFUSE_INTF0_R_146_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_146_GET(x)                                               (((x) & EFUSE_INTF0_R_146_MASK) >> EFUSE_INTF0_R_146_LSB)
#define EFUSE_INTF0_R_146_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_146_LSB) & EFUSE_INTF0_R_146_MASK)
#define EFUSE_INTF0_R_146_RESET                                                0x0
#define EFUSE_INTF0_146_ADDRESS                                                (0xa48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_146_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_146_RESET                                                  0x0

// 0xa4c (EFUSE_INTF0_147)
#define EFUSE_INTF0_R_147_LSB                                                  0
#define EFUSE_INTF0_R_147_MSB                                                  31
#define EFUSE_INTF0_R_147_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_147_GET(x)                                               (((x) & EFUSE_INTF0_R_147_MASK) >> EFUSE_INTF0_R_147_LSB)
#define EFUSE_INTF0_R_147_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_147_LSB) & EFUSE_INTF0_R_147_MASK)
#define EFUSE_INTF0_R_147_RESET                                                0x0
#define EFUSE_INTF0_147_ADDRESS                                                (0xa4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_147_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_147_RESET                                                  0x0

// 0xa50 (EFUSE_INTF0_148)
#define EFUSE_INTF0_R_148_LSB                                                  0
#define EFUSE_INTF0_R_148_MSB                                                  31
#define EFUSE_INTF0_R_148_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_148_GET(x)                                               (((x) & EFUSE_INTF0_R_148_MASK) >> EFUSE_INTF0_R_148_LSB)
#define EFUSE_INTF0_R_148_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_148_LSB) & EFUSE_INTF0_R_148_MASK)
#define EFUSE_INTF0_R_148_RESET                                                0x0
#define EFUSE_INTF0_148_ADDRESS                                                (0xa50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_148_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_148_RESET                                                  0x0

// 0xa54 (EFUSE_INTF0_149)
#define EFUSE_INTF0_R_149_LSB                                                  0
#define EFUSE_INTF0_R_149_MSB                                                  31
#define EFUSE_INTF0_R_149_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_149_GET(x)                                               (((x) & EFUSE_INTF0_R_149_MASK) >> EFUSE_INTF0_R_149_LSB)
#define EFUSE_INTF0_R_149_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_149_LSB) & EFUSE_INTF0_R_149_MASK)
#define EFUSE_INTF0_R_149_RESET                                                0x0
#define EFUSE_INTF0_149_ADDRESS                                                (0xa54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_149_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_149_RESET                                                  0x0

// 0xa58 (EFUSE_INTF0_150)
#define EFUSE_INTF0_R_150_LSB                                                  0
#define EFUSE_INTF0_R_150_MSB                                                  31
#define EFUSE_INTF0_R_150_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_150_GET(x)                                               (((x) & EFUSE_INTF0_R_150_MASK) >> EFUSE_INTF0_R_150_LSB)
#define EFUSE_INTF0_R_150_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_150_LSB) & EFUSE_INTF0_R_150_MASK)
#define EFUSE_INTF0_R_150_RESET                                                0x0
#define EFUSE_INTF0_150_ADDRESS                                                (0xa58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_150_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_150_RESET                                                  0x0

// 0xa5c (EFUSE_INTF0_151)
#define EFUSE_INTF0_R_151_LSB                                                  0
#define EFUSE_INTF0_R_151_MSB                                                  31
#define EFUSE_INTF0_R_151_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_151_GET(x)                                               (((x) & EFUSE_INTF0_R_151_MASK) >> EFUSE_INTF0_R_151_LSB)
#define EFUSE_INTF0_R_151_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_151_LSB) & EFUSE_INTF0_R_151_MASK)
#define EFUSE_INTF0_R_151_RESET                                                0x0
#define EFUSE_INTF0_151_ADDRESS                                                (0xa5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_151_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_151_RESET                                                  0x0

// 0xa60 (EFUSE_INTF0_152)
#define EFUSE_INTF0_R_152_LSB                                                  0
#define EFUSE_INTF0_R_152_MSB                                                  31
#define EFUSE_INTF0_R_152_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_152_GET(x)                                               (((x) & EFUSE_INTF0_R_152_MASK) >> EFUSE_INTF0_R_152_LSB)
#define EFUSE_INTF0_R_152_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_152_LSB) & EFUSE_INTF0_R_152_MASK)
#define EFUSE_INTF0_R_152_RESET                                                0x0
#define EFUSE_INTF0_152_ADDRESS                                                (0xa60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_152_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_152_RESET                                                  0x0

// 0xa64 (EFUSE_INTF0_153)
#define EFUSE_INTF0_R_153_LSB                                                  0
#define EFUSE_INTF0_R_153_MSB                                                  31
#define EFUSE_INTF0_R_153_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_153_GET(x)                                               (((x) & EFUSE_INTF0_R_153_MASK) >> EFUSE_INTF0_R_153_LSB)
#define EFUSE_INTF0_R_153_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_153_LSB) & EFUSE_INTF0_R_153_MASK)
#define EFUSE_INTF0_R_153_RESET                                                0x0
#define EFUSE_INTF0_153_ADDRESS                                                (0xa64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_153_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_153_RESET                                                  0x0

// 0xa68 (EFUSE_INTF0_154)
#define EFUSE_INTF0_R_154_LSB                                                  0
#define EFUSE_INTF0_R_154_MSB                                                  31
#define EFUSE_INTF0_R_154_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_154_GET(x)                                               (((x) & EFUSE_INTF0_R_154_MASK) >> EFUSE_INTF0_R_154_LSB)
#define EFUSE_INTF0_R_154_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_154_LSB) & EFUSE_INTF0_R_154_MASK)
#define EFUSE_INTF0_R_154_RESET                                                0x0
#define EFUSE_INTF0_154_ADDRESS                                                (0xa68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_154_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_154_RESET                                                  0x0

// 0xa6c (EFUSE_INTF0_155)
#define EFUSE_INTF0_R_155_LSB                                                  0
#define EFUSE_INTF0_R_155_MSB                                                  31
#define EFUSE_INTF0_R_155_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_155_GET(x)                                               (((x) & EFUSE_INTF0_R_155_MASK) >> EFUSE_INTF0_R_155_LSB)
#define EFUSE_INTF0_R_155_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_155_LSB) & EFUSE_INTF0_R_155_MASK)
#define EFUSE_INTF0_R_155_RESET                                                0x0
#define EFUSE_INTF0_155_ADDRESS                                                (0xa6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_155_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_155_RESET                                                  0x0

// 0xa70 (EFUSE_INTF0_156)
#define EFUSE_INTF0_R_156_LSB                                                  0
#define EFUSE_INTF0_R_156_MSB                                                  31
#define EFUSE_INTF0_R_156_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_156_GET(x)                                               (((x) & EFUSE_INTF0_R_156_MASK) >> EFUSE_INTF0_R_156_LSB)
#define EFUSE_INTF0_R_156_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_156_LSB) & EFUSE_INTF0_R_156_MASK)
#define EFUSE_INTF0_R_156_RESET                                                0x0
#define EFUSE_INTF0_156_ADDRESS                                                (0xa70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_156_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_156_RESET                                                  0x0

// 0xa74 (EFUSE_INTF0_157)
#define EFUSE_INTF0_R_157_LSB                                                  0
#define EFUSE_INTF0_R_157_MSB                                                  31
#define EFUSE_INTF0_R_157_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_157_GET(x)                                               (((x) & EFUSE_INTF0_R_157_MASK) >> EFUSE_INTF0_R_157_LSB)
#define EFUSE_INTF0_R_157_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_157_LSB) & EFUSE_INTF0_R_157_MASK)
#define EFUSE_INTF0_R_157_RESET                                                0x0
#define EFUSE_INTF0_157_ADDRESS                                                (0xa74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_157_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_157_RESET                                                  0x0

// 0xa78 (EFUSE_INTF0_158)
#define EFUSE_INTF0_R_158_LSB                                                  0
#define EFUSE_INTF0_R_158_MSB                                                  31
#define EFUSE_INTF0_R_158_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_158_GET(x)                                               (((x) & EFUSE_INTF0_R_158_MASK) >> EFUSE_INTF0_R_158_LSB)
#define EFUSE_INTF0_R_158_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_158_LSB) & EFUSE_INTF0_R_158_MASK)
#define EFUSE_INTF0_R_158_RESET                                                0x0
#define EFUSE_INTF0_158_ADDRESS                                                (0xa78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_158_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_158_RESET                                                  0x0

// 0xa7c (EFUSE_INTF0_159)
#define EFUSE_INTF0_R_159_LSB                                                  0
#define EFUSE_INTF0_R_159_MSB                                                  31
#define EFUSE_INTF0_R_159_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_159_GET(x)                                               (((x) & EFUSE_INTF0_R_159_MASK) >> EFUSE_INTF0_R_159_LSB)
#define EFUSE_INTF0_R_159_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_159_LSB) & EFUSE_INTF0_R_159_MASK)
#define EFUSE_INTF0_R_159_RESET                                                0x0
#define EFUSE_INTF0_159_ADDRESS                                                (0xa7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_159_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_159_RESET                                                  0x0

// 0xa80 (EFUSE_INTF0_160)
#define EFUSE_INTF0_R_160_LSB                                                  0
#define EFUSE_INTF0_R_160_MSB                                                  31
#define EFUSE_INTF0_R_160_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_160_GET(x)                                               (((x) & EFUSE_INTF0_R_160_MASK) >> EFUSE_INTF0_R_160_LSB)
#define EFUSE_INTF0_R_160_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_160_LSB) & EFUSE_INTF0_R_160_MASK)
#define EFUSE_INTF0_R_160_RESET                                                0x0
#define EFUSE_INTF0_160_ADDRESS                                                (0xa80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_160_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_160_RESET                                                  0x0

// 0xa84 (EFUSE_INTF0_161)
#define EFUSE_INTF0_R_161_LSB                                                  0
#define EFUSE_INTF0_R_161_MSB                                                  31
#define EFUSE_INTF0_R_161_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_161_GET(x)                                               (((x) & EFUSE_INTF0_R_161_MASK) >> EFUSE_INTF0_R_161_LSB)
#define EFUSE_INTF0_R_161_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_161_LSB) & EFUSE_INTF0_R_161_MASK)
#define EFUSE_INTF0_R_161_RESET                                                0x0
#define EFUSE_INTF0_161_ADDRESS                                                (0xa84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_161_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_161_RESET                                                  0x0

// 0xa88 (EFUSE_INTF0_162)
#define EFUSE_INTF0_R_162_LSB                                                  0
#define EFUSE_INTF0_R_162_MSB                                                  31
#define EFUSE_INTF0_R_162_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_162_GET(x)                                               (((x) & EFUSE_INTF0_R_162_MASK) >> EFUSE_INTF0_R_162_LSB)
#define EFUSE_INTF0_R_162_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_162_LSB) & EFUSE_INTF0_R_162_MASK)
#define EFUSE_INTF0_R_162_RESET                                                0x0
#define EFUSE_INTF0_162_ADDRESS                                                (0xa88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_162_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_162_RESET                                                  0x0

// 0xa8c (EFUSE_INTF0_163)
#define EFUSE_INTF0_R_163_LSB                                                  0
#define EFUSE_INTF0_R_163_MSB                                                  31
#define EFUSE_INTF0_R_163_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_163_GET(x)                                               (((x) & EFUSE_INTF0_R_163_MASK) >> EFUSE_INTF0_R_163_LSB)
#define EFUSE_INTF0_R_163_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_163_LSB) & EFUSE_INTF0_R_163_MASK)
#define EFUSE_INTF0_R_163_RESET                                                0x0
#define EFUSE_INTF0_163_ADDRESS                                                (0xa8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_163_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_163_RESET                                                  0x0

// 0xa90 (EFUSE_INTF0_164)
#define EFUSE_INTF0_R_164_LSB                                                  0
#define EFUSE_INTF0_R_164_MSB                                                  31
#define EFUSE_INTF0_R_164_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_164_GET(x)                                               (((x) & EFUSE_INTF0_R_164_MASK) >> EFUSE_INTF0_R_164_LSB)
#define EFUSE_INTF0_R_164_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_164_LSB) & EFUSE_INTF0_R_164_MASK)
#define EFUSE_INTF0_R_164_RESET                                                0x0
#define EFUSE_INTF0_164_ADDRESS                                                (0xa90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_164_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_164_RESET                                                  0x0

// 0xa94 (EFUSE_INTF0_165)
#define EFUSE_INTF0_R_165_LSB                                                  0
#define EFUSE_INTF0_R_165_MSB                                                  31
#define EFUSE_INTF0_R_165_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_165_GET(x)                                               (((x) & EFUSE_INTF0_R_165_MASK) >> EFUSE_INTF0_R_165_LSB)
#define EFUSE_INTF0_R_165_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_165_LSB) & EFUSE_INTF0_R_165_MASK)
#define EFUSE_INTF0_R_165_RESET                                                0x0
#define EFUSE_INTF0_165_ADDRESS                                                (0xa94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_165_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_165_RESET                                                  0x0

// 0xa98 (EFUSE_INTF0_166)
#define EFUSE_INTF0_R_166_LSB                                                  0
#define EFUSE_INTF0_R_166_MSB                                                  31
#define EFUSE_INTF0_R_166_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_166_GET(x)                                               (((x) & EFUSE_INTF0_R_166_MASK) >> EFUSE_INTF0_R_166_LSB)
#define EFUSE_INTF0_R_166_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_166_LSB) & EFUSE_INTF0_R_166_MASK)
#define EFUSE_INTF0_R_166_RESET                                                0x0
#define EFUSE_INTF0_166_ADDRESS                                                (0xa98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_166_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_166_RESET                                                  0x0

// 0xa9c (EFUSE_INTF0_167)
#define EFUSE_INTF0_R_167_LSB                                                  0
#define EFUSE_INTF0_R_167_MSB                                                  31
#define EFUSE_INTF0_R_167_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_167_GET(x)                                               (((x) & EFUSE_INTF0_R_167_MASK) >> EFUSE_INTF0_R_167_LSB)
#define EFUSE_INTF0_R_167_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_167_LSB) & EFUSE_INTF0_R_167_MASK)
#define EFUSE_INTF0_R_167_RESET                                                0x0
#define EFUSE_INTF0_167_ADDRESS                                                (0xa9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_167_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_167_RESET                                                  0x0

// 0xaa0 (EFUSE_INTF0_168)
#define EFUSE_INTF0_R_168_LSB                                                  0
#define EFUSE_INTF0_R_168_MSB                                                  31
#define EFUSE_INTF0_R_168_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_168_GET(x)                                               (((x) & EFUSE_INTF0_R_168_MASK) >> EFUSE_INTF0_R_168_LSB)
#define EFUSE_INTF0_R_168_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_168_LSB) & EFUSE_INTF0_R_168_MASK)
#define EFUSE_INTF0_R_168_RESET                                                0x0
#define EFUSE_INTF0_168_ADDRESS                                                (0xaa0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_168_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_168_RESET                                                  0x0

// 0xaa4 (EFUSE_INTF0_169)
#define EFUSE_INTF0_R_169_LSB                                                  0
#define EFUSE_INTF0_R_169_MSB                                                  31
#define EFUSE_INTF0_R_169_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_169_GET(x)                                               (((x) & EFUSE_INTF0_R_169_MASK) >> EFUSE_INTF0_R_169_LSB)
#define EFUSE_INTF0_R_169_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_169_LSB) & EFUSE_INTF0_R_169_MASK)
#define EFUSE_INTF0_R_169_RESET                                                0x0
#define EFUSE_INTF0_169_ADDRESS                                                (0xaa4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_169_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_169_RESET                                                  0x0

// 0xaa8 (EFUSE_INTF0_170)
#define EFUSE_INTF0_R_170_LSB                                                  0
#define EFUSE_INTF0_R_170_MSB                                                  31
#define EFUSE_INTF0_R_170_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_170_GET(x)                                               (((x) & EFUSE_INTF0_R_170_MASK) >> EFUSE_INTF0_R_170_LSB)
#define EFUSE_INTF0_R_170_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_170_LSB) & EFUSE_INTF0_R_170_MASK)
#define EFUSE_INTF0_R_170_RESET                                                0x0
#define EFUSE_INTF0_170_ADDRESS                                                (0xaa8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_170_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_170_RESET                                                  0x0

// 0xaac (EFUSE_INTF0_171)
#define EFUSE_INTF0_R_171_LSB                                                  0
#define EFUSE_INTF0_R_171_MSB                                                  31
#define EFUSE_INTF0_R_171_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_171_GET(x)                                               (((x) & EFUSE_INTF0_R_171_MASK) >> EFUSE_INTF0_R_171_LSB)
#define EFUSE_INTF0_R_171_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_171_LSB) & EFUSE_INTF0_R_171_MASK)
#define EFUSE_INTF0_R_171_RESET                                                0x0
#define EFUSE_INTF0_171_ADDRESS                                                (0xaac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_171_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_171_RESET                                                  0x0

// 0xab0 (EFUSE_INTF0_172)
#define EFUSE_INTF0_R_172_LSB                                                  0
#define EFUSE_INTF0_R_172_MSB                                                  31
#define EFUSE_INTF0_R_172_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_172_GET(x)                                               (((x) & EFUSE_INTF0_R_172_MASK) >> EFUSE_INTF0_R_172_LSB)
#define EFUSE_INTF0_R_172_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_172_LSB) & EFUSE_INTF0_R_172_MASK)
#define EFUSE_INTF0_R_172_RESET                                                0x0
#define EFUSE_INTF0_172_ADDRESS                                                (0xab0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_172_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_172_RESET                                                  0x0

// 0xab4 (EFUSE_INTF0_173)
#define EFUSE_INTF0_R_173_LSB                                                  0
#define EFUSE_INTF0_R_173_MSB                                                  31
#define EFUSE_INTF0_R_173_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_173_GET(x)                                               (((x) & EFUSE_INTF0_R_173_MASK) >> EFUSE_INTF0_R_173_LSB)
#define EFUSE_INTF0_R_173_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_173_LSB) & EFUSE_INTF0_R_173_MASK)
#define EFUSE_INTF0_R_173_RESET                                                0x0
#define EFUSE_INTF0_173_ADDRESS                                                (0xab4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_173_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_173_RESET                                                  0x0

// 0xab8 (EFUSE_INTF0_174)
#define EFUSE_INTF0_R_174_LSB                                                  0
#define EFUSE_INTF0_R_174_MSB                                                  31
#define EFUSE_INTF0_R_174_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_174_GET(x)                                               (((x) & EFUSE_INTF0_R_174_MASK) >> EFUSE_INTF0_R_174_LSB)
#define EFUSE_INTF0_R_174_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_174_LSB) & EFUSE_INTF0_R_174_MASK)
#define EFUSE_INTF0_R_174_RESET                                                0x0
#define EFUSE_INTF0_174_ADDRESS                                                (0xab8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_174_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_174_RESET                                                  0x0

// 0xabc (EFUSE_INTF0_175)
#define EFUSE_INTF0_R_175_LSB                                                  0
#define EFUSE_INTF0_R_175_MSB                                                  31
#define EFUSE_INTF0_R_175_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_175_GET(x)                                               (((x) & EFUSE_INTF0_R_175_MASK) >> EFUSE_INTF0_R_175_LSB)
#define EFUSE_INTF0_R_175_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_175_LSB) & EFUSE_INTF0_R_175_MASK)
#define EFUSE_INTF0_R_175_RESET                                                0x0
#define EFUSE_INTF0_175_ADDRESS                                                (0xabc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_175_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_175_RESET                                                  0x0

// 0xac0 (EFUSE_INTF0_176)
#define EFUSE_INTF0_R_176_LSB                                                  0
#define EFUSE_INTF0_R_176_MSB                                                  31
#define EFUSE_INTF0_R_176_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_176_GET(x)                                               (((x) & EFUSE_INTF0_R_176_MASK) >> EFUSE_INTF0_R_176_LSB)
#define EFUSE_INTF0_R_176_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_176_LSB) & EFUSE_INTF0_R_176_MASK)
#define EFUSE_INTF0_R_176_RESET                                                0x0
#define EFUSE_INTF0_176_ADDRESS                                                (0xac0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_176_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_176_RESET                                                  0x0

// 0xac4 (EFUSE_INTF0_177)
#define EFUSE_INTF0_R_177_LSB                                                  0
#define EFUSE_INTF0_R_177_MSB                                                  31
#define EFUSE_INTF0_R_177_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_177_GET(x)                                               (((x) & EFUSE_INTF0_R_177_MASK) >> EFUSE_INTF0_R_177_LSB)
#define EFUSE_INTF0_R_177_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_177_LSB) & EFUSE_INTF0_R_177_MASK)
#define EFUSE_INTF0_R_177_RESET                                                0x0
#define EFUSE_INTF0_177_ADDRESS                                                (0xac4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_177_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_177_RESET                                                  0x0

// 0xac8 (EFUSE_INTF0_178)
#define EFUSE_INTF0_R_178_LSB                                                  0
#define EFUSE_INTF0_R_178_MSB                                                  31
#define EFUSE_INTF0_R_178_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_178_GET(x)                                               (((x) & EFUSE_INTF0_R_178_MASK) >> EFUSE_INTF0_R_178_LSB)
#define EFUSE_INTF0_R_178_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_178_LSB) & EFUSE_INTF0_R_178_MASK)
#define EFUSE_INTF0_R_178_RESET                                                0x0
#define EFUSE_INTF0_178_ADDRESS                                                (0xac8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_178_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_178_RESET                                                  0x0

// 0xacc (EFUSE_INTF0_179)
#define EFUSE_INTF0_R_179_LSB                                                  0
#define EFUSE_INTF0_R_179_MSB                                                  31
#define EFUSE_INTF0_R_179_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_179_GET(x)                                               (((x) & EFUSE_INTF0_R_179_MASK) >> EFUSE_INTF0_R_179_LSB)
#define EFUSE_INTF0_R_179_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_179_LSB) & EFUSE_INTF0_R_179_MASK)
#define EFUSE_INTF0_R_179_RESET                                                0x0
#define EFUSE_INTF0_179_ADDRESS                                                (0xacc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_179_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_179_RESET                                                  0x0

// 0xad0 (EFUSE_INTF0_180)
#define EFUSE_INTF0_R_180_LSB                                                  0
#define EFUSE_INTF0_R_180_MSB                                                  31
#define EFUSE_INTF0_R_180_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_180_GET(x)                                               (((x) & EFUSE_INTF0_R_180_MASK) >> EFUSE_INTF0_R_180_LSB)
#define EFUSE_INTF0_R_180_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_180_LSB) & EFUSE_INTF0_R_180_MASK)
#define EFUSE_INTF0_R_180_RESET                                                0x0
#define EFUSE_INTF0_180_ADDRESS                                                (0xad0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_180_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_180_RESET                                                  0x0

// 0xad4 (EFUSE_INTF0_181)
#define EFUSE_INTF0_R_181_LSB                                                  0
#define EFUSE_INTF0_R_181_MSB                                                  31
#define EFUSE_INTF0_R_181_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_181_GET(x)                                               (((x) & EFUSE_INTF0_R_181_MASK) >> EFUSE_INTF0_R_181_LSB)
#define EFUSE_INTF0_R_181_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_181_LSB) & EFUSE_INTF0_R_181_MASK)
#define EFUSE_INTF0_R_181_RESET                                                0x0
#define EFUSE_INTF0_181_ADDRESS                                                (0xad4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_181_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_181_RESET                                                  0x0

// 0xad8 (EFUSE_INTF0_182)
#define EFUSE_INTF0_R_182_LSB                                                  0
#define EFUSE_INTF0_R_182_MSB                                                  31
#define EFUSE_INTF0_R_182_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_182_GET(x)                                               (((x) & EFUSE_INTF0_R_182_MASK) >> EFUSE_INTF0_R_182_LSB)
#define EFUSE_INTF0_R_182_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_182_LSB) & EFUSE_INTF0_R_182_MASK)
#define EFUSE_INTF0_R_182_RESET                                                0x0
#define EFUSE_INTF0_182_ADDRESS                                                (0xad8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_182_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_182_RESET                                                  0x0

// 0xadc (EFUSE_INTF0_183)
#define EFUSE_INTF0_R_183_LSB                                                  0
#define EFUSE_INTF0_R_183_MSB                                                  31
#define EFUSE_INTF0_R_183_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_183_GET(x)                                               (((x) & EFUSE_INTF0_R_183_MASK) >> EFUSE_INTF0_R_183_LSB)
#define EFUSE_INTF0_R_183_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_183_LSB) & EFUSE_INTF0_R_183_MASK)
#define EFUSE_INTF0_R_183_RESET                                                0x0
#define EFUSE_INTF0_183_ADDRESS                                                (0xadc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_183_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_183_RESET                                                  0x0

// 0xae0 (EFUSE_INTF0_184)
#define EFUSE_INTF0_R_184_LSB                                                  0
#define EFUSE_INTF0_R_184_MSB                                                  31
#define EFUSE_INTF0_R_184_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_184_GET(x)                                               (((x) & EFUSE_INTF0_R_184_MASK) >> EFUSE_INTF0_R_184_LSB)
#define EFUSE_INTF0_R_184_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_184_LSB) & EFUSE_INTF0_R_184_MASK)
#define EFUSE_INTF0_R_184_RESET                                                0x0
#define EFUSE_INTF0_184_ADDRESS                                                (0xae0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_184_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_184_RESET                                                  0x0

// 0xae4 (EFUSE_INTF0_185)
#define EFUSE_INTF0_R_185_LSB                                                  0
#define EFUSE_INTF0_R_185_MSB                                                  31
#define EFUSE_INTF0_R_185_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_185_GET(x)                                               (((x) & EFUSE_INTF0_R_185_MASK) >> EFUSE_INTF0_R_185_LSB)
#define EFUSE_INTF0_R_185_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_185_LSB) & EFUSE_INTF0_R_185_MASK)
#define EFUSE_INTF0_R_185_RESET                                                0x0
#define EFUSE_INTF0_185_ADDRESS                                                (0xae4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_185_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_185_RESET                                                  0x0

// 0xae8 (EFUSE_INTF0_186)
#define EFUSE_INTF0_R_186_LSB                                                  0
#define EFUSE_INTF0_R_186_MSB                                                  31
#define EFUSE_INTF0_R_186_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_186_GET(x)                                               (((x) & EFUSE_INTF0_R_186_MASK) >> EFUSE_INTF0_R_186_LSB)
#define EFUSE_INTF0_R_186_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_186_LSB) & EFUSE_INTF0_R_186_MASK)
#define EFUSE_INTF0_R_186_RESET                                                0x0
#define EFUSE_INTF0_186_ADDRESS                                                (0xae8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_186_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_186_RESET                                                  0x0

// 0xaec (EFUSE_INTF0_187)
#define EFUSE_INTF0_R_187_LSB                                                  0
#define EFUSE_INTF0_R_187_MSB                                                  31
#define EFUSE_INTF0_R_187_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_187_GET(x)                                               (((x) & EFUSE_INTF0_R_187_MASK) >> EFUSE_INTF0_R_187_LSB)
#define EFUSE_INTF0_R_187_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_187_LSB) & EFUSE_INTF0_R_187_MASK)
#define EFUSE_INTF0_R_187_RESET                                                0x0
#define EFUSE_INTF0_187_ADDRESS                                                (0xaec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_187_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_187_RESET                                                  0x0

// 0xaf0 (EFUSE_INTF0_188)
#define EFUSE_INTF0_R_188_LSB                                                  0
#define EFUSE_INTF0_R_188_MSB                                                  31
#define EFUSE_INTF0_R_188_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_188_GET(x)                                               (((x) & EFUSE_INTF0_R_188_MASK) >> EFUSE_INTF0_R_188_LSB)
#define EFUSE_INTF0_R_188_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_188_LSB) & EFUSE_INTF0_R_188_MASK)
#define EFUSE_INTF0_R_188_RESET                                                0x0
#define EFUSE_INTF0_188_ADDRESS                                                (0xaf0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_188_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_188_RESET                                                  0x0

// 0xaf4 (EFUSE_INTF0_189)
#define EFUSE_INTF0_R_189_LSB                                                  0
#define EFUSE_INTF0_R_189_MSB                                                  31
#define EFUSE_INTF0_R_189_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_189_GET(x)                                               (((x) & EFUSE_INTF0_R_189_MASK) >> EFUSE_INTF0_R_189_LSB)
#define EFUSE_INTF0_R_189_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_189_LSB) & EFUSE_INTF0_R_189_MASK)
#define EFUSE_INTF0_R_189_RESET                                                0x0
#define EFUSE_INTF0_189_ADDRESS                                                (0xaf4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_189_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_189_RESET                                                  0x0

// 0xaf8 (EFUSE_INTF0_190)
#define EFUSE_INTF0_R_190_LSB                                                  0
#define EFUSE_INTF0_R_190_MSB                                                  31
#define EFUSE_INTF0_R_190_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_190_GET(x)                                               (((x) & EFUSE_INTF0_R_190_MASK) >> EFUSE_INTF0_R_190_LSB)
#define EFUSE_INTF0_R_190_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_190_LSB) & EFUSE_INTF0_R_190_MASK)
#define EFUSE_INTF0_R_190_RESET                                                0x0
#define EFUSE_INTF0_190_ADDRESS                                                (0xaf8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_190_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_190_RESET                                                  0x0

// 0xafc (EFUSE_INTF0_191)
#define EFUSE_INTF0_R_191_LSB                                                  0
#define EFUSE_INTF0_R_191_MSB                                                  31
#define EFUSE_INTF0_R_191_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_191_GET(x)                                               (((x) & EFUSE_INTF0_R_191_MASK) >> EFUSE_INTF0_R_191_LSB)
#define EFUSE_INTF0_R_191_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_191_LSB) & EFUSE_INTF0_R_191_MASK)
#define EFUSE_INTF0_R_191_RESET                                                0x0
#define EFUSE_INTF0_191_ADDRESS                                                (0xafc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_191_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_191_RESET                                                  0x0

// 0xb00 (EFUSE_INTF0_192)
#define EFUSE_INTF0_R_192_LSB                                                  0
#define EFUSE_INTF0_R_192_MSB                                                  31
#define EFUSE_INTF0_R_192_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_192_GET(x)                                               (((x) & EFUSE_INTF0_R_192_MASK) >> EFUSE_INTF0_R_192_LSB)
#define EFUSE_INTF0_R_192_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_192_LSB) & EFUSE_INTF0_R_192_MASK)
#define EFUSE_INTF0_R_192_RESET                                                0x0
#define EFUSE_INTF0_192_ADDRESS                                                (0xb00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_192_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_192_RESET                                                  0x0

// 0xb04 (EFUSE_INTF0_193)
#define EFUSE_INTF0_R_193_LSB                                                  0
#define EFUSE_INTF0_R_193_MSB                                                  31
#define EFUSE_INTF0_R_193_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_193_GET(x)                                               (((x) & EFUSE_INTF0_R_193_MASK) >> EFUSE_INTF0_R_193_LSB)
#define EFUSE_INTF0_R_193_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_193_LSB) & EFUSE_INTF0_R_193_MASK)
#define EFUSE_INTF0_R_193_RESET                                                0x0
#define EFUSE_INTF0_193_ADDRESS                                                (0xb04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_193_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_193_RESET                                                  0x0

// 0xb08 (EFUSE_INTF0_194)
#define EFUSE_INTF0_R_194_LSB                                                  0
#define EFUSE_INTF0_R_194_MSB                                                  31
#define EFUSE_INTF0_R_194_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_194_GET(x)                                               (((x) & EFUSE_INTF0_R_194_MASK) >> EFUSE_INTF0_R_194_LSB)
#define EFUSE_INTF0_R_194_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_194_LSB) & EFUSE_INTF0_R_194_MASK)
#define EFUSE_INTF0_R_194_RESET                                                0x0
#define EFUSE_INTF0_194_ADDRESS                                                (0xb08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_194_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_194_RESET                                                  0x0

// 0xb0c (EFUSE_INTF0_195)
#define EFUSE_INTF0_R_195_LSB                                                  0
#define EFUSE_INTF0_R_195_MSB                                                  31
#define EFUSE_INTF0_R_195_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_195_GET(x)                                               (((x) & EFUSE_INTF0_R_195_MASK) >> EFUSE_INTF0_R_195_LSB)
#define EFUSE_INTF0_R_195_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_195_LSB) & EFUSE_INTF0_R_195_MASK)
#define EFUSE_INTF0_R_195_RESET                                                0x0
#define EFUSE_INTF0_195_ADDRESS                                                (0xb0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_195_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_195_RESET                                                  0x0

// 0xb10 (EFUSE_INTF0_196)
#define EFUSE_INTF0_R_196_LSB                                                  0
#define EFUSE_INTF0_R_196_MSB                                                  31
#define EFUSE_INTF0_R_196_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_196_GET(x)                                               (((x) & EFUSE_INTF0_R_196_MASK) >> EFUSE_INTF0_R_196_LSB)
#define EFUSE_INTF0_R_196_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_196_LSB) & EFUSE_INTF0_R_196_MASK)
#define EFUSE_INTF0_R_196_RESET                                                0x0
#define EFUSE_INTF0_196_ADDRESS                                                (0xb10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_196_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_196_RESET                                                  0x0

// 0xb14 (EFUSE_INTF0_197)
#define EFUSE_INTF0_R_197_LSB                                                  0
#define EFUSE_INTF0_R_197_MSB                                                  31
#define EFUSE_INTF0_R_197_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_197_GET(x)                                               (((x) & EFUSE_INTF0_R_197_MASK) >> EFUSE_INTF0_R_197_LSB)
#define EFUSE_INTF0_R_197_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_197_LSB) & EFUSE_INTF0_R_197_MASK)
#define EFUSE_INTF0_R_197_RESET                                                0x0
#define EFUSE_INTF0_197_ADDRESS                                                (0xb14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_197_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_197_RESET                                                  0x0

// 0xb18 (EFUSE_INTF0_198)
#define EFUSE_INTF0_R_198_LSB                                                  0
#define EFUSE_INTF0_R_198_MSB                                                  31
#define EFUSE_INTF0_R_198_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_198_GET(x)                                               (((x) & EFUSE_INTF0_R_198_MASK) >> EFUSE_INTF0_R_198_LSB)
#define EFUSE_INTF0_R_198_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_198_LSB) & EFUSE_INTF0_R_198_MASK)
#define EFUSE_INTF0_R_198_RESET                                                0x0
#define EFUSE_INTF0_198_ADDRESS                                                (0xb18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_198_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_198_RESET                                                  0x0

// 0xb1c (EFUSE_INTF0_199)
#define EFUSE_INTF0_R_199_LSB                                                  0
#define EFUSE_INTF0_R_199_MSB                                                  31
#define EFUSE_INTF0_R_199_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_199_GET(x)                                               (((x) & EFUSE_INTF0_R_199_MASK) >> EFUSE_INTF0_R_199_LSB)
#define EFUSE_INTF0_R_199_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_199_LSB) & EFUSE_INTF0_R_199_MASK)
#define EFUSE_INTF0_R_199_RESET                                                0x0
#define EFUSE_INTF0_199_ADDRESS                                                (0xb1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_199_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_199_RESET                                                  0x0

// 0xb20 (EFUSE_INTF0_200)
#define EFUSE_INTF0_R_200_LSB                                                  0
#define EFUSE_INTF0_R_200_MSB                                                  31
#define EFUSE_INTF0_R_200_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_200_GET(x)                                               (((x) & EFUSE_INTF0_R_200_MASK) >> EFUSE_INTF0_R_200_LSB)
#define EFUSE_INTF0_R_200_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_200_LSB) & EFUSE_INTF0_R_200_MASK)
#define EFUSE_INTF0_R_200_RESET                                                0x0
#define EFUSE_INTF0_200_ADDRESS                                                (0xb20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_200_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_200_RESET                                                  0x0

// 0xb24 (EFUSE_INTF0_201)
#define EFUSE_INTF0_R_201_LSB                                                  0
#define EFUSE_INTF0_R_201_MSB                                                  31
#define EFUSE_INTF0_R_201_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_201_GET(x)                                               (((x) & EFUSE_INTF0_R_201_MASK) >> EFUSE_INTF0_R_201_LSB)
#define EFUSE_INTF0_R_201_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_201_LSB) & EFUSE_INTF0_R_201_MASK)
#define EFUSE_INTF0_R_201_RESET                                                0x0
#define EFUSE_INTF0_201_ADDRESS                                                (0xb24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_201_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_201_RESET                                                  0x0

// 0xb28 (EFUSE_INTF0_202)
#define EFUSE_INTF0_R_202_LSB                                                  0
#define EFUSE_INTF0_R_202_MSB                                                  31
#define EFUSE_INTF0_R_202_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_202_GET(x)                                               (((x) & EFUSE_INTF0_R_202_MASK) >> EFUSE_INTF0_R_202_LSB)
#define EFUSE_INTF0_R_202_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_202_LSB) & EFUSE_INTF0_R_202_MASK)
#define EFUSE_INTF0_R_202_RESET                                                0x0
#define EFUSE_INTF0_202_ADDRESS                                                (0xb28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_202_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_202_RESET                                                  0x0

// 0xb2c (EFUSE_INTF0_203)
#define EFUSE_INTF0_R_203_LSB                                                  0
#define EFUSE_INTF0_R_203_MSB                                                  31
#define EFUSE_INTF0_R_203_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_203_GET(x)                                               (((x) & EFUSE_INTF0_R_203_MASK) >> EFUSE_INTF0_R_203_LSB)
#define EFUSE_INTF0_R_203_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_203_LSB) & EFUSE_INTF0_R_203_MASK)
#define EFUSE_INTF0_R_203_RESET                                                0x0
#define EFUSE_INTF0_203_ADDRESS                                                (0xb2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_203_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_203_RESET                                                  0x0

// 0xb30 (EFUSE_INTF0_204)
#define EFUSE_INTF0_R_204_LSB                                                  0
#define EFUSE_INTF0_R_204_MSB                                                  31
#define EFUSE_INTF0_R_204_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_204_GET(x)                                               (((x) & EFUSE_INTF0_R_204_MASK) >> EFUSE_INTF0_R_204_LSB)
#define EFUSE_INTF0_R_204_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_204_LSB) & EFUSE_INTF0_R_204_MASK)
#define EFUSE_INTF0_R_204_RESET                                                0x0
#define EFUSE_INTF0_204_ADDRESS                                                (0xb30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_204_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_204_RESET                                                  0x0

// 0xb34 (EFUSE_INTF0_205)
#define EFUSE_INTF0_R_205_LSB                                                  0
#define EFUSE_INTF0_R_205_MSB                                                  31
#define EFUSE_INTF0_R_205_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_205_GET(x)                                               (((x) & EFUSE_INTF0_R_205_MASK) >> EFUSE_INTF0_R_205_LSB)
#define EFUSE_INTF0_R_205_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_205_LSB) & EFUSE_INTF0_R_205_MASK)
#define EFUSE_INTF0_R_205_RESET                                                0x0
#define EFUSE_INTF0_205_ADDRESS                                                (0xb34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_205_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_205_RESET                                                  0x0

// 0xb38 (EFUSE_INTF0_206)
#define EFUSE_INTF0_R_206_LSB                                                  0
#define EFUSE_INTF0_R_206_MSB                                                  31
#define EFUSE_INTF0_R_206_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_206_GET(x)                                               (((x) & EFUSE_INTF0_R_206_MASK) >> EFUSE_INTF0_R_206_LSB)
#define EFUSE_INTF0_R_206_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_206_LSB) & EFUSE_INTF0_R_206_MASK)
#define EFUSE_INTF0_R_206_RESET                                                0x0
#define EFUSE_INTF0_206_ADDRESS                                                (0xb38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_206_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_206_RESET                                                  0x0

// 0xb3c (EFUSE_INTF0_207)
#define EFUSE_INTF0_R_207_LSB                                                  0
#define EFUSE_INTF0_R_207_MSB                                                  31
#define EFUSE_INTF0_R_207_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_207_GET(x)                                               (((x) & EFUSE_INTF0_R_207_MASK) >> EFUSE_INTF0_R_207_LSB)
#define EFUSE_INTF0_R_207_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_207_LSB) & EFUSE_INTF0_R_207_MASK)
#define EFUSE_INTF0_R_207_RESET                                                0x0
#define EFUSE_INTF0_207_ADDRESS                                                (0xb3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_207_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_207_RESET                                                  0x0

// 0xb40 (EFUSE_INTF0_208)
#define EFUSE_INTF0_R_208_LSB                                                  0
#define EFUSE_INTF0_R_208_MSB                                                  31
#define EFUSE_INTF0_R_208_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_208_GET(x)                                               (((x) & EFUSE_INTF0_R_208_MASK) >> EFUSE_INTF0_R_208_LSB)
#define EFUSE_INTF0_R_208_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_208_LSB) & EFUSE_INTF0_R_208_MASK)
#define EFUSE_INTF0_R_208_RESET                                                0x0
#define EFUSE_INTF0_208_ADDRESS                                                (0xb40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_208_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_208_RESET                                                  0x0

// 0xb44 (EFUSE_INTF0_209)
#define EFUSE_INTF0_R_209_LSB                                                  0
#define EFUSE_INTF0_R_209_MSB                                                  31
#define EFUSE_INTF0_R_209_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_209_GET(x)                                               (((x) & EFUSE_INTF0_R_209_MASK) >> EFUSE_INTF0_R_209_LSB)
#define EFUSE_INTF0_R_209_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_209_LSB) & EFUSE_INTF0_R_209_MASK)
#define EFUSE_INTF0_R_209_RESET                                                0x0
#define EFUSE_INTF0_209_ADDRESS                                                (0xb44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_209_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_209_RESET                                                  0x0

// 0xb48 (EFUSE_INTF0_210)
#define EFUSE_INTF0_R_210_LSB                                                  0
#define EFUSE_INTF0_R_210_MSB                                                  31
#define EFUSE_INTF0_R_210_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_210_GET(x)                                               (((x) & EFUSE_INTF0_R_210_MASK) >> EFUSE_INTF0_R_210_LSB)
#define EFUSE_INTF0_R_210_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_210_LSB) & EFUSE_INTF0_R_210_MASK)
#define EFUSE_INTF0_R_210_RESET                                                0x0
#define EFUSE_INTF0_210_ADDRESS                                                (0xb48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_210_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_210_RESET                                                  0x0

// 0xb4c (EFUSE_INTF0_211)
#define EFUSE_INTF0_R_211_LSB                                                  0
#define EFUSE_INTF0_R_211_MSB                                                  31
#define EFUSE_INTF0_R_211_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_211_GET(x)                                               (((x) & EFUSE_INTF0_R_211_MASK) >> EFUSE_INTF0_R_211_LSB)
#define EFUSE_INTF0_R_211_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_211_LSB) & EFUSE_INTF0_R_211_MASK)
#define EFUSE_INTF0_R_211_RESET                                                0x0
#define EFUSE_INTF0_211_ADDRESS                                                (0xb4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_211_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_211_RESET                                                  0x0

// 0xb50 (EFUSE_INTF0_212)
#define EFUSE_INTF0_R_212_LSB                                                  0
#define EFUSE_INTF0_R_212_MSB                                                  31
#define EFUSE_INTF0_R_212_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_212_GET(x)                                               (((x) & EFUSE_INTF0_R_212_MASK) >> EFUSE_INTF0_R_212_LSB)
#define EFUSE_INTF0_R_212_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_212_LSB) & EFUSE_INTF0_R_212_MASK)
#define EFUSE_INTF0_R_212_RESET                                                0x0
#define EFUSE_INTF0_212_ADDRESS                                                (0xb50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_212_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_212_RESET                                                  0x0

// 0xb54 (EFUSE_INTF0_213)
#define EFUSE_INTF0_R_213_LSB                                                  0
#define EFUSE_INTF0_R_213_MSB                                                  31
#define EFUSE_INTF0_R_213_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_213_GET(x)                                               (((x) & EFUSE_INTF0_R_213_MASK) >> EFUSE_INTF0_R_213_LSB)
#define EFUSE_INTF0_R_213_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_213_LSB) & EFUSE_INTF0_R_213_MASK)
#define EFUSE_INTF0_R_213_RESET                                                0x0
#define EFUSE_INTF0_213_ADDRESS                                                (0xb54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_213_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_213_RESET                                                  0x0

// 0xb58 (EFUSE_INTF0_214)
#define EFUSE_INTF0_R_214_LSB                                                  0
#define EFUSE_INTF0_R_214_MSB                                                  31
#define EFUSE_INTF0_R_214_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_214_GET(x)                                               (((x) & EFUSE_INTF0_R_214_MASK) >> EFUSE_INTF0_R_214_LSB)
#define EFUSE_INTF0_R_214_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_214_LSB) & EFUSE_INTF0_R_214_MASK)
#define EFUSE_INTF0_R_214_RESET                                                0x0
#define EFUSE_INTF0_214_ADDRESS                                                (0xb58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_214_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_214_RESET                                                  0x0

// 0xb5c (EFUSE_INTF0_215)
#define EFUSE_INTF0_R_215_LSB                                                  0
#define EFUSE_INTF0_R_215_MSB                                                  31
#define EFUSE_INTF0_R_215_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_215_GET(x)                                               (((x) & EFUSE_INTF0_R_215_MASK) >> EFUSE_INTF0_R_215_LSB)
#define EFUSE_INTF0_R_215_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_215_LSB) & EFUSE_INTF0_R_215_MASK)
#define EFUSE_INTF0_R_215_RESET                                                0x0
#define EFUSE_INTF0_215_ADDRESS                                                (0xb5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_215_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_215_RESET                                                  0x0

// 0xb60 (EFUSE_INTF0_216)
#define EFUSE_INTF0_R_216_LSB                                                  0
#define EFUSE_INTF0_R_216_MSB                                                  31
#define EFUSE_INTF0_R_216_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_216_GET(x)                                               (((x) & EFUSE_INTF0_R_216_MASK) >> EFUSE_INTF0_R_216_LSB)
#define EFUSE_INTF0_R_216_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_216_LSB) & EFUSE_INTF0_R_216_MASK)
#define EFUSE_INTF0_R_216_RESET                                                0x0
#define EFUSE_INTF0_216_ADDRESS                                                (0xb60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_216_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_216_RESET                                                  0x0

// 0xb64 (EFUSE_INTF0_217)
#define EFUSE_INTF0_R_217_LSB                                                  0
#define EFUSE_INTF0_R_217_MSB                                                  31
#define EFUSE_INTF0_R_217_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_217_GET(x)                                               (((x) & EFUSE_INTF0_R_217_MASK) >> EFUSE_INTF0_R_217_LSB)
#define EFUSE_INTF0_R_217_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_217_LSB) & EFUSE_INTF0_R_217_MASK)
#define EFUSE_INTF0_R_217_RESET                                                0x0
#define EFUSE_INTF0_217_ADDRESS                                                (0xb64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_217_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_217_RESET                                                  0x0

// 0xb68 (EFUSE_INTF0_218)
#define EFUSE_INTF0_R_218_LSB                                                  0
#define EFUSE_INTF0_R_218_MSB                                                  31
#define EFUSE_INTF0_R_218_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_218_GET(x)                                               (((x) & EFUSE_INTF0_R_218_MASK) >> EFUSE_INTF0_R_218_LSB)
#define EFUSE_INTF0_R_218_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_218_LSB) & EFUSE_INTF0_R_218_MASK)
#define EFUSE_INTF0_R_218_RESET                                                0x0
#define EFUSE_INTF0_218_ADDRESS                                                (0xb68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_218_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_218_RESET                                                  0x0

// 0xb6c (EFUSE_INTF0_219)
#define EFUSE_INTF0_R_219_LSB                                                  0
#define EFUSE_INTF0_R_219_MSB                                                  31
#define EFUSE_INTF0_R_219_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_219_GET(x)                                               (((x) & EFUSE_INTF0_R_219_MASK) >> EFUSE_INTF0_R_219_LSB)
#define EFUSE_INTF0_R_219_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_219_LSB) & EFUSE_INTF0_R_219_MASK)
#define EFUSE_INTF0_R_219_RESET                                                0x0
#define EFUSE_INTF0_219_ADDRESS                                                (0xb6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_219_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_219_RESET                                                  0x0

// 0xb70 (EFUSE_INTF0_220)
#define EFUSE_INTF0_R_220_LSB                                                  0
#define EFUSE_INTF0_R_220_MSB                                                  31
#define EFUSE_INTF0_R_220_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_220_GET(x)                                               (((x) & EFUSE_INTF0_R_220_MASK) >> EFUSE_INTF0_R_220_LSB)
#define EFUSE_INTF0_R_220_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_220_LSB) & EFUSE_INTF0_R_220_MASK)
#define EFUSE_INTF0_R_220_RESET                                                0x0
#define EFUSE_INTF0_220_ADDRESS                                                (0xb70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_220_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_220_RESET                                                  0x0

// 0xb74 (EFUSE_INTF0_221)
#define EFUSE_INTF0_R_221_LSB                                                  0
#define EFUSE_INTF0_R_221_MSB                                                  31
#define EFUSE_INTF0_R_221_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_221_GET(x)                                               (((x) & EFUSE_INTF0_R_221_MASK) >> EFUSE_INTF0_R_221_LSB)
#define EFUSE_INTF0_R_221_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_221_LSB) & EFUSE_INTF0_R_221_MASK)
#define EFUSE_INTF0_R_221_RESET                                                0x0
#define EFUSE_INTF0_221_ADDRESS                                                (0xb74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_221_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_221_RESET                                                  0x0

// 0xb78 (EFUSE_INTF0_222)
#define EFUSE_INTF0_R_222_LSB                                                  0
#define EFUSE_INTF0_R_222_MSB                                                  31
#define EFUSE_INTF0_R_222_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_222_GET(x)                                               (((x) & EFUSE_INTF0_R_222_MASK) >> EFUSE_INTF0_R_222_LSB)
#define EFUSE_INTF0_R_222_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_222_LSB) & EFUSE_INTF0_R_222_MASK)
#define EFUSE_INTF0_R_222_RESET                                                0x0
#define EFUSE_INTF0_222_ADDRESS                                                (0xb78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_222_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_222_RESET                                                  0x0

// 0xb7c (EFUSE_INTF0_223)
#define EFUSE_INTF0_R_223_LSB                                                  0
#define EFUSE_INTF0_R_223_MSB                                                  31
#define EFUSE_INTF0_R_223_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_223_GET(x)                                               (((x) & EFUSE_INTF0_R_223_MASK) >> EFUSE_INTF0_R_223_LSB)
#define EFUSE_INTF0_R_223_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_223_LSB) & EFUSE_INTF0_R_223_MASK)
#define EFUSE_INTF0_R_223_RESET                                                0x0
#define EFUSE_INTF0_223_ADDRESS                                                (0xb7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_223_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_223_RESET                                                  0x0

// 0xb80 (EFUSE_INTF0_224)
#define EFUSE_INTF0_R_224_LSB                                                  0
#define EFUSE_INTF0_R_224_MSB                                                  31
#define EFUSE_INTF0_R_224_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_224_GET(x)                                               (((x) & EFUSE_INTF0_R_224_MASK) >> EFUSE_INTF0_R_224_LSB)
#define EFUSE_INTF0_R_224_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_224_LSB) & EFUSE_INTF0_R_224_MASK)
#define EFUSE_INTF0_R_224_RESET                                                0x0
#define EFUSE_INTF0_224_ADDRESS                                                (0xb80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_224_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_224_RESET                                                  0x0

// 0xb84 (EFUSE_INTF0_225)
#define EFUSE_INTF0_R_225_LSB                                                  0
#define EFUSE_INTF0_R_225_MSB                                                  31
#define EFUSE_INTF0_R_225_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_225_GET(x)                                               (((x) & EFUSE_INTF0_R_225_MASK) >> EFUSE_INTF0_R_225_LSB)
#define EFUSE_INTF0_R_225_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_225_LSB) & EFUSE_INTF0_R_225_MASK)
#define EFUSE_INTF0_R_225_RESET                                                0x0
#define EFUSE_INTF0_225_ADDRESS                                                (0xb84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_225_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_225_RESET                                                  0x0

// 0xb88 (EFUSE_INTF0_226)
#define EFUSE_INTF0_R_226_LSB                                                  0
#define EFUSE_INTF0_R_226_MSB                                                  31
#define EFUSE_INTF0_R_226_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_226_GET(x)                                               (((x) & EFUSE_INTF0_R_226_MASK) >> EFUSE_INTF0_R_226_LSB)
#define EFUSE_INTF0_R_226_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_226_LSB) & EFUSE_INTF0_R_226_MASK)
#define EFUSE_INTF0_R_226_RESET                                                0x0
#define EFUSE_INTF0_226_ADDRESS                                                (0xb88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_226_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_226_RESET                                                  0x0

// 0xb8c (EFUSE_INTF0_227)
#define EFUSE_INTF0_R_227_LSB                                                  0
#define EFUSE_INTF0_R_227_MSB                                                  31
#define EFUSE_INTF0_R_227_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_227_GET(x)                                               (((x) & EFUSE_INTF0_R_227_MASK) >> EFUSE_INTF0_R_227_LSB)
#define EFUSE_INTF0_R_227_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_227_LSB) & EFUSE_INTF0_R_227_MASK)
#define EFUSE_INTF0_R_227_RESET                                                0x0
#define EFUSE_INTF0_227_ADDRESS                                                (0xb8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_227_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_227_RESET                                                  0x0

// 0xb90 (EFUSE_INTF0_228)
#define EFUSE_INTF0_R_228_LSB                                                  0
#define EFUSE_INTF0_R_228_MSB                                                  31
#define EFUSE_INTF0_R_228_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_228_GET(x)                                               (((x) & EFUSE_INTF0_R_228_MASK) >> EFUSE_INTF0_R_228_LSB)
#define EFUSE_INTF0_R_228_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_228_LSB) & EFUSE_INTF0_R_228_MASK)
#define EFUSE_INTF0_R_228_RESET                                                0x0
#define EFUSE_INTF0_228_ADDRESS                                                (0xb90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_228_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_228_RESET                                                  0x0

// 0xb94 (EFUSE_INTF0_229)
#define EFUSE_INTF0_R_229_LSB                                                  0
#define EFUSE_INTF0_R_229_MSB                                                  31
#define EFUSE_INTF0_R_229_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_229_GET(x)                                               (((x) & EFUSE_INTF0_R_229_MASK) >> EFUSE_INTF0_R_229_LSB)
#define EFUSE_INTF0_R_229_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_229_LSB) & EFUSE_INTF0_R_229_MASK)
#define EFUSE_INTF0_R_229_RESET                                                0x0
#define EFUSE_INTF0_229_ADDRESS                                                (0xb94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_229_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_229_RESET                                                  0x0

// 0xb98 (EFUSE_INTF0_230)
#define EFUSE_INTF0_R_230_LSB                                                  0
#define EFUSE_INTF0_R_230_MSB                                                  31
#define EFUSE_INTF0_R_230_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_230_GET(x)                                               (((x) & EFUSE_INTF0_R_230_MASK) >> EFUSE_INTF0_R_230_LSB)
#define EFUSE_INTF0_R_230_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_230_LSB) & EFUSE_INTF0_R_230_MASK)
#define EFUSE_INTF0_R_230_RESET                                                0x0
#define EFUSE_INTF0_230_ADDRESS                                                (0xb98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_230_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_230_RESET                                                  0x0

// 0xb9c (EFUSE_INTF0_231)
#define EFUSE_INTF0_R_231_LSB                                                  0
#define EFUSE_INTF0_R_231_MSB                                                  31
#define EFUSE_INTF0_R_231_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_231_GET(x)                                               (((x) & EFUSE_INTF0_R_231_MASK) >> EFUSE_INTF0_R_231_LSB)
#define EFUSE_INTF0_R_231_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_231_LSB) & EFUSE_INTF0_R_231_MASK)
#define EFUSE_INTF0_R_231_RESET                                                0x0
#define EFUSE_INTF0_231_ADDRESS                                                (0xb9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_231_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_231_RESET                                                  0x0

// 0xba0 (EFUSE_INTF0_232)
#define EFUSE_INTF0_R_232_LSB                                                  0
#define EFUSE_INTF0_R_232_MSB                                                  31
#define EFUSE_INTF0_R_232_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_232_GET(x)                                               (((x) & EFUSE_INTF0_R_232_MASK) >> EFUSE_INTF0_R_232_LSB)
#define EFUSE_INTF0_R_232_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_232_LSB) & EFUSE_INTF0_R_232_MASK)
#define EFUSE_INTF0_R_232_RESET                                                0x0
#define EFUSE_INTF0_232_ADDRESS                                                (0xba0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_232_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_232_RESET                                                  0x0

// 0xba4 (EFUSE_INTF0_233)
#define EFUSE_INTF0_R_233_LSB                                                  0
#define EFUSE_INTF0_R_233_MSB                                                  31
#define EFUSE_INTF0_R_233_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_233_GET(x)                                               (((x) & EFUSE_INTF0_R_233_MASK) >> EFUSE_INTF0_R_233_LSB)
#define EFUSE_INTF0_R_233_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_233_LSB) & EFUSE_INTF0_R_233_MASK)
#define EFUSE_INTF0_R_233_RESET                                                0x0
#define EFUSE_INTF0_233_ADDRESS                                                (0xba4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_233_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_233_RESET                                                  0x0

// 0xba8 (EFUSE_INTF0_234)
#define EFUSE_INTF0_R_234_LSB                                                  0
#define EFUSE_INTF0_R_234_MSB                                                  31
#define EFUSE_INTF0_R_234_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_234_GET(x)                                               (((x) & EFUSE_INTF0_R_234_MASK) >> EFUSE_INTF0_R_234_LSB)
#define EFUSE_INTF0_R_234_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_234_LSB) & EFUSE_INTF0_R_234_MASK)
#define EFUSE_INTF0_R_234_RESET                                                0x0
#define EFUSE_INTF0_234_ADDRESS                                                (0xba8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_234_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_234_RESET                                                  0x0

// 0xbac (EFUSE_INTF0_235)
#define EFUSE_INTF0_R_235_LSB                                                  0
#define EFUSE_INTF0_R_235_MSB                                                  31
#define EFUSE_INTF0_R_235_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_235_GET(x)                                               (((x) & EFUSE_INTF0_R_235_MASK) >> EFUSE_INTF0_R_235_LSB)
#define EFUSE_INTF0_R_235_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_235_LSB) & EFUSE_INTF0_R_235_MASK)
#define EFUSE_INTF0_R_235_RESET                                                0x0
#define EFUSE_INTF0_235_ADDRESS                                                (0xbac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_235_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_235_RESET                                                  0x0

// 0xbb0 (EFUSE_INTF0_236)
#define EFUSE_INTF0_R_236_LSB                                                  0
#define EFUSE_INTF0_R_236_MSB                                                  31
#define EFUSE_INTF0_R_236_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_236_GET(x)                                               (((x) & EFUSE_INTF0_R_236_MASK) >> EFUSE_INTF0_R_236_LSB)
#define EFUSE_INTF0_R_236_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_236_LSB) & EFUSE_INTF0_R_236_MASK)
#define EFUSE_INTF0_R_236_RESET                                                0x0
#define EFUSE_INTF0_236_ADDRESS                                                (0xbb0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_236_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_236_RESET                                                  0x0

// 0xbb4 (EFUSE_INTF0_237)
#define EFUSE_INTF0_R_237_LSB                                                  0
#define EFUSE_INTF0_R_237_MSB                                                  31
#define EFUSE_INTF0_R_237_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_237_GET(x)                                               (((x) & EFUSE_INTF0_R_237_MASK) >> EFUSE_INTF0_R_237_LSB)
#define EFUSE_INTF0_R_237_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_237_LSB) & EFUSE_INTF0_R_237_MASK)
#define EFUSE_INTF0_R_237_RESET                                                0x0
#define EFUSE_INTF0_237_ADDRESS                                                (0xbb4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_237_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_237_RESET                                                  0x0

// 0xbb8 (EFUSE_INTF0_238)
#define EFUSE_INTF0_R_238_LSB                                                  0
#define EFUSE_INTF0_R_238_MSB                                                  31
#define EFUSE_INTF0_R_238_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_238_GET(x)                                               (((x) & EFUSE_INTF0_R_238_MASK) >> EFUSE_INTF0_R_238_LSB)
#define EFUSE_INTF0_R_238_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_238_LSB) & EFUSE_INTF0_R_238_MASK)
#define EFUSE_INTF0_R_238_RESET                                                0x0
#define EFUSE_INTF0_238_ADDRESS                                                (0xbb8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_238_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_238_RESET                                                  0x0

// 0xbbc (EFUSE_INTF0_239)
#define EFUSE_INTF0_R_239_LSB                                                  0
#define EFUSE_INTF0_R_239_MSB                                                  31
#define EFUSE_INTF0_R_239_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_239_GET(x)                                               (((x) & EFUSE_INTF0_R_239_MASK) >> EFUSE_INTF0_R_239_LSB)
#define EFUSE_INTF0_R_239_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_239_LSB) & EFUSE_INTF0_R_239_MASK)
#define EFUSE_INTF0_R_239_RESET                                                0x0
#define EFUSE_INTF0_239_ADDRESS                                                (0xbbc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_239_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_239_RESET                                                  0x0

// 0xbc0 (EFUSE_INTF0_240)
#define EFUSE_INTF0_R_240_LSB                                                  0
#define EFUSE_INTF0_R_240_MSB                                                  31
#define EFUSE_INTF0_R_240_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_240_GET(x)                                               (((x) & EFUSE_INTF0_R_240_MASK) >> EFUSE_INTF0_R_240_LSB)
#define EFUSE_INTF0_R_240_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_240_LSB) & EFUSE_INTF0_R_240_MASK)
#define EFUSE_INTF0_R_240_RESET                                                0x0
#define EFUSE_INTF0_240_ADDRESS                                                (0xbc0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_240_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_240_RESET                                                  0x0

// 0xbc4 (EFUSE_INTF0_241)
#define EFUSE_INTF0_R_241_LSB                                                  0
#define EFUSE_INTF0_R_241_MSB                                                  31
#define EFUSE_INTF0_R_241_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_241_GET(x)                                               (((x) & EFUSE_INTF0_R_241_MASK) >> EFUSE_INTF0_R_241_LSB)
#define EFUSE_INTF0_R_241_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_241_LSB) & EFUSE_INTF0_R_241_MASK)
#define EFUSE_INTF0_R_241_RESET                                                0x0
#define EFUSE_INTF0_241_ADDRESS                                                (0xbc4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_241_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_241_RESET                                                  0x0

// 0xbc8 (EFUSE_INTF0_242)
#define EFUSE_INTF0_R_242_LSB                                                  0
#define EFUSE_INTF0_R_242_MSB                                                  31
#define EFUSE_INTF0_R_242_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_242_GET(x)                                               (((x) & EFUSE_INTF0_R_242_MASK) >> EFUSE_INTF0_R_242_LSB)
#define EFUSE_INTF0_R_242_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_242_LSB) & EFUSE_INTF0_R_242_MASK)
#define EFUSE_INTF0_R_242_RESET                                                0x0
#define EFUSE_INTF0_242_ADDRESS                                                (0xbc8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_242_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_242_RESET                                                  0x0

// 0xbcc (EFUSE_INTF0_243)
#define EFUSE_INTF0_R_243_LSB                                                  0
#define EFUSE_INTF0_R_243_MSB                                                  31
#define EFUSE_INTF0_R_243_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_243_GET(x)                                               (((x) & EFUSE_INTF0_R_243_MASK) >> EFUSE_INTF0_R_243_LSB)
#define EFUSE_INTF0_R_243_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_243_LSB) & EFUSE_INTF0_R_243_MASK)
#define EFUSE_INTF0_R_243_RESET                                                0x0
#define EFUSE_INTF0_243_ADDRESS                                                (0xbcc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_243_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_243_RESET                                                  0x0

// 0xbd0 (EFUSE_INTF0_244)
#define EFUSE_INTF0_R_244_LSB                                                  0
#define EFUSE_INTF0_R_244_MSB                                                  31
#define EFUSE_INTF0_R_244_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_244_GET(x)                                               (((x) & EFUSE_INTF0_R_244_MASK) >> EFUSE_INTF0_R_244_LSB)
#define EFUSE_INTF0_R_244_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_244_LSB) & EFUSE_INTF0_R_244_MASK)
#define EFUSE_INTF0_R_244_RESET                                                0x0
#define EFUSE_INTF0_244_ADDRESS                                                (0xbd0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_244_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_244_RESET                                                  0x0

// 0xbd4 (EFUSE_INTF0_245)
#define EFUSE_INTF0_R_245_LSB                                                  0
#define EFUSE_INTF0_R_245_MSB                                                  31
#define EFUSE_INTF0_R_245_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_245_GET(x)                                               (((x) & EFUSE_INTF0_R_245_MASK) >> EFUSE_INTF0_R_245_LSB)
#define EFUSE_INTF0_R_245_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_245_LSB) & EFUSE_INTF0_R_245_MASK)
#define EFUSE_INTF0_R_245_RESET                                                0x0
#define EFUSE_INTF0_245_ADDRESS                                                (0xbd4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_245_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_245_RESET                                                  0x0

// 0xbd8 (EFUSE_INTF0_246)
#define EFUSE_INTF0_R_246_LSB                                                  0
#define EFUSE_INTF0_R_246_MSB                                                  31
#define EFUSE_INTF0_R_246_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_246_GET(x)                                               (((x) & EFUSE_INTF0_R_246_MASK) >> EFUSE_INTF0_R_246_LSB)
#define EFUSE_INTF0_R_246_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_246_LSB) & EFUSE_INTF0_R_246_MASK)
#define EFUSE_INTF0_R_246_RESET                                                0x0
#define EFUSE_INTF0_246_ADDRESS                                                (0xbd8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_246_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_246_RESET                                                  0x0

// 0xbdc (EFUSE_INTF0_247)
#define EFUSE_INTF0_R_247_LSB                                                  0
#define EFUSE_INTF0_R_247_MSB                                                  31
#define EFUSE_INTF0_R_247_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_247_GET(x)                                               (((x) & EFUSE_INTF0_R_247_MASK) >> EFUSE_INTF0_R_247_LSB)
#define EFUSE_INTF0_R_247_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_247_LSB) & EFUSE_INTF0_R_247_MASK)
#define EFUSE_INTF0_R_247_RESET                                                0x0
#define EFUSE_INTF0_247_ADDRESS                                                (0xbdc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_247_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_247_RESET                                                  0x0

// 0xbe0 (EFUSE_INTF0_248)
#define EFUSE_INTF0_R_248_LSB                                                  0
#define EFUSE_INTF0_R_248_MSB                                                  31
#define EFUSE_INTF0_R_248_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_248_GET(x)                                               (((x) & EFUSE_INTF0_R_248_MASK) >> EFUSE_INTF0_R_248_LSB)
#define EFUSE_INTF0_R_248_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_248_LSB) & EFUSE_INTF0_R_248_MASK)
#define EFUSE_INTF0_R_248_RESET                                                0x0
#define EFUSE_INTF0_248_ADDRESS                                                (0xbe0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_248_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_248_RESET                                                  0x0

// 0xbe4 (EFUSE_INTF0_249)
#define EFUSE_INTF0_R_249_LSB                                                  0
#define EFUSE_INTF0_R_249_MSB                                                  31
#define EFUSE_INTF0_R_249_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_249_GET(x)                                               (((x) & EFUSE_INTF0_R_249_MASK) >> EFUSE_INTF0_R_249_LSB)
#define EFUSE_INTF0_R_249_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_249_LSB) & EFUSE_INTF0_R_249_MASK)
#define EFUSE_INTF0_R_249_RESET                                                0x0
#define EFUSE_INTF0_249_ADDRESS                                                (0xbe4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_249_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_249_RESET                                                  0x0

// 0xbe8 (EFUSE_INTF0_250)
#define EFUSE_INTF0_R_250_LSB                                                  0
#define EFUSE_INTF0_R_250_MSB                                                  31
#define EFUSE_INTF0_R_250_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_250_GET(x)                                               (((x) & EFUSE_INTF0_R_250_MASK) >> EFUSE_INTF0_R_250_LSB)
#define EFUSE_INTF0_R_250_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_250_LSB) & EFUSE_INTF0_R_250_MASK)
#define EFUSE_INTF0_R_250_RESET                                                0x0
#define EFUSE_INTF0_250_ADDRESS                                                (0xbe8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_250_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_250_RESET                                                  0x0

// 0xbec (EFUSE_INTF0_251)
#define EFUSE_INTF0_R_251_LSB                                                  0
#define EFUSE_INTF0_R_251_MSB                                                  31
#define EFUSE_INTF0_R_251_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_251_GET(x)                                               (((x) & EFUSE_INTF0_R_251_MASK) >> EFUSE_INTF0_R_251_LSB)
#define EFUSE_INTF0_R_251_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_251_LSB) & EFUSE_INTF0_R_251_MASK)
#define EFUSE_INTF0_R_251_RESET                                                0x0
#define EFUSE_INTF0_251_ADDRESS                                                (0xbec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_251_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_251_RESET                                                  0x0

// 0xbf0 (EFUSE_INTF0_252)
#define EFUSE_INTF0_R_252_LSB                                                  0
#define EFUSE_INTF0_R_252_MSB                                                  31
#define EFUSE_INTF0_R_252_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_252_GET(x)                                               (((x) & EFUSE_INTF0_R_252_MASK) >> EFUSE_INTF0_R_252_LSB)
#define EFUSE_INTF0_R_252_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_252_LSB) & EFUSE_INTF0_R_252_MASK)
#define EFUSE_INTF0_R_252_RESET                                                0x0
#define EFUSE_INTF0_252_ADDRESS                                                (0xbf0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_252_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_252_RESET                                                  0x0

// 0xbf4 (EFUSE_INTF0_253)
#define EFUSE_INTF0_R_253_LSB                                                  0
#define EFUSE_INTF0_R_253_MSB                                                  31
#define EFUSE_INTF0_R_253_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_253_GET(x)                                               (((x) & EFUSE_INTF0_R_253_MASK) >> EFUSE_INTF0_R_253_LSB)
#define EFUSE_INTF0_R_253_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_253_LSB) & EFUSE_INTF0_R_253_MASK)
#define EFUSE_INTF0_R_253_RESET                                                0x0
#define EFUSE_INTF0_253_ADDRESS                                                (0xbf4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_253_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_253_RESET                                                  0x0

// 0xbf8 (EFUSE_INTF0_254)
#define EFUSE_INTF0_R_254_LSB                                                  0
#define EFUSE_INTF0_R_254_MSB                                                  31
#define EFUSE_INTF0_R_254_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_254_GET(x)                                               (((x) & EFUSE_INTF0_R_254_MASK) >> EFUSE_INTF0_R_254_LSB)
#define EFUSE_INTF0_R_254_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_254_LSB) & EFUSE_INTF0_R_254_MASK)
#define EFUSE_INTF0_R_254_RESET                                                0x0
#define EFUSE_INTF0_254_ADDRESS                                                (0xbf8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_254_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_254_RESET                                                  0x0

// 0xbfc (EFUSE_INTF0_255)
#define EFUSE_INTF0_R_255_LSB                                                  0
#define EFUSE_INTF0_R_255_MSB                                                  31
#define EFUSE_INTF0_R_255_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_255_GET(x)                                               (((x) & EFUSE_INTF0_R_255_MASK) >> EFUSE_INTF0_R_255_LSB)
#define EFUSE_INTF0_R_255_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_255_LSB) & EFUSE_INTF0_R_255_MASK)
#define EFUSE_INTF0_R_255_RESET                                                0x0
#define EFUSE_INTF0_255_ADDRESS                                                (0xbfc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_255_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_255_RESET                                                  0x0

// 0xc00 (EFUSE_INTF0_256)
#define EFUSE_INTF0_R_256_LSB                                                  0
#define EFUSE_INTF0_R_256_MSB                                                  31
#define EFUSE_INTF0_R_256_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_256_GET(x)                                               (((x) & EFUSE_INTF0_R_256_MASK) >> EFUSE_INTF0_R_256_LSB)
#define EFUSE_INTF0_R_256_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_256_LSB) & EFUSE_INTF0_R_256_MASK)
#define EFUSE_INTF0_R_256_RESET                                                0x0
#define EFUSE_INTF0_256_ADDRESS                                                (0xc00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_256_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_256_RESET                                                  0x0

// 0xc04 (EFUSE_INTF0_257)
#define EFUSE_INTF0_R_257_LSB                                                  0
#define EFUSE_INTF0_R_257_MSB                                                  31
#define EFUSE_INTF0_R_257_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_257_GET(x)                                               (((x) & EFUSE_INTF0_R_257_MASK) >> EFUSE_INTF0_R_257_LSB)
#define EFUSE_INTF0_R_257_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_257_LSB) & EFUSE_INTF0_R_257_MASK)
#define EFUSE_INTF0_R_257_RESET                                                0x0
#define EFUSE_INTF0_257_ADDRESS                                                (0xc04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_257_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_257_RESET                                                  0x0

// 0xc08 (EFUSE_INTF0_258)
#define EFUSE_INTF0_R_258_LSB                                                  0
#define EFUSE_INTF0_R_258_MSB                                                  31
#define EFUSE_INTF0_R_258_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_258_GET(x)                                               (((x) & EFUSE_INTF0_R_258_MASK) >> EFUSE_INTF0_R_258_LSB)
#define EFUSE_INTF0_R_258_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_258_LSB) & EFUSE_INTF0_R_258_MASK)
#define EFUSE_INTF0_R_258_RESET                                                0x0
#define EFUSE_INTF0_258_ADDRESS                                                (0xc08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_258_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_258_RESET                                                  0x0

// 0xc0c (EFUSE_INTF0_259)
#define EFUSE_INTF0_R_259_LSB                                                  0
#define EFUSE_INTF0_R_259_MSB                                                  31
#define EFUSE_INTF0_R_259_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_259_GET(x)                                               (((x) & EFUSE_INTF0_R_259_MASK) >> EFUSE_INTF0_R_259_LSB)
#define EFUSE_INTF0_R_259_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_259_LSB) & EFUSE_INTF0_R_259_MASK)
#define EFUSE_INTF0_R_259_RESET                                                0x0
#define EFUSE_INTF0_259_ADDRESS                                                (0xc0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_259_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_259_RESET                                                  0x0

// 0xc10 (EFUSE_INTF0_260)
#define EFUSE_INTF0_R_260_LSB                                                  0
#define EFUSE_INTF0_R_260_MSB                                                  31
#define EFUSE_INTF0_R_260_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_260_GET(x)                                               (((x) & EFUSE_INTF0_R_260_MASK) >> EFUSE_INTF0_R_260_LSB)
#define EFUSE_INTF0_R_260_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_260_LSB) & EFUSE_INTF0_R_260_MASK)
#define EFUSE_INTF0_R_260_RESET                                                0x0
#define EFUSE_INTF0_260_ADDRESS                                                (0xc10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_260_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_260_RESET                                                  0x0

// 0xc14 (EFUSE_INTF0_261)
#define EFUSE_INTF0_R_261_LSB                                                  0
#define EFUSE_INTF0_R_261_MSB                                                  31
#define EFUSE_INTF0_R_261_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_261_GET(x)                                               (((x) & EFUSE_INTF0_R_261_MASK) >> EFUSE_INTF0_R_261_LSB)
#define EFUSE_INTF0_R_261_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_261_LSB) & EFUSE_INTF0_R_261_MASK)
#define EFUSE_INTF0_R_261_RESET                                                0x0
#define EFUSE_INTF0_261_ADDRESS                                                (0xc14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_261_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_261_RESET                                                  0x0

// 0xc18 (EFUSE_INTF0_262)
#define EFUSE_INTF0_R_262_LSB                                                  0
#define EFUSE_INTF0_R_262_MSB                                                  31
#define EFUSE_INTF0_R_262_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_262_GET(x)                                               (((x) & EFUSE_INTF0_R_262_MASK) >> EFUSE_INTF0_R_262_LSB)
#define EFUSE_INTF0_R_262_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_262_LSB) & EFUSE_INTF0_R_262_MASK)
#define EFUSE_INTF0_R_262_RESET                                                0x0
#define EFUSE_INTF0_262_ADDRESS                                                (0xc18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_262_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_262_RESET                                                  0x0

// 0xc1c (EFUSE_INTF0_263)
#define EFUSE_INTF0_R_263_LSB                                                  0
#define EFUSE_INTF0_R_263_MSB                                                  31
#define EFUSE_INTF0_R_263_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_263_GET(x)                                               (((x) & EFUSE_INTF0_R_263_MASK) >> EFUSE_INTF0_R_263_LSB)
#define EFUSE_INTF0_R_263_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_263_LSB) & EFUSE_INTF0_R_263_MASK)
#define EFUSE_INTF0_R_263_RESET                                                0x0
#define EFUSE_INTF0_263_ADDRESS                                                (0xc1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_263_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_263_RESET                                                  0x0

// 0xc20 (EFUSE_INTF0_264)
#define EFUSE_INTF0_R_264_LSB                                                  0
#define EFUSE_INTF0_R_264_MSB                                                  31
#define EFUSE_INTF0_R_264_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_264_GET(x)                                               (((x) & EFUSE_INTF0_R_264_MASK) >> EFUSE_INTF0_R_264_LSB)
#define EFUSE_INTF0_R_264_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_264_LSB) & EFUSE_INTF0_R_264_MASK)
#define EFUSE_INTF0_R_264_RESET                                                0x0
#define EFUSE_INTF0_264_ADDRESS                                                (0xc20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_264_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_264_RESET                                                  0x0

// 0xc24 (EFUSE_INTF0_265)
#define EFUSE_INTF0_R_265_LSB                                                  0
#define EFUSE_INTF0_R_265_MSB                                                  31
#define EFUSE_INTF0_R_265_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_265_GET(x)                                               (((x) & EFUSE_INTF0_R_265_MASK) >> EFUSE_INTF0_R_265_LSB)
#define EFUSE_INTF0_R_265_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_265_LSB) & EFUSE_INTF0_R_265_MASK)
#define EFUSE_INTF0_R_265_RESET                                                0x0
#define EFUSE_INTF0_265_ADDRESS                                                (0xc24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_265_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_265_RESET                                                  0x0

// 0xc28 (EFUSE_INTF0_266)
#define EFUSE_INTF0_R_266_LSB                                                  0
#define EFUSE_INTF0_R_266_MSB                                                  31
#define EFUSE_INTF0_R_266_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_266_GET(x)                                               (((x) & EFUSE_INTF0_R_266_MASK) >> EFUSE_INTF0_R_266_LSB)
#define EFUSE_INTF0_R_266_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_266_LSB) & EFUSE_INTF0_R_266_MASK)
#define EFUSE_INTF0_R_266_RESET                                                0x0
#define EFUSE_INTF0_266_ADDRESS                                                (0xc28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_266_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_266_RESET                                                  0x0

// 0xc2c (EFUSE_INTF0_267)
#define EFUSE_INTF0_R_267_LSB                                                  0
#define EFUSE_INTF0_R_267_MSB                                                  31
#define EFUSE_INTF0_R_267_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_267_GET(x)                                               (((x) & EFUSE_INTF0_R_267_MASK) >> EFUSE_INTF0_R_267_LSB)
#define EFUSE_INTF0_R_267_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_267_LSB) & EFUSE_INTF0_R_267_MASK)
#define EFUSE_INTF0_R_267_RESET                                                0x0
#define EFUSE_INTF0_267_ADDRESS                                                (0xc2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_267_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_267_RESET                                                  0x0

// 0xc30 (EFUSE_INTF0_268)
#define EFUSE_INTF0_R_268_LSB                                                  0
#define EFUSE_INTF0_R_268_MSB                                                  31
#define EFUSE_INTF0_R_268_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_268_GET(x)                                               (((x) & EFUSE_INTF0_R_268_MASK) >> EFUSE_INTF0_R_268_LSB)
#define EFUSE_INTF0_R_268_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_268_LSB) & EFUSE_INTF0_R_268_MASK)
#define EFUSE_INTF0_R_268_RESET                                                0x0
#define EFUSE_INTF0_268_ADDRESS                                                (0xc30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_268_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_268_RESET                                                  0x0

// 0xc34 (EFUSE_INTF0_269)
#define EFUSE_INTF0_R_269_LSB                                                  0
#define EFUSE_INTF0_R_269_MSB                                                  31
#define EFUSE_INTF0_R_269_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_269_GET(x)                                               (((x) & EFUSE_INTF0_R_269_MASK) >> EFUSE_INTF0_R_269_LSB)
#define EFUSE_INTF0_R_269_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_269_LSB) & EFUSE_INTF0_R_269_MASK)
#define EFUSE_INTF0_R_269_RESET                                                0x0
#define EFUSE_INTF0_269_ADDRESS                                                (0xc34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_269_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_269_RESET                                                  0x0

// 0xc38 (EFUSE_INTF0_270)
#define EFUSE_INTF0_R_270_LSB                                                  0
#define EFUSE_INTF0_R_270_MSB                                                  31
#define EFUSE_INTF0_R_270_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_270_GET(x)                                               (((x) & EFUSE_INTF0_R_270_MASK) >> EFUSE_INTF0_R_270_LSB)
#define EFUSE_INTF0_R_270_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_270_LSB) & EFUSE_INTF0_R_270_MASK)
#define EFUSE_INTF0_R_270_RESET                                                0x0
#define EFUSE_INTF0_270_ADDRESS                                                (0xc38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_270_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_270_RESET                                                  0x0

// 0xc3c (EFUSE_INTF0_271)
#define EFUSE_INTF0_R_271_LSB                                                  0
#define EFUSE_INTF0_R_271_MSB                                                  31
#define EFUSE_INTF0_R_271_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_271_GET(x)                                               (((x) & EFUSE_INTF0_R_271_MASK) >> EFUSE_INTF0_R_271_LSB)
#define EFUSE_INTF0_R_271_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_271_LSB) & EFUSE_INTF0_R_271_MASK)
#define EFUSE_INTF0_R_271_RESET                                                0x0
#define EFUSE_INTF0_271_ADDRESS                                                (0xc3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_271_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_271_RESET                                                  0x0

// 0xc40 (EFUSE_INTF0_272)
#define EFUSE_INTF0_R_272_LSB                                                  0
#define EFUSE_INTF0_R_272_MSB                                                  31
#define EFUSE_INTF0_R_272_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_272_GET(x)                                               (((x) & EFUSE_INTF0_R_272_MASK) >> EFUSE_INTF0_R_272_LSB)
#define EFUSE_INTF0_R_272_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_272_LSB) & EFUSE_INTF0_R_272_MASK)
#define EFUSE_INTF0_R_272_RESET                                                0x0
#define EFUSE_INTF0_272_ADDRESS                                                (0xc40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_272_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_272_RESET                                                  0x0

// 0xc44 (EFUSE_INTF0_273)
#define EFUSE_INTF0_R_273_LSB                                                  0
#define EFUSE_INTF0_R_273_MSB                                                  31
#define EFUSE_INTF0_R_273_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_273_GET(x)                                               (((x) & EFUSE_INTF0_R_273_MASK) >> EFUSE_INTF0_R_273_LSB)
#define EFUSE_INTF0_R_273_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_273_LSB) & EFUSE_INTF0_R_273_MASK)
#define EFUSE_INTF0_R_273_RESET                                                0x0
#define EFUSE_INTF0_273_ADDRESS                                                (0xc44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_273_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_273_RESET                                                  0x0

// 0xc48 (EFUSE_INTF0_274)
#define EFUSE_INTF0_R_274_LSB                                                  0
#define EFUSE_INTF0_R_274_MSB                                                  31
#define EFUSE_INTF0_R_274_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_274_GET(x)                                               (((x) & EFUSE_INTF0_R_274_MASK) >> EFUSE_INTF0_R_274_LSB)
#define EFUSE_INTF0_R_274_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_274_LSB) & EFUSE_INTF0_R_274_MASK)
#define EFUSE_INTF0_R_274_RESET                                                0x0
#define EFUSE_INTF0_274_ADDRESS                                                (0xc48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_274_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_274_RESET                                                  0x0

// 0xc4c (EFUSE_INTF0_275)
#define EFUSE_INTF0_R_275_LSB                                                  0
#define EFUSE_INTF0_R_275_MSB                                                  31
#define EFUSE_INTF0_R_275_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_275_GET(x)                                               (((x) & EFUSE_INTF0_R_275_MASK) >> EFUSE_INTF0_R_275_LSB)
#define EFUSE_INTF0_R_275_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_275_LSB) & EFUSE_INTF0_R_275_MASK)
#define EFUSE_INTF0_R_275_RESET                                                0x0
#define EFUSE_INTF0_275_ADDRESS                                                (0xc4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_275_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_275_RESET                                                  0x0

// 0xc50 (EFUSE_INTF0_276)
#define EFUSE_INTF0_R_276_LSB                                                  0
#define EFUSE_INTF0_R_276_MSB                                                  31
#define EFUSE_INTF0_R_276_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_276_GET(x)                                               (((x) & EFUSE_INTF0_R_276_MASK) >> EFUSE_INTF0_R_276_LSB)
#define EFUSE_INTF0_R_276_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_276_LSB) & EFUSE_INTF0_R_276_MASK)
#define EFUSE_INTF0_R_276_RESET                                                0x0
#define EFUSE_INTF0_276_ADDRESS                                                (0xc50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_276_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_276_RESET                                                  0x0

// 0xc54 (EFUSE_INTF0_277)
#define EFUSE_INTF0_R_277_LSB                                                  0
#define EFUSE_INTF0_R_277_MSB                                                  31
#define EFUSE_INTF0_R_277_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_277_GET(x)                                               (((x) & EFUSE_INTF0_R_277_MASK) >> EFUSE_INTF0_R_277_LSB)
#define EFUSE_INTF0_R_277_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_277_LSB) & EFUSE_INTF0_R_277_MASK)
#define EFUSE_INTF0_R_277_RESET                                                0x0
#define EFUSE_INTF0_277_ADDRESS                                                (0xc54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_277_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_277_RESET                                                  0x0

// 0xc58 (EFUSE_INTF0_278)
#define EFUSE_INTF0_R_278_LSB                                                  0
#define EFUSE_INTF0_R_278_MSB                                                  31
#define EFUSE_INTF0_R_278_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_278_GET(x)                                               (((x) & EFUSE_INTF0_R_278_MASK) >> EFUSE_INTF0_R_278_LSB)
#define EFUSE_INTF0_R_278_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_278_LSB) & EFUSE_INTF0_R_278_MASK)
#define EFUSE_INTF0_R_278_RESET                                                0x0
#define EFUSE_INTF0_278_ADDRESS                                                (0xc58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_278_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_278_RESET                                                  0x0

// 0xc5c (EFUSE_INTF0_279)
#define EFUSE_INTF0_R_279_LSB                                                  0
#define EFUSE_INTF0_R_279_MSB                                                  31
#define EFUSE_INTF0_R_279_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_279_GET(x)                                               (((x) & EFUSE_INTF0_R_279_MASK) >> EFUSE_INTF0_R_279_LSB)
#define EFUSE_INTF0_R_279_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_279_LSB) & EFUSE_INTF0_R_279_MASK)
#define EFUSE_INTF0_R_279_RESET                                                0x0
#define EFUSE_INTF0_279_ADDRESS                                                (0xc5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_279_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_279_RESET                                                  0x0

// 0xc60 (EFUSE_INTF0_280)
#define EFUSE_INTF0_R_280_LSB                                                  0
#define EFUSE_INTF0_R_280_MSB                                                  31
#define EFUSE_INTF0_R_280_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_280_GET(x)                                               (((x) & EFUSE_INTF0_R_280_MASK) >> EFUSE_INTF0_R_280_LSB)
#define EFUSE_INTF0_R_280_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_280_LSB) & EFUSE_INTF0_R_280_MASK)
#define EFUSE_INTF0_R_280_RESET                                                0x0
#define EFUSE_INTF0_280_ADDRESS                                                (0xc60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_280_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_280_RESET                                                  0x0

// 0xc64 (EFUSE_INTF0_281)
#define EFUSE_INTF0_R_281_LSB                                                  0
#define EFUSE_INTF0_R_281_MSB                                                  31
#define EFUSE_INTF0_R_281_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_281_GET(x)                                               (((x) & EFUSE_INTF0_R_281_MASK) >> EFUSE_INTF0_R_281_LSB)
#define EFUSE_INTF0_R_281_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_281_LSB) & EFUSE_INTF0_R_281_MASK)
#define EFUSE_INTF0_R_281_RESET                                                0x0
#define EFUSE_INTF0_281_ADDRESS                                                (0xc64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_281_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_281_RESET                                                  0x0

// 0xc68 (EFUSE_INTF0_282)
#define EFUSE_INTF0_R_282_LSB                                                  0
#define EFUSE_INTF0_R_282_MSB                                                  31
#define EFUSE_INTF0_R_282_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_282_GET(x)                                               (((x) & EFUSE_INTF0_R_282_MASK) >> EFUSE_INTF0_R_282_LSB)
#define EFUSE_INTF0_R_282_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_282_LSB) & EFUSE_INTF0_R_282_MASK)
#define EFUSE_INTF0_R_282_RESET                                                0x0
#define EFUSE_INTF0_282_ADDRESS                                                (0xc68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_282_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_282_RESET                                                  0x0

// 0xc6c (EFUSE_INTF0_283)
#define EFUSE_INTF0_R_283_LSB                                                  0
#define EFUSE_INTF0_R_283_MSB                                                  31
#define EFUSE_INTF0_R_283_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_283_GET(x)                                               (((x) & EFUSE_INTF0_R_283_MASK) >> EFUSE_INTF0_R_283_LSB)
#define EFUSE_INTF0_R_283_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_283_LSB) & EFUSE_INTF0_R_283_MASK)
#define EFUSE_INTF0_R_283_RESET                                                0x0
#define EFUSE_INTF0_283_ADDRESS                                                (0xc6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_283_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_283_RESET                                                  0x0

// 0xc70 (EFUSE_INTF0_284)
#define EFUSE_INTF0_R_284_LSB                                                  0
#define EFUSE_INTF0_R_284_MSB                                                  31
#define EFUSE_INTF0_R_284_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_284_GET(x)                                               (((x) & EFUSE_INTF0_R_284_MASK) >> EFUSE_INTF0_R_284_LSB)
#define EFUSE_INTF0_R_284_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_284_LSB) & EFUSE_INTF0_R_284_MASK)
#define EFUSE_INTF0_R_284_RESET                                                0x0
#define EFUSE_INTF0_284_ADDRESS                                                (0xc70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_284_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_284_RESET                                                  0x0

// 0xc74 (EFUSE_INTF0_285)
#define EFUSE_INTF0_R_285_LSB                                                  0
#define EFUSE_INTF0_R_285_MSB                                                  31
#define EFUSE_INTF0_R_285_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_285_GET(x)                                               (((x) & EFUSE_INTF0_R_285_MASK) >> EFUSE_INTF0_R_285_LSB)
#define EFUSE_INTF0_R_285_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_285_LSB) & EFUSE_INTF0_R_285_MASK)
#define EFUSE_INTF0_R_285_RESET                                                0x0
#define EFUSE_INTF0_285_ADDRESS                                                (0xc74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_285_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_285_RESET                                                  0x0

// 0xc78 (EFUSE_INTF0_286)
#define EFUSE_INTF0_R_286_LSB                                                  0
#define EFUSE_INTF0_R_286_MSB                                                  31
#define EFUSE_INTF0_R_286_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_286_GET(x)                                               (((x) & EFUSE_INTF0_R_286_MASK) >> EFUSE_INTF0_R_286_LSB)
#define EFUSE_INTF0_R_286_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_286_LSB) & EFUSE_INTF0_R_286_MASK)
#define EFUSE_INTF0_R_286_RESET                                                0x0
#define EFUSE_INTF0_286_ADDRESS                                                (0xc78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_286_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_286_RESET                                                  0x0

// 0xc7c (EFUSE_INTF0_287)
#define EFUSE_INTF0_R_287_LSB                                                  0
#define EFUSE_INTF0_R_287_MSB                                                  31
#define EFUSE_INTF0_R_287_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_287_GET(x)                                               (((x) & EFUSE_INTF0_R_287_MASK) >> EFUSE_INTF0_R_287_LSB)
#define EFUSE_INTF0_R_287_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_287_LSB) & EFUSE_INTF0_R_287_MASK)
#define EFUSE_INTF0_R_287_RESET                                                0x0
#define EFUSE_INTF0_287_ADDRESS                                                (0xc7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_287_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_287_RESET                                                  0x0

// 0xc80 (EFUSE_INTF0_288)
#define EFUSE_INTF0_R_288_LSB                                                  0
#define EFUSE_INTF0_R_288_MSB                                                  31
#define EFUSE_INTF0_R_288_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_288_GET(x)                                               (((x) & EFUSE_INTF0_R_288_MASK) >> EFUSE_INTF0_R_288_LSB)
#define EFUSE_INTF0_R_288_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_288_LSB) & EFUSE_INTF0_R_288_MASK)
#define EFUSE_INTF0_R_288_RESET                                                0x0
#define EFUSE_INTF0_288_ADDRESS                                                (0xc80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_288_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_288_RESET                                                  0x0

// 0xc84 (EFUSE_INTF0_289)
#define EFUSE_INTF0_R_289_LSB                                                  0
#define EFUSE_INTF0_R_289_MSB                                                  31
#define EFUSE_INTF0_R_289_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_289_GET(x)                                               (((x) & EFUSE_INTF0_R_289_MASK) >> EFUSE_INTF0_R_289_LSB)
#define EFUSE_INTF0_R_289_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_289_LSB) & EFUSE_INTF0_R_289_MASK)
#define EFUSE_INTF0_R_289_RESET                                                0x0
#define EFUSE_INTF0_289_ADDRESS                                                (0xc84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_289_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_289_RESET                                                  0x0

// 0xc88 (EFUSE_INTF0_290)
#define EFUSE_INTF0_R_290_LSB                                                  0
#define EFUSE_INTF0_R_290_MSB                                                  31
#define EFUSE_INTF0_R_290_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_290_GET(x)                                               (((x) & EFUSE_INTF0_R_290_MASK) >> EFUSE_INTF0_R_290_LSB)
#define EFUSE_INTF0_R_290_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_290_LSB) & EFUSE_INTF0_R_290_MASK)
#define EFUSE_INTF0_R_290_RESET                                                0x0
#define EFUSE_INTF0_290_ADDRESS                                                (0xc88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_290_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_290_RESET                                                  0x0

// 0xc8c (EFUSE_INTF0_291)
#define EFUSE_INTF0_R_291_LSB                                                  0
#define EFUSE_INTF0_R_291_MSB                                                  31
#define EFUSE_INTF0_R_291_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_291_GET(x)                                               (((x) & EFUSE_INTF0_R_291_MASK) >> EFUSE_INTF0_R_291_LSB)
#define EFUSE_INTF0_R_291_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_291_LSB) & EFUSE_INTF0_R_291_MASK)
#define EFUSE_INTF0_R_291_RESET                                                0x0
#define EFUSE_INTF0_291_ADDRESS                                                (0xc8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_291_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_291_RESET                                                  0x0

// 0xc90 (EFUSE_INTF0_292)
#define EFUSE_INTF0_R_292_LSB                                                  0
#define EFUSE_INTF0_R_292_MSB                                                  31
#define EFUSE_INTF0_R_292_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_292_GET(x)                                               (((x) & EFUSE_INTF0_R_292_MASK) >> EFUSE_INTF0_R_292_LSB)
#define EFUSE_INTF0_R_292_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_292_LSB) & EFUSE_INTF0_R_292_MASK)
#define EFUSE_INTF0_R_292_RESET                                                0x0
#define EFUSE_INTF0_292_ADDRESS                                                (0xc90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_292_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_292_RESET                                                  0x0

// 0xc94 (EFUSE_INTF0_293)
#define EFUSE_INTF0_R_293_LSB                                                  0
#define EFUSE_INTF0_R_293_MSB                                                  31
#define EFUSE_INTF0_R_293_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_293_GET(x)                                               (((x) & EFUSE_INTF0_R_293_MASK) >> EFUSE_INTF0_R_293_LSB)
#define EFUSE_INTF0_R_293_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_293_LSB) & EFUSE_INTF0_R_293_MASK)
#define EFUSE_INTF0_R_293_RESET                                                0x0
#define EFUSE_INTF0_293_ADDRESS                                                (0xc94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_293_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_293_RESET                                                  0x0

// 0xc98 (EFUSE_INTF0_294)
#define EFUSE_INTF0_R_294_LSB                                                  0
#define EFUSE_INTF0_R_294_MSB                                                  31
#define EFUSE_INTF0_R_294_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_294_GET(x)                                               (((x) & EFUSE_INTF0_R_294_MASK) >> EFUSE_INTF0_R_294_LSB)
#define EFUSE_INTF0_R_294_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_294_LSB) & EFUSE_INTF0_R_294_MASK)
#define EFUSE_INTF0_R_294_RESET                                                0x0
#define EFUSE_INTF0_294_ADDRESS                                                (0xc98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_294_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_294_RESET                                                  0x0

// 0xc9c (EFUSE_INTF0_295)
#define EFUSE_INTF0_R_295_LSB                                                  0
#define EFUSE_INTF0_R_295_MSB                                                  31
#define EFUSE_INTF0_R_295_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_295_GET(x)                                               (((x) & EFUSE_INTF0_R_295_MASK) >> EFUSE_INTF0_R_295_LSB)
#define EFUSE_INTF0_R_295_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_295_LSB) & EFUSE_INTF0_R_295_MASK)
#define EFUSE_INTF0_R_295_RESET                                                0x0
#define EFUSE_INTF0_295_ADDRESS                                                (0xc9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_295_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_295_RESET                                                  0x0

// 0xca0 (EFUSE_INTF0_296)
#define EFUSE_INTF0_R_296_LSB                                                  0
#define EFUSE_INTF0_R_296_MSB                                                  31
#define EFUSE_INTF0_R_296_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_296_GET(x)                                               (((x) & EFUSE_INTF0_R_296_MASK) >> EFUSE_INTF0_R_296_LSB)
#define EFUSE_INTF0_R_296_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_296_LSB) & EFUSE_INTF0_R_296_MASK)
#define EFUSE_INTF0_R_296_RESET                                                0x0
#define EFUSE_INTF0_296_ADDRESS                                                (0xca0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_296_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_296_RESET                                                  0x0

// 0xca4 (EFUSE_INTF0_297)
#define EFUSE_INTF0_R_297_LSB                                                  0
#define EFUSE_INTF0_R_297_MSB                                                  31
#define EFUSE_INTF0_R_297_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_297_GET(x)                                               (((x) & EFUSE_INTF0_R_297_MASK) >> EFUSE_INTF0_R_297_LSB)
#define EFUSE_INTF0_R_297_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_297_LSB) & EFUSE_INTF0_R_297_MASK)
#define EFUSE_INTF0_R_297_RESET                                                0x0
#define EFUSE_INTF0_297_ADDRESS                                                (0xca4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_297_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_297_RESET                                                  0x0

// 0xca8 (EFUSE_INTF0_298)
#define EFUSE_INTF0_R_298_LSB                                                  0
#define EFUSE_INTF0_R_298_MSB                                                  31
#define EFUSE_INTF0_R_298_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_298_GET(x)                                               (((x) & EFUSE_INTF0_R_298_MASK) >> EFUSE_INTF0_R_298_LSB)
#define EFUSE_INTF0_R_298_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_298_LSB) & EFUSE_INTF0_R_298_MASK)
#define EFUSE_INTF0_R_298_RESET                                                0x0
#define EFUSE_INTF0_298_ADDRESS                                                (0xca8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_298_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_298_RESET                                                  0x0

// 0xcac (EFUSE_INTF0_299)
#define EFUSE_INTF0_R_299_LSB                                                  0
#define EFUSE_INTF0_R_299_MSB                                                  31
#define EFUSE_INTF0_R_299_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_299_GET(x)                                               (((x) & EFUSE_INTF0_R_299_MASK) >> EFUSE_INTF0_R_299_LSB)
#define EFUSE_INTF0_R_299_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_299_LSB) & EFUSE_INTF0_R_299_MASK)
#define EFUSE_INTF0_R_299_RESET                                                0x0
#define EFUSE_INTF0_299_ADDRESS                                                (0xcac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_299_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_299_RESET                                                  0x0

// 0xcb0 (EFUSE_INTF0_300)
#define EFUSE_INTF0_R_300_LSB                                                  0
#define EFUSE_INTF0_R_300_MSB                                                  31
#define EFUSE_INTF0_R_300_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_300_GET(x)                                               (((x) & EFUSE_INTF0_R_300_MASK) >> EFUSE_INTF0_R_300_LSB)
#define EFUSE_INTF0_R_300_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_300_LSB) & EFUSE_INTF0_R_300_MASK)
#define EFUSE_INTF0_R_300_RESET                                                0x0
#define EFUSE_INTF0_300_ADDRESS                                                (0xcb0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_300_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_300_RESET                                                  0x0

// 0xcb4 (EFUSE_INTF0_301)
#define EFUSE_INTF0_R_301_LSB                                                  0
#define EFUSE_INTF0_R_301_MSB                                                  31
#define EFUSE_INTF0_R_301_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_301_GET(x)                                               (((x) & EFUSE_INTF0_R_301_MASK) >> EFUSE_INTF0_R_301_LSB)
#define EFUSE_INTF0_R_301_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_301_LSB) & EFUSE_INTF0_R_301_MASK)
#define EFUSE_INTF0_R_301_RESET                                                0x0
#define EFUSE_INTF0_301_ADDRESS                                                (0xcb4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_301_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_301_RESET                                                  0x0

// 0xcb8 (EFUSE_INTF0_302)
#define EFUSE_INTF0_R_302_LSB                                                  0
#define EFUSE_INTF0_R_302_MSB                                                  31
#define EFUSE_INTF0_R_302_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_302_GET(x)                                               (((x) & EFUSE_INTF0_R_302_MASK) >> EFUSE_INTF0_R_302_LSB)
#define EFUSE_INTF0_R_302_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_302_LSB) & EFUSE_INTF0_R_302_MASK)
#define EFUSE_INTF0_R_302_RESET                                                0x0
#define EFUSE_INTF0_302_ADDRESS                                                (0xcb8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_302_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_302_RESET                                                  0x0

// 0xcbc (EFUSE_INTF0_303)
#define EFUSE_INTF0_R_303_LSB                                                  0
#define EFUSE_INTF0_R_303_MSB                                                  31
#define EFUSE_INTF0_R_303_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_303_GET(x)                                               (((x) & EFUSE_INTF0_R_303_MASK) >> EFUSE_INTF0_R_303_LSB)
#define EFUSE_INTF0_R_303_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_303_LSB) & EFUSE_INTF0_R_303_MASK)
#define EFUSE_INTF0_R_303_RESET                                                0x0
#define EFUSE_INTF0_303_ADDRESS                                                (0xcbc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_303_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_303_RESET                                                  0x0

// 0xcc0 (EFUSE_INTF0_304)
#define EFUSE_INTF0_R_304_LSB                                                  0
#define EFUSE_INTF0_R_304_MSB                                                  31
#define EFUSE_INTF0_R_304_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_304_GET(x)                                               (((x) & EFUSE_INTF0_R_304_MASK) >> EFUSE_INTF0_R_304_LSB)
#define EFUSE_INTF0_R_304_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_304_LSB) & EFUSE_INTF0_R_304_MASK)
#define EFUSE_INTF0_R_304_RESET                                                0x0
#define EFUSE_INTF0_304_ADDRESS                                                (0xcc0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_304_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_304_RESET                                                  0x0

// 0xcc4 (EFUSE_INTF0_305)
#define EFUSE_INTF0_R_305_LSB                                                  0
#define EFUSE_INTF0_R_305_MSB                                                  31
#define EFUSE_INTF0_R_305_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_305_GET(x)                                               (((x) & EFUSE_INTF0_R_305_MASK) >> EFUSE_INTF0_R_305_LSB)
#define EFUSE_INTF0_R_305_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_305_LSB) & EFUSE_INTF0_R_305_MASK)
#define EFUSE_INTF0_R_305_RESET                                                0x0
#define EFUSE_INTF0_305_ADDRESS                                                (0xcc4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_305_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_305_RESET                                                  0x0

// 0xcc8 (EFUSE_INTF0_306)
#define EFUSE_INTF0_R_306_LSB                                                  0
#define EFUSE_INTF0_R_306_MSB                                                  31
#define EFUSE_INTF0_R_306_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_306_GET(x)                                               (((x) & EFUSE_INTF0_R_306_MASK) >> EFUSE_INTF0_R_306_LSB)
#define EFUSE_INTF0_R_306_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_306_LSB) & EFUSE_INTF0_R_306_MASK)
#define EFUSE_INTF0_R_306_RESET                                                0x0
#define EFUSE_INTF0_306_ADDRESS                                                (0xcc8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_306_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_306_RESET                                                  0x0

// 0xccc (EFUSE_INTF0_307)
#define EFUSE_INTF0_R_307_LSB                                                  0
#define EFUSE_INTF0_R_307_MSB                                                  31
#define EFUSE_INTF0_R_307_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_307_GET(x)                                               (((x) & EFUSE_INTF0_R_307_MASK) >> EFUSE_INTF0_R_307_LSB)
#define EFUSE_INTF0_R_307_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_307_LSB) & EFUSE_INTF0_R_307_MASK)
#define EFUSE_INTF0_R_307_RESET                                                0x0
#define EFUSE_INTF0_307_ADDRESS                                                (0xccc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_307_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_307_RESET                                                  0x0

// 0xcd0 (EFUSE_INTF0_308)
#define EFUSE_INTF0_R_308_LSB                                                  0
#define EFUSE_INTF0_R_308_MSB                                                  31
#define EFUSE_INTF0_R_308_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_308_GET(x)                                               (((x) & EFUSE_INTF0_R_308_MASK) >> EFUSE_INTF0_R_308_LSB)
#define EFUSE_INTF0_R_308_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_308_LSB) & EFUSE_INTF0_R_308_MASK)
#define EFUSE_INTF0_R_308_RESET                                                0x0
#define EFUSE_INTF0_308_ADDRESS                                                (0xcd0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_308_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_308_RESET                                                  0x0

// 0xcd4 (EFUSE_INTF0_309)
#define EFUSE_INTF0_R_309_LSB                                                  0
#define EFUSE_INTF0_R_309_MSB                                                  31
#define EFUSE_INTF0_R_309_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_309_GET(x)                                               (((x) & EFUSE_INTF0_R_309_MASK) >> EFUSE_INTF0_R_309_LSB)
#define EFUSE_INTF0_R_309_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_309_LSB) & EFUSE_INTF0_R_309_MASK)
#define EFUSE_INTF0_R_309_RESET                                                0x0
#define EFUSE_INTF0_309_ADDRESS                                                (0xcd4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_309_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_309_RESET                                                  0x0

// 0xcd8 (EFUSE_INTF0_310)
#define EFUSE_INTF0_R_310_LSB                                                  0
#define EFUSE_INTF0_R_310_MSB                                                  31
#define EFUSE_INTF0_R_310_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_310_GET(x)                                               (((x) & EFUSE_INTF0_R_310_MASK) >> EFUSE_INTF0_R_310_LSB)
#define EFUSE_INTF0_R_310_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_310_LSB) & EFUSE_INTF0_R_310_MASK)
#define EFUSE_INTF0_R_310_RESET                                                0x0
#define EFUSE_INTF0_310_ADDRESS                                                (0xcd8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_310_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_310_RESET                                                  0x0

// 0xcdc (EFUSE_INTF0_311)
#define EFUSE_INTF0_R_311_LSB                                                  0
#define EFUSE_INTF0_R_311_MSB                                                  31
#define EFUSE_INTF0_R_311_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_311_GET(x)                                               (((x) & EFUSE_INTF0_R_311_MASK) >> EFUSE_INTF0_R_311_LSB)
#define EFUSE_INTF0_R_311_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_311_LSB) & EFUSE_INTF0_R_311_MASK)
#define EFUSE_INTF0_R_311_RESET                                                0x0
#define EFUSE_INTF0_311_ADDRESS                                                (0xcdc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_311_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_311_RESET                                                  0x0

// 0xce0 (EFUSE_INTF0_312)
#define EFUSE_INTF0_R_312_LSB                                                  0
#define EFUSE_INTF0_R_312_MSB                                                  31
#define EFUSE_INTF0_R_312_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_312_GET(x)                                               (((x) & EFUSE_INTF0_R_312_MASK) >> EFUSE_INTF0_R_312_LSB)
#define EFUSE_INTF0_R_312_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_312_LSB) & EFUSE_INTF0_R_312_MASK)
#define EFUSE_INTF0_R_312_RESET                                                0x0
#define EFUSE_INTF0_312_ADDRESS                                                (0xce0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_312_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_312_RESET                                                  0x0

// 0xce4 (EFUSE_INTF0_313)
#define EFUSE_INTF0_R_313_LSB                                                  0
#define EFUSE_INTF0_R_313_MSB                                                  31
#define EFUSE_INTF0_R_313_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_313_GET(x)                                               (((x) & EFUSE_INTF0_R_313_MASK) >> EFUSE_INTF0_R_313_LSB)
#define EFUSE_INTF0_R_313_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_313_LSB) & EFUSE_INTF0_R_313_MASK)
#define EFUSE_INTF0_R_313_RESET                                                0x0
#define EFUSE_INTF0_313_ADDRESS                                                (0xce4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_313_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_313_RESET                                                  0x0

// 0xce8 (EFUSE_INTF0_314)
#define EFUSE_INTF0_R_314_LSB                                                  0
#define EFUSE_INTF0_R_314_MSB                                                  31
#define EFUSE_INTF0_R_314_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_314_GET(x)                                               (((x) & EFUSE_INTF0_R_314_MASK) >> EFUSE_INTF0_R_314_LSB)
#define EFUSE_INTF0_R_314_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_314_LSB) & EFUSE_INTF0_R_314_MASK)
#define EFUSE_INTF0_R_314_RESET                                                0x0
#define EFUSE_INTF0_314_ADDRESS                                                (0xce8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_314_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_314_RESET                                                  0x0

// 0xcec (EFUSE_INTF0_315)
#define EFUSE_INTF0_R_315_LSB                                                  0
#define EFUSE_INTF0_R_315_MSB                                                  31
#define EFUSE_INTF0_R_315_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_315_GET(x)                                               (((x) & EFUSE_INTF0_R_315_MASK) >> EFUSE_INTF0_R_315_LSB)
#define EFUSE_INTF0_R_315_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_315_LSB) & EFUSE_INTF0_R_315_MASK)
#define EFUSE_INTF0_R_315_RESET                                                0x0
#define EFUSE_INTF0_315_ADDRESS                                                (0xcec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_315_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_315_RESET                                                  0x0

// 0xcf0 (EFUSE_INTF0_316)
#define EFUSE_INTF0_R_316_LSB                                                  0
#define EFUSE_INTF0_R_316_MSB                                                  31
#define EFUSE_INTF0_R_316_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_316_GET(x)                                               (((x) & EFUSE_INTF0_R_316_MASK) >> EFUSE_INTF0_R_316_LSB)
#define EFUSE_INTF0_R_316_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_316_LSB) & EFUSE_INTF0_R_316_MASK)
#define EFUSE_INTF0_R_316_RESET                                                0x0
#define EFUSE_INTF0_316_ADDRESS                                                (0xcf0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_316_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_316_RESET                                                  0x0

// 0xcf4 (EFUSE_INTF0_317)
#define EFUSE_INTF0_R_317_LSB                                                  0
#define EFUSE_INTF0_R_317_MSB                                                  31
#define EFUSE_INTF0_R_317_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_317_GET(x)                                               (((x) & EFUSE_INTF0_R_317_MASK) >> EFUSE_INTF0_R_317_LSB)
#define EFUSE_INTF0_R_317_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_317_LSB) & EFUSE_INTF0_R_317_MASK)
#define EFUSE_INTF0_R_317_RESET                                                0x0
#define EFUSE_INTF0_317_ADDRESS                                                (0xcf4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_317_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_317_RESET                                                  0x0

// 0xcf8 (EFUSE_INTF0_318)
#define EFUSE_INTF0_R_318_LSB                                                  0
#define EFUSE_INTF0_R_318_MSB                                                  31
#define EFUSE_INTF0_R_318_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_318_GET(x)                                               (((x) & EFUSE_INTF0_R_318_MASK) >> EFUSE_INTF0_R_318_LSB)
#define EFUSE_INTF0_R_318_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_318_LSB) & EFUSE_INTF0_R_318_MASK)
#define EFUSE_INTF0_R_318_RESET                                                0x0
#define EFUSE_INTF0_318_ADDRESS                                                (0xcf8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_318_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_318_RESET                                                  0x0

// 0xcfc (EFUSE_INTF0_319)
#define EFUSE_INTF0_R_319_LSB                                                  0
#define EFUSE_INTF0_R_319_MSB                                                  31
#define EFUSE_INTF0_R_319_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_319_GET(x)                                               (((x) & EFUSE_INTF0_R_319_MASK) >> EFUSE_INTF0_R_319_LSB)
#define EFUSE_INTF0_R_319_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_319_LSB) & EFUSE_INTF0_R_319_MASK)
#define EFUSE_INTF0_R_319_RESET                                                0x0
#define EFUSE_INTF0_319_ADDRESS                                                (0xcfc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_319_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_319_RESET                                                  0x0

// 0xd00 (EFUSE_INTF0_320)
#define EFUSE_INTF0_R_320_LSB                                                  0
#define EFUSE_INTF0_R_320_MSB                                                  31
#define EFUSE_INTF0_R_320_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_320_GET(x)                                               (((x) & EFUSE_INTF0_R_320_MASK) >> EFUSE_INTF0_R_320_LSB)
#define EFUSE_INTF0_R_320_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_320_LSB) & EFUSE_INTF0_R_320_MASK)
#define EFUSE_INTF0_R_320_RESET                                                0x0
#define EFUSE_INTF0_320_ADDRESS                                                (0xd00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_320_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_320_RESET                                                  0x0

// 0xd04 (EFUSE_INTF0_321)
#define EFUSE_INTF0_R_321_LSB                                                  0
#define EFUSE_INTF0_R_321_MSB                                                  31
#define EFUSE_INTF0_R_321_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_321_GET(x)                                               (((x) & EFUSE_INTF0_R_321_MASK) >> EFUSE_INTF0_R_321_LSB)
#define EFUSE_INTF0_R_321_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_321_LSB) & EFUSE_INTF0_R_321_MASK)
#define EFUSE_INTF0_R_321_RESET                                                0x0
#define EFUSE_INTF0_321_ADDRESS                                                (0xd04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_321_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_321_RESET                                                  0x0

// 0xd08 (EFUSE_INTF0_322)
#define EFUSE_INTF0_R_322_LSB                                                  0
#define EFUSE_INTF0_R_322_MSB                                                  31
#define EFUSE_INTF0_R_322_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_322_GET(x)                                               (((x) & EFUSE_INTF0_R_322_MASK) >> EFUSE_INTF0_R_322_LSB)
#define EFUSE_INTF0_R_322_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_322_LSB) & EFUSE_INTF0_R_322_MASK)
#define EFUSE_INTF0_R_322_RESET                                                0x0
#define EFUSE_INTF0_322_ADDRESS                                                (0xd08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_322_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_322_RESET                                                  0x0

// 0xd0c (EFUSE_INTF0_323)
#define EFUSE_INTF0_R_323_LSB                                                  0
#define EFUSE_INTF0_R_323_MSB                                                  31
#define EFUSE_INTF0_R_323_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_323_GET(x)                                               (((x) & EFUSE_INTF0_R_323_MASK) >> EFUSE_INTF0_R_323_LSB)
#define EFUSE_INTF0_R_323_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_323_LSB) & EFUSE_INTF0_R_323_MASK)
#define EFUSE_INTF0_R_323_RESET                                                0x0
#define EFUSE_INTF0_323_ADDRESS                                                (0xd0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_323_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_323_RESET                                                  0x0

// 0xd10 (EFUSE_INTF0_324)
#define EFUSE_INTF0_R_324_LSB                                                  0
#define EFUSE_INTF0_R_324_MSB                                                  31
#define EFUSE_INTF0_R_324_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_324_GET(x)                                               (((x) & EFUSE_INTF0_R_324_MASK) >> EFUSE_INTF0_R_324_LSB)
#define EFUSE_INTF0_R_324_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_324_LSB) & EFUSE_INTF0_R_324_MASK)
#define EFUSE_INTF0_R_324_RESET                                                0x0
#define EFUSE_INTF0_324_ADDRESS                                                (0xd10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_324_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_324_RESET                                                  0x0

// 0xd14 (EFUSE_INTF0_325)
#define EFUSE_INTF0_R_325_LSB                                                  0
#define EFUSE_INTF0_R_325_MSB                                                  31
#define EFUSE_INTF0_R_325_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_325_GET(x)                                               (((x) & EFUSE_INTF0_R_325_MASK) >> EFUSE_INTF0_R_325_LSB)
#define EFUSE_INTF0_R_325_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_325_LSB) & EFUSE_INTF0_R_325_MASK)
#define EFUSE_INTF0_R_325_RESET                                                0x0
#define EFUSE_INTF0_325_ADDRESS                                                (0xd14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_325_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_325_RESET                                                  0x0

// 0xd18 (EFUSE_INTF0_326)
#define EFUSE_INTF0_R_326_LSB                                                  0
#define EFUSE_INTF0_R_326_MSB                                                  31
#define EFUSE_INTF0_R_326_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_326_GET(x)                                               (((x) & EFUSE_INTF0_R_326_MASK) >> EFUSE_INTF0_R_326_LSB)
#define EFUSE_INTF0_R_326_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_326_LSB) & EFUSE_INTF0_R_326_MASK)
#define EFUSE_INTF0_R_326_RESET                                                0x0
#define EFUSE_INTF0_326_ADDRESS                                                (0xd18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_326_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_326_RESET                                                  0x0

// 0xd1c (EFUSE_INTF0_327)
#define EFUSE_INTF0_R_327_LSB                                                  0
#define EFUSE_INTF0_R_327_MSB                                                  31
#define EFUSE_INTF0_R_327_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_327_GET(x)                                               (((x) & EFUSE_INTF0_R_327_MASK) >> EFUSE_INTF0_R_327_LSB)
#define EFUSE_INTF0_R_327_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_327_LSB) & EFUSE_INTF0_R_327_MASK)
#define EFUSE_INTF0_R_327_RESET                                                0x0
#define EFUSE_INTF0_327_ADDRESS                                                (0xd1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_327_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_327_RESET                                                  0x0

// 0xd20 (EFUSE_INTF0_328)
#define EFUSE_INTF0_R_328_LSB                                                  0
#define EFUSE_INTF0_R_328_MSB                                                  31
#define EFUSE_INTF0_R_328_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_328_GET(x)                                               (((x) & EFUSE_INTF0_R_328_MASK) >> EFUSE_INTF0_R_328_LSB)
#define EFUSE_INTF0_R_328_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_328_LSB) & EFUSE_INTF0_R_328_MASK)
#define EFUSE_INTF0_R_328_RESET                                                0x0
#define EFUSE_INTF0_328_ADDRESS                                                (0xd20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_328_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_328_RESET                                                  0x0

// 0xd24 (EFUSE_INTF0_329)
#define EFUSE_INTF0_R_329_LSB                                                  0
#define EFUSE_INTF0_R_329_MSB                                                  31
#define EFUSE_INTF0_R_329_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_329_GET(x)                                               (((x) & EFUSE_INTF0_R_329_MASK) >> EFUSE_INTF0_R_329_LSB)
#define EFUSE_INTF0_R_329_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_329_LSB) & EFUSE_INTF0_R_329_MASK)
#define EFUSE_INTF0_R_329_RESET                                                0x0
#define EFUSE_INTF0_329_ADDRESS                                                (0xd24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_329_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_329_RESET                                                  0x0

// 0xd28 (EFUSE_INTF0_330)
#define EFUSE_INTF0_R_330_LSB                                                  0
#define EFUSE_INTF0_R_330_MSB                                                  31
#define EFUSE_INTF0_R_330_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_330_GET(x)                                               (((x) & EFUSE_INTF0_R_330_MASK) >> EFUSE_INTF0_R_330_LSB)
#define EFUSE_INTF0_R_330_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_330_LSB) & EFUSE_INTF0_R_330_MASK)
#define EFUSE_INTF0_R_330_RESET                                                0x0
#define EFUSE_INTF0_330_ADDRESS                                                (0xd28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_330_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_330_RESET                                                  0x0

// 0xd2c (EFUSE_INTF0_331)
#define EFUSE_INTF0_R_331_LSB                                                  0
#define EFUSE_INTF0_R_331_MSB                                                  31
#define EFUSE_INTF0_R_331_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_331_GET(x)                                               (((x) & EFUSE_INTF0_R_331_MASK) >> EFUSE_INTF0_R_331_LSB)
#define EFUSE_INTF0_R_331_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_331_LSB) & EFUSE_INTF0_R_331_MASK)
#define EFUSE_INTF0_R_331_RESET                                                0x0
#define EFUSE_INTF0_331_ADDRESS                                                (0xd2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_331_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_331_RESET                                                  0x0

// 0xd30 (EFUSE_INTF0_332)
#define EFUSE_INTF0_R_332_LSB                                                  0
#define EFUSE_INTF0_R_332_MSB                                                  31
#define EFUSE_INTF0_R_332_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_332_GET(x)                                               (((x) & EFUSE_INTF0_R_332_MASK) >> EFUSE_INTF0_R_332_LSB)
#define EFUSE_INTF0_R_332_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_332_LSB) & EFUSE_INTF0_R_332_MASK)
#define EFUSE_INTF0_R_332_RESET                                                0x0
#define EFUSE_INTF0_332_ADDRESS                                                (0xd30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_332_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_332_RESET                                                  0x0

// 0xd34 (EFUSE_INTF0_333)
#define EFUSE_INTF0_R_333_LSB                                                  0
#define EFUSE_INTF0_R_333_MSB                                                  31
#define EFUSE_INTF0_R_333_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_333_GET(x)                                               (((x) & EFUSE_INTF0_R_333_MASK) >> EFUSE_INTF0_R_333_LSB)
#define EFUSE_INTF0_R_333_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_333_LSB) & EFUSE_INTF0_R_333_MASK)
#define EFUSE_INTF0_R_333_RESET                                                0x0
#define EFUSE_INTF0_333_ADDRESS                                                (0xd34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_333_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_333_RESET                                                  0x0

// 0xd38 (EFUSE_INTF0_334)
#define EFUSE_INTF0_R_334_LSB                                                  0
#define EFUSE_INTF0_R_334_MSB                                                  31
#define EFUSE_INTF0_R_334_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_334_GET(x)                                               (((x) & EFUSE_INTF0_R_334_MASK) >> EFUSE_INTF0_R_334_LSB)
#define EFUSE_INTF0_R_334_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_334_LSB) & EFUSE_INTF0_R_334_MASK)
#define EFUSE_INTF0_R_334_RESET                                                0x0
#define EFUSE_INTF0_334_ADDRESS                                                (0xd38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_334_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_334_RESET                                                  0x0

// 0xd3c (EFUSE_INTF0_335)
#define EFUSE_INTF0_R_335_LSB                                                  0
#define EFUSE_INTF0_R_335_MSB                                                  31
#define EFUSE_INTF0_R_335_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_335_GET(x)                                               (((x) & EFUSE_INTF0_R_335_MASK) >> EFUSE_INTF0_R_335_LSB)
#define EFUSE_INTF0_R_335_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_335_LSB) & EFUSE_INTF0_R_335_MASK)
#define EFUSE_INTF0_R_335_RESET                                                0x0
#define EFUSE_INTF0_335_ADDRESS                                                (0xd3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_335_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_335_RESET                                                  0x0

// 0xd40 (EFUSE_INTF0_336)
#define EFUSE_INTF0_R_336_LSB                                                  0
#define EFUSE_INTF0_R_336_MSB                                                  31
#define EFUSE_INTF0_R_336_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_336_GET(x)                                               (((x) & EFUSE_INTF0_R_336_MASK) >> EFUSE_INTF0_R_336_LSB)
#define EFUSE_INTF0_R_336_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_336_LSB) & EFUSE_INTF0_R_336_MASK)
#define EFUSE_INTF0_R_336_RESET                                                0x0
#define EFUSE_INTF0_336_ADDRESS                                                (0xd40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_336_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_336_RESET                                                  0x0

// 0xd44 (EFUSE_INTF0_337)
#define EFUSE_INTF0_R_337_LSB                                                  0
#define EFUSE_INTF0_R_337_MSB                                                  31
#define EFUSE_INTF0_R_337_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_337_GET(x)                                               (((x) & EFUSE_INTF0_R_337_MASK) >> EFUSE_INTF0_R_337_LSB)
#define EFUSE_INTF0_R_337_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_337_LSB) & EFUSE_INTF0_R_337_MASK)
#define EFUSE_INTF0_R_337_RESET                                                0x0
#define EFUSE_INTF0_337_ADDRESS                                                (0xd44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_337_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_337_RESET                                                  0x0

// 0xd48 (EFUSE_INTF0_338)
#define EFUSE_INTF0_R_338_LSB                                                  0
#define EFUSE_INTF0_R_338_MSB                                                  31
#define EFUSE_INTF0_R_338_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_338_GET(x)                                               (((x) & EFUSE_INTF0_R_338_MASK) >> EFUSE_INTF0_R_338_LSB)
#define EFUSE_INTF0_R_338_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_338_LSB) & EFUSE_INTF0_R_338_MASK)
#define EFUSE_INTF0_R_338_RESET                                                0x0
#define EFUSE_INTF0_338_ADDRESS                                                (0xd48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_338_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_338_RESET                                                  0x0

// 0xd4c (EFUSE_INTF0_339)
#define EFUSE_INTF0_R_339_LSB                                                  0
#define EFUSE_INTF0_R_339_MSB                                                  31
#define EFUSE_INTF0_R_339_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_339_GET(x)                                               (((x) & EFUSE_INTF0_R_339_MASK) >> EFUSE_INTF0_R_339_LSB)
#define EFUSE_INTF0_R_339_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_339_LSB) & EFUSE_INTF0_R_339_MASK)
#define EFUSE_INTF0_R_339_RESET                                                0x0
#define EFUSE_INTF0_339_ADDRESS                                                (0xd4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_339_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_339_RESET                                                  0x0

// 0xd50 (EFUSE_INTF0_340)
#define EFUSE_INTF0_R_340_LSB                                                  0
#define EFUSE_INTF0_R_340_MSB                                                  31
#define EFUSE_INTF0_R_340_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_340_GET(x)                                               (((x) & EFUSE_INTF0_R_340_MASK) >> EFUSE_INTF0_R_340_LSB)
#define EFUSE_INTF0_R_340_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_340_LSB) & EFUSE_INTF0_R_340_MASK)
#define EFUSE_INTF0_R_340_RESET                                                0x0
#define EFUSE_INTF0_340_ADDRESS                                                (0xd50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_340_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_340_RESET                                                  0x0

// 0xd54 (EFUSE_INTF0_341)
#define EFUSE_INTF0_R_341_LSB                                                  0
#define EFUSE_INTF0_R_341_MSB                                                  31
#define EFUSE_INTF0_R_341_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_341_GET(x)                                               (((x) & EFUSE_INTF0_R_341_MASK) >> EFUSE_INTF0_R_341_LSB)
#define EFUSE_INTF0_R_341_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_341_LSB) & EFUSE_INTF0_R_341_MASK)
#define EFUSE_INTF0_R_341_RESET                                                0x0
#define EFUSE_INTF0_341_ADDRESS                                                (0xd54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_341_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_341_RESET                                                  0x0

// 0xd58 (EFUSE_INTF0_342)
#define EFUSE_INTF0_R_342_LSB                                                  0
#define EFUSE_INTF0_R_342_MSB                                                  31
#define EFUSE_INTF0_R_342_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_342_GET(x)                                               (((x) & EFUSE_INTF0_R_342_MASK) >> EFUSE_INTF0_R_342_LSB)
#define EFUSE_INTF0_R_342_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_342_LSB) & EFUSE_INTF0_R_342_MASK)
#define EFUSE_INTF0_R_342_RESET                                                0x0
#define EFUSE_INTF0_342_ADDRESS                                                (0xd58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_342_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_342_RESET                                                  0x0

// 0xd5c (EFUSE_INTF0_343)
#define EFUSE_INTF0_R_343_LSB                                                  0
#define EFUSE_INTF0_R_343_MSB                                                  31
#define EFUSE_INTF0_R_343_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_343_GET(x)                                               (((x) & EFUSE_INTF0_R_343_MASK) >> EFUSE_INTF0_R_343_LSB)
#define EFUSE_INTF0_R_343_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_343_LSB) & EFUSE_INTF0_R_343_MASK)
#define EFUSE_INTF0_R_343_RESET                                                0x0
#define EFUSE_INTF0_343_ADDRESS                                                (0xd5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_343_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_343_RESET                                                  0x0

// 0xd60 (EFUSE_INTF0_344)
#define EFUSE_INTF0_R_344_LSB                                                  0
#define EFUSE_INTF0_R_344_MSB                                                  31
#define EFUSE_INTF0_R_344_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_344_GET(x)                                               (((x) & EFUSE_INTF0_R_344_MASK) >> EFUSE_INTF0_R_344_LSB)
#define EFUSE_INTF0_R_344_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_344_LSB) & EFUSE_INTF0_R_344_MASK)
#define EFUSE_INTF0_R_344_RESET                                                0x0
#define EFUSE_INTF0_344_ADDRESS                                                (0xd60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_344_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_344_RESET                                                  0x0

// 0xd64 (EFUSE_INTF0_345)
#define EFUSE_INTF0_R_345_LSB                                                  0
#define EFUSE_INTF0_R_345_MSB                                                  31
#define EFUSE_INTF0_R_345_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_345_GET(x)                                               (((x) & EFUSE_INTF0_R_345_MASK) >> EFUSE_INTF0_R_345_LSB)
#define EFUSE_INTF0_R_345_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_345_LSB) & EFUSE_INTF0_R_345_MASK)
#define EFUSE_INTF0_R_345_RESET                                                0x0
#define EFUSE_INTF0_345_ADDRESS                                                (0xd64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_345_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_345_RESET                                                  0x0

// 0xd68 (EFUSE_INTF0_346)
#define EFUSE_INTF0_R_346_LSB                                                  0
#define EFUSE_INTF0_R_346_MSB                                                  31
#define EFUSE_INTF0_R_346_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_346_GET(x)                                               (((x) & EFUSE_INTF0_R_346_MASK) >> EFUSE_INTF0_R_346_LSB)
#define EFUSE_INTF0_R_346_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_346_LSB) & EFUSE_INTF0_R_346_MASK)
#define EFUSE_INTF0_R_346_RESET                                                0x0
#define EFUSE_INTF0_346_ADDRESS                                                (0xd68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_346_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_346_RESET                                                  0x0

// 0xd6c (EFUSE_INTF0_347)
#define EFUSE_INTF0_R_347_LSB                                                  0
#define EFUSE_INTF0_R_347_MSB                                                  31
#define EFUSE_INTF0_R_347_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_347_GET(x)                                               (((x) & EFUSE_INTF0_R_347_MASK) >> EFUSE_INTF0_R_347_LSB)
#define EFUSE_INTF0_R_347_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_347_LSB) & EFUSE_INTF0_R_347_MASK)
#define EFUSE_INTF0_R_347_RESET                                                0x0
#define EFUSE_INTF0_347_ADDRESS                                                (0xd6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_347_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_347_RESET                                                  0x0

// 0xd70 (EFUSE_INTF0_348)
#define EFUSE_INTF0_R_348_LSB                                                  0
#define EFUSE_INTF0_R_348_MSB                                                  31
#define EFUSE_INTF0_R_348_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_348_GET(x)                                               (((x) & EFUSE_INTF0_R_348_MASK) >> EFUSE_INTF0_R_348_LSB)
#define EFUSE_INTF0_R_348_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_348_LSB) & EFUSE_INTF0_R_348_MASK)
#define EFUSE_INTF0_R_348_RESET                                                0x0
#define EFUSE_INTF0_348_ADDRESS                                                (0xd70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_348_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_348_RESET                                                  0x0

// 0xd74 (EFUSE_INTF0_349)
#define EFUSE_INTF0_R_349_LSB                                                  0
#define EFUSE_INTF0_R_349_MSB                                                  31
#define EFUSE_INTF0_R_349_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_349_GET(x)                                               (((x) & EFUSE_INTF0_R_349_MASK) >> EFUSE_INTF0_R_349_LSB)
#define EFUSE_INTF0_R_349_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_349_LSB) & EFUSE_INTF0_R_349_MASK)
#define EFUSE_INTF0_R_349_RESET                                                0x0
#define EFUSE_INTF0_349_ADDRESS                                                (0xd74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_349_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_349_RESET                                                  0x0

// 0xd78 (EFUSE_INTF0_350)
#define EFUSE_INTF0_R_350_LSB                                                  0
#define EFUSE_INTF0_R_350_MSB                                                  31
#define EFUSE_INTF0_R_350_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_350_GET(x)                                               (((x) & EFUSE_INTF0_R_350_MASK) >> EFUSE_INTF0_R_350_LSB)
#define EFUSE_INTF0_R_350_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_350_LSB) & EFUSE_INTF0_R_350_MASK)
#define EFUSE_INTF0_R_350_RESET                                                0x0
#define EFUSE_INTF0_350_ADDRESS                                                (0xd78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_350_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_350_RESET                                                  0x0

// 0xd7c (EFUSE_INTF0_351)
#define EFUSE_INTF0_R_351_LSB                                                  0
#define EFUSE_INTF0_R_351_MSB                                                  31
#define EFUSE_INTF0_R_351_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_351_GET(x)                                               (((x) & EFUSE_INTF0_R_351_MASK) >> EFUSE_INTF0_R_351_LSB)
#define EFUSE_INTF0_R_351_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_351_LSB) & EFUSE_INTF0_R_351_MASK)
#define EFUSE_INTF0_R_351_RESET                                                0x0
#define EFUSE_INTF0_351_ADDRESS                                                (0xd7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_351_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_351_RESET                                                  0x0

// 0xd80 (EFUSE_INTF0_352)
#define EFUSE_INTF0_R_352_LSB                                                  0
#define EFUSE_INTF0_R_352_MSB                                                  31
#define EFUSE_INTF0_R_352_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_352_GET(x)                                               (((x) & EFUSE_INTF0_R_352_MASK) >> EFUSE_INTF0_R_352_LSB)
#define EFUSE_INTF0_R_352_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_352_LSB) & EFUSE_INTF0_R_352_MASK)
#define EFUSE_INTF0_R_352_RESET                                                0x0
#define EFUSE_INTF0_352_ADDRESS                                                (0xd80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_352_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_352_RESET                                                  0x0

// 0xd84 (EFUSE_INTF0_353)
#define EFUSE_INTF0_R_353_LSB                                                  0
#define EFUSE_INTF0_R_353_MSB                                                  31
#define EFUSE_INTF0_R_353_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_353_GET(x)                                               (((x) & EFUSE_INTF0_R_353_MASK) >> EFUSE_INTF0_R_353_LSB)
#define EFUSE_INTF0_R_353_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_353_LSB) & EFUSE_INTF0_R_353_MASK)
#define EFUSE_INTF0_R_353_RESET                                                0x0
#define EFUSE_INTF0_353_ADDRESS                                                (0xd84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_353_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_353_RESET                                                  0x0

// 0xd88 (EFUSE_INTF0_354)
#define EFUSE_INTF0_R_354_LSB                                                  0
#define EFUSE_INTF0_R_354_MSB                                                  31
#define EFUSE_INTF0_R_354_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_354_GET(x)                                               (((x) & EFUSE_INTF0_R_354_MASK) >> EFUSE_INTF0_R_354_LSB)
#define EFUSE_INTF0_R_354_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_354_LSB) & EFUSE_INTF0_R_354_MASK)
#define EFUSE_INTF0_R_354_RESET                                                0x0
#define EFUSE_INTF0_354_ADDRESS                                                (0xd88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_354_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_354_RESET                                                  0x0

// 0xd8c (EFUSE_INTF0_355)
#define EFUSE_INTF0_R_355_LSB                                                  0
#define EFUSE_INTF0_R_355_MSB                                                  31
#define EFUSE_INTF0_R_355_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_355_GET(x)                                               (((x) & EFUSE_INTF0_R_355_MASK) >> EFUSE_INTF0_R_355_LSB)
#define EFUSE_INTF0_R_355_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_355_LSB) & EFUSE_INTF0_R_355_MASK)
#define EFUSE_INTF0_R_355_RESET                                                0x0
#define EFUSE_INTF0_355_ADDRESS                                                (0xd8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_355_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_355_RESET                                                  0x0

// 0xd90 (EFUSE_INTF0_356)
#define EFUSE_INTF0_R_356_LSB                                                  0
#define EFUSE_INTF0_R_356_MSB                                                  31
#define EFUSE_INTF0_R_356_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_356_GET(x)                                               (((x) & EFUSE_INTF0_R_356_MASK) >> EFUSE_INTF0_R_356_LSB)
#define EFUSE_INTF0_R_356_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_356_LSB) & EFUSE_INTF0_R_356_MASK)
#define EFUSE_INTF0_R_356_RESET                                                0x0
#define EFUSE_INTF0_356_ADDRESS                                                (0xd90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_356_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_356_RESET                                                  0x0

// 0xd94 (EFUSE_INTF0_357)
#define EFUSE_INTF0_R_357_LSB                                                  0
#define EFUSE_INTF0_R_357_MSB                                                  31
#define EFUSE_INTF0_R_357_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_357_GET(x)                                               (((x) & EFUSE_INTF0_R_357_MASK) >> EFUSE_INTF0_R_357_LSB)
#define EFUSE_INTF0_R_357_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_357_LSB) & EFUSE_INTF0_R_357_MASK)
#define EFUSE_INTF0_R_357_RESET                                                0x0
#define EFUSE_INTF0_357_ADDRESS                                                (0xd94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_357_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_357_RESET                                                  0x0

// 0xd98 (EFUSE_INTF0_358)
#define EFUSE_INTF0_R_358_LSB                                                  0
#define EFUSE_INTF0_R_358_MSB                                                  31
#define EFUSE_INTF0_R_358_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_358_GET(x)                                               (((x) & EFUSE_INTF0_R_358_MASK) >> EFUSE_INTF0_R_358_LSB)
#define EFUSE_INTF0_R_358_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_358_LSB) & EFUSE_INTF0_R_358_MASK)
#define EFUSE_INTF0_R_358_RESET                                                0x0
#define EFUSE_INTF0_358_ADDRESS                                                (0xd98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_358_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_358_RESET                                                  0x0

// 0xd9c (EFUSE_INTF0_359)
#define EFUSE_INTF0_R_359_LSB                                                  0
#define EFUSE_INTF0_R_359_MSB                                                  31
#define EFUSE_INTF0_R_359_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_359_GET(x)                                               (((x) & EFUSE_INTF0_R_359_MASK) >> EFUSE_INTF0_R_359_LSB)
#define EFUSE_INTF0_R_359_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_359_LSB) & EFUSE_INTF0_R_359_MASK)
#define EFUSE_INTF0_R_359_RESET                                                0x0
#define EFUSE_INTF0_359_ADDRESS                                                (0xd9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_359_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_359_RESET                                                  0x0

// 0xda0 (EFUSE_INTF0_360)
#define EFUSE_INTF0_R_360_LSB                                                  0
#define EFUSE_INTF0_R_360_MSB                                                  31
#define EFUSE_INTF0_R_360_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_360_GET(x)                                               (((x) & EFUSE_INTF0_R_360_MASK) >> EFUSE_INTF0_R_360_LSB)
#define EFUSE_INTF0_R_360_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_360_LSB) & EFUSE_INTF0_R_360_MASK)
#define EFUSE_INTF0_R_360_RESET                                                0x0
#define EFUSE_INTF0_360_ADDRESS                                                (0xda0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_360_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_360_RESET                                                  0x0

// 0xda4 (EFUSE_INTF0_361)
#define EFUSE_INTF0_R_361_LSB                                                  0
#define EFUSE_INTF0_R_361_MSB                                                  31
#define EFUSE_INTF0_R_361_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_361_GET(x)                                               (((x) & EFUSE_INTF0_R_361_MASK) >> EFUSE_INTF0_R_361_LSB)
#define EFUSE_INTF0_R_361_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_361_LSB) & EFUSE_INTF0_R_361_MASK)
#define EFUSE_INTF0_R_361_RESET                                                0x0
#define EFUSE_INTF0_361_ADDRESS                                                (0xda4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_361_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_361_RESET                                                  0x0

// 0xda8 (EFUSE_INTF0_362)
#define EFUSE_INTF0_R_362_LSB                                                  0
#define EFUSE_INTF0_R_362_MSB                                                  31
#define EFUSE_INTF0_R_362_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_362_GET(x)                                               (((x) & EFUSE_INTF0_R_362_MASK) >> EFUSE_INTF0_R_362_LSB)
#define EFUSE_INTF0_R_362_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_362_LSB) & EFUSE_INTF0_R_362_MASK)
#define EFUSE_INTF0_R_362_RESET                                                0x0
#define EFUSE_INTF0_362_ADDRESS                                                (0xda8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_362_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_362_RESET                                                  0x0

// 0xdac (EFUSE_INTF0_363)
#define EFUSE_INTF0_R_363_LSB                                                  0
#define EFUSE_INTF0_R_363_MSB                                                  31
#define EFUSE_INTF0_R_363_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_363_GET(x)                                               (((x) & EFUSE_INTF0_R_363_MASK) >> EFUSE_INTF0_R_363_LSB)
#define EFUSE_INTF0_R_363_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_363_LSB) & EFUSE_INTF0_R_363_MASK)
#define EFUSE_INTF0_R_363_RESET                                                0x0
#define EFUSE_INTF0_363_ADDRESS                                                (0xdac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_363_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_363_RESET                                                  0x0

// 0xdb0 (EFUSE_INTF0_364)
#define EFUSE_INTF0_R_364_LSB                                                  0
#define EFUSE_INTF0_R_364_MSB                                                  31
#define EFUSE_INTF0_R_364_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_364_GET(x)                                               (((x) & EFUSE_INTF0_R_364_MASK) >> EFUSE_INTF0_R_364_LSB)
#define EFUSE_INTF0_R_364_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_364_LSB) & EFUSE_INTF0_R_364_MASK)
#define EFUSE_INTF0_R_364_RESET                                                0x0
#define EFUSE_INTF0_364_ADDRESS                                                (0xdb0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_364_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_364_RESET                                                  0x0

// 0xdb4 (EFUSE_INTF0_365)
#define EFUSE_INTF0_R_365_LSB                                                  0
#define EFUSE_INTF0_R_365_MSB                                                  31
#define EFUSE_INTF0_R_365_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_365_GET(x)                                               (((x) & EFUSE_INTF0_R_365_MASK) >> EFUSE_INTF0_R_365_LSB)
#define EFUSE_INTF0_R_365_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_365_LSB) & EFUSE_INTF0_R_365_MASK)
#define EFUSE_INTF0_R_365_RESET                                                0x0
#define EFUSE_INTF0_365_ADDRESS                                                (0xdb4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_365_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_365_RESET                                                  0x0

// 0xdb8 (EFUSE_INTF0_366)
#define EFUSE_INTF0_R_366_LSB                                                  0
#define EFUSE_INTF0_R_366_MSB                                                  31
#define EFUSE_INTF0_R_366_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_366_GET(x)                                               (((x) & EFUSE_INTF0_R_366_MASK) >> EFUSE_INTF0_R_366_LSB)
#define EFUSE_INTF0_R_366_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_366_LSB) & EFUSE_INTF0_R_366_MASK)
#define EFUSE_INTF0_R_366_RESET                                                0x0
#define EFUSE_INTF0_366_ADDRESS                                                (0xdb8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_366_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_366_RESET                                                  0x0

// 0xdbc (EFUSE_INTF0_367)
#define EFUSE_INTF0_R_367_LSB                                                  0
#define EFUSE_INTF0_R_367_MSB                                                  31
#define EFUSE_INTF0_R_367_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_367_GET(x)                                               (((x) & EFUSE_INTF0_R_367_MASK) >> EFUSE_INTF0_R_367_LSB)
#define EFUSE_INTF0_R_367_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_367_LSB) & EFUSE_INTF0_R_367_MASK)
#define EFUSE_INTF0_R_367_RESET                                                0x0
#define EFUSE_INTF0_367_ADDRESS                                                (0xdbc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_367_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_367_RESET                                                  0x0

// 0xdc0 (EFUSE_INTF0_368)
#define EFUSE_INTF0_R_368_LSB                                                  0
#define EFUSE_INTF0_R_368_MSB                                                  31
#define EFUSE_INTF0_R_368_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_368_GET(x)                                               (((x) & EFUSE_INTF0_R_368_MASK) >> EFUSE_INTF0_R_368_LSB)
#define EFUSE_INTF0_R_368_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_368_LSB) & EFUSE_INTF0_R_368_MASK)
#define EFUSE_INTF0_R_368_RESET                                                0x0
#define EFUSE_INTF0_368_ADDRESS                                                (0xdc0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_368_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_368_RESET                                                  0x0

// 0xdc4 (EFUSE_INTF0_369)
#define EFUSE_INTF0_R_369_LSB                                                  0
#define EFUSE_INTF0_R_369_MSB                                                  31
#define EFUSE_INTF0_R_369_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_369_GET(x)                                               (((x) & EFUSE_INTF0_R_369_MASK) >> EFUSE_INTF0_R_369_LSB)
#define EFUSE_INTF0_R_369_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_369_LSB) & EFUSE_INTF0_R_369_MASK)
#define EFUSE_INTF0_R_369_RESET                                                0x0
#define EFUSE_INTF0_369_ADDRESS                                                (0xdc4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_369_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_369_RESET                                                  0x0

// 0xdc8 (EFUSE_INTF0_370)
#define EFUSE_INTF0_R_370_LSB                                                  0
#define EFUSE_INTF0_R_370_MSB                                                  31
#define EFUSE_INTF0_R_370_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_370_GET(x)                                               (((x) & EFUSE_INTF0_R_370_MASK) >> EFUSE_INTF0_R_370_LSB)
#define EFUSE_INTF0_R_370_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_370_LSB) & EFUSE_INTF0_R_370_MASK)
#define EFUSE_INTF0_R_370_RESET                                                0x0
#define EFUSE_INTF0_370_ADDRESS                                                (0xdc8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_370_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_370_RESET                                                  0x0

// 0xdcc (EFUSE_INTF0_371)
#define EFUSE_INTF0_R_371_LSB                                                  0
#define EFUSE_INTF0_R_371_MSB                                                  31
#define EFUSE_INTF0_R_371_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_371_GET(x)                                               (((x) & EFUSE_INTF0_R_371_MASK) >> EFUSE_INTF0_R_371_LSB)
#define EFUSE_INTF0_R_371_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_371_LSB) & EFUSE_INTF0_R_371_MASK)
#define EFUSE_INTF0_R_371_RESET                                                0x0
#define EFUSE_INTF0_371_ADDRESS                                                (0xdcc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_371_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_371_RESET                                                  0x0

// 0xdd0 (EFUSE_INTF0_372)
#define EFUSE_INTF0_R_372_LSB                                                  0
#define EFUSE_INTF0_R_372_MSB                                                  31
#define EFUSE_INTF0_R_372_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_372_GET(x)                                               (((x) & EFUSE_INTF0_R_372_MASK) >> EFUSE_INTF0_R_372_LSB)
#define EFUSE_INTF0_R_372_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_372_LSB) & EFUSE_INTF0_R_372_MASK)
#define EFUSE_INTF0_R_372_RESET                                                0x0
#define EFUSE_INTF0_372_ADDRESS                                                (0xdd0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_372_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_372_RESET                                                  0x0

// 0xdd4 (EFUSE_INTF0_373)
#define EFUSE_INTF0_R_373_LSB                                                  0
#define EFUSE_INTF0_R_373_MSB                                                  31
#define EFUSE_INTF0_R_373_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_373_GET(x)                                               (((x) & EFUSE_INTF0_R_373_MASK) >> EFUSE_INTF0_R_373_LSB)
#define EFUSE_INTF0_R_373_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_373_LSB) & EFUSE_INTF0_R_373_MASK)
#define EFUSE_INTF0_R_373_RESET                                                0x0
#define EFUSE_INTF0_373_ADDRESS                                                (0xdd4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_373_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_373_RESET                                                  0x0

// 0xdd8 (EFUSE_INTF0_374)
#define EFUSE_INTF0_R_374_LSB                                                  0
#define EFUSE_INTF0_R_374_MSB                                                  31
#define EFUSE_INTF0_R_374_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_374_GET(x)                                               (((x) & EFUSE_INTF0_R_374_MASK) >> EFUSE_INTF0_R_374_LSB)
#define EFUSE_INTF0_R_374_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_374_LSB) & EFUSE_INTF0_R_374_MASK)
#define EFUSE_INTF0_R_374_RESET                                                0x0
#define EFUSE_INTF0_374_ADDRESS                                                (0xdd8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_374_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_374_RESET                                                  0x0

// 0xddc (EFUSE_INTF0_375)
#define EFUSE_INTF0_R_375_LSB                                                  0
#define EFUSE_INTF0_R_375_MSB                                                  31
#define EFUSE_INTF0_R_375_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_375_GET(x)                                               (((x) & EFUSE_INTF0_R_375_MASK) >> EFUSE_INTF0_R_375_LSB)
#define EFUSE_INTF0_R_375_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_375_LSB) & EFUSE_INTF0_R_375_MASK)
#define EFUSE_INTF0_R_375_RESET                                                0x0
#define EFUSE_INTF0_375_ADDRESS                                                (0xddc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_375_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_375_RESET                                                  0x0

// 0xde0 (EFUSE_INTF0_376)
#define EFUSE_INTF0_R_376_LSB                                                  0
#define EFUSE_INTF0_R_376_MSB                                                  31
#define EFUSE_INTF0_R_376_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_376_GET(x)                                               (((x) & EFUSE_INTF0_R_376_MASK) >> EFUSE_INTF0_R_376_LSB)
#define EFUSE_INTF0_R_376_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_376_LSB) & EFUSE_INTF0_R_376_MASK)
#define EFUSE_INTF0_R_376_RESET                                                0x0
#define EFUSE_INTF0_376_ADDRESS                                                (0xde0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_376_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_376_RESET                                                  0x0

// 0xde4 (EFUSE_INTF0_377)
#define EFUSE_INTF0_R_377_LSB                                                  0
#define EFUSE_INTF0_R_377_MSB                                                  31
#define EFUSE_INTF0_R_377_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_377_GET(x)                                               (((x) & EFUSE_INTF0_R_377_MASK) >> EFUSE_INTF0_R_377_LSB)
#define EFUSE_INTF0_R_377_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_377_LSB) & EFUSE_INTF0_R_377_MASK)
#define EFUSE_INTF0_R_377_RESET                                                0x0
#define EFUSE_INTF0_377_ADDRESS                                                (0xde4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_377_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_377_RESET                                                  0x0

// 0xde8 (EFUSE_INTF0_378)
#define EFUSE_INTF0_R_378_LSB                                                  0
#define EFUSE_INTF0_R_378_MSB                                                  31
#define EFUSE_INTF0_R_378_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_378_GET(x)                                               (((x) & EFUSE_INTF0_R_378_MASK) >> EFUSE_INTF0_R_378_LSB)
#define EFUSE_INTF0_R_378_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_378_LSB) & EFUSE_INTF0_R_378_MASK)
#define EFUSE_INTF0_R_378_RESET                                                0x0
#define EFUSE_INTF0_378_ADDRESS                                                (0xde8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_378_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_378_RESET                                                  0x0

// 0xdec (EFUSE_INTF0_379)
#define EFUSE_INTF0_R_379_LSB                                                  0
#define EFUSE_INTF0_R_379_MSB                                                  31
#define EFUSE_INTF0_R_379_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_379_GET(x)                                               (((x) & EFUSE_INTF0_R_379_MASK) >> EFUSE_INTF0_R_379_LSB)
#define EFUSE_INTF0_R_379_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_379_LSB) & EFUSE_INTF0_R_379_MASK)
#define EFUSE_INTF0_R_379_RESET                                                0x0
#define EFUSE_INTF0_379_ADDRESS                                                (0xdec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_379_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_379_RESET                                                  0x0

// 0xdf0 (EFUSE_INTF0_380)
#define EFUSE_INTF0_R_380_LSB                                                  0
#define EFUSE_INTF0_R_380_MSB                                                  31
#define EFUSE_INTF0_R_380_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_380_GET(x)                                               (((x) & EFUSE_INTF0_R_380_MASK) >> EFUSE_INTF0_R_380_LSB)
#define EFUSE_INTF0_R_380_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_380_LSB) & EFUSE_INTF0_R_380_MASK)
#define EFUSE_INTF0_R_380_RESET                                                0x0
#define EFUSE_INTF0_380_ADDRESS                                                (0xdf0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_380_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_380_RESET                                                  0x0

// 0xdf4 (EFUSE_INTF0_381)
#define EFUSE_INTF0_R_381_LSB                                                  0
#define EFUSE_INTF0_R_381_MSB                                                  31
#define EFUSE_INTF0_R_381_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_381_GET(x)                                               (((x) & EFUSE_INTF0_R_381_MASK) >> EFUSE_INTF0_R_381_LSB)
#define EFUSE_INTF0_R_381_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_381_LSB) & EFUSE_INTF0_R_381_MASK)
#define EFUSE_INTF0_R_381_RESET                                                0x0
#define EFUSE_INTF0_381_ADDRESS                                                (0xdf4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_381_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_381_RESET                                                  0x0

// 0xdf8 (EFUSE_INTF0_382)
#define EFUSE_INTF0_R_382_LSB                                                  0
#define EFUSE_INTF0_R_382_MSB                                                  31
#define EFUSE_INTF0_R_382_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_382_GET(x)                                               (((x) & EFUSE_INTF0_R_382_MASK) >> EFUSE_INTF0_R_382_LSB)
#define EFUSE_INTF0_R_382_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_382_LSB) & EFUSE_INTF0_R_382_MASK)
#define EFUSE_INTF0_R_382_RESET                                                0x0
#define EFUSE_INTF0_382_ADDRESS                                                (0xdf8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_382_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_382_RESET                                                  0x0

// 0xdfc (EFUSE_INTF0_383)
#define EFUSE_INTF0_R_383_LSB                                                  0
#define EFUSE_INTF0_R_383_MSB                                                  31
#define EFUSE_INTF0_R_383_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_383_GET(x)                                               (((x) & EFUSE_INTF0_R_383_MASK) >> EFUSE_INTF0_R_383_LSB)
#define EFUSE_INTF0_R_383_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_383_LSB) & EFUSE_INTF0_R_383_MASK)
#define EFUSE_INTF0_R_383_RESET                                                0x0
#define EFUSE_INTF0_383_ADDRESS                                                (0xdfc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_383_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_383_RESET                                                  0x0

// 0xe00 (EFUSE_INTF0_384)
#define EFUSE_INTF0_R_384_LSB                                                  0
#define EFUSE_INTF0_R_384_MSB                                                  31
#define EFUSE_INTF0_R_384_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_384_GET(x)                                               (((x) & EFUSE_INTF0_R_384_MASK) >> EFUSE_INTF0_R_384_LSB)
#define EFUSE_INTF0_R_384_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_384_LSB) & EFUSE_INTF0_R_384_MASK)
#define EFUSE_INTF0_R_384_RESET                                                0x0
#define EFUSE_INTF0_384_ADDRESS                                                (0xe00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_384_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_384_RESET                                                  0x0

// 0xe04 (EFUSE_INTF0_385)
#define EFUSE_INTF0_R_385_LSB                                                  0
#define EFUSE_INTF0_R_385_MSB                                                  31
#define EFUSE_INTF0_R_385_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_385_GET(x)                                               (((x) & EFUSE_INTF0_R_385_MASK) >> EFUSE_INTF0_R_385_LSB)
#define EFUSE_INTF0_R_385_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_385_LSB) & EFUSE_INTF0_R_385_MASK)
#define EFUSE_INTF0_R_385_RESET                                                0x0
#define EFUSE_INTF0_385_ADDRESS                                                (0xe04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_385_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_385_RESET                                                  0x0

// 0xe08 (EFUSE_INTF0_386)
#define EFUSE_INTF0_R_386_LSB                                                  0
#define EFUSE_INTF0_R_386_MSB                                                  31
#define EFUSE_INTF0_R_386_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_386_GET(x)                                               (((x) & EFUSE_INTF0_R_386_MASK) >> EFUSE_INTF0_R_386_LSB)
#define EFUSE_INTF0_R_386_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_386_LSB) & EFUSE_INTF0_R_386_MASK)
#define EFUSE_INTF0_R_386_RESET                                                0x0
#define EFUSE_INTF0_386_ADDRESS                                                (0xe08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_386_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_386_RESET                                                  0x0

// 0xe0c (EFUSE_INTF0_387)
#define EFUSE_INTF0_R_387_LSB                                                  0
#define EFUSE_INTF0_R_387_MSB                                                  31
#define EFUSE_INTF0_R_387_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_387_GET(x)                                               (((x) & EFUSE_INTF0_R_387_MASK) >> EFUSE_INTF0_R_387_LSB)
#define EFUSE_INTF0_R_387_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_387_LSB) & EFUSE_INTF0_R_387_MASK)
#define EFUSE_INTF0_R_387_RESET                                                0x0
#define EFUSE_INTF0_387_ADDRESS                                                (0xe0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_387_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_387_RESET                                                  0x0

// 0xe10 (EFUSE_INTF0_388)
#define EFUSE_INTF0_R_388_LSB                                                  0
#define EFUSE_INTF0_R_388_MSB                                                  31
#define EFUSE_INTF0_R_388_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_388_GET(x)                                               (((x) & EFUSE_INTF0_R_388_MASK) >> EFUSE_INTF0_R_388_LSB)
#define EFUSE_INTF0_R_388_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_388_LSB) & EFUSE_INTF0_R_388_MASK)
#define EFUSE_INTF0_R_388_RESET                                                0x0
#define EFUSE_INTF0_388_ADDRESS                                                (0xe10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_388_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_388_RESET                                                  0x0

// 0xe14 (EFUSE_INTF0_389)
#define EFUSE_INTF0_R_389_LSB                                                  0
#define EFUSE_INTF0_R_389_MSB                                                  31
#define EFUSE_INTF0_R_389_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_389_GET(x)                                               (((x) & EFUSE_INTF0_R_389_MASK) >> EFUSE_INTF0_R_389_LSB)
#define EFUSE_INTF0_R_389_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_389_LSB) & EFUSE_INTF0_R_389_MASK)
#define EFUSE_INTF0_R_389_RESET                                                0x0
#define EFUSE_INTF0_389_ADDRESS                                                (0xe14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_389_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_389_RESET                                                  0x0

// 0xe18 (EFUSE_INTF0_390)
#define EFUSE_INTF0_R_390_LSB                                                  0
#define EFUSE_INTF0_R_390_MSB                                                  31
#define EFUSE_INTF0_R_390_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_390_GET(x)                                               (((x) & EFUSE_INTF0_R_390_MASK) >> EFUSE_INTF0_R_390_LSB)
#define EFUSE_INTF0_R_390_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_390_LSB) & EFUSE_INTF0_R_390_MASK)
#define EFUSE_INTF0_R_390_RESET                                                0x0
#define EFUSE_INTF0_390_ADDRESS                                                (0xe18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_390_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_390_RESET                                                  0x0

// 0xe1c (EFUSE_INTF0_391)
#define EFUSE_INTF0_R_391_LSB                                                  0
#define EFUSE_INTF0_R_391_MSB                                                  31
#define EFUSE_INTF0_R_391_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_391_GET(x)                                               (((x) & EFUSE_INTF0_R_391_MASK) >> EFUSE_INTF0_R_391_LSB)
#define EFUSE_INTF0_R_391_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_391_LSB) & EFUSE_INTF0_R_391_MASK)
#define EFUSE_INTF0_R_391_RESET                                                0x0
#define EFUSE_INTF0_391_ADDRESS                                                (0xe1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_391_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_391_RESET                                                  0x0

// 0xe20 (EFUSE_INTF0_392)
#define EFUSE_INTF0_R_392_LSB                                                  0
#define EFUSE_INTF0_R_392_MSB                                                  31
#define EFUSE_INTF0_R_392_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_392_GET(x)                                               (((x) & EFUSE_INTF0_R_392_MASK) >> EFUSE_INTF0_R_392_LSB)
#define EFUSE_INTF0_R_392_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_392_LSB) & EFUSE_INTF0_R_392_MASK)
#define EFUSE_INTF0_R_392_RESET                                                0x0
#define EFUSE_INTF0_392_ADDRESS                                                (0xe20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_392_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_392_RESET                                                  0x0

// 0xe24 (EFUSE_INTF0_393)
#define EFUSE_INTF0_R_393_LSB                                                  0
#define EFUSE_INTF0_R_393_MSB                                                  31
#define EFUSE_INTF0_R_393_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_393_GET(x)                                               (((x) & EFUSE_INTF0_R_393_MASK) >> EFUSE_INTF0_R_393_LSB)
#define EFUSE_INTF0_R_393_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_393_LSB) & EFUSE_INTF0_R_393_MASK)
#define EFUSE_INTF0_R_393_RESET                                                0x0
#define EFUSE_INTF0_393_ADDRESS                                                (0xe24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_393_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_393_RESET                                                  0x0

// 0xe28 (EFUSE_INTF0_394)
#define EFUSE_INTF0_R_394_LSB                                                  0
#define EFUSE_INTF0_R_394_MSB                                                  31
#define EFUSE_INTF0_R_394_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_394_GET(x)                                               (((x) & EFUSE_INTF0_R_394_MASK) >> EFUSE_INTF0_R_394_LSB)
#define EFUSE_INTF0_R_394_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_394_LSB) & EFUSE_INTF0_R_394_MASK)
#define EFUSE_INTF0_R_394_RESET                                                0x0
#define EFUSE_INTF0_394_ADDRESS                                                (0xe28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_394_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_394_RESET                                                  0x0

// 0xe2c (EFUSE_INTF0_395)
#define EFUSE_INTF0_R_395_LSB                                                  0
#define EFUSE_INTF0_R_395_MSB                                                  31
#define EFUSE_INTF0_R_395_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_395_GET(x)                                               (((x) & EFUSE_INTF0_R_395_MASK) >> EFUSE_INTF0_R_395_LSB)
#define EFUSE_INTF0_R_395_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_395_LSB) & EFUSE_INTF0_R_395_MASK)
#define EFUSE_INTF0_R_395_RESET                                                0x0
#define EFUSE_INTF0_395_ADDRESS                                                (0xe2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_395_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_395_RESET                                                  0x0

// 0xe30 (EFUSE_INTF0_396)
#define EFUSE_INTF0_R_396_LSB                                                  0
#define EFUSE_INTF0_R_396_MSB                                                  31
#define EFUSE_INTF0_R_396_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_396_GET(x)                                               (((x) & EFUSE_INTF0_R_396_MASK) >> EFUSE_INTF0_R_396_LSB)
#define EFUSE_INTF0_R_396_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_396_LSB) & EFUSE_INTF0_R_396_MASK)
#define EFUSE_INTF0_R_396_RESET                                                0x0
#define EFUSE_INTF0_396_ADDRESS                                                (0xe30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_396_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_396_RESET                                                  0x0

// 0xe34 (EFUSE_INTF0_397)
#define EFUSE_INTF0_R_397_LSB                                                  0
#define EFUSE_INTF0_R_397_MSB                                                  31
#define EFUSE_INTF0_R_397_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_397_GET(x)                                               (((x) & EFUSE_INTF0_R_397_MASK) >> EFUSE_INTF0_R_397_LSB)
#define EFUSE_INTF0_R_397_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_397_LSB) & EFUSE_INTF0_R_397_MASK)
#define EFUSE_INTF0_R_397_RESET                                                0x0
#define EFUSE_INTF0_397_ADDRESS                                                (0xe34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_397_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_397_RESET                                                  0x0

// 0xe38 (EFUSE_INTF0_398)
#define EFUSE_INTF0_R_398_LSB                                                  0
#define EFUSE_INTF0_R_398_MSB                                                  31
#define EFUSE_INTF0_R_398_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_398_GET(x)                                               (((x) & EFUSE_INTF0_R_398_MASK) >> EFUSE_INTF0_R_398_LSB)
#define EFUSE_INTF0_R_398_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_398_LSB) & EFUSE_INTF0_R_398_MASK)
#define EFUSE_INTF0_R_398_RESET                                                0x0
#define EFUSE_INTF0_398_ADDRESS                                                (0xe38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_398_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_398_RESET                                                  0x0

// 0xe3c (EFUSE_INTF0_399)
#define EFUSE_INTF0_R_399_LSB                                                  0
#define EFUSE_INTF0_R_399_MSB                                                  31
#define EFUSE_INTF0_R_399_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_399_GET(x)                                               (((x) & EFUSE_INTF0_R_399_MASK) >> EFUSE_INTF0_R_399_LSB)
#define EFUSE_INTF0_R_399_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_399_LSB) & EFUSE_INTF0_R_399_MASK)
#define EFUSE_INTF0_R_399_RESET                                                0x0
#define EFUSE_INTF0_399_ADDRESS                                                (0xe3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_399_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_399_RESET                                                  0x0

// 0xe40 (EFUSE_INTF0_400)
#define EFUSE_INTF0_R_400_LSB                                                  0
#define EFUSE_INTF0_R_400_MSB                                                  31
#define EFUSE_INTF0_R_400_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_400_GET(x)                                               (((x) & EFUSE_INTF0_R_400_MASK) >> EFUSE_INTF0_R_400_LSB)
#define EFUSE_INTF0_R_400_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_400_LSB) & EFUSE_INTF0_R_400_MASK)
#define EFUSE_INTF0_R_400_RESET                                                0x0
#define EFUSE_INTF0_400_ADDRESS                                                (0xe40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_400_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_400_RESET                                                  0x0

// 0xe44 (EFUSE_INTF0_401)
#define EFUSE_INTF0_R_401_LSB                                                  0
#define EFUSE_INTF0_R_401_MSB                                                  31
#define EFUSE_INTF0_R_401_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_401_GET(x)                                               (((x) & EFUSE_INTF0_R_401_MASK) >> EFUSE_INTF0_R_401_LSB)
#define EFUSE_INTF0_R_401_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_401_LSB) & EFUSE_INTF0_R_401_MASK)
#define EFUSE_INTF0_R_401_RESET                                                0x0
#define EFUSE_INTF0_401_ADDRESS                                                (0xe44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_401_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_401_RESET                                                  0x0

// 0xe48 (EFUSE_INTF0_402)
#define EFUSE_INTF0_R_402_LSB                                                  0
#define EFUSE_INTF0_R_402_MSB                                                  31
#define EFUSE_INTF0_R_402_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_402_GET(x)                                               (((x) & EFUSE_INTF0_R_402_MASK) >> EFUSE_INTF0_R_402_LSB)
#define EFUSE_INTF0_R_402_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_402_LSB) & EFUSE_INTF0_R_402_MASK)
#define EFUSE_INTF0_R_402_RESET                                                0x0
#define EFUSE_INTF0_402_ADDRESS                                                (0xe48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_402_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_402_RESET                                                  0x0

// 0xe4c (EFUSE_INTF0_403)
#define EFUSE_INTF0_R_403_LSB                                                  0
#define EFUSE_INTF0_R_403_MSB                                                  31
#define EFUSE_INTF0_R_403_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_403_GET(x)                                               (((x) & EFUSE_INTF0_R_403_MASK) >> EFUSE_INTF0_R_403_LSB)
#define EFUSE_INTF0_R_403_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_403_LSB) & EFUSE_INTF0_R_403_MASK)
#define EFUSE_INTF0_R_403_RESET                                                0x0
#define EFUSE_INTF0_403_ADDRESS                                                (0xe4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_403_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_403_RESET                                                  0x0

// 0xe50 (EFUSE_INTF0_404)
#define EFUSE_INTF0_R_404_LSB                                                  0
#define EFUSE_INTF0_R_404_MSB                                                  31
#define EFUSE_INTF0_R_404_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_404_GET(x)                                               (((x) & EFUSE_INTF0_R_404_MASK) >> EFUSE_INTF0_R_404_LSB)
#define EFUSE_INTF0_R_404_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_404_LSB) & EFUSE_INTF0_R_404_MASK)
#define EFUSE_INTF0_R_404_RESET                                                0x0
#define EFUSE_INTF0_404_ADDRESS                                                (0xe50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_404_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_404_RESET                                                  0x0

// 0xe54 (EFUSE_INTF0_405)
#define EFUSE_INTF0_R_405_LSB                                                  0
#define EFUSE_INTF0_R_405_MSB                                                  31
#define EFUSE_INTF0_R_405_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_405_GET(x)                                               (((x) & EFUSE_INTF0_R_405_MASK) >> EFUSE_INTF0_R_405_LSB)
#define EFUSE_INTF0_R_405_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_405_LSB) & EFUSE_INTF0_R_405_MASK)
#define EFUSE_INTF0_R_405_RESET                                                0x0
#define EFUSE_INTF0_405_ADDRESS                                                (0xe54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_405_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_405_RESET                                                  0x0

// 0xe58 (EFUSE_INTF0_406)
#define EFUSE_INTF0_R_406_LSB                                                  0
#define EFUSE_INTF0_R_406_MSB                                                  31
#define EFUSE_INTF0_R_406_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_406_GET(x)                                               (((x) & EFUSE_INTF0_R_406_MASK) >> EFUSE_INTF0_R_406_LSB)
#define EFUSE_INTF0_R_406_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_406_LSB) & EFUSE_INTF0_R_406_MASK)
#define EFUSE_INTF0_R_406_RESET                                                0x0
#define EFUSE_INTF0_406_ADDRESS                                                (0xe58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_406_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_406_RESET                                                  0x0

// 0xe5c (EFUSE_INTF0_407)
#define EFUSE_INTF0_R_407_LSB                                                  0
#define EFUSE_INTF0_R_407_MSB                                                  31
#define EFUSE_INTF0_R_407_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_407_GET(x)                                               (((x) & EFUSE_INTF0_R_407_MASK) >> EFUSE_INTF0_R_407_LSB)
#define EFUSE_INTF0_R_407_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_407_LSB) & EFUSE_INTF0_R_407_MASK)
#define EFUSE_INTF0_R_407_RESET                                                0x0
#define EFUSE_INTF0_407_ADDRESS                                                (0xe5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_407_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_407_RESET                                                  0x0

// 0xe60 (EFUSE_INTF0_408)
#define EFUSE_INTF0_R_408_LSB                                                  0
#define EFUSE_INTF0_R_408_MSB                                                  31
#define EFUSE_INTF0_R_408_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_408_GET(x)                                               (((x) & EFUSE_INTF0_R_408_MASK) >> EFUSE_INTF0_R_408_LSB)
#define EFUSE_INTF0_R_408_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_408_LSB) & EFUSE_INTF0_R_408_MASK)
#define EFUSE_INTF0_R_408_RESET                                                0x0
#define EFUSE_INTF0_408_ADDRESS                                                (0xe60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_408_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_408_RESET                                                  0x0

// 0xe64 (EFUSE_INTF0_409)
#define EFUSE_INTF0_R_409_LSB                                                  0
#define EFUSE_INTF0_R_409_MSB                                                  31
#define EFUSE_INTF0_R_409_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_409_GET(x)                                               (((x) & EFUSE_INTF0_R_409_MASK) >> EFUSE_INTF0_R_409_LSB)
#define EFUSE_INTF0_R_409_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_409_LSB) & EFUSE_INTF0_R_409_MASK)
#define EFUSE_INTF0_R_409_RESET                                                0x0
#define EFUSE_INTF0_409_ADDRESS                                                (0xe64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_409_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_409_RESET                                                  0x0

// 0xe68 (EFUSE_INTF0_410)
#define EFUSE_INTF0_R_410_LSB                                                  0
#define EFUSE_INTF0_R_410_MSB                                                  31
#define EFUSE_INTF0_R_410_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_410_GET(x)                                               (((x) & EFUSE_INTF0_R_410_MASK) >> EFUSE_INTF0_R_410_LSB)
#define EFUSE_INTF0_R_410_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_410_LSB) & EFUSE_INTF0_R_410_MASK)
#define EFUSE_INTF0_R_410_RESET                                                0x0
#define EFUSE_INTF0_410_ADDRESS                                                (0xe68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_410_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_410_RESET                                                  0x0

// 0xe6c (EFUSE_INTF0_411)
#define EFUSE_INTF0_R_411_LSB                                                  0
#define EFUSE_INTF0_R_411_MSB                                                  31
#define EFUSE_INTF0_R_411_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_411_GET(x)                                               (((x) & EFUSE_INTF0_R_411_MASK) >> EFUSE_INTF0_R_411_LSB)
#define EFUSE_INTF0_R_411_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_411_LSB) & EFUSE_INTF0_R_411_MASK)
#define EFUSE_INTF0_R_411_RESET                                                0x0
#define EFUSE_INTF0_411_ADDRESS                                                (0xe6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_411_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_411_RESET                                                  0x0

// 0xe70 (EFUSE_INTF0_412)
#define EFUSE_INTF0_R_412_LSB                                                  0
#define EFUSE_INTF0_R_412_MSB                                                  31
#define EFUSE_INTF0_R_412_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_412_GET(x)                                               (((x) & EFUSE_INTF0_R_412_MASK) >> EFUSE_INTF0_R_412_LSB)
#define EFUSE_INTF0_R_412_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_412_LSB) & EFUSE_INTF0_R_412_MASK)
#define EFUSE_INTF0_R_412_RESET                                                0x0
#define EFUSE_INTF0_412_ADDRESS                                                (0xe70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_412_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_412_RESET                                                  0x0

// 0xe74 (EFUSE_INTF0_413)
#define EFUSE_INTF0_R_413_LSB                                                  0
#define EFUSE_INTF0_R_413_MSB                                                  31
#define EFUSE_INTF0_R_413_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_413_GET(x)                                               (((x) & EFUSE_INTF0_R_413_MASK) >> EFUSE_INTF0_R_413_LSB)
#define EFUSE_INTF0_R_413_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_413_LSB) & EFUSE_INTF0_R_413_MASK)
#define EFUSE_INTF0_R_413_RESET                                                0x0
#define EFUSE_INTF0_413_ADDRESS                                                (0xe74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_413_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_413_RESET                                                  0x0

// 0xe78 (EFUSE_INTF0_414)
#define EFUSE_INTF0_R_414_LSB                                                  0
#define EFUSE_INTF0_R_414_MSB                                                  31
#define EFUSE_INTF0_R_414_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_414_GET(x)                                               (((x) & EFUSE_INTF0_R_414_MASK) >> EFUSE_INTF0_R_414_LSB)
#define EFUSE_INTF0_R_414_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_414_LSB) & EFUSE_INTF0_R_414_MASK)
#define EFUSE_INTF0_R_414_RESET                                                0x0
#define EFUSE_INTF0_414_ADDRESS                                                (0xe78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_414_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_414_RESET                                                  0x0

// 0xe7c (EFUSE_INTF0_415)
#define EFUSE_INTF0_R_415_LSB                                                  0
#define EFUSE_INTF0_R_415_MSB                                                  31
#define EFUSE_INTF0_R_415_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_415_GET(x)                                               (((x) & EFUSE_INTF0_R_415_MASK) >> EFUSE_INTF0_R_415_LSB)
#define EFUSE_INTF0_R_415_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_415_LSB) & EFUSE_INTF0_R_415_MASK)
#define EFUSE_INTF0_R_415_RESET                                                0x0
#define EFUSE_INTF0_415_ADDRESS                                                (0xe7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_415_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_415_RESET                                                  0x0

// 0xe80 (EFUSE_INTF0_416)
#define EFUSE_INTF0_R_416_LSB                                                  0
#define EFUSE_INTF0_R_416_MSB                                                  31
#define EFUSE_INTF0_R_416_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_416_GET(x)                                               (((x) & EFUSE_INTF0_R_416_MASK) >> EFUSE_INTF0_R_416_LSB)
#define EFUSE_INTF0_R_416_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_416_LSB) & EFUSE_INTF0_R_416_MASK)
#define EFUSE_INTF0_R_416_RESET                                                0x0
#define EFUSE_INTF0_416_ADDRESS                                                (0xe80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_416_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_416_RESET                                                  0x0

// 0xe84 (EFUSE_INTF0_417)
#define EFUSE_INTF0_R_417_LSB                                                  0
#define EFUSE_INTF0_R_417_MSB                                                  31
#define EFUSE_INTF0_R_417_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_417_GET(x)                                               (((x) & EFUSE_INTF0_R_417_MASK) >> EFUSE_INTF0_R_417_LSB)
#define EFUSE_INTF0_R_417_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_417_LSB) & EFUSE_INTF0_R_417_MASK)
#define EFUSE_INTF0_R_417_RESET                                                0x0
#define EFUSE_INTF0_417_ADDRESS                                                (0xe84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_417_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_417_RESET                                                  0x0

// 0xe88 (EFUSE_INTF0_418)
#define EFUSE_INTF0_R_418_LSB                                                  0
#define EFUSE_INTF0_R_418_MSB                                                  31
#define EFUSE_INTF0_R_418_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_418_GET(x)                                               (((x) & EFUSE_INTF0_R_418_MASK) >> EFUSE_INTF0_R_418_LSB)
#define EFUSE_INTF0_R_418_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_418_LSB) & EFUSE_INTF0_R_418_MASK)
#define EFUSE_INTF0_R_418_RESET                                                0x0
#define EFUSE_INTF0_418_ADDRESS                                                (0xe88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_418_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_418_RESET                                                  0x0

// 0xe8c (EFUSE_INTF0_419)
#define EFUSE_INTF0_R_419_LSB                                                  0
#define EFUSE_INTF0_R_419_MSB                                                  31
#define EFUSE_INTF0_R_419_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_419_GET(x)                                               (((x) & EFUSE_INTF0_R_419_MASK) >> EFUSE_INTF0_R_419_LSB)
#define EFUSE_INTF0_R_419_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_419_LSB) & EFUSE_INTF0_R_419_MASK)
#define EFUSE_INTF0_R_419_RESET                                                0x0
#define EFUSE_INTF0_419_ADDRESS                                                (0xe8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_419_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_419_RESET                                                  0x0

// 0xe90 (EFUSE_INTF0_420)
#define EFUSE_INTF0_R_420_LSB                                                  0
#define EFUSE_INTF0_R_420_MSB                                                  31
#define EFUSE_INTF0_R_420_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_420_GET(x)                                               (((x) & EFUSE_INTF0_R_420_MASK) >> EFUSE_INTF0_R_420_LSB)
#define EFUSE_INTF0_R_420_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_420_LSB) & EFUSE_INTF0_R_420_MASK)
#define EFUSE_INTF0_R_420_RESET                                                0x0
#define EFUSE_INTF0_420_ADDRESS                                                (0xe90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_420_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_420_RESET                                                  0x0

// 0xe94 (EFUSE_INTF0_421)
#define EFUSE_INTF0_R_421_LSB                                                  0
#define EFUSE_INTF0_R_421_MSB                                                  31
#define EFUSE_INTF0_R_421_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_421_GET(x)                                               (((x) & EFUSE_INTF0_R_421_MASK) >> EFUSE_INTF0_R_421_LSB)
#define EFUSE_INTF0_R_421_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_421_LSB) & EFUSE_INTF0_R_421_MASK)
#define EFUSE_INTF0_R_421_RESET                                                0x0
#define EFUSE_INTF0_421_ADDRESS                                                (0xe94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_421_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_421_RESET                                                  0x0

// 0xe98 (EFUSE_INTF0_422)
#define EFUSE_INTF0_R_422_LSB                                                  0
#define EFUSE_INTF0_R_422_MSB                                                  31
#define EFUSE_INTF0_R_422_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_422_GET(x)                                               (((x) & EFUSE_INTF0_R_422_MASK) >> EFUSE_INTF0_R_422_LSB)
#define EFUSE_INTF0_R_422_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_422_LSB) & EFUSE_INTF0_R_422_MASK)
#define EFUSE_INTF0_R_422_RESET                                                0x0
#define EFUSE_INTF0_422_ADDRESS                                                (0xe98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_422_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_422_RESET                                                  0x0

// 0xe9c (EFUSE_INTF0_423)
#define EFUSE_INTF0_R_423_LSB                                                  0
#define EFUSE_INTF0_R_423_MSB                                                  31
#define EFUSE_INTF0_R_423_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_423_GET(x)                                               (((x) & EFUSE_INTF0_R_423_MASK) >> EFUSE_INTF0_R_423_LSB)
#define EFUSE_INTF0_R_423_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_423_LSB) & EFUSE_INTF0_R_423_MASK)
#define EFUSE_INTF0_R_423_RESET                                                0x0
#define EFUSE_INTF0_423_ADDRESS                                                (0xe9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_423_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_423_RESET                                                  0x0

// 0xea0 (EFUSE_INTF0_424)
#define EFUSE_INTF0_R_424_LSB                                                  0
#define EFUSE_INTF0_R_424_MSB                                                  31
#define EFUSE_INTF0_R_424_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_424_GET(x)                                               (((x) & EFUSE_INTF0_R_424_MASK) >> EFUSE_INTF0_R_424_LSB)
#define EFUSE_INTF0_R_424_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_424_LSB) & EFUSE_INTF0_R_424_MASK)
#define EFUSE_INTF0_R_424_RESET                                                0x0
#define EFUSE_INTF0_424_ADDRESS                                                (0xea0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_424_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_424_RESET                                                  0x0

// 0xea4 (EFUSE_INTF0_425)
#define EFUSE_INTF0_R_425_LSB                                                  0
#define EFUSE_INTF0_R_425_MSB                                                  31
#define EFUSE_INTF0_R_425_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_425_GET(x)                                               (((x) & EFUSE_INTF0_R_425_MASK) >> EFUSE_INTF0_R_425_LSB)
#define EFUSE_INTF0_R_425_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_425_LSB) & EFUSE_INTF0_R_425_MASK)
#define EFUSE_INTF0_R_425_RESET                                                0x0
#define EFUSE_INTF0_425_ADDRESS                                                (0xea4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_425_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_425_RESET                                                  0x0

// 0xea8 (EFUSE_INTF0_426)
#define EFUSE_INTF0_R_426_LSB                                                  0
#define EFUSE_INTF0_R_426_MSB                                                  31
#define EFUSE_INTF0_R_426_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_426_GET(x)                                               (((x) & EFUSE_INTF0_R_426_MASK) >> EFUSE_INTF0_R_426_LSB)
#define EFUSE_INTF0_R_426_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_426_LSB) & EFUSE_INTF0_R_426_MASK)
#define EFUSE_INTF0_R_426_RESET                                                0x0
#define EFUSE_INTF0_426_ADDRESS                                                (0xea8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_426_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_426_RESET                                                  0x0

// 0xeac (EFUSE_INTF0_427)
#define EFUSE_INTF0_R_427_LSB                                                  0
#define EFUSE_INTF0_R_427_MSB                                                  31
#define EFUSE_INTF0_R_427_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_427_GET(x)                                               (((x) & EFUSE_INTF0_R_427_MASK) >> EFUSE_INTF0_R_427_LSB)
#define EFUSE_INTF0_R_427_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_427_LSB) & EFUSE_INTF0_R_427_MASK)
#define EFUSE_INTF0_R_427_RESET                                                0x0
#define EFUSE_INTF0_427_ADDRESS                                                (0xeac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_427_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_427_RESET                                                  0x0

// 0xeb0 (EFUSE_INTF0_428)
#define EFUSE_INTF0_R_428_LSB                                                  0
#define EFUSE_INTF0_R_428_MSB                                                  31
#define EFUSE_INTF0_R_428_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_428_GET(x)                                               (((x) & EFUSE_INTF0_R_428_MASK) >> EFUSE_INTF0_R_428_LSB)
#define EFUSE_INTF0_R_428_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_428_LSB) & EFUSE_INTF0_R_428_MASK)
#define EFUSE_INTF0_R_428_RESET                                                0x0
#define EFUSE_INTF0_428_ADDRESS                                                (0xeb0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_428_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_428_RESET                                                  0x0

// 0xeb4 (EFUSE_INTF0_429)
#define EFUSE_INTF0_R_429_LSB                                                  0
#define EFUSE_INTF0_R_429_MSB                                                  31
#define EFUSE_INTF0_R_429_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_429_GET(x)                                               (((x) & EFUSE_INTF0_R_429_MASK) >> EFUSE_INTF0_R_429_LSB)
#define EFUSE_INTF0_R_429_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_429_LSB) & EFUSE_INTF0_R_429_MASK)
#define EFUSE_INTF0_R_429_RESET                                                0x0
#define EFUSE_INTF0_429_ADDRESS                                                (0xeb4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_429_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_429_RESET                                                  0x0

// 0xeb8 (EFUSE_INTF0_430)
#define EFUSE_INTF0_R_430_LSB                                                  0
#define EFUSE_INTF0_R_430_MSB                                                  31
#define EFUSE_INTF0_R_430_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_430_GET(x)                                               (((x) & EFUSE_INTF0_R_430_MASK) >> EFUSE_INTF0_R_430_LSB)
#define EFUSE_INTF0_R_430_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_430_LSB) & EFUSE_INTF0_R_430_MASK)
#define EFUSE_INTF0_R_430_RESET                                                0x0
#define EFUSE_INTF0_430_ADDRESS                                                (0xeb8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_430_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_430_RESET                                                  0x0

// 0xebc (EFUSE_INTF0_431)
#define EFUSE_INTF0_R_431_LSB                                                  0
#define EFUSE_INTF0_R_431_MSB                                                  31
#define EFUSE_INTF0_R_431_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_431_GET(x)                                               (((x) & EFUSE_INTF0_R_431_MASK) >> EFUSE_INTF0_R_431_LSB)
#define EFUSE_INTF0_R_431_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_431_LSB) & EFUSE_INTF0_R_431_MASK)
#define EFUSE_INTF0_R_431_RESET                                                0x0
#define EFUSE_INTF0_431_ADDRESS                                                (0xebc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_431_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_431_RESET                                                  0x0

// 0xec0 (EFUSE_INTF0_432)
#define EFUSE_INTF0_R_432_LSB                                                  0
#define EFUSE_INTF0_R_432_MSB                                                  31
#define EFUSE_INTF0_R_432_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_432_GET(x)                                               (((x) & EFUSE_INTF0_R_432_MASK) >> EFUSE_INTF0_R_432_LSB)
#define EFUSE_INTF0_R_432_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_432_LSB) & EFUSE_INTF0_R_432_MASK)
#define EFUSE_INTF0_R_432_RESET                                                0x0
#define EFUSE_INTF0_432_ADDRESS                                                (0xec0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_432_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_432_RESET                                                  0x0

// 0xec4 (EFUSE_INTF0_433)
#define EFUSE_INTF0_R_433_LSB                                                  0
#define EFUSE_INTF0_R_433_MSB                                                  31
#define EFUSE_INTF0_R_433_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_433_GET(x)                                               (((x) & EFUSE_INTF0_R_433_MASK) >> EFUSE_INTF0_R_433_LSB)
#define EFUSE_INTF0_R_433_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_433_LSB) & EFUSE_INTF0_R_433_MASK)
#define EFUSE_INTF0_R_433_RESET                                                0x0
#define EFUSE_INTF0_433_ADDRESS                                                (0xec4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_433_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_433_RESET                                                  0x0

// 0xec8 (EFUSE_INTF0_434)
#define EFUSE_INTF0_R_434_LSB                                                  0
#define EFUSE_INTF0_R_434_MSB                                                  31
#define EFUSE_INTF0_R_434_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_434_GET(x)                                               (((x) & EFUSE_INTF0_R_434_MASK) >> EFUSE_INTF0_R_434_LSB)
#define EFUSE_INTF0_R_434_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_434_LSB) & EFUSE_INTF0_R_434_MASK)
#define EFUSE_INTF0_R_434_RESET                                                0x0
#define EFUSE_INTF0_434_ADDRESS                                                (0xec8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_434_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_434_RESET                                                  0x0

// 0xecc (EFUSE_INTF0_435)
#define EFUSE_INTF0_R_435_LSB                                                  0
#define EFUSE_INTF0_R_435_MSB                                                  31
#define EFUSE_INTF0_R_435_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_435_GET(x)                                               (((x) & EFUSE_INTF0_R_435_MASK) >> EFUSE_INTF0_R_435_LSB)
#define EFUSE_INTF0_R_435_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_435_LSB) & EFUSE_INTF0_R_435_MASK)
#define EFUSE_INTF0_R_435_RESET                                                0x0
#define EFUSE_INTF0_435_ADDRESS                                                (0xecc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_435_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_435_RESET                                                  0x0

// 0xed0 (EFUSE_INTF0_436)
#define EFUSE_INTF0_R_436_LSB                                                  0
#define EFUSE_INTF0_R_436_MSB                                                  31
#define EFUSE_INTF0_R_436_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_436_GET(x)                                               (((x) & EFUSE_INTF0_R_436_MASK) >> EFUSE_INTF0_R_436_LSB)
#define EFUSE_INTF0_R_436_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_436_LSB) & EFUSE_INTF0_R_436_MASK)
#define EFUSE_INTF0_R_436_RESET                                                0x0
#define EFUSE_INTF0_436_ADDRESS                                                (0xed0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_436_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_436_RESET                                                  0x0

// 0xed4 (EFUSE_INTF0_437)
#define EFUSE_INTF0_R_437_LSB                                                  0
#define EFUSE_INTF0_R_437_MSB                                                  31
#define EFUSE_INTF0_R_437_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_437_GET(x)                                               (((x) & EFUSE_INTF0_R_437_MASK) >> EFUSE_INTF0_R_437_LSB)
#define EFUSE_INTF0_R_437_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_437_LSB) & EFUSE_INTF0_R_437_MASK)
#define EFUSE_INTF0_R_437_RESET                                                0x0
#define EFUSE_INTF0_437_ADDRESS                                                (0xed4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_437_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_437_RESET                                                  0x0

// 0xed8 (EFUSE_INTF0_438)
#define EFUSE_INTF0_R_438_LSB                                                  0
#define EFUSE_INTF0_R_438_MSB                                                  31
#define EFUSE_INTF0_R_438_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_438_GET(x)                                               (((x) & EFUSE_INTF0_R_438_MASK) >> EFUSE_INTF0_R_438_LSB)
#define EFUSE_INTF0_R_438_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_438_LSB) & EFUSE_INTF0_R_438_MASK)
#define EFUSE_INTF0_R_438_RESET                                                0x0
#define EFUSE_INTF0_438_ADDRESS                                                (0xed8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_438_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_438_RESET                                                  0x0

// 0xedc (EFUSE_INTF0_439)
#define EFUSE_INTF0_R_439_LSB                                                  0
#define EFUSE_INTF0_R_439_MSB                                                  31
#define EFUSE_INTF0_R_439_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_439_GET(x)                                               (((x) & EFUSE_INTF0_R_439_MASK) >> EFUSE_INTF0_R_439_LSB)
#define EFUSE_INTF0_R_439_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_439_LSB) & EFUSE_INTF0_R_439_MASK)
#define EFUSE_INTF0_R_439_RESET                                                0x0
#define EFUSE_INTF0_439_ADDRESS                                                (0xedc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_439_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_439_RESET                                                  0x0

// 0xee0 (EFUSE_INTF0_440)
#define EFUSE_INTF0_R_440_LSB                                                  0
#define EFUSE_INTF0_R_440_MSB                                                  31
#define EFUSE_INTF0_R_440_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_440_GET(x)                                               (((x) & EFUSE_INTF0_R_440_MASK) >> EFUSE_INTF0_R_440_LSB)
#define EFUSE_INTF0_R_440_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_440_LSB) & EFUSE_INTF0_R_440_MASK)
#define EFUSE_INTF0_R_440_RESET                                                0x0
#define EFUSE_INTF0_440_ADDRESS                                                (0xee0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_440_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_440_RESET                                                  0x0

// 0xee4 (EFUSE_INTF0_441)
#define EFUSE_INTF0_R_441_LSB                                                  0
#define EFUSE_INTF0_R_441_MSB                                                  31
#define EFUSE_INTF0_R_441_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_441_GET(x)                                               (((x) & EFUSE_INTF0_R_441_MASK) >> EFUSE_INTF0_R_441_LSB)
#define EFUSE_INTF0_R_441_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_441_LSB) & EFUSE_INTF0_R_441_MASK)
#define EFUSE_INTF0_R_441_RESET                                                0x0
#define EFUSE_INTF0_441_ADDRESS                                                (0xee4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_441_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_441_RESET                                                  0x0

// 0xee8 (EFUSE_INTF0_442)
#define EFUSE_INTF0_R_442_LSB                                                  0
#define EFUSE_INTF0_R_442_MSB                                                  31
#define EFUSE_INTF0_R_442_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_442_GET(x)                                               (((x) & EFUSE_INTF0_R_442_MASK) >> EFUSE_INTF0_R_442_LSB)
#define EFUSE_INTF0_R_442_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_442_LSB) & EFUSE_INTF0_R_442_MASK)
#define EFUSE_INTF0_R_442_RESET                                                0x0
#define EFUSE_INTF0_442_ADDRESS                                                (0xee8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_442_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_442_RESET                                                  0x0

// 0xeec (EFUSE_INTF0_443)
#define EFUSE_INTF0_R_443_LSB                                                  0
#define EFUSE_INTF0_R_443_MSB                                                  31
#define EFUSE_INTF0_R_443_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_443_GET(x)                                               (((x) & EFUSE_INTF0_R_443_MASK) >> EFUSE_INTF0_R_443_LSB)
#define EFUSE_INTF0_R_443_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_443_LSB) & EFUSE_INTF0_R_443_MASK)
#define EFUSE_INTF0_R_443_RESET                                                0x0
#define EFUSE_INTF0_443_ADDRESS                                                (0xeec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_443_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_443_RESET                                                  0x0

// 0xef0 (EFUSE_INTF0_444)
#define EFUSE_INTF0_R_444_LSB                                                  0
#define EFUSE_INTF0_R_444_MSB                                                  31
#define EFUSE_INTF0_R_444_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_444_GET(x)                                               (((x) & EFUSE_INTF0_R_444_MASK) >> EFUSE_INTF0_R_444_LSB)
#define EFUSE_INTF0_R_444_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_444_LSB) & EFUSE_INTF0_R_444_MASK)
#define EFUSE_INTF0_R_444_RESET                                                0x0
#define EFUSE_INTF0_444_ADDRESS                                                (0xef0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_444_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_444_RESET                                                  0x0

// 0xef4 (EFUSE_INTF0_445)
#define EFUSE_INTF0_R_445_LSB                                                  0
#define EFUSE_INTF0_R_445_MSB                                                  31
#define EFUSE_INTF0_R_445_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_445_GET(x)                                               (((x) & EFUSE_INTF0_R_445_MASK) >> EFUSE_INTF0_R_445_LSB)
#define EFUSE_INTF0_R_445_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_445_LSB) & EFUSE_INTF0_R_445_MASK)
#define EFUSE_INTF0_R_445_RESET                                                0x0
#define EFUSE_INTF0_445_ADDRESS                                                (0xef4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_445_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_445_RESET                                                  0x0

// 0xef8 (EFUSE_INTF0_446)
#define EFUSE_INTF0_R_446_LSB                                                  0
#define EFUSE_INTF0_R_446_MSB                                                  31
#define EFUSE_INTF0_R_446_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_446_GET(x)                                               (((x) & EFUSE_INTF0_R_446_MASK) >> EFUSE_INTF0_R_446_LSB)
#define EFUSE_INTF0_R_446_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_446_LSB) & EFUSE_INTF0_R_446_MASK)
#define EFUSE_INTF0_R_446_RESET                                                0x0
#define EFUSE_INTF0_446_ADDRESS                                                (0xef8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_446_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_446_RESET                                                  0x0

// 0xefc (EFUSE_INTF0_447)
#define EFUSE_INTF0_R_447_LSB                                                  0
#define EFUSE_INTF0_R_447_MSB                                                  31
#define EFUSE_INTF0_R_447_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_447_GET(x)                                               (((x) & EFUSE_INTF0_R_447_MASK) >> EFUSE_INTF0_R_447_LSB)
#define EFUSE_INTF0_R_447_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_447_LSB) & EFUSE_INTF0_R_447_MASK)
#define EFUSE_INTF0_R_447_RESET                                                0x0
#define EFUSE_INTF0_447_ADDRESS                                                (0xefc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_447_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_447_RESET                                                  0x0

// 0xf00 (EFUSE_INTF0_448)
#define EFUSE_INTF0_R_448_LSB                                                  0
#define EFUSE_INTF0_R_448_MSB                                                  31
#define EFUSE_INTF0_R_448_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_448_GET(x)                                               (((x) & EFUSE_INTF0_R_448_MASK) >> EFUSE_INTF0_R_448_LSB)
#define EFUSE_INTF0_R_448_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_448_LSB) & EFUSE_INTF0_R_448_MASK)
#define EFUSE_INTF0_R_448_RESET                                                0x0
#define EFUSE_INTF0_448_ADDRESS                                                (0xf00 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_448_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_448_RESET                                                  0x0

// 0xf04 (EFUSE_INTF0_449)
#define EFUSE_INTF0_R_449_LSB                                                  0
#define EFUSE_INTF0_R_449_MSB                                                  31
#define EFUSE_INTF0_R_449_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_449_GET(x)                                               (((x) & EFUSE_INTF0_R_449_MASK) >> EFUSE_INTF0_R_449_LSB)
#define EFUSE_INTF0_R_449_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_449_LSB) & EFUSE_INTF0_R_449_MASK)
#define EFUSE_INTF0_R_449_RESET                                                0x0
#define EFUSE_INTF0_449_ADDRESS                                                (0xf04 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_449_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_449_RESET                                                  0x0

// 0xf08 (EFUSE_INTF0_450)
#define EFUSE_INTF0_R_450_LSB                                                  0
#define EFUSE_INTF0_R_450_MSB                                                  31
#define EFUSE_INTF0_R_450_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_450_GET(x)                                               (((x) & EFUSE_INTF0_R_450_MASK) >> EFUSE_INTF0_R_450_LSB)
#define EFUSE_INTF0_R_450_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_450_LSB) & EFUSE_INTF0_R_450_MASK)
#define EFUSE_INTF0_R_450_RESET                                                0x0
#define EFUSE_INTF0_450_ADDRESS                                                (0xf08 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_450_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_450_RESET                                                  0x0

// 0xf0c (EFUSE_INTF0_451)
#define EFUSE_INTF0_R_451_LSB                                                  0
#define EFUSE_INTF0_R_451_MSB                                                  31
#define EFUSE_INTF0_R_451_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_451_GET(x)                                               (((x) & EFUSE_INTF0_R_451_MASK) >> EFUSE_INTF0_R_451_LSB)
#define EFUSE_INTF0_R_451_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_451_LSB) & EFUSE_INTF0_R_451_MASK)
#define EFUSE_INTF0_R_451_RESET                                                0x0
#define EFUSE_INTF0_451_ADDRESS                                                (0xf0c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_451_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_451_RESET                                                  0x0

// 0xf10 (EFUSE_INTF0_452)
#define EFUSE_INTF0_R_452_LSB                                                  0
#define EFUSE_INTF0_R_452_MSB                                                  31
#define EFUSE_INTF0_R_452_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_452_GET(x)                                               (((x) & EFUSE_INTF0_R_452_MASK) >> EFUSE_INTF0_R_452_LSB)
#define EFUSE_INTF0_R_452_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_452_LSB) & EFUSE_INTF0_R_452_MASK)
#define EFUSE_INTF0_R_452_RESET                                                0x0
#define EFUSE_INTF0_452_ADDRESS                                                (0xf10 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_452_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_452_RESET                                                  0x0

// 0xf14 (EFUSE_INTF0_453)
#define EFUSE_INTF0_R_453_LSB                                                  0
#define EFUSE_INTF0_R_453_MSB                                                  31
#define EFUSE_INTF0_R_453_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_453_GET(x)                                               (((x) & EFUSE_INTF0_R_453_MASK) >> EFUSE_INTF0_R_453_LSB)
#define EFUSE_INTF0_R_453_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_453_LSB) & EFUSE_INTF0_R_453_MASK)
#define EFUSE_INTF0_R_453_RESET                                                0x0
#define EFUSE_INTF0_453_ADDRESS                                                (0xf14 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_453_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_453_RESET                                                  0x0

// 0xf18 (EFUSE_INTF0_454)
#define EFUSE_INTF0_R_454_LSB                                                  0
#define EFUSE_INTF0_R_454_MSB                                                  31
#define EFUSE_INTF0_R_454_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_454_GET(x)                                               (((x) & EFUSE_INTF0_R_454_MASK) >> EFUSE_INTF0_R_454_LSB)
#define EFUSE_INTF0_R_454_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_454_LSB) & EFUSE_INTF0_R_454_MASK)
#define EFUSE_INTF0_R_454_RESET                                                0x0
#define EFUSE_INTF0_454_ADDRESS                                                (0xf18 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_454_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_454_RESET                                                  0x0

// 0xf1c (EFUSE_INTF0_455)
#define EFUSE_INTF0_R_455_LSB                                                  0
#define EFUSE_INTF0_R_455_MSB                                                  31
#define EFUSE_INTF0_R_455_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_455_GET(x)                                               (((x) & EFUSE_INTF0_R_455_MASK) >> EFUSE_INTF0_R_455_LSB)
#define EFUSE_INTF0_R_455_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_455_LSB) & EFUSE_INTF0_R_455_MASK)
#define EFUSE_INTF0_R_455_RESET                                                0x0
#define EFUSE_INTF0_455_ADDRESS                                                (0xf1c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_455_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_455_RESET                                                  0x0

// 0xf20 (EFUSE_INTF0_456)
#define EFUSE_INTF0_R_456_LSB                                                  0
#define EFUSE_INTF0_R_456_MSB                                                  31
#define EFUSE_INTF0_R_456_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_456_GET(x)                                               (((x) & EFUSE_INTF0_R_456_MASK) >> EFUSE_INTF0_R_456_LSB)
#define EFUSE_INTF0_R_456_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_456_LSB) & EFUSE_INTF0_R_456_MASK)
#define EFUSE_INTF0_R_456_RESET                                                0x0
#define EFUSE_INTF0_456_ADDRESS                                                (0xf20 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_456_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_456_RESET                                                  0x0

// 0xf24 (EFUSE_INTF0_457)
#define EFUSE_INTF0_R_457_LSB                                                  0
#define EFUSE_INTF0_R_457_MSB                                                  31
#define EFUSE_INTF0_R_457_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_457_GET(x)                                               (((x) & EFUSE_INTF0_R_457_MASK) >> EFUSE_INTF0_R_457_LSB)
#define EFUSE_INTF0_R_457_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_457_LSB) & EFUSE_INTF0_R_457_MASK)
#define EFUSE_INTF0_R_457_RESET                                                0x0
#define EFUSE_INTF0_457_ADDRESS                                                (0xf24 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_457_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_457_RESET                                                  0x0

// 0xf28 (EFUSE_INTF0_458)
#define EFUSE_INTF0_R_458_LSB                                                  0
#define EFUSE_INTF0_R_458_MSB                                                  31
#define EFUSE_INTF0_R_458_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_458_GET(x)                                               (((x) & EFUSE_INTF0_R_458_MASK) >> EFUSE_INTF0_R_458_LSB)
#define EFUSE_INTF0_R_458_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_458_LSB) & EFUSE_INTF0_R_458_MASK)
#define EFUSE_INTF0_R_458_RESET                                                0x0
#define EFUSE_INTF0_458_ADDRESS                                                (0xf28 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_458_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_458_RESET                                                  0x0

// 0xf2c (EFUSE_INTF0_459)
#define EFUSE_INTF0_R_459_LSB                                                  0
#define EFUSE_INTF0_R_459_MSB                                                  31
#define EFUSE_INTF0_R_459_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_459_GET(x)                                               (((x) & EFUSE_INTF0_R_459_MASK) >> EFUSE_INTF0_R_459_LSB)
#define EFUSE_INTF0_R_459_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_459_LSB) & EFUSE_INTF0_R_459_MASK)
#define EFUSE_INTF0_R_459_RESET                                                0x0
#define EFUSE_INTF0_459_ADDRESS                                                (0xf2c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_459_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_459_RESET                                                  0x0

// 0xf30 (EFUSE_INTF0_460)
#define EFUSE_INTF0_R_460_LSB                                                  0
#define EFUSE_INTF0_R_460_MSB                                                  31
#define EFUSE_INTF0_R_460_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_460_GET(x)                                               (((x) & EFUSE_INTF0_R_460_MASK) >> EFUSE_INTF0_R_460_LSB)
#define EFUSE_INTF0_R_460_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_460_LSB) & EFUSE_INTF0_R_460_MASK)
#define EFUSE_INTF0_R_460_RESET                                                0x0
#define EFUSE_INTF0_460_ADDRESS                                                (0xf30 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_460_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_460_RESET                                                  0x0

// 0xf34 (EFUSE_INTF0_461)
#define EFUSE_INTF0_R_461_LSB                                                  0
#define EFUSE_INTF0_R_461_MSB                                                  31
#define EFUSE_INTF0_R_461_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_461_GET(x)                                               (((x) & EFUSE_INTF0_R_461_MASK) >> EFUSE_INTF0_R_461_LSB)
#define EFUSE_INTF0_R_461_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_461_LSB) & EFUSE_INTF0_R_461_MASK)
#define EFUSE_INTF0_R_461_RESET                                                0x0
#define EFUSE_INTF0_461_ADDRESS                                                (0xf34 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_461_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_461_RESET                                                  0x0

// 0xf38 (EFUSE_INTF0_462)
#define EFUSE_INTF0_R_462_LSB                                                  0
#define EFUSE_INTF0_R_462_MSB                                                  31
#define EFUSE_INTF0_R_462_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_462_GET(x)                                               (((x) & EFUSE_INTF0_R_462_MASK) >> EFUSE_INTF0_R_462_LSB)
#define EFUSE_INTF0_R_462_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_462_LSB) & EFUSE_INTF0_R_462_MASK)
#define EFUSE_INTF0_R_462_RESET                                                0x0
#define EFUSE_INTF0_462_ADDRESS                                                (0xf38 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_462_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_462_RESET                                                  0x0

// 0xf3c (EFUSE_INTF0_463)
#define EFUSE_INTF0_R_463_LSB                                                  0
#define EFUSE_INTF0_R_463_MSB                                                  31
#define EFUSE_INTF0_R_463_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_463_GET(x)                                               (((x) & EFUSE_INTF0_R_463_MASK) >> EFUSE_INTF0_R_463_LSB)
#define EFUSE_INTF0_R_463_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_463_LSB) & EFUSE_INTF0_R_463_MASK)
#define EFUSE_INTF0_R_463_RESET                                                0x0
#define EFUSE_INTF0_463_ADDRESS                                                (0xf3c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_463_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_463_RESET                                                  0x0

// 0xf40 (EFUSE_INTF0_464)
#define EFUSE_INTF0_R_464_LSB                                                  0
#define EFUSE_INTF0_R_464_MSB                                                  31
#define EFUSE_INTF0_R_464_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_464_GET(x)                                               (((x) & EFUSE_INTF0_R_464_MASK) >> EFUSE_INTF0_R_464_LSB)
#define EFUSE_INTF0_R_464_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_464_LSB) & EFUSE_INTF0_R_464_MASK)
#define EFUSE_INTF0_R_464_RESET                                                0x0
#define EFUSE_INTF0_464_ADDRESS                                                (0xf40 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_464_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_464_RESET                                                  0x0

// 0xf44 (EFUSE_INTF0_465)
#define EFUSE_INTF0_R_465_LSB                                                  0
#define EFUSE_INTF0_R_465_MSB                                                  31
#define EFUSE_INTF0_R_465_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_465_GET(x)                                               (((x) & EFUSE_INTF0_R_465_MASK) >> EFUSE_INTF0_R_465_LSB)
#define EFUSE_INTF0_R_465_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_465_LSB) & EFUSE_INTF0_R_465_MASK)
#define EFUSE_INTF0_R_465_RESET                                                0x0
#define EFUSE_INTF0_465_ADDRESS                                                (0xf44 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_465_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_465_RESET                                                  0x0

// 0xf48 (EFUSE_INTF0_466)
#define EFUSE_INTF0_R_466_LSB                                                  0
#define EFUSE_INTF0_R_466_MSB                                                  31
#define EFUSE_INTF0_R_466_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_466_GET(x)                                               (((x) & EFUSE_INTF0_R_466_MASK) >> EFUSE_INTF0_R_466_LSB)
#define EFUSE_INTF0_R_466_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_466_LSB) & EFUSE_INTF0_R_466_MASK)
#define EFUSE_INTF0_R_466_RESET                                                0x0
#define EFUSE_INTF0_466_ADDRESS                                                (0xf48 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_466_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_466_RESET                                                  0x0

// 0xf4c (EFUSE_INTF0_467)
#define EFUSE_INTF0_R_467_LSB                                                  0
#define EFUSE_INTF0_R_467_MSB                                                  31
#define EFUSE_INTF0_R_467_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_467_GET(x)                                               (((x) & EFUSE_INTF0_R_467_MASK) >> EFUSE_INTF0_R_467_LSB)
#define EFUSE_INTF0_R_467_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_467_LSB) & EFUSE_INTF0_R_467_MASK)
#define EFUSE_INTF0_R_467_RESET                                                0x0
#define EFUSE_INTF0_467_ADDRESS                                                (0xf4c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_467_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_467_RESET                                                  0x0

// 0xf50 (EFUSE_INTF0_468)
#define EFUSE_INTF0_R_468_LSB                                                  0
#define EFUSE_INTF0_R_468_MSB                                                  31
#define EFUSE_INTF0_R_468_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_468_GET(x)                                               (((x) & EFUSE_INTF0_R_468_MASK) >> EFUSE_INTF0_R_468_LSB)
#define EFUSE_INTF0_R_468_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_468_LSB) & EFUSE_INTF0_R_468_MASK)
#define EFUSE_INTF0_R_468_RESET                                                0x0
#define EFUSE_INTF0_468_ADDRESS                                                (0xf50 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_468_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_468_RESET                                                  0x0

// 0xf54 (EFUSE_INTF0_469)
#define EFUSE_INTF0_R_469_LSB                                                  0
#define EFUSE_INTF0_R_469_MSB                                                  31
#define EFUSE_INTF0_R_469_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_469_GET(x)                                               (((x) & EFUSE_INTF0_R_469_MASK) >> EFUSE_INTF0_R_469_LSB)
#define EFUSE_INTF0_R_469_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_469_LSB) & EFUSE_INTF0_R_469_MASK)
#define EFUSE_INTF0_R_469_RESET                                                0x0
#define EFUSE_INTF0_469_ADDRESS                                                (0xf54 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_469_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_469_RESET                                                  0x0

// 0xf58 (EFUSE_INTF0_470)
#define EFUSE_INTF0_R_470_LSB                                                  0
#define EFUSE_INTF0_R_470_MSB                                                  31
#define EFUSE_INTF0_R_470_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_470_GET(x)                                               (((x) & EFUSE_INTF0_R_470_MASK) >> EFUSE_INTF0_R_470_LSB)
#define EFUSE_INTF0_R_470_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_470_LSB) & EFUSE_INTF0_R_470_MASK)
#define EFUSE_INTF0_R_470_RESET                                                0x0
#define EFUSE_INTF0_470_ADDRESS                                                (0xf58 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_470_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_470_RESET                                                  0x0

// 0xf5c (EFUSE_INTF0_471)
#define EFUSE_INTF0_R_471_LSB                                                  0
#define EFUSE_INTF0_R_471_MSB                                                  31
#define EFUSE_INTF0_R_471_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_471_GET(x)                                               (((x) & EFUSE_INTF0_R_471_MASK) >> EFUSE_INTF0_R_471_LSB)
#define EFUSE_INTF0_R_471_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_471_LSB) & EFUSE_INTF0_R_471_MASK)
#define EFUSE_INTF0_R_471_RESET                                                0x0
#define EFUSE_INTF0_471_ADDRESS                                                (0xf5c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_471_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_471_RESET                                                  0x0

// 0xf60 (EFUSE_INTF0_472)
#define EFUSE_INTF0_R_472_LSB                                                  0
#define EFUSE_INTF0_R_472_MSB                                                  31
#define EFUSE_INTF0_R_472_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_472_GET(x)                                               (((x) & EFUSE_INTF0_R_472_MASK) >> EFUSE_INTF0_R_472_LSB)
#define EFUSE_INTF0_R_472_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_472_LSB) & EFUSE_INTF0_R_472_MASK)
#define EFUSE_INTF0_R_472_RESET                                                0x0
#define EFUSE_INTF0_472_ADDRESS                                                (0xf60 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_472_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_472_RESET                                                  0x0

// 0xf64 (EFUSE_INTF0_473)
#define EFUSE_INTF0_R_473_LSB                                                  0
#define EFUSE_INTF0_R_473_MSB                                                  31
#define EFUSE_INTF0_R_473_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_473_GET(x)                                               (((x) & EFUSE_INTF0_R_473_MASK) >> EFUSE_INTF0_R_473_LSB)
#define EFUSE_INTF0_R_473_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_473_LSB) & EFUSE_INTF0_R_473_MASK)
#define EFUSE_INTF0_R_473_RESET                                                0x0
#define EFUSE_INTF0_473_ADDRESS                                                (0xf64 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_473_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_473_RESET                                                  0x0

// 0xf68 (EFUSE_INTF0_474)
#define EFUSE_INTF0_R_474_LSB                                                  0
#define EFUSE_INTF0_R_474_MSB                                                  31
#define EFUSE_INTF0_R_474_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_474_GET(x)                                               (((x) & EFUSE_INTF0_R_474_MASK) >> EFUSE_INTF0_R_474_LSB)
#define EFUSE_INTF0_R_474_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_474_LSB) & EFUSE_INTF0_R_474_MASK)
#define EFUSE_INTF0_R_474_RESET                                                0x0
#define EFUSE_INTF0_474_ADDRESS                                                (0xf68 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_474_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_474_RESET                                                  0x0

// 0xf6c (EFUSE_INTF0_475)
#define EFUSE_INTF0_R_475_LSB                                                  0
#define EFUSE_INTF0_R_475_MSB                                                  31
#define EFUSE_INTF0_R_475_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_475_GET(x)                                               (((x) & EFUSE_INTF0_R_475_MASK) >> EFUSE_INTF0_R_475_LSB)
#define EFUSE_INTF0_R_475_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_475_LSB) & EFUSE_INTF0_R_475_MASK)
#define EFUSE_INTF0_R_475_RESET                                                0x0
#define EFUSE_INTF0_475_ADDRESS                                                (0xf6c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_475_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_475_RESET                                                  0x0

// 0xf70 (EFUSE_INTF0_476)
#define EFUSE_INTF0_R_476_LSB                                                  0
#define EFUSE_INTF0_R_476_MSB                                                  31
#define EFUSE_INTF0_R_476_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_476_GET(x)                                               (((x) & EFUSE_INTF0_R_476_MASK) >> EFUSE_INTF0_R_476_LSB)
#define EFUSE_INTF0_R_476_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_476_LSB) & EFUSE_INTF0_R_476_MASK)
#define EFUSE_INTF0_R_476_RESET                                                0x0
#define EFUSE_INTF0_476_ADDRESS                                                (0xf70 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_476_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_476_RESET                                                  0x0

// 0xf74 (EFUSE_INTF0_477)
#define EFUSE_INTF0_R_477_LSB                                                  0
#define EFUSE_INTF0_R_477_MSB                                                  31
#define EFUSE_INTF0_R_477_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_477_GET(x)                                               (((x) & EFUSE_INTF0_R_477_MASK) >> EFUSE_INTF0_R_477_LSB)
#define EFUSE_INTF0_R_477_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_477_LSB) & EFUSE_INTF0_R_477_MASK)
#define EFUSE_INTF0_R_477_RESET                                                0x0
#define EFUSE_INTF0_477_ADDRESS                                                (0xf74 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_477_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_477_RESET                                                  0x0

// 0xf78 (EFUSE_INTF0_478)
#define EFUSE_INTF0_R_478_LSB                                                  0
#define EFUSE_INTF0_R_478_MSB                                                  31
#define EFUSE_INTF0_R_478_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_478_GET(x)                                               (((x) & EFUSE_INTF0_R_478_MASK) >> EFUSE_INTF0_R_478_LSB)
#define EFUSE_INTF0_R_478_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_478_LSB) & EFUSE_INTF0_R_478_MASK)
#define EFUSE_INTF0_R_478_RESET                                                0x0
#define EFUSE_INTF0_478_ADDRESS                                                (0xf78 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_478_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_478_RESET                                                  0x0

// 0xf7c (EFUSE_INTF0_479)
#define EFUSE_INTF0_R_479_LSB                                                  0
#define EFUSE_INTF0_R_479_MSB                                                  31
#define EFUSE_INTF0_R_479_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_479_GET(x)                                               (((x) & EFUSE_INTF0_R_479_MASK) >> EFUSE_INTF0_R_479_LSB)
#define EFUSE_INTF0_R_479_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_479_LSB) & EFUSE_INTF0_R_479_MASK)
#define EFUSE_INTF0_R_479_RESET                                                0x0
#define EFUSE_INTF0_479_ADDRESS                                                (0xf7c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_479_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_479_RESET                                                  0x0

// 0xf80 (EFUSE_INTF0_480)
#define EFUSE_INTF0_R_480_LSB                                                  0
#define EFUSE_INTF0_R_480_MSB                                                  31
#define EFUSE_INTF0_R_480_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_480_GET(x)                                               (((x) & EFUSE_INTF0_R_480_MASK) >> EFUSE_INTF0_R_480_LSB)
#define EFUSE_INTF0_R_480_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_480_LSB) & EFUSE_INTF0_R_480_MASK)
#define EFUSE_INTF0_R_480_RESET                                                0x0
#define EFUSE_INTF0_480_ADDRESS                                                (0xf80 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_480_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_480_RESET                                                  0x0

// 0xf84 (EFUSE_INTF0_481)
#define EFUSE_INTF0_R_481_LSB                                                  0
#define EFUSE_INTF0_R_481_MSB                                                  31
#define EFUSE_INTF0_R_481_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_481_GET(x)                                               (((x) & EFUSE_INTF0_R_481_MASK) >> EFUSE_INTF0_R_481_LSB)
#define EFUSE_INTF0_R_481_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_481_LSB) & EFUSE_INTF0_R_481_MASK)
#define EFUSE_INTF0_R_481_RESET                                                0x0
#define EFUSE_INTF0_481_ADDRESS                                                (0xf84 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_481_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_481_RESET                                                  0x0

// 0xf88 (EFUSE_INTF0_482)
#define EFUSE_INTF0_R_482_LSB                                                  0
#define EFUSE_INTF0_R_482_MSB                                                  31
#define EFUSE_INTF0_R_482_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_482_GET(x)                                               (((x) & EFUSE_INTF0_R_482_MASK) >> EFUSE_INTF0_R_482_LSB)
#define EFUSE_INTF0_R_482_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_482_LSB) & EFUSE_INTF0_R_482_MASK)
#define EFUSE_INTF0_R_482_RESET                                                0x0
#define EFUSE_INTF0_482_ADDRESS                                                (0xf88 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_482_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_482_RESET                                                  0x0

// 0xf8c (EFUSE_INTF0_483)
#define EFUSE_INTF0_R_483_LSB                                                  0
#define EFUSE_INTF0_R_483_MSB                                                  31
#define EFUSE_INTF0_R_483_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_483_GET(x)                                               (((x) & EFUSE_INTF0_R_483_MASK) >> EFUSE_INTF0_R_483_LSB)
#define EFUSE_INTF0_R_483_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_483_LSB) & EFUSE_INTF0_R_483_MASK)
#define EFUSE_INTF0_R_483_RESET                                                0x0
#define EFUSE_INTF0_483_ADDRESS                                                (0xf8c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_483_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_483_RESET                                                  0x0

// 0xf90 (EFUSE_INTF0_484)
#define EFUSE_INTF0_R_484_LSB                                                  0
#define EFUSE_INTF0_R_484_MSB                                                  31
#define EFUSE_INTF0_R_484_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_484_GET(x)                                               (((x) & EFUSE_INTF0_R_484_MASK) >> EFUSE_INTF0_R_484_LSB)
#define EFUSE_INTF0_R_484_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_484_LSB) & EFUSE_INTF0_R_484_MASK)
#define EFUSE_INTF0_R_484_RESET                                                0x0
#define EFUSE_INTF0_484_ADDRESS                                                (0xf90 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_484_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_484_RESET                                                  0x0

// 0xf94 (EFUSE_INTF0_485)
#define EFUSE_INTF0_R_485_LSB                                                  0
#define EFUSE_INTF0_R_485_MSB                                                  31
#define EFUSE_INTF0_R_485_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_485_GET(x)                                               (((x) & EFUSE_INTF0_R_485_MASK) >> EFUSE_INTF0_R_485_LSB)
#define EFUSE_INTF0_R_485_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_485_LSB) & EFUSE_INTF0_R_485_MASK)
#define EFUSE_INTF0_R_485_RESET                                                0x0
#define EFUSE_INTF0_485_ADDRESS                                                (0xf94 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_485_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_485_RESET                                                  0x0

// 0xf98 (EFUSE_INTF0_486)
#define EFUSE_INTF0_R_486_LSB                                                  0
#define EFUSE_INTF0_R_486_MSB                                                  31
#define EFUSE_INTF0_R_486_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_486_GET(x)                                               (((x) & EFUSE_INTF0_R_486_MASK) >> EFUSE_INTF0_R_486_LSB)
#define EFUSE_INTF0_R_486_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_486_LSB) & EFUSE_INTF0_R_486_MASK)
#define EFUSE_INTF0_R_486_RESET                                                0x0
#define EFUSE_INTF0_486_ADDRESS                                                (0xf98 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_486_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_486_RESET                                                  0x0

// 0xf9c (EFUSE_INTF0_487)
#define EFUSE_INTF0_R_487_LSB                                                  0
#define EFUSE_INTF0_R_487_MSB                                                  31
#define EFUSE_INTF0_R_487_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_487_GET(x)                                               (((x) & EFUSE_INTF0_R_487_MASK) >> EFUSE_INTF0_R_487_LSB)
#define EFUSE_INTF0_R_487_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_487_LSB) & EFUSE_INTF0_R_487_MASK)
#define EFUSE_INTF0_R_487_RESET                                                0x0
#define EFUSE_INTF0_487_ADDRESS                                                (0xf9c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_487_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_487_RESET                                                  0x0

// 0xfa0 (EFUSE_INTF0_488)
#define EFUSE_INTF0_R_488_LSB                                                  0
#define EFUSE_INTF0_R_488_MSB                                                  31
#define EFUSE_INTF0_R_488_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_488_GET(x)                                               (((x) & EFUSE_INTF0_R_488_MASK) >> EFUSE_INTF0_R_488_LSB)
#define EFUSE_INTF0_R_488_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_488_LSB) & EFUSE_INTF0_R_488_MASK)
#define EFUSE_INTF0_R_488_RESET                                                0x0
#define EFUSE_INTF0_488_ADDRESS                                                (0xfa0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_488_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_488_RESET                                                  0x0

// 0xfa4 (EFUSE_INTF0_489)
#define EFUSE_INTF0_R_489_LSB                                                  0
#define EFUSE_INTF0_R_489_MSB                                                  31
#define EFUSE_INTF0_R_489_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_489_GET(x)                                               (((x) & EFUSE_INTF0_R_489_MASK) >> EFUSE_INTF0_R_489_LSB)
#define EFUSE_INTF0_R_489_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_489_LSB) & EFUSE_INTF0_R_489_MASK)
#define EFUSE_INTF0_R_489_RESET                                                0x0
#define EFUSE_INTF0_489_ADDRESS                                                (0xfa4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_489_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_489_RESET                                                  0x0

// 0xfa8 (EFUSE_INTF0_490)
#define EFUSE_INTF0_R_490_LSB                                                  0
#define EFUSE_INTF0_R_490_MSB                                                  31
#define EFUSE_INTF0_R_490_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_490_GET(x)                                               (((x) & EFUSE_INTF0_R_490_MASK) >> EFUSE_INTF0_R_490_LSB)
#define EFUSE_INTF0_R_490_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_490_LSB) & EFUSE_INTF0_R_490_MASK)
#define EFUSE_INTF0_R_490_RESET                                                0x0
#define EFUSE_INTF0_490_ADDRESS                                                (0xfa8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_490_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_490_RESET                                                  0x0

// 0xfac (EFUSE_INTF0_491)
#define EFUSE_INTF0_R_491_LSB                                                  0
#define EFUSE_INTF0_R_491_MSB                                                  31
#define EFUSE_INTF0_R_491_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_491_GET(x)                                               (((x) & EFUSE_INTF0_R_491_MASK) >> EFUSE_INTF0_R_491_LSB)
#define EFUSE_INTF0_R_491_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_491_LSB) & EFUSE_INTF0_R_491_MASK)
#define EFUSE_INTF0_R_491_RESET                                                0x0
#define EFUSE_INTF0_491_ADDRESS                                                (0xfac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_491_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_491_RESET                                                  0x0

// 0xfb0 (EFUSE_INTF0_492)
#define EFUSE_INTF0_R_492_LSB                                                  0
#define EFUSE_INTF0_R_492_MSB                                                  31
#define EFUSE_INTF0_R_492_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_492_GET(x)                                               (((x) & EFUSE_INTF0_R_492_MASK) >> EFUSE_INTF0_R_492_LSB)
#define EFUSE_INTF0_R_492_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_492_LSB) & EFUSE_INTF0_R_492_MASK)
#define EFUSE_INTF0_R_492_RESET                                                0x0
#define EFUSE_INTF0_492_ADDRESS                                                (0xfb0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_492_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_492_RESET                                                  0x0

// 0xfb4 (EFUSE_INTF0_493)
#define EFUSE_INTF0_R_493_LSB                                                  0
#define EFUSE_INTF0_R_493_MSB                                                  31
#define EFUSE_INTF0_R_493_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_493_GET(x)                                               (((x) & EFUSE_INTF0_R_493_MASK) >> EFUSE_INTF0_R_493_LSB)
#define EFUSE_INTF0_R_493_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_493_LSB) & EFUSE_INTF0_R_493_MASK)
#define EFUSE_INTF0_R_493_RESET                                                0x0
#define EFUSE_INTF0_493_ADDRESS                                                (0xfb4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_493_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_493_RESET                                                  0x0

// 0xfb8 (EFUSE_INTF0_494)
#define EFUSE_INTF0_R_494_LSB                                                  0
#define EFUSE_INTF0_R_494_MSB                                                  31
#define EFUSE_INTF0_R_494_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_494_GET(x)                                               (((x) & EFUSE_INTF0_R_494_MASK) >> EFUSE_INTF0_R_494_LSB)
#define EFUSE_INTF0_R_494_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_494_LSB) & EFUSE_INTF0_R_494_MASK)
#define EFUSE_INTF0_R_494_RESET                                                0x0
#define EFUSE_INTF0_494_ADDRESS                                                (0xfb8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_494_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_494_RESET                                                  0x0

// 0xfbc (EFUSE_INTF0_495)
#define EFUSE_INTF0_R_495_LSB                                                  0
#define EFUSE_INTF0_R_495_MSB                                                  31
#define EFUSE_INTF0_R_495_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_495_GET(x)                                               (((x) & EFUSE_INTF0_R_495_MASK) >> EFUSE_INTF0_R_495_LSB)
#define EFUSE_INTF0_R_495_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_495_LSB) & EFUSE_INTF0_R_495_MASK)
#define EFUSE_INTF0_R_495_RESET                                                0x0
#define EFUSE_INTF0_495_ADDRESS                                                (0xfbc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_495_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_495_RESET                                                  0x0

// 0xfc0 (EFUSE_INTF0_496)
#define EFUSE_INTF0_R_496_LSB                                                  0
#define EFUSE_INTF0_R_496_MSB                                                  31
#define EFUSE_INTF0_R_496_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_496_GET(x)                                               (((x) & EFUSE_INTF0_R_496_MASK) >> EFUSE_INTF0_R_496_LSB)
#define EFUSE_INTF0_R_496_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_496_LSB) & EFUSE_INTF0_R_496_MASK)
#define EFUSE_INTF0_R_496_RESET                                                0x0
#define EFUSE_INTF0_496_ADDRESS                                                (0xfc0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_496_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_496_RESET                                                  0x0

// 0xfc4 (EFUSE_INTF0_497)
#define EFUSE_INTF0_R_497_LSB                                                  0
#define EFUSE_INTF0_R_497_MSB                                                  31
#define EFUSE_INTF0_R_497_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_497_GET(x)                                               (((x) & EFUSE_INTF0_R_497_MASK) >> EFUSE_INTF0_R_497_LSB)
#define EFUSE_INTF0_R_497_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_497_LSB) & EFUSE_INTF0_R_497_MASK)
#define EFUSE_INTF0_R_497_RESET                                                0x0
#define EFUSE_INTF0_497_ADDRESS                                                (0xfc4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_497_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_497_RESET                                                  0x0

// 0xfc8 (EFUSE_INTF0_498)
#define EFUSE_INTF0_R_498_LSB                                                  0
#define EFUSE_INTF0_R_498_MSB                                                  31
#define EFUSE_INTF0_R_498_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_498_GET(x)                                               (((x) & EFUSE_INTF0_R_498_MASK) >> EFUSE_INTF0_R_498_LSB)
#define EFUSE_INTF0_R_498_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_498_LSB) & EFUSE_INTF0_R_498_MASK)
#define EFUSE_INTF0_R_498_RESET                                                0x0
#define EFUSE_INTF0_498_ADDRESS                                                (0xfc8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_498_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_498_RESET                                                  0x0

// 0xfcc (EFUSE_INTF0_499)
#define EFUSE_INTF0_R_499_LSB                                                  0
#define EFUSE_INTF0_R_499_MSB                                                  31
#define EFUSE_INTF0_R_499_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_499_GET(x)                                               (((x) & EFUSE_INTF0_R_499_MASK) >> EFUSE_INTF0_R_499_LSB)
#define EFUSE_INTF0_R_499_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_499_LSB) & EFUSE_INTF0_R_499_MASK)
#define EFUSE_INTF0_R_499_RESET                                                0x0
#define EFUSE_INTF0_499_ADDRESS                                                (0xfcc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_499_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_499_RESET                                                  0x0

// 0xfd0 (EFUSE_INTF0_500)
#define EFUSE_INTF0_R_500_LSB                                                  0
#define EFUSE_INTF0_R_500_MSB                                                  31
#define EFUSE_INTF0_R_500_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_500_GET(x)                                               (((x) & EFUSE_INTF0_R_500_MASK) >> EFUSE_INTF0_R_500_LSB)
#define EFUSE_INTF0_R_500_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_500_LSB) & EFUSE_INTF0_R_500_MASK)
#define EFUSE_INTF0_R_500_RESET                                                0x0
#define EFUSE_INTF0_500_ADDRESS                                                (0xfd0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_500_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_500_RESET                                                  0x0

// 0xfd4 (EFUSE_INTF0_501)
#define EFUSE_INTF0_R_501_LSB                                                  0
#define EFUSE_INTF0_R_501_MSB                                                  31
#define EFUSE_INTF0_R_501_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_501_GET(x)                                               (((x) & EFUSE_INTF0_R_501_MASK) >> EFUSE_INTF0_R_501_LSB)
#define EFUSE_INTF0_R_501_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_501_LSB) & EFUSE_INTF0_R_501_MASK)
#define EFUSE_INTF0_R_501_RESET                                                0x0
#define EFUSE_INTF0_501_ADDRESS                                                (0xfd4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_501_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_501_RESET                                                  0x0

// 0xfd8 (EFUSE_INTF0_502)
#define EFUSE_INTF0_R_502_LSB                                                  0
#define EFUSE_INTF0_R_502_MSB                                                  31
#define EFUSE_INTF0_R_502_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_502_GET(x)                                               (((x) & EFUSE_INTF0_R_502_MASK) >> EFUSE_INTF0_R_502_LSB)
#define EFUSE_INTF0_R_502_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_502_LSB) & EFUSE_INTF0_R_502_MASK)
#define EFUSE_INTF0_R_502_RESET                                                0x0
#define EFUSE_INTF0_502_ADDRESS                                                (0xfd8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_502_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_502_RESET                                                  0x0

// 0xfdc (EFUSE_INTF0_503)
#define EFUSE_INTF0_R_503_LSB                                                  0
#define EFUSE_INTF0_R_503_MSB                                                  31
#define EFUSE_INTF0_R_503_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_503_GET(x)                                               (((x) & EFUSE_INTF0_R_503_MASK) >> EFUSE_INTF0_R_503_LSB)
#define EFUSE_INTF0_R_503_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_503_LSB) & EFUSE_INTF0_R_503_MASK)
#define EFUSE_INTF0_R_503_RESET                                                0x0
#define EFUSE_INTF0_503_ADDRESS                                                (0xfdc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_503_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_503_RESET                                                  0x0

// 0xfe0 (EFUSE_INTF0_504)
#define EFUSE_INTF0_R_504_LSB                                                  0
#define EFUSE_INTF0_R_504_MSB                                                  31
#define EFUSE_INTF0_R_504_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_504_GET(x)                                               (((x) & EFUSE_INTF0_R_504_MASK) >> EFUSE_INTF0_R_504_LSB)
#define EFUSE_INTF0_R_504_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_504_LSB) & EFUSE_INTF0_R_504_MASK)
#define EFUSE_INTF0_R_504_RESET                                                0x0
#define EFUSE_INTF0_504_ADDRESS                                                (0xfe0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_504_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_504_RESET                                                  0x0

// 0xfe4 (EFUSE_INTF0_505)
#define EFUSE_INTF0_R_505_LSB                                                  0
#define EFUSE_INTF0_R_505_MSB                                                  31
#define EFUSE_INTF0_R_505_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_505_GET(x)                                               (((x) & EFUSE_INTF0_R_505_MASK) >> EFUSE_INTF0_R_505_LSB)
#define EFUSE_INTF0_R_505_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_505_LSB) & EFUSE_INTF0_R_505_MASK)
#define EFUSE_INTF0_R_505_RESET                                                0x0
#define EFUSE_INTF0_505_ADDRESS                                                (0xfe4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_505_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_505_RESET                                                  0x0

// 0xfe8 (EFUSE_INTF0_506)
#define EFUSE_INTF0_R_506_LSB                                                  0
#define EFUSE_INTF0_R_506_MSB                                                  31
#define EFUSE_INTF0_R_506_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_506_GET(x)                                               (((x) & EFUSE_INTF0_R_506_MASK) >> EFUSE_INTF0_R_506_LSB)
#define EFUSE_INTF0_R_506_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_506_LSB) & EFUSE_INTF0_R_506_MASK)
#define EFUSE_INTF0_R_506_RESET                                                0x0
#define EFUSE_INTF0_506_ADDRESS                                                (0xfe8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_506_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_506_RESET                                                  0x0

// 0xfec (EFUSE_INTF0_507)
#define EFUSE_INTF0_R_507_LSB                                                  0
#define EFUSE_INTF0_R_507_MSB                                                  31
#define EFUSE_INTF0_R_507_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_507_GET(x)                                               (((x) & EFUSE_INTF0_R_507_MASK) >> EFUSE_INTF0_R_507_LSB)
#define EFUSE_INTF0_R_507_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_507_LSB) & EFUSE_INTF0_R_507_MASK)
#define EFUSE_INTF0_R_507_RESET                                                0x0
#define EFUSE_INTF0_507_ADDRESS                                                (0xfec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_507_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_507_RESET                                                  0x0

// 0xff0 (EFUSE_INTF0_508)
#define EFUSE_INTF0_R_508_LSB                                                  0
#define EFUSE_INTF0_R_508_MSB                                                  31
#define EFUSE_INTF0_R_508_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_508_GET(x)                                               (((x) & EFUSE_INTF0_R_508_MASK) >> EFUSE_INTF0_R_508_LSB)
#define EFUSE_INTF0_R_508_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_508_LSB) & EFUSE_INTF0_R_508_MASK)
#define EFUSE_INTF0_R_508_RESET                                                0x0
#define EFUSE_INTF0_508_ADDRESS                                                (0xff0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_508_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_508_RESET                                                  0x0

// 0xff4 (EFUSE_INTF0_509)
#define EFUSE_INTF0_R_509_LSB                                                  0
#define EFUSE_INTF0_R_509_MSB                                                  31
#define EFUSE_INTF0_R_509_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_509_GET(x)                                               (((x) & EFUSE_INTF0_R_509_MASK) >> EFUSE_INTF0_R_509_LSB)
#define EFUSE_INTF0_R_509_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_509_LSB) & EFUSE_INTF0_R_509_MASK)
#define EFUSE_INTF0_R_509_RESET                                                0x0
#define EFUSE_INTF0_509_ADDRESS                                                (0xff4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_509_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_509_RESET                                                  0x0

// 0xff8 (EFUSE_INTF0_510)
#define EFUSE_INTF0_R_510_LSB                                                  0
#define EFUSE_INTF0_R_510_MSB                                                  31
#define EFUSE_INTF0_R_510_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_510_GET(x)                                               (((x) & EFUSE_INTF0_R_510_MASK) >> EFUSE_INTF0_R_510_LSB)
#define EFUSE_INTF0_R_510_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_510_LSB) & EFUSE_INTF0_R_510_MASK)
#define EFUSE_INTF0_R_510_RESET                                                0x0
#define EFUSE_INTF0_510_ADDRESS                                                (0xff8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_510_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_510_RESET                                                  0x0

// 0xffc (EFUSE_INTF0_511)
#define EFUSE_INTF0_R_511_LSB                                                  0
#define EFUSE_INTF0_R_511_MSB                                                  31
#define EFUSE_INTF0_R_511_MASK                                                 0xffffffff
#define EFUSE_INTF0_R_511_GET(x)                                               (((x) & EFUSE_INTF0_R_511_MASK) >> EFUSE_INTF0_R_511_LSB)
#define EFUSE_INTF0_R_511_SET(x)                                               (((0 | (x)) << EFUSE_INTF0_R_511_LSB) & EFUSE_INTF0_R_511_MASK)
#define EFUSE_INTF0_R_511_RESET                                                0x0
#define EFUSE_INTF0_511_ADDRESS                                                (0xffc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF0_511_RSTMASK                                                0xffffffff
#define EFUSE_INTF0_511_RESET                                                  0x0

// 0x1000 (EFUSE_INTF1)
#define EFUSE_INTF1_R_LSB                                                      0
#define EFUSE_INTF1_R_MSB                                                      31
#define EFUSE_INTF1_R_MASK                                                     0xffffffff
#define EFUSE_INTF1_R_GET(x)                                                   (((x) & EFUSE_INTF1_R_MASK) >> EFUSE_INTF1_R_LSB)
#define EFUSE_INTF1_R_SET(x)                                                   (((0 | (x)) << EFUSE_INTF1_R_LSB) & EFUSE_INTF1_R_MASK)
#define EFUSE_INTF1_R_RESET                                                    0x0
#define EFUSE_INTF1_ADDRESS                                                    (0x1000 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_RSTMASK                                                    0xffffffff
#define EFUSE_INTF1_RESET                                                      0x0

// 0x1000 (EFUSE_INTF1_0)
#define EFUSE_INTF1_R_0_LSB                                                    0
#define EFUSE_INTF1_R_0_MSB                                                    31
#define EFUSE_INTF1_R_0_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_0_GET(x)                                                 (((x) & EFUSE_INTF1_R_0_MASK) >> EFUSE_INTF1_R_0_LSB)
#define EFUSE_INTF1_R_0_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_0_LSB) & EFUSE_INTF1_R_0_MASK)
#define EFUSE_INTF1_R_0_RESET                                                  0x0
#define EFUSE_INTF1_0_ADDRESS                                                  (0x1000 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_0_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_0_RESET                                                    0x0

// 0x1004 (EFUSE_INTF1_1)
#define EFUSE_INTF1_R_1_LSB                                                    0
#define EFUSE_INTF1_R_1_MSB                                                    31
#define EFUSE_INTF1_R_1_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_1_GET(x)                                                 (((x) & EFUSE_INTF1_R_1_MASK) >> EFUSE_INTF1_R_1_LSB)
#define EFUSE_INTF1_R_1_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_1_LSB) & EFUSE_INTF1_R_1_MASK)
#define EFUSE_INTF1_R_1_RESET                                                  0x0
#define EFUSE_INTF1_1_ADDRESS                                                  (0x1004 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_1_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_1_RESET                                                    0x0

// 0x1008 (EFUSE_INTF1_2)
#define EFUSE_INTF1_R_2_LSB                                                    0
#define EFUSE_INTF1_R_2_MSB                                                    31
#define EFUSE_INTF1_R_2_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_2_GET(x)                                                 (((x) & EFUSE_INTF1_R_2_MASK) >> EFUSE_INTF1_R_2_LSB)
#define EFUSE_INTF1_R_2_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_2_LSB) & EFUSE_INTF1_R_2_MASK)
#define EFUSE_INTF1_R_2_RESET                                                  0x0
#define EFUSE_INTF1_2_ADDRESS                                                  (0x1008 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_2_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_2_RESET                                                    0x0

// 0x100c (EFUSE_INTF1_3)
#define EFUSE_INTF1_R_3_LSB                                                    0
#define EFUSE_INTF1_R_3_MSB                                                    31
#define EFUSE_INTF1_R_3_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_3_GET(x)                                                 (((x) & EFUSE_INTF1_R_3_MASK) >> EFUSE_INTF1_R_3_LSB)
#define EFUSE_INTF1_R_3_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_3_LSB) & EFUSE_INTF1_R_3_MASK)
#define EFUSE_INTF1_R_3_RESET                                                  0x0
#define EFUSE_INTF1_3_ADDRESS                                                  (0x100c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_3_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_3_RESET                                                    0x0

// 0x1010 (EFUSE_INTF1_4)
#define EFUSE_INTF1_R_4_LSB                                                    0
#define EFUSE_INTF1_R_4_MSB                                                    31
#define EFUSE_INTF1_R_4_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_4_GET(x)                                                 (((x) & EFUSE_INTF1_R_4_MASK) >> EFUSE_INTF1_R_4_LSB)
#define EFUSE_INTF1_R_4_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_4_LSB) & EFUSE_INTF1_R_4_MASK)
#define EFUSE_INTF1_R_4_RESET                                                  0x0
#define EFUSE_INTF1_4_ADDRESS                                                  (0x1010 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_4_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_4_RESET                                                    0x0

// 0x1014 (EFUSE_INTF1_5)
#define EFUSE_INTF1_R_5_LSB                                                    0
#define EFUSE_INTF1_R_5_MSB                                                    31
#define EFUSE_INTF1_R_5_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_5_GET(x)                                                 (((x) & EFUSE_INTF1_R_5_MASK) >> EFUSE_INTF1_R_5_LSB)
#define EFUSE_INTF1_R_5_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_5_LSB) & EFUSE_INTF1_R_5_MASK)
#define EFUSE_INTF1_R_5_RESET                                                  0x0
#define EFUSE_INTF1_5_ADDRESS                                                  (0x1014 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_5_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_5_RESET                                                    0x0

// 0x1018 (EFUSE_INTF1_6)
#define EFUSE_INTF1_R_6_LSB                                                    0
#define EFUSE_INTF1_R_6_MSB                                                    31
#define EFUSE_INTF1_R_6_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_6_GET(x)                                                 (((x) & EFUSE_INTF1_R_6_MASK) >> EFUSE_INTF1_R_6_LSB)
#define EFUSE_INTF1_R_6_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_6_LSB) & EFUSE_INTF1_R_6_MASK)
#define EFUSE_INTF1_R_6_RESET                                                  0x0
#define EFUSE_INTF1_6_ADDRESS                                                  (0x1018 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_6_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_6_RESET                                                    0x0

// 0x101c (EFUSE_INTF1_7)
#define EFUSE_INTF1_R_7_LSB                                                    0
#define EFUSE_INTF1_R_7_MSB                                                    31
#define EFUSE_INTF1_R_7_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_7_GET(x)                                                 (((x) & EFUSE_INTF1_R_7_MASK) >> EFUSE_INTF1_R_7_LSB)
#define EFUSE_INTF1_R_7_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_7_LSB) & EFUSE_INTF1_R_7_MASK)
#define EFUSE_INTF1_R_7_RESET                                                  0x0
#define EFUSE_INTF1_7_ADDRESS                                                  (0x101c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_7_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_7_RESET                                                    0x0

// 0x1020 (EFUSE_INTF1_8)
#define EFUSE_INTF1_R_8_LSB                                                    0
#define EFUSE_INTF1_R_8_MSB                                                    31
#define EFUSE_INTF1_R_8_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_8_GET(x)                                                 (((x) & EFUSE_INTF1_R_8_MASK) >> EFUSE_INTF1_R_8_LSB)
#define EFUSE_INTF1_R_8_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_8_LSB) & EFUSE_INTF1_R_8_MASK)
#define EFUSE_INTF1_R_8_RESET                                                  0x0
#define EFUSE_INTF1_8_ADDRESS                                                  (0x1020 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_8_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_8_RESET                                                    0x0

// 0x1024 (EFUSE_INTF1_9)
#define EFUSE_INTF1_R_9_LSB                                                    0
#define EFUSE_INTF1_R_9_MSB                                                    31
#define EFUSE_INTF1_R_9_MASK                                                   0xffffffff
#define EFUSE_INTF1_R_9_GET(x)                                                 (((x) & EFUSE_INTF1_R_9_MASK) >> EFUSE_INTF1_R_9_LSB)
#define EFUSE_INTF1_R_9_SET(x)                                                 (((0 | (x)) << EFUSE_INTF1_R_9_LSB) & EFUSE_INTF1_R_9_MASK)
#define EFUSE_INTF1_R_9_RESET                                                  0x0
#define EFUSE_INTF1_9_ADDRESS                                                  (0x1024 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_9_RSTMASK                                                  0xffffffff
#define EFUSE_INTF1_9_RESET                                                    0x0

// 0x1028 (EFUSE_INTF1_10)
#define EFUSE_INTF1_R_10_LSB                                                   0
#define EFUSE_INTF1_R_10_MSB                                                   31
#define EFUSE_INTF1_R_10_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_10_GET(x)                                                (((x) & EFUSE_INTF1_R_10_MASK) >> EFUSE_INTF1_R_10_LSB)
#define EFUSE_INTF1_R_10_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_10_LSB) & EFUSE_INTF1_R_10_MASK)
#define EFUSE_INTF1_R_10_RESET                                                 0x0
#define EFUSE_INTF1_10_ADDRESS                                                 (0x1028 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_10_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_10_RESET                                                   0x0

// 0x102c (EFUSE_INTF1_11)
#define EFUSE_INTF1_R_11_LSB                                                   0
#define EFUSE_INTF1_R_11_MSB                                                   31
#define EFUSE_INTF1_R_11_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_11_GET(x)                                                (((x) & EFUSE_INTF1_R_11_MASK) >> EFUSE_INTF1_R_11_LSB)
#define EFUSE_INTF1_R_11_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_11_LSB) & EFUSE_INTF1_R_11_MASK)
#define EFUSE_INTF1_R_11_RESET                                                 0x0
#define EFUSE_INTF1_11_ADDRESS                                                 (0x102c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_11_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_11_RESET                                                   0x0

// 0x1030 (EFUSE_INTF1_12)
#define EFUSE_INTF1_R_12_LSB                                                   0
#define EFUSE_INTF1_R_12_MSB                                                   31
#define EFUSE_INTF1_R_12_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_12_GET(x)                                                (((x) & EFUSE_INTF1_R_12_MASK) >> EFUSE_INTF1_R_12_LSB)
#define EFUSE_INTF1_R_12_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_12_LSB) & EFUSE_INTF1_R_12_MASK)
#define EFUSE_INTF1_R_12_RESET                                                 0x0
#define EFUSE_INTF1_12_ADDRESS                                                 (0x1030 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_12_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_12_RESET                                                   0x0

// 0x1034 (EFUSE_INTF1_13)
#define EFUSE_INTF1_R_13_LSB                                                   0
#define EFUSE_INTF1_R_13_MSB                                                   31
#define EFUSE_INTF1_R_13_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_13_GET(x)                                                (((x) & EFUSE_INTF1_R_13_MASK) >> EFUSE_INTF1_R_13_LSB)
#define EFUSE_INTF1_R_13_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_13_LSB) & EFUSE_INTF1_R_13_MASK)
#define EFUSE_INTF1_R_13_RESET                                                 0x0
#define EFUSE_INTF1_13_ADDRESS                                                 (0x1034 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_13_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_13_RESET                                                   0x0

// 0x1038 (EFUSE_INTF1_14)
#define EFUSE_INTF1_R_14_LSB                                                   0
#define EFUSE_INTF1_R_14_MSB                                                   31
#define EFUSE_INTF1_R_14_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_14_GET(x)                                                (((x) & EFUSE_INTF1_R_14_MASK) >> EFUSE_INTF1_R_14_LSB)
#define EFUSE_INTF1_R_14_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_14_LSB) & EFUSE_INTF1_R_14_MASK)
#define EFUSE_INTF1_R_14_RESET                                                 0x0
#define EFUSE_INTF1_14_ADDRESS                                                 (0x1038 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_14_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_14_RESET                                                   0x0

// 0x103c (EFUSE_INTF1_15)
#define EFUSE_INTF1_R_15_LSB                                                   0
#define EFUSE_INTF1_R_15_MSB                                                   31
#define EFUSE_INTF1_R_15_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_15_GET(x)                                                (((x) & EFUSE_INTF1_R_15_MASK) >> EFUSE_INTF1_R_15_LSB)
#define EFUSE_INTF1_R_15_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_15_LSB) & EFUSE_INTF1_R_15_MASK)
#define EFUSE_INTF1_R_15_RESET                                                 0x0
#define EFUSE_INTF1_15_ADDRESS                                                 (0x103c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_15_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_15_RESET                                                   0x0

// 0x1040 (EFUSE_INTF1_16)
#define EFUSE_INTF1_R_16_LSB                                                   0
#define EFUSE_INTF1_R_16_MSB                                                   31
#define EFUSE_INTF1_R_16_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_16_GET(x)                                                (((x) & EFUSE_INTF1_R_16_MASK) >> EFUSE_INTF1_R_16_LSB)
#define EFUSE_INTF1_R_16_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_16_LSB) & EFUSE_INTF1_R_16_MASK)
#define EFUSE_INTF1_R_16_RESET                                                 0x0
#define EFUSE_INTF1_16_ADDRESS                                                 (0x1040 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_16_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_16_RESET                                                   0x0

// 0x1044 (EFUSE_INTF1_17)
#define EFUSE_INTF1_R_17_LSB                                                   0
#define EFUSE_INTF1_R_17_MSB                                                   31
#define EFUSE_INTF1_R_17_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_17_GET(x)                                                (((x) & EFUSE_INTF1_R_17_MASK) >> EFUSE_INTF1_R_17_LSB)
#define EFUSE_INTF1_R_17_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_17_LSB) & EFUSE_INTF1_R_17_MASK)
#define EFUSE_INTF1_R_17_RESET                                                 0x0
#define EFUSE_INTF1_17_ADDRESS                                                 (0x1044 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_17_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_17_RESET                                                   0x0

// 0x1048 (EFUSE_INTF1_18)
#define EFUSE_INTF1_R_18_LSB                                                   0
#define EFUSE_INTF1_R_18_MSB                                                   31
#define EFUSE_INTF1_R_18_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_18_GET(x)                                                (((x) & EFUSE_INTF1_R_18_MASK) >> EFUSE_INTF1_R_18_LSB)
#define EFUSE_INTF1_R_18_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_18_LSB) & EFUSE_INTF1_R_18_MASK)
#define EFUSE_INTF1_R_18_RESET                                                 0x0
#define EFUSE_INTF1_18_ADDRESS                                                 (0x1048 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_18_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_18_RESET                                                   0x0

// 0x104c (EFUSE_INTF1_19)
#define EFUSE_INTF1_R_19_LSB                                                   0
#define EFUSE_INTF1_R_19_MSB                                                   31
#define EFUSE_INTF1_R_19_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_19_GET(x)                                                (((x) & EFUSE_INTF1_R_19_MASK) >> EFUSE_INTF1_R_19_LSB)
#define EFUSE_INTF1_R_19_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_19_LSB) & EFUSE_INTF1_R_19_MASK)
#define EFUSE_INTF1_R_19_RESET                                                 0x0
#define EFUSE_INTF1_19_ADDRESS                                                 (0x104c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_19_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_19_RESET                                                   0x0

// 0x1050 (EFUSE_INTF1_20)
#define EFUSE_INTF1_R_20_LSB                                                   0
#define EFUSE_INTF1_R_20_MSB                                                   31
#define EFUSE_INTF1_R_20_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_20_GET(x)                                                (((x) & EFUSE_INTF1_R_20_MASK) >> EFUSE_INTF1_R_20_LSB)
#define EFUSE_INTF1_R_20_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_20_LSB) & EFUSE_INTF1_R_20_MASK)
#define EFUSE_INTF1_R_20_RESET                                                 0x0
#define EFUSE_INTF1_20_ADDRESS                                                 (0x1050 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_20_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_20_RESET                                                   0x0

// 0x1054 (EFUSE_INTF1_21)
#define EFUSE_INTF1_R_21_LSB                                                   0
#define EFUSE_INTF1_R_21_MSB                                                   31
#define EFUSE_INTF1_R_21_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_21_GET(x)                                                (((x) & EFUSE_INTF1_R_21_MASK) >> EFUSE_INTF1_R_21_LSB)
#define EFUSE_INTF1_R_21_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_21_LSB) & EFUSE_INTF1_R_21_MASK)
#define EFUSE_INTF1_R_21_RESET                                                 0x0
#define EFUSE_INTF1_21_ADDRESS                                                 (0x1054 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_21_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_21_RESET                                                   0x0

// 0x1058 (EFUSE_INTF1_22)
#define EFUSE_INTF1_R_22_LSB                                                   0
#define EFUSE_INTF1_R_22_MSB                                                   31
#define EFUSE_INTF1_R_22_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_22_GET(x)                                                (((x) & EFUSE_INTF1_R_22_MASK) >> EFUSE_INTF1_R_22_LSB)
#define EFUSE_INTF1_R_22_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_22_LSB) & EFUSE_INTF1_R_22_MASK)
#define EFUSE_INTF1_R_22_RESET                                                 0x0
#define EFUSE_INTF1_22_ADDRESS                                                 (0x1058 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_22_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_22_RESET                                                   0x0

// 0x105c (EFUSE_INTF1_23)
#define EFUSE_INTF1_R_23_LSB                                                   0
#define EFUSE_INTF1_R_23_MSB                                                   31
#define EFUSE_INTF1_R_23_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_23_GET(x)                                                (((x) & EFUSE_INTF1_R_23_MASK) >> EFUSE_INTF1_R_23_LSB)
#define EFUSE_INTF1_R_23_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_23_LSB) & EFUSE_INTF1_R_23_MASK)
#define EFUSE_INTF1_R_23_RESET                                                 0x0
#define EFUSE_INTF1_23_ADDRESS                                                 (0x105c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_23_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_23_RESET                                                   0x0

// 0x1060 (EFUSE_INTF1_24)
#define EFUSE_INTF1_R_24_LSB                                                   0
#define EFUSE_INTF1_R_24_MSB                                                   31
#define EFUSE_INTF1_R_24_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_24_GET(x)                                                (((x) & EFUSE_INTF1_R_24_MASK) >> EFUSE_INTF1_R_24_LSB)
#define EFUSE_INTF1_R_24_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_24_LSB) & EFUSE_INTF1_R_24_MASK)
#define EFUSE_INTF1_R_24_RESET                                                 0x0
#define EFUSE_INTF1_24_ADDRESS                                                 (0x1060 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_24_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_24_RESET                                                   0x0

// 0x1064 (EFUSE_INTF1_25)
#define EFUSE_INTF1_R_25_LSB                                                   0
#define EFUSE_INTF1_R_25_MSB                                                   31
#define EFUSE_INTF1_R_25_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_25_GET(x)                                                (((x) & EFUSE_INTF1_R_25_MASK) >> EFUSE_INTF1_R_25_LSB)
#define EFUSE_INTF1_R_25_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_25_LSB) & EFUSE_INTF1_R_25_MASK)
#define EFUSE_INTF1_R_25_RESET                                                 0x0
#define EFUSE_INTF1_25_ADDRESS                                                 (0x1064 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_25_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_25_RESET                                                   0x0

// 0x1068 (EFUSE_INTF1_26)
#define EFUSE_INTF1_R_26_LSB                                                   0
#define EFUSE_INTF1_R_26_MSB                                                   31
#define EFUSE_INTF1_R_26_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_26_GET(x)                                                (((x) & EFUSE_INTF1_R_26_MASK) >> EFUSE_INTF1_R_26_LSB)
#define EFUSE_INTF1_R_26_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_26_LSB) & EFUSE_INTF1_R_26_MASK)
#define EFUSE_INTF1_R_26_RESET                                                 0x0
#define EFUSE_INTF1_26_ADDRESS                                                 (0x1068 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_26_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_26_RESET                                                   0x0

// 0x106c (EFUSE_INTF1_27)
#define EFUSE_INTF1_R_27_LSB                                                   0
#define EFUSE_INTF1_R_27_MSB                                                   31
#define EFUSE_INTF1_R_27_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_27_GET(x)                                                (((x) & EFUSE_INTF1_R_27_MASK) >> EFUSE_INTF1_R_27_LSB)
#define EFUSE_INTF1_R_27_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_27_LSB) & EFUSE_INTF1_R_27_MASK)
#define EFUSE_INTF1_R_27_RESET                                                 0x0
#define EFUSE_INTF1_27_ADDRESS                                                 (0x106c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_27_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_27_RESET                                                   0x0

// 0x1070 (EFUSE_INTF1_28)
#define EFUSE_INTF1_R_28_LSB                                                   0
#define EFUSE_INTF1_R_28_MSB                                                   31
#define EFUSE_INTF1_R_28_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_28_GET(x)                                                (((x) & EFUSE_INTF1_R_28_MASK) >> EFUSE_INTF1_R_28_LSB)
#define EFUSE_INTF1_R_28_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_28_LSB) & EFUSE_INTF1_R_28_MASK)
#define EFUSE_INTF1_R_28_RESET                                                 0x0
#define EFUSE_INTF1_28_ADDRESS                                                 (0x1070 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_28_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_28_RESET                                                   0x0

// 0x1074 (EFUSE_INTF1_29)
#define EFUSE_INTF1_R_29_LSB                                                   0
#define EFUSE_INTF1_R_29_MSB                                                   31
#define EFUSE_INTF1_R_29_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_29_GET(x)                                                (((x) & EFUSE_INTF1_R_29_MASK) >> EFUSE_INTF1_R_29_LSB)
#define EFUSE_INTF1_R_29_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_29_LSB) & EFUSE_INTF1_R_29_MASK)
#define EFUSE_INTF1_R_29_RESET                                                 0x0
#define EFUSE_INTF1_29_ADDRESS                                                 (0x1074 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_29_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_29_RESET                                                   0x0

// 0x1078 (EFUSE_INTF1_30)
#define EFUSE_INTF1_R_30_LSB                                                   0
#define EFUSE_INTF1_R_30_MSB                                                   31
#define EFUSE_INTF1_R_30_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_30_GET(x)                                                (((x) & EFUSE_INTF1_R_30_MASK) >> EFUSE_INTF1_R_30_LSB)
#define EFUSE_INTF1_R_30_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_30_LSB) & EFUSE_INTF1_R_30_MASK)
#define EFUSE_INTF1_R_30_RESET                                                 0x0
#define EFUSE_INTF1_30_ADDRESS                                                 (0x1078 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_30_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_30_RESET                                                   0x0

// 0x107c (EFUSE_INTF1_31)
#define EFUSE_INTF1_R_31_LSB                                                   0
#define EFUSE_INTF1_R_31_MSB                                                   31
#define EFUSE_INTF1_R_31_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_31_GET(x)                                                (((x) & EFUSE_INTF1_R_31_MASK) >> EFUSE_INTF1_R_31_LSB)
#define EFUSE_INTF1_R_31_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_31_LSB) & EFUSE_INTF1_R_31_MASK)
#define EFUSE_INTF1_R_31_RESET                                                 0x0
#define EFUSE_INTF1_31_ADDRESS                                                 (0x107c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_31_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_31_RESET                                                   0x0

// 0x1080 (EFUSE_INTF1_32)
#define EFUSE_INTF1_R_32_LSB                                                   0
#define EFUSE_INTF1_R_32_MSB                                                   31
#define EFUSE_INTF1_R_32_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_32_GET(x)                                                (((x) & EFUSE_INTF1_R_32_MASK) >> EFUSE_INTF1_R_32_LSB)
#define EFUSE_INTF1_R_32_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_32_LSB) & EFUSE_INTF1_R_32_MASK)
#define EFUSE_INTF1_R_32_RESET                                                 0x0
#define EFUSE_INTF1_32_ADDRESS                                                 (0x1080 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_32_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_32_RESET                                                   0x0

// 0x1084 (EFUSE_INTF1_33)
#define EFUSE_INTF1_R_33_LSB                                                   0
#define EFUSE_INTF1_R_33_MSB                                                   31
#define EFUSE_INTF1_R_33_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_33_GET(x)                                                (((x) & EFUSE_INTF1_R_33_MASK) >> EFUSE_INTF1_R_33_LSB)
#define EFUSE_INTF1_R_33_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_33_LSB) & EFUSE_INTF1_R_33_MASK)
#define EFUSE_INTF1_R_33_RESET                                                 0x0
#define EFUSE_INTF1_33_ADDRESS                                                 (0x1084 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_33_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_33_RESET                                                   0x0

// 0x1088 (EFUSE_INTF1_34)
#define EFUSE_INTF1_R_34_LSB                                                   0
#define EFUSE_INTF1_R_34_MSB                                                   31
#define EFUSE_INTF1_R_34_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_34_GET(x)                                                (((x) & EFUSE_INTF1_R_34_MASK) >> EFUSE_INTF1_R_34_LSB)
#define EFUSE_INTF1_R_34_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_34_LSB) & EFUSE_INTF1_R_34_MASK)
#define EFUSE_INTF1_R_34_RESET                                                 0x0
#define EFUSE_INTF1_34_ADDRESS                                                 (0x1088 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_34_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_34_RESET                                                   0x0

// 0x108c (EFUSE_INTF1_35)
#define EFUSE_INTF1_R_35_LSB                                                   0
#define EFUSE_INTF1_R_35_MSB                                                   31
#define EFUSE_INTF1_R_35_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_35_GET(x)                                                (((x) & EFUSE_INTF1_R_35_MASK) >> EFUSE_INTF1_R_35_LSB)
#define EFUSE_INTF1_R_35_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_35_LSB) & EFUSE_INTF1_R_35_MASK)
#define EFUSE_INTF1_R_35_RESET                                                 0x0
#define EFUSE_INTF1_35_ADDRESS                                                 (0x108c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_35_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_35_RESET                                                   0x0

// 0x1090 (EFUSE_INTF1_36)
#define EFUSE_INTF1_R_36_LSB                                                   0
#define EFUSE_INTF1_R_36_MSB                                                   31
#define EFUSE_INTF1_R_36_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_36_GET(x)                                                (((x) & EFUSE_INTF1_R_36_MASK) >> EFUSE_INTF1_R_36_LSB)
#define EFUSE_INTF1_R_36_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_36_LSB) & EFUSE_INTF1_R_36_MASK)
#define EFUSE_INTF1_R_36_RESET                                                 0x0
#define EFUSE_INTF1_36_ADDRESS                                                 (0x1090 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_36_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_36_RESET                                                   0x0

// 0x1094 (EFUSE_INTF1_37)
#define EFUSE_INTF1_R_37_LSB                                                   0
#define EFUSE_INTF1_R_37_MSB                                                   31
#define EFUSE_INTF1_R_37_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_37_GET(x)                                                (((x) & EFUSE_INTF1_R_37_MASK) >> EFUSE_INTF1_R_37_LSB)
#define EFUSE_INTF1_R_37_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_37_LSB) & EFUSE_INTF1_R_37_MASK)
#define EFUSE_INTF1_R_37_RESET                                                 0x0
#define EFUSE_INTF1_37_ADDRESS                                                 (0x1094 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_37_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_37_RESET                                                   0x0

// 0x1098 (EFUSE_INTF1_38)
#define EFUSE_INTF1_R_38_LSB                                                   0
#define EFUSE_INTF1_R_38_MSB                                                   31
#define EFUSE_INTF1_R_38_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_38_GET(x)                                                (((x) & EFUSE_INTF1_R_38_MASK) >> EFUSE_INTF1_R_38_LSB)
#define EFUSE_INTF1_R_38_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_38_LSB) & EFUSE_INTF1_R_38_MASK)
#define EFUSE_INTF1_R_38_RESET                                                 0x0
#define EFUSE_INTF1_38_ADDRESS                                                 (0x1098 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_38_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_38_RESET                                                   0x0

// 0x109c (EFUSE_INTF1_39)
#define EFUSE_INTF1_R_39_LSB                                                   0
#define EFUSE_INTF1_R_39_MSB                                                   31
#define EFUSE_INTF1_R_39_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_39_GET(x)                                                (((x) & EFUSE_INTF1_R_39_MASK) >> EFUSE_INTF1_R_39_LSB)
#define EFUSE_INTF1_R_39_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_39_LSB) & EFUSE_INTF1_R_39_MASK)
#define EFUSE_INTF1_R_39_RESET                                                 0x0
#define EFUSE_INTF1_39_ADDRESS                                                 (0x109c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_39_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_39_RESET                                                   0x0

// 0x10a0 (EFUSE_INTF1_40)
#define EFUSE_INTF1_R_40_LSB                                                   0
#define EFUSE_INTF1_R_40_MSB                                                   31
#define EFUSE_INTF1_R_40_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_40_GET(x)                                                (((x) & EFUSE_INTF1_R_40_MASK) >> EFUSE_INTF1_R_40_LSB)
#define EFUSE_INTF1_R_40_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_40_LSB) & EFUSE_INTF1_R_40_MASK)
#define EFUSE_INTF1_R_40_RESET                                                 0x0
#define EFUSE_INTF1_40_ADDRESS                                                 (0x10a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_40_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_40_RESET                                                   0x0

// 0x10a4 (EFUSE_INTF1_41)
#define EFUSE_INTF1_R_41_LSB                                                   0
#define EFUSE_INTF1_R_41_MSB                                                   31
#define EFUSE_INTF1_R_41_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_41_GET(x)                                                (((x) & EFUSE_INTF1_R_41_MASK) >> EFUSE_INTF1_R_41_LSB)
#define EFUSE_INTF1_R_41_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_41_LSB) & EFUSE_INTF1_R_41_MASK)
#define EFUSE_INTF1_R_41_RESET                                                 0x0
#define EFUSE_INTF1_41_ADDRESS                                                 (0x10a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_41_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_41_RESET                                                   0x0

// 0x10a8 (EFUSE_INTF1_42)
#define EFUSE_INTF1_R_42_LSB                                                   0
#define EFUSE_INTF1_R_42_MSB                                                   31
#define EFUSE_INTF1_R_42_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_42_GET(x)                                                (((x) & EFUSE_INTF1_R_42_MASK) >> EFUSE_INTF1_R_42_LSB)
#define EFUSE_INTF1_R_42_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_42_LSB) & EFUSE_INTF1_R_42_MASK)
#define EFUSE_INTF1_R_42_RESET                                                 0x0
#define EFUSE_INTF1_42_ADDRESS                                                 (0x10a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_42_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_42_RESET                                                   0x0

// 0x10ac (EFUSE_INTF1_43)
#define EFUSE_INTF1_R_43_LSB                                                   0
#define EFUSE_INTF1_R_43_MSB                                                   31
#define EFUSE_INTF1_R_43_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_43_GET(x)                                                (((x) & EFUSE_INTF1_R_43_MASK) >> EFUSE_INTF1_R_43_LSB)
#define EFUSE_INTF1_R_43_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_43_LSB) & EFUSE_INTF1_R_43_MASK)
#define EFUSE_INTF1_R_43_RESET                                                 0x0
#define EFUSE_INTF1_43_ADDRESS                                                 (0x10ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_43_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_43_RESET                                                   0x0

// 0x10b0 (EFUSE_INTF1_44)
#define EFUSE_INTF1_R_44_LSB                                                   0
#define EFUSE_INTF1_R_44_MSB                                                   31
#define EFUSE_INTF1_R_44_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_44_GET(x)                                                (((x) & EFUSE_INTF1_R_44_MASK) >> EFUSE_INTF1_R_44_LSB)
#define EFUSE_INTF1_R_44_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_44_LSB) & EFUSE_INTF1_R_44_MASK)
#define EFUSE_INTF1_R_44_RESET                                                 0x0
#define EFUSE_INTF1_44_ADDRESS                                                 (0x10b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_44_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_44_RESET                                                   0x0

// 0x10b4 (EFUSE_INTF1_45)
#define EFUSE_INTF1_R_45_LSB                                                   0
#define EFUSE_INTF1_R_45_MSB                                                   31
#define EFUSE_INTF1_R_45_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_45_GET(x)                                                (((x) & EFUSE_INTF1_R_45_MASK) >> EFUSE_INTF1_R_45_LSB)
#define EFUSE_INTF1_R_45_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_45_LSB) & EFUSE_INTF1_R_45_MASK)
#define EFUSE_INTF1_R_45_RESET                                                 0x0
#define EFUSE_INTF1_45_ADDRESS                                                 (0x10b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_45_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_45_RESET                                                   0x0

// 0x10b8 (EFUSE_INTF1_46)
#define EFUSE_INTF1_R_46_LSB                                                   0
#define EFUSE_INTF1_R_46_MSB                                                   31
#define EFUSE_INTF1_R_46_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_46_GET(x)                                                (((x) & EFUSE_INTF1_R_46_MASK) >> EFUSE_INTF1_R_46_LSB)
#define EFUSE_INTF1_R_46_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_46_LSB) & EFUSE_INTF1_R_46_MASK)
#define EFUSE_INTF1_R_46_RESET                                                 0x0
#define EFUSE_INTF1_46_ADDRESS                                                 (0x10b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_46_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_46_RESET                                                   0x0

// 0x10bc (EFUSE_INTF1_47)
#define EFUSE_INTF1_R_47_LSB                                                   0
#define EFUSE_INTF1_R_47_MSB                                                   31
#define EFUSE_INTF1_R_47_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_47_GET(x)                                                (((x) & EFUSE_INTF1_R_47_MASK) >> EFUSE_INTF1_R_47_LSB)
#define EFUSE_INTF1_R_47_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_47_LSB) & EFUSE_INTF1_R_47_MASK)
#define EFUSE_INTF1_R_47_RESET                                                 0x0
#define EFUSE_INTF1_47_ADDRESS                                                 (0x10bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_47_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_47_RESET                                                   0x0

// 0x10c0 (EFUSE_INTF1_48)
#define EFUSE_INTF1_R_48_LSB                                                   0
#define EFUSE_INTF1_R_48_MSB                                                   31
#define EFUSE_INTF1_R_48_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_48_GET(x)                                                (((x) & EFUSE_INTF1_R_48_MASK) >> EFUSE_INTF1_R_48_LSB)
#define EFUSE_INTF1_R_48_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_48_LSB) & EFUSE_INTF1_R_48_MASK)
#define EFUSE_INTF1_R_48_RESET                                                 0x0
#define EFUSE_INTF1_48_ADDRESS                                                 (0x10c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_48_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_48_RESET                                                   0x0

// 0x10c4 (EFUSE_INTF1_49)
#define EFUSE_INTF1_R_49_LSB                                                   0
#define EFUSE_INTF1_R_49_MSB                                                   31
#define EFUSE_INTF1_R_49_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_49_GET(x)                                                (((x) & EFUSE_INTF1_R_49_MASK) >> EFUSE_INTF1_R_49_LSB)
#define EFUSE_INTF1_R_49_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_49_LSB) & EFUSE_INTF1_R_49_MASK)
#define EFUSE_INTF1_R_49_RESET                                                 0x0
#define EFUSE_INTF1_49_ADDRESS                                                 (0x10c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_49_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_49_RESET                                                   0x0

// 0x10c8 (EFUSE_INTF1_50)
#define EFUSE_INTF1_R_50_LSB                                                   0
#define EFUSE_INTF1_R_50_MSB                                                   31
#define EFUSE_INTF1_R_50_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_50_GET(x)                                                (((x) & EFUSE_INTF1_R_50_MASK) >> EFUSE_INTF1_R_50_LSB)
#define EFUSE_INTF1_R_50_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_50_LSB) & EFUSE_INTF1_R_50_MASK)
#define EFUSE_INTF1_R_50_RESET                                                 0x0
#define EFUSE_INTF1_50_ADDRESS                                                 (0x10c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_50_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_50_RESET                                                   0x0

// 0x10cc (EFUSE_INTF1_51)
#define EFUSE_INTF1_R_51_LSB                                                   0
#define EFUSE_INTF1_R_51_MSB                                                   31
#define EFUSE_INTF1_R_51_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_51_GET(x)                                                (((x) & EFUSE_INTF1_R_51_MASK) >> EFUSE_INTF1_R_51_LSB)
#define EFUSE_INTF1_R_51_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_51_LSB) & EFUSE_INTF1_R_51_MASK)
#define EFUSE_INTF1_R_51_RESET                                                 0x0
#define EFUSE_INTF1_51_ADDRESS                                                 (0x10cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_51_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_51_RESET                                                   0x0

// 0x10d0 (EFUSE_INTF1_52)
#define EFUSE_INTF1_R_52_LSB                                                   0
#define EFUSE_INTF1_R_52_MSB                                                   31
#define EFUSE_INTF1_R_52_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_52_GET(x)                                                (((x) & EFUSE_INTF1_R_52_MASK) >> EFUSE_INTF1_R_52_LSB)
#define EFUSE_INTF1_R_52_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_52_LSB) & EFUSE_INTF1_R_52_MASK)
#define EFUSE_INTF1_R_52_RESET                                                 0x0
#define EFUSE_INTF1_52_ADDRESS                                                 (0x10d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_52_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_52_RESET                                                   0x0

// 0x10d4 (EFUSE_INTF1_53)
#define EFUSE_INTF1_R_53_LSB                                                   0
#define EFUSE_INTF1_R_53_MSB                                                   31
#define EFUSE_INTF1_R_53_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_53_GET(x)                                                (((x) & EFUSE_INTF1_R_53_MASK) >> EFUSE_INTF1_R_53_LSB)
#define EFUSE_INTF1_R_53_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_53_LSB) & EFUSE_INTF1_R_53_MASK)
#define EFUSE_INTF1_R_53_RESET                                                 0x0
#define EFUSE_INTF1_53_ADDRESS                                                 (0x10d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_53_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_53_RESET                                                   0x0

// 0x10d8 (EFUSE_INTF1_54)
#define EFUSE_INTF1_R_54_LSB                                                   0
#define EFUSE_INTF1_R_54_MSB                                                   31
#define EFUSE_INTF1_R_54_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_54_GET(x)                                                (((x) & EFUSE_INTF1_R_54_MASK) >> EFUSE_INTF1_R_54_LSB)
#define EFUSE_INTF1_R_54_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_54_LSB) & EFUSE_INTF1_R_54_MASK)
#define EFUSE_INTF1_R_54_RESET                                                 0x0
#define EFUSE_INTF1_54_ADDRESS                                                 (0x10d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_54_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_54_RESET                                                   0x0

// 0x10dc (EFUSE_INTF1_55)
#define EFUSE_INTF1_R_55_LSB                                                   0
#define EFUSE_INTF1_R_55_MSB                                                   31
#define EFUSE_INTF1_R_55_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_55_GET(x)                                                (((x) & EFUSE_INTF1_R_55_MASK) >> EFUSE_INTF1_R_55_LSB)
#define EFUSE_INTF1_R_55_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_55_LSB) & EFUSE_INTF1_R_55_MASK)
#define EFUSE_INTF1_R_55_RESET                                                 0x0
#define EFUSE_INTF1_55_ADDRESS                                                 (0x10dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_55_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_55_RESET                                                   0x0

// 0x10e0 (EFUSE_INTF1_56)
#define EFUSE_INTF1_R_56_LSB                                                   0
#define EFUSE_INTF1_R_56_MSB                                                   31
#define EFUSE_INTF1_R_56_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_56_GET(x)                                                (((x) & EFUSE_INTF1_R_56_MASK) >> EFUSE_INTF1_R_56_LSB)
#define EFUSE_INTF1_R_56_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_56_LSB) & EFUSE_INTF1_R_56_MASK)
#define EFUSE_INTF1_R_56_RESET                                                 0x0
#define EFUSE_INTF1_56_ADDRESS                                                 (0x10e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_56_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_56_RESET                                                   0x0

// 0x10e4 (EFUSE_INTF1_57)
#define EFUSE_INTF1_R_57_LSB                                                   0
#define EFUSE_INTF1_R_57_MSB                                                   31
#define EFUSE_INTF1_R_57_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_57_GET(x)                                                (((x) & EFUSE_INTF1_R_57_MASK) >> EFUSE_INTF1_R_57_LSB)
#define EFUSE_INTF1_R_57_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_57_LSB) & EFUSE_INTF1_R_57_MASK)
#define EFUSE_INTF1_R_57_RESET                                                 0x0
#define EFUSE_INTF1_57_ADDRESS                                                 (0x10e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_57_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_57_RESET                                                   0x0

// 0x10e8 (EFUSE_INTF1_58)
#define EFUSE_INTF1_R_58_LSB                                                   0
#define EFUSE_INTF1_R_58_MSB                                                   31
#define EFUSE_INTF1_R_58_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_58_GET(x)                                                (((x) & EFUSE_INTF1_R_58_MASK) >> EFUSE_INTF1_R_58_LSB)
#define EFUSE_INTF1_R_58_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_58_LSB) & EFUSE_INTF1_R_58_MASK)
#define EFUSE_INTF1_R_58_RESET                                                 0x0
#define EFUSE_INTF1_58_ADDRESS                                                 (0x10e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_58_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_58_RESET                                                   0x0

// 0x10ec (EFUSE_INTF1_59)
#define EFUSE_INTF1_R_59_LSB                                                   0
#define EFUSE_INTF1_R_59_MSB                                                   31
#define EFUSE_INTF1_R_59_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_59_GET(x)                                                (((x) & EFUSE_INTF1_R_59_MASK) >> EFUSE_INTF1_R_59_LSB)
#define EFUSE_INTF1_R_59_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_59_LSB) & EFUSE_INTF1_R_59_MASK)
#define EFUSE_INTF1_R_59_RESET                                                 0x0
#define EFUSE_INTF1_59_ADDRESS                                                 (0x10ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_59_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_59_RESET                                                   0x0

// 0x10f0 (EFUSE_INTF1_60)
#define EFUSE_INTF1_R_60_LSB                                                   0
#define EFUSE_INTF1_R_60_MSB                                                   31
#define EFUSE_INTF1_R_60_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_60_GET(x)                                                (((x) & EFUSE_INTF1_R_60_MASK) >> EFUSE_INTF1_R_60_LSB)
#define EFUSE_INTF1_R_60_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_60_LSB) & EFUSE_INTF1_R_60_MASK)
#define EFUSE_INTF1_R_60_RESET                                                 0x0
#define EFUSE_INTF1_60_ADDRESS                                                 (0x10f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_60_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_60_RESET                                                   0x0

// 0x10f4 (EFUSE_INTF1_61)
#define EFUSE_INTF1_R_61_LSB                                                   0
#define EFUSE_INTF1_R_61_MSB                                                   31
#define EFUSE_INTF1_R_61_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_61_GET(x)                                                (((x) & EFUSE_INTF1_R_61_MASK) >> EFUSE_INTF1_R_61_LSB)
#define EFUSE_INTF1_R_61_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_61_LSB) & EFUSE_INTF1_R_61_MASK)
#define EFUSE_INTF1_R_61_RESET                                                 0x0
#define EFUSE_INTF1_61_ADDRESS                                                 (0x10f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_61_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_61_RESET                                                   0x0

// 0x10f8 (EFUSE_INTF1_62)
#define EFUSE_INTF1_R_62_LSB                                                   0
#define EFUSE_INTF1_R_62_MSB                                                   31
#define EFUSE_INTF1_R_62_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_62_GET(x)                                                (((x) & EFUSE_INTF1_R_62_MASK) >> EFUSE_INTF1_R_62_LSB)
#define EFUSE_INTF1_R_62_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_62_LSB) & EFUSE_INTF1_R_62_MASK)
#define EFUSE_INTF1_R_62_RESET                                                 0x0
#define EFUSE_INTF1_62_ADDRESS                                                 (0x10f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_62_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_62_RESET                                                   0x0

// 0x10fc (EFUSE_INTF1_63)
#define EFUSE_INTF1_R_63_LSB                                                   0
#define EFUSE_INTF1_R_63_MSB                                                   31
#define EFUSE_INTF1_R_63_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_63_GET(x)                                                (((x) & EFUSE_INTF1_R_63_MASK) >> EFUSE_INTF1_R_63_LSB)
#define EFUSE_INTF1_R_63_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_63_LSB) & EFUSE_INTF1_R_63_MASK)
#define EFUSE_INTF1_R_63_RESET                                                 0x0
#define EFUSE_INTF1_63_ADDRESS                                                 (0x10fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_63_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_63_RESET                                                   0x0

// 0x1100 (EFUSE_INTF1_64)
#define EFUSE_INTF1_R_64_LSB                                                   0
#define EFUSE_INTF1_R_64_MSB                                                   31
#define EFUSE_INTF1_R_64_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_64_GET(x)                                                (((x) & EFUSE_INTF1_R_64_MASK) >> EFUSE_INTF1_R_64_LSB)
#define EFUSE_INTF1_R_64_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_64_LSB) & EFUSE_INTF1_R_64_MASK)
#define EFUSE_INTF1_R_64_RESET                                                 0x0
#define EFUSE_INTF1_64_ADDRESS                                                 (0x1100 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_64_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_64_RESET                                                   0x0

// 0x1104 (EFUSE_INTF1_65)
#define EFUSE_INTF1_R_65_LSB                                                   0
#define EFUSE_INTF1_R_65_MSB                                                   31
#define EFUSE_INTF1_R_65_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_65_GET(x)                                                (((x) & EFUSE_INTF1_R_65_MASK) >> EFUSE_INTF1_R_65_LSB)
#define EFUSE_INTF1_R_65_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_65_LSB) & EFUSE_INTF1_R_65_MASK)
#define EFUSE_INTF1_R_65_RESET                                                 0x0
#define EFUSE_INTF1_65_ADDRESS                                                 (0x1104 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_65_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_65_RESET                                                   0x0

// 0x1108 (EFUSE_INTF1_66)
#define EFUSE_INTF1_R_66_LSB                                                   0
#define EFUSE_INTF1_R_66_MSB                                                   31
#define EFUSE_INTF1_R_66_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_66_GET(x)                                                (((x) & EFUSE_INTF1_R_66_MASK) >> EFUSE_INTF1_R_66_LSB)
#define EFUSE_INTF1_R_66_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_66_LSB) & EFUSE_INTF1_R_66_MASK)
#define EFUSE_INTF1_R_66_RESET                                                 0x0
#define EFUSE_INTF1_66_ADDRESS                                                 (0x1108 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_66_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_66_RESET                                                   0x0

// 0x110c (EFUSE_INTF1_67)
#define EFUSE_INTF1_R_67_LSB                                                   0
#define EFUSE_INTF1_R_67_MSB                                                   31
#define EFUSE_INTF1_R_67_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_67_GET(x)                                                (((x) & EFUSE_INTF1_R_67_MASK) >> EFUSE_INTF1_R_67_LSB)
#define EFUSE_INTF1_R_67_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_67_LSB) & EFUSE_INTF1_R_67_MASK)
#define EFUSE_INTF1_R_67_RESET                                                 0x0
#define EFUSE_INTF1_67_ADDRESS                                                 (0x110c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_67_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_67_RESET                                                   0x0

// 0x1110 (EFUSE_INTF1_68)
#define EFUSE_INTF1_R_68_LSB                                                   0
#define EFUSE_INTF1_R_68_MSB                                                   31
#define EFUSE_INTF1_R_68_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_68_GET(x)                                                (((x) & EFUSE_INTF1_R_68_MASK) >> EFUSE_INTF1_R_68_LSB)
#define EFUSE_INTF1_R_68_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_68_LSB) & EFUSE_INTF1_R_68_MASK)
#define EFUSE_INTF1_R_68_RESET                                                 0x0
#define EFUSE_INTF1_68_ADDRESS                                                 (0x1110 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_68_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_68_RESET                                                   0x0

// 0x1114 (EFUSE_INTF1_69)
#define EFUSE_INTF1_R_69_LSB                                                   0
#define EFUSE_INTF1_R_69_MSB                                                   31
#define EFUSE_INTF1_R_69_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_69_GET(x)                                                (((x) & EFUSE_INTF1_R_69_MASK) >> EFUSE_INTF1_R_69_LSB)
#define EFUSE_INTF1_R_69_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_69_LSB) & EFUSE_INTF1_R_69_MASK)
#define EFUSE_INTF1_R_69_RESET                                                 0x0
#define EFUSE_INTF1_69_ADDRESS                                                 (0x1114 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_69_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_69_RESET                                                   0x0

// 0x1118 (EFUSE_INTF1_70)
#define EFUSE_INTF1_R_70_LSB                                                   0
#define EFUSE_INTF1_R_70_MSB                                                   31
#define EFUSE_INTF1_R_70_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_70_GET(x)                                                (((x) & EFUSE_INTF1_R_70_MASK) >> EFUSE_INTF1_R_70_LSB)
#define EFUSE_INTF1_R_70_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_70_LSB) & EFUSE_INTF1_R_70_MASK)
#define EFUSE_INTF1_R_70_RESET                                                 0x0
#define EFUSE_INTF1_70_ADDRESS                                                 (0x1118 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_70_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_70_RESET                                                   0x0

// 0x111c (EFUSE_INTF1_71)
#define EFUSE_INTF1_R_71_LSB                                                   0
#define EFUSE_INTF1_R_71_MSB                                                   31
#define EFUSE_INTF1_R_71_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_71_GET(x)                                                (((x) & EFUSE_INTF1_R_71_MASK) >> EFUSE_INTF1_R_71_LSB)
#define EFUSE_INTF1_R_71_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_71_LSB) & EFUSE_INTF1_R_71_MASK)
#define EFUSE_INTF1_R_71_RESET                                                 0x0
#define EFUSE_INTF1_71_ADDRESS                                                 (0x111c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_71_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_71_RESET                                                   0x0

// 0x1120 (EFUSE_INTF1_72)
#define EFUSE_INTF1_R_72_LSB                                                   0
#define EFUSE_INTF1_R_72_MSB                                                   31
#define EFUSE_INTF1_R_72_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_72_GET(x)                                                (((x) & EFUSE_INTF1_R_72_MASK) >> EFUSE_INTF1_R_72_LSB)
#define EFUSE_INTF1_R_72_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_72_LSB) & EFUSE_INTF1_R_72_MASK)
#define EFUSE_INTF1_R_72_RESET                                                 0x0
#define EFUSE_INTF1_72_ADDRESS                                                 (0x1120 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_72_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_72_RESET                                                   0x0

// 0x1124 (EFUSE_INTF1_73)
#define EFUSE_INTF1_R_73_LSB                                                   0
#define EFUSE_INTF1_R_73_MSB                                                   31
#define EFUSE_INTF1_R_73_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_73_GET(x)                                                (((x) & EFUSE_INTF1_R_73_MASK) >> EFUSE_INTF1_R_73_LSB)
#define EFUSE_INTF1_R_73_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_73_LSB) & EFUSE_INTF1_R_73_MASK)
#define EFUSE_INTF1_R_73_RESET                                                 0x0
#define EFUSE_INTF1_73_ADDRESS                                                 (0x1124 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_73_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_73_RESET                                                   0x0

// 0x1128 (EFUSE_INTF1_74)
#define EFUSE_INTF1_R_74_LSB                                                   0
#define EFUSE_INTF1_R_74_MSB                                                   31
#define EFUSE_INTF1_R_74_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_74_GET(x)                                                (((x) & EFUSE_INTF1_R_74_MASK) >> EFUSE_INTF1_R_74_LSB)
#define EFUSE_INTF1_R_74_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_74_LSB) & EFUSE_INTF1_R_74_MASK)
#define EFUSE_INTF1_R_74_RESET                                                 0x0
#define EFUSE_INTF1_74_ADDRESS                                                 (0x1128 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_74_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_74_RESET                                                   0x0

// 0x112c (EFUSE_INTF1_75)
#define EFUSE_INTF1_R_75_LSB                                                   0
#define EFUSE_INTF1_R_75_MSB                                                   31
#define EFUSE_INTF1_R_75_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_75_GET(x)                                                (((x) & EFUSE_INTF1_R_75_MASK) >> EFUSE_INTF1_R_75_LSB)
#define EFUSE_INTF1_R_75_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_75_LSB) & EFUSE_INTF1_R_75_MASK)
#define EFUSE_INTF1_R_75_RESET                                                 0x0
#define EFUSE_INTF1_75_ADDRESS                                                 (0x112c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_75_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_75_RESET                                                   0x0

// 0x1130 (EFUSE_INTF1_76)
#define EFUSE_INTF1_R_76_LSB                                                   0
#define EFUSE_INTF1_R_76_MSB                                                   31
#define EFUSE_INTF1_R_76_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_76_GET(x)                                                (((x) & EFUSE_INTF1_R_76_MASK) >> EFUSE_INTF1_R_76_LSB)
#define EFUSE_INTF1_R_76_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_76_LSB) & EFUSE_INTF1_R_76_MASK)
#define EFUSE_INTF1_R_76_RESET                                                 0x0
#define EFUSE_INTF1_76_ADDRESS                                                 (0x1130 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_76_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_76_RESET                                                   0x0

// 0x1134 (EFUSE_INTF1_77)
#define EFUSE_INTF1_R_77_LSB                                                   0
#define EFUSE_INTF1_R_77_MSB                                                   31
#define EFUSE_INTF1_R_77_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_77_GET(x)                                                (((x) & EFUSE_INTF1_R_77_MASK) >> EFUSE_INTF1_R_77_LSB)
#define EFUSE_INTF1_R_77_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_77_LSB) & EFUSE_INTF1_R_77_MASK)
#define EFUSE_INTF1_R_77_RESET                                                 0x0
#define EFUSE_INTF1_77_ADDRESS                                                 (0x1134 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_77_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_77_RESET                                                   0x0

// 0x1138 (EFUSE_INTF1_78)
#define EFUSE_INTF1_R_78_LSB                                                   0
#define EFUSE_INTF1_R_78_MSB                                                   31
#define EFUSE_INTF1_R_78_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_78_GET(x)                                                (((x) & EFUSE_INTF1_R_78_MASK) >> EFUSE_INTF1_R_78_LSB)
#define EFUSE_INTF1_R_78_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_78_LSB) & EFUSE_INTF1_R_78_MASK)
#define EFUSE_INTF1_R_78_RESET                                                 0x0
#define EFUSE_INTF1_78_ADDRESS                                                 (0x1138 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_78_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_78_RESET                                                   0x0

// 0x113c (EFUSE_INTF1_79)
#define EFUSE_INTF1_R_79_LSB                                                   0
#define EFUSE_INTF1_R_79_MSB                                                   31
#define EFUSE_INTF1_R_79_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_79_GET(x)                                                (((x) & EFUSE_INTF1_R_79_MASK) >> EFUSE_INTF1_R_79_LSB)
#define EFUSE_INTF1_R_79_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_79_LSB) & EFUSE_INTF1_R_79_MASK)
#define EFUSE_INTF1_R_79_RESET                                                 0x0
#define EFUSE_INTF1_79_ADDRESS                                                 (0x113c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_79_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_79_RESET                                                   0x0

// 0x1140 (EFUSE_INTF1_80)
#define EFUSE_INTF1_R_80_LSB                                                   0
#define EFUSE_INTF1_R_80_MSB                                                   31
#define EFUSE_INTF1_R_80_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_80_GET(x)                                                (((x) & EFUSE_INTF1_R_80_MASK) >> EFUSE_INTF1_R_80_LSB)
#define EFUSE_INTF1_R_80_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_80_LSB) & EFUSE_INTF1_R_80_MASK)
#define EFUSE_INTF1_R_80_RESET                                                 0x0
#define EFUSE_INTF1_80_ADDRESS                                                 (0x1140 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_80_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_80_RESET                                                   0x0

// 0x1144 (EFUSE_INTF1_81)
#define EFUSE_INTF1_R_81_LSB                                                   0
#define EFUSE_INTF1_R_81_MSB                                                   31
#define EFUSE_INTF1_R_81_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_81_GET(x)                                                (((x) & EFUSE_INTF1_R_81_MASK) >> EFUSE_INTF1_R_81_LSB)
#define EFUSE_INTF1_R_81_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_81_LSB) & EFUSE_INTF1_R_81_MASK)
#define EFUSE_INTF1_R_81_RESET                                                 0x0
#define EFUSE_INTF1_81_ADDRESS                                                 (0x1144 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_81_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_81_RESET                                                   0x0

// 0x1148 (EFUSE_INTF1_82)
#define EFUSE_INTF1_R_82_LSB                                                   0
#define EFUSE_INTF1_R_82_MSB                                                   31
#define EFUSE_INTF1_R_82_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_82_GET(x)                                                (((x) & EFUSE_INTF1_R_82_MASK) >> EFUSE_INTF1_R_82_LSB)
#define EFUSE_INTF1_R_82_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_82_LSB) & EFUSE_INTF1_R_82_MASK)
#define EFUSE_INTF1_R_82_RESET                                                 0x0
#define EFUSE_INTF1_82_ADDRESS                                                 (0x1148 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_82_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_82_RESET                                                   0x0

// 0x114c (EFUSE_INTF1_83)
#define EFUSE_INTF1_R_83_LSB                                                   0
#define EFUSE_INTF1_R_83_MSB                                                   31
#define EFUSE_INTF1_R_83_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_83_GET(x)                                                (((x) & EFUSE_INTF1_R_83_MASK) >> EFUSE_INTF1_R_83_LSB)
#define EFUSE_INTF1_R_83_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_83_LSB) & EFUSE_INTF1_R_83_MASK)
#define EFUSE_INTF1_R_83_RESET                                                 0x0
#define EFUSE_INTF1_83_ADDRESS                                                 (0x114c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_83_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_83_RESET                                                   0x0

// 0x1150 (EFUSE_INTF1_84)
#define EFUSE_INTF1_R_84_LSB                                                   0
#define EFUSE_INTF1_R_84_MSB                                                   31
#define EFUSE_INTF1_R_84_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_84_GET(x)                                                (((x) & EFUSE_INTF1_R_84_MASK) >> EFUSE_INTF1_R_84_LSB)
#define EFUSE_INTF1_R_84_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_84_LSB) & EFUSE_INTF1_R_84_MASK)
#define EFUSE_INTF1_R_84_RESET                                                 0x0
#define EFUSE_INTF1_84_ADDRESS                                                 (0x1150 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_84_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_84_RESET                                                   0x0

// 0x1154 (EFUSE_INTF1_85)
#define EFUSE_INTF1_R_85_LSB                                                   0
#define EFUSE_INTF1_R_85_MSB                                                   31
#define EFUSE_INTF1_R_85_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_85_GET(x)                                                (((x) & EFUSE_INTF1_R_85_MASK) >> EFUSE_INTF1_R_85_LSB)
#define EFUSE_INTF1_R_85_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_85_LSB) & EFUSE_INTF1_R_85_MASK)
#define EFUSE_INTF1_R_85_RESET                                                 0x0
#define EFUSE_INTF1_85_ADDRESS                                                 (0x1154 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_85_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_85_RESET                                                   0x0

// 0x1158 (EFUSE_INTF1_86)
#define EFUSE_INTF1_R_86_LSB                                                   0
#define EFUSE_INTF1_R_86_MSB                                                   31
#define EFUSE_INTF1_R_86_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_86_GET(x)                                                (((x) & EFUSE_INTF1_R_86_MASK) >> EFUSE_INTF1_R_86_LSB)
#define EFUSE_INTF1_R_86_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_86_LSB) & EFUSE_INTF1_R_86_MASK)
#define EFUSE_INTF1_R_86_RESET                                                 0x0
#define EFUSE_INTF1_86_ADDRESS                                                 (0x1158 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_86_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_86_RESET                                                   0x0

// 0x115c (EFUSE_INTF1_87)
#define EFUSE_INTF1_R_87_LSB                                                   0
#define EFUSE_INTF1_R_87_MSB                                                   31
#define EFUSE_INTF1_R_87_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_87_GET(x)                                                (((x) & EFUSE_INTF1_R_87_MASK) >> EFUSE_INTF1_R_87_LSB)
#define EFUSE_INTF1_R_87_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_87_LSB) & EFUSE_INTF1_R_87_MASK)
#define EFUSE_INTF1_R_87_RESET                                                 0x0
#define EFUSE_INTF1_87_ADDRESS                                                 (0x115c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_87_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_87_RESET                                                   0x0

// 0x1160 (EFUSE_INTF1_88)
#define EFUSE_INTF1_R_88_LSB                                                   0
#define EFUSE_INTF1_R_88_MSB                                                   31
#define EFUSE_INTF1_R_88_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_88_GET(x)                                                (((x) & EFUSE_INTF1_R_88_MASK) >> EFUSE_INTF1_R_88_LSB)
#define EFUSE_INTF1_R_88_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_88_LSB) & EFUSE_INTF1_R_88_MASK)
#define EFUSE_INTF1_R_88_RESET                                                 0x0
#define EFUSE_INTF1_88_ADDRESS                                                 (0x1160 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_88_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_88_RESET                                                   0x0

// 0x1164 (EFUSE_INTF1_89)
#define EFUSE_INTF1_R_89_LSB                                                   0
#define EFUSE_INTF1_R_89_MSB                                                   31
#define EFUSE_INTF1_R_89_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_89_GET(x)                                                (((x) & EFUSE_INTF1_R_89_MASK) >> EFUSE_INTF1_R_89_LSB)
#define EFUSE_INTF1_R_89_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_89_LSB) & EFUSE_INTF1_R_89_MASK)
#define EFUSE_INTF1_R_89_RESET                                                 0x0
#define EFUSE_INTF1_89_ADDRESS                                                 (0x1164 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_89_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_89_RESET                                                   0x0

// 0x1168 (EFUSE_INTF1_90)
#define EFUSE_INTF1_R_90_LSB                                                   0
#define EFUSE_INTF1_R_90_MSB                                                   31
#define EFUSE_INTF1_R_90_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_90_GET(x)                                                (((x) & EFUSE_INTF1_R_90_MASK) >> EFUSE_INTF1_R_90_LSB)
#define EFUSE_INTF1_R_90_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_90_LSB) & EFUSE_INTF1_R_90_MASK)
#define EFUSE_INTF1_R_90_RESET                                                 0x0
#define EFUSE_INTF1_90_ADDRESS                                                 (0x1168 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_90_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_90_RESET                                                   0x0

// 0x116c (EFUSE_INTF1_91)
#define EFUSE_INTF1_R_91_LSB                                                   0
#define EFUSE_INTF1_R_91_MSB                                                   31
#define EFUSE_INTF1_R_91_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_91_GET(x)                                                (((x) & EFUSE_INTF1_R_91_MASK) >> EFUSE_INTF1_R_91_LSB)
#define EFUSE_INTF1_R_91_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_91_LSB) & EFUSE_INTF1_R_91_MASK)
#define EFUSE_INTF1_R_91_RESET                                                 0x0
#define EFUSE_INTF1_91_ADDRESS                                                 (0x116c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_91_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_91_RESET                                                   0x0

// 0x1170 (EFUSE_INTF1_92)
#define EFUSE_INTF1_R_92_LSB                                                   0
#define EFUSE_INTF1_R_92_MSB                                                   31
#define EFUSE_INTF1_R_92_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_92_GET(x)                                                (((x) & EFUSE_INTF1_R_92_MASK) >> EFUSE_INTF1_R_92_LSB)
#define EFUSE_INTF1_R_92_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_92_LSB) & EFUSE_INTF1_R_92_MASK)
#define EFUSE_INTF1_R_92_RESET                                                 0x0
#define EFUSE_INTF1_92_ADDRESS                                                 (0x1170 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_92_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_92_RESET                                                   0x0

// 0x1174 (EFUSE_INTF1_93)
#define EFUSE_INTF1_R_93_LSB                                                   0
#define EFUSE_INTF1_R_93_MSB                                                   31
#define EFUSE_INTF1_R_93_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_93_GET(x)                                                (((x) & EFUSE_INTF1_R_93_MASK) >> EFUSE_INTF1_R_93_LSB)
#define EFUSE_INTF1_R_93_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_93_LSB) & EFUSE_INTF1_R_93_MASK)
#define EFUSE_INTF1_R_93_RESET                                                 0x0
#define EFUSE_INTF1_93_ADDRESS                                                 (0x1174 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_93_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_93_RESET                                                   0x0

// 0x1178 (EFUSE_INTF1_94)
#define EFUSE_INTF1_R_94_LSB                                                   0
#define EFUSE_INTF1_R_94_MSB                                                   31
#define EFUSE_INTF1_R_94_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_94_GET(x)                                                (((x) & EFUSE_INTF1_R_94_MASK) >> EFUSE_INTF1_R_94_LSB)
#define EFUSE_INTF1_R_94_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_94_LSB) & EFUSE_INTF1_R_94_MASK)
#define EFUSE_INTF1_R_94_RESET                                                 0x0
#define EFUSE_INTF1_94_ADDRESS                                                 (0x1178 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_94_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_94_RESET                                                   0x0

// 0x117c (EFUSE_INTF1_95)
#define EFUSE_INTF1_R_95_LSB                                                   0
#define EFUSE_INTF1_R_95_MSB                                                   31
#define EFUSE_INTF1_R_95_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_95_GET(x)                                                (((x) & EFUSE_INTF1_R_95_MASK) >> EFUSE_INTF1_R_95_LSB)
#define EFUSE_INTF1_R_95_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_95_LSB) & EFUSE_INTF1_R_95_MASK)
#define EFUSE_INTF1_R_95_RESET                                                 0x0
#define EFUSE_INTF1_95_ADDRESS                                                 (0x117c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_95_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_95_RESET                                                   0x0

// 0x1180 (EFUSE_INTF1_96)
#define EFUSE_INTF1_R_96_LSB                                                   0
#define EFUSE_INTF1_R_96_MSB                                                   31
#define EFUSE_INTF1_R_96_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_96_GET(x)                                                (((x) & EFUSE_INTF1_R_96_MASK) >> EFUSE_INTF1_R_96_LSB)
#define EFUSE_INTF1_R_96_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_96_LSB) & EFUSE_INTF1_R_96_MASK)
#define EFUSE_INTF1_R_96_RESET                                                 0x0
#define EFUSE_INTF1_96_ADDRESS                                                 (0x1180 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_96_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_96_RESET                                                   0x0

// 0x1184 (EFUSE_INTF1_97)
#define EFUSE_INTF1_R_97_LSB                                                   0
#define EFUSE_INTF1_R_97_MSB                                                   31
#define EFUSE_INTF1_R_97_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_97_GET(x)                                                (((x) & EFUSE_INTF1_R_97_MASK) >> EFUSE_INTF1_R_97_LSB)
#define EFUSE_INTF1_R_97_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_97_LSB) & EFUSE_INTF1_R_97_MASK)
#define EFUSE_INTF1_R_97_RESET                                                 0x0
#define EFUSE_INTF1_97_ADDRESS                                                 (0x1184 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_97_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_97_RESET                                                   0x0

// 0x1188 (EFUSE_INTF1_98)
#define EFUSE_INTF1_R_98_LSB                                                   0
#define EFUSE_INTF1_R_98_MSB                                                   31
#define EFUSE_INTF1_R_98_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_98_GET(x)                                                (((x) & EFUSE_INTF1_R_98_MASK) >> EFUSE_INTF1_R_98_LSB)
#define EFUSE_INTF1_R_98_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_98_LSB) & EFUSE_INTF1_R_98_MASK)
#define EFUSE_INTF1_R_98_RESET                                                 0x0
#define EFUSE_INTF1_98_ADDRESS                                                 (0x1188 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_98_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_98_RESET                                                   0x0

// 0x118c (EFUSE_INTF1_99)
#define EFUSE_INTF1_R_99_LSB                                                   0
#define EFUSE_INTF1_R_99_MSB                                                   31
#define EFUSE_INTF1_R_99_MASK                                                  0xffffffff
#define EFUSE_INTF1_R_99_GET(x)                                                (((x) & EFUSE_INTF1_R_99_MASK) >> EFUSE_INTF1_R_99_LSB)
#define EFUSE_INTF1_R_99_SET(x)                                                (((0 | (x)) << EFUSE_INTF1_R_99_LSB) & EFUSE_INTF1_R_99_MASK)
#define EFUSE_INTF1_R_99_RESET                                                 0x0
#define EFUSE_INTF1_99_ADDRESS                                                 (0x118c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_99_RSTMASK                                                 0xffffffff
#define EFUSE_INTF1_99_RESET                                                   0x0

// 0x1190 (EFUSE_INTF1_100)
#define EFUSE_INTF1_R_100_LSB                                                  0
#define EFUSE_INTF1_R_100_MSB                                                  31
#define EFUSE_INTF1_R_100_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_100_GET(x)                                               (((x) & EFUSE_INTF1_R_100_MASK) >> EFUSE_INTF1_R_100_LSB)
#define EFUSE_INTF1_R_100_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_100_LSB) & EFUSE_INTF1_R_100_MASK)
#define EFUSE_INTF1_R_100_RESET                                                0x0
#define EFUSE_INTF1_100_ADDRESS                                                (0x1190 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_100_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_100_RESET                                                  0x0

// 0x1194 (EFUSE_INTF1_101)
#define EFUSE_INTF1_R_101_LSB                                                  0
#define EFUSE_INTF1_R_101_MSB                                                  31
#define EFUSE_INTF1_R_101_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_101_GET(x)                                               (((x) & EFUSE_INTF1_R_101_MASK) >> EFUSE_INTF1_R_101_LSB)
#define EFUSE_INTF1_R_101_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_101_LSB) & EFUSE_INTF1_R_101_MASK)
#define EFUSE_INTF1_R_101_RESET                                                0x0
#define EFUSE_INTF1_101_ADDRESS                                                (0x1194 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_101_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_101_RESET                                                  0x0

// 0x1198 (EFUSE_INTF1_102)
#define EFUSE_INTF1_R_102_LSB                                                  0
#define EFUSE_INTF1_R_102_MSB                                                  31
#define EFUSE_INTF1_R_102_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_102_GET(x)                                               (((x) & EFUSE_INTF1_R_102_MASK) >> EFUSE_INTF1_R_102_LSB)
#define EFUSE_INTF1_R_102_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_102_LSB) & EFUSE_INTF1_R_102_MASK)
#define EFUSE_INTF1_R_102_RESET                                                0x0
#define EFUSE_INTF1_102_ADDRESS                                                (0x1198 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_102_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_102_RESET                                                  0x0

// 0x119c (EFUSE_INTF1_103)
#define EFUSE_INTF1_R_103_LSB                                                  0
#define EFUSE_INTF1_R_103_MSB                                                  31
#define EFUSE_INTF1_R_103_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_103_GET(x)                                               (((x) & EFUSE_INTF1_R_103_MASK) >> EFUSE_INTF1_R_103_LSB)
#define EFUSE_INTF1_R_103_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_103_LSB) & EFUSE_INTF1_R_103_MASK)
#define EFUSE_INTF1_R_103_RESET                                                0x0
#define EFUSE_INTF1_103_ADDRESS                                                (0x119c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_103_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_103_RESET                                                  0x0

// 0x11a0 (EFUSE_INTF1_104)
#define EFUSE_INTF1_R_104_LSB                                                  0
#define EFUSE_INTF1_R_104_MSB                                                  31
#define EFUSE_INTF1_R_104_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_104_GET(x)                                               (((x) & EFUSE_INTF1_R_104_MASK) >> EFUSE_INTF1_R_104_LSB)
#define EFUSE_INTF1_R_104_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_104_LSB) & EFUSE_INTF1_R_104_MASK)
#define EFUSE_INTF1_R_104_RESET                                                0x0
#define EFUSE_INTF1_104_ADDRESS                                                (0x11a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_104_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_104_RESET                                                  0x0

// 0x11a4 (EFUSE_INTF1_105)
#define EFUSE_INTF1_R_105_LSB                                                  0
#define EFUSE_INTF1_R_105_MSB                                                  31
#define EFUSE_INTF1_R_105_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_105_GET(x)                                               (((x) & EFUSE_INTF1_R_105_MASK) >> EFUSE_INTF1_R_105_LSB)
#define EFUSE_INTF1_R_105_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_105_LSB) & EFUSE_INTF1_R_105_MASK)
#define EFUSE_INTF1_R_105_RESET                                                0x0
#define EFUSE_INTF1_105_ADDRESS                                                (0x11a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_105_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_105_RESET                                                  0x0

// 0x11a8 (EFUSE_INTF1_106)
#define EFUSE_INTF1_R_106_LSB                                                  0
#define EFUSE_INTF1_R_106_MSB                                                  31
#define EFUSE_INTF1_R_106_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_106_GET(x)                                               (((x) & EFUSE_INTF1_R_106_MASK) >> EFUSE_INTF1_R_106_LSB)
#define EFUSE_INTF1_R_106_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_106_LSB) & EFUSE_INTF1_R_106_MASK)
#define EFUSE_INTF1_R_106_RESET                                                0x0
#define EFUSE_INTF1_106_ADDRESS                                                (0x11a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_106_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_106_RESET                                                  0x0

// 0x11ac (EFUSE_INTF1_107)
#define EFUSE_INTF1_R_107_LSB                                                  0
#define EFUSE_INTF1_R_107_MSB                                                  31
#define EFUSE_INTF1_R_107_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_107_GET(x)                                               (((x) & EFUSE_INTF1_R_107_MASK) >> EFUSE_INTF1_R_107_LSB)
#define EFUSE_INTF1_R_107_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_107_LSB) & EFUSE_INTF1_R_107_MASK)
#define EFUSE_INTF1_R_107_RESET                                                0x0
#define EFUSE_INTF1_107_ADDRESS                                                (0x11ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_107_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_107_RESET                                                  0x0

// 0x11b0 (EFUSE_INTF1_108)
#define EFUSE_INTF1_R_108_LSB                                                  0
#define EFUSE_INTF1_R_108_MSB                                                  31
#define EFUSE_INTF1_R_108_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_108_GET(x)                                               (((x) & EFUSE_INTF1_R_108_MASK) >> EFUSE_INTF1_R_108_LSB)
#define EFUSE_INTF1_R_108_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_108_LSB) & EFUSE_INTF1_R_108_MASK)
#define EFUSE_INTF1_R_108_RESET                                                0x0
#define EFUSE_INTF1_108_ADDRESS                                                (0x11b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_108_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_108_RESET                                                  0x0

// 0x11b4 (EFUSE_INTF1_109)
#define EFUSE_INTF1_R_109_LSB                                                  0
#define EFUSE_INTF1_R_109_MSB                                                  31
#define EFUSE_INTF1_R_109_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_109_GET(x)                                               (((x) & EFUSE_INTF1_R_109_MASK) >> EFUSE_INTF1_R_109_LSB)
#define EFUSE_INTF1_R_109_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_109_LSB) & EFUSE_INTF1_R_109_MASK)
#define EFUSE_INTF1_R_109_RESET                                                0x0
#define EFUSE_INTF1_109_ADDRESS                                                (0x11b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_109_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_109_RESET                                                  0x0

// 0x11b8 (EFUSE_INTF1_110)
#define EFUSE_INTF1_R_110_LSB                                                  0
#define EFUSE_INTF1_R_110_MSB                                                  31
#define EFUSE_INTF1_R_110_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_110_GET(x)                                               (((x) & EFUSE_INTF1_R_110_MASK) >> EFUSE_INTF1_R_110_LSB)
#define EFUSE_INTF1_R_110_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_110_LSB) & EFUSE_INTF1_R_110_MASK)
#define EFUSE_INTF1_R_110_RESET                                                0x0
#define EFUSE_INTF1_110_ADDRESS                                                (0x11b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_110_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_110_RESET                                                  0x0

// 0x11bc (EFUSE_INTF1_111)
#define EFUSE_INTF1_R_111_LSB                                                  0
#define EFUSE_INTF1_R_111_MSB                                                  31
#define EFUSE_INTF1_R_111_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_111_GET(x)                                               (((x) & EFUSE_INTF1_R_111_MASK) >> EFUSE_INTF1_R_111_LSB)
#define EFUSE_INTF1_R_111_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_111_LSB) & EFUSE_INTF1_R_111_MASK)
#define EFUSE_INTF1_R_111_RESET                                                0x0
#define EFUSE_INTF1_111_ADDRESS                                                (0x11bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_111_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_111_RESET                                                  0x0

// 0x11c0 (EFUSE_INTF1_112)
#define EFUSE_INTF1_R_112_LSB                                                  0
#define EFUSE_INTF1_R_112_MSB                                                  31
#define EFUSE_INTF1_R_112_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_112_GET(x)                                               (((x) & EFUSE_INTF1_R_112_MASK) >> EFUSE_INTF1_R_112_LSB)
#define EFUSE_INTF1_R_112_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_112_LSB) & EFUSE_INTF1_R_112_MASK)
#define EFUSE_INTF1_R_112_RESET                                                0x0
#define EFUSE_INTF1_112_ADDRESS                                                (0x11c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_112_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_112_RESET                                                  0x0

// 0x11c4 (EFUSE_INTF1_113)
#define EFUSE_INTF1_R_113_LSB                                                  0
#define EFUSE_INTF1_R_113_MSB                                                  31
#define EFUSE_INTF1_R_113_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_113_GET(x)                                               (((x) & EFUSE_INTF1_R_113_MASK) >> EFUSE_INTF1_R_113_LSB)
#define EFUSE_INTF1_R_113_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_113_LSB) & EFUSE_INTF1_R_113_MASK)
#define EFUSE_INTF1_R_113_RESET                                                0x0
#define EFUSE_INTF1_113_ADDRESS                                                (0x11c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_113_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_113_RESET                                                  0x0

// 0x11c8 (EFUSE_INTF1_114)
#define EFUSE_INTF1_R_114_LSB                                                  0
#define EFUSE_INTF1_R_114_MSB                                                  31
#define EFUSE_INTF1_R_114_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_114_GET(x)                                               (((x) & EFUSE_INTF1_R_114_MASK) >> EFUSE_INTF1_R_114_LSB)
#define EFUSE_INTF1_R_114_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_114_LSB) & EFUSE_INTF1_R_114_MASK)
#define EFUSE_INTF1_R_114_RESET                                                0x0
#define EFUSE_INTF1_114_ADDRESS                                                (0x11c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_114_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_114_RESET                                                  0x0

// 0x11cc (EFUSE_INTF1_115)
#define EFUSE_INTF1_R_115_LSB                                                  0
#define EFUSE_INTF1_R_115_MSB                                                  31
#define EFUSE_INTF1_R_115_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_115_GET(x)                                               (((x) & EFUSE_INTF1_R_115_MASK) >> EFUSE_INTF1_R_115_LSB)
#define EFUSE_INTF1_R_115_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_115_LSB) & EFUSE_INTF1_R_115_MASK)
#define EFUSE_INTF1_R_115_RESET                                                0x0
#define EFUSE_INTF1_115_ADDRESS                                                (0x11cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_115_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_115_RESET                                                  0x0

// 0x11d0 (EFUSE_INTF1_116)
#define EFUSE_INTF1_R_116_LSB                                                  0
#define EFUSE_INTF1_R_116_MSB                                                  31
#define EFUSE_INTF1_R_116_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_116_GET(x)                                               (((x) & EFUSE_INTF1_R_116_MASK) >> EFUSE_INTF1_R_116_LSB)
#define EFUSE_INTF1_R_116_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_116_LSB) & EFUSE_INTF1_R_116_MASK)
#define EFUSE_INTF1_R_116_RESET                                                0x0
#define EFUSE_INTF1_116_ADDRESS                                                (0x11d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_116_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_116_RESET                                                  0x0

// 0x11d4 (EFUSE_INTF1_117)
#define EFUSE_INTF1_R_117_LSB                                                  0
#define EFUSE_INTF1_R_117_MSB                                                  31
#define EFUSE_INTF1_R_117_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_117_GET(x)                                               (((x) & EFUSE_INTF1_R_117_MASK) >> EFUSE_INTF1_R_117_LSB)
#define EFUSE_INTF1_R_117_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_117_LSB) & EFUSE_INTF1_R_117_MASK)
#define EFUSE_INTF1_R_117_RESET                                                0x0
#define EFUSE_INTF1_117_ADDRESS                                                (0x11d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_117_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_117_RESET                                                  0x0

// 0x11d8 (EFUSE_INTF1_118)
#define EFUSE_INTF1_R_118_LSB                                                  0
#define EFUSE_INTF1_R_118_MSB                                                  31
#define EFUSE_INTF1_R_118_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_118_GET(x)                                               (((x) & EFUSE_INTF1_R_118_MASK) >> EFUSE_INTF1_R_118_LSB)
#define EFUSE_INTF1_R_118_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_118_LSB) & EFUSE_INTF1_R_118_MASK)
#define EFUSE_INTF1_R_118_RESET                                                0x0
#define EFUSE_INTF1_118_ADDRESS                                                (0x11d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_118_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_118_RESET                                                  0x0

// 0x11dc (EFUSE_INTF1_119)
#define EFUSE_INTF1_R_119_LSB                                                  0
#define EFUSE_INTF1_R_119_MSB                                                  31
#define EFUSE_INTF1_R_119_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_119_GET(x)                                               (((x) & EFUSE_INTF1_R_119_MASK) >> EFUSE_INTF1_R_119_LSB)
#define EFUSE_INTF1_R_119_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_119_LSB) & EFUSE_INTF1_R_119_MASK)
#define EFUSE_INTF1_R_119_RESET                                                0x0
#define EFUSE_INTF1_119_ADDRESS                                                (0x11dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_119_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_119_RESET                                                  0x0

// 0x11e0 (EFUSE_INTF1_120)
#define EFUSE_INTF1_R_120_LSB                                                  0
#define EFUSE_INTF1_R_120_MSB                                                  31
#define EFUSE_INTF1_R_120_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_120_GET(x)                                               (((x) & EFUSE_INTF1_R_120_MASK) >> EFUSE_INTF1_R_120_LSB)
#define EFUSE_INTF1_R_120_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_120_LSB) & EFUSE_INTF1_R_120_MASK)
#define EFUSE_INTF1_R_120_RESET                                                0x0
#define EFUSE_INTF1_120_ADDRESS                                                (0x11e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_120_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_120_RESET                                                  0x0

// 0x11e4 (EFUSE_INTF1_121)
#define EFUSE_INTF1_R_121_LSB                                                  0
#define EFUSE_INTF1_R_121_MSB                                                  31
#define EFUSE_INTF1_R_121_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_121_GET(x)                                               (((x) & EFUSE_INTF1_R_121_MASK) >> EFUSE_INTF1_R_121_LSB)
#define EFUSE_INTF1_R_121_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_121_LSB) & EFUSE_INTF1_R_121_MASK)
#define EFUSE_INTF1_R_121_RESET                                                0x0
#define EFUSE_INTF1_121_ADDRESS                                                (0x11e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_121_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_121_RESET                                                  0x0

// 0x11e8 (EFUSE_INTF1_122)
#define EFUSE_INTF1_R_122_LSB                                                  0
#define EFUSE_INTF1_R_122_MSB                                                  31
#define EFUSE_INTF1_R_122_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_122_GET(x)                                               (((x) & EFUSE_INTF1_R_122_MASK) >> EFUSE_INTF1_R_122_LSB)
#define EFUSE_INTF1_R_122_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_122_LSB) & EFUSE_INTF1_R_122_MASK)
#define EFUSE_INTF1_R_122_RESET                                                0x0
#define EFUSE_INTF1_122_ADDRESS                                                (0x11e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_122_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_122_RESET                                                  0x0

// 0x11ec (EFUSE_INTF1_123)
#define EFUSE_INTF1_R_123_LSB                                                  0
#define EFUSE_INTF1_R_123_MSB                                                  31
#define EFUSE_INTF1_R_123_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_123_GET(x)                                               (((x) & EFUSE_INTF1_R_123_MASK) >> EFUSE_INTF1_R_123_LSB)
#define EFUSE_INTF1_R_123_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_123_LSB) & EFUSE_INTF1_R_123_MASK)
#define EFUSE_INTF1_R_123_RESET                                                0x0
#define EFUSE_INTF1_123_ADDRESS                                                (0x11ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_123_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_123_RESET                                                  0x0

// 0x11f0 (EFUSE_INTF1_124)
#define EFUSE_INTF1_R_124_LSB                                                  0
#define EFUSE_INTF1_R_124_MSB                                                  31
#define EFUSE_INTF1_R_124_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_124_GET(x)                                               (((x) & EFUSE_INTF1_R_124_MASK) >> EFUSE_INTF1_R_124_LSB)
#define EFUSE_INTF1_R_124_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_124_LSB) & EFUSE_INTF1_R_124_MASK)
#define EFUSE_INTF1_R_124_RESET                                                0x0
#define EFUSE_INTF1_124_ADDRESS                                                (0x11f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_124_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_124_RESET                                                  0x0

// 0x11f4 (EFUSE_INTF1_125)
#define EFUSE_INTF1_R_125_LSB                                                  0
#define EFUSE_INTF1_R_125_MSB                                                  31
#define EFUSE_INTF1_R_125_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_125_GET(x)                                               (((x) & EFUSE_INTF1_R_125_MASK) >> EFUSE_INTF1_R_125_LSB)
#define EFUSE_INTF1_R_125_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_125_LSB) & EFUSE_INTF1_R_125_MASK)
#define EFUSE_INTF1_R_125_RESET                                                0x0
#define EFUSE_INTF1_125_ADDRESS                                                (0x11f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_125_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_125_RESET                                                  0x0

// 0x11f8 (EFUSE_INTF1_126)
#define EFUSE_INTF1_R_126_LSB                                                  0
#define EFUSE_INTF1_R_126_MSB                                                  31
#define EFUSE_INTF1_R_126_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_126_GET(x)                                               (((x) & EFUSE_INTF1_R_126_MASK) >> EFUSE_INTF1_R_126_LSB)
#define EFUSE_INTF1_R_126_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_126_LSB) & EFUSE_INTF1_R_126_MASK)
#define EFUSE_INTF1_R_126_RESET                                                0x0
#define EFUSE_INTF1_126_ADDRESS                                                (0x11f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_126_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_126_RESET                                                  0x0

// 0x11fc (EFUSE_INTF1_127)
#define EFUSE_INTF1_R_127_LSB                                                  0
#define EFUSE_INTF1_R_127_MSB                                                  31
#define EFUSE_INTF1_R_127_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_127_GET(x)                                               (((x) & EFUSE_INTF1_R_127_MASK) >> EFUSE_INTF1_R_127_LSB)
#define EFUSE_INTF1_R_127_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_127_LSB) & EFUSE_INTF1_R_127_MASK)
#define EFUSE_INTF1_R_127_RESET                                                0x0
#define EFUSE_INTF1_127_ADDRESS                                                (0x11fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_127_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_127_RESET                                                  0x0

// 0x1200 (EFUSE_INTF1_128)
#define EFUSE_INTF1_R_128_LSB                                                  0
#define EFUSE_INTF1_R_128_MSB                                                  31
#define EFUSE_INTF1_R_128_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_128_GET(x)                                               (((x) & EFUSE_INTF1_R_128_MASK) >> EFUSE_INTF1_R_128_LSB)
#define EFUSE_INTF1_R_128_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_128_LSB) & EFUSE_INTF1_R_128_MASK)
#define EFUSE_INTF1_R_128_RESET                                                0x0
#define EFUSE_INTF1_128_ADDRESS                                                (0x1200 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_128_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_128_RESET                                                  0x0

// 0x1204 (EFUSE_INTF1_129)
#define EFUSE_INTF1_R_129_LSB                                                  0
#define EFUSE_INTF1_R_129_MSB                                                  31
#define EFUSE_INTF1_R_129_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_129_GET(x)                                               (((x) & EFUSE_INTF1_R_129_MASK) >> EFUSE_INTF1_R_129_LSB)
#define EFUSE_INTF1_R_129_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_129_LSB) & EFUSE_INTF1_R_129_MASK)
#define EFUSE_INTF1_R_129_RESET                                                0x0
#define EFUSE_INTF1_129_ADDRESS                                                (0x1204 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_129_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_129_RESET                                                  0x0

// 0x1208 (EFUSE_INTF1_130)
#define EFUSE_INTF1_R_130_LSB                                                  0
#define EFUSE_INTF1_R_130_MSB                                                  31
#define EFUSE_INTF1_R_130_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_130_GET(x)                                               (((x) & EFUSE_INTF1_R_130_MASK) >> EFUSE_INTF1_R_130_LSB)
#define EFUSE_INTF1_R_130_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_130_LSB) & EFUSE_INTF1_R_130_MASK)
#define EFUSE_INTF1_R_130_RESET                                                0x0
#define EFUSE_INTF1_130_ADDRESS                                                (0x1208 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_130_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_130_RESET                                                  0x0

// 0x120c (EFUSE_INTF1_131)
#define EFUSE_INTF1_R_131_LSB                                                  0
#define EFUSE_INTF1_R_131_MSB                                                  31
#define EFUSE_INTF1_R_131_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_131_GET(x)                                               (((x) & EFUSE_INTF1_R_131_MASK) >> EFUSE_INTF1_R_131_LSB)
#define EFUSE_INTF1_R_131_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_131_LSB) & EFUSE_INTF1_R_131_MASK)
#define EFUSE_INTF1_R_131_RESET                                                0x0
#define EFUSE_INTF1_131_ADDRESS                                                (0x120c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_131_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_131_RESET                                                  0x0

// 0x1210 (EFUSE_INTF1_132)
#define EFUSE_INTF1_R_132_LSB                                                  0
#define EFUSE_INTF1_R_132_MSB                                                  31
#define EFUSE_INTF1_R_132_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_132_GET(x)                                               (((x) & EFUSE_INTF1_R_132_MASK) >> EFUSE_INTF1_R_132_LSB)
#define EFUSE_INTF1_R_132_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_132_LSB) & EFUSE_INTF1_R_132_MASK)
#define EFUSE_INTF1_R_132_RESET                                                0x0
#define EFUSE_INTF1_132_ADDRESS                                                (0x1210 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_132_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_132_RESET                                                  0x0

// 0x1214 (EFUSE_INTF1_133)
#define EFUSE_INTF1_R_133_LSB                                                  0
#define EFUSE_INTF1_R_133_MSB                                                  31
#define EFUSE_INTF1_R_133_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_133_GET(x)                                               (((x) & EFUSE_INTF1_R_133_MASK) >> EFUSE_INTF1_R_133_LSB)
#define EFUSE_INTF1_R_133_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_133_LSB) & EFUSE_INTF1_R_133_MASK)
#define EFUSE_INTF1_R_133_RESET                                                0x0
#define EFUSE_INTF1_133_ADDRESS                                                (0x1214 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_133_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_133_RESET                                                  0x0

// 0x1218 (EFUSE_INTF1_134)
#define EFUSE_INTF1_R_134_LSB                                                  0
#define EFUSE_INTF1_R_134_MSB                                                  31
#define EFUSE_INTF1_R_134_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_134_GET(x)                                               (((x) & EFUSE_INTF1_R_134_MASK) >> EFUSE_INTF1_R_134_LSB)
#define EFUSE_INTF1_R_134_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_134_LSB) & EFUSE_INTF1_R_134_MASK)
#define EFUSE_INTF1_R_134_RESET                                                0x0
#define EFUSE_INTF1_134_ADDRESS                                                (0x1218 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_134_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_134_RESET                                                  0x0

// 0x121c (EFUSE_INTF1_135)
#define EFUSE_INTF1_R_135_LSB                                                  0
#define EFUSE_INTF1_R_135_MSB                                                  31
#define EFUSE_INTF1_R_135_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_135_GET(x)                                               (((x) & EFUSE_INTF1_R_135_MASK) >> EFUSE_INTF1_R_135_LSB)
#define EFUSE_INTF1_R_135_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_135_LSB) & EFUSE_INTF1_R_135_MASK)
#define EFUSE_INTF1_R_135_RESET                                                0x0
#define EFUSE_INTF1_135_ADDRESS                                                (0x121c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_135_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_135_RESET                                                  0x0

// 0x1220 (EFUSE_INTF1_136)
#define EFUSE_INTF1_R_136_LSB                                                  0
#define EFUSE_INTF1_R_136_MSB                                                  31
#define EFUSE_INTF1_R_136_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_136_GET(x)                                               (((x) & EFUSE_INTF1_R_136_MASK) >> EFUSE_INTF1_R_136_LSB)
#define EFUSE_INTF1_R_136_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_136_LSB) & EFUSE_INTF1_R_136_MASK)
#define EFUSE_INTF1_R_136_RESET                                                0x0
#define EFUSE_INTF1_136_ADDRESS                                                (0x1220 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_136_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_136_RESET                                                  0x0

// 0x1224 (EFUSE_INTF1_137)
#define EFUSE_INTF1_R_137_LSB                                                  0
#define EFUSE_INTF1_R_137_MSB                                                  31
#define EFUSE_INTF1_R_137_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_137_GET(x)                                               (((x) & EFUSE_INTF1_R_137_MASK) >> EFUSE_INTF1_R_137_LSB)
#define EFUSE_INTF1_R_137_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_137_LSB) & EFUSE_INTF1_R_137_MASK)
#define EFUSE_INTF1_R_137_RESET                                                0x0
#define EFUSE_INTF1_137_ADDRESS                                                (0x1224 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_137_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_137_RESET                                                  0x0

// 0x1228 (EFUSE_INTF1_138)
#define EFUSE_INTF1_R_138_LSB                                                  0
#define EFUSE_INTF1_R_138_MSB                                                  31
#define EFUSE_INTF1_R_138_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_138_GET(x)                                               (((x) & EFUSE_INTF1_R_138_MASK) >> EFUSE_INTF1_R_138_LSB)
#define EFUSE_INTF1_R_138_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_138_LSB) & EFUSE_INTF1_R_138_MASK)
#define EFUSE_INTF1_R_138_RESET                                                0x0
#define EFUSE_INTF1_138_ADDRESS                                                (0x1228 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_138_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_138_RESET                                                  0x0

// 0x122c (EFUSE_INTF1_139)
#define EFUSE_INTF1_R_139_LSB                                                  0
#define EFUSE_INTF1_R_139_MSB                                                  31
#define EFUSE_INTF1_R_139_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_139_GET(x)                                               (((x) & EFUSE_INTF1_R_139_MASK) >> EFUSE_INTF1_R_139_LSB)
#define EFUSE_INTF1_R_139_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_139_LSB) & EFUSE_INTF1_R_139_MASK)
#define EFUSE_INTF1_R_139_RESET                                                0x0
#define EFUSE_INTF1_139_ADDRESS                                                (0x122c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_139_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_139_RESET                                                  0x0

// 0x1230 (EFUSE_INTF1_140)
#define EFUSE_INTF1_R_140_LSB                                                  0
#define EFUSE_INTF1_R_140_MSB                                                  31
#define EFUSE_INTF1_R_140_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_140_GET(x)                                               (((x) & EFUSE_INTF1_R_140_MASK) >> EFUSE_INTF1_R_140_LSB)
#define EFUSE_INTF1_R_140_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_140_LSB) & EFUSE_INTF1_R_140_MASK)
#define EFUSE_INTF1_R_140_RESET                                                0x0
#define EFUSE_INTF1_140_ADDRESS                                                (0x1230 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_140_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_140_RESET                                                  0x0

// 0x1234 (EFUSE_INTF1_141)
#define EFUSE_INTF1_R_141_LSB                                                  0
#define EFUSE_INTF1_R_141_MSB                                                  31
#define EFUSE_INTF1_R_141_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_141_GET(x)                                               (((x) & EFUSE_INTF1_R_141_MASK) >> EFUSE_INTF1_R_141_LSB)
#define EFUSE_INTF1_R_141_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_141_LSB) & EFUSE_INTF1_R_141_MASK)
#define EFUSE_INTF1_R_141_RESET                                                0x0
#define EFUSE_INTF1_141_ADDRESS                                                (0x1234 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_141_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_141_RESET                                                  0x0

// 0x1238 (EFUSE_INTF1_142)
#define EFUSE_INTF1_R_142_LSB                                                  0
#define EFUSE_INTF1_R_142_MSB                                                  31
#define EFUSE_INTF1_R_142_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_142_GET(x)                                               (((x) & EFUSE_INTF1_R_142_MASK) >> EFUSE_INTF1_R_142_LSB)
#define EFUSE_INTF1_R_142_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_142_LSB) & EFUSE_INTF1_R_142_MASK)
#define EFUSE_INTF1_R_142_RESET                                                0x0
#define EFUSE_INTF1_142_ADDRESS                                                (0x1238 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_142_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_142_RESET                                                  0x0

// 0x123c (EFUSE_INTF1_143)
#define EFUSE_INTF1_R_143_LSB                                                  0
#define EFUSE_INTF1_R_143_MSB                                                  31
#define EFUSE_INTF1_R_143_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_143_GET(x)                                               (((x) & EFUSE_INTF1_R_143_MASK) >> EFUSE_INTF1_R_143_LSB)
#define EFUSE_INTF1_R_143_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_143_LSB) & EFUSE_INTF1_R_143_MASK)
#define EFUSE_INTF1_R_143_RESET                                                0x0
#define EFUSE_INTF1_143_ADDRESS                                                (0x123c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_143_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_143_RESET                                                  0x0

// 0x1240 (EFUSE_INTF1_144)
#define EFUSE_INTF1_R_144_LSB                                                  0
#define EFUSE_INTF1_R_144_MSB                                                  31
#define EFUSE_INTF1_R_144_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_144_GET(x)                                               (((x) & EFUSE_INTF1_R_144_MASK) >> EFUSE_INTF1_R_144_LSB)
#define EFUSE_INTF1_R_144_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_144_LSB) & EFUSE_INTF1_R_144_MASK)
#define EFUSE_INTF1_R_144_RESET                                                0x0
#define EFUSE_INTF1_144_ADDRESS                                                (0x1240 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_144_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_144_RESET                                                  0x0

// 0x1244 (EFUSE_INTF1_145)
#define EFUSE_INTF1_R_145_LSB                                                  0
#define EFUSE_INTF1_R_145_MSB                                                  31
#define EFUSE_INTF1_R_145_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_145_GET(x)                                               (((x) & EFUSE_INTF1_R_145_MASK) >> EFUSE_INTF1_R_145_LSB)
#define EFUSE_INTF1_R_145_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_145_LSB) & EFUSE_INTF1_R_145_MASK)
#define EFUSE_INTF1_R_145_RESET                                                0x0
#define EFUSE_INTF1_145_ADDRESS                                                (0x1244 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_145_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_145_RESET                                                  0x0

// 0x1248 (EFUSE_INTF1_146)
#define EFUSE_INTF1_R_146_LSB                                                  0
#define EFUSE_INTF1_R_146_MSB                                                  31
#define EFUSE_INTF1_R_146_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_146_GET(x)                                               (((x) & EFUSE_INTF1_R_146_MASK) >> EFUSE_INTF1_R_146_LSB)
#define EFUSE_INTF1_R_146_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_146_LSB) & EFUSE_INTF1_R_146_MASK)
#define EFUSE_INTF1_R_146_RESET                                                0x0
#define EFUSE_INTF1_146_ADDRESS                                                (0x1248 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_146_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_146_RESET                                                  0x0

// 0x124c (EFUSE_INTF1_147)
#define EFUSE_INTF1_R_147_LSB                                                  0
#define EFUSE_INTF1_R_147_MSB                                                  31
#define EFUSE_INTF1_R_147_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_147_GET(x)                                               (((x) & EFUSE_INTF1_R_147_MASK) >> EFUSE_INTF1_R_147_LSB)
#define EFUSE_INTF1_R_147_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_147_LSB) & EFUSE_INTF1_R_147_MASK)
#define EFUSE_INTF1_R_147_RESET                                                0x0
#define EFUSE_INTF1_147_ADDRESS                                                (0x124c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_147_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_147_RESET                                                  0x0

// 0x1250 (EFUSE_INTF1_148)
#define EFUSE_INTF1_R_148_LSB                                                  0
#define EFUSE_INTF1_R_148_MSB                                                  31
#define EFUSE_INTF1_R_148_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_148_GET(x)                                               (((x) & EFUSE_INTF1_R_148_MASK) >> EFUSE_INTF1_R_148_LSB)
#define EFUSE_INTF1_R_148_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_148_LSB) & EFUSE_INTF1_R_148_MASK)
#define EFUSE_INTF1_R_148_RESET                                                0x0
#define EFUSE_INTF1_148_ADDRESS                                                (0x1250 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_148_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_148_RESET                                                  0x0

// 0x1254 (EFUSE_INTF1_149)
#define EFUSE_INTF1_R_149_LSB                                                  0
#define EFUSE_INTF1_R_149_MSB                                                  31
#define EFUSE_INTF1_R_149_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_149_GET(x)                                               (((x) & EFUSE_INTF1_R_149_MASK) >> EFUSE_INTF1_R_149_LSB)
#define EFUSE_INTF1_R_149_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_149_LSB) & EFUSE_INTF1_R_149_MASK)
#define EFUSE_INTF1_R_149_RESET                                                0x0
#define EFUSE_INTF1_149_ADDRESS                                                (0x1254 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_149_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_149_RESET                                                  0x0

// 0x1258 (EFUSE_INTF1_150)
#define EFUSE_INTF1_R_150_LSB                                                  0
#define EFUSE_INTF1_R_150_MSB                                                  31
#define EFUSE_INTF1_R_150_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_150_GET(x)                                               (((x) & EFUSE_INTF1_R_150_MASK) >> EFUSE_INTF1_R_150_LSB)
#define EFUSE_INTF1_R_150_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_150_LSB) & EFUSE_INTF1_R_150_MASK)
#define EFUSE_INTF1_R_150_RESET                                                0x0
#define EFUSE_INTF1_150_ADDRESS                                                (0x1258 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_150_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_150_RESET                                                  0x0

// 0x125c (EFUSE_INTF1_151)
#define EFUSE_INTF1_R_151_LSB                                                  0
#define EFUSE_INTF1_R_151_MSB                                                  31
#define EFUSE_INTF1_R_151_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_151_GET(x)                                               (((x) & EFUSE_INTF1_R_151_MASK) >> EFUSE_INTF1_R_151_LSB)
#define EFUSE_INTF1_R_151_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_151_LSB) & EFUSE_INTF1_R_151_MASK)
#define EFUSE_INTF1_R_151_RESET                                                0x0
#define EFUSE_INTF1_151_ADDRESS                                                (0x125c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_151_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_151_RESET                                                  0x0

// 0x1260 (EFUSE_INTF1_152)
#define EFUSE_INTF1_R_152_LSB                                                  0
#define EFUSE_INTF1_R_152_MSB                                                  31
#define EFUSE_INTF1_R_152_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_152_GET(x)                                               (((x) & EFUSE_INTF1_R_152_MASK) >> EFUSE_INTF1_R_152_LSB)
#define EFUSE_INTF1_R_152_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_152_LSB) & EFUSE_INTF1_R_152_MASK)
#define EFUSE_INTF1_R_152_RESET                                                0x0
#define EFUSE_INTF1_152_ADDRESS                                                (0x1260 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_152_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_152_RESET                                                  0x0

// 0x1264 (EFUSE_INTF1_153)
#define EFUSE_INTF1_R_153_LSB                                                  0
#define EFUSE_INTF1_R_153_MSB                                                  31
#define EFUSE_INTF1_R_153_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_153_GET(x)                                               (((x) & EFUSE_INTF1_R_153_MASK) >> EFUSE_INTF1_R_153_LSB)
#define EFUSE_INTF1_R_153_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_153_LSB) & EFUSE_INTF1_R_153_MASK)
#define EFUSE_INTF1_R_153_RESET                                                0x0
#define EFUSE_INTF1_153_ADDRESS                                                (0x1264 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_153_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_153_RESET                                                  0x0

// 0x1268 (EFUSE_INTF1_154)
#define EFUSE_INTF1_R_154_LSB                                                  0
#define EFUSE_INTF1_R_154_MSB                                                  31
#define EFUSE_INTF1_R_154_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_154_GET(x)                                               (((x) & EFUSE_INTF1_R_154_MASK) >> EFUSE_INTF1_R_154_LSB)
#define EFUSE_INTF1_R_154_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_154_LSB) & EFUSE_INTF1_R_154_MASK)
#define EFUSE_INTF1_R_154_RESET                                                0x0
#define EFUSE_INTF1_154_ADDRESS                                                (0x1268 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_154_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_154_RESET                                                  0x0

// 0x126c (EFUSE_INTF1_155)
#define EFUSE_INTF1_R_155_LSB                                                  0
#define EFUSE_INTF1_R_155_MSB                                                  31
#define EFUSE_INTF1_R_155_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_155_GET(x)                                               (((x) & EFUSE_INTF1_R_155_MASK) >> EFUSE_INTF1_R_155_LSB)
#define EFUSE_INTF1_R_155_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_155_LSB) & EFUSE_INTF1_R_155_MASK)
#define EFUSE_INTF1_R_155_RESET                                                0x0
#define EFUSE_INTF1_155_ADDRESS                                                (0x126c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_155_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_155_RESET                                                  0x0

// 0x1270 (EFUSE_INTF1_156)
#define EFUSE_INTF1_R_156_LSB                                                  0
#define EFUSE_INTF1_R_156_MSB                                                  31
#define EFUSE_INTF1_R_156_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_156_GET(x)                                               (((x) & EFUSE_INTF1_R_156_MASK) >> EFUSE_INTF1_R_156_LSB)
#define EFUSE_INTF1_R_156_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_156_LSB) & EFUSE_INTF1_R_156_MASK)
#define EFUSE_INTF1_R_156_RESET                                                0x0
#define EFUSE_INTF1_156_ADDRESS                                                (0x1270 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_156_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_156_RESET                                                  0x0

// 0x1274 (EFUSE_INTF1_157)
#define EFUSE_INTF1_R_157_LSB                                                  0
#define EFUSE_INTF1_R_157_MSB                                                  31
#define EFUSE_INTF1_R_157_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_157_GET(x)                                               (((x) & EFUSE_INTF1_R_157_MASK) >> EFUSE_INTF1_R_157_LSB)
#define EFUSE_INTF1_R_157_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_157_LSB) & EFUSE_INTF1_R_157_MASK)
#define EFUSE_INTF1_R_157_RESET                                                0x0
#define EFUSE_INTF1_157_ADDRESS                                                (0x1274 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_157_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_157_RESET                                                  0x0

// 0x1278 (EFUSE_INTF1_158)
#define EFUSE_INTF1_R_158_LSB                                                  0
#define EFUSE_INTF1_R_158_MSB                                                  31
#define EFUSE_INTF1_R_158_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_158_GET(x)                                               (((x) & EFUSE_INTF1_R_158_MASK) >> EFUSE_INTF1_R_158_LSB)
#define EFUSE_INTF1_R_158_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_158_LSB) & EFUSE_INTF1_R_158_MASK)
#define EFUSE_INTF1_R_158_RESET                                                0x0
#define EFUSE_INTF1_158_ADDRESS                                                (0x1278 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_158_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_158_RESET                                                  0x0

// 0x127c (EFUSE_INTF1_159)
#define EFUSE_INTF1_R_159_LSB                                                  0
#define EFUSE_INTF1_R_159_MSB                                                  31
#define EFUSE_INTF1_R_159_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_159_GET(x)                                               (((x) & EFUSE_INTF1_R_159_MASK) >> EFUSE_INTF1_R_159_LSB)
#define EFUSE_INTF1_R_159_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_159_LSB) & EFUSE_INTF1_R_159_MASK)
#define EFUSE_INTF1_R_159_RESET                                                0x0
#define EFUSE_INTF1_159_ADDRESS                                                (0x127c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_159_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_159_RESET                                                  0x0

// 0x1280 (EFUSE_INTF1_160)
#define EFUSE_INTF1_R_160_LSB                                                  0
#define EFUSE_INTF1_R_160_MSB                                                  31
#define EFUSE_INTF1_R_160_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_160_GET(x)                                               (((x) & EFUSE_INTF1_R_160_MASK) >> EFUSE_INTF1_R_160_LSB)
#define EFUSE_INTF1_R_160_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_160_LSB) & EFUSE_INTF1_R_160_MASK)
#define EFUSE_INTF1_R_160_RESET                                                0x0
#define EFUSE_INTF1_160_ADDRESS                                                (0x1280 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_160_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_160_RESET                                                  0x0

// 0x1284 (EFUSE_INTF1_161)
#define EFUSE_INTF1_R_161_LSB                                                  0
#define EFUSE_INTF1_R_161_MSB                                                  31
#define EFUSE_INTF1_R_161_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_161_GET(x)                                               (((x) & EFUSE_INTF1_R_161_MASK) >> EFUSE_INTF1_R_161_LSB)
#define EFUSE_INTF1_R_161_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_161_LSB) & EFUSE_INTF1_R_161_MASK)
#define EFUSE_INTF1_R_161_RESET                                                0x0
#define EFUSE_INTF1_161_ADDRESS                                                (0x1284 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_161_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_161_RESET                                                  0x0

// 0x1288 (EFUSE_INTF1_162)
#define EFUSE_INTF1_R_162_LSB                                                  0
#define EFUSE_INTF1_R_162_MSB                                                  31
#define EFUSE_INTF1_R_162_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_162_GET(x)                                               (((x) & EFUSE_INTF1_R_162_MASK) >> EFUSE_INTF1_R_162_LSB)
#define EFUSE_INTF1_R_162_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_162_LSB) & EFUSE_INTF1_R_162_MASK)
#define EFUSE_INTF1_R_162_RESET                                                0x0
#define EFUSE_INTF1_162_ADDRESS                                                (0x1288 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_162_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_162_RESET                                                  0x0

// 0x128c (EFUSE_INTF1_163)
#define EFUSE_INTF1_R_163_LSB                                                  0
#define EFUSE_INTF1_R_163_MSB                                                  31
#define EFUSE_INTF1_R_163_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_163_GET(x)                                               (((x) & EFUSE_INTF1_R_163_MASK) >> EFUSE_INTF1_R_163_LSB)
#define EFUSE_INTF1_R_163_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_163_LSB) & EFUSE_INTF1_R_163_MASK)
#define EFUSE_INTF1_R_163_RESET                                                0x0
#define EFUSE_INTF1_163_ADDRESS                                                (0x128c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_163_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_163_RESET                                                  0x0

// 0x1290 (EFUSE_INTF1_164)
#define EFUSE_INTF1_R_164_LSB                                                  0
#define EFUSE_INTF1_R_164_MSB                                                  31
#define EFUSE_INTF1_R_164_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_164_GET(x)                                               (((x) & EFUSE_INTF1_R_164_MASK) >> EFUSE_INTF1_R_164_LSB)
#define EFUSE_INTF1_R_164_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_164_LSB) & EFUSE_INTF1_R_164_MASK)
#define EFUSE_INTF1_R_164_RESET                                                0x0
#define EFUSE_INTF1_164_ADDRESS                                                (0x1290 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_164_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_164_RESET                                                  0x0

// 0x1294 (EFUSE_INTF1_165)
#define EFUSE_INTF1_R_165_LSB                                                  0
#define EFUSE_INTF1_R_165_MSB                                                  31
#define EFUSE_INTF1_R_165_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_165_GET(x)                                               (((x) & EFUSE_INTF1_R_165_MASK) >> EFUSE_INTF1_R_165_LSB)
#define EFUSE_INTF1_R_165_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_165_LSB) & EFUSE_INTF1_R_165_MASK)
#define EFUSE_INTF1_R_165_RESET                                                0x0
#define EFUSE_INTF1_165_ADDRESS                                                (0x1294 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_165_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_165_RESET                                                  0x0

// 0x1298 (EFUSE_INTF1_166)
#define EFUSE_INTF1_R_166_LSB                                                  0
#define EFUSE_INTF1_R_166_MSB                                                  31
#define EFUSE_INTF1_R_166_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_166_GET(x)                                               (((x) & EFUSE_INTF1_R_166_MASK) >> EFUSE_INTF1_R_166_LSB)
#define EFUSE_INTF1_R_166_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_166_LSB) & EFUSE_INTF1_R_166_MASK)
#define EFUSE_INTF1_R_166_RESET                                                0x0
#define EFUSE_INTF1_166_ADDRESS                                                (0x1298 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_166_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_166_RESET                                                  0x0

// 0x129c (EFUSE_INTF1_167)
#define EFUSE_INTF1_R_167_LSB                                                  0
#define EFUSE_INTF1_R_167_MSB                                                  31
#define EFUSE_INTF1_R_167_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_167_GET(x)                                               (((x) & EFUSE_INTF1_R_167_MASK) >> EFUSE_INTF1_R_167_LSB)
#define EFUSE_INTF1_R_167_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_167_LSB) & EFUSE_INTF1_R_167_MASK)
#define EFUSE_INTF1_R_167_RESET                                                0x0
#define EFUSE_INTF1_167_ADDRESS                                                (0x129c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_167_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_167_RESET                                                  0x0

// 0x12a0 (EFUSE_INTF1_168)
#define EFUSE_INTF1_R_168_LSB                                                  0
#define EFUSE_INTF1_R_168_MSB                                                  31
#define EFUSE_INTF1_R_168_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_168_GET(x)                                               (((x) & EFUSE_INTF1_R_168_MASK) >> EFUSE_INTF1_R_168_LSB)
#define EFUSE_INTF1_R_168_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_168_LSB) & EFUSE_INTF1_R_168_MASK)
#define EFUSE_INTF1_R_168_RESET                                                0x0
#define EFUSE_INTF1_168_ADDRESS                                                (0x12a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_168_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_168_RESET                                                  0x0

// 0x12a4 (EFUSE_INTF1_169)
#define EFUSE_INTF1_R_169_LSB                                                  0
#define EFUSE_INTF1_R_169_MSB                                                  31
#define EFUSE_INTF1_R_169_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_169_GET(x)                                               (((x) & EFUSE_INTF1_R_169_MASK) >> EFUSE_INTF1_R_169_LSB)
#define EFUSE_INTF1_R_169_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_169_LSB) & EFUSE_INTF1_R_169_MASK)
#define EFUSE_INTF1_R_169_RESET                                                0x0
#define EFUSE_INTF1_169_ADDRESS                                                (0x12a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_169_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_169_RESET                                                  0x0

// 0x12a8 (EFUSE_INTF1_170)
#define EFUSE_INTF1_R_170_LSB                                                  0
#define EFUSE_INTF1_R_170_MSB                                                  31
#define EFUSE_INTF1_R_170_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_170_GET(x)                                               (((x) & EFUSE_INTF1_R_170_MASK) >> EFUSE_INTF1_R_170_LSB)
#define EFUSE_INTF1_R_170_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_170_LSB) & EFUSE_INTF1_R_170_MASK)
#define EFUSE_INTF1_R_170_RESET                                                0x0
#define EFUSE_INTF1_170_ADDRESS                                                (0x12a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_170_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_170_RESET                                                  0x0

// 0x12ac (EFUSE_INTF1_171)
#define EFUSE_INTF1_R_171_LSB                                                  0
#define EFUSE_INTF1_R_171_MSB                                                  31
#define EFUSE_INTF1_R_171_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_171_GET(x)                                               (((x) & EFUSE_INTF1_R_171_MASK) >> EFUSE_INTF1_R_171_LSB)
#define EFUSE_INTF1_R_171_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_171_LSB) & EFUSE_INTF1_R_171_MASK)
#define EFUSE_INTF1_R_171_RESET                                                0x0
#define EFUSE_INTF1_171_ADDRESS                                                (0x12ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_171_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_171_RESET                                                  0x0

// 0x12b0 (EFUSE_INTF1_172)
#define EFUSE_INTF1_R_172_LSB                                                  0
#define EFUSE_INTF1_R_172_MSB                                                  31
#define EFUSE_INTF1_R_172_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_172_GET(x)                                               (((x) & EFUSE_INTF1_R_172_MASK) >> EFUSE_INTF1_R_172_LSB)
#define EFUSE_INTF1_R_172_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_172_LSB) & EFUSE_INTF1_R_172_MASK)
#define EFUSE_INTF1_R_172_RESET                                                0x0
#define EFUSE_INTF1_172_ADDRESS                                                (0x12b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_172_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_172_RESET                                                  0x0

// 0x12b4 (EFUSE_INTF1_173)
#define EFUSE_INTF1_R_173_LSB                                                  0
#define EFUSE_INTF1_R_173_MSB                                                  31
#define EFUSE_INTF1_R_173_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_173_GET(x)                                               (((x) & EFUSE_INTF1_R_173_MASK) >> EFUSE_INTF1_R_173_LSB)
#define EFUSE_INTF1_R_173_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_173_LSB) & EFUSE_INTF1_R_173_MASK)
#define EFUSE_INTF1_R_173_RESET                                                0x0
#define EFUSE_INTF1_173_ADDRESS                                                (0x12b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_173_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_173_RESET                                                  0x0

// 0x12b8 (EFUSE_INTF1_174)
#define EFUSE_INTF1_R_174_LSB                                                  0
#define EFUSE_INTF1_R_174_MSB                                                  31
#define EFUSE_INTF1_R_174_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_174_GET(x)                                               (((x) & EFUSE_INTF1_R_174_MASK) >> EFUSE_INTF1_R_174_LSB)
#define EFUSE_INTF1_R_174_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_174_LSB) & EFUSE_INTF1_R_174_MASK)
#define EFUSE_INTF1_R_174_RESET                                                0x0
#define EFUSE_INTF1_174_ADDRESS                                                (0x12b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_174_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_174_RESET                                                  0x0

// 0x12bc (EFUSE_INTF1_175)
#define EFUSE_INTF1_R_175_LSB                                                  0
#define EFUSE_INTF1_R_175_MSB                                                  31
#define EFUSE_INTF1_R_175_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_175_GET(x)                                               (((x) & EFUSE_INTF1_R_175_MASK) >> EFUSE_INTF1_R_175_LSB)
#define EFUSE_INTF1_R_175_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_175_LSB) & EFUSE_INTF1_R_175_MASK)
#define EFUSE_INTF1_R_175_RESET                                                0x0
#define EFUSE_INTF1_175_ADDRESS                                                (0x12bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_175_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_175_RESET                                                  0x0

// 0x12c0 (EFUSE_INTF1_176)
#define EFUSE_INTF1_R_176_LSB                                                  0
#define EFUSE_INTF1_R_176_MSB                                                  31
#define EFUSE_INTF1_R_176_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_176_GET(x)                                               (((x) & EFUSE_INTF1_R_176_MASK) >> EFUSE_INTF1_R_176_LSB)
#define EFUSE_INTF1_R_176_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_176_LSB) & EFUSE_INTF1_R_176_MASK)
#define EFUSE_INTF1_R_176_RESET                                                0x0
#define EFUSE_INTF1_176_ADDRESS                                                (0x12c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_176_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_176_RESET                                                  0x0

// 0x12c4 (EFUSE_INTF1_177)
#define EFUSE_INTF1_R_177_LSB                                                  0
#define EFUSE_INTF1_R_177_MSB                                                  31
#define EFUSE_INTF1_R_177_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_177_GET(x)                                               (((x) & EFUSE_INTF1_R_177_MASK) >> EFUSE_INTF1_R_177_LSB)
#define EFUSE_INTF1_R_177_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_177_LSB) & EFUSE_INTF1_R_177_MASK)
#define EFUSE_INTF1_R_177_RESET                                                0x0
#define EFUSE_INTF1_177_ADDRESS                                                (0x12c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_177_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_177_RESET                                                  0x0

// 0x12c8 (EFUSE_INTF1_178)
#define EFUSE_INTF1_R_178_LSB                                                  0
#define EFUSE_INTF1_R_178_MSB                                                  31
#define EFUSE_INTF1_R_178_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_178_GET(x)                                               (((x) & EFUSE_INTF1_R_178_MASK) >> EFUSE_INTF1_R_178_LSB)
#define EFUSE_INTF1_R_178_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_178_LSB) & EFUSE_INTF1_R_178_MASK)
#define EFUSE_INTF1_R_178_RESET                                                0x0
#define EFUSE_INTF1_178_ADDRESS                                                (0x12c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_178_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_178_RESET                                                  0x0

// 0x12cc (EFUSE_INTF1_179)
#define EFUSE_INTF1_R_179_LSB                                                  0
#define EFUSE_INTF1_R_179_MSB                                                  31
#define EFUSE_INTF1_R_179_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_179_GET(x)                                               (((x) & EFUSE_INTF1_R_179_MASK) >> EFUSE_INTF1_R_179_LSB)
#define EFUSE_INTF1_R_179_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_179_LSB) & EFUSE_INTF1_R_179_MASK)
#define EFUSE_INTF1_R_179_RESET                                                0x0
#define EFUSE_INTF1_179_ADDRESS                                                (0x12cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_179_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_179_RESET                                                  0x0

// 0x12d0 (EFUSE_INTF1_180)
#define EFUSE_INTF1_R_180_LSB                                                  0
#define EFUSE_INTF1_R_180_MSB                                                  31
#define EFUSE_INTF1_R_180_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_180_GET(x)                                               (((x) & EFUSE_INTF1_R_180_MASK) >> EFUSE_INTF1_R_180_LSB)
#define EFUSE_INTF1_R_180_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_180_LSB) & EFUSE_INTF1_R_180_MASK)
#define EFUSE_INTF1_R_180_RESET                                                0x0
#define EFUSE_INTF1_180_ADDRESS                                                (0x12d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_180_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_180_RESET                                                  0x0

// 0x12d4 (EFUSE_INTF1_181)
#define EFUSE_INTF1_R_181_LSB                                                  0
#define EFUSE_INTF1_R_181_MSB                                                  31
#define EFUSE_INTF1_R_181_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_181_GET(x)                                               (((x) & EFUSE_INTF1_R_181_MASK) >> EFUSE_INTF1_R_181_LSB)
#define EFUSE_INTF1_R_181_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_181_LSB) & EFUSE_INTF1_R_181_MASK)
#define EFUSE_INTF1_R_181_RESET                                                0x0
#define EFUSE_INTF1_181_ADDRESS                                                (0x12d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_181_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_181_RESET                                                  0x0

// 0x12d8 (EFUSE_INTF1_182)
#define EFUSE_INTF1_R_182_LSB                                                  0
#define EFUSE_INTF1_R_182_MSB                                                  31
#define EFUSE_INTF1_R_182_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_182_GET(x)                                               (((x) & EFUSE_INTF1_R_182_MASK) >> EFUSE_INTF1_R_182_LSB)
#define EFUSE_INTF1_R_182_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_182_LSB) & EFUSE_INTF1_R_182_MASK)
#define EFUSE_INTF1_R_182_RESET                                                0x0
#define EFUSE_INTF1_182_ADDRESS                                                (0x12d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_182_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_182_RESET                                                  0x0

// 0x12dc (EFUSE_INTF1_183)
#define EFUSE_INTF1_R_183_LSB                                                  0
#define EFUSE_INTF1_R_183_MSB                                                  31
#define EFUSE_INTF1_R_183_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_183_GET(x)                                               (((x) & EFUSE_INTF1_R_183_MASK) >> EFUSE_INTF1_R_183_LSB)
#define EFUSE_INTF1_R_183_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_183_LSB) & EFUSE_INTF1_R_183_MASK)
#define EFUSE_INTF1_R_183_RESET                                                0x0
#define EFUSE_INTF1_183_ADDRESS                                                (0x12dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_183_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_183_RESET                                                  0x0

// 0x12e0 (EFUSE_INTF1_184)
#define EFUSE_INTF1_R_184_LSB                                                  0
#define EFUSE_INTF1_R_184_MSB                                                  31
#define EFUSE_INTF1_R_184_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_184_GET(x)                                               (((x) & EFUSE_INTF1_R_184_MASK) >> EFUSE_INTF1_R_184_LSB)
#define EFUSE_INTF1_R_184_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_184_LSB) & EFUSE_INTF1_R_184_MASK)
#define EFUSE_INTF1_R_184_RESET                                                0x0
#define EFUSE_INTF1_184_ADDRESS                                                (0x12e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_184_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_184_RESET                                                  0x0

// 0x12e4 (EFUSE_INTF1_185)
#define EFUSE_INTF1_R_185_LSB                                                  0
#define EFUSE_INTF1_R_185_MSB                                                  31
#define EFUSE_INTF1_R_185_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_185_GET(x)                                               (((x) & EFUSE_INTF1_R_185_MASK) >> EFUSE_INTF1_R_185_LSB)
#define EFUSE_INTF1_R_185_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_185_LSB) & EFUSE_INTF1_R_185_MASK)
#define EFUSE_INTF1_R_185_RESET                                                0x0
#define EFUSE_INTF1_185_ADDRESS                                                (0x12e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_185_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_185_RESET                                                  0x0

// 0x12e8 (EFUSE_INTF1_186)
#define EFUSE_INTF1_R_186_LSB                                                  0
#define EFUSE_INTF1_R_186_MSB                                                  31
#define EFUSE_INTF1_R_186_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_186_GET(x)                                               (((x) & EFUSE_INTF1_R_186_MASK) >> EFUSE_INTF1_R_186_LSB)
#define EFUSE_INTF1_R_186_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_186_LSB) & EFUSE_INTF1_R_186_MASK)
#define EFUSE_INTF1_R_186_RESET                                                0x0
#define EFUSE_INTF1_186_ADDRESS                                                (0x12e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_186_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_186_RESET                                                  0x0

// 0x12ec (EFUSE_INTF1_187)
#define EFUSE_INTF1_R_187_LSB                                                  0
#define EFUSE_INTF1_R_187_MSB                                                  31
#define EFUSE_INTF1_R_187_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_187_GET(x)                                               (((x) & EFUSE_INTF1_R_187_MASK) >> EFUSE_INTF1_R_187_LSB)
#define EFUSE_INTF1_R_187_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_187_LSB) & EFUSE_INTF1_R_187_MASK)
#define EFUSE_INTF1_R_187_RESET                                                0x0
#define EFUSE_INTF1_187_ADDRESS                                                (0x12ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_187_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_187_RESET                                                  0x0

// 0x12f0 (EFUSE_INTF1_188)
#define EFUSE_INTF1_R_188_LSB                                                  0
#define EFUSE_INTF1_R_188_MSB                                                  31
#define EFUSE_INTF1_R_188_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_188_GET(x)                                               (((x) & EFUSE_INTF1_R_188_MASK) >> EFUSE_INTF1_R_188_LSB)
#define EFUSE_INTF1_R_188_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_188_LSB) & EFUSE_INTF1_R_188_MASK)
#define EFUSE_INTF1_R_188_RESET                                                0x0
#define EFUSE_INTF1_188_ADDRESS                                                (0x12f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_188_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_188_RESET                                                  0x0

// 0x12f4 (EFUSE_INTF1_189)
#define EFUSE_INTF1_R_189_LSB                                                  0
#define EFUSE_INTF1_R_189_MSB                                                  31
#define EFUSE_INTF1_R_189_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_189_GET(x)                                               (((x) & EFUSE_INTF1_R_189_MASK) >> EFUSE_INTF1_R_189_LSB)
#define EFUSE_INTF1_R_189_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_189_LSB) & EFUSE_INTF1_R_189_MASK)
#define EFUSE_INTF1_R_189_RESET                                                0x0
#define EFUSE_INTF1_189_ADDRESS                                                (0x12f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_189_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_189_RESET                                                  0x0

// 0x12f8 (EFUSE_INTF1_190)
#define EFUSE_INTF1_R_190_LSB                                                  0
#define EFUSE_INTF1_R_190_MSB                                                  31
#define EFUSE_INTF1_R_190_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_190_GET(x)                                               (((x) & EFUSE_INTF1_R_190_MASK) >> EFUSE_INTF1_R_190_LSB)
#define EFUSE_INTF1_R_190_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_190_LSB) & EFUSE_INTF1_R_190_MASK)
#define EFUSE_INTF1_R_190_RESET                                                0x0
#define EFUSE_INTF1_190_ADDRESS                                                (0x12f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_190_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_190_RESET                                                  0x0

// 0x12fc (EFUSE_INTF1_191)
#define EFUSE_INTF1_R_191_LSB                                                  0
#define EFUSE_INTF1_R_191_MSB                                                  31
#define EFUSE_INTF1_R_191_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_191_GET(x)                                               (((x) & EFUSE_INTF1_R_191_MASK) >> EFUSE_INTF1_R_191_LSB)
#define EFUSE_INTF1_R_191_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_191_LSB) & EFUSE_INTF1_R_191_MASK)
#define EFUSE_INTF1_R_191_RESET                                                0x0
#define EFUSE_INTF1_191_ADDRESS                                                (0x12fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_191_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_191_RESET                                                  0x0

// 0x1300 (EFUSE_INTF1_192)
#define EFUSE_INTF1_R_192_LSB                                                  0
#define EFUSE_INTF1_R_192_MSB                                                  31
#define EFUSE_INTF1_R_192_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_192_GET(x)                                               (((x) & EFUSE_INTF1_R_192_MASK) >> EFUSE_INTF1_R_192_LSB)
#define EFUSE_INTF1_R_192_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_192_LSB) & EFUSE_INTF1_R_192_MASK)
#define EFUSE_INTF1_R_192_RESET                                                0x0
#define EFUSE_INTF1_192_ADDRESS                                                (0x1300 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_192_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_192_RESET                                                  0x0

// 0x1304 (EFUSE_INTF1_193)
#define EFUSE_INTF1_R_193_LSB                                                  0
#define EFUSE_INTF1_R_193_MSB                                                  31
#define EFUSE_INTF1_R_193_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_193_GET(x)                                               (((x) & EFUSE_INTF1_R_193_MASK) >> EFUSE_INTF1_R_193_LSB)
#define EFUSE_INTF1_R_193_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_193_LSB) & EFUSE_INTF1_R_193_MASK)
#define EFUSE_INTF1_R_193_RESET                                                0x0
#define EFUSE_INTF1_193_ADDRESS                                                (0x1304 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_193_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_193_RESET                                                  0x0

// 0x1308 (EFUSE_INTF1_194)
#define EFUSE_INTF1_R_194_LSB                                                  0
#define EFUSE_INTF1_R_194_MSB                                                  31
#define EFUSE_INTF1_R_194_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_194_GET(x)                                               (((x) & EFUSE_INTF1_R_194_MASK) >> EFUSE_INTF1_R_194_LSB)
#define EFUSE_INTF1_R_194_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_194_LSB) & EFUSE_INTF1_R_194_MASK)
#define EFUSE_INTF1_R_194_RESET                                                0x0
#define EFUSE_INTF1_194_ADDRESS                                                (0x1308 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_194_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_194_RESET                                                  0x0

// 0x130c (EFUSE_INTF1_195)
#define EFUSE_INTF1_R_195_LSB                                                  0
#define EFUSE_INTF1_R_195_MSB                                                  31
#define EFUSE_INTF1_R_195_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_195_GET(x)                                               (((x) & EFUSE_INTF1_R_195_MASK) >> EFUSE_INTF1_R_195_LSB)
#define EFUSE_INTF1_R_195_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_195_LSB) & EFUSE_INTF1_R_195_MASK)
#define EFUSE_INTF1_R_195_RESET                                                0x0
#define EFUSE_INTF1_195_ADDRESS                                                (0x130c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_195_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_195_RESET                                                  0x0

// 0x1310 (EFUSE_INTF1_196)
#define EFUSE_INTF1_R_196_LSB                                                  0
#define EFUSE_INTF1_R_196_MSB                                                  31
#define EFUSE_INTF1_R_196_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_196_GET(x)                                               (((x) & EFUSE_INTF1_R_196_MASK) >> EFUSE_INTF1_R_196_LSB)
#define EFUSE_INTF1_R_196_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_196_LSB) & EFUSE_INTF1_R_196_MASK)
#define EFUSE_INTF1_R_196_RESET                                                0x0
#define EFUSE_INTF1_196_ADDRESS                                                (0x1310 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_196_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_196_RESET                                                  0x0

// 0x1314 (EFUSE_INTF1_197)
#define EFUSE_INTF1_R_197_LSB                                                  0
#define EFUSE_INTF1_R_197_MSB                                                  31
#define EFUSE_INTF1_R_197_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_197_GET(x)                                               (((x) & EFUSE_INTF1_R_197_MASK) >> EFUSE_INTF1_R_197_LSB)
#define EFUSE_INTF1_R_197_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_197_LSB) & EFUSE_INTF1_R_197_MASK)
#define EFUSE_INTF1_R_197_RESET                                                0x0
#define EFUSE_INTF1_197_ADDRESS                                                (0x1314 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_197_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_197_RESET                                                  0x0

// 0x1318 (EFUSE_INTF1_198)
#define EFUSE_INTF1_R_198_LSB                                                  0
#define EFUSE_INTF1_R_198_MSB                                                  31
#define EFUSE_INTF1_R_198_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_198_GET(x)                                               (((x) & EFUSE_INTF1_R_198_MASK) >> EFUSE_INTF1_R_198_LSB)
#define EFUSE_INTF1_R_198_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_198_LSB) & EFUSE_INTF1_R_198_MASK)
#define EFUSE_INTF1_R_198_RESET                                                0x0
#define EFUSE_INTF1_198_ADDRESS                                                (0x1318 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_198_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_198_RESET                                                  0x0

// 0x131c (EFUSE_INTF1_199)
#define EFUSE_INTF1_R_199_LSB                                                  0
#define EFUSE_INTF1_R_199_MSB                                                  31
#define EFUSE_INTF1_R_199_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_199_GET(x)                                               (((x) & EFUSE_INTF1_R_199_MASK) >> EFUSE_INTF1_R_199_LSB)
#define EFUSE_INTF1_R_199_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_199_LSB) & EFUSE_INTF1_R_199_MASK)
#define EFUSE_INTF1_R_199_RESET                                                0x0
#define EFUSE_INTF1_199_ADDRESS                                                (0x131c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_199_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_199_RESET                                                  0x0

// 0x1320 (EFUSE_INTF1_200)
#define EFUSE_INTF1_R_200_LSB                                                  0
#define EFUSE_INTF1_R_200_MSB                                                  31
#define EFUSE_INTF1_R_200_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_200_GET(x)                                               (((x) & EFUSE_INTF1_R_200_MASK) >> EFUSE_INTF1_R_200_LSB)
#define EFUSE_INTF1_R_200_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_200_LSB) & EFUSE_INTF1_R_200_MASK)
#define EFUSE_INTF1_R_200_RESET                                                0x0
#define EFUSE_INTF1_200_ADDRESS                                                (0x1320 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_200_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_200_RESET                                                  0x0

// 0x1324 (EFUSE_INTF1_201)
#define EFUSE_INTF1_R_201_LSB                                                  0
#define EFUSE_INTF1_R_201_MSB                                                  31
#define EFUSE_INTF1_R_201_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_201_GET(x)                                               (((x) & EFUSE_INTF1_R_201_MASK) >> EFUSE_INTF1_R_201_LSB)
#define EFUSE_INTF1_R_201_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_201_LSB) & EFUSE_INTF1_R_201_MASK)
#define EFUSE_INTF1_R_201_RESET                                                0x0
#define EFUSE_INTF1_201_ADDRESS                                                (0x1324 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_201_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_201_RESET                                                  0x0

// 0x1328 (EFUSE_INTF1_202)
#define EFUSE_INTF1_R_202_LSB                                                  0
#define EFUSE_INTF1_R_202_MSB                                                  31
#define EFUSE_INTF1_R_202_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_202_GET(x)                                               (((x) & EFUSE_INTF1_R_202_MASK) >> EFUSE_INTF1_R_202_LSB)
#define EFUSE_INTF1_R_202_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_202_LSB) & EFUSE_INTF1_R_202_MASK)
#define EFUSE_INTF1_R_202_RESET                                                0x0
#define EFUSE_INTF1_202_ADDRESS                                                (0x1328 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_202_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_202_RESET                                                  0x0

// 0x132c (EFUSE_INTF1_203)
#define EFUSE_INTF1_R_203_LSB                                                  0
#define EFUSE_INTF1_R_203_MSB                                                  31
#define EFUSE_INTF1_R_203_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_203_GET(x)                                               (((x) & EFUSE_INTF1_R_203_MASK) >> EFUSE_INTF1_R_203_LSB)
#define EFUSE_INTF1_R_203_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_203_LSB) & EFUSE_INTF1_R_203_MASK)
#define EFUSE_INTF1_R_203_RESET                                                0x0
#define EFUSE_INTF1_203_ADDRESS                                                (0x132c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_203_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_203_RESET                                                  0x0

// 0x1330 (EFUSE_INTF1_204)
#define EFUSE_INTF1_R_204_LSB                                                  0
#define EFUSE_INTF1_R_204_MSB                                                  31
#define EFUSE_INTF1_R_204_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_204_GET(x)                                               (((x) & EFUSE_INTF1_R_204_MASK) >> EFUSE_INTF1_R_204_LSB)
#define EFUSE_INTF1_R_204_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_204_LSB) & EFUSE_INTF1_R_204_MASK)
#define EFUSE_INTF1_R_204_RESET                                                0x0
#define EFUSE_INTF1_204_ADDRESS                                                (0x1330 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_204_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_204_RESET                                                  0x0

// 0x1334 (EFUSE_INTF1_205)
#define EFUSE_INTF1_R_205_LSB                                                  0
#define EFUSE_INTF1_R_205_MSB                                                  31
#define EFUSE_INTF1_R_205_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_205_GET(x)                                               (((x) & EFUSE_INTF1_R_205_MASK) >> EFUSE_INTF1_R_205_LSB)
#define EFUSE_INTF1_R_205_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_205_LSB) & EFUSE_INTF1_R_205_MASK)
#define EFUSE_INTF1_R_205_RESET                                                0x0
#define EFUSE_INTF1_205_ADDRESS                                                (0x1334 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_205_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_205_RESET                                                  0x0

// 0x1338 (EFUSE_INTF1_206)
#define EFUSE_INTF1_R_206_LSB                                                  0
#define EFUSE_INTF1_R_206_MSB                                                  31
#define EFUSE_INTF1_R_206_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_206_GET(x)                                               (((x) & EFUSE_INTF1_R_206_MASK) >> EFUSE_INTF1_R_206_LSB)
#define EFUSE_INTF1_R_206_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_206_LSB) & EFUSE_INTF1_R_206_MASK)
#define EFUSE_INTF1_R_206_RESET                                                0x0
#define EFUSE_INTF1_206_ADDRESS                                                (0x1338 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_206_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_206_RESET                                                  0x0

// 0x133c (EFUSE_INTF1_207)
#define EFUSE_INTF1_R_207_LSB                                                  0
#define EFUSE_INTF1_R_207_MSB                                                  31
#define EFUSE_INTF1_R_207_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_207_GET(x)                                               (((x) & EFUSE_INTF1_R_207_MASK) >> EFUSE_INTF1_R_207_LSB)
#define EFUSE_INTF1_R_207_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_207_LSB) & EFUSE_INTF1_R_207_MASK)
#define EFUSE_INTF1_R_207_RESET                                                0x0
#define EFUSE_INTF1_207_ADDRESS                                                (0x133c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_207_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_207_RESET                                                  0x0

// 0x1340 (EFUSE_INTF1_208)
#define EFUSE_INTF1_R_208_LSB                                                  0
#define EFUSE_INTF1_R_208_MSB                                                  31
#define EFUSE_INTF1_R_208_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_208_GET(x)                                               (((x) & EFUSE_INTF1_R_208_MASK) >> EFUSE_INTF1_R_208_LSB)
#define EFUSE_INTF1_R_208_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_208_LSB) & EFUSE_INTF1_R_208_MASK)
#define EFUSE_INTF1_R_208_RESET                                                0x0
#define EFUSE_INTF1_208_ADDRESS                                                (0x1340 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_208_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_208_RESET                                                  0x0

// 0x1344 (EFUSE_INTF1_209)
#define EFUSE_INTF1_R_209_LSB                                                  0
#define EFUSE_INTF1_R_209_MSB                                                  31
#define EFUSE_INTF1_R_209_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_209_GET(x)                                               (((x) & EFUSE_INTF1_R_209_MASK) >> EFUSE_INTF1_R_209_LSB)
#define EFUSE_INTF1_R_209_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_209_LSB) & EFUSE_INTF1_R_209_MASK)
#define EFUSE_INTF1_R_209_RESET                                                0x0
#define EFUSE_INTF1_209_ADDRESS                                                (0x1344 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_209_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_209_RESET                                                  0x0

// 0x1348 (EFUSE_INTF1_210)
#define EFUSE_INTF1_R_210_LSB                                                  0
#define EFUSE_INTF1_R_210_MSB                                                  31
#define EFUSE_INTF1_R_210_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_210_GET(x)                                               (((x) & EFUSE_INTF1_R_210_MASK) >> EFUSE_INTF1_R_210_LSB)
#define EFUSE_INTF1_R_210_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_210_LSB) & EFUSE_INTF1_R_210_MASK)
#define EFUSE_INTF1_R_210_RESET                                                0x0
#define EFUSE_INTF1_210_ADDRESS                                                (0x1348 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_210_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_210_RESET                                                  0x0

// 0x134c (EFUSE_INTF1_211)
#define EFUSE_INTF1_R_211_LSB                                                  0
#define EFUSE_INTF1_R_211_MSB                                                  31
#define EFUSE_INTF1_R_211_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_211_GET(x)                                               (((x) & EFUSE_INTF1_R_211_MASK) >> EFUSE_INTF1_R_211_LSB)
#define EFUSE_INTF1_R_211_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_211_LSB) & EFUSE_INTF1_R_211_MASK)
#define EFUSE_INTF1_R_211_RESET                                                0x0
#define EFUSE_INTF1_211_ADDRESS                                                (0x134c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_211_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_211_RESET                                                  0x0

// 0x1350 (EFUSE_INTF1_212)
#define EFUSE_INTF1_R_212_LSB                                                  0
#define EFUSE_INTF1_R_212_MSB                                                  31
#define EFUSE_INTF1_R_212_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_212_GET(x)                                               (((x) & EFUSE_INTF1_R_212_MASK) >> EFUSE_INTF1_R_212_LSB)
#define EFUSE_INTF1_R_212_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_212_LSB) & EFUSE_INTF1_R_212_MASK)
#define EFUSE_INTF1_R_212_RESET                                                0x0
#define EFUSE_INTF1_212_ADDRESS                                                (0x1350 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_212_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_212_RESET                                                  0x0

// 0x1354 (EFUSE_INTF1_213)
#define EFUSE_INTF1_R_213_LSB                                                  0
#define EFUSE_INTF1_R_213_MSB                                                  31
#define EFUSE_INTF1_R_213_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_213_GET(x)                                               (((x) & EFUSE_INTF1_R_213_MASK) >> EFUSE_INTF1_R_213_LSB)
#define EFUSE_INTF1_R_213_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_213_LSB) & EFUSE_INTF1_R_213_MASK)
#define EFUSE_INTF1_R_213_RESET                                                0x0
#define EFUSE_INTF1_213_ADDRESS                                                (0x1354 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_213_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_213_RESET                                                  0x0

// 0x1358 (EFUSE_INTF1_214)
#define EFUSE_INTF1_R_214_LSB                                                  0
#define EFUSE_INTF1_R_214_MSB                                                  31
#define EFUSE_INTF1_R_214_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_214_GET(x)                                               (((x) & EFUSE_INTF1_R_214_MASK) >> EFUSE_INTF1_R_214_LSB)
#define EFUSE_INTF1_R_214_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_214_LSB) & EFUSE_INTF1_R_214_MASK)
#define EFUSE_INTF1_R_214_RESET                                                0x0
#define EFUSE_INTF1_214_ADDRESS                                                (0x1358 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_214_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_214_RESET                                                  0x0

// 0x135c (EFUSE_INTF1_215)
#define EFUSE_INTF1_R_215_LSB                                                  0
#define EFUSE_INTF1_R_215_MSB                                                  31
#define EFUSE_INTF1_R_215_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_215_GET(x)                                               (((x) & EFUSE_INTF1_R_215_MASK) >> EFUSE_INTF1_R_215_LSB)
#define EFUSE_INTF1_R_215_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_215_LSB) & EFUSE_INTF1_R_215_MASK)
#define EFUSE_INTF1_R_215_RESET                                                0x0
#define EFUSE_INTF1_215_ADDRESS                                                (0x135c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_215_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_215_RESET                                                  0x0

// 0x1360 (EFUSE_INTF1_216)
#define EFUSE_INTF1_R_216_LSB                                                  0
#define EFUSE_INTF1_R_216_MSB                                                  31
#define EFUSE_INTF1_R_216_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_216_GET(x)                                               (((x) & EFUSE_INTF1_R_216_MASK) >> EFUSE_INTF1_R_216_LSB)
#define EFUSE_INTF1_R_216_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_216_LSB) & EFUSE_INTF1_R_216_MASK)
#define EFUSE_INTF1_R_216_RESET                                                0x0
#define EFUSE_INTF1_216_ADDRESS                                                (0x1360 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_216_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_216_RESET                                                  0x0

// 0x1364 (EFUSE_INTF1_217)
#define EFUSE_INTF1_R_217_LSB                                                  0
#define EFUSE_INTF1_R_217_MSB                                                  31
#define EFUSE_INTF1_R_217_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_217_GET(x)                                               (((x) & EFUSE_INTF1_R_217_MASK) >> EFUSE_INTF1_R_217_LSB)
#define EFUSE_INTF1_R_217_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_217_LSB) & EFUSE_INTF1_R_217_MASK)
#define EFUSE_INTF1_R_217_RESET                                                0x0
#define EFUSE_INTF1_217_ADDRESS                                                (0x1364 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_217_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_217_RESET                                                  0x0

// 0x1368 (EFUSE_INTF1_218)
#define EFUSE_INTF1_R_218_LSB                                                  0
#define EFUSE_INTF1_R_218_MSB                                                  31
#define EFUSE_INTF1_R_218_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_218_GET(x)                                               (((x) & EFUSE_INTF1_R_218_MASK) >> EFUSE_INTF1_R_218_LSB)
#define EFUSE_INTF1_R_218_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_218_LSB) & EFUSE_INTF1_R_218_MASK)
#define EFUSE_INTF1_R_218_RESET                                                0x0
#define EFUSE_INTF1_218_ADDRESS                                                (0x1368 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_218_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_218_RESET                                                  0x0

// 0x136c (EFUSE_INTF1_219)
#define EFUSE_INTF1_R_219_LSB                                                  0
#define EFUSE_INTF1_R_219_MSB                                                  31
#define EFUSE_INTF1_R_219_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_219_GET(x)                                               (((x) & EFUSE_INTF1_R_219_MASK) >> EFUSE_INTF1_R_219_LSB)
#define EFUSE_INTF1_R_219_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_219_LSB) & EFUSE_INTF1_R_219_MASK)
#define EFUSE_INTF1_R_219_RESET                                                0x0
#define EFUSE_INTF1_219_ADDRESS                                                (0x136c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_219_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_219_RESET                                                  0x0

// 0x1370 (EFUSE_INTF1_220)
#define EFUSE_INTF1_R_220_LSB                                                  0
#define EFUSE_INTF1_R_220_MSB                                                  31
#define EFUSE_INTF1_R_220_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_220_GET(x)                                               (((x) & EFUSE_INTF1_R_220_MASK) >> EFUSE_INTF1_R_220_LSB)
#define EFUSE_INTF1_R_220_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_220_LSB) & EFUSE_INTF1_R_220_MASK)
#define EFUSE_INTF1_R_220_RESET                                                0x0
#define EFUSE_INTF1_220_ADDRESS                                                (0x1370 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_220_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_220_RESET                                                  0x0

// 0x1374 (EFUSE_INTF1_221)
#define EFUSE_INTF1_R_221_LSB                                                  0
#define EFUSE_INTF1_R_221_MSB                                                  31
#define EFUSE_INTF1_R_221_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_221_GET(x)                                               (((x) & EFUSE_INTF1_R_221_MASK) >> EFUSE_INTF1_R_221_LSB)
#define EFUSE_INTF1_R_221_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_221_LSB) & EFUSE_INTF1_R_221_MASK)
#define EFUSE_INTF1_R_221_RESET                                                0x0
#define EFUSE_INTF1_221_ADDRESS                                                (0x1374 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_221_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_221_RESET                                                  0x0

// 0x1378 (EFUSE_INTF1_222)
#define EFUSE_INTF1_R_222_LSB                                                  0
#define EFUSE_INTF1_R_222_MSB                                                  31
#define EFUSE_INTF1_R_222_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_222_GET(x)                                               (((x) & EFUSE_INTF1_R_222_MASK) >> EFUSE_INTF1_R_222_LSB)
#define EFUSE_INTF1_R_222_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_222_LSB) & EFUSE_INTF1_R_222_MASK)
#define EFUSE_INTF1_R_222_RESET                                                0x0
#define EFUSE_INTF1_222_ADDRESS                                                (0x1378 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_222_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_222_RESET                                                  0x0

// 0x137c (EFUSE_INTF1_223)
#define EFUSE_INTF1_R_223_LSB                                                  0
#define EFUSE_INTF1_R_223_MSB                                                  31
#define EFUSE_INTF1_R_223_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_223_GET(x)                                               (((x) & EFUSE_INTF1_R_223_MASK) >> EFUSE_INTF1_R_223_LSB)
#define EFUSE_INTF1_R_223_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_223_LSB) & EFUSE_INTF1_R_223_MASK)
#define EFUSE_INTF1_R_223_RESET                                                0x0
#define EFUSE_INTF1_223_ADDRESS                                                (0x137c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_223_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_223_RESET                                                  0x0

// 0x1380 (EFUSE_INTF1_224)
#define EFUSE_INTF1_R_224_LSB                                                  0
#define EFUSE_INTF1_R_224_MSB                                                  31
#define EFUSE_INTF1_R_224_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_224_GET(x)                                               (((x) & EFUSE_INTF1_R_224_MASK) >> EFUSE_INTF1_R_224_LSB)
#define EFUSE_INTF1_R_224_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_224_LSB) & EFUSE_INTF1_R_224_MASK)
#define EFUSE_INTF1_R_224_RESET                                                0x0
#define EFUSE_INTF1_224_ADDRESS                                                (0x1380 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_224_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_224_RESET                                                  0x0

// 0x1384 (EFUSE_INTF1_225)
#define EFUSE_INTF1_R_225_LSB                                                  0
#define EFUSE_INTF1_R_225_MSB                                                  31
#define EFUSE_INTF1_R_225_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_225_GET(x)                                               (((x) & EFUSE_INTF1_R_225_MASK) >> EFUSE_INTF1_R_225_LSB)
#define EFUSE_INTF1_R_225_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_225_LSB) & EFUSE_INTF1_R_225_MASK)
#define EFUSE_INTF1_R_225_RESET                                                0x0
#define EFUSE_INTF1_225_ADDRESS                                                (0x1384 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_225_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_225_RESET                                                  0x0

// 0x1388 (EFUSE_INTF1_226)
#define EFUSE_INTF1_R_226_LSB                                                  0
#define EFUSE_INTF1_R_226_MSB                                                  31
#define EFUSE_INTF1_R_226_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_226_GET(x)                                               (((x) & EFUSE_INTF1_R_226_MASK) >> EFUSE_INTF1_R_226_LSB)
#define EFUSE_INTF1_R_226_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_226_LSB) & EFUSE_INTF1_R_226_MASK)
#define EFUSE_INTF1_R_226_RESET                                                0x0
#define EFUSE_INTF1_226_ADDRESS                                                (0x1388 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_226_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_226_RESET                                                  0x0

// 0x138c (EFUSE_INTF1_227)
#define EFUSE_INTF1_R_227_LSB                                                  0
#define EFUSE_INTF1_R_227_MSB                                                  31
#define EFUSE_INTF1_R_227_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_227_GET(x)                                               (((x) & EFUSE_INTF1_R_227_MASK) >> EFUSE_INTF1_R_227_LSB)
#define EFUSE_INTF1_R_227_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_227_LSB) & EFUSE_INTF1_R_227_MASK)
#define EFUSE_INTF1_R_227_RESET                                                0x0
#define EFUSE_INTF1_227_ADDRESS                                                (0x138c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_227_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_227_RESET                                                  0x0

// 0x1390 (EFUSE_INTF1_228)
#define EFUSE_INTF1_R_228_LSB                                                  0
#define EFUSE_INTF1_R_228_MSB                                                  31
#define EFUSE_INTF1_R_228_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_228_GET(x)                                               (((x) & EFUSE_INTF1_R_228_MASK) >> EFUSE_INTF1_R_228_LSB)
#define EFUSE_INTF1_R_228_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_228_LSB) & EFUSE_INTF1_R_228_MASK)
#define EFUSE_INTF1_R_228_RESET                                                0x0
#define EFUSE_INTF1_228_ADDRESS                                                (0x1390 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_228_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_228_RESET                                                  0x0

// 0x1394 (EFUSE_INTF1_229)
#define EFUSE_INTF1_R_229_LSB                                                  0
#define EFUSE_INTF1_R_229_MSB                                                  31
#define EFUSE_INTF1_R_229_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_229_GET(x)                                               (((x) & EFUSE_INTF1_R_229_MASK) >> EFUSE_INTF1_R_229_LSB)
#define EFUSE_INTF1_R_229_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_229_LSB) & EFUSE_INTF1_R_229_MASK)
#define EFUSE_INTF1_R_229_RESET                                                0x0
#define EFUSE_INTF1_229_ADDRESS                                                (0x1394 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_229_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_229_RESET                                                  0x0

// 0x1398 (EFUSE_INTF1_230)
#define EFUSE_INTF1_R_230_LSB                                                  0
#define EFUSE_INTF1_R_230_MSB                                                  31
#define EFUSE_INTF1_R_230_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_230_GET(x)                                               (((x) & EFUSE_INTF1_R_230_MASK) >> EFUSE_INTF1_R_230_LSB)
#define EFUSE_INTF1_R_230_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_230_LSB) & EFUSE_INTF1_R_230_MASK)
#define EFUSE_INTF1_R_230_RESET                                                0x0
#define EFUSE_INTF1_230_ADDRESS                                                (0x1398 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_230_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_230_RESET                                                  0x0

// 0x139c (EFUSE_INTF1_231)
#define EFUSE_INTF1_R_231_LSB                                                  0
#define EFUSE_INTF1_R_231_MSB                                                  31
#define EFUSE_INTF1_R_231_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_231_GET(x)                                               (((x) & EFUSE_INTF1_R_231_MASK) >> EFUSE_INTF1_R_231_LSB)
#define EFUSE_INTF1_R_231_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_231_LSB) & EFUSE_INTF1_R_231_MASK)
#define EFUSE_INTF1_R_231_RESET                                                0x0
#define EFUSE_INTF1_231_ADDRESS                                                (0x139c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_231_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_231_RESET                                                  0x0

// 0x13a0 (EFUSE_INTF1_232)
#define EFUSE_INTF1_R_232_LSB                                                  0
#define EFUSE_INTF1_R_232_MSB                                                  31
#define EFUSE_INTF1_R_232_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_232_GET(x)                                               (((x) & EFUSE_INTF1_R_232_MASK) >> EFUSE_INTF1_R_232_LSB)
#define EFUSE_INTF1_R_232_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_232_LSB) & EFUSE_INTF1_R_232_MASK)
#define EFUSE_INTF1_R_232_RESET                                                0x0
#define EFUSE_INTF1_232_ADDRESS                                                (0x13a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_232_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_232_RESET                                                  0x0

// 0x13a4 (EFUSE_INTF1_233)
#define EFUSE_INTF1_R_233_LSB                                                  0
#define EFUSE_INTF1_R_233_MSB                                                  31
#define EFUSE_INTF1_R_233_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_233_GET(x)                                               (((x) & EFUSE_INTF1_R_233_MASK) >> EFUSE_INTF1_R_233_LSB)
#define EFUSE_INTF1_R_233_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_233_LSB) & EFUSE_INTF1_R_233_MASK)
#define EFUSE_INTF1_R_233_RESET                                                0x0
#define EFUSE_INTF1_233_ADDRESS                                                (0x13a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_233_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_233_RESET                                                  0x0

// 0x13a8 (EFUSE_INTF1_234)
#define EFUSE_INTF1_R_234_LSB                                                  0
#define EFUSE_INTF1_R_234_MSB                                                  31
#define EFUSE_INTF1_R_234_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_234_GET(x)                                               (((x) & EFUSE_INTF1_R_234_MASK) >> EFUSE_INTF1_R_234_LSB)
#define EFUSE_INTF1_R_234_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_234_LSB) & EFUSE_INTF1_R_234_MASK)
#define EFUSE_INTF1_R_234_RESET                                                0x0
#define EFUSE_INTF1_234_ADDRESS                                                (0x13a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_234_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_234_RESET                                                  0x0

// 0x13ac (EFUSE_INTF1_235)
#define EFUSE_INTF1_R_235_LSB                                                  0
#define EFUSE_INTF1_R_235_MSB                                                  31
#define EFUSE_INTF1_R_235_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_235_GET(x)                                               (((x) & EFUSE_INTF1_R_235_MASK) >> EFUSE_INTF1_R_235_LSB)
#define EFUSE_INTF1_R_235_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_235_LSB) & EFUSE_INTF1_R_235_MASK)
#define EFUSE_INTF1_R_235_RESET                                                0x0
#define EFUSE_INTF1_235_ADDRESS                                                (0x13ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_235_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_235_RESET                                                  0x0

// 0x13b0 (EFUSE_INTF1_236)
#define EFUSE_INTF1_R_236_LSB                                                  0
#define EFUSE_INTF1_R_236_MSB                                                  31
#define EFUSE_INTF1_R_236_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_236_GET(x)                                               (((x) & EFUSE_INTF1_R_236_MASK) >> EFUSE_INTF1_R_236_LSB)
#define EFUSE_INTF1_R_236_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_236_LSB) & EFUSE_INTF1_R_236_MASK)
#define EFUSE_INTF1_R_236_RESET                                                0x0
#define EFUSE_INTF1_236_ADDRESS                                                (0x13b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_236_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_236_RESET                                                  0x0

// 0x13b4 (EFUSE_INTF1_237)
#define EFUSE_INTF1_R_237_LSB                                                  0
#define EFUSE_INTF1_R_237_MSB                                                  31
#define EFUSE_INTF1_R_237_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_237_GET(x)                                               (((x) & EFUSE_INTF1_R_237_MASK) >> EFUSE_INTF1_R_237_LSB)
#define EFUSE_INTF1_R_237_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_237_LSB) & EFUSE_INTF1_R_237_MASK)
#define EFUSE_INTF1_R_237_RESET                                                0x0
#define EFUSE_INTF1_237_ADDRESS                                                (0x13b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_237_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_237_RESET                                                  0x0

// 0x13b8 (EFUSE_INTF1_238)
#define EFUSE_INTF1_R_238_LSB                                                  0
#define EFUSE_INTF1_R_238_MSB                                                  31
#define EFUSE_INTF1_R_238_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_238_GET(x)                                               (((x) & EFUSE_INTF1_R_238_MASK) >> EFUSE_INTF1_R_238_LSB)
#define EFUSE_INTF1_R_238_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_238_LSB) & EFUSE_INTF1_R_238_MASK)
#define EFUSE_INTF1_R_238_RESET                                                0x0
#define EFUSE_INTF1_238_ADDRESS                                                (0x13b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_238_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_238_RESET                                                  0x0

// 0x13bc (EFUSE_INTF1_239)
#define EFUSE_INTF1_R_239_LSB                                                  0
#define EFUSE_INTF1_R_239_MSB                                                  31
#define EFUSE_INTF1_R_239_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_239_GET(x)                                               (((x) & EFUSE_INTF1_R_239_MASK) >> EFUSE_INTF1_R_239_LSB)
#define EFUSE_INTF1_R_239_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_239_LSB) & EFUSE_INTF1_R_239_MASK)
#define EFUSE_INTF1_R_239_RESET                                                0x0
#define EFUSE_INTF1_239_ADDRESS                                                (0x13bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_239_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_239_RESET                                                  0x0

// 0x13c0 (EFUSE_INTF1_240)
#define EFUSE_INTF1_R_240_LSB                                                  0
#define EFUSE_INTF1_R_240_MSB                                                  31
#define EFUSE_INTF1_R_240_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_240_GET(x)                                               (((x) & EFUSE_INTF1_R_240_MASK) >> EFUSE_INTF1_R_240_LSB)
#define EFUSE_INTF1_R_240_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_240_LSB) & EFUSE_INTF1_R_240_MASK)
#define EFUSE_INTF1_R_240_RESET                                                0x0
#define EFUSE_INTF1_240_ADDRESS                                                (0x13c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_240_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_240_RESET                                                  0x0

// 0x13c4 (EFUSE_INTF1_241)
#define EFUSE_INTF1_R_241_LSB                                                  0
#define EFUSE_INTF1_R_241_MSB                                                  31
#define EFUSE_INTF1_R_241_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_241_GET(x)                                               (((x) & EFUSE_INTF1_R_241_MASK) >> EFUSE_INTF1_R_241_LSB)
#define EFUSE_INTF1_R_241_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_241_LSB) & EFUSE_INTF1_R_241_MASK)
#define EFUSE_INTF1_R_241_RESET                                                0x0
#define EFUSE_INTF1_241_ADDRESS                                                (0x13c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_241_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_241_RESET                                                  0x0

// 0x13c8 (EFUSE_INTF1_242)
#define EFUSE_INTF1_R_242_LSB                                                  0
#define EFUSE_INTF1_R_242_MSB                                                  31
#define EFUSE_INTF1_R_242_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_242_GET(x)                                               (((x) & EFUSE_INTF1_R_242_MASK) >> EFUSE_INTF1_R_242_LSB)
#define EFUSE_INTF1_R_242_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_242_LSB) & EFUSE_INTF1_R_242_MASK)
#define EFUSE_INTF1_R_242_RESET                                                0x0
#define EFUSE_INTF1_242_ADDRESS                                                (0x13c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_242_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_242_RESET                                                  0x0

// 0x13cc (EFUSE_INTF1_243)
#define EFUSE_INTF1_R_243_LSB                                                  0
#define EFUSE_INTF1_R_243_MSB                                                  31
#define EFUSE_INTF1_R_243_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_243_GET(x)                                               (((x) & EFUSE_INTF1_R_243_MASK) >> EFUSE_INTF1_R_243_LSB)
#define EFUSE_INTF1_R_243_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_243_LSB) & EFUSE_INTF1_R_243_MASK)
#define EFUSE_INTF1_R_243_RESET                                                0x0
#define EFUSE_INTF1_243_ADDRESS                                                (0x13cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_243_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_243_RESET                                                  0x0

// 0x13d0 (EFUSE_INTF1_244)
#define EFUSE_INTF1_R_244_LSB                                                  0
#define EFUSE_INTF1_R_244_MSB                                                  31
#define EFUSE_INTF1_R_244_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_244_GET(x)                                               (((x) & EFUSE_INTF1_R_244_MASK) >> EFUSE_INTF1_R_244_LSB)
#define EFUSE_INTF1_R_244_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_244_LSB) & EFUSE_INTF1_R_244_MASK)
#define EFUSE_INTF1_R_244_RESET                                                0x0
#define EFUSE_INTF1_244_ADDRESS                                                (0x13d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_244_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_244_RESET                                                  0x0

// 0x13d4 (EFUSE_INTF1_245)
#define EFUSE_INTF1_R_245_LSB                                                  0
#define EFUSE_INTF1_R_245_MSB                                                  31
#define EFUSE_INTF1_R_245_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_245_GET(x)                                               (((x) & EFUSE_INTF1_R_245_MASK) >> EFUSE_INTF1_R_245_LSB)
#define EFUSE_INTF1_R_245_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_245_LSB) & EFUSE_INTF1_R_245_MASK)
#define EFUSE_INTF1_R_245_RESET                                                0x0
#define EFUSE_INTF1_245_ADDRESS                                                (0x13d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_245_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_245_RESET                                                  0x0

// 0x13d8 (EFUSE_INTF1_246)
#define EFUSE_INTF1_R_246_LSB                                                  0
#define EFUSE_INTF1_R_246_MSB                                                  31
#define EFUSE_INTF1_R_246_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_246_GET(x)                                               (((x) & EFUSE_INTF1_R_246_MASK) >> EFUSE_INTF1_R_246_LSB)
#define EFUSE_INTF1_R_246_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_246_LSB) & EFUSE_INTF1_R_246_MASK)
#define EFUSE_INTF1_R_246_RESET                                                0x0
#define EFUSE_INTF1_246_ADDRESS                                                (0x13d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_246_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_246_RESET                                                  0x0

// 0x13dc (EFUSE_INTF1_247)
#define EFUSE_INTF1_R_247_LSB                                                  0
#define EFUSE_INTF1_R_247_MSB                                                  31
#define EFUSE_INTF1_R_247_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_247_GET(x)                                               (((x) & EFUSE_INTF1_R_247_MASK) >> EFUSE_INTF1_R_247_LSB)
#define EFUSE_INTF1_R_247_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_247_LSB) & EFUSE_INTF1_R_247_MASK)
#define EFUSE_INTF1_R_247_RESET                                                0x0
#define EFUSE_INTF1_247_ADDRESS                                                (0x13dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_247_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_247_RESET                                                  0x0

// 0x13e0 (EFUSE_INTF1_248)
#define EFUSE_INTF1_R_248_LSB                                                  0
#define EFUSE_INTF1_R_248_MSB                                                  31
#define EFUSE_INTF1_R_248_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_248_GET(x)                                               (((x) & EFUSE_INTF1_R_248_MASK) >> EFUSE_INTF1_R_248_LSB)
#define EFUSE_INTF1_R_248_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_248_LSB) & EFUSE_INTF1_R_248_MASK)
#define EFUSE_INTF1_R_248_RESET                                                0x0
#define EFUSE_INTF1_248_ADDRESS                                                (0x13e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_248_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_248_RESET                                                  0x0

// 0x13e4 (EFUSE_INTF1_249)
#define EFUSE_INTF1_R_249_LSB                                                  0
#define EFUSE_INTF1_R_249_MSB                                                  31
#define EFUSE_INTF1_R_249_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_249_GET(x)                                               (((x) & EFUSE_INTF1_R_249_MASK) >> EFUSE_INTF1_R_249_LSB)
#define EFUSE_INTF1_R_249_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_249_LSB) & EFUSE_INTF1_R_249_MASK)
#define EFUSE_INTF1_R_249_RESET                                                0x0
#define EFUSE_INTF1_249_ADDRESS                                                (0x13e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_249_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_249_RESET                                                  0x0

// 0x13e8 (EFUSE_INTF1_250)
#define EFUSE_INTF1_R_250_LSB                                                  0
#define EFUSE_INTF1_R_250_MSB                                                  31
#define EFUSE_INTF1_R_250_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_250_GET(x)                                               (((x) & EFUSE_INTF1_R_250_MASK) >> EFUSE_INTF1_R_250_LSB)
#define EFUSE_INTF1_R_250_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_250_LSB) & EFUSE_INTF1_R_250_MASK)
#define EFUSE_INTF1_R_250_RESET                                                0x0
#define EFUSE_INTF1_250_ADDRESS                                                (0x13e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_250_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_250_RESET                                                  0x0

// 0x13ec (EFUSE_INTF1_251)
#define EFUSE_INTF1_R_251_LSB                                                  0
#define EFUSE_INTF1_R_251_MSB                                                  31
#define EFUSE_INTF1_R_251_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_251_GET(x)                                               (((x) & EFUSE_INTF1_R_251_MASK) >> EFUSE_INTF1_R_251_LSB)
#define EFUSE_INTF1_R_251_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_251_LSB) & EFUSE_INTF1_R_251_MASK)
#define EFUSE_INTF1_R_251_RESET                                                0x0
#define EFUSE_INTF1_251_ADDRESS                                                (0x13ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_251_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_251_RESET                                                  0x0

// 0x13f0 (EFUSE_INTF1_252)
#define EFUSE_INTF1_R_252_LSB                                                  0
#define EFUSE_INTF1_R_252_MSB                                                  31
#define EFUSE_INTF1_R_252_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_252_GET(x)                                               (((x) & EFUSE_INTF1_R_252_MASK) >> EFUSE_INTF1_R_252_LSB)
#define EFUSE_INTF1_R_252_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_252_LSB) & EFUSE_INTF1_R_252_MASK)
#define EFUSE_INTF1_R_252_RESET                                                0x0
#define EFUSE_INTF1_252_ADDRESS                                                (0x13f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_252_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_252_RESET                                                  0x0

// 0x13f4 (EFUSE_INTF1_253)
#define EFUSE_INTF1_R_253_LSB                                                  0
#define EFUSE_INTF1_R_253_MSB                                                  31
#define EFUSE_INTF1_R_253_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_253_GET(x)                                               (((x) & EFUSE_INTF1_R_253_MASK) >> EFUSE_INTF1_R_253_LSB)
#define EFUSE_INTF1_R_253_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_253_LSB) & EFUSE_INTF1_R_253_MASK)
#define EFUSE_INTF1_R_253_RESET                                                0x0
#define EFUSE_INTF1_253_ADDRESS                                                (0x13f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_253_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_253_RESET                                                  0x0

// 0x13f8 (EFUSE_INTF1_254)
#define EFUSE_INTF1_R_254_LSB                                                  0
#define EFUSE_INTF1_R_254_MSB                                                  31
#define EFUSE_INTF1_R_254_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_254_GET(x)                                               (((x) & EFUSE_INTF1_R_254_MASK) >> EFUSE_INTF1_R_254_LSB)
#define EFUSE_INTF1_R_254_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_254_LSB) & EFUSE_INTF1_R_254_MASK)
#define EFUSE_INTF1_R_254_RESET                                                0x0
#define EFUSE_INTF1_254_ADDRESS                                                (0x13f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_254_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_254_RESET                                                  0x0

// 0x13fc (EFUSE_INTF1_255)
#define EFUSE_INTF1_R_255_LSB                                                  0
#define EFUSE_INTF1_R_255_MSB                                                  31
#define EFUSE_INTF1_R_255_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_255_GET(x)                                               (((x) & EFUSE_INTF1_R_255_MASK) >> EFUSE_INTF1_R_255_LSB)
#define EFUSE_INTF1_R_255_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_255_LSB) & EFUSE_INTF1_R_255_MASK)
#define EFUSE_INTF1_R_255_RESET                                                0x0
#define EFUSE_INTF1_255_ADDRESS                                                (0x13fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_255_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_255_RESET                                                  0x0

// 0x1400 (EFUSE_INTF1_256)
#define EFUSE_INTF1_R_256_LSB                                                  0
#define EFUSE_INTF1_R_256_MSB                                                  31
#define EFUSE_INTF1_R_256_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_256_GET(x)                                               (((x) & EFUSE_INTF1_R_256_MASK) >> EFUSE_INTF1_R_256_LSB)
#define EFUSE_INTF1_R_256_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_256_LSB) & EFUSE_INTF1_R_256_MASK)
#define EFUSE_INTF1_R_256_RESET                                                0x0
#define EFUSE_INTF1_256_ADDRESS                                                (0x1400 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_256_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_256_RESET                                                  0x0

// 0x1404 (EFUSE_INTF1_257)
#define EFUSE_INTF1_R_257_LSB                                                  0
#define EFUSE_INTF1_R_257_MSB                                                  31
#define EFUSE_INTF1_R_257_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_257_GET(x)                                               (((x) & EFUSE_INTF1_R_257_MASK) >> EFUSE_INTF1_R_257_LSB)
#define EFUSE_INTF1_R_257_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_257_LSB) & EFUSE_INTF1_R_257_MASK)
#define EFUSE_INTF1_R_257_RESET                                                0x0
#define EFUSE_INTF1_257_ADDRESS                                                (0x1404 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_257_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_257_RESET                                                  0x0

// 0x1408 (EFUSE_INTF1_258)
#define EFUSE_INTF1_R_258_LSB                                                  0
#define EFUSE_INTF1_R_258_MSB                                                  31
#define EFUSE_INTF1_R_258_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_258_GET(x)                                               (((x) & EFUSE_INTF1_R_258_MASK) >> EFUSE_INTF1_R_258_LSB)
#define EFUSE_INTF1_R_258_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_258_LSB) & EFUSE_INTF1_R_258_MASK)
#define EFUSE_INTF1_R_258_RESET                                                0x0
#define EFUSE_INTF1_258_ADDRESS                                                (0x1408 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_258_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_258_RESET                                                  0x0

// 0x140c (EFUSE_INTF1_259)
#define EFUSE_INTF1_R_259_LSB                                                  0
#define EFUSE_INTF1_R_259_MSB                                                  31
#define EFUSE_INTF1_R_259_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_259_GET(x)                                               (((x) & EFUSE_INTF1_R_259_MASK) >> EFUSE_INTF1_R_259_LSB)
#define EFUSE_INTF1_R_259_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_259_LSB) & EFUSE_INTF1_R_259_MASK)
#define EFUSE_INTF1_R_259_RESET                                                0x0
#define EFUSE_INTF1_259_ADDRESS                                                (0x140c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_259_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_259_RESET                                                  0x0

// 0x1410 (EFUSE_INTF1_260)
#define EFUSE_INTF1_R_260_LSB                                                  0
#define EFUSE_INTF1_R_260_MSB                                                  31
#define EFUSE_INTF1_R_260_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_260_GET(x)                                               (((x) & EFUSE_INTF1_R_260_MASK) >> EFUSE_INTF1_R_260_LSB)
#define EFUSE_INTF1_R_260_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_260_LSB) & EFUSE_INTF1_R_260_MASK)
#define EFUSE_INTF1_R_260_RESET                                                0x0
#define EFUSE_INTF1_260_ADDRESS                                                (0x1410 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_260_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_260_RESET                                                  0x0

// 0x1414 (EFUSE_INTF1_261)
#define EFUSE_INTF1_R_261_LSB                                                  0
#define EFUSE_INTF1_R_261_MSB                                                  31
#define EFUSE_INTF1_R_261_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_261_GET(x)                                               (((x) & EFUSE_INTF1_R_261_MASK) >> EFUSE_INTF1_R_261_LSB)
#define EFUSE_INTF1_R_261_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_261_LSB) & EFUSE_INTF1_R_261_MASK)
#define EFUSE_INTF1_R_261_RESET                                                0x0
#define EFUSE_INTF1_261_ADDRESS                                                (0x1414 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_261_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_261_RESET                                                  0x0

// 0x1418 (EFUSE_INTF1_262)
#define EFUSE_INTF1_R_262_LSB                                                  0
#define EFUSE_INTF1_R_262_MSB                                                  31
#define EFUSE_INTF1_R_262_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_262_GET(x)                                               (((x) & EFUSE_INTF1_R_262_MASK) >> EFUSE_INTF1_R_262_LSB)
#define EFUSE_INTF1_R_262_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_262_LSB) & EFUSE_INTF1_R_262_MASK)
#define EFUSE_INTF1_R_262_RESET                                                0x0
#define EFUSE_INTF1_262_ADDRESS                                                (0x1418 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_262_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_262_RESET                                                  0x0

// 0x141c (EFUSE_INTF1_263)
#define EFUSE_INTF1_R_263_LSB                                                  0
#define EFUSE_INTF1_R_263_MSB                                                  31
#define EFUSE_INTF1_R_263_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_263_GET(x)                                               (((x) & EFUSE_INTF1_R_263_MASK) >> EFUSE_INTF1_R_263_LSB)
#define EFUSE_INTF1_R_263_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_263_LSB) & EFUSE_INTF1_R_263_MASK)
#define EFUSE_INTF1_R_263_RESET                                                0x0
#define EFUSE_INTF1_263_ADDRESS                                                (0x141c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_263_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_263_RESET                                                  0x0

// 0x1420 (EFUSE_INTF1_264)
#define EFUSE_INTF1_R_264_LSB                                                  0
#define EFUSE_INTF1_R_264_MSB                                                  31
#define EFUSE_INTF1_R_264_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_264_GET(x)                                               (((x) & EFUSE_INTF1_R_264_MASK) >> EFUSE_INTF1_R_264_LSB)
#define EFUSE_INTF1_R_264_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_264_LSB) & EFUSE_INTF1_R_264_MASK)
#define EFUSE_INTF1_R_264_RESET                                                0x0
#define EFUSE_INTF1_264_ADDRESS                                                (0x1420 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_264_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_264_RESET                                                  0x0

// 0x1424 (EFUSE_INTF1_265)
#define EFUSE_INTF1_R_265_LSB                                                  0
#define EFUSE_INTF1_R_265_MSB                                                  31
#define EFUSE_INTF1_R_265_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_265_GET(x)                                               (((x) & EFUSE_INTF1_R_265_MASK) >> EFUSE_INTF1_R_265_LSB)
#define EFUSE_INTF1_R_265_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_265_LSB) & EFUSE_INTF1_R_265_MASK)
#define EFUSE_INTF1_R_265_RESET                                                0x0
#define EFUSE_INTF1_265_ADDRESS                                                (0x1424 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_265_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_265_RESET                                                  0x0

// 0x1428 (EFUSE_INTF1_266)
#define EFUSE_INTF1_R_266_LSB                                                  0
#define EFUSE_INTF1_R_266_MSB                                                  31
#define EFUSE_INTF1_R_266_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_266_GET(x)                                               (((x) & EFUSE_INTF1_R_266_MASK) >> EFUSE_INTF1_R_266_LSB)
#define EFUSE_INTF1_R_266_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_266_LSB) & EFUSE_INTF1_R_266_MASK)
#define EFUSE_INTF1_R_266_RESET                                                0x0
#define EFUSE_INTF1_266_ADDRESS                                                (0x1428 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_266_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_266_RESET                                                  0x0

// 0x142c (EFUSE_INTF1_267)
#define EFUSE_INTF1_R_267_LSB                                                  0
#define EFUSE_INTF1_R_267_MSB                                                  31
#define EFUSE_INTF1_R_267_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_267_GET(x)                                               (((x) & EFUSE_INTF1_R_267_MASK) >> EFUSE_INTF1_R_267_LSB)
#define EFUSE_INTF1_R_267_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_267_LSB) & EFUSE_INTF1_R_267_MASK)
#define EFUSE_INTF1_R_267_RESET                                                0x0
#define EFUSE_INTF1_267_ADDRESS                                                (0x142c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_267_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_267_RESET                                                  0x0

// 0x1430 (EFUSE_INTF1_268)
#define EFUSE_INTF1_R_268_LSB                                                  0
#define EFUSE_INTF1_R_268_MSB                                                  31
#define EFUSE_INTF1_R_268_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_268_GET(x)                                               (((x) & EFUSE_INTF1_R_268_MASK) >> EFUSE_INTF1_R_268_LSB)
#define EFUSE_INTF1_R_268_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_268_LSB) & EFUSE_INTF1_R_268_MASK)
#define EFUSE_INTF1_R_268_RESET                                                0x0
#define EFUSE_INTF1_268_ADDRESS                                                (0x1430 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_268_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_268_RESET                                                  0x0

// 0x1434 (EFUSE_INTF1_269)
#define EFUSE_INTF1_R_269_LSB                                                  0
#define EFUSE_INTF1_R_269_MSB                                                  31
#define EFUSE_INTF1_R_269_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_269_GET(x)                                               (((x) & EFUSE_INTF1_R_269_MASK) >> EFUSE_INTF1_R_269_LSB)
#define EFUSE_INTF1_R_269_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_269_LSB) & EFUSE_INTF1_R_269_MASK)
#define EFUSE_INTF1_R_269_RESET                                                0x0
#define EFUSE_INTF1_269_ADDRESS                                                (0x1434 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_269_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_269_RESET                                                  0x0

// 0x1438 (EFUSE_INTF1_270)
#define EFUSE_INTF1_R_270_LSB                                                  0
#define EFUSE_INTF1_R_270_MSB                                                  31
#define EFUSE_INTF1_R_270_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_270_GET(x)                                               (((x) & EFUSE_INTF1_R_270_MASK) >> EFUSE_INTF1_R_270_LSB)
#define EFUSE_INTF1_R_270_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_270_LSB) & EFUSE_INTF1_R_270_MASK)
#define EFUSE_INTF1_R_270_RESET                                                0x0
#define EFUSE_INTF1_270_ADDRESS                                                (0x1438 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_270_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_270_RESET                                                  0x0

// 0x143c (EFUSE_INTF1_271)
#define EFUSE_INTF1_R_271_LSB                                                  0
#define EFUSE_INTF1_R_271_MSB                                                  31
#define EFUSE_INTF1_R_271_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_271_GET(x)                                               (((x) & EFUSE_INTF1_R_271_MASK) >> EFUSE_INTF1_R_271_LSB)
#define EFUSE_INTF1_R_271_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_271_LSB) & EFUSE_INTF1_R_271_MASK)
#define EFUSE_INTF1_R_271_RESET                                                0x0
#define EFUSE_INTF1_271_ADDRESS                                                (0x143c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_271_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_271_RESET                                                  0x0

// 0x1440 (EFUSE_INTF1_272)
#define EFUSE_INTF1_R_272_LSB                                                  0
#define EFUSE_INTF1_R_272_MSB                                                  31
#define EFUSE_INTF1_R_272_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_272_GET(x)                                               (((x) & EFUSE_INTF1_R_272_MASK) >> EFUSE_INTF1_R_272_LSB)
#define EFUSE_INTF1_R_272_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_272_LSB) & EFUSE_INTF1_R_272_MASK)
#define EFUSE_INTF1_R_272_RESET                                                0x0
#define EFUSE_INTF1_272_ADDRESS                                                (0x1440 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_272_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_272_RESET                                                  0x0

// 0x1444 (EFUSE_INTF1_273)
#define EFUSE_INTF1_R_273_LSB                                                  0
#define EFUSE_INTF1_R_273_MSB                                                  31
#define EFUSE_INTF1_R_273_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_273_GET(x)                                               (((x) & EFUSE_INTF1_R_273_MASK) >> EFUSE_INTF1_R_273_LSB)
#define EFUSE_INTF1_R_273_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_273_LSB) & EFUSE_INTF1_R_273_MASK)
#define EFUSE_INTF1_R_273_RESET                                                0x0
#define EFUSE_INTF1_273_ADDRESS                                                (0x1444 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_273_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_273_RESET                                                  0x0

// 0x1448 (EFUSE_INTF1_274)
#define EFUSE_INTF1_R_274_LSB                                                  0
#define EFUSE_INTF1_R_274_MSB                                                  31
#define EFUSE_INTF1_R_274_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_274_GET(x)                                               (((x) & EFUSE_INTF1_R_274_MASK) >> EFUSE_INTF1_R_274_LSB)
#define EFUSE_INTF1_R_274_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_274_LSB) & EFUSE_INTF1_R_274_MASK)
#define EFUSE_INTF1_R_274_RESET                                                0x0
#define EFUSE_INTF1_274_ADDRESS                                                (0x1448 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_274_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_274_RESET                                                  0x0

// 0x144c (EFUSE_INTF1_275)
#define EFUSE_INTF1_R_275_LSB                                                  0
#define EFUSE_INTF1_R_275_MSB                                                  31
#define EFUSE_INTF1_R_275_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_275_GET(x)                                               (((x) & EFUSE_INTF1_R_275_MASK) >> EFUSE_INTF1_R_275_LSB)
#define EFUSE_INTF1_R_275_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_275_LSB) & EFUSE_INTF1_R_275_MASK)
#define EFUSE_INTF1_R_275_RESET                                                0x0
#define EFUSE_INTF1_275_ADDRESS                                                (0x144c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_275_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_275_RESET                                                  0x0

// 0x1450 (EFUSE_INTF1_276)
#define EFUSE_INTF1_R_276_LSB                                                  0
#define EFUSE_INTF1_R_276_MSB                                                  31
#define EFUSE_INTF1_R_276_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_276_GET(x)                                               (((x) & EFUSE_INTF1_R_276_MASK) >> EFUSE_INTF1_R_276_LSB)
#define EFUSE_INTF1_R_276_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_276_LSB) & EFUSE_INTF1_R_276_MASK)
#define EFUSE_INTF1_R_276_RESET                                                0x0
#define EFUSE_INTF1_276_ADDRESS                                                (0x1450 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_276_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_276_RESET                                                  0x0

// 0x1454 (EFUSE_INTF1_277)
#define EFUSE_INTF1_R_277_LSB                                                  0
#define EFUSE_INTF1_R_277_MSB                                                  31
#define EFUSE_INTF1_R_277_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_277_GET(x)                                               (((x) & EFUSE_INTF1_R_277_MASK) >> EFUSE_INTF1_R_277_LSB)
#define EFUSE_INTF1_R_277_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_277_LSB) & EFUSE_INTF1_R_277_MASK)
#define EFUSE_INTF1_R_277_RESET                                                0x0
#define EFUSE_INTF1_277_ADDRESS                                                (0x1454 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_277_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_277_RESET                                                  0x0

// 0x1458 (EFUSE_INTF1_278)
#define EFUSE_INTF1_R_278_LSB                                                  0
#define EFUSE_INTF1_R_278_MSB                                                  31
#define EFUSE_INTF1_R_278_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_278_GET(x)                                               (((x) & EFUSE_INTF1_R_278_MASK) >> EFUSE_INTF1_R_278_LSB)
#define EFUSE_INTF1_R_278_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_278_LSB) & EFUSE_INTF1_R_278_MASK)
#define EFUSE_INTF1_R_278_RESET                                                0x0
#define EFUSE_INTF1_278_ADDRESS                                                (0x1458 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_278_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_278_RESET                                                  0x0

// 0x145c (EFUSE_INTF1_279)
#define EFUSE_INTF1_R_279_LSB                                                  0
#define EFUSE_INTF1_R_279_MSB                                                  31
#define EFUSE_INTF1_R_279_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_279_GET(x)                                               (((x) & EFUSE_INTF1_R_279_MASK) >> EFUSE_INTF1_R_279_LSB)
#define EFUSE_INTF1_R_279_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_279_LSB) & EFUSE_INTF1_R_279_MASK)
#define EFUSE_INTF1_R_279_RESET                                                0x0
#define EFUSE_INTF1_279_ADDRESS                                                (0x145c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_279_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_279_RESET                                                  0x0

// 0x1460 (EFUSE_INTF1_280)
#define EFUSE_INTF1_R_280_LSB                                                  0
#define EFUSE_INTF1_R_280_MSB                                                  31
#define EFUSE_INTF1_R_280_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_280_GET(x)                                               (((x) & EFUSE_INTF1_R_280_MASK) >> EFUSE_INTF1_R_280_LSB)
#define EFUSE_INTF1_R_280_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_280_LSB) & EFUSE_INTF1_R_280_MASK)
#define EFUSE_INTF1_R_280_RESET                                                0x0
#define EFUSE_INTF1_280_ADDRESS                                                (0x1460 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_280_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_280_RESET                                                  0x0

// 0x1464 (EFUSE_INTF1_281)
#define EFUSE_INTF1_R_281_LSB                                                  0
#define EFUSE_INTF1_R_281_MSB                                                  31
#define EFUSE_INTF1_R_281_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_281_GET(x)                                               (((x) & EFUSE_INTF1_R_281_MASK) >> EFUSE_INTF1_R_281_LSB)
#define EFUSE_INTF1_R_281_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_281_LSB) & EFUSE_INTF1_R_281_MASK)
#define EFUSE_INTF1_R_281_RESET                                                0x0
#define EFUSE_INTF1_281_ADDRESS                                                (0x1464 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_281_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_281_RESET                                                  0x0

// 0x1468 (EFUSE_INTF1_282)
#define EFUSE_INTF1_R_282_LSB                                                  0
#define EFUSE_INTF1_R_282_MSB                                                  31
#define EFUSE_INTF1_R_282_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_282_GET(x)                                               (((x) & EFUSE_INTF1_R_282_MASK) >> EFUSE_INTF1_R_282_LSB)
#define EFUSE_INTF1_R_282_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_282_LSB) & EFUSE_INTF1_R_282_MASK)
#define EFUSE_INTF1_R_282_RESET                                                0x0
#define EFUSE_INTF1_282_ADDRESS                                                (0x1468 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_282_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_282_RESET                                                  0x0

// 0x146c (EFUSE_INTF1_283)
#define EFUSE_INTF1_R_283_LSB                                                  0
#define EFUSE_INTF1_R_283_MSB                                                  31
#define EFUSE_INTF1_R_283_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_283_GET(x)                                               (((x) & EFUSE_INTF1_R_283_MASK) >> EFUSE_INTF1_R_283_LSB)
#define EFUSE_INTF1_R_283_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_283_LSB) & EFUSE_INTF1_R_283_MASK)
#define EFUSE_INTF1_R_283_RESET                                                0x0
#define EFUSE_INTF1_283_ADDRESS                                                (0x146c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_283_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_283_RESET                                                  0x0

// 0x1470 (EFUSE_INTF1_284)
#define EFUSE_INTF1_R_284_LSB                                                  0
#define EFUSE_INTF1_R_284_MSB                                                  31
#define EFUSE_INTF1_R_284_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_284_GET(x)                                               (((x) & EFUSE_INTF1_R_284_MASK) >> EFUSE_INTF1_R_284_LSB)
#define EFUSE_INTF1_R_284_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_284_LSB) & EFUSE_INTF1_R_284_MASK)
#define EFUSE_INTF1_R_284_RESET                                                0x0
#define EFUSE_INTF1_284_ADDRESS                                                (0x1470 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_284_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_284_RESET                                                  0x0

// 0x1474 (EFUSE_INTF1_285)
#define EFUSE_INTF1_R_285_LSB                                                  0
#define EFUSE_INTF1_R_285_MSB                                                  31
#define EFUSE_INTF1_R_285_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_285_GET(x)                                               (((x) & EFUSE_INTF1_R_285_MASK) >> EFUSE_INTF1_R_285_LSB)
#define EFUSE_INTF1_R_285_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_285_LSB) & EFUSE_INTF1_R_285_MASK)
#define EFUSE_INTF1_R_285_RESET                                                0x0
#define EFUSE_INTF1_285_ADDRESS                                                (0x1474 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_285_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_285_RESET                                                  0x0

// 0x1478 (EFUSE_INTF1_286)
#define EFUSE_INTF1_R_286_LSB                                                  0
#define EFUSE_INTF1_R_286_MSB                                                  31
#define EFUSE_INTF1_R_286_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_286_GET(x)                                               (((x) & EFUSE_INTF1_R_286_MASK) >> EFUSE_INTF1_R_286_LSB)
#define EFUSE_INTF1_R_286_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_286_LSB) & EFUSE_INTF1_R_286_MASK)
#define EFUSE_INTF1_R_286_RESET                                                0x0
#define EFUSE_INTF1_286_ADDRESS                                                (0x1478 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_286_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_286_RESET                                                  0x0

// 0x147c (EFUSE_INTF1_287)
#define EFUSE_INTF1_R_287_LSB                                                  0
#define EFUSE_INTF1_R_287_MSB                                                  31
#define EFUSE_INTF1_R_287_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_287_GET(x)                                               (((x) & EFUSE_INTF1_R_287_MASK) >> EFUSE_INTF1_R_287_LSB)
#define EFUSE_INTF1_R_287_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_287_LSB) & EFUSE_INTF1_R_287_MASK)
#define EFUSE_INTF1_R_287_RESET                                                0x0
#define EFUSE_INTF1_287_ADDRESS                                                (0x147c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_287_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_287_RESET                                                  0x0

// 0x1480 (EFUSE_INTF1_288)
#define EFUSE_INTF1_R_288_LSB                                                  0
#define EFUSE_INTF1_R_288_MSB                                                  31
#define EFUSE_INTF1_R_288_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_288_GET(x)                                               (((x) & EFUSE_INTF1_R_288_MASK) >> EFUSE_INTF1_R_288_LSB)
#define EFUSE_INTF1_R_288_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_288_LSB) & EFUSE_INTF1_R_288_MASK)
#define EFUSE_INTF1_R_288_RESET                                                0x0
#define EFUSE_INTF1_288_ADDRESS                                                (0x1480 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_288_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_288_RESET                                                  0x0

// 0x1484 (EFUSE_INTF1_289)
#define EFUSE_INTF1_R_289_LSB                                                  0
#define EFUSE_INTF1_R_289_MSB                                                  31
#define EFUSE_INTF1_R_289_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_289_GET(x)                                               (((x) & EFUSE_INTF1_R_289_MASK) >> EFUSE_INTF1_R_289_LSB)
#define EFUSE_INTF1_R_289_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_289_LSB) & EFUSE_INTF1_R_289_MASK)
#define EFUSE_INTF1_R_289_RESET                                                0x0
#define EFUSE_INTF1_289_ADDRESS                                                (0x1484 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_289_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_289_RESET                                                  0x0

// 0x1488 (EFUSE_INTF1_290)
#define EFUSE_INTF1_R_290_LSB                                                  0
#define EFUSE_INTF1_R_290_MSB                                                  31
#define EFUSE_INTF1_R_290_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_290_GET(x)                                               (((x) & EFUSE_INTF1_R_290_MASK) >> EFUSE_INTF1_R_290_LSB)
#define EFUSE_INTF1_R_290_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_290_LSB) & EFUSE_INTF1_R_290_MASK)
#define EFUSE_INTF1_R_290_RESET                                                0x0
#define EFUSE_INTF1_290_ADDRESS                                                (0x1488 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_290_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_290_RESET                                                  0x0

// 0x148c (EFUSE_INTF1_291)
#define EFUSE_INTF1_R_291_LSB                                                  0
#define EFUSE_INTF1_R_291_MSB                                                  31
#define EFUSE_INTF1_R_291_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_291_GET(x)                                               (((x) & EFUSE_INTF1_R_291_MASK) >> EFUSE_INTF1_R_291_LSB)
#define EFUSE_INTF1_R_291_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_291_LSB) & EFUSE_INTF1_R_291_MASK)
#define EFUSE_INTF1_R_291_RESET                                                0x0
#define EFUSE_INTF1_291_ADDRESS                                                (0x148c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_291_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_291_RESET                                                  0x0

// 0x1490 (EFUSE_INTF1_292)
#define EFUSE_INTF1_R_292_LSB                                                  0
#define EFUSE_INTF1_R_292_MSB                                                  31
#define EFUSE_INTF1_R_292_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_292_GET(x)                                               (((x) & EFUSE_INTF1_R_292_MASK) >> EFUSE_INTF1_R_292_LSB)
#define EFUSE_INTF1_R_292_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_292_LSB) & EFUSE_INTF1_R_292_MASK)
#define EFUSE_INTF1_R_292_RESET                                                0x0
#define EFUSE_INTF1_292_ADDRESS                                                (0x1490 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_292_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_292_RESET                                                  0x0

// 0x1494 (EFUSE_INTF1_293)
#define EFUSE_INTF1_R_293_LSB                                                  0
#define EFUSE_INTF1_R_293_MSB                                                  31
#define EFUSE_INTF1_R_293_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_293_GET(x)                                               (((x) & EFUSE_INTF1_R_293_MASK) >> EFUSE_INTF1_R_293_LSB)
#define EFUSE_INTF1_R_293_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_293_LSB) & EFUSE_INTF1_R_293_MASK)
#define EFUSE_INTF1_R_293_RESET                                                0x0
#define EFUSE_INTF1_293_ADDRESS                                                (0x1494 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_293_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_293_RESET                                                  0x0

// 0x1498 (EFUSE_INTF1_294)
#define EFUSE_INTF1_R_294_LSB                                                  0
#define EFUSE_INTF1_R_294_MSB                                                  31
#define EFUSE_INTF1_R_294_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_294_GET(x)                                               (((x) & EFUSE_INTF1_R_294_MASK) >> EFUSE_INTF1_R_294_LSB)
#define EFUSE_INTF1_R_294_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_294_LSB) & EFUSE_INTF1_R_294_MASK)
#define EFUSE_INTF1_R_294_RESET                                                0x0
#define EFUSE_INTF1_294_ADDRESS                                                (0x1498 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_294_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_294_RESET                                                  0x0

// 0x149c (EFUSE_INTF1_295)
#define EFUSE_INTF1_R_295_LSB                                                  0
#define EFUSE_INTF1_R_295_MSB                                                  31
#define EFUSE_INTF1_R_295_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_295_GET(x)                                               (((x) & EFUSE_INTF1_R_295_MASK) >> EFUSE_INTF1_R_295_LSB)
#define EFUSE_INTF1_R_295_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_295_LSB) & EFUSE_INTF1_R_295_MASK)
#define EFUSE_INTF1_R_295_RESET                                                0x0
#define EFUSE_INTF1_295_ADDRESS                                                (0x149c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_295_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_295_RESET                                                  0x0

// 0x14a0 (EFUSE_INTF1_296)
#define EFUSE_INTF1_R_296_LSB                                                  0
#define EFUSE_INTF1_R_296_MSB                                                  31
#define EFUSE_INTF1_R_296_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_296_GET(x)                                               (((x) & EFUSE_INTF1_R_296_MASK) >> EFUSE_INTF1_R_296_LSB)
#define EFUSE_INTF1_R_296_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_296_LSB) & EFUSE_INTF1_R_296_MASK)
#define EFUSE_INTF1_R_296_RESET                                                0x0
#define EFUSE_INTF1_296_ADDRESS                                                (0x14a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_296_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_296_RESET                                                  0x0

// 0x14a4 (EFUSE_INTF1_297)
#define EFUSE_INTF1_R_297_LSB                                                  0
#define EFUSE_INTF1_R_297_MSB                                                  31
#define EFUSE_INTF1_R_297_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_297_GET(x)                                               (((x) & EFUSE_INTF1_R_297_MASK) >> EFUSE_INTF1_R_297_LSB)
#define EFUSE_INTF1_R_297_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_297_LSB) & EFUSE_INTF1_R_297_MASK)
#define EFUSE_INTF1_R_297_RESET                                                0x0
#define EFUSE_INTF1_297_ADDRESS                                                (0x14a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_297_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_297_RESET                                                  0x0

// 0x14a8 (EFUSE_INTF1_298)
#define EFUSE_INTF1_R_298_LSB                                                  0
#define EFUSE_INTF1_R_298_MSB                                                  31
#define EFUSE_INTF1_R_298_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_298_GET(x)                                               (((x) & EFUSE_INTF1_R_298_MASK) >> EFUSE_INTF1_R_298_LSB)
#define EFUSE_INTF1_R_298_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_298_LSB) & EFUSE_INTF1_R_298_MASK)
#define EFUSE_INTF1_R_298_RESET                                                0x0
#define EFUSE_INTF1_298_ADDRESS                                                (0x14a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_298_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_298_RESET                                                  0x0

// 0x14ac (EFUSE_INTF1_299)
#define EFUSE_INTF1_R_299_LSB                                                  0
#define EFUSE_INTF1_R_299_MSB                                                  31
#define EFUSE_INTF1_R_299_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_299_GET(x)                                               (((x) & EFUSE_INTF1_R_299_MASK) >> EFUSE_INTF1_R_299_LSB)
#define EFUSE_INTF1_R_299_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_299_LSB) & EFUSE_INTF1_R_299_MASK)
#define EFUSE_INTF1_R_299_RESET                                                0x0
#define EFUSE_INTF1_299_ADDRESS                                                (0x14ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_299_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_299_RESET                                                  0x0

// 0x14b0 (EFUSE_INTF1_300)
#define EFUSE_INTF1_R_300_LSB                                                  0
#define EFUSE_INTF1_R_300_MSB                                                  31
#define EFUSE_INTF1_R_300_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_300_GET(x)                                               (((x) & EFUSE_INTF1_R_300_MASK) >> EFUSE_INTF1_R_300_LSB)
#define EFUSE_INTF1_R_300_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_300_LSB) & EFUSE_INTF1_R_300_MASK)
#define EFUSE_INTF1_R_300_RESET                                                0x0
#define EFUSE_INTF1_300_ADDRESS                                                (0x14b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_300_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_300_RESET                                                  0x0

// 0x14b4 (EFUSE_INTF1_301)
#define EFUSE_INTF1_R_301_LSB                                                  0
#define EFUSE_INTF1_R_301_MSB                                                  31
#define EFUSE_INTF1_R_301_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_301_GET(x)                                               (((x) & EFUSE_INTF1_R_301_MASK) >> EFUSE_INTF1_R_301_LSB)
#define EFUSE_INTF1_R_301_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_301_LSB) & EFUSE_INTF1_R_301_MASK)
#define EFUSE_INTF1_R_301_RESET                                                0x0
#define EFUSE_INTF1_301_ADDRESS                                                (0x14b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_301_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_301_RESET                                                  0x0

// 0x14b8 (EFUSE_INTF1_302)
#define EFUSE_INTF1_R_302_LSB                                                  0
#define EFUSE_INTF1_R_302_MSB                                                  31
#define EFUSE_INTF1_R_302_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_302_GET(x)                                               (((x) & EFUSE_INTF1_R_302_MASK) >> EFUSE_INTF1_R_302_LSB)
#define EFUSE_INTF1_R_302_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_302_LSB) & EFUSE_INTF1_R_302_MASK)
#define EFUSE_INTF1_R_302_RESET                                                0x0
#define EFUSE_INTF1_302_ADDRESS                                                (0x14b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_302_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_302_RESET                                                  0x0

// 0x14bc (EFUSE_INTF1_303)
#define EFUSE_INTF1_R_303_LSB                                                  0
#define EFUSE_INTF1_R_303_MSB                                                  31
#define EFUSE_INTF1_R_303_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_303_GET(x)                                               (((x) & EFUSE_INTF1_R_303_MASK) >> EFUSE_INTF1_R_303_LSB)
#define EFUSE_INTF1_R_303_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_303_LSB) & EFUSE_INTF1_R_303_MASK)
#define EFUSE_INTF1_R_303_RESET                                                0x0
#define EFUSE_INTF1_303_ADDRESS                                                (0x14bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_303_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_303_RESET                                                  0x0

// 0x14c0 (EFUSE_INTF1_304)
#define EFUSE_INTF1_R_304_LSB                                                  0
#define EFUSE_INTF1_R_304_MSB                                                  31
#define EFUSE_INTF1_R_304_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_304_GET(x)                                               (((x) & EFUSE_INTF1_R_304_MASK) >> EFUSE_INTF1_R_304_LSB)
#define EFUSE_INTF1_R_304_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_304_LSB) & EFUSE_INTF1_R_304_MASK)
#define EFUSE_INTF1_R_304_RESET                                                0x0
#define EFUSE_INTF1_304_ADDRESS                                                (0x14c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_304_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_304_RESET                                                  0x0

// 0x14c4 (EFUSE_INTF1_305)
#define EFUSE_INTF1_R_305_LSB                                                  0
#define EFUSE_INTF1_R_305_MSB                                                  31
#define EFUSE_INTF1_R_305_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_305_GET(x)                                               (((x) & EFUSE_INTF1_R_305_MASK) >> EFUSE_INTF1_R_305_LSB)
#define EFUSE_INTF1_R_305_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_305_LSB) & EFUSE_INTF1_R_305_MASK)
#define EFUSE_INTF1_R_305_RESET                                                0x0
#define EFUSE_INTF1_305_ADDRESS                                                (0x14c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_305_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_305_RESET                                                  0x0

// 0x14c8 (EFUSE_INTF1_306)
#define EFUSE_INTF1_R_306_LSB                                                  0
#define EFUSE_INTF1_R_306_MSB                                                  31
#define EFUSE_INTF1_R_306_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_306_GET(x)                                               (((x) & EFUSE_INTF1_R_306_MASK) >> EFUSE_INTF1_R_306_LSB)
#define EFUSE_INTF1_R_306_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_306_LSB) & EFUSE_INTF1_R_306_MASK)
#define EFUSE_INTF1_R_306_RESET                                                0x0
#define EFUSE_INTF1_306_ADDRESS                                                (0x14c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_306_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_306_RESET                                                  0x0

// 0x14cc (EFUSE_INTF1_307)
#define EFUSE_INTF1_R_307_LSB                                                  0
#define EFUSE_INTF1_R_307_MSB                                                  31
#define EFUSE_INTF1_R_307_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_307_GET(x)                                               (((x) & EFUSE_INTF1_R_307_MASK) >> EFUSE_INTF1_R_307_LSB)
#define EFUSE_INTF1_R_307_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_307_LSB) & EFUSE_INTF1_R_307_MASK)
#define EFUSE_INTF1_R_307_RESET                                                0x0
#define EFUSE_INTF1_307_ADDRESS                                                (0x14cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_307_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_307_RESET                                                  0x0

// 0x14d0 (EFUSE_INTF1_308)
#define EFUSE_INTF1_R_308_LSB                                                  0
#define EFUSE_INTF1_R_308_MSB                                                  31
#define EFUSE_INTF1_R_308_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_308_GET(x)                                               (((x) & EFUSE_INTF1_R_308_MASK) >> EFUSE_INTF1_R_308_LSB)
#define EFUSE_INTF1_R_308_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_308_LSB) & EFUSE_INTF1_R_308_MASK)
#define EFUSE_INTF1_R_308_RESET                                                0x0
#define EFUSE_INTF1_308_ADDRESS                                                (0x14d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_308_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_308_RESET                                                  0x0

// 0x14d4 (EFUSE_INTF1_309)
#define EFUSE_INTF1_R_309_LSB                                                  0
#define EFUSE_INTF1_R_309_MSB                                                  31
#define EFUSE_INTF1_R_309_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_309_GET(x)                                               (((x) & EFUSE_INTF1_R_309_MASK) >> EFUSE_INTF1_R_309_LSB)
#define EFUSE_INTF1_R_309_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_309_LSB) & EFUSE_INTF1_R_309_MASK)
#define EFUSE_INTF1_R_309_RESET                                                0x0
#define EFUSE_INTF1_309_ADDRESS                                                (0x14d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_309_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_309_RESET                                                  0x0

// 0x14d8 (EFUSE_INTF1_310)
#define EFUSE_INTF1_R_310_LSB                                                  0
#define EFUSE_INTF1_R_310_MSB                                                  31
#define EFUSE_INTF1_R_310_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_310_GET(x)                                               (((x) & EFUSE_INTF1_R_310_MASK) >> EFUSE_INTF1_R_310_LSB)
#define EFUSE_INTF1_R_310_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_310_LSB) & EFUSE_INTF1_R_310_MASK)
#define EFUSE_INTF1_R_310_RESET                                                0x0
#define EFUSE_INTF1_310_ADDRESS                                                (0x14d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_310_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_310_RESET                                                  0x0

// 0x14dc (EFUSE_INTF1_311)
#define EFUSE_INTF1_R_311_LSB                                                  0
#define EFUSE_INTF1_R_311_MSB                                                  31
#define EFUSE_INTF1_R_311_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_311_GET(x)                                               (((x) & EFUSE_INTF1_R_311_MASK) >> EFUSE_INTF1_R_311_LSB)
#define EFUSE_INTF1_R_311_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_311_LSB) & EFUSE_INTF1_R_311_MASK)
#define EFUSE_INTF1_R_311_RESET                                                0x0
#define EFUSE_INTF1_311_ADDRESS                                                (0x14dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_311_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_311_RESET                                                  0x0

// 0x14e0 (EFUSE_INTF1_312)
#define EFUSE_INTF1_R_312_LSB                                                  0
#define EFUSE_INTF1_R_312_MSB                                                  31
#define EFUSE_INTF1_R_312_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_312_GET(x)                                               (((x) & EFUSE_INTF1_R_312_MASK) >> EFUSE_INTF1_R_312_LSB)
#define EFUSE_INTF1_R_312_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_312_LSB) & EFUSE_INTF1_R_312_MASK)
#define EFUSE_INTF1_R_312_RESET                                                0x0
#define EFUSE_INTF1_312_ADDRESS                                                (0x14e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_312_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_312_RESET                                                  0x0

// 0x14e4 (EFUSE_INTF1_313)
#define EFUSE_INTF1_R_313_LSB                                                  0
#define EFUSE_INTF1_R_313_MSB                                                  31
#define EFUSE_INTF1_R_313_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_313_GET(x)                                               (((x) & EFUSE_INTF1_R_313_MASK) >> EFUSE_INTF1_R_313_LSB)
#define EFUSE_INTF1_R_313_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_313_LSB) & EFUSE_INTF1_R_313_MASK)
#define EFUSE_INTF1_R_313_RESET                                                0x0
#define EFUSE_INTF1_313_ADDRESS                                                (0x14e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_313_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_313_RESET                                                  0x0

// 0x14e8 (EFUSE_INTF1_314)
#define EFUSE_INTF1_R_314_LSB                                                  0
#define EFUSE_INTF1_R_314_MSB                                                  31
#define EFUSE_INTF1_R_314_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_314_GET(x)                                               (((x) & EFUSE_INTF1_R_314_MASK) >> EFUSE_INTF1_R_314_LSB)
#define EFUSE_INTF1_R_314_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_314_LSB) & EFUSE_INTF1_R_314_MASK)
#define EFUSE_INTF1_R_314_RESET                                                0x0
#define EFUSE_INTF1_314_ADDRESS                                                (0x14e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_314_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_314_RESET                                                  0x0

// 0x14ec (EFUSE_INTF1_315)
#define EFUSE_INTF1_R_315_LSB                                                  0
#define EFUSE_INTF1_R_315_MSB                                                  31
#define EFUSE_INTF1_R_315_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_315_GET(x)                                               (((x) & EFUSE_INTF1_R_315_MASK) >> EFUSE_INTF1_R_315_LSB)
#define EFUSE_INTF1_R_315_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_315_LSB) & EFUSE_INTF1_R_315_MASK)
#define EFUSE_INTF1_R_315_RESET                                                0x0
#define EFUSE_INTF1_315_ADDRESS                                                (0x14ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_315_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_315_RESET                                                  0x0

// 0x14f0 (EFUSE_INTF1_316)
#define EFUSE_INTF1_R_316_LSB                                                  0
#define EFUSE_INTF1_R_316_MSB                                                  31
#define EFUSE_INTF1_R_316_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_316_GET(x)                                               (((x) & EFUSE_INTF1_R_316_MASK) >> EFUSE_INTF1_R_316_LSB)
#define EFUSE_INTF1_R_316_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_316_LSB) & EFUSE_INTF1_R_316_MASK)
#define EFUSE_INTF1_R_316_RESET                                                0x0
#define EFUSE_INTF1_316_ADDRESS                                                (0x14f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_316_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_316_RESET                                                  0x0

// 0x14f4 (EFUSE_INTF1_317)
#define EFUSE_INTF1_R_317_LSB                                                  0
#define EFUSE_INTF1_R_317_MSB                                                  31
#define EFUSE_INTF1_R_317_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_317_GET(x)                                               (((x) & EFUSE_INTF1_R_317_MASK) >> EFUSE_INTF1_R_317_LSB)
#define EFUSE_INTF1_R_317_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_317_LSB) & EFUSE_INTF1_R_317_MASK)
#define EFUSE_INTF1_R_317_RESET                                                0x0
#define EFUSE_INTF1_317_ADDRESS                                                (0x14f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_317_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_317_RESET                                                  0x0

// 0x14f8 (EFUSE_INTF1_318)
#define EFUSE_INTF1_R_318_LSB                                                  0
#define EFUSE_INTF1_R_318_MSB                                                  31
#define EFUSE_INTF1_R_318_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_318_GET(x)                                               (((x) & EFUSE_INTF1_R_318_MASK) >> EFUSE_INTF1_R_318_LSB)
#define EFUSE_INTF1_R_318_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_318_LSB) & EFUSE_INTF1_R_318_MASK)
#define EFUSE_INTF1_R_318_RESET                                                0x0
#define EFUSE_INTF1_318_ADDRESS                                                (0x14f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_318_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_318_RESET                                                  0x0

// 0x14fc (EFUSE_INTF1_319)
#define EFUSE_INTF1_R_319_LSB                                                  0
#define EFUSE_INTF1_R_319_MSB                                                  31
#define EFUSE_INTF1_R_319_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_319_GET(x)                                               (((x) & EFUSE_INTF1_R_319_MASK) >> EFUSE_INTF1_R_319_LSB)
#define EFUSE_INTF1_R_319_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_319_LSB) & EFUSE_INTF1_R_319_MASK)
#define EFUSE_INTF1_R_319_RESET                                                0x0
#define EFUSE_INTF1_319_ADDRESS                                                (0x14fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_319_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_319_RESET                                                  0x0

// 0x1500 (EFUSE_INTF1_320)
#define EFUSE_INTF1_R_320_LSB                                                  0
#define EFUSE_INTF1_R_320_MSB                                                  31
#define EFUSE_INTF1_R_320_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_320_GET(x)                                               (((x) & EFUSE_INTF1_R_320_MASK) >> EFUSE_INTF1_R_320_LSB)
#define EFUSE_INTF1_R_320_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_320_LSB) & EFUSE_INTF1_R_320_MASK)
#define EFUSE_INTF1_R_320_RESET                                                0x0
#define EFUSE_INTF1_320_ADDRESS                                                (0x1500 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_320_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_320_RESET                                                  0x0

// 0x1504 (EFUSE_INTF1_321)
#define EFUSE_INTF1_R_321_LSB                                                  0
#define EFUSE_INTF1_R_321_MSB                                                  31
#define EFUSE_INTF1_R_321_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_321_GET(x)                                               (((x) & EFUSE_INTF1_R_321_MASK) >> EFUSE_INTF1_R_321_LSB)
#define EFUSE_INTF1_R_321_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_321_LSB) & EFUSE_INTF1_R_321_MASK)
#define EFUSE_INTF1_R_321_RESET                                                0x0
#define EFUSE_INTF1_321_ADDRESS                                                (0x1504 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_321_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_321_RESET                                                  0x0

// 0x1508 (EFUSE_INTF1_322)
#define EFUSE_INTF1_R_322_LSB                                                  0
#define EFUSE_INTF1_R_322_MSB                                                  31
#define EFUSE_INTF1_R_322_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_322_GET(x)                                               (((x) & EFUSE_INTF1_R_322_MASK) >> EFUSE_INTF1_R_322_LSB)
#define EFUSE_INTF1_R_322_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_322_LSB) & EFUSE_INTF1_R_322_MASK)
#define EFUSE_INTF1_R_322_RESET                                                0x0
#define EFUSE_INTF1_322_ADDRESS                                                (0x1508 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_322_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_322_RESET                                                  0x0

// 0x150c (EFUSE_INTF1_323)
#define EFUSE_INTF1_R_323_LSB                                                  0
#define EFUSE_INTF1_R_323_MSB                                                  31
#define EFUSE_INTF1_R_323_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_323_GET(x)                                               (((x) & EFUSE_INTF1_R_323_MASK) >> EFUSE_INTF1_R_323_LSB)
#define EFUSE_INTF1_R_323_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_323_LSB) & EFUSE_INTF1_R_323_MASK)
#define EFUSE_INTF1_R_323_RESET                                                0x0
#define EFUSE_INTF1_323_ADDRESS                                                (0x150c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_323_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_323_RESET                                                  0x0

// 0x1510 (EFUSE_INTF1_324)
#define EFUSE_INTF1_R_324_LSB                                                  0
#define EFUSE_INTF1_R_324_MSB                                                  31
#define EFUSE_INTF1_R_324_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_324_GET(x)                                               (((x) & EFUSE_INTF1_R_324_MASK) >> EFUSE_INTF1_R_324_LSB)
#define EFUSE_INTF1_R_324_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_324_LSB) & EFUSE_INTF1_R_324_MASK)
#define EFUSE_INTF1_R_324_RESET                                                0x0
#define EFUSE_INTF1_324_ADDRESS                                                (0x1510 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_324_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_324_RESET                                                  0x0

// 0x1514 (EFUSE_INTF1_325)
#define EFUSE_INTF1_R_325_LSB                                                  0
#define EFUSE_INTF1_R_325_MSB                                                  31
#define EFUSE_INTF1_R_325_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_325_GET(x)                                               (((x) & EFUSE_INTF1_R_325_MASK) >> EFUSE_INTF1_R_325_LSB)
#define EFUSE_INTF1_R_325_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_325_LSB) & EFUSE_INTF1_R_325_MASK)
#define EFUSE_INTF1_R_325_RESET                                                0x0
#define EFUSE_INTF1_325_ADDRESS                                                (0x1514 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_325_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_325_RESET                                                  0x0

// 0x1518 (EFUSE_INTF1_326)
#define EFUSE_INTF1_R_326_LSB                                                  0
#define EFUSE_INTF1_R_326_MSB                                                  31
#define EFUSE_INTF1_R_326_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_326_GET(x)                                               (((x) & EFUSE_INTF1_R_326_MASK) >> EFUSE_INTF1_R_326_LSB)
#define EFUSE_INTF1_R_326_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_326_LSB) & EFUSE_INTF1_R_326_MASK)
#define EFUSE_INTF1_R_326_RESET                                                0x0
#define EFUSE_INTF1_326_ADDRESS                                                (0x1518 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_326_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_326_RESET                                                  0x0

// 0x151c (EFUSE_INTF1_327)
#define EFUSE_INTF1_R_327_LSB                                                  0
#define EFUSE_INTF1_R_327_MSB                                                  31
#define EFUSE_INTF1_R_327_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_327_GET(x)                                               (((x) & EFUSE_INTF1_R_327_MASK) >> EFUSE_INTF1_R_327_LSB)
#define EFUSE_INTF1_R_327_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_327_LSB) & EFUSE_INTF1_R_327_MASK)
#define EFUSE_INTF1_R_327_RESET                                                0x0
#define EFUSE_INTF1_327_ADDRESS                                                (0x151c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_327_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_327_RESET                                                  0x0

// 0x1520 (EFUSE_INTF1_328)
#define EFUSE_INTF1_R_328_LSB                                                  0
#define EFUSE_INTF1_R_328_MSB                                                  31
#define EFUSE_INTF1_R_328_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_328_GET(x)                                               (((x) & EFUSE_INTF1_R_328_MASK) >> EFUSE_INTF1_R_328_LSB)
#define EFUSE_INTF1_R_328_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_328_LSB) & EFUSE_INTF1_R_328_MASK)
#define EFUSE_INTF1_R_328_RESET                                                0x0
#define EFUSE_INTF1_328_ADDRESS                                                (0x1520 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_328_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_328_RESET                                                  0x0

// 0x1524 (EFUSE_INTF1_329)
#define EFUSE_INTF1_R_329_LSB                                                  0
#define EFUSE_INTF1_R_329_MSB                                                  31
#define EFUSE_INTF1_R_329_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_329_GET(x)                                               (((x) & EFUSE_INTF1_R_329_MASK) >> EFUSE_INTF1_R_329_LSB)
#define EFUSE_INTF1_R_329_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_329_LSB) & EFUSE_INTF1_R_329_MASK)
#define EFUSE_INTF1_R_329_RESET                                                0x0
#define EFUSE_INTF1_329_ADDRESS                                                (0x1524 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_329_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_329_RESET                                                  0x0

// 0x1528 (EFUSE_INTF1_330)
#define EFUSE_INTF1_R_330_LSB                                                  0
#define EFUSE_INTF1_R_330_MSB                                                  31
#define EFUSE_INTF1_R_330_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_330_GET(x)                                               (((x) & EFUSE_INTF1_R_330_MASK) >> EFUSE_INTF1_R_330_LSB)
#define EFUSE_INTF1_R_330_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_330_LSB) & EFUSE_INTF1_R_330_MASK)
#define EFUSE_INTF1_R_330_RESET                                                0x0
#define EFUSE_INTF1_330_ADDRESS                                                (0x1528 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_330_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_330_RESET                                                  0x0

// 0x152c (EFUSE_INTF1_331)
#define EFUSE_INTF1_R_331_LSB                                                  0
#define EFUSE_INTF1_R_331_MSB                                                  31
#define EFUSE_INTF1_R_331_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_331_GET(x)                                               (((x) & EFUSE_INTF1_R_331_MASK) >> EFUSE_INTF1_R_331_LSB)
#define EFUSE_INTF1_R_331_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_331_LSB) & EFUSE_INTF1_R_331_MASK)
#define EFUSE_INTF1_R_331_RESET                                                0x0
#define EFUSE_INTF1_331_ADDRESS                                                (0x152c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_331_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_331_RESET                                                  0x0

// 0x1530 (EFUSE_INTF1_332)
#define EFUSE_INTF1_R_332_LSB                                                  0
#define EFUSE_INTF1_R_332_MSB                                                  31
#define EFUSE_INTF1_R_332_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_332_GET(x)                                               (((x) & EFUSE_INTF1_R_332_MASK) >> EFUSE_INTF1_R_332_LSB)
#define EFUSE_INTF1_R_332_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_332_LSB) & EFUSE_INTF1_R_332_MASK)
#define EFUSE_INTF1_R_332_RESET                                                0x0
#define EFUSE_INTF1_332_ADDRESS                                                (0x1530 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_332_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_332_RESET                                                  0x0

// 0x1534 (EFUSE_INTF1_333)
#define EFUSE_INTF1_R_333_LSB                                                  0
#define EFUSE_INTF1_R_333_MSB                                                  31
#define EFUSE_INTF1_R_333_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_333_GET(x)                                               (((x) & EFUSE_INTF1_R_333_MASK) >> EFUSE_INTF1_R_333_LSB)
#define EFUSE_INTF1_R_333_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_333_LSB) & EFUSE_INTF1_R_333_MASK)
#define EFUSE_INTF1_R_333_RESET                                                0x0
#define EFUSE_INTF1_333_ADDRESS                                                (0x1534 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_333_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_333_RESET                                                  0x0

// 0x1538 (EFUSE_INTF1_334)
#define EFUSE_INTF1_R_334_LSB                                                  0
#define EFUSE_INTF1_R_334_MSB                                                  31
#define EFUSE_INTF1_R_334_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_334_GET(x)                                               (((x) & EFUSE_INTF1_R_334_MASK) >> EFUSE_INTF1_R_334_LSB)
#define EFUSE_INTF1_R_334_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_334_LSB) & EFUSE_INTF1_R_334_MASK)
#define EFUSE_INTF1_R_334_RESET                                                0x0
#define EFUSE_INTF1_334_ADDRESS                                                (0x1538 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_334_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_334_RESET                                                  0x0

// 0x153c (EFUSE_INTF1_335)
#define EFUSE_INTF1_R_335_LSB                                                  0
#define EFUSE_INTF1_R_335_MSB                                                  31
#define EFUSE_INTF1_R_335_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_335_GET(x)                                               (((x) & EFUSE_INTF1_R_335_MASK) >> EFUSE_INTF1_R_335_LSB)
#define EFUSE_INTF1_R_335_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_335_LSB) & EFUSE_INTF1_R_335_MASK)
#define EFUSE_INTF1_R_335_RESET                                                0x0
#define EFUSE_INTF1_335_ADDRESS                                                (0x153c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_335_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_335_RESET                                                  0x0

// 0x1540 (EFUSE_INTF1_336)
#define EFUSE_INTF1_R_336_LSB                                                  0
#define EFUSE_INTF1_R_336_MSB                                                  31
#define EFUSE_INTF1_R_336_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_336_GET(x)                                               (((x) & EFUSE_INTF1_R_336_MASK) >> EFUSE_INTF1_R_336_LSB)
#define EFUSE_INTF1_R_336_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_336_LSB) & EFUSE_INTF1_R_336_MASK)
#define EFUSE_INTF1_R_336_RESET                                                0x0
#define EFUSE_INTF1_336_ADDRESS                                                (0x1540 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_336_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_336_RESET                                                  0x0

// 0x1544 (EFUSE_INTF1_337)
#define EFUSE_INTF1_R_337_LSB                                                  0
#define EFUSE_INTF1_R_337_MSB                                                  31
#define EFUSE_INTF1_R_337_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_337_GET(x)                                               (((x) & EFUSE_INTF1_R_337_MASK) >> EFUSE_INTF1_R_337_LSB)
#define EFUSE_INTF1_R_337_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_337_LSB) & EFUSE_INTF1_R_337_MASK)
#define EFUSE_INTF1_R_337_RESET                                                0x0
#define EFUSE_INTF1_337_ADDRESS                                                (0x1544 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_337_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_337_RESET                                                  0x0

// 0x1548 (EFUSE_INTF1_338)
#define EFUSE_INTF1_R_338_LSB                                                  0
#define EFUSE_INTF1_R_338_MSB                                                  31
#define EFUSE_INTF1_R_338_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_338_GET(x)                                               (((x) & EFUSE_INTF1_R_338_MASK) >> EFUSE_INTF1_R_338_LSB)
#define EFUSE_INTF1_R_338_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_338_LSB) & EFUSE_INTF1_R_338_MASK)
#define EFUSE_INTF1_R_338_RESET                                                0x0
#define EFUSE_INTF1_338_ADDRESS                                                (0x1548 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_338_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_338_RESET                                                  0x0

// 0x154c (EFUSE_INTF1_339)
#define EFUSE_INTF1_R_339_LSB                                                  0
#define EFUSE_INTF1_R_339_MSB                                                  31
#define EFUSE_INTF1_R_339_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_339_GET(x)                                               (((x) & EFUSE_INTF1_R_339_MASK) >> EFUSE_INTF1_R_339_LSB)
#define EFUSE_INTF1_R_339_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_339_LSB) & EFUSE_INTF1_R_339_MASK)
#define EFUSE_INTF1_R_339_RESET                                                0x0
#define EFUSE_INTF1_339_ADDRESS                                                (0x154c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_339_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_339_RESET                                                  0x0

// 0x1550 (EFUSE_INTF1_340)
#define EFUSE_INTF1_R_340_LSB                                                  0
#define EFUSE_INTF1_R_340_MSB                                                  31
#define EFUSE_INTF1_R_340_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_340_GET(x)                                               (((x) & EFUSE_INTF1_R_340_MASK) >> EFUSE_INTF1_R_340_LSB)
#define EFUSE_INTF1_R_340_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_340_LSB) & EFUSE_INTF1_R_340_MASK)
#define EFUSE_INTF1_R_340_RESET                                                0x0
#define EFUSE_INTF1_340_ADDRESS                                                (0x1550 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_340_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_340_RESET                                                  0x0

// 0x1554 (EFUSE_INTF1_341)
#define EFUSE_INTF1_R_341_LSB                                                  0
#define EFUSE_INTF1_R_341_MSB                                                  31
#define EFUSE_INTF1_R_341_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_341_GET(x)                                               (((x) & EFUSE_INTF1_R_341_MASK) >> EFUSE_INTF1_R_341_LSB)
#define EFUSE_INTF1_R_341_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_341_LSB) & EFUSE_INTF1_R_341_MASK)
#define EFUSE_INTF1_R_341_RESET                                                0x0
#define EFUSE_INTF1_341_ADDRESS                                                (0x1554 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_341_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_341_RESET                                                  0x0

// 0x1558 (EFUSE_INTF1_342)
#define EFUSE_INTF1_R_342_LSB                                                  0
#define EFUSE_INTF1_R_342_MSB                                                  31
#define EFUSE_INTF1_R_342_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_342_GET(x)                                               (((x) & EFUSE_INTF1_R_342_MASK) >> EFUSE_INTF1_R_342_LSB)
#define EFUSE_INTF1_R_342_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_342_LSB) & EFUSE_INTF1_R_342_MASK)
#define EFUSE_INTF1_R_342_RESET                                                0x0
#define EFUSE_INTF1_342_ADDRESS                                                (0x1558 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_342_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_342_RESET                                                  0x0

// 0x155c (EFUSE_INTF1_343)
#define EFUSE_INTF1_R_343_LSB                                                  0
#define EFUSE_INTF1_R_343_MSB                                                  31
#define EFUSE_INTF1_R_343_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_343_GET(x)                                               (((x) & EFUSE_INTF1_R_343_MASK) >> EFUSE_INTF1_R_343_LSB)
#define EFUSE_INTF1_R_343_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_343_LSB) & EFUSE_INTF1_R_343_MASK)
#define EFUSE_INTF1_R_343_RESET                                                0x0
#define EFUSE_INTF1_343_ADDRESS                                                (0x155c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_343_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_343_RESET                                                  0x0

// 0x1560 (EFUSE_INTF1_344)
#define EFUSE_INTF1_R_344_LSB                                                  0
#define EFUSE_INTF1_R_344_MSB                                                  31
#define EFUSE_INTF1_R_344_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_344_GET(x)                                               (((x) & EFUSE_INTF1_R_344_MASK) >> EFUSE_INTF1_R_344_LSB)
#define EFUSE_INTF1_R_344_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_344_LSB) & EFUSE_INTF1_R_344_MASK)
#define EFUSE_INTF1_R_344_RESET                                                0x0
#define EFUSE_INTF1_344_ADDRESS                                                (0x1560 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_344_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_344_RESET                                                  0x0

// 0x1564 (EFUSE_INTF1_345)
#define EFUSE_INTF1_R_345_LSB                                                  0
#define EFUSE_INTF1_R_345_MSB                                                  31
#define EFUSE_INTF1_R_345_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_345_GET(x)                                               (((x) & EFUSE_INTF1_R_345_MASK) >> EFUSE_INTF1_R_345_LSB)
#define EFUSE_INTF1_R_345_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_345_LSB) & EFUSE_INTF1_R_345_MASK)
#define EFUSE_INTF1_R_345_RESET                                                0x0
#define EFUSE_INTF1_345_ADDRESS                                                (0x1564 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_345_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_345_RESET                                                  0x0

// 0x1568 (EFUSE_INTF1_346)
#define EFUSE_INTF1_R_346_LSB                                                  0
#define EFUSE_INTF1_R_346_MSB                                                  31
#define EFUSE_INTF1_R_346_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_346_GET(x)                                               (((x) & EFUSE_INTF1_R_346_MASK) >> EFUSE_INTF1_R_346_LSB)
#define EFUSE_INTF1_R_346_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_346_LSB) & EFUSE_INTF1_R_346_MASK)
#define EFUSE_INTF1_R_346_RESET                                                0x0
#define EFUSE_INTF1_346_ADDRESS                                                (0x1568 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_346_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_346_RESET                                                  0x0

// 0x156c (EFUSE_INTF1_347)
#define EFUSE_INTF1_R_347_LSB                                                  0
#define EFUSE_INTF1_R_347_MSB                                                  31
#define EFUSE_INTF1_R_347_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_347_GET(x)                                               (((x) & EFUSE_INTF1_R_347_MASK) >> EFUSE_INTF1_R_347_LSB)
#define EFUSE_INTF1_R_347_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_347_LSB) & EFUSE_INTF1_R_347_MASK)
#define EFUSE_INTF1_R_347_RESET                                                0x0
#define EFUSE_INTF1_347_ADDRESS                                                (0x156c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_347_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_347_RESET                                                  0x0

// 0x1570 (EFUSE_INTF1_348)
#define EFUSE_INTF1_R_348_LSB                                                  0
#define EFUSE_INTF1_R_348_MSB                                                  31
#define EFUSE_INTF1_R_348_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_348_GET(x)                                               (((x) & EFUSE_INTF1_R_348_MASK) >> EFUSE_INTF1_R_348_LSB)
#define EFUSE_INTF1_R_348_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_348_LSB) & EFUSE_INTF1_R_348_MASK)
#define EFUSE_INTF1_R_348_RESET                                                0x0
#define EFUSE_INTF1_348_ADDRESS                                                (0x1570 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_348_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_348_RESET                                                  0x0

// 0x1574 (EFUSE_INTF1_349)
#define EFUSE_INTF1_R_349_LSB                                                  0
#define EFUSE_INTF1_R_349_MSB                                                  31
#define EFUSE_INTF1_R_349_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_349_GET(x)                                               (((x) & EFUSE_INTF1_R_349_MASK) >> EFUSE_INTF1_R_349_LSB)
#define EFUSE_INTF1_R_349_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_349_LSB) & EFUSE_INTF1_R_349_MASK)
#define EFUSE_INTF1_R_349_RESET                                                0x0
#define EFUSE_INTF1_349_ADDRESS                                                (0x1574 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_349_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_349_RESET                                                  0x0

// 0x1578 (EFUSE_INTF1_350)
#define EFUSE_INTF1_R_350_LSB                                                  0
#define EFUSE_INTF1_R_350_MSB                                                  31
#define EFUSE_INTF1_R_350_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_350_GET(x)                                               (((x) & EFUSE_INTF1_R_350_MASK) >> EFUSE_INTF1_R_350_LSB)
#define EFUSE_INTF1_R_350_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_350_LSB) & EFUSE_INTF1_R_350_MASK)
#define EFUSE_INTF1_R_350_RESET                                                0x0
#define EFUSE_INTF1_350_ADDRESS                                                (0x1578 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_350_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_350_RESET                                                  0x0

// 0x157c (EFUSE_INTF1_351)
#define EFUSE_INTF1_R_351_LSB                                                  0
#define EFUSE_INTF1_R_351_MSB                                                  31
#define EFUSE_INTF1_R_351_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_351_GET(x)                                               (((x) & EFUSE_INTF1_R_351_MASK) >> EFUSE_INTF1_R_351_LSB)
#define EFUSE_INTF1_R_351_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_351_LSB) & EFUSE_INTF1_R_351_MASK)
#define EFUSE_INTF1_R_351_RESET                                                0x0
#define EFUSE_INTF1_351_ADDRESS                                                (0x157c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_351_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_351_RESET                                                  0x0

// 0x1580 (EFUSE_INTF1_352)
#define EFUSE_INTF1_R_352_LSB                                                  0
#define EFUSE_INTF1_R_352_MSB                                                  31
#define EFUSE_INTF1_R_352_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_352_GET(x)                                               (((x) & EFUSE_INTF1_R_352_MASK) >> EFUSE_INTF1_R_352_LSB)
#define EFUSE_INTF1_R_352_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_352_LSB) & EFUSE_INTF1_R_352_MASK)
#define EFUSE_INTF1_R_352_RESET                                                0x0
#define EFUSE_INTF1_352_ADDRESS                                                (0x1580 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_352_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_352_RESET                                                  0x0

// 0x1584 (EFUSE_INTF1_353)
#define EFUSE_INTF1_R_353_LSB                                                  0
#define EFUSE_INTF1_R_353_MSB                                                  31
#define EFUSE_INTF1_R_353_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_353_GET(x)                                               (((x) & EFUSE_INTF1_R_353_MASK) >> EFUSE_INTF1_R_353_LSB)
#define EFUSE_INTF1_R_353_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_353_LSB) & EFUSE_INTF1_R_353_MASK)
#define EFUSE_INTF1_R_353_RESET                                                0x0
#define EFUSE_INTF1_353_ADDRESS                                                (0x1584 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_353_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_353_RESET                                                  0x0

// 0x1588 (EFUSE_INTF1_354)
#define EFUSE_INTF1_R_354_LSB                                                  0
#define EFUSE_INTF1_R_354_MSB                                                  31
#define EFUSE_INTF1_R_354_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_354_GET(x)                                               (((x) & EFUSE_INTF1_R_354_MASK) >> EFUSE_INTF1_R_354_LSB)
#define EFUSE_INTF1_R_354_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_354_LSB) & EFUSE_INTF1_R_354_MASK)
#define EFUSE_INTF1_R_354_RESET                                                0x0
#define EFUSE_INTF1_354_ADDRESS                                                (0x1588 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_354_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_354_RESET                                                  0x0

// 0x158c (EFUSE_INTF1_355)
#define EFUSE_INTF1_R_355_LSB                                                  0
#define EFUSE_INTF1_R_355_MSB                                                  31
#define EFUSE_INTF1_R_355_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_355_GET(x)                                               (((x) & EFUSE_INTF1_R_355_MASK) >> EFUSE_INTF1_R_355_LSB)
#define EFUSE_INTF1_R_355_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_355_LSB) & EFUSE_INTF1_R_355_MASK)
#define EFUSE_INTF1_R_355_RESET                                                0x0
#define EFUSE_INTF1_355_ADDRESS                                                (0x158c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_355_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_355_RESET                                                  0x0

// 0x1590 (EFUSE_INTF1_356)
#define EFUSE_INTF1_R_356_LSB                                                  0
#define EFUSE_INTF1_R_356_MSB                                                  31
#define EFUSE_INTF1_R_356_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_356_GET(x)                                               (((x) & EFUSE_INTF1_R_356_MASK) >> EFUSE_INTF1_R_356_LSB)
#define EFUSE_INTF1_R_356_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_356_LSB) & EFUSE_INTF1_R_356_MASK)
#define EFUSE_INTF1_R_356_RESET                                                0x0
#define EFUSE_INTF1_356_ADDRESS                                                (0x1590 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_356_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_356_RESET                                                  0x0

// 0x1594 (EFUSE_INTF1_357)
#define EFUSE_INTF1_R_357_LSB                                                  0
#define EFUSE_INTF1_R_357_MSB                                                  31
#define EFUSE_INTF1_R_357_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_357_GET(x)                                               (((x) & EFUSE_INTF1_R_357_MASK) >> EFUSE_INTF1_R_357_LSB)
#define EFUSE_INTF1_R_357_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_357_LSB) & EFUSE_INTF1_R_357_MASK)
#define EFUSE_INTF1_R_357_RESET                                                0x0
#define EFUSE_INTF1_357_ADDRESS                                                (0x1594 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_357_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_357_RESET                                                  0x0

// 0x1598 (EFUSE_INTF1_358)
#define EFUSE_INTF1_R_358_LSB                                                  0
#define EFUSE_INTF1_R_358_MSB                                                  31
#define EFUSE_INTF1_R_358_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_358_GET(x)                                               (((x) & EFUSE_INTF1_R_358_MASK) >> EFUSE_INTF1_R_358_LSB)
#define EFUSE_INTF1_R_358_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_358_LSB) & EFUSE_INTF1_R_358_MASK)
#define EFUSE_INTF1_R_358_RESET                                                0x0
#define EFUSE_INTF1_358_ADDRESS                                                (0x1598 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_358_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_358_RESET                                                  0x0

// 0x159c (EFUSE_INTF1_359)
#define EFUSE_INTF1_R_359_LSB                                                  0
#define EFUSE_INTF1_R_359_MSB                                                  31
#define EFUSE_INTF1_R_359_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_359_GET(x)                                               (((x) & EFUSE_INTF1_R_359_MASK) >> EFUSE_INTF1_R_359_LSB)
#define EFUSE_INTF1_R_359_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_359_LSB) & EFUSE_INTF1_R_359_MASK)
#define EFUSE_INTF1_R_359_RESET                                                0x0
#define EFUSE_INTF1_359_ADDRESS                                                (0x159c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_359_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_359_RESET                                                  0x0

// 0x15a0 (EFUSE_INTF1_360)
#define EFUSE_INTF1_R_360_LSB                                                  0
#define EFUSE_INTF1_R_360_MSB                                                  31
#define EFUSE_INTF1_R_360_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_360_GET(x)                                               (((x) & EFUSE_INTF1_R_360_MASK) >> EFUSE_INTF1_R_360_LSB)
#define EFUSE_INTF1_R_360_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_360_LSB) & EFUSE_INTF1_R_360_MASK)
#define EFUSE_INTF1_R_360_RESET                                                0x0
#define EFUSE_INTF1_360_ADDRESS                                                (0x15a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_360_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_360_RESET                                                  0x0

// 0x15a4 (EFUSE_INTF1_361)
#define EFUSE_INTF1_R_361_LSB                                                  0
#define EFUSE_INTF1_R_361_MSB                                                  31
#define EFUSE_INTF1_R_361_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_361_GET(x)                                               (((x) & EFUSE_INTF1_R_361_MASK) >> EFUSE_INTF1_R_361_LSB)
#define EFUSE_INTF1_R_361_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_361_LSB) & EFUSE_INTF1_R_361_MASK)
#define EFUSE_INTF1_R_361_RESET                                                0x0
#define EFUSE_INTF1_361_ADDRESS                                                (0x15a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_361_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_361_RESET                                                  0x0

// 0x15a8 (EFUSE_INTF1_362)
#define EFUSE_INTF1_R_362_LSB                                                  0
#define EFUSE_INTF1_R_362_MSB                                                  31
#define EFUSE_INTF1_R_362_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_362_GET(x)                                               (((x) & EFUSE_INTF1_R_362_MASK) >> EFUSE_INTF1_R_362_LSB)
#define EFUSE_INTF1_R_362_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_362_LSB) & EFUSE_INTF1_R_362_MASK)
#define EFUSE_INTF1_R_362_RESET                                                0x0
#define EFUSE_INTF1_362_ADDRESS                                                (0x15a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_362_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_362_RESET                                                  0x0

// 0x15ac (EFUSE_INTF1_363)
#define EFUSE_INTF1_R_363_LSB                                                  0
#define EFUSE_INTF1_R_363_MSB                                                  31
#define EFUSE_INTF1_R_363_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_363_GET(x)                                               (((x) & EFUSE_INTF1_R_363_MASK) >> EFUSE_INTF1_R_363_LSB)
#define EFUSE_INTF1_R_363_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_363_LSB) & EFUSE_INTF1_R_363_MASK)
#define EFUSE_INTF1_R_363_RESET                                                0x0
#define EFUSE_INTF1_363_ADDRESS                                                (0x15ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_363_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_363_RESET                                                  0x0

// 0x15b0 (EFUSE_INTF1_364)
#define EFUSE_INTF1_R_364_LSB                                                  0
#define EFUSE_INTF1_R_364_MSB                                                  31
#define EFUSE_INTF1_R_364_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_364_GET(x)                                               (((x) & EFUSE_INTF1_R_364_MASK) >> EFUSE_INTF1_R_364_LSB)
#define EFUSE_INTF1_R_364_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_364_LSB) & EFUSE_INTF1_R_364_MASK)
#define EFUSE_INTF1_R_364_RESET                                                0x0
#define EFUSE_INTF1_364_ADDRESS                                                (0x15b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_364_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_364_RESET                                                  0x0

// 0x15b4 (EFUSE_INTF1_365)
#define EFUSE_INTF1_R_365_LSB                                                  0
#define EFUSE_INTF1_R_365_MSB                                                  31
#define EFUSE_INTF1_R_365_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_365_GET(x)                                               (((x) & EFUSE_INTF1_R_365_MASK) >> EFUSE_INTF1_R_365_LSB)
#define EFUSE_INTF1_R_365_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_365_LSB) & EFUSE_INTF1_R_365_MASK)
#define EFUSE_INTF1_R_365_RESET                                                0x0
#define EFUSE_INTF1_365_ADDRESS                                                (0x15b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_365_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_365_RESET                                                  0x0

// 0x15b8 (EFUSE_INTF1_366)
#define EFUSE_INTF1_R_366_LSB                                                  0
#define EFUSE_INTF1_R_366_MSB                                                  31
#define EFUSE_INTF1_R_366_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_366_GET(x)                                               (((x) & EFUSE_INTF1_R_366_MASK) >> EFUSE_INTF1_R_366_LSB)
#define EFUSE_INTF1_R_366_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_366_LSB) & EFUSE_INTF1_R_366_MASK)
#define EFUSE_INTF1_R_366_RESET                                                0x0
#define EFUSE_INTF1_366_ADDRESS                                                (0x15b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_366_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_366_RESET                                                  0x0

// 0x15bc (EFUSE_INTF1_367)
#define EFUSE_INTF1_R_367_LSB                                                  0
#define EFUSE_INTF1_R_367_MSB                                                  31
#define EFUSE_INTF1_R_367_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_367_GET(x)                                               (((x) & EFUSE_INTF1_R_367_MASK) >> EFUSE_INTF1_R_367_LSB)
#define EFUSE_INTF1_R_367_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_367_LSB) & EFUSE_INTF1_R_367_MASK)
#define EFUSE_INTF1_R_367_RESET                                                0x0
#define EFUSE_INTF1_367_ADDRESS                                                (0x15bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_367_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_367_RESET                                                  0x0

// 0x15c0 (EFUSE_INTF1_368)
#define EFUSE_INTF1_R_368_LSB                                                  0
#define EFUSE_INTF1_R_368_MSB                                                  31
#define EFUSE_INTF1_R_368_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_368_GET(x)                                               (((x) & EFUSE_INTF1_R_368_MASK) >> EFUSE_INTF1_R_368_LSB)
#define EFUSE_INTF1_R_368_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_368_LSB) & EFUSE_INTF1_R_368_MASK)
#define EFUSE_INTF1_R_368_RESET                                                0x0
#define EFUSE_INTF1_368_ADDRESS                                                (0x15c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_368_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_368_RESET                                                  0x0

// 0x15c4 (EFUSE_INTF1_369)
#define EFUSE_INTF1_R_369_LSB                                                  0
#define EFUSE_INTF1_R_369_MSB                                                  31
#define EFUSE_INTF1_R_369_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_369_GET(x)                                               (((x) & EFUSE_INTF1_R_369_MASK) >> EFUSE_INTF1_R_369_LSB)
#define EFUSE_INTF1_R_369_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_369_LSB) & EFUSE_INTF1_R_369_MASK)
#define EFUSE_INTF1_R_369_RESET                                                0x0
#define EFUSE_INTF1_369_ADDRESS                                                (0x15c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_369_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_369_RESET                                                  0x0

// 0x15c8 (EFUSE_INTF1_370)
#define EFUSE_INTF1_R_370_LSB                                                  0
#define EFUSE_INTF1_R_370_MSB                                                  31
#define EFUSE_INTF1_R_370_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_370_GET(x)                                               (((x) & EFUSE_INTF1_R_370_MASK) >> EFUSE_INTF1_R_370_LSB)
#define EFUSE_INTF1_R_370_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_370_LSB) & EFUSE_INTF1_R_370_MASK)
#define EFUSE_INTF1_R_370_RESET                                                0x0
#define EFUSE_INTF1_370_ADDRESS                                                (0x15c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_370_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_370_RESET                                                  0x0

// 0x15cc (EFUSE_INTF1_371)
#define EFUSE_INTF1_R_371_LSB                                                  0
#define EFUSE_INTF1_R_371_MSB                                                  31
#define EFUSE_INTF1_R_371_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_371_GET(x)                                               (((x) & EFUSE_INTF1_R_371_MASK) >> EFUSE_INTF1_R_371_LSB)
#define EFUSE_INTF1_R_371_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_371_LSB) & EFUSE_INTF1_R_371_MASK)
#define EFUSE_INTF1_R_371_RESET                                                0x0
#define EFUSE_INTF1_371_ADDRESS                                                (0x15cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_371_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_371_RESET                                                  0x0

// 0x15d0 (EFUSE_INTF1_372)
#define EFUSE_INTF1_R_372_LSB                                                  0
#define EFUSE_INTF1_R_372_MSB                                                  31
#define EFUSE_INTF1_R_372_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_372_GET(x)                                               (((x) & EFUSE_INTF1_R_372_MASK) >> EFUSE_INTF1_R_372_LSB)
#define EFUSE_INTF1_R_372_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_372_LSB) & EFUSE_INTF1_R_372_MASK)
#define EFUSE_INTF1_R_372_RESET                                                0x0
#define EFUSE_INTF1_372_ADDRESS                                                (0x15d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_372_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_372_RESET                                                  0x0

// 0x15d4 (EFUSE_INTF1_373)
#define EFUSE_INTF1_R_373_LSB                                                  0
#define EFUSE_INTF1_R_373_MSB                                                  31
#define EFUSE_INTF1_R_373_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_373_GET(x)                                               (((x) & EFUSE_INTF1_R_373_MASK) >> EFUSE_INTF1_R_373_LSB)
#define EFUSE_INTF1_R_373_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_373_LSB) & EFUSE_INTF1_R_373_MASK)
#define EFUSE_INTF1_R_373_RESET                                                0x0
#define EFUSE_INTF1_373_ADDRESS                                                (0x15d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_373_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_373_RESET                                                  0x0

// 0x15d8 (EFUSE_INTF1_374)
#define EFUSE_INTF1_R_374_LSB                                                  0
#define EFUSE_INTF1_R_374_MSB                                                  31
#define EFUSE_INTF1_R_374_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_374_GET(x)                                               (((x) & EFUSE_INTF1_R_374_MASK) >> EFUSE_INTF1_R_374_LSB)
#define EFUSE_INTF1_R_374_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_374_LSB) & EFUSE_INTF1_R_374_MASK)
#define EFUSE_INTF1_R_374_RESET                                                0x0
#define EFUSE_INTF1_374_ADDRESS                                                (0x15d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_374_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_374_RESET                                                  0x0

// 0x15dc (EFUSE_INTF1_375)
#define EFUSE_INTF1_R_375_LSB                                                  0
#define EFUSE_INTF1_R_375_MSB                                                  31
#define EFUSE_INTF1_R_375_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_375_GET(x)                                               (((x) & EFUSE_INTF1_R_375_MASK) >> EFUSE_INTF1_R_375_LSB)
#define EFUSE_INTF1_R_375_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_375_LSB) & EFUSE_INTF1_R_375_MASK)
#define EFUSE_INTF1_R_375_RESET                                                0x0
#define EFUSE_INTF1_375_ADDRESS                                                (0x15dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_375_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_375_RESET                                                  0x0

// 0x15e0 (EFUSE_INTF1_376)
#define EFUSE_INTF1_R_376_LSB                                                  0
#define EFUSE_INTF1_R_376_MSB                                                  31
#define EFUSE_INTF1_R_376_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_376_GET(x)                                               (((x) & EFUSE_INTF1_R_376_MASK) >> EFUSE_INTF1_R_376_LSB)
#define EFUSE_INTF1_R_376_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_376_LSB) & EFUSE_INTF1_R_376_MASK)
#define EFUSE_INTF1_R_376_RESET                                                0x0
#define EFUSE_INTF1_376_ADDRESS                                                (0x15e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_376_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_376_RESET                                                  0x0

// 0x15e4 (EFUSE_INTF1_377)
#define EFUSE_INTF1_R_377_LSB                                                  0
#define EFUSE_INTF1_R_377_MSB                                                  31
#define EFUSE_INTF1_R_377_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_377_GET(x)                                               (((x) & EFUSE_INTF1_R_377_MASK) >> EFUSE_INTF1_R_377_LSB)
#define EFUSE_INTF1_R_377_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_377_LSB) & EFUSE_INTF1_R_377_MASK)
#define EFUSE_INTF1_R_377_RESET                                                0x0
#define EFUSE_INTF1_377_ADDRESS                                                (0x15e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_377_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_377_RESET                                                  0x0

// 0x15e8 (EFUSE_INTF1_378)
#define EFUSE_INTF1_R_378_LSB                                                  0
#define EFUSE_INTF1_R_378_MSB                                                  31
#define EFUSE_INTF1_R_378_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_378_GET(x)                                               (((x) & EFUSE_INTF1_R_378_MASK) >> EFUSE_INTF1_R_378_LSB)
#define EFUSE_INTF1_R_378_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_378_LSB) & EFUSE_INTF1_R_378_MASK)
#define EFUSE_INTF1_R_378_RESET                                                0x0
#define EFUSE_INTF1_378_ADDRESS                                                (0x15e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_378_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_378_RESET                                                  0x0

// 0x15ec (EFUSE_INTF1_379)
#define EFUSE_INTF1_R_379_LSB                                                  0
#define EFUSE_INTF1_R_379_MSB                                                  31
#define EFUSE_INTF1_R_379_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_379_GET(x)                                               (((x) & EFUSE_INTF1_R_379_MASK) >> EFUSE_INTF1_R_379_LSB)
#define EFUSE_INTF1_R_379_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_379_LSB) & EFUSE_INTF1_R_379_MASK)
#define EFUSE_INTF1_R_379_RESET                                                0x0
#define EFUSE_INTF1_379_ADDRESS                                                (0x15ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_379_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_379_RESET                                                  0x0

// 0x15f0 (EFUSE_INTF1_380)
#define EFUSE_INTF1_R_380_LSB                                                  0
#define EFUSE_INTF1_R_380_MSB                                                  31
#define EFUSE_INTF1_R_380_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_380_GET(x)                                               (((x) & EFUSE_INTF1_R_380_MASK) >> EFUSE_INTF1_R_380_LSB)
#define EFUSE_INTF1_R_380_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_380_LSB) & EFUSE_INTF1_R_380_MASK)
#define EFUSE_INTF1_R_380_RESET                                                0x0
#define EFUSE_INTF1_380_ADDRESS                                                (0x15f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_380_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_380_RESET                                                  0x0

// 0x15f4 (EFUSE_INTF1_381)
#define EFUSE_INTF1_R_381_LSB                                                  0
#define EFUSE_INTF1_R_381_MSB                                                  31
#define EFUSE_INTF1_R_381_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_381_GET(x)                                               (((x) & EFUSE_INTF1_R_381_MASK) >> EFUSE_INTF1_R_381_LSB)
#define EFUSE_INTF1_R_381_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_381_LSB) & EFUSE_INTF1_R_381_MASK)
#define EFUSE_INTF1_R_381_RESET                                                0x0
#define EFUSE_INTF1_381_ADDRESS                                                (0x15f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_381_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_381_RESET                                                  0x0

// 0x15f8 (EFUSE_INTF1_382)
#define EFUSE_INTF1_R_382_LSB                                                  0
#define EFUSE_INTF1_R_382_MSB                                                  31
#define EFUSE_INTF1_R_382_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_382_GET(x)                                               (((x) & EFUSE_INTF1_R_382_MASK) >> EFUSE_INTF1_R_382_LSB)
#define EFUSE_INTF1_R_382_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_382_LSB) & EFUSE_INTF1_R_382_MASK)
#define EFUSE_INTF1_R_382_RESET                                                0x0
#define EFUSE_INTF1_382_ADDRESS                                                (0x15f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_382_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_382_RESET                                                  0x0

// 0x15fc (EFUSE_INTF1_383)
#define EFUSE_INTF1_R_383_LSB                                                  0
#define EFUSE_INTF1_R_383_MSB                                                  31
#define EFUSE_INTF1_R_383_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_383_GET(x)                                               (((x) & EFUSE_INTF1_R_383_MASK) >> EFUSE_INTF1_R_383_LSB)
#define EFUSE_INTF1_R_383_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_383_LSB) & EFUSE_INTF1_R_383_MASK)
#define EFUSE_INTF1_R_383_RESET                                                0x0
#define EFUSE_INTF1_383_ADDRESS                                                (0x15fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_383_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_383_RESET                                                  0x0

// 0x1600 (EFUSE_INTF1_384)
#define EFUSE_INTF1_R_384_LSB                                                  0
#define EFUSE_INTF1_R_384_MSB                                                  31
#define EFUSE_INTF1_R_384_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_384_GET(x)                                               (((x) & EFUSE_INTF1_R_384_MASK) >> EFUSE_INTF1_R_384_LSB)
#define EFUSE_INTF1_R_384_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_384_LSB) & EFUSE_INTF1_R_384_MASK)
#define EFUSE_INTF1_R_384_RESET                                                0x0
#define EFUSE_INTF1_384_ADDRESS                                                (0x1600 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_384_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_384_RESET                                                  0x0

// 0x1604 (EFUSE_INTF1_385)
#define EFUSE_INTF1_R_385_LSB                                                  0
#define EFUSE_INTF1_R_385_MSB                                                  31
#define EFUSE_INTF1_R_385_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_385_GET(x)                                               (((x) & EFUSE_INTF1_R_385_MASK) >> EFUSE_INTF1_R_385_LSB)
#define EFUSE_INTF1_R_385_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_385_LSB) & EFUSE_INTF1_R_385_MASK)
#define EFUSE_INTF1_R_385_RESET                                                0x0
#define EFUSE_INTF1_385_ADDRESS                                                (0x1604 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_385_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_385_RESET                                                  0x0

// 0x1608 (EFUSE_INTF1_386)
#define EFUSE_INTF1_R_386_LSB                                                  0
#define EFUSE_INTF1_R_386_MSB                                                  31
#define EFUSE_INTF1_R_386_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_386_GET(x)                                               (((x) & EFUSE_INTF1_R_386_MASK) >> EFUSE_INTF1_R_386_LSB)
#define EFUSE_INTF1_R_386_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_386_LSB) & EFUSE_INTF1_R_386_MASK)
#define EFUSE_INTF1_R_386_RESET                                                0x0
#define EFUSE_INTF1_386_ADDRESS                                                (0x1608 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_386_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_386_RESET                                                  0x0

// 0x160c (EFUSE_INTF1_387)
#define EFUSE_INTF1_R_387_LSB                                                  0
#define EFUSE_INTF1_R_387_MSB                                                  31
#define EFUSE_INTF1_R_387_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_387_GET(x)                                               (((x) & EFUSE_INTF1_R_387_MASK) >> EFUSE_INTF1_R_387_LSB)
#define EFUSE_INTF1_R_387_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_387_LSB) & EFUSE_INTF1_R_387_MASK)
#define EFUSE_INTF1_R_387_RESET                                                0x0
#define EFUSE_INTF1_387_ADDRESS                                                (0x160c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_387_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_387_RESET                                                  0x0

// 0x1610 (EFUSE_INTF1_388)
#define EFUSE_INTF1_R_388_LSB                                                  0
#define EFUSE_INTF1_R_388_MSB                                                  31
#define EFUSE_INTF1_R_388_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_388_GET(x)                                               (((x) & EFUSE_INTF1_R_388_MASK) >> EFUSE_INTF1_R_388_LSB)
#define EFUSE_INTF1_R_388_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_388_LSB) & EFUSE_INTF1_R_388_MASK)
#define EFUSE_INTF1_R_388_RESET                                                0x0
#define EFUSE_INTF1_388_ADDRESS                                                (0x1610 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_388_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_388_RESET                                                  0x0

// 0x1614 (EFUSE_INTF1_389)
#define EFUSE_INTF1_R_389_LSB                                                  0
#define EFUSE_INTF1_R_389_MSB                                                  31
#define EFUSE_INTF1_R_389_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_389_GET(x)                                               (((x) & EFUSE_INTF1_R_389_MASK) >> EFUSE_INTF1_R_389_LSB)
#define EFUSE_INTF1_R_389_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_389_LSB) & EFUSE_INTF1_R_389_MASK)
#define EFUSE_INTF1_R_389_RESET                                                0x0
#define EFUSE_INTF1_389_ADDRESS                                                (0x1614 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_389_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_389_RESET                                                  0x0

// 0x1618 (EFUSE_INTF1_390)
#define EFUSE_INTF1_R_390_LSB                                                  0
#define EFUSE_INTF1_R_390_MSB                                                  31
#define EFUSE_INTF1_R_390_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_390_GET(x)                                               (((x) & EFUSE_INTF1_R_390_MASK) >> EFUSE_INTF1_R_390_LSB)
#define EFUSE_INTF1_R_390_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_390_LSB) & EFUSE_INTF1_R_390_MASK)
#define EFUSE_INTF1_R_390_RESET                                                0x0
#define EFUSE_INTF1_390_ADDRESS                                                (0x1618 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_390_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_390_RESET                                                  0x0

// 0x161c (EFUSE_INTF1_391)
#define EFUSE_INTF1_R_391_LSB                                                  0
#define EFUSE_INTF1_R_391_MSB                                                  31
#define EFUSE_INTF1_R_391_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_391_GET(x)                                               (((x) & EFUSE_INTF1_R_391_MASK) >> EFUSE_INTF1_R_391_LSB)
#define EFUSE_INTF1_R_391_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_391_LSB) & EFUSE_INTF1_R_391_MASK)
#define EFUSE_INTF1_R_391_RESET                                                0x0
#define EFUSE_INTF1_391_ADDRESS                                                (0x161c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_391_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_391_RESET                                                  0x0

// 0x1620 (EFUSE_INTF1_392)
#define EFUSE_INTF1_R_392_LSB                                                  0
#define EFUSE_INTF1_R_392_MSB                                                  31
#define EFUSE_INTF1_R_392_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_392_GET(x)                                               (((x) & EFUSE_INTF1_R_392_MASK) >> EFUSE_INTF1_R_392_LSB)
#define EFUSE_INTF1_R_392_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_392_LSB) & EFUSE_INTF1_R_392_MASK)
#define EFUSE_INTF1_R_392_RESET                                                0x0
#define EFUSE_INTF1_392_ADDRESS                                                (0x1620 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_392_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_392_RESET                                                  0x0

// 0x1624 (EFUSE_INTF1_393)
#define EFUSE_INTF1_R_393_LSB                                                  0
#define EFUSE_INTF1_R_393_MSB                                                  31
#define EFUSE_INTF1_R_393_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_393_GET(x)                                               (((x) & EFUSE_INTF1_R_393_MASK) >> EFUSE_INTF1_R_393_LSB)
#define EFUSE_INTF1_R_393_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_393_LSB) & EFUSE_INTF1_R_393_MASK)
#define EFUSE_INTF1_R_393_RESET                                                0x0
#define EFUSE_INTF1_393_ADDRESS                                                (0x1624 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_393_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_393_RESET                                                  0x0

// 0x1628 (EFUSE_INTF1_394)
#define EFUSE_INTF1_R_394_LSB                                                  0
#define EFUSE_INTF1_R_394_MSB                                                  31
#define EFUSE_INTF1_R_394_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_394_GET(x)                                               (((x) & EFUSE_INTF1_R_394_MASK) >> EFUSE_INTF1_R_394_LSB)
#define EFUSE_INTF1_R_394_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_394_LSB) & EFUSE_INTF1_R_394_MASK)
#define EFUSE_INTF1_R_394_RESET                                                0x0
#define EFUSE_INTF1_394_ADDRESS                                                (0x1628 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_394_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_394_RESET                                                  0x0

// 0x162c (EFUSE_INTF1_395)
#define EFUSE_INTF1_R_395_LSB                                                  0
#define EFUSE_INTF1_R_395_MSB                                                  31
#define EFUSE_INTF1_R_395_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_395_GET(x)                                               (((x) & EFUSE_INTF1_R_395_MASK) >> EFUSE_INTF1_R_395_LSB)
#define EFUSE_INTF1_R_395_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_395_LSB) & EFUSE_INTF1_R_395_MASK)
#define EFUSE_INTF1_R_395_RESET                                                0x0
#define EFUSE_INTF1_395_ADDRESS                                                (0x162c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_395_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_395_RESET                                                  0x0

// 0x1630 (EFUSE_INTF1_396)
#define EFUSE_INTF1_R_396_LSB                                                  0
#define EFUSE_INTF1_R_396_MSB                                                  31
#define EFUSE_INTF1_R_396_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_396_GET(x)                                               (((x) & EFUSE_INTF1_R_396_MASK) >> EFUSE_INTF1_R_396_LSB)
#define EFUSE_INTF1_R_396_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_396_LSB) & EFUSE_INTF1_R_396_MASK)
#define EFUSE_INTF1_R_396_RESET                                                0x0
#define EFUSE_INTF1_396_ADDRESS                                                (0x1630 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_396_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_396_RESET                                                  0x0

// 0x1634 (EFUSE_INTF1_397)
#define EFUSE_INTF1_R_397_LSB                                                  0
#define EFUSE_INTF1_R_397_MSB                                                  31
#define EFUSE_INTF1_R_397_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_397_GET(x)                                               (((x) & EFUSE_INTF1_R_397_MASK) >> EFUSE_INTF1_R_397_LSB)
#define EFUSE_INTF1_R_397_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_397_LSB) & EFUSE_INTF1_R_397_MASK)
#define EFUSE_INTF1_R_397_RESET                                                0x0
#define EFUSE_INTF1_397_ADDRESS                                                (0x1634 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_397_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_397_RESET                                                  0x0

// 0x1638 (EFUSE_INTF1_398)
#define EFUSE_INTF1_R_398_LSB                                                  0
#define EFUSE_INTF1_R_398_MSB                                                  31
#define EFUSE_INTF1_R_398_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_398_GET(x)                                               (((x) & EFUSE_INTF1_R_398_MASK) >> EFUSE_INTF1_R_398_LSB)
#define EFUSE_INTF1_R_398_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_398_LSB) & EFUSE_INTF1_R_398_MASK)
#define EFUSE_INTF1_R_398_RESET                                                0x0
#define EFUSE_INTF1_398_ADDRESS                                                (0x1638 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_398_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_398_RESET                                                  0x0

// 0x163c (EFUSE_INTF1_399)
#define EFUSE_INTF1_R_399_LSB                                                  0
#define EFUSE_INTF1_R_399_MSB                                                  31
#define EFUSE_INTF1_R_399_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_399_GET(x)                                               (((x) & EFUSE_INTF1_R_399_MASK) >> EFUSE_INTF1_R_399_LSB)
#define EFUSE_INTF1_R_399_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_399_LSB) & EFUSE_INTF1_R_399_MASK)
#define EFUSE_INTF1_R_399_RESET                                                0x0
#define EFUSE_INTF1_399_ADDRESS                                                (0x163c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_399_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_399_RESET                                                  0x0

// 0x1640 (EFUSE_INTF1_400)
#define EFUSE_INTF1_R_400_LSB                                                  0
#define EFUSE_INTF1_R_400_MSB                                                  31
#define EFUSE_INTF1_R_400_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_400_GET(x)                                               (((x) & EFUSE_INTF1_R_400_MASK) >> EFUSE_INTF1_R_400_LSB)
#define EFUSE_INTF1_R_400_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_400_LSB) & EFUSE_INTF1_R_400_MASK)
#define EFUSE_INTF1_R_400_RESET                                                0x0
#define EFUSE_INTF1_400_ADDRESS                                                (0x1640 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_400_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_400_RESET                                                  0x0

// 0x1644 (EFUSE_INTF1_401)
#define EFUSE_INTF1_R_401_LSB                                                  0
#define EFUSE_INTF1_R_401_MSB                                                  31
#define EFUSE_INTF1_R_401_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_401_GET(x)                                               (((x) & EFUSE_INTF1_R_401_MASK) >> EFUSE_INTF1_R_401_LSB)
#define EFUSE_INTF1_R_401_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_401_LSB) & EFUSE_INTF1_R_401_MASK)
#define EFUSE_INTF1_R_401_RESET                                                0x0
#define EFUSE_INTF1_401_ADDRESS                                                (0x1644 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_401_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_401_RESET                                                  0x0

// 0x1648 (EFUSE_INTF1_402)
#define EFUSE_INTF1_R_402_LSB                                                  0
#define EFUSE_INTF1_R_402_MSB                                                  31
#define EFUSE_INTF1_R_402_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_402_GET(x)                                               (((x) & EFUSE_INTF1_R_402_MASK) >> EFUSE_INTF1_R_402_LSB)
#define EFUSE_INTF1_R_402_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_402_LSB) & EFUSE_INTF1_R_402_MASK)
#define EFUSE_INTF1_R_402_RESET                                                0x0
#define EFUSE_INTF1_402_ADDRESS                                                (0x1648 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_402_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_402_RESET                                                  0x0

// 0x164c (EFUSE_INTF1_403)
#define EFUSE_INTF1_R_403_LSB                                                  0
#define EFUSE_INTF1_R_403_MSB                                                  31
#define EFUSE_INTF1_R_403_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_403_GET(x)                                               (((x) & EFUSE_INTF1_R_403_MASK) >> EFUSE_INTF1_R_403_LSB)
#define EFUSE_INTF1_R_403_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_403_LSB) & EFUSE_INTF1_R_403_MASK)
#define EFUSE_INTF1_R_403_RESET                                                0x0
#define EFUSE_INTF1_403_ADDRESS                                                (0x164c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_403_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_403_RESET                                                  0x0

// 0x1650 (EFUSE_INTF1_404)
#define EFUSE_INTF1_R_404_LSB                                                  0
#define EFUSE_INTF1_R_404_MSB                                                  31
#define EFUSE_INTF1_R_404_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_404_GET(x)                                               (((x) & EFUSE_INTF1_R_404_MASK) >> EFUSE_INTF1_R_404_LSB)
#define EFUSE_INTF1_R_404_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_404_LSB) & EFUSE_INTF1_R_404_MASK)
#define EFUSE_INTF1_R_404_RESET                                                0x0
#define EFUSE_INTF1_404_ADDRESS                                                (0x1650 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_404_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_404_RESET                                                  0x0

// 0x1654 (EFUSE_INTF1_405)
#define EFUSE_INTF1_R_405_LSB                                                  0
#define EFUSE_INTF1_R_405_MSB                                                  31
#define EFUSE_INTF1_R_405_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_405_GET(x)                                               (((x) & EFUSE_INTF1_R_405_MASK) >> EFUSE_INTF1_R_405_LSB)
#define EFUSE_INTF1_R_405_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_405_LSB) & EFUSE_INTF1_R_405_MASK)
#define EFUSE_INTF1_R_405_RESET                                                0x0
#define EFUSE_INTF1_405_ADDRESS                                                (0x1654 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_405_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_405_RESET                                                  0x0

// 0x1658 (EFUSE_INTF1_406)
#define EFUSE_INTF1_R_406_LSB                                                  0
#define EFUSE_INTF1_R_406_MSB                                                  31
#define EFUSE_INTF1_R_406_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_406_GET(x)                                               (((x) & EFUSE_INTF1_R_406_MASK) >> EFUSE_INTF1_R_406_LSB)
#define EFUSE_INTF1_R_406_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_406_LSB) & EFUSE_INTF1_R_406_MASK)
#define EFUSE_INTF1_R_406_RESET                                                0x0
#define EFUSE_INTF1_406_ADDRESS                                                (0x1658 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_406_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_406_RESET                                                  0x0

// 0x165c (EFUSE_INTF1_407)
#define EFUSE_INTF1_R_407_LSB                                                  0
#define EFUSE_INTF1_R_407_MSB                                                  31
#define EFUSE_INTF1_R_407_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_407_GET(x)                                               (((x) & EFUSE_INTF1_R_407_MASK) >> EFUSE_INTF1_R_407_LSB)
#define EFUSE_INTF1_R_407_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_407_LSB) & EFUSE_INTF1_R_407_MASK)
#define EFUSE_INTF1_R_407_RESET                                                0x0
#define EFUSE_INTF1_407_ADDRESS                                                (0x165c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_407_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_407_RESET                                                  0x0

// 0x1660 (EFUSE_INTF1_408)
#define EFUSE_INTF1_R_408_LSB                                                  0
#define EFUSE_INTF1_R_408_MSB                                                  31
#define EFUSE_INTF1_R_408_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_408_GET(x)                                               (((x) & EFUSE_INTF1_R_408_MASK) >> EFUSE_INTF1_R_408_LSB)
#define EFUSE_INTF1_R_408_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_408_LSB) & EFUSE_INTF1_R_408_MASK)
#define EFUSE_INTF1_R_408_RESET                                                0x0
#define EFUSE_INTF1_408_ADDRESS                                                (0x1660 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_408_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_408_RESET                                                  0x0

// 0x1664 (EFUSE_INTF1_409)
#define EFUSE_INTF1_R_409_LSB                                                  0
#define EFUSE_INTF1_R_409_MSB                                                  31
#define EFUSE_INTF1_R_409_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_409_GET(x)                                               (((x) & EFUSE_INTF1_R_409_MASK) >> EFUSE_INTF1_R_409_LSB)
#define EFUSE_INTF1_R_409_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_409_LSB) & EFUSE_INTF1_R_409_MASK)
#define EFUSE_INTF1_R_409_RESET                                                0x0
#define EFUSE_INTF1_409_ADDRESS                                                (0x1664 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_409_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_409_RESET                                                  0x0

// 0x1668 (EFUSE_INTF1_410)
#define EFUSE_INTF1_R_410_LSB                                                  0
#define EFUSE_INTF1_R_410_MSB                                                  31
#define EFUSE_INTF1_R_410_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_410_GET(x)                                               (((x) & EFUSE_INTF1_R_410_MASK) >> EFUSE_INTF1_R_410_LSB)
#define EFUSE_INTF1_R_410_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_410_LSB) & EFUSE_INTF1_R_410_MASK)
#define EFUSE_INTF1_R_410_RESET                                                0x0
#define EFUSE_INTF1_410_ADDRESS                                                (0x1668 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_410_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_410_RESET                                                  0x0

// 0x166c (EFUSE_INTF1_411)
#define EFUSE_INTF1_R_411_LSB                                                  0
#define EFUSE_INTF1_R_411_MSB                                                  31
#define EFUSE_INTF1_R_411_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_411_GET(x)                                               (((x) & EFUSE_INTF1_R_411_MASK) >> EFUSE_INTF1_R_411_LSB)
#define EFUSE_INTF1_R_411_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_411_LSB) & EFUSE_INTF1_R_411_MASK)
#define EFUSE_INTF1_R_411_RESET                                                0x0
#define EFUSE_INTF1_411_ADDRESS                                                (0x166c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_411_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_411_RESET                                                  0x0

// 0x1670 (EFUSE_INTF1_412)
#define EFUSE_INTF1_R_412_LSB                                                  0
#define EFUSE_INTF1_R_412_MSB                                                  31
#define EFUSE_INTF1_R_412_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_412_GET(x)                                               (((x) & EFUSE_INTF1_R_412_MASK) >> EFUSE_INTF1_R_412_LSB)
#define EFUSE_INTF1_R_412_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_412_LSB) & EFUSE_INTF1_R_412_MASK)
#define EFUSE_INTF1_R_412_RESET                                                0x0
#define EFUSE_INTF1_412_ADDRESS                                                (0x1670 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_412_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_412_RESET                                                  0x0

// 0x1674 (EFUSE_INTF1_413)
#define EFUSE_INTF1_R_413_LSB                                                  0
#define EFUSE_INTF1_R_413_MSB                                                  31
#define EFUSE_INTF1_R_413_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_413_GET(x)                                               (((x) & EFUSE_INTF1_R_413_MASK) >> EFUSE_INTF1_R_413_LSB)
#define EFUSE_INTF1_R_413_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_413_LSB) & EFUSE_INTF1_R_413_MASK)
#define EFUSE_INTF1_R_413_RESET                                                0x0
#define EFUSE_INTF1_413_ADDRESS                                                (0x1674 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_413_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_413_RESET                                                  0x0

// 0x1678 (EFUSE_INTF1_414)
#define EFUSE_INTF1_R_414_LSB                                                  0
#define EFUSE_INTF1_R_414_MSB                                                  31
#define EFUSE_INTF1_R_414_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_414_GET(x)                                               (((x) & EFUSE_INTF1_R_414_MASK) >> EFUSE_INTF1_R_414_LSB)
#define EFUSE_INTF1_R_414_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_414_LSB) & EFUSE_INTF1_R_414_MASK)
#define EFUSE_INTF1_R_414_RESET                                                0x0
#define EFUSE_INTF1_414_ADDRESS                                                (0x1678 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_414_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_414_RESET                                                  0x0

// 0x167c (EFUSE_INTF1_415)
#define EFUSE_INTF1_R_415_LSB                                                  0
#define EFUSE_INTF1_R_415_MSB                                                  31
#define EFUSE_INTF1_R_415_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_415_GET(x)                                               (((x) & EFUSE_INTF1_R_415_MASK) >> EFUSE_INTF1_R_415_LSB)
#define EFUSE_INTF1_R_415_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_415_LSB) & EFUSE_INTF1_R_415_MASK)
#define EFUSE_INTF1_R_415_RESET                                                0x0
#define EFUSE_INTF1_415_ADDRESS                                                (0x167c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_415_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_415_RESET                                                  0x0

// 0x1680 (EFUSE_INTF1_416)
#define EFUSE_INTF1_R_416_LSB                                                  0
#define EFUSE_INTF1_R_416_MSB                                                  31
#define EFUSE_INTF1_R_416_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_416_GET(x)                                               (((x) & EFUSE_INTF1_R_416_MASK) >> EFUSE_INTF1_R_416_LSB)
#define EFUSE_INTF1_R_416_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_416_LSB) & EFUSE_INTF1_R_416_MASK)
#define EFUSE_INTF1_R_416_RESET                                                0x0
#define EFUSE_INTF1_416_ADDRESS                                                (0x1680 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_416_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_416_RESET                                                  0x0

// 0x1684 (EFUSE_INTF1_417)
#define EFUSE_INTF1_R_417_LSB                                                  0
#define EFUSE_INTF1_R_417_MSB                                                  31
#define EFUSE_INTF1_R_417_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_417_GET(x)                                               (((x) & EFUSE_INTF1_R_417_MASK) >> EFUSE_INTF1_R_417_LSB)
#define EFUSE_INTF1_R_417_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_417_LSB) & EFUSE_INTF1_R_417_MASK)
#define EFUSE_INTF1_R_417_RESET                                                0x0
#define EFUSE_INTF1_417_ADDRESS                                                (0x1684 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_417_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_417_RESET                                                  0x0

// 0x1688 (EFUSE_INTF1_418)
#define EFUSE_INTF1_R_418_LSB                                                  0
#define EFUSE_INTF1_R_418_MSB                                                  31
#define EFUSE_INTF1_R_418_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_418_GET(x)                                               (((x) & EFUSE_INTF1_R_418_MASK) >> EFUSE_INTF1_R_418_LSB)
#define EFUSE_INTF1_R_418_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_418_LSB) & EFUSE_INTF1_R_418_MASK)
#define EFUSE_INTF1_R_418_RESET                                                0x0
#define EFUSE_INTF1_418_ADDRESS                                                (0x1688 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_418_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_418_RESET                                                  0x0

// 0x168c (EFUSE_INTF1_419)
#define EFUSE_INTF1_R_419_LSB                                                  0
#define EFUSE_INTF1_R_419_MSB                                                  31
#define EFUSE_INTF1_R_419_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_419_GET(x)                                               (((x) & EFUSE_INTF1_R_419_MASK) >> EFUSE_INTF1_R_419_LSB)
#define EFUSE_INTF1_R_419_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_419_LSB) & EFUSE_INTF1_R_419_MASK)
#define EFUSE_INTF1_R_419_RESET                                                0x0
#define EFUSE_INTF1_419_ADDRESS                                                (0x168c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_419_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_419_RESET                                                  0x0

// 0x1690 (EFUSE_INTF1_420)
#define EFUSE_INTF1_R_420_LSB                                                  0
#define EFUSE_INTF1_R_420_MSB                                                  31
#define EFUSE_INTF1_R_420_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_420_GET(x)                                               (((x) & EFUSE_INTF1_R_420_MASK) >> EFUSE_INTF1_R_420_LSB)
#define EFUSE_INTF1_R_420_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_420_LSB) & EFUSE_INTF1_R_420_MASK)
#define EFUSE_INTF1_R_420_RESET                                                0x0
#define EFUSE_INTF1_420_ADDRESS                                                (0x1690 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_420_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_420_RESET                                                  0x0

// 0x1694 (EFUSE_INTF1_421)
#define EFUSE_INTF1_R_421_LSB                                                  0
#define EFUSE_INTF1_R_421_MSB                                                  31
#define EFUSE_INTF1_R_421_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_421_GET(x)                                               (((x) & EFUSE_INTF1_R_421_MASK) >> EFUSE_INTF1_R_421_LSB)
#define EFUSE_INTF1_R_421_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_421_LSB) & EFUSE_INTF1_R_421_MASK)
#define EFUSE_INTF1_R_421_RESET                                                0x0
#define EFUSE_INTF1_421_ADDRESS                                                (0x1694 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_421_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_421_RESET                                                  0x0

// 0x1698 (EFUSE_INTF1_422)
#define EFUSE_INTF1_R_422_LSB                                                  0
#define EFUSE_INTF1_R_422_MSB                                                  31
#define EFUSE_INTF1_R_422_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_422_GET(x)                                               (((x) & EFUSE_INTF1_R_422_MASK) >> EFUSE_INTF1_R_422_LSB)
#define EFUSE_INTF1_R_422_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_422_LSB) & EFUSE_INTF1_R_422_MASK)
#define EFUSE_INTF1_R_422_RESET                                                0x0
#define EFUSE_INTF1_422_ADDRESS                                                (0x1698 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_422_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_422_RESET                                                  0x0

// 0x169c (EFUSE_INTF1_423)
#define EFUSE_INTF1_R_423_LSB                                                  0
#define EFUSE_INTF1_R_423_MSB                                                  31
#define EFUSE_INTF1_R_423_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_423_GET(x)                                               (((x) & EFUSE_INTF1_R_423_MASK) >> EFUSE_INTF1_R_423_LSB)
#define EFUSE_INTF1_R_423_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_423_LSB) & EFUSE_INTF1_R_423_MASK)
#define EFUSE_INTF1_R_423_RESET                                                0x0
#define EFUSE_INTF1_423_ADDRESS                                                (0x169c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_423_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_423_RESET                                                  0x0

// 0x16a0 (EFUSE_INTF1_424)
#define EFUSE_INTF1_R_424_LSB                                                  0
#define EFUSE_INTF1_R_424_MSB                                                  31
#define EFUSE_INTF1_R_424_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_424_GET(x)                                               (((x) & EFUSE_INTF1_R_424_MASK) >> EFUSE_INTF1_R_424_LSB)
#define EFUSE_INTF1_R_424_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_424_LSB) & EFUSE_INTF1_R_424_MASK)
#define EFUSE_INTF1_R_424_RESET                                                0x0
#define EFUSE_INTF1_424_ADDRESS                                                (0x16a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_424_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_424_RESET                                                  0x0

// 0x16a4 (EFUSE_INTF1_425)
#define EFUSE_INTF1_R_425_LSB                                                  0
#define EFUSE_INTF1_R_425_MSB                                                  31
#define EFUSE_INTF1_R_425_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_425_GET(x)                                               (((x) & EFUSE_INTF1_R_425_MASK) >> EFUSE_INTF1_R_425_LSB)
#define EFUSE_INTF1_R_425_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_425_LSB) & EFUSE_INTF1_R_425_MASK)
#define EFUSE_INTF1_R_425_RESET                                                0x0
#define EFUSE_INTF1_425_ADDRESS                                                (0x16a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_425_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_425_RESET                                                  0x0

// 0x16a8 (EFUSE_INTF1_426)
#define EFUSE_INTF1_R_426_LSB                                                  0
#define EFUSE_INTF1_R_426_MSB                                                  31
#define EFUSE_INTF1_R_426_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_426_GET(x)                                               (((x) & EFUSE_INTF1_R_426_MASK) >> EFUSE_INTF1_R_426_LSB)
#define EFUSE_INTF1_R_426_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_426_LSB) & EFUSE_INTF1_R_426_MASK)
#define EFUSE_INTF1_R_426_RESET                                                0x0
#define EFUSE_INTF1_426_ADDRESS                                                (0x16a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_426_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_426_RESET                                                  0x0

// 0x16ac (EFUSE_INTF1_427)
#define EFUSE_INTF1_R_427_LSB                                                  0
#define EFUSE_INTF1_R_427_MSB                                                  31
#define EFUSE_INTF1_R_427_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_427_GET(x)                                               (((x) & EFUSE_INTF1_R_427_MASK) >> EFUSE_INTF1_R_427_LSB)
#define EFUSE_INTF1_R_427_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_427_LSB) & EFUSE_INTF1_R_427_MASK)
#define EFUSE_INTF1_R_427_RESET                                                0x0
#define EFUSE_INTF1_427_ADDRESS                                                (0x16ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_427_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_427_RESET                                                  0x0

// 0x16b0 (EFUSE_INTF1_428)
#define EFUSE_INTF1_R_428_LSB                                                  0
#define EFUSE_INTF1_R_428_MSB                                                  31
#define EFUSE_INTF1_R_428_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_428_GET(x)                                               (((x) & EFUSE_INTF1_R_428_MASK) >> EFUSE_INTF1_R_428_LSB)
#define EFUSE_INTF1_R_428_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_428_LSB) & EFUSE_INTF1_R_428_MASK)
#define EFUSE_INTF1_R_428_RESET                                                0x0
#define EFUSE_INTF1_428_ADDRESS                                                (0x16b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_428_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_428_RESET                                                  0x0

// 0x16b4 (EFUSE_INTF1_429)
#define EFUSE_INTF1_R_429_LSB                                                  0
#define EFUSE_INTF1_R_429_MSB                                                  31
#define EFUSE_INTF1_R_429_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_429_GET(x)                                               (((x) & EFUSE_INTF1_R_429_MASK) >> EFUSE_INTF1_R_429_LSB)
#define EFUSE_INTF1_R_429_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_429_LSB) & EFUSE_INTF1_R_429_MASK)
#define EFUSE_INTF1_R_429_RESET                                                0x0
#define EFUSE_INTF1_429_ADDRESS                                                (0x16b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_429_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_429_RESET                                                  0x0

// 0x16b8 (EFUSE_INTF1_430)
#define EFUSE_INTF1_R_430_LSB                                                  0
#define EFUSE_INTF1_R_430_MSB                                                  31
#define EFUSE_INTF1_R_430_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_430_GET(x)                                               (((x) & EFUSE_INTF1_R_430_MASK) >> EFUSE_INTF1_R_430_LSB)
#define EFUSE_INTF1_R_430_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_430_LSB) & EFUSE_INTF1_R_430_MASK)
#define EFUSE_INTF1_R_430_RESET                                                0x0
#define EFUSE_INTF1_430_ADDRESS                                                (0x16b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_430_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_430_RESET                                                  0x0

// 0x16bc (EFUSE_INTF1_431)
#define EFUSE_INTF1_R_431_LSB                                                  0
#define EFUSE_INTF1_R_431_MSB                                                  31
#define EFUSE_INTF1_R_431_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_431_GET(x)                                               (((x) & EFUSE_INTF1_R_431_MASK) >> EFUSE_INTF1_R_431_LSB)
#define EFUSE_INTF1_R_431_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_431_LSB) & EFUSE_INTF1_R_431_MASK)
#define EFUSE_INTF1_R_431_RESET                                                0x0
#define EFUSE_INTF1_431_ADDRESS                                                (0x16bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_431_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_431_RESET                                                  0x0

// 0x16c0 (EFUSE_INTF1_432)
#define EFUSE_INTF1_R_432_LSB                                                  0
#define EFUSE_INTF1_R_432_MSB                                                  31
#define EFUSE_INTF1_R_432_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_432_GET(x)                                               (((x) & EFUSE_INTF1_R_432_MASK) >> EFUSE_INTF1_R_432_LSB)
#define EFUSE_INTF1_R_432_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_432_LSB) & EFUSE_INTF1_R_432_MASK)
#define EFUSE_INTF1_R_432_RESET                                                0x0
#define EFUSE_INTF1_432_ADDRESS                                                (0x16c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_432_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_432_RESET                                                  0x0

// 0x16c4 (EFUSE_INTF1_433)
#define EFUSE_INTF1_R_433_LSB                                                  0
#define EFUSE_INTF1_R_433_MSB                                                  31
#define EFUSE_INTF1_R_433_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_433_GET(x)                                               (((x) & EFUSE_INTF1_R_433_MASK) >> EFUSE_INTF1_R_433_LSB)
#define EFUSE_INTF1_R_433_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_433_LSB) & EFUSE_INTF1_R_433_MASK)
#define EFUSE_INTF1_R_433_RESET                                                0x0
#define EFUSE_INTF1_433_ADDRESS                                                (0x16c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_433_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_433_RESET                                                  0x0

// 0x16c8 (EFUSE_INTF1_434)
#define EFUSE_INTF1_R_434_LSB                                                  0
#define EFUSE_INTF1_R_434_MSB                                                  31
#define EFUSE_INTF1_R_434_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_434_GET(x)                                               (((x) & EFUSE_INTF1_R_434_MASK) >> EFUSE_INTF1_R_434_LSB)
#define EFUSE_INTF1_R_434_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_434_LSB) & EFUSE_INTF1_R_434_MASK)
#define EFUSE_INTF1_R_434_RESET                                                0x0
#define EFUSE_INTF1_434_ADDRESS                                                (0x16c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_434_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_434_RESET                                                  0x0

// 0x16cc (EFUSE_INTF1_435)
#define EFUSE_INTF1_R_435_LSB                                                  0
#define EFUSE_INTF1_R_435_MSB                                                  31
#define EFUSE_INTF1_R_435_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_435_GET(x)                                               (((x) & EFUSE_INTF1_R_435_MASK) >> EFUSE_INTF1_R_435_LSB)
#define EFUSE_INTF1_R_435_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_435_LSB) & EFUSE_INTF1_R_435_MASK)
#define EFUSE_INTF1_R_435_RESET                                                0x0
#define EFUSE_INTF1_435_ADDRESS                                                (0x16cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_435_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_435_RESET                                                  0x0

// 0x16d0 (EFUSE_INTF1_436)
#define EFUSE_INTF1_R_436_LSB                                                  0
#define EFUSE_INTF1_R_436_MSB                                                  31
#define EFUSE_INTF1_R_436_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_436_GET(x)                                               (((x) & EFUSE_INTF1_R_436_MASK) >> EFUSE_INTF1_R_436_LSB)
#define EFUSE_INTF1_R_436_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_436_LSB) & EFUSE_INTF1_R_436_MASK)
#define EFUSE_INTF1_R_436_RESET                                                0x0
#define EFUSE_INTF1_436_ADDRESS                                                (0x16d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_436_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_436_RESET                                                  0x0

// 0x16d4 (EFUSE_INTF1_437)
#define EFUSE_INTF1_R_437_LSB                                                  0
#define EFUSE_INTF1_R_437_MSB                                                  31
#define EFUSE_INTF1_R_437_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_437_GET(x)                                               (((x) & EFUSE_INTF1_R_437_MASK) >> EFUSE_INTF1_R_437_LSB)
#define EFUSE_INTF1_R_437_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_437_LSB) & EFUSE_INTF1_R_437_MASK)
#define EFUSE_INTF1_R_437_RESET                                                0x0
#define EFUSE_INTF1_437_ADDRESS                                                (0x16d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_437_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_437_RESET                                                  0x0

// 0x16d8 (EFUSE_INTF1_438)
#define EFUSE_INTF1_R_438_LSB                                                  0
#define EFUSE_INTF1_R_438_MSB                                                  31
#define EFUSE_INTF1_R_438_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_438_GET(x)                                               (((x) & EFUSE_INTF1_R_438_MASK) >> EFUSE_INTF1_R_438_LSB)
#define EFUSE_INTF1_R_438_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_438_LSB) & EFUSE_INTF1_R_438_MASK)
#define EFUSE_INTF1_R_438_RESET                                                0x0
#define EFUSE_INTF1_438_ADDRESS                                                (0x16d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_438_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_438_RESET                                                  0x0

// 0x16dc (EFUSE_INTF1_439)
#define EFUSE_INTF1_R_439_LSB                                                  0
#define EFUSE_INTF1_R_439_MSB                                                  31
#define EFUSE_INTF1_R_439_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_439_GET(x)                                               (((x) & EFUSE_INTF1_R_439_MASK) >> EFUSE_INTF1_R_439_LSB)
#define EFUSE_INTF1_R_439_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_439_LSB) & EFUSE_INTF1_R_439_MASK)
#define EFUSE_INTF1_R_439_RESET                                                0x0
#define EFUSE_INTF1_439_ADDRESS                                                (0x16dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_439_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_439_RESET                                                  0x0

// 0x16e0 (EFUSE_INTF1_440)
#define EFUSE_INTF1_R_440_LSB                                                  0
#define EFUSE_INTF1_R_440_MSB                                                  31
#define EFUSE_INTF1_R_440_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_440_GET(x)                                               (((x) & EFUSE_INTF1_R_440_MASK) >> EFUSE_INTF1_R_440_LSB)
#define EFUSE_INTF1_R_440_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_440_LSB) & EFUSE_INTF1_R_440_MASK)
#define EFUSE_INTF1_R_440_RESET                                                0x0
#define EFUSE_INTF1_440_ADDRESS                                                (0x16e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_440_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_440_RESET                                                  0x0

// 0x16e4 (EFUSE_INTF1_441)
#define EFUSE_INTF1_R_441_LSB                                                  0
#define EFUSE_INTF1_R_441_MSB                                                  31
#define EFUSE_INTF1_R_441_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_441_GET(x)                                               (((x) & EFUSE_INTF1_R_441_MASK) >> EFUSE_INTF1_R_441_LSB)
#define EFUSE_INTF1_R_441_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_441_LSB) & EFUSE_INTF1_R_441_MASK)
#define EFUSE_INTF1_R_441_RESET                                                0x0
#define EFUSE_INTF1_441_ADDRESS                                                (0x16e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_441_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_441_RESET                                                  0x0

// 0x16e8 (EFUSE_INTF1_442)
#define EFUSE_INTF1_R_442_LSB                                                  0
#define EFUSE_INTF1_R_442_MSB                                                  31
#define EFUSE_INTF1_R_442_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_442_GET(x)                                               (((x) & EFUSE_INTF1_R_442_MASK) >> EFUSE_INTF1_R_442_LSB)
#define EFUSE_INTF1_R_442_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_442_LSB) & EFUSE_INTF1_R_442_MASK)
#define EFUSE_INTF1_R_442_RESET                                                0x0
#define EFUSE_INTF1_442_ADDRESS                                                (0x16e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_442_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_442_RESET                                                  0x0

// 0x16ec (EFUSE_INTF1_443)
#define EFUSE_INTF1_R_443_LSB                                                  0
#define EFUSE_INTF1_R_443_MSB                                                  31
#define EFUSE_INTF1_R_443_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_443_GET(x)                                               (((x) & EFUSE_INTF1_R_443_MASK) >> EFUSE_INTF1_R_443_LSB)
#define EFUSE_INTF1_R_443_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_443_LSB) & EFUSE_INTF1_R_443_MASK)
#define EFUSE_INTF1_R_443_RESET                                                0x0
#define EFUSE_INTF1_443_ADDRESS                                                (0x16ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_443_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_443_RESET                                                  0x0

// 0x16f0 (EFUSE_INTF1_444)
#define EFUSE_INTF1_R_444_LSB                                                  0
#define EFUSE_INTF1_R_444_MSB                                                  31
#define EFUSE_INTF1_R_444_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_444_GET(x)                                               (((x) & EFUSE_INTF1_R_444_MASK) >> EFUSE_INTF1_R_444_LSB)
#define EFUSE_INTF1_R_444_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_444_LSB) & EFUSE_INTF1_R_444_MASK)
#define EFUSE_INTF1_R_444_RESET                                                0x0
#define EFUSE_INTF1_444_ADDRESS                                                (0x16f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_444_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_444_RESET                                                  0x0

// 0x16f4 (EFUSE_INTF1_445)
#define EFUSE_INTF1_R_445_LSB                                                  0
#define EFUSE_INTF1_R_445_MSB                                                  31
#define EFUSE_INTF1_R_445_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_445_GET(x)                                               (((x) & EFUSE_INTF1_R_445_MASK) >> EFUSE_INTF1_R_445_LSB)
#define EFUSE_INTF1_R_445_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_445_LSB) & EFUSE_INTF1_R_445_MASK)
#define EFUSE_INTF1_R_445_RESET                                                0x0
#define EFUSE_INTF1_445_ADDRESS                                                (0x16f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_445_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_445_RESET                                                  0x0

// 0x16f8 (EFUSE_INTF1_446)
#define EFUSE_INTF1_R_446_LSB                                                  0
#define EFUSE_INTF1_R_446_MSB                                                  31
#define EFUSE_INTF1_R_446_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_446_GET(x)                                               (((x) & EFUSE_INTF1_R_446_MASK) >> EFUSE_INTF1_R_446_LSB)
#define EFUSE_INTF1_R_446_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_446_LSB) & EFUSE_INTF1_R_446_MASK)
#define EFUSE_INTF1_R_446_RESET                                                0x0
#define EFUSE_INTF1_446_ADDRESS                                                (0x16f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_446_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_446_RESET                                                  0x0

// 0x16fc (EFUSE_INTF1_447)
#define EFUSE_INTF1_R_447_LSB                                                  0
#define EFUSE_INTF1_R_447_MSB                                                  31
#define EFUSE_INTF1_R_447_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_447_GET(x)                                               (((x) & EFUSE_INTF1_R_447_MASK) >> EFUSE_INTF1_R_447_LSB)
#define EFUSE_INTF1_R_447_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_447_LSB) & EFUSE_INTF1_R_447_MASK)
#define EFUSE_INTF1_R_447_RESET                                                0x0
#define EFUSE_INTF1_447_ADDRESS                                                (0x16fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_447_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_447_RESET                                                  0x0

// 0x1700 (EFUSE_INTF1_448)
#define EFUSE_INTF1_R_448_LSB                                                  0
#define EFUSE_INTF1_R_448_MSB                                                  31
#define EFUSE_INTF1_R_448_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_448_GET(x)                                               (((x) & EFUSE_INTF1_R_448_MASK) >> EFUSE_INTF1_R_448_LSB)
#define EFUSE_INTF1_R_448_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_448_LSB) & EFUSE_INTF1_R_448_MASK)
#define EFUSE_INTF1_R_448_RESET                                                0x0
#define EFUSE_INTF1_448_ADDRESS                                                (0x1700 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_448_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_448_RESET                                                  0x0

// 0x1704 (EFUSE_INTF1_449)
#define EFUSE_INTF1_R_449_LSB                                                  0
#define EFUSE_INTF1_R_449_MSB                                                  31
#define EFUSE_INTF1_R_449_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_449_GET(x)                                               (((x) & EFUSE_INTF1_R_449_MASK) >> EFUSE_INTF1_R_449_LSB)
#define EFUSE_INTF1_R_449_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_449_LSB) & EFUSE_INTF1_R_449_MASK)
#define EFUSE_INTF1_R_449_RESET                                                0x0
#define EFUSE_INTF1_449_ADDRESS                                                (0x1704 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_449_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_449_RESET                                                  0x0

// 0x1708 (EFUSE_INTF1_450)
#define EFUSE_INTF1_R_450_LSB                                                  0
#define EFUSE_INTF1_R_450_MSB                                                  31
#define EFUSE_INTF1_R_450_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_450_GET(x)                                               (((x) & EFUSE_INTF1_R_450_MASK) >> EFUSE_INTF1_R_450_LSB)
#define EFUSE_INTF1_R_450_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_450_LSB) & EFUSE_INTF1_R_450_MASK)
#define EFUSE_INTF1_R_450_RESET                                                0x0
#define EFUSE_INTF1_450_ADDRESS                                                (0x1708 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_450_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_450_RESET                                                  0x0

// 0x170c (EFUSE_INTF1_451)
#define EFUSE_INTF1_R_451_LSB                                                  0
#define EFUSE_INTF1_R_451_MSB                                                  31
#define EFUSE_INTF1_R_451_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_451_GET(x)                                               (((x) & EFUSE_INTF1_R_451_MASK) >> EFUSE_INTF1_R_451_LSB)
#define EFUSE_INTF1_R_451_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_451_LSB) & EFUSE_INTF1_R_451_MASK)
#define EFUSE_INTF1_R_451_RESET                                                0x0
#define EFUSE_INTF1_451_ADDRESS                                                (0x170c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_451_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_451_RESET                                                  0x0

// 0x1710 (EFUSE_INTF1_452)
#define EFUSE_INTF1_R_452_LSB                                                  0
#define EFUSE_INTF1_R_452_MSB                                                  31
#define EFUSE_INTF1_R_452_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_452_GET(x)                                               (((x) & EFUSE_INTF1_R_452_MASK) >> EFUSE_INTF1_R_452_LSB)
#define EFUSE_INTF1_R_452_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_452_LSB) & EFUSE_INTF1_R_452_MASK)
#define EFUSE_INTF1_R_452_RESET                                                0x0
#define EFUSE_INTF1_452_ADDRESS                                                (0x1710 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_452_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_452_RESET                                                  0x0

// 0x1714 (EFUSE_INTF1_453)
#define EFUSE_INTF1_R_453_LSB                                                  0
#define EFUSE_INTF1_R_453_MSB                                                  31
#define EFUSE_INTF1_R_453_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_453_GET(x)                                               (((x) & EFUSE_INTF1_R_453_MASK) >> EFUSE_INTF1_R_453_LSB)
#define EFUSE_INTF1_R_453_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_453_LSB) & EFUSE_INTF1_R_453_MASK)
#define EFUSE_INTF1_R_453_RESET                                                0x0
#define EFUSE_INTF1_453_ADDRESS                                                (0x1714 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_453_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_453_RESET                                                  0x0

// 0x1718 (EFUSE_INTF1_454)
#define EFUSE_INTF1_R_454_LSB                                                  0
#define EFUSE_INTF1_R_454_MSB                                                  31
#define EFUSE_INTF1_R_454_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_454_GET(x)                                               (((x) & EFUSE_INTF1_R_454_MASK) >> EFUSE_INTF1_R_454_LSB)
#define EFUSE_INTF1_R_454_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_454_LSB) & EFUSE_INTF1_R_454_MASK)
#define EFUSE_INTF1_R_454_RESET                                                0x0
#define EFUSE_INTF1_454_ADDRESS                                                (0x1718 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_454_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_454_RESET                                                  0x0

// 0x171c (EFUSE_INTF1_455)
#define EFUSE_INTF1_R_455_LSB                                                  0
#define EFUSE_INTF1_R_455_MSB                                                  31
#define EFUSE_INTF1_R_455_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_455_GET(x)                                               (((x) & EFUSE_INTF1_R_455_MASK) >> EFUSE_INTF1_R_455_LSB)
#define EFUSE_INTF1_R_455_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_455_LSB) & EFUSE_INTF1_R_455_MASK)
#define EFUSE_INTF1_R_455_RESET                                                0x0
#define EFUSE_INTF1_455_ADDRESS                                                (0x171c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_455_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_455_RESET                                                  0x0

// 0x1720 (EFUSE_INTF1_456)
#define EFUSE_INTF1_R_456_LSB                                                  0
#define EFUSE_INTF1_R_456_MSB                                                  31
#define EFUSE_INTF1_R_456_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_456_GET(x)                                               (((x) & EFUSE_INTF1_R_456_MASK) >> EFUSE_INTF1_R_456_LSB)
#define EFUSE_INTF1_R_456_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_456_LSB) & EFUSE_INTF1_R_456_MASK)
#define EFUSE_INTF1_R_456_RESET                                                0x0
#define EFUSE_INTF1_456_ADDRESS                                                (0x1720 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_456_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_456_RESET                                                  0x0

// 0x1724 (EFUSE_INTF1_457)
#define EFUSE_INTF1_R_457_LSB                                                  0
#define EFUSE_INTF1_R_457_MSB                                                  31
#define EFUSE_INTF1_R_457_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_457_GET(x)                                               (((x) & EFUSE_INTF1_R_457_MASK) >> EFUSE_INTF1_R_457_LSB)
#define EFUSE_INTF1_R_457_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_457_LSB) & EFUSE_INTF1_R_457_MASK)
#define EFUSE_INTF1_R_457_RESET                                                0x0
#define EFUSE_INTF1_457_ADDRESS                                                (0x1724 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_457_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_457_RESET                                                  0x0

// 0x1728 (EFUSE_INTF1_458)
#define EFUSE_INTF1_R_458_LSB                                                  0
#define EFUSE_INTF1_R_458_MSB                                                  31
#define EFUSE_INTF1_R_458_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_458_GET(x)                                               (((x) & EFUSE_INTF1_R_458_MASK) >> EFUSE_INTF1_R_458_LSB)
#define EFUSE_INTF1_R_458_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_458_LSB) & EFUSE_INTF1_R_458_MASK)
#define EFUSE_INTF1_R_458_RESET                                                0x0
#define EFUSE_INTF1_458_ADDRESS                                                (0x1728 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_458_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_458_RESET                                                  0x0

// 0x172c (EFUSE_INTF1_459)
#define EFUSE_INTF1_R_459_LSB                                                  0
#define EFUSE_INTF1_R_459_MSB                                                  31
#define EFUSE_INTF1_R_459_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_459_GET(x)                                               (((x) & EFUSE_INTF1_R_459_MASK) >> EFUSE_INTF1_R_459_LSB)
#define EFUSE_INTF1_R_459_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_459_LSB) & EFUSE_INTF1_R_459_MASK)
#define EFUSE_INTF1_R_459_RESET                                                0x0
#define EFUSE_INTF1_459_ADDRESS                                                (0x172c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_459_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_459_RESET                                                  0x0

// 0x1730 (EFUSE_INTF1_460)
#define EFUSE_INTF1_R_460_LSB                                                  0
#define EFUSE_INTF1_R_460_MSB                                                  31
#define EFUSE_INTF1_R_460_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_460_GET(x)                                               (((x) & EFUSE_INTF1_R_460_MASK) >> EFUSE_INTF1_R_460_LSB)
#define EFUSE_INTF1_R_460_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_460_LSB) & EFUSE_INTF1_R_460_MASK)
#define EFUSE_INTF1_R_460_RESET                                                0x0
#define EFUSE_INTF1_460_ADDRESS                                                (0x1730 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_460_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_460_RESET                                                  0x0

// 0x1734 (EFUSE_INTF1_461)
#define EFUSE_INTF1_R_461_LSB                                                  0
#define EFUSE_INTF1_R_461_MSB                                                  31
#define EFUSE_INTF1_R_461_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_461_GET(x)                                               (((x) & EFUSE_INTF1_R_461_MASK) >> EFUSE_INTF1_R_461_LSB)
#define EFUSE_INTF1_R_461_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_461_LSB) & EFUSE_INTF1_R_461_MASK)
#define EFUSE_INTF1_R_461_RESET                                                0x0
#define EFUSE_INTF1_461_ADDRESS                                                (0x1734 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_461_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_461_RESET                                                  0x0

// 0x1738 (EFUSE_INTF1_462)
#define EFUSE_INTF1_R_462_LSB                                                  0
#define EFUSE_INTF1_R_462_MSB                                                  31
#define EFUSE_INTF1_R_462_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_462_GET(x)                                               (((x) & EFUSE_INTF1_R_462_MASK) >> EFUSE_INTF1_R_462_LSB)
#define EFUSE_INTF1_R_462_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_462_LSB) & EFUSE_INTF1_R_462_MASK)
#define EFUSE_INTF1_R_462_RESET                                                0x0
#define EFUSE_INTF1_462_ADDRESS                                                (0x1738 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_462_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_462_RESET                                                  0x0

// 0x173c (EFUSE_INTF1_463)
#define EFUSE_INTF1_R_463_LSB                                                  0
#define EFUSE_INTF1_R_463_MSB                                                  31
#define EFUSE_INTF1_R_463_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_463_GET(x)                                               (((x) & EFUSE_INTF1_R_463_MASK) >> EFUSE_INTF1_R_463_LSB)
#define EFUSE_INTF1_R_463_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_463_LSB) & EFUSE_INTF1_R_463_MASK)
#define EFUSE_INTF1_R_463_RESET                                                0x0
#define EFUSE_INTF1_463_ADDRESS                                                (0x173c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_463_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_463_RESET                                                  0x0

// 0x1740 (EFUSE_INTF1_464)
#define EFUSE_INTF1_R_464_LSB                                                  0
#define EFUSE_INTF1_R_464_MSB                                                  31
#define EFUSE_INTF1_R_464_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_464_GET(x)                                               (((x) & EFUSE_INTF1_R_464_MASK) >> EFUSE_INTF1_R_464_LSB)
#define EFUSE_INTF1_R_464_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_464_LSB) & EFUSE_INTF1_R_464_MASK)
#define EFUSE_INTF1_R_464_RESET                                                0x0
#define EFUSE_INTF1_464_ADDRESS                                                (0x1740 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_464_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_464_RESET                                                  0x0

// 0x1744 (EFUSE_INTF1_465)
#define EFUSE_INTF1_R_465_LSB                                                  0
#define EFUSE_INTF1_R_465_MSB                                                  31
#define EFUSE_INTF1_R_465_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_465_GET(x)                                               (((x) & EFUSE_INTF1_R_465_MASK) >> EFUSE_INTF1_R_465_LSB)
#define EFUSE_INTF1_R_465_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_465_LSB) & EFUSE_INTF1_R_465_MASK)
#define EFUSE_INTF1_R_465_RESET                                                0x0
#define EFUSE_INTF1_465_ADDRESS                                                (0x1744 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_465_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_465_RESET                                                  0x0

// 0x1748 (EFUSE_INTF1_466)
#define EFUSE_INTF1_R_466_LSB                                                  0
#define EFUSE_INTF1_R_466_MSB                                                  31
#define EFUSE_INTF1_R_466_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_466_GET(x)                                               (((x) & EFUSE_INTF1_R_466_MASK) >> EFUSE_INTF1_R_466_LSB)
#define EFUSE_INTF1_R_466_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_466_LSB) & EFUSE_INTF1_R_466_MASK)
#define EFUSE_INTF1_R_466_RESET                                                0x0
#define EFUSE_INTF1_466_ADDRESS                                                (0x1748 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_466_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_466_RESET                                                  0x0

// 0x174c (EFUSE_INTF1_467)
#define EFUSE_INTF1_R_467_LSB                                                  0
#define EFUSE_INTF1_R_467_MSB                                                  31
#define EFUSE_INTF1_R_467_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_467_GET(x)                                               (((x) & EFUSE_INTF1_R_467_MASK) >> EFUSE_INTF1_R_467_LSB)
#define EFUSE_INTF1_R_467_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_467_LSB) & EFUSE_INTF1_R_467_MASK)
#define EFUSE_INTF1_R_467_RESET                                                0x0
#define EFUSE_INTF1_467_ADDRESS                                                (0x174c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_467_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_467_RESET                                                  0x0

// 0x1750 (EFUSE_INTF1_468)
#define EFUSE_INTF1_R_468_LSB                                                  0
#define EFUSE_INTF1_R_468_MSB                                                  31
#define EFUSE_INTF1_R_468_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_468_GET(x)                                               (((x) & EFUSE_INTF1_R_468_MASK) >> EFUSE_INTF1_R_468_LSB)
#define EFUSE_INTF1_R_468_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_468_LSB) & EFUSE_INTF1_R_468_MASK)
#define EFUSE_INTF1_R_468_RESET                                                0x0
#define EFUSE_INTF1_468_ADDRESS                                                (0x1750 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_468_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_468_RESET                                                  0x0

// 0x1754 (EFUSE_INTF1_469)
#define EFUSE_INTF1_R_469_LSB                                                  0
#define EFUSE_INTF1_R_469_MSB                                                  31
#define EFUSE_INTF1_R_469_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_469_GET(x)                                               (((x) & EFUSE_INTF1_R_469_MASK) >> EFUSE_INTF1_R_469_LSB)
#define EFUSE_INTF1_R_469_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_469_LSB) & EFUSE_INTF1_R_469_MASK)
#define EFUSE_INTF1_R_469_RESET                                                0x0
#define EFUSE_INTF1_469_ADDRESS                                                (0x1754 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_469_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_469_RESET                                                  0x0

// 0x1758 (EFUSE_INTF1_470)
#define EFUSE_INTF1_R_470_LSB                                                  0
#define EFUSE_INTF1_R_470_MSB                                                  31
#define EFUSE_INTF1_R_470_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_470_GET(x)                                               (((x) & EFUSE_INTF1_R_470_MASK) >> EFUSE_INTF1_R_470_LSB)
#define EFUSE_INTF1_R_470_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_470_LSB) & EFUSE_INTF1_R_470_MASK)
#define EFUSE_INTF1_R_470_RESET                                                0x0
#define EFUSE_INTF1_470_ADDRESS                                                (0x1758 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_470_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_470_RESET                                                  0x0

// 0x175c (EFUSE_INTF1_471)
#define EFUSE_INTF1_R_471_LSB                                                  0
#define EFUSE_INTF1_R_471_MSB                                                  31
#define EFUSE_INTF1_R_471_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_471_GET(x)                                               (((x) & EFUSE_INTF1_R_471_MASK) >> EFUSE_INTF1_R_471_LSB)
#define EFUSE_INTF1_R_471_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_471_LSB) & EFUSE_INTF1_R_471_MASK)
#define EFUSE_INTF1_R_471_RESET                                                0x0
#define EFUSE_INTF1_471_ADDRESS                                                (0x175c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_471_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_471_RESET                                                  0x0

// 0x1760 (EFUSE_INTF1_472)
#define EFUSE_INTF1_R_472_LSB                                                  0
#define EFUSE_INTF1_R_472_MSB                                                  31
#define EFUSE_INTF1_R_472_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_472_GET(x)                                               (((x) & EFUSE_INTF1_R_472_MASK) >> EFUSE_INTF1_R_472_LSB)
#define EFUSE_INTF1_R_472_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_472_LSB) & EFUSE_INTF1_R_472_MASK)
#define EFUSE_INTF1_R_472_RESET                                                0x0
#define EFUSE_INTF1_472_ADDRESS                                                (0x1760 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_472_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_472_RESET                                                  0x0

// 0x1764 (EFUSE_INTF1_473)
#define EFUSE_INTF1_R_473_LSB                                                  0
#define EFUSE_INTF1_R_473_MSB                                                  31
#define EFUSE_INTF1_R_473_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_473_GET(x)                                               (((x) & EFUSE_INTF1_R_473_MASK) >> EFUSE_INTF1_R_473_LSB)
#define EFUSE_INTF1_R_473_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_473_LSB) & EFUSE_INTF1_R_473_MASK)
#define EFUSE_INTF1_R_473_RESET                                                0x0
#define EFUSE_INTF1_473_ADDRESS                                                (0x1764 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_473_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_473_RESET                                                  0x0

// 0x1768 (EFUSE_INTF1_474)
#define EFUSE_INTF1_R_474_LSB                                                  0
#define EFUSE_INTF1_R_474_MSB                                                  31
#define EFUSE_INTF1_R_474_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_474_GET(x)                                               (((x) & EFUSE_INTF1_R_474_MASK) >> EFUSE_INTF1_R_474_LSB)
#define EFUSE_INTF1_R_474_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_474_LSB) & EFUSE_INTF1_R_474_MASK)
#define EFUSE_INTF1_R_474_RESET                                                0x0
#define EFUSE_INTF1_474_ADDRESS                                                (0x1768 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_474_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_474_RESET                                                  0x0

// 0x176c (EFUSE_INTF1_475)
#define EFUSE_INTF1_R_475_LSB                                                  0
#define EFUSE_INTF1_R_475_MSB                                                  31
#define EFUSE_INTF1_R_475_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_475_GET(x)                                               (((x) & EFUSE_INTF1_R_475_MASK) >> EFUSE_INTF1_R_475_LSB)
#define EFUSE_INTF1_R_475_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_475_LSB) & EFUSE_INTF1_R_475_MASK)
#define EFUSE_INTF1_R_475_RESET                                                0x0
#define EFUSE_INTF1_475_ADDRESS                                                (0x176c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_475_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_475_RESET                                                  0x0

// 0x1770 (EFUSE_INTF1_476)
#define EFUSE_INTF1_R_476_LSB                                                  0
#define EFUSE_INTF1_R_476_MSB                                                  31
#define EFUSE_INTF1_R_476_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_476_GET(x)                                               (((x) & EFUSE_INTF1_R_476_MASK) >> EFUSE_INTF1_R_476_LSB)
#define EFUSE_INTF1_R_476_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_476_LSB) & EFUSE_INTF1_R_476_MASK)
#define EFUSE_INTF1_R_476_RESET                                                0x0
#define EFUSE_INTF1_476_ADDRESS                                                (0x1770 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_476_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_476_RESET                                                  0x0

// 0x1774 (EFUSE_INTF1_477)
#define EFUSE_INTF1_R_477_LSB                                                  0
#define EFUSE_INTF1_R_477_MSB                                                  31
#define EFUSE_INTF1_R_477_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_477_GET(x)                                               (((x) & EFUSE_INTF1_R_477_MASK) >> EFUSE_INTF1_R_477_LSB)
#define EFUSE_INTF1_R_477_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_477_LSB) & EFUSE_INTF1_R_477_MASK)
#define EFUSE_INTF1_R_477_RESET                                                0x0
#define EFUSE_INTF1_477_ADDRESS                                                (0x1774 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_477_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_477_RESET                                                  0x0

// 0x1778 (EFUSE_INTF1_478)
#define EFUSE_INTF1_R_478_LSB                                                  0
#define EFUSE_INTF1_R_478_MSB                                                  31
#define EFUSE_INTF1_R_478_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_478_GET(x)                                               (((x) & EFUSE_INTF1_R_478_MASK) >> EFUSE_INTF1_R_478_LSB)
#define EFUSE_INTF1_R_478_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_478_LSB) & EFUSE_INTF1_R_478_MASK)
#define EFUSE_INTF1_R_478_RESET                                                0x0
#define EFUSE_INTF1_478_ADDRESS                                                (0x1778 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_478_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_478_RESET                                                  0x0

// 0x177c (EFUSE_INTF1_479)
#define EFUSE_INTF1_R_479_LSB                                                  0
#define EFUSE_INTF1_R_479_MSB                                                  31
#define EFUSE_INTF1_R_479_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_479_GET(x)                                               (((x) & EFUSE_INTF1_R_479_MASK) >> EFUSE_INTF1_R_479_LSB)
#define EFUSE_INTF1_R_479_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_479_LSB) & EFUSE_INTF1_R_479_MASK)
#define EFUSE_INTF1_R_479_RESET                                                0x0
#define EFUSE_INTF1_479_ADDRESS                                                (0x177c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_479_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_479_RESET                                                  0x0

// 0x1780 (EFUSE_INTF1_480)
#define EFUSE_INTF1_R_480_LSB                                                  0
#define EFUSE_INTF1_R_480_MSB                                                  31
#define EFUSE_INTF1_R_480_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_480_GET(x)                                               (((x) & EFUSE_INTF1_R_480_MASK) >> EFUSE_INTF1_R_480_LSB)
#define EFUSE_INTF1_R_480_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_480_LSB) & EFUSE_INTF1_R_480_MASK)
#define EFUSE_INTF1_R_480_RESET                                                0x0
#define EFUSE_INTF1_480_ADDRESS                                                (0x1780 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_480_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_480_RESET                                                  0x0

// 0x1784 (EFUSE_INTF1_481)
#define EFUSE_INTF1_R_481_LSB                                                  0
#define EFUSE_INTF1_R_481_MSB                                                  31
#define EFUSE_INTF1_R_481_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_481_GET(x)                                               (((x) & EFUSE_INTF1_R_481_MASK) >> EFUSE_INTF1_R_481_LSB)
#define EFUSE_INTF1_R_481_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_481_LSB) & EFUSE_INTF1_R_481_MASK)
#define EFUSE_INTF1_R_481_RESET                                                0x0
#define EFUSE_INTF1_481_ADDRESS                                                (0x1784 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_481_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_481_RESET                                                  0x0

// 0x1788 (EFUSE_INTF1_482)
#define EFUSE_INTF1_R_482_LSB                                                  0
#define EFUSE_INTF1_R_482_MSB                                                  31
#define EFUSE_INTF1_R_482_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_482_GET(x)                                               (((x) & EFUSE_INTF1_R_482_MASK) >> EFUSE_INTF1_R_482_LSB)
#define EFUSE_INTF1_R_482_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_482_LSB) & EFUSE_INTF1_R_482_MASK)
#define EFUSE_INTF1_R_482_RESET                                                0x0
#define EFUSE_INTF1_482_ADDRESS                                                (0x1788 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_482_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_482_RESET                                                  0x0

// 0x178c (EFUSE_INTF1_483)
#define EFUSE_INTF1_R_483_LSB                                                  0
#define EFUSE_INTF1_R_483_MSB                                                  31
#define EFUSE_INTF1_R_483_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_483_GET(x)                                               (((x) & EFUSE_INTF1_R_483_MASK) >> EFUSE_INTF1_R_483_LSB)
#define EFUSE_INTF1_R_483_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_483_LSB) & EFUSE_INTF1_R_483_MASK)
#define EFUSE_INTF1_R_483_RESET                                                0x0
#define EFUSE_INTF1_483_ADDRESS                                                (0x178c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_483_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_483_RESET                                                  0x0

// 0x1790 (EFUSE_INTF1_484)
#define EFUSE_INTF1_R_484_LSB                                                  0
#define EFUSE_INTF1_R_484_MSB                                                  31
#define EFUSE_INTF1_R_484_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_484_GET(x)                                               (((x) & EFUSE_INTF1_R_484_MASK) >> EFUSE_INTF1_R_484_LSB)
#define EFUSE_INTF1_R_484_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_484_LSB) & EFUSE_INTF1_R_484_MASK)
#define EFUSE_INTF1_R_484_RESET                                                0x0
#define EFUSE_INTF1_484_ADDRESS                                                (0x1790 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_484_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_484_RESET                                                  0x0

// 0x1794 (EFUSE_INTF1_485)
#define EFUSE_INTF1_R_485_LSB                                                  0
#define EFUSE_INTF1_R_485_MSB                                                  31
#define EFUSE_INTF1_R_485_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_485_GET(x)                                               (((x) & EFUSE_INTF1_R_485_MASK) >> EFUSE_INTF1_R_485_LSB)
#define EFUSE_INTF1_R_485_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_485_LSB) & EFUSE_INTF1_R_485_MASK)
#define EFUSE_INTF1_R_485_RESET                                                0x0
#define EFUSE_INTF1_485_ADDRESS                                                (0x1794 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_485_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_485_RESET                                                  0x0

// 0x1798 (EFUSE_INTF1_486)
#define EFUSE_INTF1_R_486_LSB                                                  0
#define EFUSE_INTF1_R_486_MSB                                                  31
#define EFUSE_INTF1_R_486_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_486_GET(x)                                               (((x) & EFUSE_INTF1_R_486_MASK) >> EFUSE_INTF1_R_486_LSB)
#define EFUSE_INTF1_R_486_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_486_LSB) & EFUSE_INTF1_R_486_MASK)
#define EFUSE_INTF1_R_486_RESET                                                0x0
#define EFUSE_INTF1_486_ADDRESS                                                (0x1798 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_486_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_486_RESET                                                  0x0

// 0x179c (EFUSE_INTF1_487)
#define EFUSE_INTF1_R_487_LSB                                                  0
#define EFUSE_INTF1_R_487_MSB                                                  31
#define EFUSE_INTF1_R_487_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_487_GET(x)                                               (((x) & EFUSE_INTF1_R_487_MASK) >> EFUSE_INTF1_R_487_LSB)
#define EFUSE_INTF1_R_487_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_487_LSB) & EFUSE_INTF1_R_487_MASK)
#define EFUSE_INTF1_R_487_RESET                                                0x0
#define EFUSE_INTF1_487_ADDRESS                                                (0x179c + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_487_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_487_RESET                                                  0x0

// 0x17a0 (EFUSE_INTF1_488)
#define EFUSE_INTF1_R_488_LSB                                                  0
#define EFUSE_INTF1_R_488_MSB                                                  31
#define EFUSE_INTF1_R_488_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_488_GET(x)                                               (((x) & EFUSE_INTF1_R_488_MASK) >> EFUSE_INTF1_R_488_LSB)
#define EFUSE_INTF1_R_488_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_488_LSB) & EFUSE_INTF1_R_488_MASK)
#define EFUSE_INTF1_R_488_RESET                                                0x0
#define EFUSE_INTF1_488_ADDRESS                                                (0x17a0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_488_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_488_RESET                                                  0x0

// 0x17a4 (EFUSE_INTF1_489)
#define EFUSE_INTF1_R_489_LSB                                                  0
#define EFUSE_INTF1_R_489_MSB                                                  31
#define EFUSE_INTF1_R_489_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_489_GET(x)                                               (((x) & EFUSE_INTF1_R_489_MASK) >> EFUSE_INTF1_R_489_LSB)
#define EFUSE_INTF1_R_489_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_489_LSB) & EFUSE_INTF1_R_489_MASK)
#define EFUSE_INTF1_R_489_RESET                                                0x0
#define EFUSE_INTF1_489_ADDRESS                                                (0x17a4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_489_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_489_RESET                                                  0x0

// 0x17a8 (EFUSE_INTF1_490)
#define EFUSE_INTF1_R_490_LSB                                                  0
#define EFUSE_INTF1_R_490_MSB                                                  31
#define EFUSE_INTF1_R_490_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_490_GET(x)                                               (((x) & EFUSE_INTF1_R_490_MASK) >> EFUSE_INTF1_R_490_LSB)
#define EFUSE_INTF1_R_490_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_490_LSB) & EFUSE_INTF1_R_490_MASK)
#define EFUSE_INTF1_R_490_RESET                                                0x0
#define EFUSE_INTF1_490_ADDRESS                                                (0x17a8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_490_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_490_RESET                                                  0x0

// 0x17ac (EFUSE_INTF1_491)
#define EFUSE_INTF1_R_491_LSB                                                  0
#define EFUSE_INTF1_R_491_MSB                                                  31
#define EFUSE_INTF1_R_491_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_491_GET(x)                                               (((x) & EFUSE_INTF1_R_491_MASK) >> EFUSE_INTF1_R_491_LSB)
#define EFUSE_INTF1_R_491_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_491_LSB) & EFUSE_INTF1_R_491_MASK)
#define EFUSE_INTF1_R_491_RESET                                                0x0
#define EFUSE_INTF1_491_ADDRESS                                                (0x17ac + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_491_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_491_RESET                                                  0x0

// 0x17b0 (EFUSE_INTF1_492)
#define EFUSE_INTF1_R_492_LSB                                                  0
#define EFUSE_INTF1_R_492_MSB                                                  31
#define EFUSE_INTF1_R_492_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_492_GET(x)                                               (((x) & EFUSE_INTF1_R_492_MASK) >> EFUSE_INTF1_R_492_LSB)
#define EFUSE_INTF1_R_492_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_492_LSB) & EFUSE_INTF1_R_492_MASK)
#define EFUSE_INTF1_R_492_RESET                                                0x0
#define EFUSE_INTF1_492_ADDRESS                                                (0x17b0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_492_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_492_RESET                                                  0x0

// 0x17b4 (EFUSE_INTF1_493)
#define EFUSE_INTF1_R_493_LSB                                                  0
#define EFUSE_INTF1_R_493_MSB                                                  31
#define EFUSE_INTF1_R_493_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_493_GET(x)                                               (((x) & EFUSE_INTF1_R_493_MASK) >> EFUSE_INTF1_R_493_LSB)
#define EFUSE_INTF1_R_493_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_493_LSB) & EFUSE_INTF1_R_493_MASK)
#define EFUSE_INTF1_R_493_RESET                                                0x0
#define EFUSE_INTF1_493_ADDRESS                                                (0x17b4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_493_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_493_RESET                                                  0x0

// 0x17b8 (EFUSE_INTF1_494)
#define EFUSE_INTF1_R_494_LSB                                                  0
#define EFUSE_INTF1_R_494_MSB                                                  31
#define EFUSE_INTF1_R_494_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_494_GET(x)                                               (((x) & EFUSE_INTF1_R_494_MASK) >> EFUSE_INTF1_R_494_LSB)
#define EFUSE_INTF1_R_494_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_494_LSB) & EFUSE_INTF1_R_494_MASK)
#define EFUSE_INTF1_R_494_RESET                                                0x0
#define EFUSE_INTF1_494_ADDRESS                                                (0x17b8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_494_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_494_RESET                                                  0x0

// 0x17bc (EFUSE_INTF1_495)
#define EFUSE_INTF1_R_495_LSB                                                  0
#define EFUSE_INTF1_R_495_MSB                                                  31
#define EFUSE_INTF1_R_495_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_495_GET(x)                                               (((x) & EFUSE_INTF1_R_495_MASK) >> EFUSE_INTF1_R_495_LSB)
#define EFUSE_INTF1_R_495_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_495_LSB) & EFUSE_INTF1_R_495_MASK)
#define EFUSE_INTF1_R_495_RESET                                                0x0
#define EFUSE_INTF1_495_ADDRESS                                                (0x17bc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_495_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_495_RESET                                                  0x0

// 0x17c0 (EFUSE_INTF1_496)
#define EFUSE_INTF1_R_496_LSB                                                  0
#define EFUSE_INTF1_R_496_MSB                                                  31
#define EFUSE_INTF1_R_496_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_496_GET(x)                                               (((x) & EFUSE_INTF1_R_496_MASK) >> EFUSE_INTF1_R_496_LSB)
#define EFUSE_INTF1_R_496_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_496_LSB) & EFUSE_INTF1_R_496_MASK)
#define EFUSE_INTF1_R_496_RESET                                                0x0
#define EFUSE_INTF1_496_ADDRESS                                                (0x17c0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_496_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_496_RESET                                                  0x0

// 0x17c4 (EFUSE_INTF1_497)
#define EFUSE_INTF1_R_497_LSB                                                  0
#define EFUSE_INTF1_R_497_MSB                                                  31
#define EFUSE_INTF1_R_497_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_497_GET(x)                                               (((x) & EFUSE_INTF1_R_497_MASK) >> EFUSE_INTF1_R_497_LSB)
#define EFUSE_INTF1_R_497_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_497_LSB) & EFUSE_INTF1_R_497_MASK)
#define EFUSE_INTF1_R_497_RESET                                                0x0
#define EFUSE_INTF1_497_ADDRESS                                                (0x17c4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_497_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_497_RESET                                                  0x0

// 0x17c8 (EFUSE_INTF1_498)
#define EFUSE_INTF1_R_498_LSB                                                  0
#define EFUSE_INTF1_R_498_MSB                                                  31
#define EFUSE_INTF1_R_498_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_498_GET(x)                                               (((x) & EFUSE_INTF1_R_498_MASK) >> EFUSE_INTF1_R_498_LSB)
#define EFUSE_INTF1_R_498_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_498_LSB) & EFUSE_INTF1_R_498_MASK)
#define EFUSE_INTF1_R_498_RESET                                                0x0
#define EFUSE_INTF1_498_ADDRESS                                                (0x17c8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_498_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_498_RESET                                                  0x0

// 0x17cc (EFUSE_INTF1_499)
#define EFUSE_INTF1_R_499_LSB                                                  0
#define EFUSE_INTF1_R_499_MSB                                                  31
#define EFUSE_INTF1_R_499_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_499_GET(x)                                               (((x) & EFUSE_INTF1_R_499_MASK) >> EFUSE_INTF1_R_499_LSB)
#define EFUSE_INTF1_R_499_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_499_LSB) & EFUSE_INTF1_R_499_MASK)
#define EFUSE_INTF1_R_499_RESET                                                0x0
#define EFUSE_INTF1_499_ADDRESS                                                (0x17cc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_499_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_499_RESET                                                  0x0

// 0x17d0 (EFUSE_INTF1_500)
#define EFUSE_INTF1_R_500_LSB                                                  0
#define EFUSE_INTF1_R_500_MSB                                                  31
#define EFUSE_INTF1_R_500_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_500_GET(x)                                               (((x) & EFUSE_INTF1_R_500_MASK) >> EFUSE_INTF1_R_500_LSB)
#define EFUSE_INTF1_R_500_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_500_LSB) & EFUSE_INTF1_R_500_MASK)
#define EFUSE_INTF1_R_500_RESET                                                0x0
#define EFUSE_INTF1_500_ADDRESS                                                (0x17d0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_500_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_500_RESET                                                  0x0

// 0x17d4 (EFUSE_INTF1_501)
#define EFUSE_INTF1_R_501_LSB                                                  0
#define EFUSE_INTF1_R_501_MSB                                                  31
#define EFUSE_INTF1_R_501_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_501_GET(x)                                               (((x) & EFUSE_INTF1_R_501_MASK) >> EFUSE_INTF1_R_501_LSB)
#define EFUSE_INTF1_R_501_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_501_LSB) & EFUSE_INTF1_R_501_MASK)
#define EFUSE_INTF1_R_501_RESET                                                0x0
#define EFUSE_INTF1_501_ADDRESS                                                (0x17d4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_501_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_501_RESET                                                  0x0

// 0x17d8 (EFUSE_INTF1_502)
#define EFUSE_INTF1_R_502_LSB                                                  0
#define EFUSE_INTF1_R_502_MSB                                                  31
#define EFUSE_INTF1_R_502_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_502_GET(x)                                               (((x) & EFUSE_INTF1_R_502_MASK) >> EFUSE_INTF1_R_502_LSB)
#define EFUSE_INTF1_R_502_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_502_LSB) & EFUSE_INTF1_R_502_MASK)
#define EFUSE_INTF1_R_502_RESET                                                0x0
#define EFUSE_INTF1_502_ADDRESS                                                (0x17d8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_502_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_502_RESET                                                  0x0

// 0x17dc (EFUSE_INTF1_503)
#define EFUSE_INTF1_R_503_LSB                                                  0
#define EFUSE_INTF1_R_503_MSB                                                  31
#define EFUSE_INTF1_R_503_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_503_GET(x)                                               (((x) & EFUSE_INTF1_R_503_MASK) >> EFUSE_INTF1_R_503_LSB)
#define EFUSE_INTF1_R_503_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_503_LSB) & EFUSE_INTF1_R_503_MASK)
#define EFUSE_INTF1_R_503_RESET                                                0x0
#define EFUSE_INTF1_503_ADDRESS                                                (0x17dc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_503_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_503_RESET                                                  0x0

// 0x17e0 (EFUSE_INTF1_504)
#define EFUSE_INTF1_R_504_LSB                                                  0
#define EFUSE_INTF1_R_504_MSB                                                  31
#define EFUSE_INTF1_R_504_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_504_GET(x)                                               (((x) & EFUSE_INTF1_R_504_MASK) >> EFUSE_INTF1_R_504_LSB)
#define EFUSE_INTF1_R_504_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_504_LSB) & EFUSE_INTF1_R_504_MASK)
#define EFUSE_INTF1_R_504_RESET                                                0x0
#define EFUSE_INTF1_504_ADDRESS                                                (0x17e0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_504_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_504_RESET                                                  0x0

// 0x17e4 (EFUSE_INTF1_505)
#define EFUSE_INTF1_R_505_LSB                                                  0
#define EFUSE_INTF1_R_505_MSB                                                  31
#define EFUSE_INTF1_R_505_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_505_GET(x)                                               (((x) & EFUSE_INTF1_R_505_MASK) >> EFUSE_INTF1_R_505_LSB)
#define EFUSE_INTF1_R_505_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_505_LSB) & EFUSE_INTF1_R_505_MASK)
#define EFUSE_INTF1_R_505_RESET                                                0x0
#define EFUSE_INTF1_505_ADDRESS                                                (0x17e4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_505_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_505_RESET                                                  0x0

// 0x17e8 (EFUSE_INTF1_506)
#define EFUSE_INTF1_R_506_LSB                                                  0
#define EFUSE_INTF1_R_506_MSB                                                  31
#define EFUSE_INTF1_R_506_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_506_GET(x)                                               (((x) & EFUSE_INTF1_R_506_MASK) >> EFUSE_INTF1_R_506_LSB)
#define EFUSE_INTF1_R_506_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_506_LSB) & EFUSE_INTF1_R_506_MASK)
#define EFUSE_INTF1_R_506_RESET                                                0x0
#define EFUSE_INTF1_506_ADDRESS                                                (0x17e8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_506_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_506_RESET                                                  0x0

// 0x17ec (EFUSE_INTF1_507)
#define EFUSE_INTF1_R_507_LSB                                                  0
#define EFUSE_INTF1_R_507_MSB                                                  31
#define EFUSE_INTF1_R_507_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_507_GET(x)                                               (((x) & EFUSE_INTF1_R_507_MASK) >> EFUSE_INTF1_R_507_LSB)
#define EFUSE_INTF1_R_507_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_507_LSB) & EFUSE_INTF1_R_507_MASK)
#define EFUSE_INTF1_R_507_RESET                                                0x0
#define EFUSE_INTF1_507_ADDRESS                                                (0x17ec + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_507_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_507_RESET                                                  0x0

// 0x17f0 (EFUSE_INTF1_508)
#define EFUSE_INTF1_R_508_LSB                                                  0
#define EFUSE_INTF1_R_508_MSB                                                  31
#define EFUSE_INTF1_R_508_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_508_GET(x)                                               (((x) & EFUSE_INTF1_R_508_MASK) >> EFUSE_INTF1_R_508_LSB)
#define EFUSE_INTF1_R_508_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_508_LSB) & EFUSE_INTF1_R_508_MASK)
#define EFUSE_INTF1_R_508_RESET                                                0x0
#define EFUSE_INTF1_508_ADDRESS                                                (0x17f0 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_508_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_508_RESET                                                  0x0

// 0x17f4 (EFUSE_INTF1_509)
#define EFUSE_INTF1_R_509_LSB                                                  0
#define EFUSE_INTF1_R_509_MSB                                                  31
#define EFUSE_INTF1_R_509_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_509_GET(x)                                               (((x) & EFUSE_INTF1_R_509_MASK) >> EFUSE_INTF1_R_509_LSB)
#define EFUSE_INTF1_R_509_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_509_LSB) & EFUSE_INTF1_R_509_MASK)
#define EFUSE_INTF1_R_509_RESET                                                0x0
#define EFUSE_INTF1_509_ADDRESS                                                (0x17f4 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_509_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_509_RESET                                                  0x0

// 0x17f8 (EFUSE_INTF1_510)
#define EFUSE_INTF1_R_510_LSB                                                  0
#define EFUSE_INTF1_R_510_MSB                                                  31
#define EFUSE_INTF1_R_510_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_510_GET(x)                                               (((x) & EFUSE_INTF1_R_510_MASK) >> EFUSE_INTF1_R_510_LSB)
#define EFUSE_INTF1_R_510_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_510_LSB) & EFUSE_INTF1_R_510_MASK)
#define EFUSE_INTF1_R_510_RESET                                                0x0
#define EFUSE_INTF1_510_ADDRESS                                                (0x17f8 + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_510_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_510_RESET                                                  0x0

// 0x17fc (EFUSE_INTF1_511)
#define EFUSE_INTF1_R_511_LSB                                                  0
#define EFUSE_INTF1_R_511_MSB                                                  31
#define EFUSE_INTF1_R_511_MASK                                                 0xffffffff
#define EFUSE_INTF1_R_511_GET(x)                                               (((x) & EFUSE_INTF1_R_511_MASK) >> EFUSE_INTF1_R_511_LSB)
#define EFUSE_INTF1_R_511_SET(x)                                               (((0 | (x)) << EFUSE_INTF1_R_511_LSB) & EFUSE_INTF1_R_511_MASK)
#define EFUSE_INTF1_R_511_RESET                                                0x0
#define EFUSE_INTF1_511_ADDRESS                                                (0x17fc + __EFUSE_REG_BASE_ADDRESS)
#define EFUSE_INTF1_511_RSTMASK                                                0xffffffff
#define EFUSE_INTF1_511_RESET                                                  0x0



#endif /* _EFUSE_REG_H_ */
