/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _RTC_SOC_REG_H_
#define _RTC_SOC_REG_H_


#ifndef __RTC_SOC_REG_BASE_ADDRESS
#define __RTC_SOC_REG_BASE_ADDRESS (0x80000)
#endif


// 0x0 (SOC_RESET_CONTROL)
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_LSB                                  13
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_MSB                                  13
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_MASK                                 0x2000
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_GET(x)                               (((x) & SOC_RESET_CONTROL_PCIE_PHY_SRESET_MASK) >> SOC_RESET_CONTROL_PCIE_PHY_SRESET_LSB)
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_SET(x)                               (((0 | (x)) << SOC_RESET_CONTROL_PCIE_PHY_SRESET_LSB) & SOC_RESET_CONTROL_PCIE_PHY_SRESET_MASK)
#define SOC_RESET_CONTROL_PCIE_PHY_SRESET_RESET                                0x0
#define SOC_RESET_CONTROL_PCIE_DIG_RST_LSB                                     12
#define SOC_RESET_CONTROL_PCIE_DIG_RST_MSB                                     12
#define SOC_RESET_CONTROL_PCIE_DIG_RST_MASK                                    0x1000
#define SOC_RESET_CONTROL_PCIE_DIG_RST_GET(x)                                  (((x) & SOC_RESET_CONTROL_PCIE_DIG_RST_MASK) >> SOC_RESET_CONTROL_PCIE_DIG_RST_LSB)
#define SOC_RESET_CONTROL_PCIE_DIG_RST_SET(x)                                  (((0 | (x)) << SOC_RESET_CONTROL_PCIE_DIG_RST_LSB) & SOC_RESET_CONTROL_PCIE_DIG_RST_MASK)
#define SOC_RESET_CONTROL_PCIE_DIG_RST_RESET                                   0x0
#define SOC_RESET_CONTROL_CPU_INIT_RESET_LSB                                   11
#define SOC_RESET_CONTROL_CPU_INIT_RESET_MSB                                   11
#define SOC_RESET_CONTROL_CPU_INIT_RESET_MASK                                  0x800
#define SOC_RESET_CONTROL_CPU_INIT_RESET_GET(x)                                (((x) & SOC_RESET_CONTROL_CPU_INIT_RESET_MASK) >> SOC_RESET_CONTROL_CPU_INIT_RESET_LSB)
#define SOC_RESET_CONTROL_CPU_INIT_RESET_SET(x)                                (((0 | (x)) << SOC_RESET_CONTROL_CPU_INIT_RESET_LSB) & SOC_RESET_CONTROL_CPU_INIT_RESET_MASK)
#define SOC_RESET_CONTROL_CPU_INIT_RESET_RESET                                 0x1
#define SOC_RESET_CONTROL_COLD_RST_LSB                                         8
#define SOC_RESET_CONTROL_COLD_RST_MSB                                         8
#define SOC_RESET_CONTROL_COLD_RST_MASK                                        0x100
#define SOC_RESET_CONTROL_COLD_RST_GET(x)                                      (((x) & SOC_RESET_CONTROL_COLD_RST_MASK) >> SOC_RESET_CONTROL_COLD_RST_LSB)
#define SOC_RESET_CONTROL_COLD_RST_SET(x)                                      (((0 | (x)) << SOC_RESET_CONTROL_COLD_RST_LSB) & SOC_RESET_CONTROL_COLD_RST_MASK)
#define SOC_RESET_CONTROL_COLD_RST_RESET                                       0x0
#define SOC_RESET_CONTROL_CPU_WARM_RST_LSB                                     6
#define SOC_RESET_CONTROL_CPU_WARM_RST_MSB                                     6
#define SOC_RESET_CONTROL_CPU_WARM_RST_MASK                                    0x40
#define SOC_RESET_CONTROL_CPU_WARM_RST_GET(x)                                  (((x) & SOC_RESET_CONTROL_CPU_WARM_RST_MASK) >> SOC_RESET_CONTROL_CPU_WARM_RST_LSB)
#define SOC_RESET_CONTROL_CPU_WARM_RST_SET(x)                                  (((0 | (x)) << SOC_RESET_CONTROL_CPU_WARM_RST_LSB) & SOC_RESET_CONTROL_CPU_WARM_RST_MASK)
#define SOC_RESET_CONTROL_CPU_WARM_RST_RESET                                   0x0
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB                              2
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MSB                              2
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK                             0x4
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_GET(x)                           (((x) & SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK) >> SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB)
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_SET(x)                           (((0 | (x)) << SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB) & SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK)
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_RESET                            0x0
#define SOC_RESET_CONTROL_UART_RST_LSB                                         1
#define SOC_RESET_CONTROL_UART_RST_MSB                                         1
#define SOC_RESET_CONTROL_UART_RST_MASK                                        0x2
#define SOC_RESET_CONTROL_UART_RST_GET(x)                                      (((x) & SOC_RESET_CONTROL_UART_RST_MASK) >> SOC_RESET_CONTROL_UART_RST_LSB)
#define SOC_RESET_CONTROL_UART_RST_SET(x)                                      (((0 | (x)) << SOC_RESET_CONTROL_UART_RST_LSB) & SOC_RESET_CONTROL_UART_RST_MASK)
#define SOC_RESET_CONTROL_UART_RST_RESET                                       0x0
#define SOC_RESET_CONTROL_SI0_RST_LSB                                          0
#define SOC_RESET_CONTROL_SI0_RST_MSB                                          0
#define SOC_RESET_CONTROL_SI0_RST_MASK                                         0x1
#define SOC_RESET_CONTROL_SI0_RST_GET(x)                                       (((x) & SOC_RESET_CONTROL_SI0_RST_MASK) >> SOC_RESET_CONTROL_SI0_RST_LSB)
#define SOC_RESET_CONTROL_SI0_RST_SET(x)                                       (((0 | (x)) << SOC_RESET_CONTROL_SI0_RST_LSB) & SOC_RESET_CONTROL_SI0_RST_MASK)
#define SOC_RESET_CONTROL_SI0_RST_RESET                                        0x0
#define SOC_RESET_CONTROL_ADDRESS                                              (0x0 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RESET_CONTROL_RSTMASK                                              0x3947
#define SOC_RESET_CONTROL_RESET                                                0x800

// 0x20 (SOC_CPU_CLOCK)
#define SOC_CPU_CLOCK_STANDARD_LSB                                             0
#define SOC_CPU_CLOCK_STANDARD_MSB                                             0
#define SOC_CPU_CLOCK_STANDARD_MASK                                            0x1
#define SOC_CPU_CLOCK_STANDARD_GET(x)                                          (((x) & SOC_CPU_CLOCK_STANDARD_MASK) >> SOC_CPU_CLOCK_STANDARD_LSB)
#define SOC_CPU_CLOCK_STANDARD_SET(x)                                          (((0 | (x)) << SOC_CPU_CLOCK_STANDARD_LSB) & SOC_CPU_CLOCK_STANDARD_MASK)
#define SOC_CPU_CLOCK_STANDARD_RESET                                           0x1
#define SOC_CPU_CLOCK_ADDRESS                                                  (0x20 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_CPU_CLOCK_RSTMASK                                                  0x1
#define SOC_CPU_CLOCK_RESET                                                    0x1

// 0x28 (SOC_CLOCK_CONTROL)
#define SOC_CLOCK_CONTROL_SI0_CLK_LSB                                          0
#define SOC_CLOCK_CONTROL_SI0_CLK_MSB                                          0
#define SOC_CLOCK_CONTROL_SI0_CLK_MASK                                         0x1
#define SOC_CLOCK_CONTROL_SI0_CLK_GET(x)                                       (((x) & SOC_CLOCK_CONTROL_SI0_CLK_MASK) >> SOC_CLOCK_CONTROL_SI0_CLK_LSB)
#define SOC_CLOCK_CONTROL_SI0_CLK_SET(x)                                       (((0 | (x)) << SOC_CLOCK_CONTROL_SI0_CLK_LSB) & SOC_CLOCK_CONTROL_SI0_CLK_MASK)
#define SOC_CLOCK_CONTROL_SI0_CLK_RESET                                        0x1
#define SOC_CLOCK_CONTROL_ADDRESS                                              (0x28 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_CLOCK_CONTROL_RSTMASK                                              0x1
#define SOC_CLOCK_CONTROL_RESET                                                0x1

// 0x2c (SOC_INT_STATUS)
#define SOC_INT_STATUS_THERM_LSB                                               15
#define SOC_INT_STATUS_THERM_MSB                                               15
#define SOC_INT_STATUS_THERM_MASK                                              0x8000
#define SOC_INT_STATUS_THERM_GET(x)                                            (((x) & SOC_INT_STATUS_THERM_MASK) >> SOC_INT_STATUS_THERM_LSB)
#define SOC_INT_STATUS_THERM_SET(x)                                            (((0 | (x)) << SOC_INT_STATUS_THERM_LSB) & SOC_INT_STATUS_THERM_MASK)
#define SOC_INT_STATUS_THERM_RESET                                             0x0
#define SOC_INT_STATUS_EFUSE_OVERWRITE_LSB                                     14
#define SOC_INT_STATUS_EFUSE_OVERWRITE_MSB                                     14
#define SOC_INT_STATUS_EFUSE_OVERWRITE_MASK                                    0x4000
#define SOC_INT_STATUS_EFUSE_OVERWRITE_GET(x)                                  (((x) & SOC_INT_STATUS_EFUSE_OVERWRITE_MASK) >> SOC_INT_STATUS_EFUSE_OVERWRITE_LSB)
#define SOC_INT_STATUS_EFUSE_OVERWRITE_SET(x)                                  (((0 | (x)) << SOC_INT_STATUS_EFUSE_OVERWRITE_LSB) & SOC_INT_STATUS_EFUSE_OVERWRITE_MASK)
#define SOC_INT_STATUS_EFUSE_OVERWRITE_RESET                                   0x0
#define SOC_INT_STATUS_RTC_POWER_LSB                                           12
#define SOC_INT_STATUS_RTC_POWER_MSB                                           12
#define SOC_INT_STATUS_RTC_POWER_MASK                                          0x1000
#define SOC_INT_STATUS_RTC_POWER_GET(x)                                        (((x) & SOC_INT_STATUS_RTC_POWER_MASK) >> SOC_INT_STATUS_RTC_POWER_LSB)
#define SOC_INT_STATUS_RTC_POWER_SET(x)                                        (((0 | (x)) << SOC_INT_STATUS_RTC_POWER_LSB) & SOC_INT_STATUS_RTC_POWER_MASK)
#define SOC_INT_STATUS_RTC_POWER_RESET                                         0x0
#define SOC_INT_STATUS_RTC_ALARM_LSB                                           10
#define SOC_INT_STATUS_RTC_ALARM_MSB                                           10
#define SOC_INT_STATUS_RTC_ALARM_MASK                                          0x400
#define SOC_INT_STATUS_RTC_ALARM_GET(x)                                        (((x) & SOC_INT_STATUS_RTC_ALARM_MASK) >> SOC_INT_STATUS_RTC_ALARM_LSB)
#define SOC_INT_STATUS_RTC_ALARM_SET(x)                                        (((0 | (x)) << SOC_INT_STATUS_RTC_ALARM_LSB) & SOC_INT_STATUS_RTC_ALARM_MASK)
#define SOC_INT_STATUS_RTC_ALARM_RESET                                         0x0
#define SOC_INT_STATUS_SI_LSB                                                  3
#define SOC_INT_STATUS_SI_MSB                                                  3
#define SOC_INT_STATUS_SI_MASK                                                 0x8
#define SOC_INT_STATUS_SI_GET(x)                                               (((x) & SOC_INT_STATUS_SI_MASK) >> SOC_INT_STATUS_SI_LSB)
#define SOC_INT_STATUS_SI_SET(x)                                               (((0 | (x)) << SOC_INT_STATUS_SI_LSB) & SOC_INT_STATUS_SI_MASK)
#define SOC_INT_STATUS_SI_RESET                                                0x0
#define SOC_INT_STATUS_GPIO_LSB                                                2
#define SOC_INT_STATUS_GPIO_MSB                                                2
#define SOC_INT_STATUS_GPIO_MASK                                               0x4
#define SOC_INT_STATUS_GPIO_GET(x)                                             (((x) & SOC_INT_STATUS_GPIO_MASK) >> SOC_INT_STATUS_GPIO_LSB)
#define SOC_INT_STATUS_GPIO_SET(x)                                             (((0 | (x)) << SOC_INT_STATUS_GPIO_LSB) & SOC_INT_STATUS_GPIO_MASK)
#define SOC_INT_STATUS_GPIO_RESET                                              0x0
#define SOC_INT_STATUS_ERROR_LSB                                               1
#define SOC_INT_STATUS_ERROR_MSB                                               1
#define SOC_INT_STATUS_ERROR_MASK                                              0x2
#define SOC_INT_STATUS_ERROR_GET(x)                                            (((x) & SOC_INT_STATUS_ERROR_MASK) >> SOC_INT_STATUS_ERROR_LSB)
#define SOC_INT_STATUS_ERROR_SET(x)                                            (((0 | (x)) << SOC_INT_STATUS_ERROR_LSB) & SOC_INT_STATUS_ERROR_MASK)
#define SOC_INT_STATUS_ERROR_RESET                                             0x0
#define SOC_INT_STATUS_ADDRESS                                                 (0x2c + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_INT_STATUS_RSTMASK                                                 0xd40e
#define SOC_INT_STATUS_RESET                                                   0x0

