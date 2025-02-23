/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _GPIO_ATHR_WLAN_REG_H_
#define _GPIO_ATHR_WLAN_REG_H_


#ifndef __GPIO_ATHR_WLAN_REG_BASE_ADDRESS
#define __GPIO_ATHR_WLAN_REG_BASE_ADDRESS (0x85000)
#endif


// 0x0 (WLAN_GPIO_OUT_LOW)
#define WLAN_GPIO_OUT_LOW_DATA_LSB                                             0
#define WLAN_GPIO_OUT_LOW_DATA_MSB                                             31
#define WLAN_GPIO_OUT_LOW_DATA_MASK                                            0xffffffff
#define WLAN_GPIO_OUT_LOW_DATA_GET(x)                                          (((x) & WLAN_GPIO_OUT_LOW_DATA_MASK) >> WLAN_GPIO_OUT_LOW_DATA_LSB)
#define WLAN_GPIO_OUT_LOW_DATA_SET(x)                                          (((0 | (x)) << WLAN_GPIO_OUT_LOW_DATA_LSB) & WLAN_GPIO_OUT_LOW_DATA_MASK)
#define WLAN_GPIO_OUT_LOW_DATA_RESET                                           0x0
#define WLAN_GPIO_OUT_LOW_ADDRESS                                              (0x0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_OUT_LOW_RSTMASK                                              0xffffffff
#define WLAN_GPIO_OUT_LOW_RESET                                                0x0

// 0x4 (WLAN_GPIO1_OUT_LOW)
#define WLAN_GPIO1_OUT_LOW_DATA_LSB                                            0
#define WLAN_GPIO1_OUT_LOW_DATA_MSB                                            31
#define WLAN_GPIO1_OUT_LOW_DATA_MASK                                           0xffffffff
#define WLAN_GPIO1_OUT_LOW_DATA_GET(x)                                         (((x) & WLAN_GPIO1_OUT_LOW_DATA_MASK) >> WLAN_GPIO1_OUT_LOW_DATA_LSB)
#define WLAN_GPIO1_OUT_LOW_DATA_SET(x)                                         (((0 | (x)) << WLAN_GPIO1_OUT_LOW_DATA_LSB) & WLAN_GPIO1_OUT_LOW_DATA_MASK)
#define WLAN_GPIO1_OUT_LOW_DATA_RESET                                          0x0
#define WLAN_GPIO1_OUT_LOW_ADDRESS                                             (0x4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_OUT_LOW_RSTMASK                                             0xffffffff
#define WLAN_GPIO1_OUT_LOW_RESET                                               0x0

// 0x8 (WLAN_GPIO_OUT_W1TS_LOW)
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_LSB                                        0
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_MSB                                        31
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_MASK                                       0xffffffff
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_GET(x)                                     (((x) & WLAN_GPIO_OUT_W1TS_LOW_DATA_MASK) >> WLAN_GPIO_OUT_W1TS_LOW_DATA_LSB)
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_SET(x)                                     (((0 | (x)) << WLAN_GPIO_OUT_W1TS_LOW_DATA_LSB) & WLAN_GPIO_OUT_W1TS_LOW_DATA_MASK)
#define WLAN_GPIO_OUT_W1TS_LOW_DATA_RESET                                      0x0
#define WLAN_GPIO_OUT_W1TS_LOW_ADDRESS                                         (0x8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_OUT_W1TS_LOW_RSTMASK                                         0xffffffff
#define WLAN_GPIO_OUT_W1TS_LOW_RESET                                           0x0

// 0xc (WLAN_GPIO1_OUT_W1TS_LOW)
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_LSB                                       0
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_MSB                                       31
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_MASK                                      0xffffffff
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_GET(x)                                    (((x) & WLAN_GPIO1_OUT_W1TS_LOW_DATA_MASK) >> WLAN_GPIO1_OUT_W1TS_LOW_DATA_LSB)
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_SET(x)                                    (((0 | (x)) << WLAN_GPIO1_OUT_W1TS_LOW_DATA_LSB) & WLAN_GPIO1_OUT_W1TS_LOW_DATA_MASK)
#define WLAN_GPIO1_OUT_W1TS_LOW_DATA_RESET                                     0x0
#define WLAN_GPIO1_OUT_W1TS_LOW_ADDRESS                                        (0xc + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_OUT_W1TS_LOW_RSTMASK                                        0xffffffff
#define WLAN_GPIO1_OUT_W1TS_LOW_RESET                                          0x0

// 0x10 (WLAN_GPIO_OUT_W1TC_LOW)
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_LSB                                        0
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_MSB                                        31
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_MASK                                       0xffffffff
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_GET(x)                                     (((x) & WLAN_GPIO_OUT_W1TC_LOW_DATA_MASK) >> WLAN_GPIO_OUT_W1TC_LOW_DATA_LSB)
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_SET(x)                                     (((0 | (x)) << WLAN_GPIO_OUT_W1TC_LOW_DATA_LSB) & WLAN_GPIO_OUT_W1TC_LOW_DATA_MASK)
#define WLAN_GPIO_OUT_W1TC_LOW_DATA_RESET                                      0x0
#define WLAN_GPIO_OUT_W1TC_LOW_ADDRESS                                         (0x10 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_OUT_W1TC_LOW_RSTMASK                                         0xffffffff
#define WLAN_GPIO_OUT_W1TC_LOW_RESET                                           0x0

// 0x14 (WLAN_GPIO1_OUT_W1TC_LOW)
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_LSB                                       0
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_MSB                                       31
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_MASK                                      0xffffffff
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_GET(x)                                    (((x) & WLAN_GPIO1_OUT_W1TC_LOW_DATA_MASK) >> WLAN_GPIO1_OUT_W1TC_LOW_DATA_LSB)
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_SET(x)                                    (((0 | (x)) << WLAN_GPIO1_OUT_W1TC_LOW_DATA_LSB) & WLAN_GPIO1_OUT_W1TC_LOW_DATA_MASK)
#define WLAN_GPIO1_OUT_W1TC_LOW_DATA_RESET                                     0x0
#define WLAN_GPIO1_OUT_W1TC_LOW_ADDRESS                                        (0x14 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_OUT_W1TC_LOW_RSTMASK                                        0xffffffff
#define WLAN_GPIO1_OUT_W1TC_LOW_RESET                                          0x0

// 0x18 (WLAN_GPIO_ENABLE_LOW)
#define WLAN_GPIO_ENABLE_LOW_DATA_LSB                                          0
#define WLAN_GPIO_ENABLE_LOW_DATA_MSB                                          31
#define WLAN_GPIO_ENABLE_LOW_DATA_MASK                                         0xffffffff
#define WLAN_GPIO_ENABLE_LOW_DATA_GET(x)                                       (((x) & WLAN_GPIO_ENABLE_LOW_DATA_MASK) >> WLAN_GPIO_ENABLE_LOW_DATA_LSB)
#define WLAN_GPIO_ENABLE_LOW_DATA_SET(x)                                       (((0 | (x)) << WLAN_GPIO_ENABLE_LOW_DATA_LSB) & WLAN_GPIO_ENABLE_LOW_DATA_MASK)
#define WLAN_GPIO_ENABLE_LOW_DATA_RESET                                        0x3c0
#define WLAN_GPIO_ENABLE_LOW_ADDRESS                                           (0x18 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_ENABLE_LOW_RSTMASK                                           0xffffffff
#define WLAN_GPIO_ENABLE_LOW_RESET                                             0x3c0

// 0x1c (WLAN_GPIO1_ENABLE_LOW)
#define WLAN_GPIO1_ENABLE_LOW_DATA_LSB                                         0
#define WLAN_GPIO1_ENABLE_LOW_DATA_MSB                                         31
#define WLAN_GPIO1_ENABLE_LOW_DATA_MASK                                        0xffffffff
#define WLAN_GPIO1_ENABLE_LOW_DATA_GET(x)                                      (((x) & WLAN_GPIO1_ENABLE_LOW_DATA_MASK) >> WLAN_GPIO1_ENABLE_LOW_DATA_LSB)
#define WLAN_GPIO1_ENABLE_LOW_DATA_SET(x)                                      (((0 | (x)) << WLAN_GPIO1_ENABLE_LOW_DATA_LSB) & WLAN_GPIO1_ENABLE_LOW_DATA_MASK)
#define WLAN_GPIO1_ENABLE_LOW_DATA_RESET                                       0x3
#define WLAN_GPIO1_ENABLE_LOW_ADDRESS                                          (0x1c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_ENABLE_LOW_RSTMASK                                          0xffffffff
#define WLAN_GPIO1_ENABLE_LOW_RESET                                            0x3

// 0x20 (WLAN_GPIO_ENABLE_W1TS_LOW)
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_LSB                                     0
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_MSB                                     31
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_MASK                                    0xffffffff
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_GET(x)                                  (((x) & WLAN_GPIO_ENABLE_W1TS_LOW_DATA_MASK) >> WLAN_GPIO_ENABLE_W1TS_LOW_DATA_LSB)
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_SET(x)                                  (((0 | (x)) << WLAN_GPIO_ENABLE_W1TS_LOW_DATA_LSB) & WLAN_GPIO_ENABLE_W1TS_LOW_DATA_MASK)
#define WLAN_GPIO_ENABLE_W1TS_LOW_DATA_RESET                                   0x0
#define WLAN_GPIO_ENABLE_W1TS_LOW_ADDRESS                                      (0x20 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_ENABLE_W1TS_LOW_RSTMASK                                      0xffffffff
#define WLAN_GPIO_ENABLE_W1TS_LOW_RESET                                        0x0

// 0x24 (WLAN_GPIO1_ENABLE_W1TS_LOW)
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_LSB                                    0
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_MSB                                    31
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_MASK                                   0xffffffff
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_GET(x)                                 (((x) & WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_MASK) >> WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_LSB)
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_SET(x)                                 (((0 | (x)) << WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_LSB) & WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_MASK)
#define WLAN_GPIO1_ENABLE_W1TS_LOW_DATA_RESET                                  0x0
#define WLAN_GPIO1_ENABLE_W1TS_LOW_ADDRESS                                     (0x24 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_ENABLE_W1TS_LOW_RSTMASK                                     0xffffffff
#define WLAN_GPIO1_ENABLE_W1TS_LOW_RESET                                       0x0

// 0x28 (WLAN_GPIO_ENABLE_W1TC_LOW)
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_LSB                                     0
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_MSB                                     31
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_MASK                                    0xffffffff
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_GET(x)                                  (((x) & WLAN_GPIO_ENABLE_W1TC_LOW_DATA_MASK) >> WLAN_GPIO_ENABLE_W1TC_LOW_DATA_LSB)
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_SET(x)                                  (((0 | (x)) << WLAN_GPIO_ENABLE_W1TC_LOW_DATA_LSB) & WLAN_GPIO_ENABLE_W1TC_LOW_DATA_MASK)
#define WLAN_GPIO_ENABLE_W1TC_LOW_DATA_RESET                                   0x0
#define WLAN_GPIO_ENABLE_W1TC_LOW_ADDRESS                                      (0x28 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_ENABLE_W1TC_LOW_RSTMASK                                      0xffffffff
#define WLAN_GPIO_ENABLE_W1TC_LOW_RESET                                        0x0

// 0x2c (WLAN_GPIO1_ENABLE_W1TC_LOW)
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_LSB                                    0
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_MSB                                    31
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_MASK                                   0xffffffff
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_GET(x)                                 (((x) & WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_MASK) >> WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_LSB)
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_SET(x)                                 (((0 | (x)) << WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_LSB) & WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_MASK)
#define WLAN_GPIO1_ENABLE_W1TC_LOW_DATA_RESET                                  0x0
#define WLAN_GPIO1_ENABLE_W1TC_LOW_ADDRESS                                     (0x2c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_ENABLE_W1TC_LOW_RSTMASK                                     0xffffffff
#define WLAN_GPIO1_ENABLE_W1TC_LOW_RESET                                       0x0

// 0x30 (WLAN_GPIO_IN_LOW)
#define WLAN_GPIO_IN_LOW_DATA_LSB                                              0
#define WLAN_GPIO_IN_LOW_DATA_MSB                                              31
#define WLAN_GPIO_IN_LOW_DATA_MASK                                             0xffffffff
#define WLAN_GPIO_IN_LOW_DATA_GET(x)                                           (((x) & WLAN_GPIO_IN_LOW_DATA_MASK) >> WLAN_GPIO_IN_LOW_DATA_LSB)
#define WLAN_GPIO_IN_LOW_DATA_SET(x)                                           (((0 | (x)) << WLAN_GPIO_IN_LOW_DATA_LSB) & WLAN_GPIO_IN_LOW_DATA_MASK)
#define WLAN_GPIO_IN_LOW_DATA_RESET                                            0x0
#define WLAN_GPIO_IN_LOW_ADDRESS                                               (0x30 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_IN_LOW_RSTMASK                                               0xffffffff
#define WLAN_GPIO_IN_LOW_RESET                                                 0x0

// 0x34 (WLAN_GPIO1_IN_LOW)
#define WLAN_GPIO1_IN_LOW_DATA_LSB                                             0
#define WLAN_GPIO1_IN_LOW_DATA_MSB                                             31
#define WLAN_GPIO1_IN_LOW_DATA_MASK                                            0xffffffff
#define WLAN_GPIO1_IN_LOW_DATA_GET(x)                                          (((x) & WLAN_GPIO1_IN_LOW_DATA_MASK) >> WLAN_GPIO1_IN_LOW_DATA_LSB)
#define WLAN_GPIO1_IN_LOW_DATA_SET(x)                                          (((0 | (x)) << WLAN_GPIO1_IN_LOW_DATA_LSB) & WLAN_GPIO1_IN_LOW_DATA_MASK)
#define WLAN_GPIO1_IN_LOW_DATA_RESET                                           0x0
#define WLAN_GPIO1_IN_LOW_ADDRESS                                              (0x34 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_IN_LOW_RSTMASK                                              0xffffffff
#define WLAN_GPIO1_IN_LOW_RESET                                                0x0

// 0x38 (WLAN_GPIO_STATUS_LOW)
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_LSB                                     0
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_MSB                                     31
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_MASK                                    0xffffffff
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_GET(x)                                  (((x) & WLAN_GPIO_STATUS_LOW_INTERRUPT_MASK) >> WLAN_GPIO_STATUS_LOW_INTERRUPT_LSB)
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_SET(x)                                  (((0 | (x)) << WLAN_GPIO_STATUS_LOW_INTERRUPT_LSB) & WLAN_GPIO_STATUS_LOW_INTERRUPT_MASK)
#define WLAN_GPIO_STATUS_LOW_INTERRUPT_RESET                                   0x0
#define WLAN_GPIO_STATUS_LOW_ADDRESS                                           (0x38 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_STATUS_LOW_RSTMASK                                           0xffffffff
#define WLAN_GPIO_STATUS_LOW_RESET                                             0x0

// 0x3c (WLAN_GPIO1_STATUS_LOW)
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_LSB                                    0
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_MSB                                    31
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_MASK                                   0xffffffff
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_GET(x)                                 (((x) & WLAN_GPIO1_STATUS_LOW_INTERRUPT_MASK) >> WLAN_GPIO1_STATUS_LOW_INTERRUPT_LSB)
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_SET(x)                                 (((0 | (x)) << WLAN_GPIO1_STATUS_LOW_INTERRUPT_LSB) & WLAN_GPIO1_STATUS_LOW_INTERRUPT_MASK)
#define WLAN_GPIO1_STATUS_LOW_INTERRUPT_RESET                                  0x0
#define WLAN_GPIO1_STATUS_LOW_ADDRESS                                          (0x3c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_STATUS_LOW_RSTMASK                                          0xffffffff
#define WLAN_GPIO1_STATUS_LOW_RESET                                            0x0

