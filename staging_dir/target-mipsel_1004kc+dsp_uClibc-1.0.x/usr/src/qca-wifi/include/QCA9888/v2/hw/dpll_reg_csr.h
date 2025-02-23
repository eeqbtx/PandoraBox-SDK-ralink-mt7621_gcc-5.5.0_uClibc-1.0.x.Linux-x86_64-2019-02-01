/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _DPLL_REG_CSR_H_
#define _DPLL_REG_CSR_H_


#ifndef __DPLL_REG_CSR_BASE_ADDRESS
#define __DPLL_REG_CSR_BASE_ADDRESS (0x47b80)
#endif


// 0x0 (DPLL1)
#define DPLL1_RNG_LSB                                                          30
#define DPLL1_RNG_MSB                                                          31
#define DPLL1_RNG_MASK                                                         0xc0000000
#define DPLL1_RNG_GET(x)                                                       (((x) & DPLL1_RNG_MASK) >> DPLL1_RNG_LSB)
#define DPLL1_RNG_SET(x)                                                       (((0 | (x)) << DPLL1_RNG_LSB) & DPLL1_RNG_MASK)
#define DPLL1_RNG_RESET                                                        0x0
#define DPLL1_REFDIV_LSB                                                       27
#define DPLL1_REFDIV_MSB                                                       29
#define DPLL1_REFDIV_MASK                                                      0x38000000
#define DPLL1_REFDIV_GET(x)                                                    (((x) & DPLL1_REFDIV_MASK) >> DPLL1_REFDIV_LSB)
#define DPLL1_REFDIV_SET(x)                                                    (((0 | (x)) << DPLL1_REFDIV_LSB) & DPLL1_REFDIV_MASK)
#define DPLL1_REFDIV_RESET                                                     0x0
#define DPLL1_NINT_LSB                                                         18
#define DPLL1_NINT_MSB                                                         26
#define DPLL1_NINT_MASK                                                        0x7fc0000
#define DPLL1_NINT_GET(x)                                                      (((x) & DPLL1_NINT_MASK) >> DPLL1_NINT_LSB)
#define DPLL1_NINT_SET(x)                                                      (((0 | (x)) << DPLL1_NINT_LSB) & DPLL1_NINT_MASK)
#define DPLL1_NINT_RESET                                                       0x10
#define DPLL1_NFRAC_LSB                                                        0
#define DPLL1_NFRAC_MSB                                                        17
#define DPLL1_NFRAC_MASK                                                       0x3ffff
#define DPLL1_NFRAC_GET(x)                                                     (((x) & DPLL1_NFRAC_MASK) >> DPLL1_NFRAC_LSB)
#define DPLL1_NFRAC_SET(x)                                                     (((0 | (x)) << DPLL1_NFRAC_LSB) & DPLL1_NFRAC_MASK)
#define DPLL1_NFRAC_RESET                                                      0x0
#define DPLL1_ADDRESS                                                          (0x0 + __DPLL_REG_CSR_BASE_ADDRESS)
#define DPLL1_RSTMASK                                                          0xffffffff
#define DPLL1_RESET                                                            0x400000