// 0x30 (SOC_RTC_CONTROL)
#define SOC_RTC_CONTROL_ENABLE_LSB                                             2
#define SOC_RTC_CONTROL_ENABLE_MSB                                             2
#define SOC_RTC_CONTROL_ENABLE_MASK                                            0x4
#define SOC_RTC_CONTROL_ENABLE_GET(x)                                          (((x) & SOC_RTC_CONTROL_ENABLE_MASK) >> SOC_RTC_CONTROL_ENABLE_LSB)
#define SOC_RTC_CONTROL_ENABLE_SET(x)                                          (((0 | (x)) << SOC_RTC_CONTROL_ENABLE_LSB) & SOC_RTC_CONTROL_ENABLE_MASK)
#define SOC_RTC_CONTROL_ENABLE_RESET                                           0x0
#define SOC_RTC_CONTROL_LOAD_RTC_LSB                                           1
#define SOC_RTC_CONTROL_LOAD_RTC_MSB                                           1
#define SOC_RTC_CONTROL_LOAD_RTC_MASK                                          0x2
#define SOC_RTC_CONTROL_LOAD_RTC_GET(x)                                        (((x) & SOC_RTC_CONTROL_LOAD_RTC_MASK) >> SOC_RTC_CONTROL_LOAD_RTC_LSB)
#define SOC_RTC_CONTROL_LOAD_RTC_SET(x)                                        (((0 | (x)) << SOC_RTC_CONTROL_LOAD_RTC_LSB) & SOC_RTC_CONTROL_LOAD_RTC_MASK)
#define SOC_RTC_CONTROL_LOAD_RTC_RESET                                         0x0
#define SOC_RTC_CONTROL_LOAD_ALARM_LSB                                         0
#define SOC_RTC_CONTROL_LOAD_ALARM_MSB                                         0
#define SOC_RTC_CONTROL_LOAD_ALARM_MASK                                        0x1
#define SOC_RTC_CONTROL_LOAD_ALARM_GET(x)                                      (((x) & SOC_RTC_CONTROL_LOAD_ALARM_MASK) >> SOC_RTC_CONTROL_LOAD_ALARM_LSB)
#define SOC_RTC_CONTROL_LOAD_ALARM_SET(x)                                      (((0 | (x)) << SOC_RTC_CONTROL_LOAD_ALARM_LSB) & SOC_RTC_CONTROL_LOAD_ALARM_MASK)
#define SOC_RTC_CONTROL_LOAD_ALARM_RESET                                       0x0
#define SOC_RTC_CONTROL_ADDRESS                                                (0x30 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_CONTROL_RSTMASK                                                0x7
#define SOC_RTC_CONTROL_RESET                                                  0x0

// 0x34 (SOC_RTC_TIME)
#define SOC_RTC_TIME_WEEK_DAY_LSB                                              24
#define SOC_RTC_TIME_WEEK_DAY_MSB                                              26
#define SOC_RTC_TIME_WEEK_DAY_MASK                                             0x7000000
#define SOC_RTC_TIME_WEEK_DAY_GET(x)                                           (((x) & SOC_RTC_TIME_WEEK_DAY_MASK) >> SOC_RTC_TIME_WEEK_DAY_LSB)
#define SOC_RTC_TIME_WEEK_DAY_SET(x)                                           (((0 | (x)) << SOC_RTC_TIME_WEEK_DAY_LSB) & SOC_RTC_TIME_WEEK_DAY_MASK)
#define SOC_RTC_TIME_WEEK_DAY_RESET                                            0x1
#define SOC_RTC_TIME_HOUR_LSB                                                  16
#define SOC_RTC_TIME_HOUR_MSB                                                  21
#define SOC_RTC_TIME_HOUR_MASK                                                 0x3f0000
#define SOC_RTC_TIME_HOUR_GET(x)                                               (((x) & SOC_RTC_TIME_HOUR_MASK) >> SOC_RTC_TIME_HOUR_LSB)
#define SOC_RTC_TIME_HOUR_SET(x)                                               (((0 | (x)) << SOC_RTC_TIME_HOUR_LSB) & SOC_RTC_TIME_HOUR_MASK)
#define SOC_RTC_TIME_HOUR_RESET                                                0x12
#define SOC_RTC_TIME_MINUTE_LSB                                                8
#define SOC_RTC_TIME_MINUTE_MSB                                                14
#define SOC_RTC_TIME_MINUTE_MASK                                               0x7f00
#define SOC_RTC_TIME_MINUTE_GET(x)                                             (((x) & SOC_RTC_TIME_MINUTE_MASK) >> SOC_RTC_TIME_MINUTE_LSB)
#define SOC_RTC_TIME_MINUTE_SET(x)                                             (((0 | (x)) << SOC_RTC_TIME_MINUTE_LSB) & SOC_RTC_TIME_MINUTE_MASK)
#define SOC_RTC_TIME_MINUTE_RESET                                              0x0
#define SOC_RTC_TIME_SECOND_LSB                                                0
#define SOC_RTC_TIME_SECOND_MSB                                                6
#define SOC_RTC_TIME_SECOND_MASK                                               0x7f
#define SOC_RTC_TIME_SECOND_GET(x)                                             (((x) & SOC_RTC_TIME_SECOND_MASK) >> SOC_RTC_TIME_SECOND_LSB)
#define SOC_RTC_TIME_SECOND_SET(x)                                             (((0 | (x)) << SOC_RTC_TIME_SECOND_LSB) & SOC_RTC_TIME_SECOND_MASK)
#define SOC_RTC_TIME_SECOND_RESET                                              0x0
#define SOC_RTC_TIME_ADDRESS                                                   (0x34 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_TIME_RSTMASK                                                   0x73f7f7f
#define SOC_RTC_TIME_RESET                                                     0x1120000

// 0x38 (SOC_RTC_DATE)
#define SOC_RTC_DATE_YEAR_LSB                                                  16
#define SOC_RTC_DATE_YEAR_MSB                                                  23
#define SOC_RTC_DATE_YEAR_MASK                                                 0xff0000
#define SOC_RTC_DATE_YEAR_GET(x)                                               (((x) & SOC_RTC_DATE_YEAR_MASK) >> SOC_RTC_DATE_YEAR_LSB)
#define SOC_RTC_DATE_YEAR_SET(x)                                               (((0 | (x)) << SOC_RTC_DATE_YEAR_LSB) & SOC_RTC_DATE_YEAR_MASK)
#define SOC_RTC_DATE_YEAR_RESET                                                0x0
#define SOC_RTC_DATE_MONTH_LSB                                                 8
#define SOC_RTC_DATE_MONTH_MSB                                                 12
#define SOC_RTC_DATE_MONTH_MASK                                                0x1f00
#define SOC_RTC_DATE_MONTH_GET(x)                                              (((x) & SOC_RTC_DATE_MONTH_MASK) >> SOC_RTC_DATE_MONTH_LSB)
#define SOC_RTC_DATE_MONTH_SET(x)                                              (((0 | (x)) << SOC_RTC_DATE_MONTH_LSB) & SOC_RTC_DATE_MONTH_MASK)
#define SOC_RTC_DATE_MONTH_RESET                                               0x1
#define SOC_RTC_DATE_MONTH_DAY_LSB                                             0
#define SOC_RTC_DATE_MONTH_DAY_MSB                                             5
#define SOC_RTC_DATE_MONTH_DAY_MASK                                            0x3f
#define SOC_RTC_DATE_MONTH_DAY_GET(x)                                          (((x) & SOC_RTC_DATE_MONTH_DAY_MASK) >> SOC_RTC_DATE_MONTH_DAY_LSB)
#define SOC_RTC_DATE_MONTH_DAY_SET(x)                                          (((0 | (x)) << SOC_RTC_DATE_MONTH_DAY_LSB) & SOC_RTC_DATE_MONTH_DAY_MASK)
#define SOC_RTC_DATE_MONTH_DAY_RESET                                           0x1
#define SOC_RTC_DATE_ADDRESS                                                   (0x38 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_DATE_RSTMASK                                                   0xff1f3f
#define SOC_RTC_DATE_RESET                                                     0x101

// 0x3c (SOC_RTC_SET_TIME)
#define SOC_RTC_SET_TIME_WEEK_DAY_LSB                                          24
#define SOC_RTC_SET_TIME_WEEK_DAY_MSB                                          26
#define SOC_RTC_SET_TIME_WEEK_DAY_MASK                                         0x7000000
#define SOC_RTC_SET_TIME_WEEK_DAY_GET(x)                                       (((x) & SOC_RTC_SET_TIME_WEEK_DAY_MASK) >> SOC_RTC_SET_TIME_WEEK_DAY_LSB)
#define SOC_RTC_SET_TIME_WEEK_DAY_SET(x)                                       (((0 | (x)) << SOC_RTC_SET_TIME_WEEK_DAY_LSB) & SOC_RTC_SET_TIME_WEEK_DAY_MASK)
#define SOC_RTC_SET_TIME_WEEK_DAY_RESET                                        0x1
#define SOC_RTC_SET_TIME_HOUR_LSB                                              16
#define SOC_RTC_SET_TIME_HOUR_MSB                                              21
#define SOC_RTC_SET_TIME_HOUR_MASK                                             0x3f0000
#define SOC_RTC_SET_TIME_HOUR_GET(x)                                           (((x) & SOC_RTC_SET_TIME_HOUR_MASK) >> SOC_RTC_SET_TIME_HOUR_LSB)
#define SOC_RTC_SET_TIME_HOUR_SET(x)                                           (((0 | (x)) << SOC_RTC_SET_TIME_HOUR_LSB) & SOC_RTC_SET_TIME_HOUR_MASK)
#define SOC_RTC_SET_TIME_HOUR_RESET                                            0x0
#define SOC_RTC_SET_TIME_MINUTE_LSB                                            8
#define SOC_RTC_SET_TIME_MINUTE_MSB                                            14
#define SOC_RTC_SET_TIME_MINUTE_MASK                                           0x7f00
#define SOC_RTC_SET_TIME_MINUTE_GET(x)                                         (((x) & SOC_RTC_SET_TIME_MINUTE_MASK) >> SOC_RTC_SET_TIME_MINUTE_LSB)
#define SOC_RTC_SET_TIME_MINUTE_SET(x)                                         (((0 | (x)) << SOC_RTC_SET_TIME_MINUTE_LSB) & SOC_RTC_SET_TIME_MINUTE_MASK)
#define SOC_RTC_SET_TIME_MINUTE_RESET                                          0x0
#define SOC_RTC_SET_TIME_SECOND_LSB                                            0
#define SOC_RTC_SET_TIME_SECOND_MSB                                            6
#define SOC_RTC_SET_TIME_SECOND_MASK                                           0x7f
#define SOC_RTC_SET_TIME_SECOND_GET(x)                                         (((x) & SOC_RTC_SET_TIME_SECOND_MASK) >> SOC_RTC_SET_TIME_SECOND_LSB)
#define SOC_RTC_SET_TIME_SECOND_SET(x)                                         (((0 | (x)) << SOC_RTC_SET_TIME_SECOND_LSB) & SOC_RTC_SET_TIME_SECOND_MASK)
#define SOC_RTC_SET_TIME_SECOND_RESET                                          0x0
#define SOC_RTC_SET_TIME_ADDRESS                                               (0x3c + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_SET_TIME_RSTMASK                                               0x73f7f7f
#define SOC_RTC_SET_TIME_RESET                                                 0x1000000