// 0x40 (WLAN_GPIO_STATUS_W1TS_LOW)
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_LSB                                0
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_MSB                                31
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_MASK                               0xffffffff
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_GET(x)                             (((x) & WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_MASK) >> WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_LSB)
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_SET(x)                             (((0 | (x)) << WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_LSB) & WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_MASK)
#define WLAN_GPIO_STATUS_W1TS_LOW_INTERRUPT_RESET                              0x0
#define WLAN_GPIO_STATUS_W1TS_LOW_ADDRESS                                      (0x40 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_STATUS_W1TS_LOW_RSTMASK                                      0xffffffff
#define WLAN_GPIO_STATUS_W1TS_LOW_RESET                                        0x0

// 0x44 (WLAN_GPIO1_STATUS_W1TS_LOW)
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_LSB                               0
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_MSB                               31
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_MASK                              0xffffffff
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_GET(x)                            (((x) & WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_MASK) >> WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_LSB)
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_SET(x)                            (((0 | (x)) << WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_LSB) & WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_MASK)
#define WLAN_GPIO1_STATUS_W1TS_LOW_INTERRUPT_RESET                             0x0
#define WLAN_GPIO1_STATUS_W1TS_LOW_ADDRESS                                     (0x44 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_STATUS_W1TS_LOW_RSTMASK                                     0xffffffff
#define WLAN_GPIO1_STATUS_W1TS_LOW_RESET                                       0x0

// 0x48 (WLAN_GPIO_STATUS_W1TC_LOW)
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_LSB                                0
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_MSB                                31
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_MASK                               0xffffffff
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_GET(x)                             (((x) & WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_MASK) >> WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_LSB)
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_SET(x)                             (((0 | (x)) << WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_LSB) & WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_MASK)
#define WLAN_GPIO_STATUS_W1TC_LOW_INTERRUPT_RESET                              0x0
#define WLAN_GPIO_STATUS_W1TC_LOW_ADDRESS                                      (0x48 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_STATUS_W1TC_LOW_RSTMASK                                      0xffffffff
#define WLAN_GPIO_STATUS_W1TC_LOW_RESET                                        0x0

// 0x4c (WLAN_GPIO1_STATUS_W1TC_LOW)
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_LSB                               0
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_MSB                               31
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_MASK                              0xffffffff
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_GET(x)                            (((x) & WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_MASK) >> WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_LSB)
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_SET(x)                            (((0 | (x)) << WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_LSB) & WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_MASK)
#define WLAN_GPIO1_STATUS_W1TC_LOW_INTERRUPT_RESET                             0x0
#define WLAN_GPIO1_STATUS_W1TC_LOW_ADDRESS                                     (0x4c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO1_STATUS_W1TC_LOW_RSTMASK                                     0xffffffff
#define WLAN_GPIO1_STATUS_W1TC_LOW_RESET                                       0x0

// 0x50 (WLAN_GPIO_PIN0)
#define WLAN_GPIO_PIN0_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN0_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN0_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN0_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN0_PAD_ENST_MASK) >> WLAN_GPIO_PIN0_PAD_ENST_LSB)
#define WLAN_GPIO_PIN0_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN0_PAD_ENST_LSB) & WLAN_GPIO_PIN0_PAD_ENST_MASK)
#define WLAN_GPIO_PIN0_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN0_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN0_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN0_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN0_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN0_CONFIG_MASK) >> WLAN_GPIO_PIN0_CONFIG_LSB)
#define WLAN_GPIO_PIN0_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN0_CONFIG_LSB) & WLAN_GPIO_PIN0_CONFIG_MASK)
#define WLAN_GPIO_PIN0_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN0_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN0_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN0_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN0_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN0_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN0_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN0_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN0_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN0_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN0_INT_TYPE_MASK) >> WLAN_GPIO_PIN0_INT_TYPE_LSB)
#define WLAN_GPIO_PIN0_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN0_INT_TYPE_LSB) & WLAN_GPIO_PIN0_INT_TYPE_MASK)
#define WLAN_GPIO_PIN0_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN0_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN0_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN0_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN0_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN0_PAD_PULL_MASK) >> WLAN_GPIO_PIN0_PAD_PULL_LSB)
#define WLAN_GPIO_PIN0_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN0_PAD_PULL_LSB) & WLAN_GPIO_PIN0_PAD_PULL_MASK)
#define WLAN_GPIO_PIN0_PAD_PULL_RESET                                          0x1
#define WLAN_GPIO_PIN0_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN0_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN0_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN0_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN0_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN0_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN0_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN0_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN0_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN0_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN0_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN0_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN0_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN0_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN0_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN0_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN0_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN0_PAD_DRIVER_LSB) & WLAN_GPIO_PIN0_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN0_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN0_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN0_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN0_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN0_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN0_SOURCE_MASK) >> WLAN_GPIO_PIN0_SOURCE_LSB)
#define WLAN_GPIO_PIN0_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN0_SOURCE_LSB) & WLAN_GPIO_PIN0_SOURCE_MASK)
#define WLAN_GPIO_PIN0_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN0_ADDRESS                                                 (0x50 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN0_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN0_RESET                                                   0x28

// 0x54 (WLAN_GPIO_PIN1)
#define WLAN_GPIO_PIN1_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN1_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN1_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN1_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN1_PAD_ENST_MASK) >> WLAN_GPIO_PIN1_PAD_ENST_LSB)
#define WLAN_GPIO_PIN1_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN1_PAD_ENST_LSB) & WLAN_GPIO_PIN1_PAD_ENST_MASK)
#define WLAN_GPIO_PIN1_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN1_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN1_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN1_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN1_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN1_CONFIG_MASK) >> WLAN_GPIO_PIN1_CONFIG_LSB)
#define WLAN_GPIO_PIN1_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN1_CONFIG_LSB) & WLAN_GPIO_PIN1_CONFIG_MASK)
#define WLAN_GPIO_PIN1_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN1_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN1_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN1_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN1_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN1_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN1_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN1_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN1_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN1_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN1_INT_TYPE_MASK) >> WLAN_GPIO_PIN1_INT_TYPE_LSB)
#define WLAN_GPIO_PIN1_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN1_INT_TYPE_LSB) & WLAN_GPIO_PIN1_INT_TYPE_MASK)
#define WLAN_GPIO_PIN1_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN1_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN1_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN1_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN1_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN1_PAD_PULL_MASK) >> WLAN_GPIO_PIN1_PAD_PULL_LSB)
#define WLAN_GPIO_PIN1_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN1_PAD_PULL_LSB) & WLAN_GPIO_PIN1_PAD_PULL_MASK)
#define WLAN_GPIO_PIN1_PAD_PULL_RESET                                          0x1
#define WLAN_GPIO_PIN1_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN1_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN1_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN1_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN1_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN1_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN1_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN1_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN1_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN1_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN1_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN1_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN1_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN1_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN1_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN1_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN1_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN1_PAD_DRIVER_LSB) & WLAN_GPIO_PIN1_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN1_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN1_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN1_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN1_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN1_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN1_SOURCE_MASK) >> WLAN_GPIO_PIN1_SOURCE_LSB)
#define WLAN_GPIO_PIN1_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN1_SOURCE_LSB) & WLAN_GPIO_PIN1_SOURCE_MASK)
#define WLAN_GPIO_PIN1_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN1_ADDRESS                                                 (0x54 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN1_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN1_RESET                                                   0x28

// 0x58 (WLAN_GPIO_PIN2)
#define WLAN_GPIO_PIN2_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN2_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN2_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN2_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN2_PAD_ENST_MASK) >> WLAN_GPIO_PIN2_PAD_ENST_LSB)
#define WLAN_GPIO_PIN2_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN2_PAD_ENST_LSB) & WLAN_GPIO_PIN2_PAD_ENST_MASK)
#define WLAN_GPIO_PIN2_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN2_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN2_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN2_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN2_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN2_CONFIG_MASK) >> WLAN_GPIO_PIN2_CONFIG_LSB)
#define WLAN_GPIO_PIN2_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN2_CONFIG_LSB) & WLAN_GPIO_PIN2_CONFIG_MASK)
#define WLAN_GPIO_PIN2_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN2_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN2_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN2_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN2_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN2_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN2_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN2_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN2_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN2_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN2_INT_TYPE_MASK) >> WLAN_GPIO_PIN2_INT_TYPE_LSB)
#define WLAN_GPIO_PIN2_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN2_INT_TYPE_LSB) & WLAN_GPIO_PIN2_INT_TYPE_MASK)
#define WLAN_GPIO_PIN2_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN2_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN2_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN2_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN2_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN2_PAD_PULL_MASK) >> WLAN_GPIO_PIN2_PAD_PULL_LSB)
#define WLAN_GPIO_PIN2_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN2_PAD_PULL_LSB) & WLAN_GPIO_PIN2_PAD_PULL_MASK)
#define WLAN_GPIO_PIN2_PAD_PULL_RESET                                          0x1
#define WLAN_GPIO_PIN2_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN2_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN2_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN2_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN2_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN2_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN2_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN2_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN2_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN2_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN2_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN2_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN2_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN2_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN2_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN2_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN2_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN2_PAD_DRIVER_LSB) & WLAN_GPIO_PIN2_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN2_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN2_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN2_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN2_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN2_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN2_SOURCE_MASK) >> WLAN_GPIO_PIN2_SOURCE_LSB)
#define WLAN_GPIO_PIN2_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN2_SOURCE_LSB) & WLAN_GPIO_PIN2_SOURCE_MASK)
#define WLAN_GPIO_PIN2_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN2_ADDRESS                                                 (0x58 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN2_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN2_RESET                                                   0x28

// 0x5c (WLAN_GPIO_PIN3)
#define WLAN_GPIO_PIN3_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN3_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN3_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN3_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN3_PAD_ENST_MASK) >> WLAN_GPIO_PIN3_PAD_ENST_LSB)
#define WLAN_GPIO_PIN3_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN3_PAD_ENST_LSB) & WLAN_GPIO_PIN3_PAD_ENST_MASK)
#define WLAN_GPIO_PIN3_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN3_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN3_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN3_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN3_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN3_CONFIG_MASK) >> WLAN_GPIO_PIN3_CONFIG_LSB)
#define WLAN_GPIO_PIN3_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN3_CONFIG_LSB) & WLAN_GPIO_PIN3_CONFIG_MASK)
#define WLAN_GPIO_PIN3_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN3_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN3_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN3_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN3_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN3_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN3_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN3_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN3_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN3_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN3_INT_TYPE_MASK) >> WLAN_GPIO_PIN3_INT_TYPE_LSB)
#define WLAN_GPIO_PIN3_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN3_INT_TYPE_LSB) & WLAN_GPIO_PIN3_INT_TYPE_MASK)
#define WLAN_GPIO_PIN3_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN3_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN3_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN3_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN3_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN3_PAD_PULL_MASK) >> WLAN_GPIO_PIN3_PAD_PULL_LSB)
#define WLAN_GPIO_PIN3_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN3_PAD_PULL_LSB) & WLAN_GPIO_PIN3_PAD_PULL_MASK)
#define WLAN_GPIO_PIN3_PAD_PULL_RESET                                          0x1
#define WLAN_GPIO_PIN3_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN3_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN3_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN3_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN3_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN3_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN3_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN3_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN3_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN3_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN3_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN3_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN3_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN3_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN3_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN3_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN3_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN3_PAD_DRIVER_LSB) & WLAN_GPIO_PIN3_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN3_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN3_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN3_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN3_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN3_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN3_SOURCE_MASK) >> WLAN_GPIO_PIN3_SOURCE_LSB)
#define WLAN_GPIO_PIN3_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN3_SOURCE_LSB) & WLAN_GPIO_PIN3_SOURCE_MASK)
#define WLAN_GPIO_PIN3_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN3_ADDRESS                                                 (0x5c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN3_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN3_RESET                                                   0x28

// 0x60 (WLAN_GPIO_PIN4)
#define WLAN_GPIO_PIN4_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN4_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN4_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN4_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN4_PAD_ENST_MASK) >> WLAN_GPIO_PIN4_PAD_ENST_LSB)
#define WLAN_GPIO_PIN4_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN4_PAD_ENST_LSB) & WLAN_GPIO_PIN4_PAD_ENST_MASK)
#define WLAN_GPIO_PIN4_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN4_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN4_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN4_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN4_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN4_CONFIG_MASK) >> WLAN_GPIO_PIN4_CONFIG_LSB)
#define WLAN_GPIO_PIN4_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN4_CONFIG_LSB) & WLAN_GPIO_PIN4_CONFIG_MASK)
#define WLAN_GPIO_PIN4_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN4_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN4_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN4_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN4_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN4_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN4_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN4_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN4_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN4_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN4_INT_TYPE_MASK) >> WLAN_GPIO_PIN4_INT_TYPE_LSB)
#define WLAN_GPIO_PIN4_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN4_INT_TYPE_LSB) & WLAN_GPIO_PIN4_INT_TYPE_MASK)
#define WLAN_GPIO_PIN4_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN4_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN4_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN4_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN4_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN4_PAD_PULL_MASK) >> WLAN_GPIO_PIN4_PAD_PULL_LSB)
#define WLAN_GPIO_PIN4_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN4_PAD_PULL_LSB) & WLAN_GPIO_PIN4_PAD_PULL_MASK)
#define WLAN_GPIO_PIN4_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN4_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN4_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN4_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN4_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN4_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN4_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN4_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN4_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN4_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN4_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN4_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN4_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN4_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN4_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN4_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN4_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN4_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN4_PAD_DRIVER_LSB) & WLAN_GPIO_PIN4_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN4_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN4_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN4_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN4_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN4_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN4_SOURCE_MASK) >> WLAN_GPIO_PIN4_SOURCE_LSB)
#define WLAN_GPIO_PIN4_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN4_SOURCE_LSB) & WLAN_GPIO_PIN4_SOURCE_MASK)
#define WLAN_GPIO_PIN4_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN4_ADDRESS                                                 (0x60 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN4_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN4_RESET                                                   0x48

// 0x64 (WLAN_GPIO_PIN5)
#define WLAN_GPIO_PIN5_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN5_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN5_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN5_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN5_PAD_ENST_MASK) >> WLAN_GPIO_PIN5_PAD_ENST_LSB)
#define WLAN_GPIO_PIN5_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN5_PAD_ENST_LSB) & WLAN_GPIO_PIN5_PAD_ENST_MASK)
#define WLAN_GPIO_PIN5_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN5_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN5_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN5_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN5_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN5_CONFIG_MASK) >> WLAN_GPIO_PIN5_CONFIG_LSB)
#define WLAN_GPIO_PIN5_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN5_CONFIG_LSB) & WLAN_GPIO_PIN5_CONFIG_MASK)
#define WLAN_GPIO_PIN5_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN5_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN5_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN5_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN5_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN5_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN5_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN5_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN5_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN5_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN5_INT_TYPE_MASK) >> WLAN_GPIO_PIN5_INT_TYPE_LSB)
#define WLAN_GPIO_PIN5_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN5_INT_TYPE_LSB) & WLAN_GPIO_PIN5_INT_TYPE_MASK)
#define WLAN_GPIO_PIN5_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN5_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN5_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN5_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN5_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN5_PAD_PULL_MASK) >> WLAN_GPIO_PIN5_PAD_PULL_LSB)
#define WLAN_GPIO_PIN5_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN5_PAD_PULL_LSB) & WLAN_GPIO_PIN5_PAD_PULL_MASK)
#define WLAN_GPIO_PIN5_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN5_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN5_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN5_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN5_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN5_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN5_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN5_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN5_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN5_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN5_PAD_STRENGTH_RESET                                      0x1
#define WLAN_GPIO_PIN5_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN5_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN5_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN5_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN5_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN5_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN5_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN5_PAD_DRIVER_LSB) & WLAN_GPIO_PIN5_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN5_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN5_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN5_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN5_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN5_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN5_SOURCE_MASK) >> WLAN_GPIO_PIN5_SOURCE_LSB)
#define WLAN_GPIO_PIN5_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN5_SOURCE_LSB) & WLAN_GPIO_PIN5_SOURCE_MASK)
#define WLAN_GPIO_PIN5_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN5_ADDRESS                                                 (0x64 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN5_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN5_RESET                                                   0x48