// 0x4 (DPLL2)
#define DPLL2_LOCAL_PLL_LSB                                                    31
#define DPLL2_LOCAL_PLL_MSB                                                    31
#define DPLL2_LOCAL_PLL_MASK                                                   0x80000000
#define DPLL2_LOCAL_PLL_GET(x)                                                 (((x) & DPLL2_LOCAL_PLL_MASK) >> DPLL2_LOCAL_PLL_LSB)
#define DPLL2_LOCAL_PLL_SET(x)                                                 (((0 | (x)) << DPLL2_LOCAL_PLL_LSB) & DPLL2_LOCAL_PLL_MASK)
#define DPLL2_LOCAL_PLL_RESET                                                  0x0
#define DPLL2_KI_LSB                                                           29
#define DPLL2_KI_MSB                                                           30
#define DPLL2_KI_MASK                                                          0x60000000
#define DPLL2_KI_GET(x)                                                        (((x) & DPLL2_KI_MASK) >> DPLL2_KI_LSB)
#define DPLL2_KI_SET(x)                                                        (((0 | (x)) << DPLL2_KI_LSB) & DPLL2_KI_MASK)
#define DPLL2_KI_RESET                                                         0x1
#define DPLL2_KD_LSB                                                           25
#define DPLL2_KD_MSB                                                           28
#define DPLL2_KD_MASK                                                          0x1e000000
#define DPLL2_KD_GET(x)                                                        (((x) & DPLL2_KD_MASK) >> DPLL2_KD_LSB)
#define DPLL2_KD_SET(x)                                                        (((0 | (x)) << DPLL2_KD_LSB) & DPLL2_KD_MASK)
#define DPLL2_KD_RESET                                                         0x8
#define DPLL2_EN_NEGTRIG_LSB                                                   24
#define DPLL2_EN_NEGTRIG_MSB                                                   24
#define DPLL2_EN_NEGTRIG_MASK                                                  0x1000000
#define DPLL2_EN_NEGTRIG_GET(x)                                                (((x) & DPLL2_EN_NEGTRIG_MASK) >> DPLL2_EN_NEGTRIG_LSB)
#define DPLL2_EN_NEGTRIG_SET(x)                                                (((0 | (x)) << DPLL2_EN_NEGTRIG_LSB) & DPLL2_EN_NEGTRIG_MASK)
#define DPLL2_EN_NEGTRIG_RESET                                                 0x0
#define DPLL2_LOCAL_PLL_PWD_LSB                                                23
#define DPLL2_LOCAL_PLL_PWD_MSB                                                23
#define DPLL2_LOCAL_PLL_PWD_MASK                                               0x800000
#define DPLL2_LOCAL_PLL_PWD_GET(x)                                             (((x) & DPLL2_LOCAL_PLL_PWD_MASK) >> DPLL2_LOCAL_PLL_PWD_LSB)
#define DPLL2_LOCAL_PLL_PWD_SET(x)                                             (((0 | (x)) << DPLL2_LOCAL_PLL_PWD_LSB) & DPLL2_LOCAL_PLL_PWD_MASK)
#define DPLL2_LOCAL_PLL_PWD_RESET                                              0x0
#define DPLL2_PLL_PWD_LSB                                                      22
#define DPLL2_PLL_PWD_MSB                                                      22
#define DPLL2_PLL_PWD_MASK                                                     0x400000
#define DPLL2_PLL_PWD_GET(x)                                                   (((x) & DPLL2_PLL_PWD_MASK) >> DPLL2_PLL_PWD_LSB)
#define DPLL2_PLL_PWD_SET(x)                                                   (((0 | (x)) << DPLL2_PLL_PWD_LSB) & DPLL2_PLL_PWD_MASK)
#define DPLL2_PLL_PWD_RESET                                                    0x1
#define DPLL2_OUTDIV_LSB                                                       19
#define DPLL2_OUTDIV_MSB                                                       21
#define DPLL2_OUTDIV_MASK                                                      0x380000
#define DPLL2_OUTDIV_GET(x)                                                    (((x) & DPLL2_OUTDIV_MASK) >> DPLL2_OUTDIV_LSB)
#define DPLL2_OUTDIV_SET(x)                                                    (((0 | (x)) << DPLL2_OUTDIV_LSB) & DPLL2_OUTDIV_MASK)
#define DPLL2_OUTDIV_RESET                                                     0x1
#define DPLL2_PHASE_SHIFT_LSB                                                  12
#define DPLL2_PHASE_SHIFT_MSB                                                  18
#define DPLL2_PHASE_SHIFT_MASK                                                 0x7f000
#define DPLL2_PHASE_SHIFT_GET(x)                                               (((x) & DPLL2_PHASE_SHIFT_MASK) >> DPLL2_PHASE_SHIFT_LSB)
#define DPLL2_PHASE_SHIFT_SET(x)                                               (((0 | (x)) << DPLL2_PHASE_SHIFT_LSB) & DPLL2_PHASE_SHIFT_MASK)
#define DPLL2_PHASE_SHIFT_RESET                                                0x0
#define DPLL2_TESTIN_LSB                                                       2
#define DPLL2_TESTIN_MSB                                                       11
#define DPLL2_TESTIN_MASK                                                      0xffc
#define DPLL2_TESTIN_GET(x)                                                    (((x) & DPLL2_TESTIN_MASK) >> DPLL2_TESTIN_LSB)
#define DPLL2_TESTIN_SET(x)                                                    (((0 | (x)) << DPLL2_TESTIN_LSB) & DPLL2_TESTIN_MASK)
#define DPLL2_TESTIN_RESET                                                     0x0
#define DPLL2_SEL_COUNT_LSB                                                    1
#define DPLL2_SEL_COUNT_MSB                                                    1
#define DPLL2_SEL_COUNT_MASK                                                   0x2
#define DPLL2_SEL_COUNT_GET(x)                                                 (((x) & DPLL2_SEL_COUNT_MASK) >> DPLL2_SEL_COUNT_LSB)
#define DPLL2_SEL_COUNT_SET(x)                                                 (((0 | (x)) << DPLL2_SEL_COUNT_LSB) & DPLL2_SEL_COUNT_MASK)
#define DPLL2_SEL_COUNT_RESET                                                  0x0
#define DPLL2_RESET_TEST_LSB                                                   0
#define DPLL2_RESET_TEST_MSB                                                   0
#define DPLL2_RESET_TEST_MASK                                                  0x1
#define DPLL2_RESET_TEST_GET(x)                                                (((x) & DPLL2_RESET_TEST_MASK) >> DPLL2_RESET_TEST_LSB)
#define DPLL2_RESET_TEST_SET(x)                                                (((0 | (x)) << DPLL2_RESET_TEST_LSB) & DPLL2_RESET_TEST_MASK)
#define DPLL2_RESET_TEST_RESET                                                 0x0
#define DPLL2_ADDRESS                                                          (0x4 + __DPLL_REG_CSR_BASE_ADDRESS)
#define DPLL2_RSTMASK                                                          0xffffffff
#define DPLL2_RESET                                                            0x30480000