// 0x40 (SOC_RTC_SET_DATE)
#define SOC_RTC_SET_DATE_YEAR_LSB                                              16
#define SOC_RTC_SET_DATE_YEAR_MSB                                              23
#define SOC_RTC_SET_DATE_YEAR_MASK                                             0xff0000
#define SOC_RTC_SET_DATE_YEAR_GET(x)                                           (((x) & SOC_RTC_SET_DATE_YEAR_MASK) >> SOC_RTC_SET_DATE_YEAR_LSB)
#define SOC_RTC_SET_DATE_YEAR_SET(x)                                           (((0 | (x)) << SOC_RTC_SET_DATE_YEAR_LSB) & SOC_RTC_SET_DATE_YEAR_MASK)
#define SOC_RTC_SET_DATE_YEAR_RESET                                            0x0
#define SOC_RTC_SET_DATE_MONTH_LSB                                             8
#define SOC_RTC_SET_DATE_MONTH_MSB                                             12
#define SOC_RTC_SET_DATE_MONTH_MASK                                            0x1f00
#define SOC_RTC_SET_DATE_MONTH_GET(x)                                          (((x) & SOC_RTC_SET_DATE_MONTH_MASK) >> SOC_RTC_SET_DATE_MONTH_LSB)
#define SOC_RTC_SET_DATE_MONTH_SET(x)                                          (((0 | (x)) << SOC_RTC_SET_DATE_MONTH_LSB) & SOC_RTC_SET_DATE_MONTH_MASK)
#define SOC_RTC_SET_DATE_MONTH_RESET                                           0x1
#define SOC_RTC_SET_DATE_MONTH_DAY_LSB                                         0
#define SOC_RTC_SET_DATE_MONTH_DAY_MSB                                         5
#define SOC_RTC_SET_DATE_MONTH_DAY_MASK                                        0x3f
#define SOC_RTC_SET_DATE_MONTH_DAY_GET(x)                                      (((x) & SOC_RTC_SET_DATE_MONTH_DAY_MASK) >> SOC_RTC_SET_DATE_MONTH_DAY_LSB)
#define SOC_RTC_SET_DATE_MONTH_DAY_SET(x)                                      (((0 | (x)) << SOC_RTC_SET_DATE_MONTH_DAY_LSB) & SOC_RTC_SET_DATE_MONTH_DAY_MASK)
#define SOC_RTC_SET_DATE_MONTH_DAY_RESET                                       0x1
#define SOC_RTC_SET_DATE_ADDRESS                                               (0x40 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_SET_DATE_RSTMASK                                               0xff1f3f
#define SOC_RTC_SET_DATE_RESET                                                 0x101

// 0x44 (SOC_RTC_SET_ALARM)
#define SOC_RTC_SET_ALARM_HOUR_LSB                                             16
#define SOC_RTC_SET_ALARM_HOUR_MSB                                             21
#define SOC_RTC_SET_ALARM_HOUR_MASK                                            0x3f0000
#define SOC_RTC_SET_ALARM_HOUR_GET(x)                                          (((x) & SOC_RTC_SET_ALARM_HOUR_MASK) >> SOC_RTC_SET_ALARM_HOUR_LSB)
#define SOC_RTC_SET_ALARM_HOUR_SET(x)                                          (((0 | (x)) << SOC_RTC_SET_ALARM_HOUR_LSB) & SOC_RTC_SET_ALARM_HOUR_MASK)
#define SOC_RTC_SET_ALARM_HOUR_RESET                                           0x0
#define SOC_RTC_SET_ALARM_MINUTE_LSB                                           8
#define SOC_RTC_SET_ALARM_MINUTE_MSB                                           14
#define SOC_RTC_SET_ALARM_MINUTE_MASK                                          0x7f00
#define SOC_RTC_SET_ALARM_MINUTE_GET(x)                                        (((x) & SOC_RTC_SET_ALARM_MINUTE_MASK) >> SOC_RTC_SET_ALARM_MINUTE_LSB)
#define SOC_RTC_SET_ALARM_MINUTE_SET(x)                                        (((0 | (x)) << SOC_RTC_SET_ALARM_MINUTE_LSB) & SOC_RTC_SET_ALARM_MINUTE_MASK)
#define SOC_RTC_SET_ALARM_MINUTE_RESET                                         0x0
#define SOC_RTC_SET_ALARM_SECOND_LSB                                           0
#define SOC_RTC_SET_ALARM_SECOND_MSB                                           6
#define SOC_RTC_SET_ALARM_SECOND_MASK                                          0x7f
#define SOC_RTC_SET_ALARM_SECOND_GET(x)                                        (((x) & SOC_RTC_SET_ALARM_SECOND_MASK) >> SOC_RTC_SET_ALARM_SECOND_LSB)
#define SOC_RTC_SET_ALARM_SECOND_SET(x)                                        (((0 | (x)) << SOC_RTC_SET_ALARM_SECOND_LSB) & SOC_RTC_SET_ALARM_SECOND_MASK)
#define SOC_RTC_SET_ALARM_SECOND_RESET                                         0x0
#define SOC_RTC_SET_ALARM_ADDRESS                                              (0x44 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_SET_ALARM_RSTMASK                                              0x3f7f7f
#define SOC_RTC_SET_ALARM_RESET                                                0x0

// 0x48 (SOC_RTC_CONFIG)
#define SOC_RTC_CONFIG_BCD_LSB                                                 2
#define SOC_RTC_CONFIG_BCD_MSB                                                 2
#define SOC_RTC_CONFIG_BCD_MASK                                                0x4
#define SOC_RTC_CONFIG_BCD_GET(x)                                              (((x) & SOC_RTC_CONFIG_BCD_MASK) >> SOC_RTC_CONFIG_BCD_LSB)
#define SOC_RTC_CONFIG_BCD_SET(x)                                              (((0 | (x)) << SOC_RTC_CONFIG_BCD_LSB) & SOC_RTC_CONFIG_BCD_MASK)
#define SOC_RTC_CONFIG_BCD_RESET                                               0x1
#define SOC_RTC_CONFIG_TWELVE_HOUR_LSB                                         1
#define SOC_RTC_CONFIG_TWELVE_HOUR_MSB                                         1
#define SOC_RTC_CONFIG_TWELVE_HOUR_MASK                                        0x2
#define SOC_RTC_CONFIG_TWELVE_HOUR_GET(x)                                      (((x) & SOC_RTC_CONFIG_TWELVE_HOUR_MASK) >> SOC_RTC_CONFIG_TWELVE_HOUR_LSB)
#define SOC_RTC_CONFIG_TWELVE_HOUR_SET(x)                                      (((0 | (x)) << SOC_RTC_CONFIG_TWELVE_HOUR_LSB) & SOC_RTC_CONFIG_TWELVE_HOUR_MASK)
#define SOC_RTC_CONFIG_TWELVE_HOUR_RESET                                       0x1
#define SOC_RTC_CONFIG_DSE_LSB                                                 0
#define SOC_RTC_CONFIG_DSE_MSB                                                 0
#define SOC_RTC_CONFIG_DSE_MASK                                                0x1
#define SOC_RTC_CONFIG_DSE_GET(x)                                              (((x) & SOC_RTC_CONFIG_DSE_MASK) >> SOC_RTC_CONFIG_DSE_LSB)
#define SOC_RTC_CONFIG_DSE_SET(x)                                              (((0 | (x)) << SOC_RTC_CONFIG_DSE_LSB) & SOC_RTC_CONFIG_DSE_MASK)
#define SOC_RTC_CONFIG_DSE_RESET                                               0x1
#define SOC_RTC_CONFIG_ADDRESS                                                 (0x48 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_CONFIG_RSTMASK                                                 0x7
#define SOC_RTC_CONFIG_RESET                                                   0x7

// 0x4c (SOC_RTC_ALARM_STATUS)
#define SOC_RTC_ALARM_STATUS_ENABLE_LSB                                        1
#define SOC_RTC_ALARM_STATUS_ENABLE_MSB                                        1
#define SOC_RTC_ALARM_STATUS_ENABLE_MASK                                       0x2
#define SOC_RTC_ALARM_STATUS_ENABLE_GET(x)                                     (((x) & SOC_RTC_ALARM_STATUS_ENABLE_MASK) >> SOC_RTC_ALARM_STATUS_ENABLE_LSB)
#define SOC_RTC_ALARM_STATUS_ENABLE_SET(x)                                     (((0 | (x)) << SOC_RTC_ALARM_STATUS_ENABLE_LSB) & SOC_RTC_ALARM_STATUS_ENABLE_MASK)
#define SOC_RTC_ALARM_STATUS_ENABLE_RESET                                      0x0
#define SOC_RTC_ALARM_STATUS_INTERRUPT_LSB                                     0
#define SOC_RTC_ALARM_STATUS_INTERRUPT_MSB                                     0
#define SOC_RTC_ALARM_STATUS_INTERRUPT_MASK                                    0x1
#define SOC_RTC_ALARM_STATUS_INTERRUPT_GET(x)                                  (((x) & SOC_RTC_ALARM_STATUS_INTERRUPT_MASK) >> SOC_RTC_ALARM_STATUS_INTERRUPT_LSB)
#define SOC_RTC_ALARM_STATUS_INTERRUPT_SET(x)                                  (((0 | (x)) << SOC_RTC_ALARM_STATUS_INTERRUPT_LSB) & SOC_RTC_ALARM_STATUS_INTERRUPT_MASK)
#define SOC_RTC_ALARM_STATUS_INTERRUPT_RESET                                   0x0
#define SOC_RTC_ALARM_STATUS_ADDRESS                                           (0x4c + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RTC_ALARM_STATUS_RSTMASK                                           0x3
#define SOC_RTC_ALARM_STATUS_RESET                                             0x0

// 0x50 (SOC_RESET_CAUSE)
#define SOC_RESET_CAUSE_LAST_LSB                                               0
#define SOC_RESET_CAUSE_LAST_MSB                                               2
#define SOC_RESET_CAUSE_LAST_MASK                                              0x7
#define SOC_RESET_CAUSE_LAST_GET(x)                                            (((x) & SOC_RESET_CAUSE_LAST_MASK) >> SOC_RESET_CAUSE_LAST_LSB)
#define SOC_RESET_CAUSE_LAST_SET(x)                                            (((0 | (x)) << SOC_RESET_CAUSE_LAST_LSB) & SOC_RESET_CAUSE_LAST_MASK)
#define SOC_RESET_CAUSE_LAST_RESET                                             0x0
#define SOC_RESET_CAUSE_ADDRESS                                                (0x50 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_RESET_CAUSE_RSTMASK                                                0x7
#define SOC_RESET_CAUSE_RESET                                                  0x0