// 0x68 (WLAN_GPIO_PIN6)
#define WLAN_GPIO_PIN6_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN6_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN6_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN6_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN6_PAD_ENST_MASK) >> WLAN_GPIO_PIN6_PAD_ENST_LSB)
#define WLAN_GPIO_PIN6_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN6_PAD_ENST_LSB) & WLAN_GPIO_PIN6_PAD_ENST_MASK)
#define WLAN_GPIO_PIN6_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN6_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN6_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN6_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN6_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN6_CONFIG_MASK) >> WLAN_GPIO_PIN6_CONFIG_LSB)
#define WLAN_GPIO_PIN6_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN6_CONFIG_LSB) & WLAN_GPIO_PIN6_CONFIG_MASK)
#define WLAN_GPIO_PIN6_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN6_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN6_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN6_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN6_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN6_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN6_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN6_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN6_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN6_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN6_INT_TYPE_MASK) >> WLAN_GPIO_PIN6_INT_TYPE_LSB)
#define WLAN_GPIO_PIN6_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN6_INT_TYPE_LSB) & WLAN_GPIO_PIN6_INT_TYPE_MASK)
#define WLAN_GPIO_PIN6_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN6_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN6_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN6_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN6_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN6_PAD_PULL_MASK) >> WLAN_GPIO_PIN6_PAD_PULL_LSB)
#define WLAN_GPIO_PIN6_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN6_PAD_PULL_LSB) & WLAN_GPIO_PIN6_PAD_PULL_MASK)
#define WLAN_GPIO_PIN6_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN6_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN6_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN6_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN6_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN6_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN6_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN6_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN6_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN6_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN6_PAD_STRENGTH_RESET                                      0x0
#define WLAN_GPIO_PIN6_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN6_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN6_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN6_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN6_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN6_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN6_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN6_PAD_DRIVER_LSB) & WLAN_GPIO_PIN6_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN6_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN6_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN6_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN6_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN6_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN6_SOURCE_MASK) >> WLAN_GPIO_PIN6_SOURCE_LSB)
#define WLAN_GPIO_PIN6_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN6_SOURCE_LSB) & WLAN_GPIO_PIN6_SOURCE_MASK)
#define WLAN_GPIO_PIN6_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN6_ADDRESS                                                 (0x68 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN6_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN6_RESET                                                   0x40

// 0x6c (WLAN_GPIO_PIN7)
#define WLAN_GPIO_PIN7_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN7_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN7_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN7_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN7_PAD_ENST_MASK) >> WLAN_GPIO_PIN7_PAD_ENST_LSB)
#define WLAN_GPIO_PIN7_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN7_PAD_ENST_LSB) & WLAN_GPIO_PIN7_PAD_ENST_MASK)
#define WLAN_GPIO_PIN7_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN7_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN7_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN7_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN7_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN7_CONFIG_MASK) >> WLAN_GPIO_PIN7_CONFIG_LSB)
#define WLAN_GPIO_PIN7_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN7_CONFIG_LSB) & WLAN_GPIO_PIN7_CONFIG_MASK)
#define WLAN_GPIO_PIN7_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN7_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN7_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN7_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN7_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN7_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN7_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN7_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN7_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN7_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN7_INT_TYPE_MASK) >> WLAN_GPIO_PIN7_INT_TYPE_LSB)
#define WLAN_GPIO_PIN7_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN7_INT_TYPE_LSB) & WLAN_GPIO_PIN7_INT_TYPE_MASK)
#define WLAN_GPIO_PIN7_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN7_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN7_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN7_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN7_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN7_PAD_PULL_MASK) >> WLAN_GPIO_PIN7_PAD_PULL_LSB)
#define WLAN_GPIO_PIN7_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN7_PAD_PULL_LSB) & WLAN_GPIO_PIN7_PAD_PULL_MASK)
#define WLAN_GPIO_PIN7_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN7_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN7_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN7_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN7_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN7_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN7_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN7_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN7_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN7_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN7_PAD_STRENGTH_RESET                                      0x0
#define WLAN_GPIO_PIN7_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN7_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN7_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN7_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN7_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN7_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN7_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN7_PAD_DRIVER_LSB) & WLAN_GPIO_PIN7_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN7_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN7_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN7_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN7_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN7_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN7_SOURCE_MASK) >> WLAN_GPIO_PIN7_SOURCE_LSB)
#define WLAN_GPIO_PIN7_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN7_SOURCE_LSB) & WLAN_GPIO_PIN7_SOURCE_MASK)
#define WLAN_GPIO_PIN7_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN7_ADDRESS                                                 (0x6c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN7_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN7_RESET                                                   0x40

// 0x70 (WLAN_GPIO_PIN8)
#define WLAN_GPIO_PIN8_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN8_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN8_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN8_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN8_PAD_ENST_MASK) >> WLAN_GPIO_PIN8_PAD_ENST_LSB)
#define WLAN_GPIO_PIN8_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN8_PAD_ENST_LSB) & WLAN_GPIO_PIN8_PAD_ENST_MASK)
#define WLAN_GPIO_PIN8_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN8_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN8_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN8_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN8_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN8_CONFIG_MASK) >> WLAN_GPIO_PIN8_CONFIG_LSB)
#define WLAN_GPIO_PIN8_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN8_CONFIG_LSB) & WLAN_GPIO_PIN8_CONFIG_MASK)
#define WLAN_GPIO_PIN8_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN8_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN8_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN8_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN8_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN8_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN8_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN8_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN8_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN8_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN8_INT_TYPE_MASK) >> WLAN_GPIO_PIN8_INT_TYPE_LSB)
#define WLAN_GPIO_PIN8_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN8_INT_TYPE_LSB) & WLAN_GPIO_PIN8_INT_TYPE_MASK)
#define WLAN_GPIO_PIN8_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN8_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN8_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN8_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN8_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN8_PAD_PULL_MASK) >> WLAN_GPIO_PIN8_PAD_PULL_LSB)
#define WLAN_GPIO_PIN8_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN8_PAD_PULL_LSB) & WLAN_GPIO_PIN8_PAD_PULL_MASK)
#define WLAN_GPIO_PIN8_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN8_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN8_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN8_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN8_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN8_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN8_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN8_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN8_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN8_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN8_PAD_STRENGTH_RESET                                      0x0
#define WLAN_GPIO_PIN8_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN8_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN8_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN8_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN8_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN8_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN8_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN8_PAD_DRIVER_LSB) & WLAN_GPIO_PIN8_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN8_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN8_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN8_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN8_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN8_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN8_SOURCE_MASK) >> WLAN_GPIO_PIN8_SOURCE_LSB)
#define WLAN_GPIO_PIN8_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN8_SOURCE_LSB) & WLAN_GPIO_PIN8_SOURCE_MASK)
#define WLAN_GPIO_PIN8_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN8_ADDRESS                                                 (0x70 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN8_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN8_RESET                                                   0x40