// 0x8 (DPLL3)
#define DPLL3_DO_MEAS_LSB                                                      31
#define DPLL3_DO_MEAS_MSB                                                      31
#define DPLL3_DO_MEAS_MASK                                                     0x80000000
#define DPLL3_DO_MEAS_GET(x)                                                   (((x) & DPLL3_DO_MEAS_MASK) >> DPLL3_DO_MEAS_LSB)
#define DPLL3_DO_MEAS_SET(x)                                                   (((0 | (x)) << DPLL3_DO_MEAS_LSB) & DPLL3_DO_MEAS_MASK)
#define DPLL3_DO_MEAS_RESET                                                    0x0
#define DPLL3_VC_MEAS0_LSB                                                     13
#define DPLL3_VC_MEAS0_MSB                                                     30
#define DPLL3_VC_MEAS0_MASK                                                    0x7fffe000
#define DPLL3_VC_MEAS0_GET(x)                                                  (((x) & DPLL3_VC_MEAS0_MASK) >> DPLL3_VC_MEAS0_LSB)
#define DPLL3_VC_MEAS0_SET(x)                                                  (((0 | (x)) << DPLL3_VC_MEAS0_LSB) & DPLL3_VC_MEAS0_MASK)
#define DPLL3_VC_MEAS0_RESET                                                   0x0
#define DPLL3_VC_DIFF0_LSB                                                     3
#define DPLL3_VC_DIFF0_MSB                                                     12
#define DPLL3_VC_DIFF0_MASK                                                    0x1ff8
#define DPLL3_VC_DIFF0_GET(x)                                                  (((x) & DPLL3_VC_DIFF0_MASK) >> DPLL3_VC_DIFF0_LSB)
#define DPLL3_VC_DIFF0_SET(x)                                                  (((0 | (x)) << DPLL3_VC_DIFF0_LSB) & DPLL3_VC_DIFF0_MASK)
#define DPLL3_VC_DIFF0_RESET                                                   0x0
#define DPLL3_REDUCE_R_LSB                                                     2
#define DPLL3_REDUCE_R_MSB                                                     2
#define DPLL3_REDUCE_R_MASK                                                    0x4
#define DPLL3_REDUCE_R_GET(x)                                                  (((x) & DPLL3_REDUCE_R_MASK) >> DPLL3_REDUCE_R_LSB)
#define DPLL3_REDUCE_R_SET(x)                                                  (((0 | (x)) << DPLL3_REDUCE_R_LSB) & DPLL3_REDUCE_R_MASK)
#define DPLL3_REDUCE_R_RESET                                                   0x0
#define DPLL3_SEL_1SDM_LSB                                                     1
#define DPLL3_SEL_1SDM_MSB                                                     1
#define DPLL3_SEL_1SDM_MASK                                                    0x2
#define DPLL3_SEL_1SDM_GET(x)                                                  (((x) & DPLL3_SEL_1SDM_MASK) >> DPLL3_SEL_1SDM_LSB)
#define DPLL3_SEL_1SDM_SET(x)                                                  (((0 | (x)) << DPLL3_SEL_1SDM_LSB) & DPLL3_SEL_1SDM_MASK)
#define DPLL3_SEL_1SDM_RESET                                                   0x0
#define DPLL3_DIV2_SEL_LSB                                                     0
#define DPLL3_DIV2_SEL_MSB                                                     0
#define DPLL3_DIV2_SEL_MASK                                                    0x1
#define DPLL3_DIV2_SEL_GET(x)                                                  (((x) & DPLL3_DIV2_SEL_MASK) >> DPLL3_DIV2_SEL_LSB)
#define DPLL3_DIV2_SEL_SET(x)                                                  (((0 | (x)) << DPLL3_DIV2_SEL_LSB) & DPLL3_DIV2_SEL_MASK)
#define DPLL3_DIV2_SEL_RESET                                                   0x0
#define DPLL3_ADDRESS                                                          (0x8 + __DPLL_REG_CSR_BASE_ADDRESS)
#define DPLL3_RSTMASK                                                          0xffffffff
#define DPLL3_RESET                                                            0x0