// 0xd4 (SOC_LPO_CAL_TIME)
#define SOC_LPO_CAL_TIME_LENGTH_LSB                                            0
#define SOC_LPO_CAL_TIME_LENGTH_MSB                                            13
#define SOC_LPO_CAL_TIME_LENGTH_MASK                                           0x3fff
#define SOC_LPO_CAL_TIME_LENGTH_GET(x)                                         (((x) & SOC_LPO_CAL_TIME_LENGTH_MASK) >> SOC_LPO_CAL_TIME_LENGTH_LSB)
#define SOC_LPO_CAL_TIME_LENGTH_SET(x)                                         (((0 | (x)) << SOC_LPO_CAL_TIME_LENGTH_LSB) & SOC_LPO_CAL_TIME_LENGTH_MASK)
#define SOC_LPO_CAL_TIME_LENGTH_RESET                                          0x1f4
#define SOC_LPO_CAL_TIME_ADDRESS                                               (0xd4 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_CAL_TIME_RSTMASK                                               0x3fff
#define SOC_LPO_CAL_TIME_RESET                                                 0x1f4

// 0xd8 (SOC_LPO_INIT_DIVIDEND_INT)
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_LSB                                    0
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_MSB                                    23
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_MASK                                   0xffffff
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_GET(x)                                 (((x) & SOC_LPO_INIT_DIVIDEND_INT_VALUE_MASK) >> SOC_LPO_INIT_DIVIDEND_INT_VALUE_LSB)
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_SET(x)                                 (((0 | (x)) << SOC_LPO_INIT_DIVIDEND_INT_VALUE_LSB) & SOC_LPO_INIT_DIVIDEND_INT_VALUE_MASK)
#define SOC_LPO_INIT_DIVIDEND_INT_VALUE_RESET                                  0xb2d11
#define SOC_LPO_INIT_DIVIDEND_INT_ADDRESS                                      (0xd8 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_INIT_DIVIDEND_INT_RSTMASK                                      0xffffff
#define SOC_LPO_INIT_DIVIDEND_INT_RESET                                        0xb2d11

// 0xdc (SOC_LPO_INIT_DIVIDEND_FRACTION)
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_LSB                               0
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_MSB                               10
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_MASK                              0x7ff
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_GET(x)                            (((x) & SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_MASK) >> SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_LSB)
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_SET(x)                            (((0 | (x)) << SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_LSB) & SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_MASK)
#define SOC_LPO_INIT_DIVIDEND_FRACTION_VALUE_RESET                             0x4ba
#define SOC_LPO_INIT_DIVIDEND_FRACTION_ADDRESS                                 (0xdc + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_INIT_DIVIDEND_FRACTION_RSTMASK                                 0x7ff
#define SOC_LPO_INIT_DIVIDEND_FRACTION_RESET                                   0x4ba

// 0xe0 (SOC_LPO_CAL)
#define SOC_LPO_CAL_ENABLE_LSB                                                 20
#define SOC_LPO_CAL_ENABLE_MSB                                                 20
#define SOC_LPO_CAL_ENABLE_MASK                                                0x100000
#define SOC_LPO_CAL_ENABLE_GET(x)                                              (((x) & SOC_LPO_CAL_ENABLE_MASK) >> SOC_LPO_CAL_ENABLE_LSB)
#define SOC_LPO_CAL_ENABLE_SET(x)                                              (((0 | (x)) << SOC_LPO_CAL_ENABLE_LSB) & SOC_LPO_CAL_ENABLE_MASK)
#define SOC_LPO_CAL_ENABLE_RESET                                               0x0
#define SOC_LPO_CAL_ADDRESS                                                    (0xe0 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_CAL_RSTMASK                                                    0x100000
#define SOC_LPO_CAL_RESET                                                      0x0

// 0xe4 (SOC_LPO_CAL_TEST_CONTROL)
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_LSB                                    16
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_MSB                                    16
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_MASK                                   0x10000
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_GET(x)                                 (((x) & SOC_LPO_CAL_TEST_CONTROL_ENABLE_MASK) >> SOC_LPO_CAL_TEST_CONTROL_ENABLE_LSB)
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_SET(x)                                 (((0 | (x)) << SOC_LPO_CAL_TEST_CONTROL_ENABLE_LSB) & SOC_LPO_CAL_TEST_CONTROL_ENABLE_MASK)
#define SOC_LPO_CAL_TEST_CONTROL_ENABLE_RESET                                  0x0
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_LSB                                0
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_MSB                                15
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_MASK                               0xffff
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_GET(x)                             (((x) & SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_MASK) >> SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_LSB)
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_SET(x)                             (((0 | (x)) << SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_LSB) & SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_MASK)
#define SOC_LPO_CAL_TEST_CONTROL_RTC_CYCLES_RESET                              0x0
#define SOC_LPO_CAL_TEST_CONTROL_ADDRESS                                       (0xe4 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_CAL_TEST_CONTROL_RSTMASK                                       0x1ffff
#define SOC_LPO_CAL_TEST_CONTROL_RESET                                         0x0

// 0xe8 (SOC_LPO_CAL_TEST_STATUS)
#define SOC_LPO_CAL_TEST_STATUS_READY_LSB                                      28
#define SOC_LPO_CAL_TEST_STATUS_READY_MSB                                      28
#define SOC_LPO_CAL_TEST_STATUS_READY_MASK                                     0x10000000
#define SOC_LPO_CAL_TEST_STATUS_READY_GET(x)                                   (((x) & SOC_LPO_CAL_TEST_STATUS_READY_MASK) >> SOC_LPO_CAL_TEST_STATUS_READY_LSB)
#define SOC_LPO_CAL_TEST_STATUS_READY_SET(x)                                   (((0 | (x)) << SOC_LPO_CAL_TEST_STATUS_READY_LSB) & SOC_LPO_CAL_TEST_STATUS_READY_MASK)
#define SOC_LPO_CAL_TEST_STATUS_READY_RESET                                    0x0
#define SOC_LPO_CAL_TEST_STATUS_COUNT_LSB                                      0
#define SOC_LPO_CAL_TEST_STATUS_COUNT_MSB                                      27
#define SOC_LPO_CAL_TEST_STATUS_COUNT_MASK                                     0xfffffff
#define SOC_LPO_CAL_TEST_STATUS_COUNT_GET(x)                                   (((x) & SOC_LPO_CAL_TEST_STATUS_COUNT_MASK) >> SOC_LPO_CAL_TEST_STATUS_COUNT_LSB)
#define SOC_LPO_CAL_TEST_STATUS_COUNT_SET(x)                                   (((0 | (x)) << SOC_LPO_CAL_TEST_STATUS_COUNT_LSB) & SOC_LPO_CAL_TEST_STATUS_COUNT_MASK)
#define SOC_LPO_CAL_TEST_STATUS_COUNT_RESET                                    0x0
#define SOC_LPO_CAL_TEST_STATUS_ADDRESS                                        (0xe8 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_LPO_CAL_TEST_STATUS_RSTMASK                                        0x1fffffff
#define SOC_LPO_CAL_TEST_STATUS_RESET                                          0x0

// 0xec (SOC_CHIP_ID)
#define SOC_CHIP_ID_VERSION_LSB                                                18
#define SOC_CHIP_ID_VERSION_MSB                                                31
#define SOC_CHIP_ID_VERSION_MASK                                               0xfffc0000
#define SOC_CHIP_ID_VERSION_GET(x)                                             (((x) & SOC_CHIP_ID_VERSION_MASK) >> SOC_CHIP_ID_VERSION_LSB)
#define SOC_CHIP_ID_VERSION_SET(x)                                             (((0 | (x)) << SOC_CHIP_ID_VERSION_LSB) & SOC_CHIP_ID_VERSION_MASK)
#define SOC_CHIP_ID_VERSION_RESET                                              0x0
#define SOC_CHIP_ID_TYPE_LSB                                                   12
#define SOC_CHIP_ID_TYPE_MSB                                                   17
#define SOC_CHIP_ID_TYPE_MASK                                                  0x3f000
#define SOC_CHIP_ID_TYPE_GET(x)                                                (((x) & SOC_CHIP_ID_TYPE_MASK) >> SOC_CHIP_ID_TYPE_LSB)
#define SOC_CHIP_ID_TYPE_SET(x)                                                (((0 | (x)) << SOC_CHIP_ID_TYPE_LSB) & SOC_CHIP_ID_TYPE_MASK)
#define SOC_CHIP_ID_TYPE_RESET                                                 0x0
#define SOC_CHIP_ID_REVISION_LSB                                               8
#define SOC_CHIP_ID_REVISION_MSB                                               11
#define SOC_CHIP_ID_REVISION_MASK                                              0xf00
#define SOC_CHIP_ID_REVISION_GET(x)                                            (((x) & SOC_CHIP_ID_REVISION_MASK) >> SOC_CHIP_ID_REVISION_LSB)
#define SOC_CHIP_ID_REVISION_SET(x)                                            (((0 | (x)) << SOC_CHIP_ID_REVISION_LSB) & SOC_CHIP_ID_REVISION_MASK)
#define SOC_CHIP_ID_REVISION_RESET                                             0x0
#define SOC_CHIP_ID_OLD_VERSION_LSB                                            0
#define SOC_CHIP_ID_OLD_VERSION_MSB                                            7
#define SOC_CHIP_ID_OLD_VERSION_MASK                                           0xff
#define SOC_CHIP_ID_OLD_VERSION_GET(x)                                         (((x) & SOC_CHIP_ID_OLD_VERSION_MASK) >> SOC_CHIP_ID_OLD_VERSION_LSB)
#define SOC_CHIP_ID_OLD_VERSION_SET(x)                                         (((0 | (x)) << SOC_CHIP_ID_OLD_VERSION_LSB) & SOC_CHIP_ID_OLD_VERSION_MASK)
#define SOC_CHIP_ID_OLD_VERSION_RESET                                          0x0
#define SOC_CHIP_ID_ADDRESS                                                    (0xec + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_CHIP_ID_RSTMASK                                                    0xffffffff
#define SOC_CHIP_ID_RESET                                                      0x0