// 0x74 (WLAN_GPIO_PIN9)
#define WLAN_GPIO_PIN9_PAD_ENST_LSB                                            15
#define WLAN_GPIO_PIN9_PAD_ENST_MSB                                            15
#define WLAN_GPIO_PIN9_PAD_ENST_MASK                                           0x8000
#define WLAN_GPIO_PIN9_PAD_ENST_GET(x)                                         (((x) & WLAN_GPIO_PIN9_PAD_ENST_MASK) >> WLAN_GPIO_PIN9_PAD_ENST_LSB)
#define WLAN_GPIO_PIN9_PAD_ENST_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN9_PAD_ENST_LSB) & WLAN_GPIO_PIN9_PAD_ENST_MASK)
#define WLAN_GPIO_PIN9_PAD_ENST_RESET                                          0x0
#define WLAN_GPIO_PIN9_CONFIG_LSB                                              11
#define WLAN_GPIO_PIN9_CONFIG_MSB                                              14
#define WLAN_GPIO_PIN9_CONFIG_MASK                                             0x7800
#define WLAN_GPIO_PIN9_CONFIG_GET(x)                                           (((x) & WLAN_GPIO_PIN9_CONFIG_MASK) >> WLAN_GPIO_PIN9_CONFIG_LSB)
#define WLAN_GPIO_PIN9_CONFIG_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN9_CONFIG_LSB) & WLAN_GPIO_PIN9_CONFIG_MASK)
#define WLAN_GPIO_PIN9_CONFIG_RESET                                            0x0
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_LSB                                       10
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_MSB                                       10
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_MASK                                      0x400
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_GET(x)                                    (((x) & WLAN_GPIO_PIN9_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN9_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN9_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN9_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN9_WAKEUP_ENABLE_RESET                                     0x0
#define WLAN_GPIO_PIN9_INT_TYPE_LSB                                            7
#define WLAN_GPIO_PIN9_INT_TYPE_MSB                                            9
#define WLAN_GPIO_PIN9_INT_TYPE_MASK                                           0x380
#define WLAN_GPIO_PIN9_INT_TYPE_GET(x)                                         (((x) & WLAN_GPIO_PIN9_INT_TYPE_MASK) >> WLAN_GPIO_PIN9_INT_TYPE_LSB)
#define WLAN_GPIO_PIN9_INT_TYPE_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN9_INT_TYPE_LSB) & WLAN_GPIO_PIN9_INT_TYPE_MASK)
#define WLAN_GPIO_PIN9_INT_TYPE_RESET                                          0x0
#define WLAN_GPIO_PIN9_PAD_PULL_LSB                                            5
#define WLAN_GPIO_PIN9_PAD_PULL_MSB                                            6
#define WLAN_GPIO_PIN9_PAD_PULL_MASK                                           0x60
#define WLAN_GPIO_PIN9_PAD_PULL_GET(x)                                         (((x) & WLAN_GPIO_PIN9_PAD_PULL_MASK) >> WLAN_GPIO_PIN9_PAD_PULL_LSB)
#define WLAN_GPIO_PIN9_PAD_PULL_SET(x)                                         (((0 | (x)) << WLAN_GPIO_PIN9_PAD_PULL_LSB) & WLAN_GPIO_PIN9_PAD_PULL_MASK)
#define WLAN_GPIO_PIN9_PAD_PULL_RESET                                          0x2
#define WLAN_GPIO_PIN9_PAD_STRENGTH_LSB                                        3
#define WLAN_GPIO_PIN9_PAD_STRENGTH_MSB                                        4
#define WLAN_GPIO_PIN9_PAD_STRENGTH_MASK                                       0x18
#define WLAN_GPIO_PIN9_PAD_STRENGTH_GET(x)                                     (((x) & WLAN_GPIO_PIN9_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN9_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN9_PAD_STRENGTH_SET(x)                                     (((0 | (x)) << WLAN_GPIO_PIN9_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN9_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN9_PAD_STRENGTH_RESET                                      0x0
#define WLAN_GPIO_PIN9_PAD_DRIVER_LSB                                          2
#define WLAN_GPIO_PIN9_PAD_DRIVER_MSB                                          2
#define WLAN_GPIO_PIN9_PAD_DRIVER_MASK                                         0x4
#define WLAN_GPIO_PIN9_PAD_DRIVER_GET(x)                                       (((x) & WLAN_GPIO_PIN9_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN9_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN9_PAD_DRIVER_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PIN9_PAD_DRIVER_LSB) & WLAN_GPIO_PIN9_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN9_PAD_DRIVER_RESET                                        0x0
#define WLAN_GPIO_PIN9_SOURCE_LSB                                              0
#define WLAN_GPIO_PIN9_SOURCE_MSB                                              0
#define WLAN_GPIO_PIN9_SOURCE_MASK                                             0x1
#define WLAN_GPIO_PIN9_SOURCE_GET(x)                                           (((x) & WLAN_GPIO_PIN9_SOURCE_MASK) >> WLAN_GPIO_PIN9_SOURCE_LSB)
#define WLAN_GPIO_PIN9_SOURCE_SET(x)                                           (((0 | (x)) << WLAN_GPIO_PIN9_SOURCE_LSB) & WLAN_GPIO_PIN9_SOURCE_MASK)
#define WLAN_GPIO_PIN9_SOURCE_RESET                                            0x0
#define WLAN_GPIO_PIN9_ADDRESS                                                 (0x74 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN9_RSTMASK                                                 0xfffd
#define WLAN_GPIO_PIN9_RESET                                                   0x40

// 0x78 (WLAN_GPIO_PIN10)
#define WLAN_GPIO_PIN10_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN10_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN10_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN10_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN10_PAD_ENST_MASK) >> WLAN_GPIO_PIN10_PAD_ENST_LSB)
#define WLAN_GPIO_PIN10_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN10_PAD_ENST_LSB) & WLAN_GPIO_PIN10_PAD_ENST_MASK)
#define WLAN_GPIO_PIN10_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN10_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN10_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN10_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN10_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN10_CONFIG_MASK) >> WLAN_GPIO_PIN10_CONFIG_LSB)
#define WLAN_GPIO_PIN10_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN10_CONFIG_LSB) & WLAN_GPIO_PIN10_CONFIG_MASK)
#define WLAN_GPIO_PIN10_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN10_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN10_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN10_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN10_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN10_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN10_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN10_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN10_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN10_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN10_INT_TYPE_MASK) >> WLAN_GPIO_PIN10_INT_TYPE_LSB)
#define WLAN_GPIO_PIN10_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN10_INT_TYPE_LSB) & WLAN_GPIO_PIN10_INT_TYPE_MASK)
#define WLAN_GPIO_PIN10_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN10_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN10_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN10_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN10_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN10_PAD_PULL_MASK) >> WLAN_GPIO_PIN10_PAD_PULL_LSB)
#define WLAN_GPIO_PIN10_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN10_PAD_PULL_LSB) & WLAN_GPIO_PIN10_PAD_PULL_MASK)
#define WLAN_GPIO_PIN10_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN10_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN10_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN10_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN10_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN10_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN10_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN10_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN10_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN10_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN10_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN10_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN10_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN10_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN10_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN10_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN10_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN10_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN10_PAD_DRIVER_LSB) & WLAN_GPIO_PIN10_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN10_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN10_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN10_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN10_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN10_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN10_SOURCE_MASK) >> WLAN_GPIO_PIN10_SOURCE_LSB)
#define WLAN_GPIO_PIN10_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN10_SOURCE_LSB) & WLAN_GPIO_PIN10_SOURCE_MASK)
#define WLAN_GPIO_PIN10_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN10_ADDRESS                                                (0x78 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN10_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN10_RESET                                                  0x40

// 0x7c (WLAN_GPIO_PIN11)
#define WLAN_GPIO_PIN11_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN11_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN11_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN11_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN11_PAD_ENST_MASK) >> WLAN_GPIO_PIN11_PAD_ENST_LSB)
#define WLAN_GPIO_PIN11_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN11_PAD_ENST_LSB) & WLAN_GPIO_PIN11_PAD_ENST_MASK)
#define WLAN_GPIO_PIN11_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN11_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN11_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN11_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN11_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN11_CONFIG_MASK) >> WLAN_GPIO_PIN11_CONFIG_LSB)
#define WLAN_GPIO_PIN11_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN11_CONFIG_LSB) & WLAN_GPIO_PIN11_CONFIG_MASK)
#define WLAN_GPIO_PIN11_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN11_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN11_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN11_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN11_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN11_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN11_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN11_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN11_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN11_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN11_INT_TYPE_MASK) >> WLAN_GPIO_PIN11_INT_TYPE_LSB)
#define WLAN_GPIO_PIN11_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN11_INT_TYPE_LSB) & WLAN_GPIO_PIN11_INT_TYPE_MASK)
#define WLAN_GPIO_PIN11_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN11_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN11_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN11_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN11_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN11_PAD_PULL_MASK) >> WLAN_GPIO_PIN11_PAD_PULL_LSB)
#define WLAN_GPIO_PIN11_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN11_PAD_PULL_LSB) & WLAN_GPIO_PIN11_PAD_PULL_MASK)
#define WLAN_GPIO_PIN11_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN11_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN11_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN11_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN11_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN11_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN11_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN11_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN11_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN11_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN11_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN11_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN11_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN11_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN11_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN11_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN11_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN11_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN11_PAD_DRIVER_LSB) & WLAN_GPIO_PIN11_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN11_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN11_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN11_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN11_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN11_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN11_SOURCE_MASK) >> WLAN_GPIO_PIN11_SOURCE_LSB)
#define WLAN_GPIO_PIN11_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN11_SOURCE_LSB) & WLAN_GPIO_PIN11_SOURCE_MASK)
#define WLAN_GPIO_PIN11_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN11_ADDRESS                                                (0x7c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN11_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN11_RESET                                                  0x40

// 0x80 (WLAN_GPIO_PIN12)
#define WLAN_GPIO_PIN12_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN12_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN12_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN12_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN12_PAD_ENST_MASK) >> WLAN_GPIO_PIN12_PAD_ENST_LSB)
#define WLAN_GPIO_PIN12_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN12_PAD_ENST_LSB) & WLAN_GPIO_PIN12_PAD_ENST_MASK)
#define WLAN_GPIO_PIN12_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN12_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN12_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN12_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN12_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN12_CONFIG_MASK) >> WLAN_GPIO_PIN12_CONFIG_LSB)
#define WLAN_GPIO_PIN12_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN12_CONFIG_LSB) & WLAN_GPIO_PIN12_CONFIG_MASK)
#define WLAN_GPIO_PIN12_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN12_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN12_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN12_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN12_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN12_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN12_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN12_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN12_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN12_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN12_INT_TYPE_MASK) >> WLAN_GPIO_PIN12_INT_TYPE_LSB)
#define WLAN_GPIO_PIN12_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN12_INT_TYPE_LSB) & WLAN_GPIO_PIN12_INT_TYPE_MASK)
#define WLAN_GPIO_PIN12_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN12_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN12_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN12_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN12_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN12_PAD_PULL_MASK) >> WLAN_GPIO_PIN12_PAD_PULL_LSB)
#define WLAN_GPIO_PIN12_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN12_PAD_PULL_LSB) & WLAN_GPIO_PIN12_PAD_PULL_MASK)
#define WLAN_GPIO_PIN12_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN12_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN12_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN12_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN12_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN12_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN12_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN12_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN12_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN12_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN12_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN12_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN12_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN12_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN12_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN12_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN12_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN12_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN12_PAD_DRIVER_LSB) & WLAN_GPIO_PIN12_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN12_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN12_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN12_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN12_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN12_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN12_SOURCE_MASK) >> WLAN_GPIO_PIN12_SOURCE_LSB)
#define WLAN_GPIO_PIN12_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN12_SOURCE_LSB) & WLAN_GPIO_PIN12_SOURCE_MASK)
#define WLAN_GPIO_PIN12_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN12_ADDRESS                                                (0x80 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN12_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN12_RESET                                                  0x20

// 0x84 (WLAN_GPIO_PIN13)
#define WLAN_GPIO_PIN13_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN13_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN13_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN13_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN13_PAD_ENST_MASK) >> WLAN_GPIO_PIN13_PAD_ENST_LSB)
#define WLAN_GPIO_PIN13_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN13_PAD_ENST_LSB) & WLAN_GPIO_PIN13_PAD_ENST_MASK)
#define WLAN_GPIO_PIN13_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN13_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN13_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN13_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN13_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN13_CONFIG_MASK) >> WLAN_GPIO_PIN13_CONFIG_LSB)
#define WLAN_GPIO_PIN13_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN13_CONFIG_LSB) & WLAN_GPIO_PIN13_CONFIG_MASK)
#define WLAN_GPIO_PIN13_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN13_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN13_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN13_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN13_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN13_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN13_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN13_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN13_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN13_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN13_INT_TYPE_MASK) >> WLAN_GPIO_PIN13_INT_TYPE_LSB)
#define WLAN_GPIO_PIN13_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN13_INT_TYPE_LSB) & WLAN_GPIO_PIN13_INT_TYPE_MASK)
#define WLAN_GPIO_PIN13_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN13_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN13_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN13_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN13_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN13_PAD_PULL_MASK) >> WLAN_GPIO_PIN13_PAD_PULL_LSB)
#define WLAN_GPIO_PIN13_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN13_PAD_PULL_LSB) & WLAN_GPIO_PIN13_PAD_PULL_MASK)
#define WLAN_GPIO_PIN13_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN13_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN13_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN13_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN13_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN13_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN13_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN13_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN13_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN13_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN13_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN13_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN13_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN13_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN13_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN13_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN13_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN13_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN13_PAD_DRIVER_LSB) & WLAN_GPIO_PIN13_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN13_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN13_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN13_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN13_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN13_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN13_SOURCE_MASK) >> WLAN_GPIO_PIN13_SOURCE_LSB)
#define WLAN_GPIO_PIN13_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN13_SOURCE_LSB) & WLAN_GPIO_PIN13_SOURCE_MASK)
#define WLAN_GPIO_PIN13_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN13_ADDRESS                                                (0x84 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN13_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN13_RESET                                                  0x20

// 0x88 (WLAN_GPIO_PIN14)
#define WLAN_GPIO_PIN14_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN14_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN14_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN14_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN14_PAD_ENST_MASK) >> WLAN_GPIO_PIN14_PAD_ENST_LSB)
#define WLAN_GPIO_PIN14_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN14_PAD_ENST_LSB) & WLAN_GPIO_PIN14_PAD_ENST_MASK)
#define WLAN_GPIO_PIN14_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN14_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN14_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN14_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN14_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN14_CONFIG_MASK) >> WLAN_GPIO_PIN14_CONFIG_LSB)
#define WLAN_GPIO_PIN14_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN14_CONFIG_LSB) & WLAN_GPIO_PIN14_CONFIG_MASK)
#define WLAN_GPIO_PIN14_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN14_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN14_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN14_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN14_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN14_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN14_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN14_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN14_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN14_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN14_INT_TYPE_MASK) >> WLAN_GPIO_PIN14_INT_TYPE_LSB)
#define WLAN_GPIO_PIN14_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN14_INT_TYPE_LSB) & WLAN_GPIO_PIN14_INT_TYPE_MASK)
#define WLAN_GPIO_PIN14_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN14_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN14_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN14_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN14_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN14_PAD_PULL_MASK) >> WLAN_GPIO_PIN14_PAD_PULL_LSB)
#define WLAN_GPIO_PIN14_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN14_PAD_PULL_LSB) & WLAN_GPIO_PIN14_PAD_PULL_MASK)
#define WLAN_GPIO_PIN14_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN14_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN14_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN14_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN14_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN14_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN14_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN14_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN14_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN14_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN14_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN14_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN14_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN14_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN14_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN14_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN14_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN14_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN14_PAD_DRIVER_LSB) & WLAN_GPIO_PIN14_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN14_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN14_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN14_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN14_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN14_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN14_SOURCE_MASK) >> WLAN_GPIO_PIN14_SOURCE_LSB)
#define WLAN_GPIO_PIN14_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN14_SOURCE_LSB) & WLAN_GPIO_PIN14_SOURCE_MASK)
#define WLAN_GPIO_PIN14_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN14_ADDRESS                                                (0x88 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN14_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN14_RESET                                                  0x40

// 0x8c (WLAN_GPIO_PIN15)
#define WLAN_GPIO_PIN15_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN15_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN15_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN15_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN15_PAD_ENST_MASK) >> WLAN_GPIO_PIN15_PAD_ENST_LSB)
#define WLAN_GPIO_PIN15_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN15_PAD_ENST_LSB) & WLAN_GPIO_PIN15_PAD_ENST_MASK)
#define WLAN_GPIO_PIN15_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN15_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN15_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN15_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN15_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN15_CONFIG_MASK) >> WLAN_GPIO_PIN15_CONFIG_LSB)
#define WLAN_GPIO_PIN15_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN15_CONFIG_LSB) & WLAN_GPIO_PIN15_CONFIG_MASK)
#define WLAN_GPIO_PIN15_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN15_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN15_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN15_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN15_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN15_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN15_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN15_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN15_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN15_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN15_INT_TYPE_MASK) >> WLAN_GPIO_PIN15_INT_TYPE_LSB)
#define WLAN_GPIO_PIN15_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN15_INT_TYPE_LSB) & WLAN_GPIO_PIN15_INT_TYPE_MASK)
#define WLAN_GPIO_PIN15_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN15_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN15_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN15_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN15_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN15_PAD_PULL_MASK) >> WLAN_GPIO_PIN15_PAD_PULL_LSB)
#define WLAN_GPIO_PIN15_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN15_PAD_PULL_LSB) & WLAN_GPIO_PIN15_PAD_PULL_MASK)
#define WLAN_GPIO_PIN15_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN15_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN15_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN15_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN15_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN15_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN15_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN15_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN15_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN15_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN15_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN15_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN15_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN15_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN15_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN15_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN15_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN15_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN15_PAD_DRIVER_LSB) & WLAN_GPIO_PIN15_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN15_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN15_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN15_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN15_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN15_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN15_SOURCE_MASK) >> WLAN_GPIO_PIN15_SOURCE_LSB)
#define WLAN_GPIO_PIN15_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN15_SOURCE_LSB) & WLAN_GPIO_PIN15_SOURCE_MASK)
#define WLAN_GPIO_PIN15_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN15_ADDRESS                                                (0x8c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN15_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN15_RESET                                                  0x40

// 0x90 (WLAN_GPIO_PIN16)
#define WLAN_GPIO_PIN16_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN16_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN16_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN16_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN16_PAD_ENST_MASK) >> WLAN_GPIO_PIN16_PAD_ENST_LSB)
#define WLAN_GPIO_PIN16_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN16_PAD_ENST_LSB) & WLAN_GPIO_PIN16_PAD_ENST_MASK)
#define WLAN_GPIO_PIN16_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN16_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN16_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN16_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN16_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN16_CONFIG_MASK) >> WLAN_GPIO_PIN16_CONFIG_LSB)
#define WLAN_GPIO_PIN16_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN16_CONFIG_LSB) & WLAN_GPIO_PIN16_CONFIG_MASK)
#define WLAN_GPIO_PIN16_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN16_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN16_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN16_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN16_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN16_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN16_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN16_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN16_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN16_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN16_INT_TYPE_MASK) >> WLAN_GPIO_PIN16_INT_TYPE_LSB)
#define WLAN_GPIO_PIN16_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN16_INT_TYPE_LSB) & WLAN_GPIO_PIN16_INT_TYPE_MASK)
#define WLAN_GPIO_PIN16_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN16_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN16_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN16_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN16_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN16_PAD_PULL_MASK) >> WLAN_GPIO_PIN16_PAD_PULL_LSB)
#define WLAN_GPIO_PIN16_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN16_PAD_PULL_LSB) & WLAN_GPIO_PIN16_PAD_PULL_MASK)
#define WLAN_GPIO_PIN16_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN16_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN16_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN16_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN16_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN16_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN16_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN16_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN16_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN16_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN16_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN16_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN16_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN16_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN16_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN16_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN16_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN16_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN16_PAD_DRIVER_LSB) & WLAN_GPIO_PIN16_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN16_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN16_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN16_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN16_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN16_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN16_SOURCE_MASK) >> WLAN_GPIO_PIN16_SOURCE_LSB)
#define WLAN_GPIO_PIN16_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN16_SOURCE_LSB) & WLAN_GPIO_PIN16_SOURCE_MASK)
#define WLAN_GPIO_PIN16_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN16_ADDRESS                                                (0x90 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN16_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN16_RESET                                                  0x40

// 0x94 (WLAN_GPIO_PIN17)
#define WLAN_GPIO_PIN17_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN17_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN17_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN17_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN17_PAD_ENST_MASK) >> WLAN_GPIO_PIN17_PAD_ENST_LSB)
#define WLAN_GPIO_PIN17_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN17_PAD_ENST_LSB) & WLAN_GPIO_PIN17_PAD_ENST_MASK)
#define WLAN_GPIO_PIN17_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN17_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN17_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN17_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN17_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN17_CONFIG_MASK) >> WLAN_GPIO_PIN17_CONFIG_LSB)
#define WLAN_GPIO_PIN17_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN17_CONFIG_LSB) & WLAN_GPIO_PIN17_CONFIG_MASK)
#define WLAN_GPIO_PIN17_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN17_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN17_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN17_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN17_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN17_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN17_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN17_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN17_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN17_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN17_INT_TYPE_MASK) >> WLAN_GPIO_PIN17_INT_TYPE_LSB)
#define WLAN_GPIO_PIN17_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN17_INT_TYPE_LSB) & WLAN_GPIO_PIN17_INT_TYPE_MASK)
#define WLAN_GPIO_PIN17_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN17_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN17_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN17_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN17_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN17_PAD_PULL_MASK) >> WLAN_GPIO_PIN17_PAD_PULL_LSB)
#define WLAN_GPIO_PIN17_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN17_PAD_PULL_LSB) & WLAN_GPIO_PIN17_PAD_PULL_MASK)
#define WLAN_GPIO_PIN17_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN17_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN17_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN17_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN17_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN17_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN17_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN17_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN17_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN17_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN17_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN17_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN17_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN17_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN17_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN17_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN17_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN17_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN17_PAD_DRIVER_LSB) & WLAN_GPIO_PIN17_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN17_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN17_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN17_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN17_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN17_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN17_SOURCE_MASK) >> WLAN_GPIO_PIN17_SOURCE_LSB)
#define WLAN_GPIO_PIN17_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN17_SOURCE_LSB) & WLAN_GPIO_PIN17_SOURCE_MASK)
#define WLAN_GPIO_PIN17_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN17_ADDRESS                                                (0x94 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN17_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN17_RESET                                                  0x40

// 0x98 (WLAN_GPIO_PIN18)
#define WLAN_GPIO_PIN18_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN18_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN18_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN18_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN18_PAD_ENST_MASK) >> WLAN_GPIO_PIN18_PAD_ENST_LSB)
#define WLAN_GPIO_PIN18_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN18_PAD_ENST_LSB) & WLAN_GPIO_PIN18_PAD_ENST_MASK)
#define WLAN_GPIO_PIN18_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN18_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN18_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN18_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN18_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN18_CONFIG_MASK) >> WLAN_GPIO_PIN18_CONFIG_LSB)
#define WLAN_GPIO_PIN18_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN18_CONFIG_LSB) & WLAN_GPIO_PIN18_CONFIG_MASK)
#define WLAN_GPIO_PIN18_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN18_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN18_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN18_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN18_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN18_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN18_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN18_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN18_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN18_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN18_INT_TYPE_MASK) >> WLAN_GPIO_PIN18_INT_TYPE_LSB)
#define WLAN_GPIO_PIN18_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN18_INT_TYPE_LSB) & WLAN_GPIO_PIN18_INT_TYPE_MASK)
#define WLAN_GPIO_PIN18_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN18_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN18_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN18_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN18_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN18_PAD_PULL_MASK) >> WLAN_GPIO_PIN18_PAD_PULL_LSB)
#define WLAN_GPIO_PIN18_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN18_PAD_PULL_LSB) & WLAN_GPIO_PIN18_PAD_PULL_MASK)
#define WLAN_GPIO_PIN18_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN18_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN18_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN18_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN18_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN18_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN18_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN18_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN18_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN18_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN18_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN18_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN18_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN18_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN18_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN18_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN18_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN18_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN18_PAD_DRIVER_LSB) & WLAN_GPIO_PIN18_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN18_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN18_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN18_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN18_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN18_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN18_SOURCE_MASK) >> WLAN_GPIO_PIN18_SOURCE_LSB)
#define WLAN_GPIO_PIN18_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN18_SOURCE_LSB) & WLAN_GPIO_PIN18_SOURCE_MASK)
#define WLAN_GPIO_PIN18_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN18_ADDRESS                                                (0x98 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN18_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN18_RESET                                                  0x40

// 0x9c (WLAN_GPIO_PIN19)
#define WLAN_GPIO_PIN19_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN19_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN19_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN19_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN19_PAD_ENST_MASK) >> WLAN_GPIO_PIN19_PAD_ENST_LSB)
#define WLAN_GPIO_PIN19_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN19_PAD_ENST_LSB) & WLAN_GPIO_PIN19_PAD_ENST_MASK)
#define WLAN_GPIO_PIN19_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN19_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN19_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN19_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN19_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN19_CONFIG_MASK) >> WLAN_GPIO_PIN19_CONFIG_LSB)
#define WLAN_GPIO_PIN19_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN19_CONFIG_LSB) & WLAN_GPIO_PIN19_CONFIG_MASK)
#define WLAN_GPIO_PIN19_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN19_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN19_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN19_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN19_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN19_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN19_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN19_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN19_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN19_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN19_INT_TYPE_MASK) >> WLAN_GPIO_PIN19_INT_TYPE_LSB)
#define WLAN_GPIO_PIN19_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN19_INT_TYPE_LSB) & WLAN_GPIO_PIN19_INT_TYPE_MASK)
#define WLAN_GPIO_PIN19_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN19_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN19_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN19_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN19_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN19_PAD_PULL_MASK) >> WLAN_GPIO_PIN19_PAD_PULL_LSB)
#define WLAN_GPIO_PIN19_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN19_PAD_PULL_LSB) & WLAN_GPIO_PIN19_PAD_PULL_MASK)
#define WLAN_GPIO_PIN19_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN19_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN19_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN19_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN19_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN19_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN19_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN19_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN19_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN19_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN19_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN19_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN19_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN19_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN19_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN19_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN19_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN19_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN19_PAD_DRIVER_LSB) & WLAN_GPIO_PIN19_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN19_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN19_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN19_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN19_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN19_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN19_SOURCE_MASK) >> WLAN_GPIO_PIN19_SOURCE_LSB)
#define WLAN_GPIO_PIN19_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN19_SOURCE_LSB) & WLAN_GPIO_PIN19_SOURCE_MASK)
#define WLAN_GPIO_PIN19_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN19_ADDRESS                                                (0x9c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN19_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN19_RESET                                                  0x40

// 0xa0 (WLAN_GPIO_PIN20)
#define WLAN_GPIO_PIN20_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN20_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN20_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN20_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN20_PAD_ENST_MASK) >> WLAN_GPIO_PIN20_PAD_ENST_LSB)
#define WLAN_GPIO_PIN20_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN20_PAD_ENST_LSB) & WLAN_GPIO_PIN20_PAD_ENST_MASK)
#define WLAN_GPIO_PIN20_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN20_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN20_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN20_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN20_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN20_CONFIG_MASK) >> WLAN_GPIO_PIN20_CONFIG_LSB)
#define WLAN_GPIO_PIN20_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN20_CONFIG_LSB) & WLAN_GPIO_PIN20_CONFIG_MASK)
#define WLAN_GPIO_PIN20_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN20_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN20_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN20_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN20_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN20_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN20_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN20_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN20_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN20_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN20_INT_TYPE_MASK) >> WLAN_GPIO_PIN20_INT_TYPE_LSB)
#define WLAN_GPIO_PIN20_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN20_INT_TYPE_LSB) & WLAN_GPIO_PIN20_INT_TYPE_MASK)
#define WLAN_GPIO_PIN20_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN20_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN20_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN20_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN20_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN20_PAD_PULL_MASK) >> WLAN_GPIO_PIN20_PAD_PULL_LSB)
#define WLAN_GPIO_PIN20_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN20_PAD_PULL_LSB) & WLAN_GPIO_PIN20_PAD_PULL_MASK)
#define WLAN_GPIO_PIN20_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN20_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN20_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN20_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN20_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN20_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN20_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN20_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN20_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN20_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN20_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN20_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN20_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN20_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN20_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN20_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN20_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN20_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN20_PAD_DRIVER_LSB) & WLAN_GPIO_PIN20_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN20_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN20_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN20_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN20_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN20_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN20_SOURCE_MASK) >> WLAN_GPIO_PIN20_SOURCE_LSB)
#define WLAN_GPIO_PIN20_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN20_SOURCE_LSB) & WLAN_GPIO_PIN20_SOURCE_MASK)
#define WLAN_GPIO_PIN20_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN20_ADDRESS                                                (0xa0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN20_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN20_RESET                                                  0x20

// 0xa4 (WLAN_GPIO_PIN21)
#define WLAN_GPIO_PIN21_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN21_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN21_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN21_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN21_PAD_ENST_MASK) >> WLAN_GPIO_PIN21_PAD_ENST_LSB)
#define WLAN_GPIO_PIN21_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN21_PAD_ENST_LSB) & WLAN_GPIO_PIN21_PAD_ENST_MASK)
#define WLAN_GPIO_PIN21_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN21_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN21_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN21_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN21_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN21_CONFIG_MASK) >> WLAN_GPIO_PIN21_CONFIG_LSB)
#define WLAN_GPIO_PIN21_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN21_CONFIG_LSB) & WLAN_GPIO_PIN21_CONFIG_MASK)
#define WLAN_GPIO_PIN21_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN21_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN21_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN21_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN21_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN21_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN21_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN21_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN21_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN21_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN21_INT_TYPE_MASK) >> WLAN_GPIO_PIN21_INT_TYPE_LSB)
#define WLAN_GPIO_PIN21_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN21_INT_TYPE_LSB) & WLAN_GPIO_PIN21_INT_TYPE_MASK)
#define WLAN_GPIO_PIN21_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN21_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN21_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN21_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN21_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN21_PAD_PULL_MASK) >> WLAN_GPIO_PIN21_PAD_PULL_LSB)
#define WLAN_GPIO_PIN21_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN21_PAD_PULL_LSB) & WLAN_GPIO_PIN21_PAD_PULL_MASK)
#define WLAN_GPIO_PIN21_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN21_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN21_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN21_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN21_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN21_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN21_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN21_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN21_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN21_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN21_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN21_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN21_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN21_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN21_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN21_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN21_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN21_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN21_PAD_DRIVER_LSB) & WLAN_GPIO_PIN21_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN21_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN21_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN21_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN21_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN21_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN21_SOURCE_MASK) >> WLAN_GPIO_PIN21_SOURCE_LSB)
#define WLAN_GPIO_PIN21_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN21_SOURCE_LSB) & WLAN_GPIO_PIN21_SOURCE_MASK)
#define WLAN_GPIO_PIN21_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN21_ADDRESS                                                (0xa4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN21_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN21_RESET                                                  0x20

// 0xa8 (WLAN_GPIO_PIN22)
#define WLAN_GPIO_PIN22_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN22_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN22_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN22_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN22_PAD_ENST_MASK) >> WLAN_GPIO_PIN22_PAD_ENST_LSB)
#define WLAN_GPIO_PIN22_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN22_PAD_ENST_LSB) & WLAN_GPIO_PIN22_PAD_ENST_MASK)
#define WLAN_GPIO_PIN22_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN22_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN22_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN22_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN22_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN22_CONFIG_MASK) >> WLAN_GPIO_PIN22_CONFIG_LSB)
#define WLAN_GPIO_PIN22_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN22_CONFIG_LSB) & WLAN_GPIO_PIN22_CONFIG_MASK)
#define WLAN_GPIO_PIN22_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN22_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN22_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN22_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN22_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN22_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN22_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN22_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN22_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN22_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN22_INT_TYPE_MASK) >> WLAN_GPIO_PIN22_INT_TYPE_LSB)
#define WLAN_GPIO_PIN22_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN22_INT_TYPE_LSB) & WLAN_GPIO_PIN22_INT_TYPE_MASK)
#define WLAN_GPIO_PIN22_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN22_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN22_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN22_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN22_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN22_PAD_PULL_MASK) >> WLAN_GPIO_PIN22_PAD_PULL_LSB)
#define WLAN_GPIO_PIN22_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN22_PAD_PULL_LSB) & WLAN_GPIO_PIN22_PAD_PULL_MASK)
#define WLAN_GPIO_PIN22_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN22_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN22_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN22_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN22_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN22_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN22_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN22_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN22_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN22_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN22_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN22_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN22_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN22_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN22_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN22_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN22_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN22_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN22_PAD_DRIVER_LSB) & WLAN_GPIO_PIN22_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN22_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN22_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN22_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN22_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN22_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN22_SOURCE_MASK) >> WLAN_GPIO_PIN22_SOURCE_LSB)
#define WLAN_GPIO_PIN22_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN22_SOURCE_LSB) & WLAN_GPIO_PIN22_SOURCE_MASK)
#define WLAN_GPIO_PIN22_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN22_ADDRESS                                                (0xa8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN22_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN22_RESET                                                  0x20

// 0xac (WLAN_GPIO_PIN23)
#define WLAN_GPIO_PIN23_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN23_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN23_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN23_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN23_PAD_ENST_MASK) >> WLAN_GPIO_PIN23_PAD_ENST_LSB)
#define WLAN_GPIO_PIN23_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN23_PAD_ENST_LSB) & WLAN_GPIO_PIN23_PAD_ENST_MASK)
#define WLAN_GPIO_PIN23_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN23_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN23_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN23_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN23_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN23_CONFIG_MASK) >> WLAN_GPIO_PIN23_CONFIG_LSB)
#define WLAN_GPIO_PIN23_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN23_CONFIG_LSB) & WLAN_GPIO_PIN23_CONFIG_MASK)
#define WLAN_GPIO_PIN23_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN23_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN23_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN23_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN23_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN23_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN23_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN23_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN23_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN23_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN23_INT_TYPE_MASK) >> WLAN_GPIO_PIN23_INT_TYPE_LSB)
#define WLAN_GPIO_PIN23_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN23_INT_TYPE_LSB) & WLAN_GPIO_PIN23_INT_TYPE_MASK)
#define WLAN_GPIO_PIN23_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN23_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN23_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN23_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN23_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN23_PAD_PULL_MASK) >> WLAN_GPIO_PIN23_PAD_PULL_LSB)
#define WLAN_GPIO_PIN23_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN23_PAD_PULL_LSB) & WLAN_GPIO_PIN23_PAD_PULL_MASK)
#define WLAN_GPIO_PIN23_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN23_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN23_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN23_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN23_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN23_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN23_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN23_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN23_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN23_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN23_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN23_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN23_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN23_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN23_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN23_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN23_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN23_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN23_PAD_DRIVER_LSB) & WLAN_GPIO_PIN23_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN23_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN23_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN23_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN23_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN23_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN23_SOURCE_MASK) >> WLAN_GPIO_PIN23_SOURCE_LSB)
#define WLAN_GPIO_PIN23_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN23_SOURCE_LSB) & WLAN_GPIO_PIN23_SOURCE_MASK)
#define WLAN_GPIO_PIN23_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN23_ADDRESS                                                (0xac + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN23_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN23_RESET                                                  0x40

// 0xb0 (WLAN_GPIO_PIN24)
#define WLAN_GPIO_PIN24_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN24_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN24_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN24_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN24_PAD_ENST_MASK) >> WLAN_GPIO_PIN24_PAD_ENST_LSB)
#define WLAN_GPIO_PIN24_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN24_PAD_ENST_LSB) & WLAN_GPIO_PIN24_PAD_ENST_MASK)
#define WLAN_GPIO_PIN24_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN24_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN24_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN24_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN24_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN24_CONFIG_MASK) >> WLAN_GPIO_PIN24_CONFIG_LSB)
#define WLAN_GPIO_PIN24_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN24_CONFIG_LSB) & WLAN_GPIO_PIN24_CONFIG_MASK)
#define WLAN_GPIO_PIN24_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN24_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN24_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN24_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN24_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN24_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN24_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN24_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN24_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN24_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN24_INT_TYPE_MASK) >> WLAN_GPIO_PIN24_INT_TYPE_LSB)
#define WLAN_GPIO_PIN24_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN24_INT_TYPE_LSB) & WLAN_GPIO_PIN24_INT_TYPE_MASK)
#define WLAN_GPIO_PIN24_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN24_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN24_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN24_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN24_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN24_PAD_PULL_MASK) >> WLAN_GPIO_PIN24_PAD_PULL_LSB)
#define WLAN_GPIO_PIN24_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN24_PAD_PULL_LSB) & WLAN_GPIO_PIN24_PAD_PULL_MASK)
#define WLAN_GPIO_PIN24_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN24_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN24_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN24_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN24_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN24_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN24_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN24_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN24_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN24_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN24_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN24_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN24_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN24_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN24_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN24_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN24_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN24_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN24_PAD_DRIVER_LSB) & WLAN_GPIO_PIN24_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN24_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN24_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN24_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN24_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN24_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN24_SOURCE_MASK) >> WLAN_GPIO_PIN24_SOURCE_LSB)
#define WLAN_GPIO_PIN24_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN24_SOURCE_LSB) & WLAN_GPIO_PIN24_SOURCE_MASK)
#define WLAN_GPIO_PIN24_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN24_ADDRESS                                                (0xb0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN24_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN24_RESET                                                  0x40

// 0xb4 (WLAN_GPIO_PIN25)
#define WLAN_GPIO_PIN25_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN25_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN25_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN25_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN25_PAD_ENST_MASK) >> WLAN_GPIO_PIN25_PAD_ENST_LSB)
#define WLAN_GPIO_PIN25_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN25_PAD_ENST_LSB) & WLAN_GPIO_PIN25_PAD_ENST_MASK)
#define WLAN_GPIO_PIN25_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN25_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN25_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN25_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN25_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN25_CONFIG_MASK) >> WLAN_GPIO_PIN25_CONFIG_LSB)
#define WLAN_GPIO_PIN25_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN25_CONFIG_LSB) & WLAN_GPIO_PIN25_CONFIG_MASK)
#define WLAN_GPIO_PIN25_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN25_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN25_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN25_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN25_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN25_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN25_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN25_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN25_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN25_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN25_INT_TYPE_MASK) >> WLAN_GPIO_PIN25_INT_TYPE_LSB)
#define WLAN_GPIO_PIN25_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN25_INT_TYPE_LSB) & WLAN_GPIO_PIN25_INT_TYPE_MASK)
#define WLAN_GPIO_PIN25_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN25_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN25_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN25_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN25_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN25_PAD_PULL_MASK) >> WLAN_GPIO_PIN25_PAD_PULL_LSB)
#define WLAN_GPIO_PIN25_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN25_PAD_PULL_LSB) & WLAN_GPIO_PIN25_PAD_PULL_MASK)
#define WLAN_GPIO_PIN25_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN25_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN25_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN25_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN25_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN25_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN25_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN25_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN25_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN25_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN25_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN25_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN25_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN25_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN25_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN25_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN25_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN25_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN25_PAD_DRIVER_LSB) & WLAN_GPIO_PIN25_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN25_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN25_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN25_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN25_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN25_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN25_SOURCE_MASK) >> WLAN_GPIO_PIN25_SOURCE_LSB)
#define WLAN_GPIO_PIN25_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN25_SOURCE_LSB) & WLAN_GPIO_PIN25_SOURCE_MASK)
#define WLAN_GPIO_PIN25_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN25_ADDRESS                                                (0xb4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN25_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN25_RESET                                                  0x40

// 0xb8 (WLAN_GPIO_PIN26)
#define WLAN_GPIO_PIN26_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN26_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN26_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN26_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN26_PAD_ENST_MASK) >> WLAN_GPIO_PIN26_PAD_ENST_LSB)
#define WLAN_GPIO_PIN26_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN26_PAD_ENST_LSB) & WLAN_GPIO_PIN26_PAD_ENST_MASK)
#define WLAN_GPIO_PIN26_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN26_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN26_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN26_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN26_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN26_CONFIG_MASK) >> WLAN_GPIO_PIN26_CONFIG_LSB)
#define WLAN_GPIO_PIN26_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN26_CONFIG_LSB) & WLAN_GPIO_PIN26_CONFIG_MASK)
#define WLAN_GPIO_PIN26_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN26_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN26_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN26_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN26_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN26_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN26_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN26_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN26_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN26_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN26_INT_TYPE_MASK) >> WLAN_GPIO_PIN26_INT_TYPE_LSB)
#define WLAN_GPIO_PIN26_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN26_INT_TYPE_LSB) & WLAN_GPIO_PIN26_INT_TYPE_MASK)
#define WLAN_GPIO_PIN26_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN26_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN26_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN26_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN26_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN26_PAD_PULL_MASK) >> WLAN_GPIO_PIN26_PAD_PULL_LSB)
#define WLAN_GPIO_PIN26_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN26_PAD_PULL_LSB) & WLAN_GPIO_PIN26_PAD_PULL_MASK)
#define WLAN_GPIO_PIN26_PAD_PULL_RESET                                         0x1
#define WLAN_GPIO_PIN26_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN26_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN26_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN26_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN26_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN26_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN26_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN26_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN26_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN26_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN26_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN26_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN26_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN26_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN26_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN26_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN26_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN26_PAD_DRIVER_LSB) & WLAN_GPIO_PIN26_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN26_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN26_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN26_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN26_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN26_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN26_SOURCE_MASK) >> WLAN_GPIO_PIN26_SOURCE_LSB)
#define WLAN_GPIO_PIN26_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN26_SOURCE_LSB) & WLAN_GPIO_PIN26_SOURCE_MASK)
#define WLAN_GPIO_PIN26_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN26_ADDRESS                                                (0xb8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN26_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN26_RESET                                                  0x20

// 0xbc (WLAN_GPIO_PIN27)
#define WLAN_GPIO_PIN27_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN27_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN27_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN27_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN27_PAD_ENST_MASK) >> WLAN_GPIO_PIN27_PAD_ENST_LSB)
#define WLAN_GPIO_PIN27_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN27_PAD_ENST_LSB) & WLAN_GPIO_PIN27_PAD_ENST_MASK)
#define WLAN_GPIO_PIN27_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN27_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN27_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN27_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN27_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN27_CONFIG_MASK) >> WLAN_GPIO_PIN27_CONFIG_LSB)
#define WLAN_GPIO_PIN27_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN27_CONFIG_LSB) & WLAN_GPIO_PIN27_CONFIG_MASK)
#define WLAN_GPIO_PIN27_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN27_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN27_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN27_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN27_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN27_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN27_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN27_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN27_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN27_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN27_INT_TYPE_MASK) >> WLAN_GPIO_PIN27_INT_TYPE_LSB)
#define WLAN_GPIO_PIN27_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN27_INT_TYPE_LSB) & WLAN_GPIO_PIN27_INT_TYPE_MASK)
#define WLAN_GPIO_PIN27_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN27_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN27_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN27_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN27_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN27_PAD_PULL_MASK) >> WLAN_GPIO_PIN27_PAD_PULL_LSB)
#define WLAN_GPIO_PIN27_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN27_PAD_PULL_LSB) & WLAN_GPIO_PIN27_PAD_PULL_MASK)
#define WLAN_GPIO_PIN27_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN27_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN27_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN27_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN27_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN27_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN27_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN27_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN27_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN27_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN27_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN27_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN27_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN27_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN27_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN27_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN27_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN27_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN27_PAD_DRIVER_LSB) & WLAN_GPIO_PIN27_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN27_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN27_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN27_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN27_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN27_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN27_SOURCE_MASK) >> WLAN_GPIO_PIN27_SOURCE_LSB)
#define WLAN_GPIO_PIN27_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN27_SOURCE_LSB) & WLAN_GPIO_PIN27_SOURCE_MASK)
#define WLAN_GPIO_PIN27_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN27_ADDRESS                                                (0xbc + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN27_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN27_RESET                                                  0x40

// 0xc0 (WLAN_GPIO_PIN28)
#define WLAN_GPIO_PIN28_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN28_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN28_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN28_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN28_PAD_ENST_MASK) >> WLAN_GPIO_PIN28_PAD_ENST_LSB)
#define WLAN_GPIO_PIN28_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN28_PAD_ENST_LSB) & WLAN_GPIO_PIN28_PAD_ENST_MASK)
#define WLAN_GPIO_PIN28_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN28_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN28_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN28_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN28_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN28_CONFIG_MASK) >> WLAN_GPIO_PIN28_CONFIG_LSB)
#define WLAN_GPIO_PIN28_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN28_CONFIG_LSB) & WLAN_GPIO_PIN28_CONFIG_MASK)
#define WLAN_GPIO_PIN28_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN28_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN28_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN28_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN28_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN28_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN28_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN28_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN28_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN28_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN28_INT_TYPE_MASK) >> WLAN_GPIO_PIN28_INT_TYPE_LSB)
#define WLAN_GPIO_PIN28_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN28_INT_TYPE_LSB) & WLAN_GPIO_PIN28_INT_TYPE_MASK)
#define WLAN_GPIO_PIN28_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN28_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN28_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN28_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN28_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN28_PAD_PULL_MASK) >> WLAN_GPIO_PIN28_PAD_PULL_LSB)
#define WLAN_GPIO_PIN28_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN28_PAD_PULL_LSB) & WLAN_GPIO_PIN28_PAD_PULL_MASK)
#define WLAN_GPIO_PIN28_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN28_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN28_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN28_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN28_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN28_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN28_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN28_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN28_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN28_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN28_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN28_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN28_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN28_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN28_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN28_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN28_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN28_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN28_PAD_DRIVER_LSB) & WLAN_GPIO_PIN28_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN28_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN28_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN28_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN28_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN28_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN28_SOURCE_MASK) >> WLAN_GPIO_PIN28_SOURCE_LSB)
#define WLAN_GPIO_PIN28_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN28_SOURCE_LSB) & WLAN_GPIO_PIN28_SOURCE_MASK)
#define WLAN_GPIO_PIN28_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN28_ADDRESS                                                (0xc0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN28_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN28_RESET                                                  0x40

// 0xc4 (WLAN_GPIO_PIN29)
#define WLAN_GPIO_PIN29_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN29_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN29_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN29_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN29_PAD_ENST_MASK) >> WLAN_GPIO_PIN29_PAD_ENST_LSB)
#define WLAN_GPIO_PIN29_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN29_PAD_ENST_LSB) & WLAN_GPIO_PIN29_PAD_ENST_MASK)
#define WLAN_GPIO_PIN29_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN29_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN29_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN29_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN29_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN29_CONFIG_MASK) >> WLAN_GPIO_PIN29_CONFIG_LSB)
#define WLAN_GPIO_PIN29_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN29_CONFIG_LSB) & WLAN_GPIO_PIN29_CONFIG_MASK)
#define WLAN_GPIO_PIN29_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN29_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN29_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN29_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN29_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN29_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN29_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN29_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN29_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN29_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN29_INT_TYPE_MASK) >> WLAN_GPIO_PIN29_INT_TYPE_LSB)
#define WLAN_GPIO_PIN29_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN29_INT_TYPE_LSB) & WLAN_GPIO_PIN29_INT_TYPE_MASK)
#define WLAN_GPIO_PIN29_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN29_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN29_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN29_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN29_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN29_PAD_PULL_MASK) >> WLAN_GPIO_PIN29_PAD_PULL_LSB)
#define WLAN_GPIO_PIN29_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN29_PAD_PULL_LSB) & WLAN_GPIO_PIN29_PAD_PULL_MASK)
#define WLAN_GPIO_PIN29_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN29_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN29_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN29_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN29_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN29_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN29_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN29_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN29_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN29_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN29_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN29_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN29_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN29_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN29_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN29_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN29_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN29_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN29_PAD_DRIVER_LSB) & WLAN_GPIO_PIN29_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN29_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN29_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN29_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN29_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN29_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN29_SOURCE_MASK) >> WLAN_GPIO_PIN29_SOURCE_LSB)
#define WLAN_GPIO_PIN29_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN29_SOURCE_LSB) & WLAN_GPIO_PIN29_SOURCE_MASK)
#define WLAN_GPIO_PIN29_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN29_ADDRESS                                                (0xc4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN29_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN29_RESET                                                  0x40

// 0xc8 (WLAN_GPIO_PIN30)
#define WLAN_GPIO_PIN30_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN30_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN30_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN30_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN30_PAD_ENST_MASK) >> WLAN_GPIO_PIN30_PAD_ENST_LSB)
#define WLAN_GPIO_PIN30_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN30_PAD_ENST_LSB) & WLAN_GPIO_PIN30_PAD_ENST_MASK)
#define WLAN_GPIO_PIN30_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN30_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN30_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN30_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN30_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN30_CONFIG_MASK) >> WLAN_GPIO_PIN30_CONFIG_LSB)
#define WLAN_GPIO_PIN30_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN30_CONFIG_LSB) & WLAN_GPIO_PIN30_CONFIG_MASK)
#define WLAN_GPIO_PIN30_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN30_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN30_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN30_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN30_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN30_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN30_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN30_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN30_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN30_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN30_INT_TYPE_MASK) >> WLAN_GPIO_PIN30_INT_TYPE_LSB)
#define WLAN_GPIO_PIN30_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN30_INT_TYPE_LSB) & WLAN_GPIO_PIN30_INT_TYPE_MASK)
#define WLAN_GPIO_PIN30_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN30_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN30_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN30_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN30_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN30_PAD_PULL_MASK) >> WLAN_GPIO_PIN30_PAD_PULL_LSB)
#define WLAN_GPIO_PIN30_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN30_PAD_PULL_LSB) & WLAN_GPIO_PIN30_PAD_PULL_MASK)
#define WLAN_GPIO_PIN30_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN30_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN30_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN30_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN30_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN30_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN30_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN30_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN30_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN30_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN30_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN30_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN30_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN30_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN30_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN30_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN30_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN30_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN30_PAD_DRIVER_LSB) & WLAN_GPIO_PIN30_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN30_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN30_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN30_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN30_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN30_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN30_SOURCE_MASK) >> WLAN_GPIO_PIN30_SOURCE_LSB)
#define WLAN_GPIO_PIN30_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN30_SOURCE_LSB) & WLAN_GPIO_PIN30_SOURCE_MASK)
#define WLAN_GPIO_PIN30_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN30_ADDRESS                                                (0xc8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN30_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN30_RESET                                                  0x40

// 0xcc (WLAN_GPIO_PIN31)
#define WLAN_GPIO_PIN31_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN31_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN31_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN31_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN31_PAD_ENST_MASK) >> WLAN_GPIO_PIN31_PAD_ENST_LSB)
#define WLAN_GPIO_PIN31_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN31_PAD_ENST_LSB) & WLAN_GPIO_PIN31_PAD_ENST_MASK)
#define WLAN_GPIO_PIN31_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN31_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN31_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN31_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN31_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN31_CONFIG_MASK) >> WLAN_GPIO_PIN31_CONFIG_LSB)
#define WLAN_GPIO_PIN31_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN31_CONFIG_LSB) & WLAN_GPIO_PIN31_CONFIG_MASK)
#define WLAN_GPIO_PIN31_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN31_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN31_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN31_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN31_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN31_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN31_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN31_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN31_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN31_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN31_INT_TYPE_MASK) >> WLAN_GPIO_PIN31_INT_TYPE_LSB)
#define WLAN_GPIO_PIN31_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN31_INT_TYPE_LSB) & WLAN_GPIO_PIN31_INT_TYPE_MASK)
#define WLAN_GPIO_PIN31_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN31_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN31_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN31_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN31_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN31_PAD_PULL_MASK) >> WLAN_GPIO_PIN31_PAD_PULL_LSB)
#define WLAN_GPIO_PIN31_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN31_PAD_PULL_LSB) & WLAN_GPIO_PIN31_PAD_PULL_MASK)
#define WLAN_GPIO_PIN31_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN31_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN31_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN31_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN31_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN31_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN31_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN31_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN31_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN31_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN31_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN31_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN31_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN31_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN31_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN31_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN31_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN31_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN31_PAD_DRIVER_LSB) & WLAN_GPIO_PIN31_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN31_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN31_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN31_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN31_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN31_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN31_SOURCE_MASK) >> WLAN_GPIO_PIN31_SOURCE_LSB)
#define WLAN_GPIO_PIN31_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN31_SOURCE_LSB) & WLAN_GPIO_PIN31_SOURCE_MASK)
#define WLAN_GPIO_PIN31_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN31_ADDRESS                                                (0xcc + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN31_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN31_RESET                                                  0x40

// 0xd0 (WLAN_GPIO_PIN32)
#define WLAN_GPIO_PIN32_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN32_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN32_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN32_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN32_PAD_ENST_MASK) >> WLAN_GPIO_PIN32_PAD_ENST_LSB)
#define WLAN_GPIO_PIN32_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN32_PAD_ENST_LSB) & WLAN_GPIO_PIN32_PAD_ENST_MASK)
#define WLAN_GPIO_PIN32_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN32_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN32_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN32_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN32_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN32_CONFIG_MASK) >> WLAN_GPIO_PIN32_CONFIG_LSB)
#define WLAN_GPIO_PIN32_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN32_CONFIG_LSB) & WLAN_GPIO_PIN32_CONFIG_MASK)
#define WLAN_GPIO_PIN32_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN32_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN32_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN32_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN32_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN32_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN32_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN32_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN32_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN32_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN32_INT_TYPE_MASK) >> WLAN_GPIO_PIN32_INT_TYPE_LSB)
#define WLAN_GPIO_PIN32_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN32_INT_TYPE_LSB) & WLAN_GPIO_PIN32_INT_TYPE_MASK)
#define WLAN_GPIO_PIN32_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN32_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN32_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN32_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN32_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN32_PAD_PULL_MASK) >> WLAN_GPIO_PIN32_PAD_PULL_LSB)
#define WLAN_GPIO_PIN32_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN32_PAD_PULL_LSB) & WLAN_GPIO_PIN32_PAD_PULL_MASK)
#define WLAN_GPIO_PIN32_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN32_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN32_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN32_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN32_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN32_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN32_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN32_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN32_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN32_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN32_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN32_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN32_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN32_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN32_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN32_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN32_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN32_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN32_PAD_DRIVER_LSB) & WLAN_GPIO_PIN32_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN32_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN32_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN32_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN32_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN32_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN32_SOURCE_MASK) >> WLAN_GPIO_PIN32_SOURCE_LSB)
#define WLAN_GPIO_PIN32_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN32_SOURCE_LSB) & WLAN_GPIO_PIN32_SOURCE_MASK)
#define WLAN_GPIO_PIN32_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN32_ADDRESS                                                (0xd0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN32_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN32_RESET                                                  0x40

// 0xd4 (WLAN_GPIO_PIN33)
#define WLAN_GPIO_PIN33_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN33_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN33_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN33_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN33_PAD_ENST_MASK) >> WLAN_GPIO_PIN33_PAD_ENST_LSB)
#define WLAN_GPIO_PIN33_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN33_PAD_ENST_LSB) & WLAN_GPIO_PIN33_PAD_ENST_MASK)
#define WLAN_GPIO_PIN33_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN33_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN33_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN33_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN33_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN33_CONFIG_MASK) >> WLAN_GPIO_PIN33_CONFIG_LSB)
#define WLAN_GPIO_PIN33_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN33_CONFIG_LSB) & WLAN_GPIO_PIN33_CONFIG_MASK)
#define WLAN_GPIO_PIN33_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN33_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN33_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN33_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN33_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN33_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN33_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN33_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN33_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN33_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN33_INT_TYPE_MASK) >> WLAN_GPIO_PIN33_INT_TYPE_LSB)
#define WLAN_GPIO_PIN33_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN33_INT_TYPE_LSB) & WLAN_GPIO_PIN33_INT_TYPE_MASK)
#define WLAN_GPIO_PIN33_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN33_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN33_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN33_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN33_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN33_PAD_PULL_MASK) >> WLAN_GPIO_PIN33_PAD_PULL_LSB)
#define WLAN_GPIO_PIN33_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN33_PAD_PULL_LSB) & WLAN_GPIO_PIN33_PAD_PULL_MASK)
#define WLAN_GPIO_PIN33_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN33_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN33_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN33_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN33_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN33_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN33_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN33_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN33_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN33_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN33_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN33_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN33_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN33_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN33_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN33_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN33_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN33_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN33_PAD_DRIVER_LSB) & WLAN_GPIO_PIN33_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN33_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN33_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN33_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN33_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN33_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN33_SOURCE_MASK) >> WLAN_GPIO_PIN33_SOURCE_LSB)
#define WLAN_GPIO_PIN33_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN33_SOURCE_LSB) & WLAN_GPIO_PIN33_SOURCE_MASK)
#define WLAN_GPIO_PIN33_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN33_ADDRESS                                                (0xd4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN33_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN33_RESET                                                  0x40

// 0xd8 (WLAN_GPIO_PIN34)
#define WLAN_GPIO_PIN34_PAD_ENST_LSB                                           15
#define WLAN_GPIO_PIN34_PAD_ENST_MSB                                           15
#define WLAN_GPIO_PIN34_PAD_ENST_MASK                                          0x8000
#define WLAN_GPIO_PIN34_PAD_ENST_GET(x)                                        (((x) & WLAN_GPIO_PIN34_PAD_ENST_MASK) >> WLAN_GPIO_PIN34_PAD_ENST_LSB)
#define WLAN_GPIO_PIN34_PAD_ENST_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN34_PAD_ENST_LSB) & WLAN_GPIO_PIN34_PAD_ENST_MASK)
#define WLAN_GPIO_PIN34_PAD_ENST_RESET                                         0x0
#define WLAN_GPIO_PIN34_CONFIG_LSB                                             11
#define WLAN_GPIO_PIN34_CONFIG_MSB                                             14
#define WLAN_GPIO_PIN34_CONFIG_MASK                                            0x7800
#define WLAN_GPIO_PIN34_CONFIG_GET(x)                                          (((x) & WLAN_GPIO_PIN34_CONFIG_MASK) >> WLAN_GPIO_PIN34_CONFIG_LSB)
#define WLAN_GPIO_PIN34_CONFIG_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN34_CONFIG_LSB) & WLAN_GPIO_PIN34_CONFIG_MASK)
#define WLAN_GPIO_PIN34_CONFIG_RESET                                           0x0
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN34_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN34_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN34_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN34_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN34_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN34_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN34_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN34_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN34_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN34_INT_TYPE_MASK) >> WLAN_GPIO_PIN34_INT_TYPE_LSB)
#define WLAN_GPIO_PIN34_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN34_INT_TYPE_LSB) & WLAN_GPIO_PIN34_INT_TYPE_MASK)
#define WLAN_GPIO_PIN34_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN34_PAD_PULL_LSB                                           5
#define WLAN_GPIO_PIN34_PAD_PULL_MSB                                           6
#define WLAN_GPIO_PIN34_PAD_PULL_MASK                                          0x60
#define WLAN_GPIO_PIN34_PAD_PULL_GET(x)                                        (((x) & WLAN_GPIO_PIN34_PAD_PULL_MASK) >> WLAN_GPIO_PIN34_PAD_PULL_LSB)
#define WLAN_GPIO_PIN34_PAD_PULL_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN34_PAD_PULL_LSB) & WLAN_GPIO_PIN34_PAD_PULL_MASK)
#define WLAN_GPIO_PIN34_PAD_PULL_RESET                                         0x2
#define WLAN_GPIO_PIN34_PAD_STRENGTH_LSB                                       3
#define WLAN_GPIO_PIN34_PAD_STRENGTH_MSB                                       4
#define WLAN_GPIO_PIN34_PAD_STRENGTH_MASK                                      0x18
#define WLAN_GPIO_PIN34_PAD_STRENGTH_GET(x)                                    (((x) & WLAN_GPIO_PIN34_PAD_STRENGTH_MASK) >> WLAN_GPIO_PIN34_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PIN34_PAD_STRENGTH_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PIN34_PAD_STRENGTH_LSB) & WLAN_GPIO_PIN34_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PIN34_PAD_STRENGTH_RESET                                     0x0
#define WLAN_GPIO_PIN34_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN34_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN34_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN34_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN34_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN34_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN34_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN34_PAD_DRIVER_LSB) & WLAN_GPIO_PIN34_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN34_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN34_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN34_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN34_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN34_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN34_SOURCE_MASK) >> WLAN_GPIO_PIN34_SOURCE_LSB)
#define WLAN_GPIO_PIN34_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN34_SOURCE_LSB) & WLAN_GPIO_PIN34_SOURCE_MASK)
#define WLAN_GPIO_PIN34_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN34_ADDRESS                                                (0xd8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN34_RSTMASK                                                0xfffd
#define WLAN_GPIO_PIN34_RESET                                                  0x40