// 0xc (DPLL4)
#define DPLL4_PIN_VC_LSB                                                       31
#define DPLL4_PIN_VC_MSB                                                       31
#define DPLL4_PIN_VC_MASK                                                      0x80000000
#define DPLL4_PIN_VC_GET(x)                                                    (((x) & DPLL4_PIN_VC_MASK) >> DPLL4_PIN_VC_LSB)
#define DPLL4_PIN_VC_SET(x)                                                    (((0 | (x)) << DPLL4_PIN_VC_LSB) & DPLL4_PIN_VC_MASK)
#define DPLL4_PIN_VC_RESET                                                     0x0
#define DPLL4_VC_IN_LSB                                                        23
#define DPLL4_VC_IN_MSB                                                        30
#define DPLL4_VC_IN_MASK                                                       0x7f800000
#define DPLL4_VC_IN_GET(x)                                                     (((x) & DPLL4_VC_IN_MASK) >> DPLL4_VC_IN_LSB)
#define DPLL4_VC_IN_SET(x)                                                     (((0 | (x)) << DPLL4_VC_IN_LSB) & DPLL4_VC_IN_MASK)
#define DPLL4_VC_IN_RESET                                                      0x80
#define DPLL4_REG_BYPASS_LSB                                                   22
#define DPLL4_REG_BYPASS_MSB                                                   22
#define DPLL4_REG_BYPASS_MASK                                                  0x400000
#define DPLL4_REG_BYPASS_GET(x)                                                (((x) & DPLL4_REG_BYPASS_MASK) >> DPLL4_REG_BYPASS_LSB)
#define DPLL4_REG_BYPASS_SET(x)                                                (((0 | (x)) << DPLL4_REG_BYPASS_LSB) & DPLL4_REG_BYPASS_MASK)
#define DPLL4_REG_BYPASS_RESET                                                 0x0
#define DPLL4_REG_LVL_LSB                                                      20
#define DPLL4_REG_LVL_MSB                                                      21
#define DPLL4_REG_LVL_MASK                                                     0x300000
#define DPLL4_REG_LVL_GET(x)                                                   (((x) & DPLL4_REG_LVL_MASK) >> DPLL4_REG_LVL_LSB)
#define DPLL4_REG_LVL_SET(x)                                                   (((0 | (x)) << DPLL4_REG_LVL_LSB) & DPLL4_REG_LVL_MASK)
#define DPLL4_REG_LVL_RESET                                                    0x1
#define DPLL4_LOCAL_REG_PWD_LSB                                                19
#define DPLL4_LOCAL_REG_PWD_MSB                                                19
#define DPLL4_LOCAL_REG_PWD_MASK                                               0x80000
#define DPLL4_LOCAL_REG_PWD_GET(x)                                             (((x) & DPLL4_LOCAL_REG_PWD_MASK) >> DPLL4_LOCAL_REG_PWD_LSB)
#define DPLL4_LOCAL_REG_PWD_SET(x)                                             (((0 | (x)) << DPLL4_LOCAL_REG_PWD_LSB) & DPLL4_LOCAL_REG_PWD_MASK)
#define DPLL4_LOCAL_REG_PWD_RESET                                              0x0
#define DPLL4_REG_PWD_LSB                                                      18
#define DPLL4_REG_PWD_MSB                                                      18
#define DPLL4_REG_PWD_MASK                                                     0x40000
#define DPLL4_REG_PWD_GET(x)                                                   (((x) & DPLL4_REG_PWD_MASK) >> DPLL4_REG_PWD_LSB)
#define DPLL4_REG_PWD_SET(x)                                                   (((0 | (x)) << DPLL4_REG_PWD_LSB) & DPLL4_REG_PWD_MASK)
#define DPLL4_REG_PWD_RESET                                                    0x1
#define DPLL4_LOCK_THRESHOLD_LSB                                               13
#define DPLL4_LOCK_THRESHOLD_MSB                                               17
#define DPLL4_LOCK_THRESHOLD_MASK                                              0x3e000
#define DPLL4_LOCK_THRESHOLD_GET(x)                                            (((x) & DPLL4_LOCK_THRESHOLD_MASK) >> DPLL4_LOCK_THRESHOLD_LSB)
#define DPLL4_LOCK_THRESHOLD_SET(x)                                            (((0 | (x)) << DPLL4_LOCK_THRESHOLD_LSB) & DPLL4_LOCK_THRESHOLD_MASK)
#define DPLL4_LOCK_THRESHOLD_RESET                                             0x6
#define DPLL4_ATBSEL_LSB                                                       12
#define DPLL4_ATBSEL_MSB                                                       12
#define DPLL4_ATBSEL_MASK                                                      0x1000
#define DPLL4_ATBSEL_GET(x)                                                    (((x) & DPLL4_ATBSEL_MASK) >> DPLL4_ATBSEL_LSB)
#define DPLL4_ATBSEL_SET(x)                                                    (((0 | (x)) << DPLL4_ATBSEL_LSB) & DPLL4_ATBSEL_MASK)
#define DPLL4_ATBSEL_RESET                                                     0x0
#define DPLL4_ATBHSEL_LSB                                                      10
#define DPLL4_ATBHSEL_MSB                                                      11
#define DPLL4_ATBHSEL_MASK                                                     0xc00
#define DPLL4_ATBHSEL_GET(x)                                                   (((x) & DPLL4_ATBHSEL_MASK) >> DPLL4_ATBHSEL_LSB)
#define DPLL4_ATBHSEL_SET(x)                                                   (((0 | (x)) << DPLL4_ATBHSEL_LSB) & DPLL4_ATBHSEL_MASK)
#define DPLL4_ATBHSEL_RESET                                                    0x0
#define DPLL4_SDMCLK_SEL_LSB                                                   8
#define DPLL4_SDMCLK_SEL_MSB                                                   9
#define DPLL4_SDMCLK_SEL_MASK                                                  0x300
#define DPLL4_SDMCLK_SEL_GET(x)                                                (((x) & DPLL4_SDMCLK_SEL_MASK) >> DPLL4_SDMCLK_SEL_LSB)
#define DPLL4_SDMCLK_SEL_SET(x)                                                (((0 | (x)) << DPLL4_SDMCLK_SEL_LSB) & DPLL4_SDMCLK_SEL_MASK)
#define DPLL4_SDMCLK_SEL_RESET                                                 0x0
#define DPLL4_SPARE_LSB                                                        0
#define DPLL4_SPARE_MSB                                                        7
#define DPLL4_SPARE_MASK                                                       0xff
#define DPLL4_SPARE_GET(x)                                                     (((x) & DPLL4_SPARE_MASK) >> DPLL4_SPARE_LSB)
#define DPLL4_SPARE_SET(x)                                                     (((0 | (x)) << DPLL4_SPARE_LSB) & DPLL4_SPARE_MASK)
#define DPLL4_SPARE_RESET                                                      0x0
#define DPLL4_ADDRESS                                                          (0xc + __DPLL_REG_CSR_BASE_ADDRESS)
#define DPLL4_RSTMASK                                                          0xffffffff
#define DPLL4_RESET                                                            0x4014c000