// 0x10c (SOC_POWER_REG)
#define SOC_POWER_REG_SWREG_VS_EN_LSB                                          17
#define SOC_POWER_REG_SWREG_VS_EN_MSB                                          17
#define SOC_POWER_REG_SWREG_VS_EN_MASK                                         0x20000
#define SOC_POWER_REG_SWREG_VS_EN_GET(x)                                       (((x) & SOC_POWER_REG_SWREG_VS_EN_MASK) >> SOC_POWER_REG_SWREG_VS_EN_LSB)
#define SOC_POWER_REG_SWREG_VS_EN_SET(x)                                       (((0 | (x)) << SOC_POWER_REG_SWREG_VS_EN_LSB) & SOC_POWER_REG_SWREG_VS_EN_MASK)
#define SOC_POWER_REG_SWREG_VS_EN_RESET                                        0x0
#define SOC_POWER_REG_DISCON_MODE_EN_LSB                                       16
#define SOC_POWER_REG_DISCON_MODE_EN_MSB                                       16
#define SOC_POWER_REG_DISCON_MODE_EN_MASK                                      0x10000
#define SOC_POWER_REG_DISCON_MODE_EN_GET(x)                                    (((x) & SOC_POWER_REG_DISCON_MODE_EN_MASK) >> SOC_POWER_REG_DISCON_MODE_EN_LSB)
#define SOC_POWER_REG_DISCON_MODE_EN_SET(x)                                    (((0 | (x)) << SOC_POWER_REG_DISCON_MODE_EN_LSB) & SOC_POWER_REG_DISCON_MODE_EN_MASK)
#define SOC_POWER_REG_DISCON_MODE_EN_RESET                                     0x0
#define SOC_POWER_REG_DEEP_SLEEP_EN_LSB                                        15
#define SOC_POWER_REG_DEEP_SLEEP_EN_MSB                                        15
#define SOC_POWER_REG_DEEP_SLEEP_EN_MASK                                       0x8000
#define SOC_POWER_REG_DEEP_SLEEP_EN_GET(x)                                     (((x) & SOC_POWER_REG_DEEP_SLEEP_EN_MASK) >> SOC_POWER_REG_DEEP_SLEEP_EN_LSB)
#define SOC_POWER_REG_DEEP_SLEEP_EN_SET(x)                                     (((0 | (x)) << SOC_POWER_REG_DEEP_SLEEP_EN_LSB) & SOC_POWER_REG_DEEP_SLEEP_EN_MASK)
#define SOC_POWER_REG_DEEP_SLEEP_EN_RESET                                      0x0
#define SOC_POWER_REG_CPU_INT_ENABLE_LSB                                       7
#define SOC_POWER_REG_CPU_INT_ENABLE_MSB                                       7
#define SOC_POWER_REG_CPU_INT_ENABLE_MASK                                      0x80
#define SOC_POWER_REG_CPU_INT_ENABLE_GET(x)                                    (((x) & SOC_POWER_REG_CPU_INT_ENABLE_MASK) >> SOC_POWER_REG_CPU_INT_ENABLE_LSB)
#define SOC_POWER_REG_CPU_INT_ENABLE_SET(x)                                    (((0 | (x)) << SOC_POWER_REG_CPU_INT_ENABLE_LSB) & SOC_POWER_REG_CPU_INT_ENABLE_MASK)
#define SOC_POWER_REG_CPU_INT_ENABLE_RESET                                     0x0
#define SOC_POWER_REG_RADIO_PWD_EN_LSB                                         4
#define SOC_POWER_REG_RADIO_PWD_EN_MSB                                         4
#define SOC_POWER_REG_RADIO_PWD_EN_MASK                                        0x10
#define SOC_POWER_REG_RADIO_PWD_EN_GET(x)                                      (((x) & SOC_POWER_REG_RADIO_PWD_EN_MASK) >> SOC_POWER_REG_RADIO_PWD_EN_LSB)
#define SOC_POWER_REG_RADIO_PWD_EN_SET(x)                                      (((0 | (x)) << SOC_POWER_REG_RADIO_PWD_EN_LSB) & SOC_POWER_REG_RADIO_PWD_EN_MASK)
#define SOC_POWER_REG_RADIO_PWD_EN_RESET                                       0x0
#define SOC_POWER_REG_POWER_EN_LSB                                             0
#define SOC_POWER_REG_POWER_EN_MSB                                             0
#define SOC_POWER_REG_POWER_EN_MASK                                            0x1
#define SOC_POWER_REG_POWER_EN_GET(x)                                          (((x) & SOC_POWER_REG_POWER_EN_MASK) >> SOC_POWER_REG_POWER_EN_LSB)
#define SOC_POWER_REG_POWER_EN_SET(x)                                          (((0 | (x)) << SOC_POWER_REG_POWER_EN_LSB) & SOC_POWER_REG_POWER_EN_MASK)
#define SOC_POWER_REG_POWER_EN_RESET                                           0x0
#define SOC_POWER_REG_ADDRESS                                                  (0x10c + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_POWER_REG_RSTMASK                                                  0x38091
#define SOC_POWER_REG_RESET                                                    0x0

// 0x110 (SOC_CORE_CLK_CTRL)
#define SOC_CORE_CLK_CTRL_DIV_LSB                                              0
#define SOC_CORE_CLK_CTRL_DIV_MSB                                              2
#define SOC_CORE_CLK_CTRL_DIV_MASK                                             0x7
#define SOC_CORE_CLK_CTRL_DIV_GET(x)                                           (((x) & SOC_CORE_CLK_CTRL_DIV_MASK) >> SOC_CORE_CLK_CTRL_DIV_LSB)
#define SOC_CORE_CLK_CTRL_DIV_SET(x)                                           (((0 | (x)) << SOC_CORE_CLK_CTRL_DIV_LSB) & SOC_CORE_CLK_CTRL_DIV_MASK)
#define SOC_CORE_CLK_CTRL_DIV_RESET                                            0x0
#define SOC_CORE_CLK_CTRL_ADDRESS                                              (0x110 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_CORE_CLK_CTRL_RSTMASK                                              0x7
#define SOC_CORE_CLK_CTRL_RESET                                                0x0

// 0x114 (SOC_GPIO_WAKEUP_CONTROL)
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_LSB                                     0
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_MSB                                     0
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_MASK                                    0x1
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_GET(x)                                  (((x) & SOC_GPIO_WAKEUP_CONTROL_ENABLE_MASK) >> SOC_GPIO_WAKEUP_CONTROL_ENABLE_LSB)
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_SET(x)                                  (((0 | (x)) << SOC_GPIO_WAKEUP_CONTROL_ENABLE_LSB) & SOC_GPIO_WAKEUP_CONTROL_ENABLE_MASK)
#define SOC_GPIO_WAKEUP_CONTROL_ENABLE_RESET                                   0x0
#define SOC_GPIO_WAKEUP_CONTROL_ADDRESS                                        (0x114 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_GPIO_WAKEUP_CONTROL_RSTMASK                                        0x1
#define SOC_GPIO_WAKEUP_CONTROL_RESET                                          0x0

// 0x118 (SOC_OTP_BITS)
#define SOC_OTP_BITS_TYPE_LSB                                                  0
#define SOC_OTP_BITS_TYPE_MSB                                                  20
#define SOC_OTP_BITS_TYPE_MASK                                                 0x1fffff
#define SOC_OTP_BITS_TYPE_GET(x)                                               (((x) & SOC_OTP_BITS_TYPE_MASK) >> SOC_OTP_BITS_TYPE_LSB)
#define SOC_OTP_BITS_TYPE_SET(x)                                               (((0 | (x)) << SOC_OTP_BITS_TYPE_LSB) & SOC_OTP_BITS_TYPE_MASK)
#define SOC_OTP_BITS_TYPE_RESET                                                0x0
#define SOC_OTP_BITS_ADDRESS                                                   (0x118 + __RTC_SOC_REG_BASE_ADDRESS)
#define SOC_OTP_BITS_RSTMASK                                                   0x1fffff
#define SOC_OTP_BITS_RESET                                                     0x0

// 0x284 (LP_PERF_COUNTER)
#define LP_PERF_COUNTER_EN_LSB                                                 0
#define LP_PERF_COUNTER_EN_MSB                                                 0
#define LP_PERF_COUNTER_EN_MASK                                                0x1
#define LP_PERF_COUNTER_EN_GET(x)                                              (((x) & LP_PERF_COUNTER_EN_MASK) >> LP_PERF_COUNTER_EN_LSB)
#define LP_PERF_COUNTER_EN_SET(x)                                              (((0 | (x)) << LP_PERF_COUNTER_EN_LSB) & LP_PERF_COUNTER_EN_MASK)
#define LP_PERF_COUNTER_EN_RESET                                               0x0
#define LP_PERF_COUNTER_ADDRESS                                                (0x284 + __RTC_SOC_REG_BASE_ADDRESS)
#define LP_PERF_COUNTER_RSTMASK                                                0x1
#define LP_PERF_COUNTER_RESET                                                  0x0

// 0x288 (LP_PERF_LIGHT_SLEEP)
#define LP_PERF_LIGHT_SLEEP_CNT_LSB                                            0
#define LP_PERF_LIGHT_SLEEP_CNT_MSB                                            31
#define LP_PERF_LIGHT_SLEEP_CNT_MASK                                           0xffffffff
#define LP_PERF_LIGHT_SLEEP_CNT_GET(x)                                         (((x) & LP_PERF_LIGHT_SLEEP_CNT_MASK) >> LP_PERF_LIGHT_SLEEP_CNT_LSB)
#define LP_PERF_LIGHT_SLEEP_CNT_SET(x)                                         (((0 | (x)) << LP_PERF_LIGHT_SLEEP_CNT_LSB) & LP_PERF_LIGHT_SLEEP_CNT_MASK)
#define LP_PERF_LIGHT_SLEEP_CNT_RESET                                          0x0
#define LP_PERF_LIGHT_SLEEP_ADDRESS                                            (0x288 + __RTC_SOC_REG_BASE_ADDRESS)
#define LP_PERF_LIGHT_SLEEP_RSTMASK                                            0xffffffff
#define LP_PERF_LIGHT_SLEEP_RESET                                              0x0

// 0x28c (LP_PERF_DEEP_SLEEP)
#define LP_PERF_DEEP_SLEEP_CNT_LSB                                             0
#define LP_PERF_DEEP_SLEEP_CNT_MSB                                             31
#define LP_PERF_DEEP_SLEEP_CNT_MASK                                            0xffffffff
#define LP_PERF_DEEP_SLEEP_CNT_GET(x)                                          (((x) & LP_PERF_DEEP_SLEEP_CNT_MASK) >> LP_PERF_DEEP_SLEEP_CNT_LSB)
#define LP_PERF_DEEP_SLEEP_CNT_SET(x)                                          (((0 | (x)) << LP_PERF_DEEP_SLEEP_CNT_LSB) & LP_PERF_DEEP_SLEEP_CNT_MASK)
#define LP_PERF_DEEP_SLEEP_CNT_RESET                                           0x0
#define LP_PERF_DEEP_SLEEP_ADDRESS                                             (0x28c + __RTC_SOC_REG_BASE_ADDRESS)
#define LP_PERF_DEEP_SLEEP_RSTMASK                                             0xffffffff
#define LP_PERF_DEEP_SLEEP_RESET                                               0x0

// 0x290 (LP_PERF_ON)
#define LP_PERF_ON_CNT_LSB                                                     0
#define LP_PERF_ON_CNT_MSB                                                     31
#define LP_PERF_ON_CNT_MASK                                                    0xffffffff
#define LP_PERF_ON_CNT_GET(x)                                                  (((x) & LP_PERF_ON_CNT_MASK) >> LP_PERF_ON_CNT_LSB)
#define LP_PERF_ON_CNT_SET(x)                                                  (((0 | (x)) << LP_PERF_ON_CNT_LSB) & LP_PERF_ON_CNT_MASK)
#define LP_PERF_ON_CNT_RESET                                                   0x0
#define LP_PERF_ON_ADDRESS                                                     (0x290 + __RTC_SOC_REG_BASE_ADDRESS)
#define LP_PERF_ON_RSTMASK                                                     0xffffffff
#define LP_PERF_ON_RESET                                                       0x0

// 0x2a8 (CHIP_MODE)
#define CHIP_MODE_BIT_LSB                                                      0
#define CHIP_MODE_BIT_MSB                                                      1
#define CHIP_MODE_BIT_MASK                                                     0x3
#define CHIP_MODE_BIT_GET(x)                                                   (((x) & CHIP_MODE_BIT_MASK) >> CHIP_MODE_BIT_LSB)
#define CHIP_MODE_BIT_SET(x)                                                   (((0 | (x)) << CHIP_MODE_BIT_LSB) & CHIP_MODE_BIT_MASK)
#define CHIP_MODE_BIT_RESET                                                    0x0
#define CHIP_MODE_ADDRESS                                                      (0x2a8 + __RTC_SOC_REG_BASE_ADDRESS)
#define CHIP_MODE_RSTMASK                                                      0x3
#define CHIP_MODE_RESET                                                        0x0

// 0x2ac (OTP)
#define OTP_LDO25_EN_LSB                                                       1
#define OTP_LDO25_EN_MSB                                                       1
#define OTP_LDO25_EN_MASK                                                      0x2
#define OTP_LDO25_EN_GET(x)                                                    (((x) & OTP_LDO25_EN_MASK) >> OTP_LDO25_EN_LSB)
#define OTP_LDO25_EN_SET(x)                                                    (((0 | (x)) << OTP_LDO25_EN_LSB) & OTP_LDO25_EN_MASK)
#define OTP_LDO25_EN_RESET                                                     0x0
#define OTP_VDD12_EN_LSB                                                       0
#define OTP_VDD12_EN_MSB                                                       0
#define OTP_VDD12_EN_MASK                                                      0x1
#define OTP_VDD12_EN_GET(x)                                                    (((x) & OTP_VDD12_EN_MASK) >> OTP_VDD12_EN_LSB)
#define OTP_VDD12_EN_SET(x)                                                    (((0 | (x)) << OTP_VDD12_EN_LSB) & OTP_VDD12_EN_MASK)
#define OTP_VDD12_EN_RESET                                                     0x0
#define OTP_ADDRESS                                                            (0x2ac + __RTC_SOC_REG_BASE_ADDRESS)
#define OTP_RSTMASK                                                            0x3
#define OTP_RESET                                                              0x0