// 0xdc (WLAN_GPIO_PIN35)
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_LSB                                      10
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_MSB                                      10
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_MASK                                     0x400
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_GET(x)                                   (((x) & WLAN_GPIO_PIN35_WAKEUP_ENABLE_MASK) >> WLAN_GPIO_PIN35_WAKEUP_ENABLE_LSB)
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PIN35_WAKEUP_ENABLE_LSB) & WLAN_GPIO_PIN35_WAKEUP_ENABLE_MASK)
#define WLAN_GPIO_PIN35_WAKEUP_ENABLE_RESET                                    0x0
#define WLAN_GPIO_PIN35_INT_TYPE_LSB                                           7
#define WLAN_GPIO_PIN35_INT_TYPE_MSB                                           9
#define WLAN_GPIO_PIN35_INT_TYPE_MASK                                          0x380
#define WLAN_GPIO_PIN35_INT_TYPE_GET(x)                                        (((x) & WLAN_GPIO_PIN35_INT_TYPE_MASK) >> WLAN_GPIO_PIN35_INT_TYPE_LSB)
#define WLAN_GPIO_PIN35_INT_TYPE_SET(x)                                        (((0 | (x)) << WLAN_GPIO_PIN35_INT_TYPE_LSB) & WLAN_GPIO_PIN35_INT_TYPE_MASK)
#define WLAN_GPIO_PIN35_INT_TYPE_RESET                                         0x0
#define WLAN_GPIO_PIN35_PAD_DRIVER_LSB                                         2
#define WLAN_GPIO_PIN35_PAD_DRIVER_MSB                                         2
#define WLAN_GPIO_PIN35_PAD_DRIVER_MASK                                        0x4
#define WLAN_GPIO_PIN35_PAD_DRIVER_GET(x)                                      (((x) & WLAN_GPIO_PIN35_PAD_DRIVER_MASK) >> WLAN_GPIO_PIN35_PAD_DRIVER_LSB)
#define WLAN_GPIO_PIN35_PAD_DRIVER_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PIN35_PAD_DRIVER_LSB) & WLAN_GPIO_PIN35_PAD_DRIVER_MASK)
#define WLAN_GPIO_PIN35_PAD_DRIVER_RESET                                       0x0
#define WLAN_GPIO_PIN35_SOURCE_LSB                                             0
#define WLAN_GPIO_PIN35_SOURCE_MSB                                             0
#define WLAN_GPIO_PIN35_SOURCE_MASK                                            0x1
#define WLAN_GPIO_PIN35_SOURCE_GET(x)                                          (((x) & WLAN_GPIO_PIN35_SOURCE_MASK) >> WLAN_GPIO_PIN35_SOURCE_LSB)
#define WLAN_GPIO_PIN35_SOURCE_SET(x)                                          (((0 | (x)) << WLAN_GPIO_PIN35_SOURCE_LSB) & WLAN_GPIO_PIN35_SOURCE_MASK)
#define WLAN_GPIO_PIN35_SOURCE_RESET                                           0x0
#define WLAN_GPIO_PIN35_ADDRESS                                                (0xdc + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PIN35_RSTMASK                                                0x785
#define WLAN_GPIO_PIN35_RESET                                                  0x0

