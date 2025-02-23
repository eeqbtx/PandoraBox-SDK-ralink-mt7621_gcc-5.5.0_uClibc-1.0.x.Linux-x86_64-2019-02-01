/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _PHY_RXB_REG_MAP_H_
#define _PHY_RXB_REG_MAP_H_


#ifndef __PHY_RXB_REG_MAP_BASE_ADDRESS
#define __PHY_RXB_REG_MAP_BASE_ADDRESS (0x10c00)
#endif


// 0x0 (PHY_BB_RXB_RX_RESET)
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_LSB                              0
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_MSB                              0
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_MASK                             0x1
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_GET(x)                           (((x) & PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_MASK) >> PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_LSB)
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_SET(x)                           (((0 | (x)) << PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_LSB) & PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_MASK)
#define PHY_BB_RXB_RX_RESET_RBAPB_RBCTL_RESET_RESET                            0x0
#define PHY_BB_RXB_RX_RESET_ADDRESS                                            (0x0 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_RESET_RSTMASK                                            0x1
#define PHY_BB_RXB_RX_RESET_RESET                                              0x0

// 0x4 (PHY_BB_RXB_RX_CONFIG_1)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_LSB                           24
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_MSB                           25
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_MASK                          0x3000000
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_GET(x)                        (((x) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_MASK) >> PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_LSB)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_SET(x)                        (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_LSB) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_MASK)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBBRK_TE_TH_RESET                         0x2
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_LSB                    23
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_MSB                    23
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_MASK                   0x800000
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_GET(x)                 (((x) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_MASK) >> PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_LSB)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_SET(x)                 (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_LSB) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_MASK)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBRSM_USE_FEEDBACK_RESET                  0x1
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_LSB                           20
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_MSB                           22
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_MASK                          0x700000
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_GET(x)                        (((x) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_MASK) >> PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_LSB)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_SET(x)                        (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_LSB) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_MASK)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBLMS_MU_SH_RESET                         0x3
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_LSB                     10
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_MSB                     19
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_MASK                    0xffc00
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_GET(x)                  (((x) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_MASK) >> PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_LSB)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_SET(x)                  (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_LSB) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_MASK)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_B_RESET                   0x127
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_LSB                     0
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_MSB                     9
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_MASK                    0x3ff
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_GET(x)                  (((x) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_MASK) >> PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_LSB)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_SET(x)                  (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_LSB) & PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_MASK)
#define PHY_BB_RXB_RX_CONFIG_1_RBAPB_RBCMF_PLL_COEFF_A_RESET                   0x2de
#define PHY_BB_RXB_RX_CONFIG_1_ADDRESS                                         (0x4 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_CONFIG_1_RSTMASK                                         0x3ffffff
#define PHY_BB_RXB_RX_CONFIG_1_RESET                                           0x2b49ede

// 0x8 (PHY_BB_RXB_RX_CONFIG_2)
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_LSB                           8
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_MSB                           13
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_MASK                          0x3f00
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_GET(x)                        (((x) & PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_MASK) >> PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_LSB)
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_SET(x)                        (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_LSB) & PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_MASK)
#define PHY_BB_RXB_RX_CONFIG_2_AGC_RBCTL_D_AGC_B_RESET                         0x10
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_LSB                     0
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_MSB                     7
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_MASK                    0xff
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_GET(x)                  (((x) & PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_MASK) >> PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_LSB)
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_SET(x)                  (((0 | (x)) << PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_LSB) & PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_MASK)
#define PHY_BB_RXB_RX_CONFIG_2_RBAPB_RBCTL_SFD_DET_TMO_RESET                   0x7d
#define PHY_BB_RXB_RX_CONFIG_2_ADDRESS                                         (0x8 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_CONFIG_2_RSTMASK                                         0x3fff
#define PHY_BB_RXB_RX_CONFIG_2_RESET                                           0x107d