// 0x2b0 (OTP_STATUS)
#define OTP_STATUS_LDO25_EN_READY_LSB                                          1
#define OTP_STATUS_LDO25_EN_READY_MSB                                          1
#define OTP_STATUS_LDO25_EN_READY_MASK                                         0x2
#define OTP_STATUS_LDO25_EN_READY_GET(x)                                       (((x) & OTP_STATUS_LDO25_EN_READY_MASK) >> OTP_STATUS_LDO25_EN_READY_LSB)
#define OTP_STATUS_LDO25_EN_READY_SET(x)                                       (((0 | (x)) << OTP_STATUS_LDO25_EN_READY_LSB) & OTP_STATUS_LDO25_EN_READY_MASK)
#define OTP_STATUS_LDO25_EN_READY_RESET                                        0x0
#define OTP_STATUS_VDD12_EN_READY_LSB                                          0
#define OTP_STATUS_VDD12_EN_READY_MSB                                          0
#define OTP_STATUS_VDD12_EN_READY_MASK                                         0x1
#define OTP_STATUS_VDD12_EN_READY_GET(x)                                       (((x) & OTP_STATUS_VDD12_EN_READY_MASK) >> OTP_STATUS_VDD12_EN_READY_LSB)
#define OTP_STATUS_VDD12_EN_READY_SET(x)                                       (((0 | (x)) << OTP_STATUS_VDD12_EN_READY_LSB) & OTP_STATUS_VDD12_EN_READY_MASK)
#define OTP_STATUS_VDD12_EN_READY_RESET                                        0x0
#define OTP_STATUS_ADDRESS                                                     (0x2b0 + __RTC_SOC_REG_BASE_ADDRESS)
#define OTP_STATUS_RSTMASK                                                     0x3
#define OTP_STATUS_RESET                                                       0x0

// 0x2b4 (PMU)
#define PMU_REG_WAKEUP_TIME_SEL_LSB                                            0
#define PMU_REG_WAKEUP_TIME_SEL_MSB                                            1
#define PMU_REG_WAKEUP_TIME_SEL_MASK                                           0x3
#define PMU_REG_WAKEUP_TIME_SEL_GET(x)                                         (((x) & PMU_REG_WAKEUP_TIME_SEL_MASK) >> PMU_REG_WAKEUP_TIME_SEL_LSB)
#define PMU_REG_WAKEUP_TIME_SEL_SET(x)                                         (((0 | (x)) << PMU_REG_WAKEUP_TIME_SEL_LSB) & PMU_REG_WAKEUP_TIME_SEL_MASK)
#define PMU_REG_WAKEUP_TIME_SEL_RESET                                          0x0
#define PMU_ADDRESS                                                            (0x2b4 + __RTC_SOC_REG_BASE_ADDRESS)
#define PMU_RSTMASK                                                            0x3
#define PMU_RESET                                                              0x0

// 0x2b8 (PMU_BYPASS)
#define PMU_BYPASS_SWREG_LSB                                                   1
#define PMU_BYPASS_SWREG_MSB                                                   1
#define PMU_BYPASS_SWREG_MASK                                                  0x2
#define PMU_BYPASS_SWREG_GET(x)                                                (((x) & PMU_BYPASS_SWREG_MASK) >> PMU_BYPASS_SWREG_LSB)
#define PMU_BYPASS_SWREG_SET(x)                                                (((0 | (x)) << PMU_BYPASS_SWREG_LSB) & PMU_BYPASS_SWREG_MASK)
#define PMU_BYPASS_SWREG_RESET                                                 0x0
#define PMU_BYPASS_PAREG_LSB                                                   0
#define PMU_BYPASS_PAREG_MSB                                                   0
#define PMU_BYPASS_PAREG_MASK                                                  0x1
#define PMU_BYPASS_PAREG_GET(x)                                                (((x) & PMU_BYPASS_PAREG_MASK) >> PMU_BYPASS_PAREG_LSB)
#define PMU_BYPASS_PAREG_SET(x)                                                (((0 | (x)) << PMU_BYPASS_PAREG_LSB) & PMU_BYPASS_PAREG_MASK)
#define PMU_BYPASS_PAREG_RESET                                                 0x0
#define PMU_BYPASS_ADDRESS                                                     (0x2b8 + __RTC_SOC_REG_BASE_ADDRESS)
#define PMU_BYPASS_RSTMASK                                                     0x3
#define PMU_BYPASS_RESET                                                       0x0

// 0x2dc (THERM_CTRL1)
#define THERM_CTRL1_RST_LSB                                                    28
#define THERM_CTRL1_RST_MSB                                                    28
#define THERM_CTRL1_RST_MASK                                                   0x10000000
#define THERM_CTRL1_RST_GET(x)                                                 (((x) & THERM_CTRL1_RST_MASK) >> THERM_CTRL1_RST_LSB)
#define THERM_CTRL1_RST_SET(x)                                                 (((0 | (x)) << THERM_CTRL1_RST_LSB) & THERM_CTRL1_RST_MASK)
#define THERM_CTRL1_RST_RESET                                                  0x0
#define THERM_CTRL1_CH_SEL_LSB                                                 24
#define THERM_CTRL1_CH_SEL_MSB                                                 25
#define THERM_CTRL1_CH_SEL_MASK                                                0x3000000
#define THERM_CTRL1_CH_SEL_GET(x)                                              (((x) & THERM_CTRL1_CH_SEL_MASK) >> THERM_CTRL1_CH_SEL_LSB)
#define THERM_CTRL1_CH_SEL_SET(x)                                              (((0 | (x)) << THERM_CTRL1_CH_SEL_LSB) & THERM_CTRL1_CH_SEL_MASK)
#define THERM_CTRL1_CH_SEL_RESET                                               0x0
#define THERM_CTRL1_PDADC_BIAS_LSB                                             16
#define THERM_CTRL1_PDADC_BIAS_MSB                                             23
#define THERM_CTRL1_PDADC_BIAS_MASK                                            0xff0000
#define THERM_CTRL1_PDADC_BIAS_GET(x)                                          (((x) & THERM_CTRL1_PDADC_BIAS_MASK) >> THERM_CTRL1_PDADC_BIAS_LSB)
#define THERM_CTRL1_PDADC_BIAS_SET(x)                                          (((0 | (x)) << THERM_CTRL1_PDADC_BIAS_LSB) & THERM_CTRL1_PDADC_BIAS_MASK)
#define THERM_CTRL1_PDADC_BIAS_RESET                                           0x0
#define THERM_CTRL1_PDADC_GAIN_LSB                                             7
#define THERM_CTRL1_PDADC_GAIN_MSB                                             15
#define THERM_CTRL1_PDADC_GAIN_MASK                                            0xff80
#define THERM_CTRL1_PDADC_GAIN_GET(x)                                          (((x) & THERM_CTRL1_PDADC_GAIN_MASK) >> THERM_CTRL1_PDADC_GAIN_LSB)
#define THERM_CTRL1_PDADC_GAIN_SET(x)                                          (((0 | (x)) << THERM_CTRL1_PDADC_GAIN_LSB) & THERM_CTRL1_PDADC_GAIN_MASK)
#define THERM_CTRL1_PDADC_GAIN_RESET                                           0x100
#define THERM_CTRL1_MEAS_WIN_LSB                                               4
#define THERM_CTRL1_MEAS_WIN_MSB                                               6
#define THERM_CTRL1_MEAS_WIN_MASK                                              0x70
#define THERM_CTRL1_MEAS_WIN_GET(x)                                            (((x) & THERM_CTRL1_MEAS_WIN_MASK) >> THERM_CTRL1_MEAS_WIN_LSB)
#define THERM_CTRL1_MEAS_WIN_SET(x)                                            (((0 | (x)) << THERM_CTRL1_MEAS_WIN_LSB) & THERM_CTRL1_MEAS_WIN_MASK)
#define THERM_CTRL1_MEAS_WIN_RESET                                             0x7
#define THERM_CTRL1_DONE_INT_EN_LSB                                            3
#define THERM_CTRL1_DONE_INT_EN_MSB                                            3
#define THERM_CTRL1_DONE_INT_EN_MASK                                           0x8
#define THERM_CTRL1_DONE_INT_EN_GET(x)                                         (((x) & THERM_CTRL1_DONE_INT_EN_MASK) >> THERM_CTRL1_DONE_INT_EN_LSB)
#define THERM_CTRL1_DONE_INT_EN_SET(x)                                         (((0 | (x)) << THERM_CTRL1_DONE_INT_EN_LSB) & THERM_CTRL1_DONE_INT_EN_MASK)
#define THERM_CTRL1_DONE_INT_EN_RESET                                          0x0
#define THERM_CTRL1_OUT_RANGE_INT_EN_LSB                                       2
#define THERM_CTRL1_OUT_RANGE_INT_EN_MSB                                       2
#define THERM_CTRL1_OUT_RANGE_INT_EN_MASK                                      0x4
#define THERM_CTRL1_OUT_RANGE_INT_EN_GET(x)                                    (((x) & THERM_CTRL1_OUT_RANGE_INT_EN_MASK) >> THERM_CTRL1_OUT_RANGE_INT_EN_LSB)
#define THERM_CTRL1_OUT_RANGE_INT_EN_SET(x)                                    (((0 | (x)) << THERM_CTRL1_OUT_RANGE_INT_EN_LSB) & THERM_CTRL1_OUT_RANGE_INT_EN_MASK)
#define THERM_CTRL1_OUT_RANGE_INT_EN_RESET                                     0x0
#define THERM_CTRL1_START_LSB                                                  1
#define THERM_CTRL1_START_MSB                                                  1
#define THERM_CTRL1_START_MASK                                                 0x2
#define THERM_CTRL1_START_GET(x)                                               (((x) & THERM_CTRL1_START_MASK) >> THERM_CTRL1_START_LSB)
#define THERM_CTRL1_START_SET(x)                                               (((0 | (x)) << THERM_CTRL1_START_LSB) & THERM_CTRL1_START_MASK)
#define THERM_CTRL1_START_RESET                                                0x0
#define THERM_CTRL1_ADDRESS                                                    (0x2dc + __RTC_SOC_REG_BASE_ADDRESS)
#define THERM_CTRL1_RSTMASK                                                    0x13fffffe
#define THERM_CTRL1_RESET                                                      0x8070

// 0x2e0 (THERM_CTRL2)
#define THERM_CTRL2_THR_HIGH_LSB                                               24
#define THERM_CTRL2_THR_HIGH_MSB                                               31
#define THERM_CTRL2_THR_HIGH_MASK                                              0xff000000
#define THERM_CTRL2_THR_HIGH_GET(x)                                            (((x) & THERM_CTRL2_THR_HIGH_MASK) >> THERM_CTRL2_THR_HIGH_LSB)
#define THERM_CTRL2_THR_HIGH_SET(x)                                            (((0 | (x)) << THERM_CTRL2_THR_HIGH_LSB) & THERM_CTRL2_THR_HIGH_MASK)
#define THERM_CTRL2_THR_HIGH_RESET                                             0x0
#define THERM_CTRL2_THR_LOW_LSB                                                16
#define THERM_CTRL2_THR_LOW_MSB                                                23
#define THERM_CTRL2_THR_LOW_MASK                                               0xff0000
#define THERM_CTRL2_THR_LOW_GET(x)                                             (((x) & THERM_CTRL2_THR_LOW_MASK) >> THERM_CTRL2_THR_LOW_LSB)
#define THERM_CTRL2_THR_LOW_SET(x)                                             (((0 | (x)) << THERM_CTRL2_THR_LOW_LSB) & THERM_CTRL2_THR_LOW_MASK)
#define THERM_CTRL2_THR_LOW_RESET                                              0x0
#define THERM_CTRL2_SETTLE_TIME_LSB                                            0
#define THERM_CTRL2_SETTLE_TIME_MSB                                            15
#define THERM_CTRL2_SETTLE_TIME_MASK                                           0xffff
#define THERM_CTRL2_SETTLE_TIME_GET(x)                                         (((x) & THERM_CTRL2_SETTLE_TIME_MASK) >> THERM_CTRL2_SETTLE_TIME_LSB)
#define THERM_CTRL2_SETTLE_TIME_SET(x)                                         (((0 | (x)) << THERM_CTRL2_SETTLE_TIME_LSB) & THERM_CTRL2_SETTLE_TIME_MASK)
#define THERM_CTRL2_SETTLE_TIME_RESET                                          0x80
#define THERM_CTRL2_ADDRESS                                                    (0x2e0 + __RTC_SOC_REG_BASE_ADDRESS)
#define THERM_CTRL2_RSTMASK                                                    0xffffffff
#define THERM_CTRL2_RESET                                                      0x80