// 0xe0 (WL_SOC_APB)
#define WL_SOC_APB_TOGGLE_LSB                                                  0
#define WL_SOC_APB_TOGGLE_MSB                                                  0
#define WL_SOC_APB_TOGGLE_MASK                                                 0x1
#define WL_SOC_APB_TOGGLE_GET(x)                                               (((x) & WL_SOC_APB_TOGGLE_MASK) >> WL_SOC_APB_TOGGLE_LSB)
#define WL_SOC_APB_TOGGLE_SET(x)                                               (((0 | (x)) << WL_SOC_APB_TOGGLE_LSB) & WL_SOC_APB_TOGGLE_MASK)
#define WL_SOC_APB_TOGGLE_RESET                                                0x0
#define WL_SOC_APB_ADDRESS                                                     (0xe0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WL_SOC_APB_RSTMASK                                                     0x1
#define WL_SOC_APB_RESET                                                       0x0

// 0xe4 (WLAN_SIGMA_DELTA)
#define WLAN_SIGMA_DELTA_ENABLE_LSB                                            16
#define WLAN_SIGMA_DELTA_ENABLE_MSB                                            16
#define WLAN_SIGMA_DELTA_ENABLE_MASK                                           0x10000
#define WLAN_SIGMA_DELTA_ENABLE_GET(x)                                         (((x) & WLAN_SIGMA_DELTA_ENABLE_MASK) >> WLAN_SIGMA_DELTA_ENABLE_LSB)
#define WLAN_SIGMA_DELTA_ENABLE_SET(x)                                         (((0 | (x)) << WLAN_SIGMA_DELTA_ENABLE_LSB) & WLAN_SIGMA_DELTA_ENABLE_MASK)
#define WLAN_SIGMA_DELTA_ENABLE_RESET                                          0x0
#define WLAN_SIGMA_DELTA_PRESCALAR_LSB                                         8
#define WLAN_SIGMA_DELTA_PRESCALAR_MSB                                         15
#define WLAN_SIGMA_DELTA_PRESCALAR_MASK                                        0xff00
#define WLAN_SIGMA_DELTA_PRESCALAR_GET(x)                                      (((x) & WLAN_SIGMA_DELTA_PRESCALAR_MASK) >> WLAN_SIGMA_DELTA_PRESCALAR_LSB)
#define WLAN_SIGMA_DELTA_PRESCALAR_SET(x)                                      (((0 | (x)) << WLAN_SIGMA_DELTA_PRESCALAR_LSB) & WLAN_SIGMA_DELTA_PRESCALAR_MASK)
#define WLAN_SIGMA_DELTA_PRESCALAR_RESET                                       0x0
#define WLAN_SIGMA_DELTA_TARGET_LSB                                            0
#define WLAN_SIGMA_DELTA_TARGET_MSB                                            7
#define WLAN_SIGMA_DELTA_TARGET_MASK                                           0xff
#define WLAN_SIGMA_DELTA_TARGET_GET(x)                                         (((x) & WLAN_SIGMA_DELTA_TARGET_MASK) >> WLAN_SIGMA_DELTA_TARGET_LSB)
#define WLAN_SIGMA_DELTA_TARGET_SET(x)                                         (((0 | (x)) << WLAN_SIGMA_DELTA_TARGET_LSB) & WLAN_SIGMA_DELTA_TARGET_MASK)
#define WLAN_SIGMA_DELTA_TARGET_RESET                                          0x0
#define WLAN_SIGMA_DELTA_ADDRESS                                               (0xe4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_SIGMA_DELTA_RSTMASK                                               0x1ffff
#define WLAN_SIGMA_DELTA_RESET                                                 0x0