// 0x10 (DPLL5)
#define DPLL5_LOCK_CNT_SET_LSB                                                 24
#define DPLL5_LOCK_CNT_SET_MSB                                                 31
#define DPLL5_LOCK_CNT_SET_MASK                                                0xff000000
#define DPLL5_LOCK_CNT_SET_GET(x)                                              (((x) & DPLL5_LOCK_CNT_SET_MASK) >> DPLL5_LOCK_CNT_SET_LSB)
#define DPLL5_LOCK_CNT_SET_SET(x)                                              (((0 | (x)) << DPLL5_LOCK_CNT_SET_LSB) & DPLL5_LOCK_CNT_SET_MASK)
#define DPLL5_LOCK_CNT_SET_RESET                                               0x1f
#define DPLL5_LOCKED_LSB                                                       23
#define DPLL5_LOCKED_MSB                                                       23
#define DPLL5_LOCKED_MASK                                                      0x800000
#define DPLL5_LOCKED_GET(x)                                                    (((x) & DPLL5_LOCKED_MASK) >> DPLL5_LOCKED_LSB)
#define DPLL5_LOCKED_SET(x)                                                    (((0 | (x)) << DPLL5_LOCKED_LSB) & DPLL5_LOCKED_MASK)
#define DPLL5_LOCKED_RESET                                                     0x0
#define DPLL5_FREQ_MAX_LSB                                                     13
#define DPLL5_FREQ_MAX_MSB                                                     22
#define DPLL5_FREQ_MAX_MASK                                                    0x7fe000
#define DPLL5_FREQ_MAX_GET(x)                                                  (((x) & DPLL5_FREQ_MAX_MASK) >> DPLL5_FREQ_MAX_LSB)
#define DPLL5_FREQ_MAX_SET(x)                                                  (((0 | (x)) << DPLL5_FREQ_MAX_LSB) & DPLL5_FREQ_MAX_MASK)
#define DPLL5_FREQ_MAX_RESET                                                   0x0
#define DPLL5_FREQ_MIN_LSB                                                     3
#define DPLL5_FREQ_MIN_MSB                                                     12
#define DPLL5_FREQ_MIN_MASK                                                    0x1ff8
#define DPLL5_FREQ_MIN_GET(x)                                                  (((x) & DPLL5_FREQ_MIN_MASK) >> DPLL5_FREQ_MIN_LSB)
#define DPLL5_FREQ_MIN_SET(x)                                                  (((0 | (x)) << DPLL5_FREQ_MIN_LSB) & DPLL5_FREQ_MIN_MASK)
#define DPLL5_FREQ_MIN_RESET                                                   0x0
#define DPLL5_SPARE_LSB                                                        0
#define DPLL5_SPARE_MSB                                                        2
#define DPLL5_SPARE_MASK                                                       0x7
#define DPLL5_SPARE_GET(x)                                                     (((x) & DPLL5_SPARE_MASK) >> DPLL5_SPARE_LSB)
#define DPLL5_SPARE_SET(x)                                                     (((0 | (x)) << DPLL5_SPARE_LSB) & DPLL5_SPARE_MASK)
#define DPLL5_SPARE_RESET                                                      0x0
#define DPLL5_ADDRESS                                                          (0x10 + __DPLL_REG_CSR_BASE_ADDRESS)
#define DPLL5_RSTMASK                                                          0xffffffff
#define DPLL5_RESET                                                            0x1f000000



#endif /* _DPLL_REG_CSR_H_ */