// 0x2e4 (THERM_CTRL3)
#define THERM_CTRL3_THERM_LOW_LSB                                              1
#define THERM_CTRL3_THERM_LOW_MSB                                              1
#define THERM_CTRL3_THERM_LOW_MASK                                             0x2
#define THERM_CTRL3_THERM_LOW_GET(x)                                           (((x) & THERM_CTRL3_THERM_LOW_MASK) >> THERM_CTRL3_THERM_LOW_LSB)
#define THERM_CTRL3_THERM_LOW_SET(x)                                           (((0 | (x)) << THERM_CTRL3_THERM_LOW_LSB) & THERM_CTRL3_THERM_LOW_MASK)
#define THERM_CTRL3_THERM_LOW_RESET                                            0x0
#define THERM_CTRL3_THERM_HIGH_LSB                                             0
#define THERM_CTRL3_THERM_HIGH_MSB                                             0
#define THERM_CTRL3_THERM_HIGH_MASK                                            0x1
#define THERM_CTRL3_THERM_HIGH_GET(x)                                          (((x) & THERM_CTRL3_THERM_HIGH_MASK) >> THERM_CTRL3_THERM_HIGH_LSB)
#define THERM_CTRL3_THERM_HIGH_SET(x)                                          (((0 | (x)) << THERM_CTRL3_THERM_HIGH_LSB) & THERM_CTRL3_THERM_HIGH_MASK)
#define THERM_CTRL3_THERM_HIGH_RESET                                           0x0
#define THERM_CTRL3_ADDRESS                                                    (0x2e4 + __RTC_SOC_REG_BASE_ADDRESS)
#define THERM_CTRL3_RSTMASK                                                    0x3
#define THERM_CTRL3_RESET                                                      0x0

// 0x2e8 (THERM_CTRL4)
#define THERM_CTRL4_THERM_VAL_CH3_LSB                                          24
#define THERM_CTRL4_THERM_VAL_CH3_MSB                                          31
#define THERM_CTRL4_THERM_VAL_CH3_MASK                                         0xff000000
#define THERM_CTRL4_THERM_VAL_CH3_GET(x)                                       (((x) & THERM_CTRL4_THERM_VAL_CH3_MASK) >> THERM_CTRL4_THERM_VAL_CH3_LSB)
#define THERM_CTRL4_THERM_VAL_CH3_SET(x)                                       (((0 | (x)) << THERM_CTRL4_THERM_VAL_CH3_LSB) & THERM_CTRL4_THERM_VAL_CH3_MASK)
#define THERM_CTRL4_THERM_VAL_CH3_RESET                                        0x0
#define THERM_CTRL4_THERM_VAL_CH2_LSB                                          16
#define THERM_CTRL4_THERM_VAL_CH2_MSB                                          23
#define THERM_CTRL4_THERM_VAL_CH2_MASK                                         0xff0000
#define THERM_CTRL4_THERM_VAL_CH2_GET(x)                                       (((x) & THERM_CTRL4_THERM_VAL_CH2_MASK) >> THERM_CTRL4_THERM_VAL_CH2_LSB)
#define THERM_CTRL4_THERM_VAL_CH2_SET(x)                                       (((0 | (x)) << THERM_CTRL4_THERM_VAL_CH2_LSB) & THERM_CTRL4_THERM_VAL_CH2_MASK)
#define THERM_CTRL4_THERM_VAL_CH2_RESET                                        0x0
#define THERM_CTRL4_THERM_VAL_CH1_LSB                                          8
#define THERM_CTRL4_THERM_VAL_CH1_MSB                                          15
#define THERM_CTRL4_THERM_VAL_CH1_MASK                                         0xff00
#define THERM_CTRL4_THERM_VAL_CH1_GET(x)                                       (((x) & THERM_CTRL4_THERM_VAL_CH1_MASK) >> THERM_CTRL4_THERM_VAL_CH1_LSB)
#define THERM_CTRL4_THERM_VAL_CH1_SET(x)                                       (((0 | (x)) << THERM_CTRL4_THERM_VAL_CH1_LSB) & THERM_CTRL4_THERM_VAL_CH1_MASK)
#define THERM_CTRL4_THERM_VAL_CH1_RESET                                        0x0
#define THERM_CTRL4_THERM_VAL_CH0_LSB                                          0
#define THERM_CTRL4_THERM_VAL_CH0_MSB                                          7
#define THERM_CTRL4_THERM_VAL_CH0_MASK                                         0xff
#define THERM_CTRL4_THERM_VAL_CH0_GET(x)                                       (((x) & THERM_CTRL4_THERM_VAL_CH0_MASK) >> THERM_CTRL4_THERM_VAL_CH0_LSB)
#define THERM_CTRL4_THERM_VAL_CH0_SET(x)                                       (((0 | (x)) << THERM_CTRL4_THERM_VAL_CH0_LSB) & THERM_CTRL4_THERM_VAL_CH0_MASK)
#define THERM_CTRL4_THERM_VAL_CH0_RESET                                        0x0
#define THERM_CTRL4_ADDRESS                                                    (0x2e8 + __RTC_SOC_REG_BASE_ADDRESS)
#define THERM_CTRL4_RSTMASK                                                    0xffffffff
#define THERM_CTRL4_RESET                                                      0x0

// 0x2ec (THERM_CTRL5)
#define THERM_CTRL5_ATPG_PDADC_DAT_LSB                                         0
#define THERM_CTRL5_ATPG_PDADC_DAT_MSB                                         8
#define THERM_CTRL5_ATPG_PDADC_DAT_MASK                                        0x1ff
#define THERM_CTRL5_ATPG_PDADC_DAT_GET(x)                                      (((x) & THERM_CTRL5_ATPG_PDADC_DAT_MASK) >> THERM_CTRL5_ATPG_PDADC_DAT_LSB)
#define THERM_CTRL5_ATPG_PDADC_DAT_SET(x)                                      (((0 | (x)) << THERM_CTRL5_ATPG_PDADC_DAT_LSB) & THERM_CTRL5_ATPG_PDADC_DAT_MASK)
#define THERM_CTRL5_ATPG_PDADC_DAT_RESET                                       0x0
#define THERM_CTRL5_ADDRESS                                                    (0x2ec + __RTC_SOC_REG_BASE_ADDRESS)
#define THERM_CTRL5_RSTMASK                                                    0x1ff
#define THERM_CTRL5_RESET                                                      0x0

// 0x2f0 (CPU_PLL_CONFIG1)
#define CPU_PLL_CONFIG1_FRAC_LSB                                               13
#define CPU_PLL_CONFIG1_FRAC_MSB                                               30
#define CPU_PLL_CONFIG1_FRAC_MASK                                              0x7fffe000
#define CPU_PLL_CONFIG1_FRAC_GET(x)                                            (((x) & CPU_PLL_CONFIG1_FRAC_MASK) >> CPU_PLL_CONFIG1_FRAC_LSB)
#define CPU_PLL_CONFIG1_FRAC_SET(x)                                            (((0 | (x)) << CPU_PLL_CONFIG1_FRAC_LSB) & CPU_PLL_CONFIG1_FRAC_MASK)
#define CPU_PLL_CONFIG1_FRAC_RESET                                             0x1
#define CPU_PLL_CONFIG1_INT_LSB                                                3
#define CPU_PLL_CONFIG1_INT_MSB                                                11
#define CPU_PLL_CONFIG1_INT_MASK                                               0xff8
#define CPU_PLL_CONFIG1_INT_GET(x)                                             (((x) & CPU_PLL_CONFIG1_INT_MASK) >> CPU_PLL_CONFIG1_INT_LSB)
#define CPU_PLL_CONFIG1_INT_SET(x)                                             (((0 | (x)) << CPU_PLL_CONFIG1_INT_LSB) & CPU_PLL_CONFIG1_INT_MASK)
#define CPU_PLL_CONFIG1_INT_RESET                                              0x0
#define CPU_PLL_CONFIG1_REFDIV_LSB                                             0
#define CPU_PLL_CONFIG1_REFDIV_MSB                                             2
#define CPU_PLL_CONFIG1_REFDIV_MASK                                            0x7
#define CPU_PLL_CONFIG1_REFDIV_GET(x)                                          (((x) & CPU_PLL_CONFIG1_REFDIV_MASK) >> CPU_PLL_CONFIG1_REFDIV_LSB)
#define CPU_PLL_CONFIG1_REFDIV_SET(x)                                          (((0 | (x)) << CPU_PLL_CONFIG1_REFDIV_LSB) & CPU_PLL_CONFIG1_REFDIV_MASK)
#define CPU_PLL_CONFIG1_REFDIV_RESET                                           0x0
#define CPU_PLL_CONFIG1_ADDRESS                                                (0x2f0 + __RTC_SOC_REG_BASE_ADDRESS)
#define CPU_PLL_CONFIG1_RSTMASK                                                0x7fffefff
#define CPU_PLL_CONFIG1_RESET                                                  0x2000

// 0x2f4 (CPU_PLL_CONFIG2)
#define CPU_PLL_CONFIG2_PLL_BYPASS_LSB                                         5
#define CPU_PLL_CONFIG2_PLL_BYPASS_MSB                                         5
#define CPU_PLL_CONFIG2_PLL_BYPASS_MASK                                        0x20
#define CPU_PLL_CONFIG2_PLL_BYPASS_GET(x)                                      (((x) & CPU_PLL_CONFIG2_PLL_BYPASS_MASK) >> CPU_PLL_CONFIG2_PLL_BYPASS_LSB)
#define CPU_PLL_CONFIG2_PLL_BYPASS_SET(x)                                      (((0 | (x)) << CPU_PLL_CONFIG2_PLL_BYPASS_LSB) & CPU_PLL_CONFIG2_PLL_BYPASS_MASK)
#define CPU_PLL_CONFIG2_PLL_BYPASS_RESET                                       0x1
#define CPU_PLL_CONFIG2_PLLPWD_LSB                                             4
#define CPU_PLL_CONFIG2_PLLPWD_MSB                                             4
#define CPU_PLL_CONFIG2_PLLPWD_MASK                                            0x10
#define CPU_PLL_CONFIG2_PLLPWD_GET(x)                                          (((x) & CPU_PLL_CONFIG2_PLLPWD_MASK) >> CPU_PLL_CONFIG2_PLLPWD_LSB)
#define CPU_PLL_CONFIG2_PLLPWD_SET(x)                                          (((0 | (x)) << CPU_PLL_CONFIG2_PLLPWD_LSB) & CPU_PLL_CONFIG2_PLLPWD_MASK)
#define CPU_PLL_CONFIG2_PLLPWD_RESET                                           0x1
#define CPU_PLL_CONFIG2_OUTDIV_LSB                                             0
#define CPU_PLL_CONFIG2_OUTDIV_MSB                                             2
#define CPU_PLL_CONFIG2_OUTDIV_MASK                                            0x7
#define CPU_PLL_CONFIG2_OUTDIV_GET(x)                                          (((x) & CPU_PLL_CONFIG2_OUTDIV_MASK) >> CPU_PLL_CONFIG2_OUTDIV_LSB)
#define CPU_PLL_CONFIG2_OUTDIV_SET(x)                                          (((0 | (x)) << CPU_PLL_CONFIG2_OUTDIV_LSB) & CPU_PLL_CONFIG2_OUTDIV_MASK)
#define CPU_PLL_CONFIG2_OUTDIV_RESET                                           0x1
#define CPU_PLL_CONFIG2_ADDRESS                                                (0x2f4 + __RTC_SOC_REG_BASE_ADDRESS)
#define CPU_PLL_CONFIG2_RSTMASK                                                0x37
#define CPU_PLL_CONFIG2_RESET                                                  0x31