// 0xe8 (WL_BOOTSTRAP)
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_LSB                                24
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_MSB                                24
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_MASK                               0x1000000
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_GET(x)                             (((x) & WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_MASK) >> WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_LSB)
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_SET(x)                             (((0 | (x)) << WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_LSB) & WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_MASK)
#define WL_BOOTSTRAP_LOAD_FIRMWARE_FROM_ATE_RESET                              0x0
#define WL_BOOTSTRAP_STATUS_LSB                                                0
#define WL_BOOTSTRAP_STATUS_MSB                                                23
#define WL_BOOTSTRAP_STATUS_MASK                                               0xffffff
#define WL_BOOTSTRAP_STATUS_GET(x)                                             (((x) & WL_BOOTSTRAP_STATUS_MASK) >> WL_BOOTSTRAP_STATUS_LSB)
#define WL_BOOTSTRAP_STATUS_SET(x)                                             (((0 | (x)) << WL_BOOTSTRAP_STATUS_LSB) & WL_BOOTSTRAP_STATUS_MASK)
#define WL_BOOTSTRAP_STATUS_RESET                                              0x0
#define WL_BOOTSTRAP_ADDRESS                                                   (0xe8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WL_BOOTSTRAP_RSTMASK                                                   0x1ffffff
#define WL_BOOTSTRAP_RESET                                                     0x0

// 0xec (WL_BOOTSTRAP1)
#define WL_BOOTSTRAP1_STATUS_LSB                                               0
#define WL_BOOTSTRAP1_STATUS_MSB                                               10
#define WL_BOOTSTRAP1_STATUS_MASK                                              0x7ff
#define WL_BOOTSTRAP1_STATUS_GET(x)                                            (((x) & WL_BOOTSTRAP1_STATUS_MASK) >> WL_BOOTSTRAP1_STATUS_LSB)
#define WL_BOOTSTRAP1_STATUS_SET(x)                                            (((0 | (x)) << WL_BOOTSTRAP1_STATUS_LSB) & WL_BOOTSTRAP1_STATUS_MASK)
#define WL_BOOTSTRAP1_STATUS_RESET                                             0x0
#define WL_BOOTSTRAP1_ADDRESS                                                  (0xec + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WL_BOOTSTRAP1_RSTMASK                                                  0x7ff
#define WL_BOOTSTRAP1_RESET                                                    0x0