// 0xc (PHY_BB_RXB_RX_DISABLES)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_LSB            16
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_MSB            16
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_MASK           0x10000
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_GET(x)         (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_SET(x)         (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_DISABLE_SSFD_DETECT_RESET          0x0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_LSB                     15
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_MSB                     15
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_MASK                    0x8000
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_GET(x)                  (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_SET(x)                  (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBDSCR_BYPASS_DSC_RESET                   0x0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_LSB                         10
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_MSB                         10
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_MASK                        0x400
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_GET(x)                      (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_SET(x)                      (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SIG_RESET                       0x0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_LSB                         9
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_MSB                         9
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_MASK                        0x200
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_GET(x)                      (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_SET(x)                      (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_SVC_RESET                       0x0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_LSB                         8
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_MSB                         8
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_MASK                        0x100
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_GET(x)                      (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_SET(x)                      (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_IGN_CRC_RESET                       0x0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_LSB                        0
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_MSB                        7
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_MASK                       0xff
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_GET(x)                     (((x) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_MASK) >> PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_LSB)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_SET(x)                     (((0 | (x)) << PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_LSB) & PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_MASK)
#define PHY_BB_RXB_RX_DISABLES_RBAPB_RBHPC_SVC_MASK_RESET                      0xfb
#define PHY_BB_RXB_RX_DISABLES_ADDRESS                                         (0xc + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_DISABLES_RSTMASK                                         0x187ff
#define PHY_BB_RXB_RX_DISABLES_RESET                                           0xfb

// 0x10 (PHY_BB_RXB_RX_DIVERSITY_MODE)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_LSB     20
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_MSB     21
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_MASK    0x300000
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_GET(x)  (((x) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_MASK) >> PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_LSB)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_SET(x)  (((0 | (x)) << PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_LSB) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_MASK)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCCK_HANDOFF_AVERAGER_GAIN_RESET   0x2
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_LSB     16
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_MSB     17
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_MASK    0x30000
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_GET(x)  (((x) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_MASK) >> PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_LSB)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_SET(x)  (((0 | (x)) << PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_LSB) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_MASK)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_HANDOFF_AVERAGER_GAIN_RESET   0x2
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_LSB      12
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_MSB      13
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_MASK     0x3000
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_GET(x)   (((x) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_MASK) >> PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_LSB)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_SET(x)   (((0 | (x)) << PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_LSB) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_MASK)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBBRK_ANTSEL_AVERAGER_GAIN_RESET    0x0
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_LSB              8
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_MSB              9
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_MASK             0x300
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_GET(x)           (((x) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_MASK) >> PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_LSB)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_SET(x)           (((0 | (x)) << PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_LSB) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_MASK)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_ANT_SEL_MODE_RESET            0x0
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_LSB             0
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_MSB             5
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_MASK            0x3f
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_GET(x)          (((x) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_MASK) >> PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_LSB)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_SET(x)          (((0 | (x)) << PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_LSB) & PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_MASK)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RBAPB_RBCTL_SNR_THRESHOLD_RESET           0x19
#define PHY_BB_RXB_RX_DIVERSITY_MODE_ADDRESS                                   (0x10 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RSTMASK                                   0x33333f
#define PHY_BB_RXB_RX_DIVERSITY_MODE_RESET                                     0x220019

// 0x14 (PHY_BB_RXB_RX_SSFD_LSFD)
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_LSB                    16
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_MSB                    31
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_MASK                   0xffff0000
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_GET(x)                 (((x) & PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_MASK) >> PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_LSB)
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_SET(x)                 (((0 | (x)) << PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_LSB) & PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_MASK)
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_SSFD_COUNT_RESET                  0x0
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_LSB                    0
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_MSB                    15
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_MASK                   0xffff
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_GET(x)                 (((x) & PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_MASK) >> PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_LSB)
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_SET(x)                 (((0 | (x)) << PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_LSB) & PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_MASK)
#define PHY_BB_RXB_RX_SSFD_LSFD_RBDSCR_RBAPB_LSFD_COUNT_RESET                  0x0
#define PHY_BB_RXB_RX_SSFD_LSFD_ADDRESS                                        (0x14 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_SSFD_LSFD_RSTMASK                                        0xffffffff
#define PHY_BB_RXB_RX_SSFD_LSFD_RESET                                          0x0

// 0x18 (PHY_BB_RXB_RX_SIG_SVC_ERRORS)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_LSB          16
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_MSB          31
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_MASK         0xffff0000
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_GET(x)       (((x) & PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_MASK) >> PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_LSB)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_SET(x)       (((0 | (x)) << PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_LSB) & PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_MASK)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SVC_ERRORS_COUNT_RESET        0x0
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_LSB          0
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_MSB          15
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_MASK         0xffff
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_GET(x)       (((x) & PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_MASK) >> PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_LSB)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_SET(x)       (((0 | (x)) << PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_LSB) & PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_MASK)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RBHPC_RBAPB_SIG_ERRORS_COUNT_RESET        0x0
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_ADDRESS                                   (0x18 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RSTMASK                                   0xffffffff
#define PHY_BB_RXB_RX_SIG_SVC_ERRORS_RESET                                     0x0

// 0x1c (PHY_BB_RXB_RX_CRC_ERRORS)
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_LSB              0
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_MSB              15
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_MASK             0xffff
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_GET(x)           (((x) & PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_MASK) >> PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_LSB)
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_SET(x)           (((0 | (x)) << PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_LSB) & PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_MASK)
#define PHY_BB_RXB_RX_CRC_ERRORS_RBHPC_RBAPB_CRC_ERRORS_COUNT_RESET            0x0
#define PHY_BB_RXB_RX_CRC_ERRORS_ADDRESS                                       (0x1c + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_CRC_ERRORS_RSTMASK                                       0xffff
#define PHY_BB_RXB_RX_CRC_ERRORS_RESET                                         0x0

// 0x20 (PHY_BB_RXB_RX_BYTES)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_LSB                         28
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_MSB                         31
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_MASK                        0xf0000000
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_GET(x)                      (((x) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_MASK) >> PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_LSB)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_SET(x)                      (((0 | (x)) << PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_LSB) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_MASK)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_1M_RESET                       0x0
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_LSB                         24
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_MSB                         27
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_MASK                        0xf000000
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_GET(x)                      (((x) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_MASK) >> PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_LSB)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_SET(x)                      (((0 | (x)) << PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_LSB) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_MASK)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_2M_RESET                       0x0
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_LSB                       20
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_MSB                       23
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_MASK                      0xf00000
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_GET(x)                    (((x) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_MASK) >> PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_LSB)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_SET(x)                    (((0 | (x)) << PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_LSB) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_MASK)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_5P5M_RESET                     0x0
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_LSB                        16
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_MSB                        19
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_MASK                       0xf0000
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_GET(x)                     (((x) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_MASK) >> PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_LSB)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_SET(x)                     (((0 | (x)) << PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_LSB) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_MASK)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_RATE_11M_RESET                      0x0
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_LSB                     0
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_MSB                     15
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_MASK                    0xffff
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_GET(x)                  (((x) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_MASK) >> PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_LSB)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_SET(x)                  (((0 | (x)) << PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_LSB) & PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_MASK)
#define PHY_BB_RXB_RX_BYTES_RBHPC_RBAPB_RX_BYTES_COUNT_RESET                   0x0
#define PHY_BB_RXB_RX_BYTES_ADDRESS                                            (0x20 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_RX_BYTES_RSTMASK                                            0xffffffff
#define PHY_BB_RXB_RX_BYTES_RESET                                              0x0

// 0x24 (PHY_BB_RXB_MPI_SOF_EOF)
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_LSB                   16
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_MSB                   31
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_MASK                  0xffff0000
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_GET(x)                (((x) & PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_MASK) >> PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_LSB)
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_LSB) & PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_MASK)
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_EOF_COUNT_RESET                 0x0
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_LSB                   0
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_MSB                   15
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_MASK                  0xffff
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_GET(x)                (((x) & PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_MASK) >> PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_LSB)
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_LSB) & PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_MASK)
#define PHY_BB_RXB_MPI_SOF_EOF_RBHPC_RBAPB_PMI_SOF_COUNT_RESET                 0x0
#define PHY_BB_RXB_MPI_SOF_EOF_ADDRESS                                         (0x24 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_MPI_SOF_EOF_RSTMASK                                         0xffffffff
#define PHY_BB_RXB_MPI_SOF_EOF_RESET                                           0x0

// 0x28 (PHY_BB_RXB_START_ABORT)
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_LSB                 16
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_MSB                 31
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_MASK                0xffff0000
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_GET(x)              (((x) & PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_MASK) >> PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_LSB)
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_SET(x)              (((0 | (x)) << PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_LSB) & PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_MASK)
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_ABORT_COUNT_RESET               0x0
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_LSB                 0
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_MSB                 15
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_MASK                0xffff
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_GET(x)              (((x) & PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_MASK) >> PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_LSB)
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_SET(x)              (((0 | (x)) << PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_LSB) & PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_MASK)
#define PHY_BB_RXB_START_ABORT_RBCTL_RBAPB_RXB_START_COUNT_RESET               0x0
#define PHY_BB_RXB_START_ABORT_ADDRESS                                         (0x28 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_START_ABORT_RSTMASK                                         0xffffffff
#define PHY_BB_RXB_START_ABORT_RESET                                           0x0

// 0x2c (PHY_BB_RXB_DYNSEL_ANT0_ANT1)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_LSB                   16
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_MSB                   31
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_MASK                  0xffff0000
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_GET(x)                (((x) & PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_MASK) >> PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_LSB)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_LSB) & PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_MASK)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT1_CNT_RESET                 0x0
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_LSB                   0
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_MSB                   15
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_MASK                  0xffff
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_GET(x)                (((x) & PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_MASK) >> PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_LSB)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_LSB) & PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_MASK)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RBCTL_RBAPB_ANT0_CNT_RESET                 0x0
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_ADDRESS                                    (0x2c + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RSTMASK                                    0xffffffff
#define PHY_BB_RXB_DYNSEL_ANT0_ANT1_RESET                                      0x0

// 0x30 (PHY_BB_RXB_DYNSEL_ANT2_ANT3)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_LSB                   16
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_MSB                   31
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_MASK                  0xffff0000
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_GET(x)                (((x) & PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_MASK) >> PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_LSB)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_LSB) & PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_MASK)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT3_CNT_RESET                 0x0
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_LSB                   0
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_MSB                   15
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_MASK                  0xffff
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_GET(x)                (((x) & PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_MASK) >> PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_LSB)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_LSB) & PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_MASK)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RBCTL_RBAPB_ANT2_CNT_RESET                 0x0
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_ADDRESS                                    (0x30 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RSTMASK                                    0xffffffff
#define PHY_BB_RXB_DYNSEL_ANT2_ANT3_RESET                                      0x0

// 0x34 (PHY_BB_RXB_DYNSEL_ALL_ANT)
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_LSB                   0
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_MSB                   15
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_MASK                  0xffff
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_GET(x)                (((x) & PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_MASK) >> PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_LSB)
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_SET(x)                (((0 | (x)) << PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_LSB) & PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_MASK)
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RBCTL_RBAPB_ALLANT_CNT_RESET                 0x0
#define PHY_BB_RXB_DYNSEL_ALL_ANT_ADDRESS                                      (0x34 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RSTMASK                                      0xffff
#define PHY_BB_RXB_DYNSEL_ALL_ANT_RESET                                        0x0

// 0x38 (PHY_BB_FORCE_CLKEN_CCK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_LSB                            5
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MSB                            5
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MASK                           0x20
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_GET(x)                         (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_SET(x)                         (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_RESET                          0x0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_LSB                             4
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MSB                             4
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MASK                            0x10
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_GET(x)                          (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_SET(x)                          (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_RESET                           0x0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_LSB                            3
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MSB                            3
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MASK                           0x8
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_GET(x)                         (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_SET(x)                         (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_RESET                          0x0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_LSB                            2
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MSB                            2
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MASK                           0x4
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_GET(x)                         (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_SET(x)                         (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_RESET                          0x0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_LSB                            1
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MSB                            1
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MASK                           0x2
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_GET(x)                         (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_SET(x)                         (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_RESET                          0x0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_LSB                            0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MSB                            0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MASK                           0x1
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_GET(x)                         (((x) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MASK) >> PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_LSB)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_SET(x)                         (((0 | (x)) << PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_LSB) & PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MASK)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_RESET                          0x0
#define PHY_BB_FORCE_CLKEN_CCK_ADDRESS                                         (0x38 + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_FORCE_CLKEN_CCK_RSTMASK                                         0x3f
#define PHY_BB_FORCE_CLKEN_CCK_RESET                                           0x0

// 0x3c (PHY_BB_RXB_SPARE_01)
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_LSB                                   0
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_MSB                                   25
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_MASK                                  0x3ffffff
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_GET(x)                                (((x) & PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_MASK) >> PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_LSB)
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_SET(x)                                (((0 | (x)) << PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_LSB) & PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_MASK)
#define PHY_BB_RXB_SPARE_01_RXB_ECO_CTRL_RESET                                 0x0
#define PHY_BB_RXB_SPARE_01_ADDRESS                                            (0x3c + __PHY_RXB_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXB_SPARE_01_RSTMASK                                            0x3ffffff
#define PHY_BB_RXB_SPARE_01_RESET                                              0x0



#endif /* _PHY_RXB_REG_MAP_H_ */