// 0x2f8 (RTC_CAL_DIV_DEFAULT)
#define RTC_CAL_DIV_DEFAULT_V_LSB                                              0
#define RTC_CAL_DIV_DEFAULT_V_MSB                                              17
#define RTC_CAL_DIV_DEFAULT_V_MASK                                             0x3ffff
#define RTC_CAL_DIV_DEFAULT_V_GET(x)                                           (((x) & RTC_CAL_DIV_DEFAULT_V_MASK) >> RTC_CAL_DIV_DEFAULT_V_LSB)
#define RTC_CAL_DIV_DEFAULT_V_SET(x)                                           (((0 | (x)) << RTC_CAL_DIV_DEFAULT_V_LSB) & RTC_CAL_DIV_DEFAULT_V_MASK)
#define RTC_CAL_DIV_DEFAULT_V_RESET                                            0x30d3
#define RTC_CAL_DIV_DEFAULT_ADDRESS                                            (0x2f8 + __RTC_SOC_REG_BASE_ADDRESS)
#define RTC_CAL_DIV_DEFAULT_RSTMASK                                            0x3ffff
#define RTC_CAL_DIV_DEFAULT_RESET                                              0x30d3

// 0x2fc (RTC_SPARE0)
#define RTC_SPARE0_BITS_LSB                                                    0
#define RTC_SPARE0_BITS_MSB                                                    31
#define RTC_SPARE0_BITS_MASK                                                   0xffffffff
#define RTC_SPARE0_BITS_GET(x)                                                 (((x) & RTC_SPARE0_BITS_MASK) >> RTC_SPARE0_BITS_LSB)
#define RTC_SPARE0_BITS_SET(x)                                                 (((0 | (x)) << RTC_SPARE0_BITS_LSB) & RTC_SPARE0_BITS_MASK)
#define RTC_SPARE0_BITS_RESET                                                  0x0
#define RTC_SPARE0_ADDRESS                                                     (0x2fc + __RTC_SOC_REG_BASE_ADDRESS)
#define RTC_SPARE0_RSTMASK                                                     0xffffffff
#define RTC_SPARE0_RESET                                                       0x0

// 0x300 (RTC_SPARE1)
#define RTC_SPARE1_BITS_LSB                                                    0
#define RTC_SPARE1_BITS_MSB                                                    31
#define RTC_SPARE1_BITS_MASK                                                   0xffffffff
#define RTC_SPARE1_BITS_GET(x)                                                 (((x) & RTC_SPARE1_BITS_MASK) >> RTC_SPARE1_BITS_LSB)
#define RTC_SPARE1_BITS_SET(x)                                                 (((0 | (x)) << RTC_SPARE1_BITS_LSB) & RTC_SPARE1_BITS_MASK)
#define RTC_SPARE1_BITS_RESET                                                  0x0
#define RTC_SPARE1_ADDRESS                                                     (0x300 + __RTC_SOC_REG_BASE_ADDRESS)
#define RTC_SPARE1_RSTMASK                                                     0xffffffff
#define RTC_SPARE1_RESET                                                       0x0

// 0x304 (RTC_DSLP_CONFIG0)
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_LSB                                     24
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_MSB                                     31
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_MASK                                    0xff000000
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_GET(x)                                  (((x) & RTC_DSLP_CONFIG0_RST_DEAS_TIME_MASK) >> RTC_DSLP_CONFIG0_RST_DEAS_TIME_LSB)
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_SET(x)                                  (((0 | (x)) << RTC_DSLP_CONFIG0_RST_DEAS_TIME_LSB) & RTC_DSLP_CONFIG0_RST_DEAS_TIME_MASK)
#define RTC_DSLP_CONFIG0_RST_DEAS_TIME_RESET                                   0x0
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_LSB                                   16
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_MSB                                   23
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_MASK                                  0xff0000
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_GET(x)                                (((x) & RTC_DSLP_CONFIG0_RST_ASSERT_TIME_MASK) >> RTC_DSLP_CONFIG0_RST_ASSERT_TIME_LSB)
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_SET(x)                                (((0 | (x)) << RTC_DSLP_CONFIG0_RST_ASSERT_TIME_LSB) & RTC_DSLP_CONFIG0_RST_ASSERT_TIME_MASK)
#define RTC_DSLP_CONFIG0_RST_ASSERT_TIME_RESET                                 0x0
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_LSB                                     8
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_MSB                                     15
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_MASK                                    0xff00
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_GET(x)                                  (((x) & RTC_DSLP_CONFIG0_BIAS_DIS_TIME_MASK) >> RTC_DSLP_CONFIG0_BIAS_DIS_TIME_LSB)
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_SET(x)                                  (((0 | (x)) << RTC_DSLP_CONFIG0_BIAS_DIS_TIME_LSB) & RTC_DSLP_CONFIG0_BIAS_DIS_TIME_MASK)
#define RTC_DSLP_CONFIG0_BIAS_DIS_TIME_RESET                                   0x0
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_LSB                                      0
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_MSB                                      7
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_MASK                                     0xff
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_GET(x)                                   (((x) & RTC_DSLP_CONFIG0_BIAS_EN_TIME_MASK) >> RTC_DSLP_CONFIG0_BIAS_EN_TIME_LSB)
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_SET(x)                                   (((0 | (x)) << RTC_DSLP_CONFIG0_BIAS_EN_TIME_LSB) & RTC_DSLP_CONFIG0_BIAS_EN_TIME_MASK)
#define RTC_DSLP_CONFIG0_BIAS_EN_TIME_RESET                                    0x0
#define RTC_DSLP_CONFIG0_ADDRESS                                               (0x304 + __RTC_SOC_REG_BASE_ADDRESS)
#define RTC_DSLP_CONFIG0_RSTMASK                                               0xffffffff
#define RTC_DSLP_CONFIG0_RESET                                                 0x0

// 0x308 (RTC_DSLP_CONFIG1)
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_LSB   24
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_MSB   24
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_MASK  0x1000000
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_GET(x) (((x) & RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_MASK) >> RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_LSB)
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_SET(x) (((0 | (x)) << RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_LSB) & RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_MASK)
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_PCIE_PLL_GATING_DISABLE_CONTROL_RESET 0x0
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_LSB                           16
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_MSB                           16
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_MASK                          0x10000
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_GET(x)                        (((x) & RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_MASK) >> RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_LSB)
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_SET(x)                        (((0 | (x)) << RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_LSB) & RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_MASK)
#define RTC_DSLP_CONFIG1_HYSTERETIC_MODE_CONTROL_RESET                         0x0
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_LSB                                    8
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_MSB                                    15
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_MASK                                   0xff00
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_GET(x)                                 (((x) & RTC_DSLP_CONFIG1_OSCON_DIS_TIME_MASK) >> RTC_DSLP_CONFIG1_OSCON_DIS_TIME_LSB)
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_SET(x)                                 (((0 | (x)) << RTC_DSLP_CONFIG1_OSCON_DIS_TIME_LSB) & RTC_DSLP_CONFIG1_OSCON_DIS_TIME_MASK)
#define RTC_DSLP_CONFIG1_OSCON_DIS_TIME_RESET                                  0x0
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_LSB                                      0
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_MSB                                      7
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_MASK                                     0xff
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_GET(x)                                   (((x) & RTC_DSLP_CONFIG1_LPM_DIS_TIME_MASK) >> RTC_DSLP_CONFIG1_LPM_DIS_TIME_LSB)
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_SET(x)                                   (((0 | (x)) << RTC_DSLP_CONFIG1_LPM_DIS_TIME_LSB) & RTC_DSLP_CONFIG1_LPM_DIS_TIME_MASK)
#define RTC_DSLP_CONFIG1_LPM_DIS_TIME_RESET                                    0x0
#define RTC_DSLP_CONFIG1_ADDRESS                                               (0x308 + __RTC_SOC_REG_BASE_ADDRESS)
#define RTC_DSLP_CONFIG1_RSTMASK                                               0x101ffff
#define RTC_DSLP_CONFIG1_RESET                                                 0x0

// 0x30c (XO_FAST_CHARGE_LPO_CNT)
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_LSB                      0
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_MSB                      7
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_MASK                     0xff
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_GET(x)                   (((x) & XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_MASK) >> XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_LSB)
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_SET(x)                   (((0 | (x)) << XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_LSB) & XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_MASK)
#define XO_FAST_CHARGE_LPO_CNT_XO_FAST_CHARGE_LPO_CNT_RESET                    0x27
#define XO_FAST_CHARGE_LPO_CNT_ADDRESS                                         (0x30c + __RTC_SOC_REG_BASE_ADDRESS)
#define XO_FAST_CHARGE_LPO_CNT_RSTMASK                                         0xff
#define XO_FAST_CHARGE_LPO_CNT_RESET                                           0x27

// 0x310 (PCIE_RLOOP)
#define PCIE_RLOOP_VALUE_LSB                                                   1
#define PCIE_RLOOP_VALUE_MSB                                                   4
#define PCIE_RLOOP_VALUE_MASK                                                  0x1e
#define PCIE_RLOOP_VALUE_GET(x)                                                (((x) & PCIE_RLOOP_VALUE_MASK) >> PCIE_RLOOP_VALUE_LSB)
#define PCIE_RLOOP_VALUE_SET(x)                                                (((0 | (x)) << PCIE_RLOOP_VALUE_LSB) & PCIE_RLOOP_VALUE_MASK)
#define PCIE_RLOOP_VALUE_RESET                                                 0x0
#define PCIE_RLOOP_SEL_LSB                                                     0
#define PCIE_RLOOP_SEL_MSB                                                     0
#define PCIE_RLOOP_SEL_MASK                                                    0x1
#define PCIE_RLOOP_SEL_GET(x)                                                  (((x) & PCIE_RLOOP_SEL_MASK) >> PCIE_RLOOP_SEL_LSB)
#define PCIE_RLOOP_SEL_SET(x)                                                  (((0 | (x)) << PCIE_RLOOP_SEL_LSB) & PCIE_RLOOP_SEL_MASK)
#define PCIE_RLOOP_SEL_RESET                                                   0x0
#define PCIE_RLOOP_ADDRESS                                                     (0x310 + __RTC_SOC_REG_BASE_ADDRESS)
#define PCIE_RLOOP_RSTMASK                                                     0x1f
#define PCIE_RLOOP_RESET                                                       0x0

// 0x314 (PCIE_PHY_RESET)
#define PCIE_PHY_RESET_EN_LSB                                                  0
#define PCIE_PHY_RESET_EN_MSB                                                  0
#define PCIE_PHY_RESET_EN_MASK                                                 0x1
#define PCIE_PHY_RESET_EN_GET(x)                                               (((x) & PCIE_PHY_RESET_EN_MASK) >> PCIE_PHY_RESET_EN_LSB)
#define PCIE_PHY_RESET_EN_SET(x)                                               (((0 | (x)) << PCIE_PHY_RESET_EN_LSB) & PCIE_PHY_RESET_EN_MASK)
#define PCIE_PHY_RESET_EN_RESET                                                0x0
#define PCIE_PHY_RESET_ADDRESS                                                 (0x314 + __RTC_SOC_REG_BASE_ADDRESS)
#define PCIE_PHY_RESET_RSTMASK                                                 0x1
#define PCIE_PHY_RESET_RESET                                                   0x0



#endif /* _RTC_SOC_REG_H_ */