// 0xf0 (SOC_DEBUG)
#define SOC_DEBUG_PCIE_DEBUG_SEL_LSB                                           13
#define SOC_DEBUG_PCIE_DEBUG_SEL_MSB                                           18
#define SOC_DEBUG_PCIE_DEBUG_SEL_MASK                                          0x7e000
#define SOC_DEBUG_PCIE_DEBUG_SEL_GET(x)                                        (((x) & SOC_DEBUG_PCIE_DEBUG_SEL_MASK) >> SOC_DEBUG_PCIE_DEBUG_SEL_LSB)
#define SOC_DEBUG_PCIE_DEBUG_SEL_SET(x)                                        (((0 | (x)) << SOC_DEBUG_PCIE_DEBUG_SEL_LSB) & SOC_DEBUG_PCIE_DEBUG_SEL_MASK)
#define SOC_DEBUG_PCIE_DEBUG_SEL_RESET                                         0x0
#define SOC_DEBUG_SHIFT_LSB                                                    10
#define SOC_DEBUG_SHIFT_MSB                                                    12
#define SOC_DEBUG_SHIFT_MASK                                                   0x1c00
#define SOC_DEBUG_SHIFT_GET(x)                                                 (((x) & SOC_DEBUG_SHIFT_MASK) >> SOC_DEBUG_SHIFT_LSB)
#define SOC_DEBUG_SHIFT_SET(x)                                                 (((0 | (x)) << SOC_DEBUG_SHIFT_LSB) & SOC_DEBUG_SHIFT_MASK)
#define SOC_DEBUG_SHIFT_RESET                                                  0x0
#define SOC_DEBUG_GPIO_SEL_LSB                                                 9
#define SOC_DEBUG_GPIO_SEL_MSB                                                 9
#define SOC_DEBUG_GPIO_SEL_MASK                                                0x200
#define SOC_DEBUG_GPIO_SEL_GET(x)                                              (((x) & SOC_DEBUG_GPIO_SEL_MASK) >> SOC_DEBUG_GPIO_SEL_LSB)
#define SOC_DEBUG_GPIO_SEL_SET(x)                                              (((0 | (x)) << SOC_DEBUG_GPIO_SEL_LSB) & SOC_DEBUG_GPIO_SEL_MASK)
#define SOC_DEBUG_GPIO_SEL_RESET                                               0x0
#define SOC_DEBUG_CLOCK_SEL_LSB                                                4
#define SOC_DEBUG_CLOCK_SEL_MSB                                                8
#define SOC_DEBUG_CLOCK_SEL_MASK                                               0x1f0
#define SOC_DEBUG_CLOCK_SEL_GET(x)                                             (((x) & SOC_DEBUG_CLOCK_SEL_MASK) >> SOC_DEBUG_CLOCK_SEL_LSB)
#define SOC_DEBUG_CLOCK_SEL_SET(x)                                             (((0 | (x)) << SOC_DEBUG_CLOCK_SEL_LSB) & SOC_DEBUG_CLOCK_SEL_MASK)
#define SOC_DEBUG_CLOCK_SEL_RESET                                              0x0
#define SOC_DEBUG_SRC_SEL_LSB                                                  1
#define SOC_DEBUG_SRC_SEL_MSB                                                  3
#define SOC_DEBUG_SRC_SEL_MASK                                                 0xe
#define SOC_DEBUG_SRC_SEL_GET(x)                                               (((x) & SOC_DEBUG_SRC_SEL_MASK) >> SOC_DEBUG_SRC_SEL_LSB)
#define SOC_DEBUG_SRC_SEL_SET(x)                                               (((0 | (x)) << SOC_DEBUG_SRC_SEL_LSB) & SOC_DEBUG_SRC_SEL_MASK)
#define SOC_DEBUG_SRC_SEL_RESET                                                0x0
#define SOC_DEBUG_ENABLE_LSB                                                   0
#define SOC_DEBUG_ENABLE_MSB                                                   0
#define SOC_DEBUG_ENABLE_MASK                                                  0x1
#define SOC_DEBUG_ENABLE_GET(x)                                                (((x) & SOC_DEBUG_ENABLE_MASK) >> SOC_DEBUG_ENABLE_LSB)
#define SOC_DEBUG_ENABLE_SET(x)                                                (((0 | (x)) << SOC_DEBUG_ENABLE_LSB) & SOC_DEBUG_ENABLE_MASK)
#define SOC_DEBUG_ENABLE_RESET                                                 0x0
#define SOC_DEBUG_ADDRESS                                                      (0xf0 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define SOC_DEBUG_RSTMASK                                                      0x7ffff
#define SOC_DEBUG_RESET                                                        0x0

// 0xf4 (SPDT_CONTROL)
#define SPDT_CONTROL_RFSILENT_FORCE_LSB                                        13
#define SPDT_CONTROL_RFSILENT_FORCE_MSB                                        13
#define SPDT_CONTROL_RFSILENT_FORCE_MASK                                       0x2000
#define SPDT_CONTROL_RFSILENT_FORCE_GET(x)                                     (((x) & SPDT_CONTROL_RFSILENT_FORCE_MASK) >> SPDT_CONTROL_RFSILENT_FORCE_LSB)
#define SPDT_CONTROL_RFSILENT_FORCE_SET(x)                                     (((0 | (x)) << SPDT_CONTROL_RFSILENT_FORCE_LSB) & SPDT_CONTROL_RFSILENT_FORCE_MASK)
#define SPDT_CONTROL_RFSILENT_FORCE_RESET                                      0x0
#define SPDT_CONTROL_ADDRESS                                                   (0xf4 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define SPDT_CONTROL_RSTMASK                                                   0x2000
#define SPDT_CONTROL_RESET                                                     0x0

// 0xf8 (CLOCK_OBS_MUX)
#define CLOCK_OBS_MUX_DIV_SEL_LSB                                              9
#define CLOCK_OBS_MUX_DIV_SEL_MSB                                              10
#define CLOCK_OBS_MUX_DIV_SEL_MASK                                             0x600
#define CLOCK_OBS_MUX_DIV_SEL_GET(x)                                           (((x) & CLOCK_OBS_MUX_DIV_SEL_MASK) >> CLOCK_OBS_MUX_DIV_SEL_LSB)
#define CLOCK_OBS_MUX_DIV_SEL_SET(x)                                           (((0 | (x)) << CLOCK_OBS_MUX_DIV_SEL_LSB) & CLOCK_OBS_MUX_DIV_SEL_MASK)
#define CLOCK_OBS_MUX_DIV_SEL_RESET                                            0x0
#define CLOCK_OBS_MUX_CLK_SEL_LSB                                              2
#define CLOCK_OBS_MUX_CLK_SEL_MSB                                              6
#define CLOCK_OBS_MUX_CLK_SEL_MASK                                             0x7c
#define CLOCK_OBS_MUX_CLK_SEL_GET(x)                                           (((x) & CLOCK_OBS_MUX_CLK_SEL_MASK) >> CLOCK_OBS_MUX_CLK_SEL_LSB)
#define CLOCK_OBS_MUX_CLK_SEL_SET(x)                                           (((0 | (x)) << CLOCK_OBS_MUX_CLK_SEL_LSB) & CLOCK_OBS_MUX_CLK_SEL_MASK)
#define CLOCK_OBS_MUX_CLK_SEL_RESET                                            0x0
#define CLOCK_OBS_MUX_MASTER_SEL_LSB                                           0
#define CLOCK_OBS_MUX_MASTER_SEL_MSB                                           1
#define CLOCK_OBS_MUX_MASTER_SEL_MASK                                          0x3
#define CLOCK_OBS_MUX_MASTER_SEL_GET(x)                                        (((x) & CLOCK_OBS_MUX_MASTER_SEL_MASK) >> CLOCK_OBS_MUX_MASTER_SEL_LSB)
#define CLOCK_OBS_MUX_MASTER_SEL_SET(x)                                        (((0 | (x)) << CLOCK_OBS_MUX_MASTER_SEL_LSB) & CLOCK_OBS_MUX_MASTER_SEL_MASK)
#define CLOCK_OBS_MUX_MASTER_SEL_RESET                                         0x0
#define CLOCK_OBS_MUX_ADDRESS                                                  (0xf8 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define CLOCK_OBS_MUX_RSTMASK                                                  0x67f
#define CLOCK_OBS_MUX_RESET                                                    0x0

// 0xfc (PCIE)
#define PCIE_INT_TYPE_LSB                                                      2
#define PCIE_INT_TYPE_MSB                                                      3
#define PCIE_INT_TYPE_MASK                                                     0xc
#define PCIE_INT_TYPE_GET(x)                                                   (((x) & PCIE_INT_TYPE_MASK) >> PCIE_INT_TYPE_LSB)
#define PCIE_INT_TYPE_SET(x)                                                   (((0 | (x)) << PCIE_INT_TYPE_LSB) & PCIE_INT_TYPE_MASK)
#define PCIE_INT_TYPE_RESET                                                    0x0
#define PCIE_WAKEUP_TYPE_LSB                                                   0
#define PCIE_WAKEUP_TYPE_MSB                                                   1
#define PCIE_WAKEUP_TYPE_MASK                                                  0x3
#define PCIE_WAKEUP_TYPE_GET(x)                                                (((x) & PCIE_WAKEUP_TYPE_MASK) >> PCIE_WAKEUP_TYPE_LSB)
#define PCIE_WAKEUP_TYPE_SET(x)                                                (((0 | (x)) << PCIE_WAKEUP_TYPE_LSB) & PCIE_WAKEUP_TYPE_MASK)
#define PCIE_WAKEUP_TYPE_RESET                                                 0x0
#define PCIE_ADDRESS                                                           (0xfc + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define PCIE_RSTMASK                                                           0xf
#define PCIE_RESET                                                             0x0

// 0x100 (WLAN_GPIO_PCIE)
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_LSB                                      17
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_MSB                                      17
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_MASK                                     0x20000
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_GET(x)                                   (((x) & WLAN_GPIO_PCIE_RST_SHORT_ENST_MASK) >> WLAN_GPIO_PCIE_RST_SHORT_ENST_LSB)
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PCIE_RST_SHORT_ENST_LSB) & WLAN_GPIO_PCIE_RST_SHORT_ENST_MASK)
#define WLAN_GPIO_PCIE_RST_SHORT_ENST_RESET                                    0x0
#define WLAN_GPIO_PCIE_WAKE_L_ENST_LSB                                         16
#define WLAN_GPIO_PCIE_WAKE_L_ENST_MSB                                         16
#define WLAN_GPIO_PCIE_WAKE_L_ENST_MASK                                        0x10000
#define WLAN_GPIO_PCIE_WAKE_L_ENST_GET(x)                                      (((x) & WLAN_GPIO_PCIE_WAKE_L_ENST_MASK) >> WLAN_GPIO_PCIE_WAKE_L_ENST_LSB)
#define WLAN_GPIO_PCIE_WAKE_L_ENST_SET(x)                                      (((0 | (x)) << WLAN_GPIO_PCIE_WAKE_L_ENST_LSB) & WLAN_GPIO_PCIE_WAKE_L_ENST_MASK)
#define WLAN_GPIO_PCIE_WAKE_L_ENST_RESET                                       0x0
#define WLAN_GPIO_PCIE_RST_L_ENST_LSB                                          15
#define WLAN_GPIO_PCIE_RST_L_ENST_MSB                                          15
#define WLAN_GPIO_PCIE_RST_L_ENST_MASK                                         0x8000
#define WLAN_GPIO_PCIE_RST_L_ENST_GET(x)                                       (((x) & WLAN_GPIO_PCIE_RST_L_ENST_MASK) >> WLAN_GPIO_PCIE_RST_L_ENST_LSB)
#define WLAN_GPIO_PCIE_RST_L_ENST_SET(x)                                       (((0 | (x)) << WLAN_GPIO_PCIE_RST_L_ENST_LSB) & WLAN_GPIO_PCIE_RST_L_ENST_MASK)
#define WLAN_GPIO_PCIE_RST_L_ENST_RESET                                        0x1
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_LSB                                       14
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_MSB                                       14
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_MASK                                      0x4000
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_GET(x)                                    (((x) & WLAN_GPIO_PCIE_CLKREQ_L_ENST_MASK) >> WLAN_GPIO_PCIE_CLKREQ_L_ENST_LSB)
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_SET(x)                                    (((0 | (x)) << WLAN_GPIO_PCIE_CLKREQ_L_ENST_LSB) & WLAN_GPIO_PCIE_CLKREQ_L_ENST_MASK)
#define WLAN_GPIO_PCIE_CLKREQ_L_ENST_RESET                                     0x0
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_LSB                                  12
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_MSB                                  13
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_MASK                                 0x3000
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_GET(x)                               (((x) & WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_MASK) >> WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_SET(x)                               (((0 | (x)) << WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_LSB) & WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PCIE_RST_L_PAD_STRENGTH_RESET                                0x1
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_LSB                                 10
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_MSB                                 11
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_MASK                                0xc00
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_GET(x)                              (((x) & WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_MASK) >> WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_SET(x)                              (((0 | (x)) << WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_LSB) & WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PCIE_WAKE_L_PAD_STRENGTH_RESET                               0x1
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_LSB                               8
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_MSB                               9
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_MASK                              0x300
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_GET(x)                            (((x) & WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_MASK) >> WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_LSB)
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_SET(x)                            (((0 | (x)) << WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_LSB) & WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_MASK)
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_STRENGTH_RESET                             0x1
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_LSB                                  6
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_MSB                                  7
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_MASK                                 0xc0
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_GET(x)                               (((x) & WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_MASK) >> WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_LSB)
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_SET(x)                               (((0 | (x)) << WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_LSB) & WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_MASK)
#define WLAN_GPIO_PCIE_RST_SHORT_PAD_PULL_RESET                                0x1
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_LSB                                     4
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_MSB                                     5
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_MASK                                    0x30
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_GET(x)                                  (((x) & WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_MASK) >> WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_LSB)
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_SET(x)                                  (((0 | (x)) << WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_LSB) & WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_MASK)
#define WLAN_GPIO_PCIE_WAKE_L_PAD_PULL_RESET                                   0x0
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_LSB                                   2
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_MSB                                   3
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_MASK                                  0xc
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_GET(x)                                (((x) & WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_MASK) >> WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_LSB)
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_SET(x)                                (((0 | (x)) << WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_LSB) & WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_MASK)
#define WLAN_GPIO_PCIE_CLKREQ_L_PAD_PULL_RESET                                 0x0
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_LSB                                      0
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_MSB                                      1
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_MASK                                     0x3
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_GET(x)                                   (((x) & WLAN_GPIO_PCIE_RST_L_PAD_PULL_MASK) >> WLAN_GPIO_PCIE_RST_L_PAD_PULL_LSB)
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_SET(x)                                   (((0 | (x)) << WLAN_GPIO_PCIE_RST_L_PAD_PULL_LSB) & WLAN_GPIO_PCIE_RST_L_PAD_PULL_MASK)
#define WLAN_GPIO_PCIE_RST_L_PAD_PULL_RESET                                    0x0
#define WLAN_GPIO_PCIE_ADDRESS                                                 (0x100 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define WLAN_GPIO_PCIE_RSTMASK                                                 0x3ffff
#define WLAN_GPIO_PCIE_RESET                                                   0x9540

// 0x104 (GPIO_SPARE0)
#define GPIO_SPARE0_BITS_LSB                                                   0
#define GPIO_SPARE0_BITS_MSB                                                   31
#define GPIO_SPARE0_BITS_MASK                                                  0xffffffff
#define GPIO_SPARE0_BITS_GET(x)                                                (((x) & GPIO_SPARE0_BITS_MASK) >> GPIO_SPARE0_BITS_LSB)
#define GPIO_SPARE0_BITS_SET(x)                                                (((0 | (x)) << GPIO_SPARE0_BITS_LSB) & GPIO_SPARE0_BITS_MASK)
#define GPIO_SPARE0_BITS_RESET                                                 0x0
#define GPIO_SPARE0_ADDRESS                                                    (0x104 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define GPIO_SPARE0_RSTMASK                                                    0xffffffff
#define GPIO_SPARE0_RESET                                                      0x0

// 0x108 (GPIO_SPARE1)
#define GPIO_SPARE1_BITS_LSB                                                   0
#define GPIO_SPARE1_BITS_MSB                                                   31
#define GPIO_SPARE1_BITS_MASK                                                  0xffffffff
#define GPIO_SPARE1_BITS_GET(x)                                                (((x) & GPIO_SPARE1_BITS_MASK) >> GPIO_SPARE1_BITS_LSB)
#define GPIO_SPARE1_BITS_SET(x)                                                (((0 | (x)) << GPIO_SPARE1_BITS_LSB) & GPIO_SPARE1_BITS_MASK)
#define GPIO_SPARE1_BITS_RESET                                                 0x0
#define GPIO_SPARE1_ADDRESS                                                    (0x108 + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define GPIO_SPARE1_RSTMASK                                                    0xffffffff
#define GPIO_SPARE1_RESET                                                      0x0

// 0x10c (DEBUG_BUS)
#define DEBUG_BUS_DATA_LSB                                                     0
#define DEBUG_BUS_DATA_MSB                                                     31
#define DEBUG_BUS_DATA_MASK                                                    0xffffffff
#define DEBUG_BUS_DATA_GET(x)                                                  (((x) & DEBUG_BUS_DATA_MASK) >> DEBUG_BUS_DATA_LSB)
#define DEBUG_BUS_DATA_SET(x)                                                  (((0 | (x)) << DEBUG_BUS_DATA_LSB) & DEBUG_BUS_DATA_MASK)
#define DEBUG_BUS_DATA_RESET                                                   0x0
#define DEBUG_BUS_ADDRESS                                                      (0x10c + __GPIO_ATHR_WLAN_REG_BASE_ADDRESS)
#define DEBUG_BUS_RSTMASK                                                      0xffffffff
#define DEBUG_BUS_RESET                                                        0x0



#endif /* _GPIO_ATHR_WLAN_REG_H_ */
