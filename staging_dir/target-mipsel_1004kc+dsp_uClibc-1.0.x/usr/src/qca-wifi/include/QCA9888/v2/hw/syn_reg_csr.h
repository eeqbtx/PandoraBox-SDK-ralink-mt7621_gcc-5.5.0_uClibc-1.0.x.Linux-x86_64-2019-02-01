/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */
#ifndef _SYN_REG_CSR_H_
#define _SYN_REG_CSR_H_


#ifndef __SYN_REG_CSR_BASE_ADDRESS
#define __SYN_REG_CSR_BASE_ADDRESS (0x47740)
#endif


// 0x0 (SYN_N_REG)
#define SYN_N_REG_NBNA_LSB                                                     24
#define SYN_N_REG_NBNA_MSB                                                     31
#define SYN_N_REG_NBNA_MASK                                                    0xff000000
#define SYN_N_REG_NBNA_GET(x)                                                  (((x) & SYN_N_REG_NBNA_MASK) >> SYN_N_REG_NBNA_LSB)
#define SYN_N_REG_NBNA_SET(x)                                                  (((0 | (x)) << SYN_N_REG_NBNA_LSB) & SYN_N_REG_NBNA_MASK)
#define SYN_N_REG_NBNA_RESET                                                   0x13
#define SYN_N_REG_NF_LSB                                                       1
#define SYN_N_REG_NF_MSB                                                       23
#define SYN_N_REG_NF_MASK                                                      0xfffffe
#define SYN_N_REG_NF_GET(x)                                                    (((x) & SYN_N_REG_NF_MASK) >> SYN_N_REG_NF_LSB)
#define SYN_N_REG_NF_SET(x)                                                    (((0 | (x)) << SYN_N_REG_NF_LSB) & SYN_N_REG_NF_MASK)
#define SYN_N_REG_NF_RESET                                                     0xc7127
#define SYN_N_REG_NF_LSB_LSB                                                   0
#define SYN_N_REG_NF_LSB_MSB                                                   0
#define SYN_N_REG_NF_LSB_MASK                                                  0x1
#define SYN_N_REG_NF_LSB_GET(x)                                                (((x) & SYN_N_REG_NF_LSB_MASK) >> SYN_N_REG_NF_LSB_LSB)
#define SYN_N_REG_NF_LSB_SET(x)                                                (((0 | (x)) << SYN_N_REG_NF_LSB_LSB) & SYN_N_REG_NF_LSB_MASK)
#define SYN_N_REG_NF_LSB_RESET                                                 0x0
#define SYN_N_REG_ADDRESS                                                      (0x0 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_N_REG_RSTMASK                                                      0xffffffff
#define SYN_N_REG_RESET                                                        0x1318e24e

// 0x4 (SYN_BS_0)
#define SYN_BS_0_BSSTART_LSB                                                   31
#define SYN_BS_0_BSSTART_MSB                                                   31
#define SYN_BS_0_BSSTART_MASK                                                  0x80000000
#define SYN_BS_0_BSSTART_GET(x)                                                (((x) & SYN_BS_0_BSSTART_MASK) >> SYN_BS_0_BSSTART_LSB)
#define SYN_BS_0_BSSTART_SET(x)                                                (((0 | (x)) << SYN_BS_0_BSSTART_LSB) & SYN_BS_0_BSSTART_MASK)
#define SYN_BS_0_BSSTART_RESET                                                 0x0
#define SYN_BS_0_BSMODE_LSB                                                    28
#define SYN_BS_0_BSMODE_MSB                                                    30
#define SYN_BS_0_BSMODE_MASK                                                   0x70000000
#define SYN_BS_0_BSMODE_GET(x)                                                 (((x) & SYN_BS_0_BSMODE_MASK) >> SYN_BS_0_BSMODE_LSB)
#define SYN_BS_0_BSMODE_SET(x)                                                 (((0 | (x)) << SYN_BS_0_BSMODE_LSB) & SYN_BS_0_BSMODE_MASK)
#define SYN_BS_0_BSMODE_RESET                                                  0x0
#define SYN_BS_0_BKSHFT_LSB                                                    26
#define SYN_BS_0_BKSHFT_MSB                                                    27
#define SYN_BS_0_BKSHFT_MASK                                                   0xc000000
#define SYN_BS_0_BKSHFT_GET(x)                                                 (((x) & SYN_BS_0_BKSHFT_MASK) >> SYN_BS_0_BKSHFT_LSB)
#define SYN_BS_0_BKSHFT_SET(x)                                                 (((0 | (x)) << SYN_BS_0_BKSHFT_LSB) & SYN_BS_0_BKSHFT_MASK)
#define SYN_BS_0_BKSHFT_RESET                                                  0x0
#define SYN_BS_0_BSWAIT_LSB                                                    23
#define SYN_BS_0_BSWAIT_MSB                                                    25
#define SYN_BS_0_BSWAIT_MASK                                                   0x3800000
#define SYN_BS_0_BSWAIT_GET(x)                                                 (((x) & SYN_BS_0_BSWAIT_MASK) >> SYN_BS_0_BSWAIT_LSB)
#define SYN_BS_0_BSWAIT_SET(x)                                                 (((0 | (x)) << SYN_BS_0_BSWAIT_LSB) & SYN_BS_0_BSWAIT_MASK)
#define SYN_BS_0_BSWAIT_RESET                                                  0x1
#define SYN_BS_0_BSSAMPLE_LSB                                                  20
#define SYN_BS_0_BSSAMPLE_MSB                                                  22
#define SYN_BS_0_BSSAMPLE_MASK                                                 0x700000
#define SYN_BS_0_BSSAMPLE_GET(x)                                               (((x) & SYN_BS_0_BSSAMPLE_MASK) >> SYN_BS_0_BSSAMPLE_LSB)
#define SYN_BS_0_BSSAMPLE_SET(x)                                               (((0 | (x)) << SYN_BS_0_BSSAMPLE_LSB) & SYN_BS_0_BSSAMPLE_MASK)
#define SYN_BS_0_BSSAMPLE_RESET                                                0x5
#define SYN_BS_0_BSSETTIME_LSB                                                 18
#define SYN_BS_0_BSSETTIME_MSB                                                 19
#define SYN_BS_0_BSSETTIME_MASK                                                0xc0000
#define SYN_BS_0_BSSETTIME_GET(x)                                              (((x) & SYN_BS_0_BSSETTIME_MASK) >> SYN_BS_0_BSSETTIME_LSB)
#define SYN_BS_0_BSSETTIME_SET(x)                                              (((0 | (x)) << SYN_BS_0_BSSETTIME_LSB) & SYN_BS_0_BSSETTIME_MASK)
#define SYN_BS_0_BSSETTIME_RESET                                               0x1
#define SYN_BS_0_BSFAST_MSB_0_LSB                                              16
#define SYN_BS_0_BSFAST_MSB_0_MSB                                              17
#define SYN_BS_0_BSFAST_MSB_0_MASK                                             0x30000
#define SYN_BS_0_BSFAST_MSB_0_GET(x)                                           (((x) & SYN_BS_0_BSFAST_MSB_0_MASK) >> SYN_BS_0_BSFAST_MSB_0_LSB)
#define SYN_BS_0_BSFAST_MSB_0_SET(x)                                           (((0 | (x)) << SYN_BS_0_BSFAST_MSB_0_LSB) & SYN_BS_0_BSFAST_MSB_0_MASK)
#define SYN_BS_0_BSFAST_MSB_0_RESET                                            0x1
#define SYN_BS_0_BSFAST_MSB_1_LSB                                              14
#define SYN_BS_0_BSFAST_MSB_1_MSB                                              15
#define SYN_BS_0_BSFAST_MSB_1_MASK                                             0xc000
#define SYN_BS_0_BSFAST_MSB_1_GET(x)                                           (((x) & SYN_BS_0_BSFAST_MSB_1_MASK) >> SYN_BS_0_BSFAST_MSB_1_LSB)
#define SYN_BS_0_BSFAST_MSB_1_SET(x)                                           (((0 | (x)) << SYN_BS_0_BSFAST_MSB_1_LSB) & SYN_BS_0_BSFAST_MSB_1_MASK)
#define SYN_BS_0_BSFAST_MSB_1_RESET                                            0x1
#define SYN_BS_0_BSFAST_MSB_2_LSB                                              12
#define SYN_BS_0_BSFAST_MSB_2_MSB                                              13
#define SYN_BS_0_BSFAST_MSB_2_MASK                                             0x3000
#define SYN_BS_0_BSFAST_MSB_2_GET(x)                                           (((x) & SYN_BS_0_BSFAST_MSB_2_MASK) >> SYN_BS_0_BSFAST_MSB_2_LSB)
#define SYN_BS_0_BSFAST_MSB_2_SET(x)                                           (((0 | (x)) << SYN_BS_0_BSFAST_MSB_2_LSB) & SYN_BS_0_BSFAST_MSB_2_MASK)
#define SYN_BS_0_BSFAST_MSB_2_RESET                                            0x2
#define SYN_BS_0_BSFAST_LSB_LSB                                                10
#define SYN_BS_0_BSFAST_LSB_MSB                                                11
#define SYN_BS_0_BSFAST_LSB_MASK                                               0xc00
#define SYN_BS_0_BSFAST_LSB_GET(x)                                             (((x) & SYN_BS_0_BSFAST_LSB_MASK) >> SYN_BS_0_BSFAST_LSB_LSB)
#define SYN_BS_0_BSFAST_LSB_SET(x)                                             (((0 | (x)) << SYN_BS_0_BSFAST_LSB_LSB) & SYN_BS_0_BSFAST_LSB_MASK)
#define SYN_BS_0_BSFAST_LSB_RESET                                              0x2
#define SYN_BS_0_BSFAST_EN_LSB                                                 9
#define SYN_BS_0_BSFAST_EN_MSB                                                 9
#define SYN_BS_0_BSFAST_EN_MASK                                                0x200
#define SYN_BS_0_BSFAST_EN_GET(x)                                              (((x) & SYN_BS_0_BSFAST_EN_MASK) >> SYN_BS_0_BSFAST_EN_LSB)
#define SYN_BS_0_BSFAST_EN_SET(x)                                              (((0 | (x)) << SYN_BS_0_BSFAST_EN_LSB) & SYN_BS_0_BSFAST_EN_MASK)
#define SYN_BS_0_BSFAST_EN_RESET                                               0x1
#define SYN_BS_0_BSLUT_EN_LSB                                                  8
#define SYN_BS_0_BSLUT_EN_MSB                                                  8
#define SYN_BS_0_BSLUT_EN_MASK                                                 0x100
#define SYN_BS_0_BSLUT_EN_GET(x)                                               (((x) & SYN_BS_0_BSLUT_EN_MASK) >> SYN_BS_0_BSLUT_EN_LSB)
#define SYN_BS_0_BSLUT_EN_SET(x)                                               (((0 | (x)) << SYN_BS_0_BSLUT_EN_LSB) & SYN_BS_0_BSLUT_EN_MASK)
#define SYN_BS_0_BSLUT_EN_RESET                                                0x0
#define SYN_BS_0_BSLUT_SMPL_LSB                                                6
#define SYN_BS_0_BSLUT_SMPL_MSB                                                7
#define SYN_BS_0_BSLUT_SMPL_MASK                                               0xc0
#define SYN_BS_0_BSLUT_SMPL_GET(x)                                             (((x) & SYN_BS_0_BSLUT_SMPL_MASK) >> SYN_BS_0_BSLUT_SMPL_LSB)
#define SYN_BS_0_BSLUT_SMPL_SET(x)                                             (((0 | (x)) << SYN_BS_0_BSLUT_SMPL_LSB) & SYN_BS_0_BSLUT_SMPL_MASK)
#define SYN_BS_0_BSLUT_SMPL_RESET                                              0x3
#define SYN_BS_0_BSLUT_START_LSB                                               5
#define SYN_BS_0_BSLUT_START_MSB                                               5
#define SYN_BS_0_BSLUT_START_MASK                                              0x20
#define SYN_BS_0_BSLUT_START_GET(x)                                            (((x) & SYN_BS_0_BSLUT_START_MASK) >> SYN_BS_0_BSLUT_START_LSB)
#define SYN_BS_0_BSLUT_START_SET(x)                                            (((0 | (x)) << SYN_BS_0_BSLUT_START_LSB) & SYN_BS_0_BSLUT_START_MASK)
#define SYN_BS_0_BSLUT_START_RESET                                             0x0
#define SYN_BS_0_BSLUT_SEL_OVR_LSB                                             0
#define SYN_BS_0_BSLUT_SEL_OVR_MSB                                             4
#define SYN_BS_0_BSLUT_SEL_OVR_MASK                                            0x1f
#define SYN_BS_0_BSLUT_SEL_OVR_GET(x)                                          (((x) & SYN_BS_0_BSLUT_SEL_OVR_MASK) >> SYN_BS_0_BSLUT_SEL_OVR_LSB)
#define SYN_BS_0_BSLUT_SEL_OVR_SET(x)                                          (((0 | (x)) << SYN_BS_0_BSLUT_SEL_OVR_LSB) & SYN_BS_0_BSLUT_SEL_OVR_MASK)
#define SYN_BS_0_BSLUT_SEL_OVR_RESET                                           0x0
#define SYN_BS_0_ADDRESS                                                       (0x4 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_BS_0_RSTMASK                                                       0xffffffff
#define SYN_BS_0_RESET                                                         0xd56ac0

// 0x8 (SYN_BS_1)
#define SYN_BS_1_TSTCNT_LSB                                                    16
#define SYN_BS_1_TSTCNT_MSB                                                    31
#define SYN_BS_1_TSTCNT_MASK                                                   0xffff0000
#define SYN_BS_1_TSTCNT_GET(x)                                                 (((x) & SYN_BS_1_TSTCNT_MASK) >> SYN_BS_1_TSTCNT_LSB)
#define SYN_BS_1_TSTCNT_SET(x)                                                 (((0 | (x)) << SYN_BS_1_TSTCNT_LSB) & SYN_BS_1_TSTCNT_MASK)
#define SYN_BS_1_TSTCNT_RESET                                                  0x0
#define SYN_BS_1_BSTESTEN_LSB                                                  15
#define SYN_BS_1_BSTESTEN_MSB                                                  15
#define SYN_BS_1_BSTESTEN_MASK                                                 0x8000
#define SYN_BS_1_BSTESTEN_GET(x)                                               (((x) & SYN_BS_1_BSTESTEN_MASK) >> SYN_BS_1_BSTESTEN_LSB)
#define SYN_BS_1_BSTESTEN_SET(x)                                               (((0 | (x)) << SYN_BS_1_BSTESTEN_LSB) & SYN_BS_1_BSTESTEN_MASK)
#define SYN_BS_1_BSTESTEN_RESET                                                0x0
#define SYN_BS_1_SDTESTEN_LSB                                                  14
#define SYN_BS_1_SDTESTEN_MSB                                                  14
#define SYN_BS_1_SDTESTEN_MASK                                                 0x4000
#define SYN_BS_1_SDTESTEN_GET(x)                                               (((x) & SYN_BS_1_SDTESTEN_MASK) >> SYN_BS_1_SDTESTEN_LSB)
#define SYN_BS_1_SDTESTEN_SET(x)                                               (((0 | (x)) << SYN_BS_1_SDTESTEN_LSB) & SYN_BS_1_SDTESTEN_MASK)
#define SYN_BS_1_SDTESTEN_RESET                                                0x0
#define SYN_BS_1_SD_RESET_LSB                                                  13
#define SYN_BS_1_SD_RESET_MSB                                                  13
#define SYN_BS_1_SD_RESET_MASK                                                 0x2000
#define SYN_BS_1_SD_RESET_GET(x)                                               (((x) & SYN_BS_1_SD_RESET_MASK) >> SYN_BS_1_SD_RESET_LSB)
#define SYN_BS_1_SD_RESET_SET(x)                                               (((0 | (x)) << SYN_BS_1_SD_RESET_LSB) & SYN_BS_1_SD_RESET_MASK)
#define SYN_BS_1_SD_RESET_RESET                                                0x0
#define SYN_BS_1_RESERVED_0_LSB                                                11
#define SYN_BS_1_RESERVED_0_MSB                                                12
#define SYN_BS_1_RESERVED_0_MASK                                               0x1800
#define SYN_BS_1_RESERVED_0_GET(x)                                             (((x) & SYN_BS_1_RESERVED_0_MASK) >> SYN_BS_1_RESERVED_0_LSB)
#define SYN_BS_1_RESERVED_0_SET(x)                                             (((0 | (x)) << SYN_BS_1_RESERVED_0_LSB) & SYN_BS_1_RESERVED_0_MASK)
#define SYN_BS_1_RESERVED_0_RESET                                              0x0
#define SYN_BS_1_IVCOBK_LSB                                                    0
#define SYN_BS_1_IVCOBK_MSB                                                    10
#define SYN_BS_1_IVCOBK_MASK                                                   0x7ff
#define SYN_BS_1_IVCOBK_GET(x)                                                 (((x) & SYN_BS_1_IVCOBK_MASK) >> SYN_BS_1_IVCOBK_LSB)
#define SYN_BS_1_IVCOBK_SET(x)                                                 (((0 | (x)) << SYN_BS_1_IVCOBK_LSB) & SYN_BS_1_IVCOBK_MASK)
#define SYN_BS_1_IVCOBK_RESET                                                  0x400
#define SYN_BS_1_ADDRESS                                                       (0x8 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_BS_1_RSTMASK                                                       0xffffffff
#define SYN_BS_1_RESET                                                         0x400

// 0xc (SYN_BS_2)
#define SYN_BS_2_BSCMP_POL_LSB                                                 31
#define SYN_BS_2_BSCMP_POL_MSB                                                 31
#define SYN_BS_2_BSCMP_POL_MASK                                                0x80000000
#define SYN_BS_2_BSCMP_POL_GET(x)                                              (((x) & SYN_BS_2_BSCMP_POL_MASK) >> SYN_BS_2_BSCMP_POL_LSB)
#define SYN_BS_2_BSCMP_POL_SET(x)                                              (((0 | (x)) << SYN_BS_2_BSCMP_POL_LSB) & SYN_BS_2_BSCMP_POL_MASK)
#define SYN_BS_2_BSCMP_POL_RESET                                               0x1
#define SYN_BS_2_BSCMP_EQ_EN_LSB                                               30
#define SYN_BS_2_BSCMP_EQ_EN_MSB                                               30
#define SYN_BS_2_BSCMP_EQ_EN_MASK                                              0x40000000
#define SYN_BS_2_BSCMP_EQ_EN_GET(x)                                            (((x) & SYN_BS_2_BSCMP_EQ_EN_MASK) >> SYN_BS_2_BSCMP_EQ_EN_LSB)
#define SYN_BS_2_BSCMP_EQ_EN_SET(x)                                            (((0 | (x)) << SYN_BS_2_BSCMP_EQ_EN_LSB) & SYN_BS_2_BSCMP_EQ_EN_MASK)
#define SYN_BS_2_BSCMP_EQ_EN_RESET                                             0x0
#define SYN_BS_2_RFCNTEN_DLY_DIS_LSB                                           29
#define SYN_BS_2_RFCNTEN_DLY_DIS_MSB                                           29
#define SYN_BS_2_RFCNTEN_DLY_DIS_MASK                                          0x20000000
#define SYN_BS_2_RFCNTEN_DLY_DIS_GET(x)                                        (((x) & SYN_BS_2_RFCNTEN_DLY_DIS_MASK) >> SYN_BS_2_RFCNTEN_DLY_DIS_LSB)
#define SYN_BS_2_RFCNTEN_DLY_DIS_SET(x)                                        (((0 | (x)) << SYN_BS_2_RFCNTEN_DLY_DIS_LSB) & SYN_BS_2_RFCNTEN_DLY_DIS_MASK)
#define SYN_BS_2_RFCNTEN_DLY_DIS_RESET                                         0x0
#define SYN_BS_2_BS_CLBS_EN_LSB                                                28
#define SYN_BS_2_BS_CLBS_EN_MSB                                                28
#define SYN_BS_2_BS_CLBS_EN_MASK                                               0x10000000
#define SYN_BS_2_BS_CLBS_EN_GET(x)                                             (((x) & SYN_BS_2_BS_CLBS_EN_MASK) >> SYN_BS_2_BS_CLBS_EN_LSB)
#define SYN_BS_2_BS_CLBS_EN_SET(x)                                             (((0 | (x)) << SYN_BS_2_BS_CLBS_EN_LSB) & SYN_BS_2_BS_CLBS_EN_MASK)
#define SYN_BS_2_BS_CLBS_EN_RESET                                              0x0
#define SYN_BS_2_SDM_SEL_LSB                                                   26
#define SYN_BS_2_SDM_SEL_MSB                                                   27
#define SYN_BS_2_SDM_SEL_MASK                                                  0xc000000
#define SYN_BS_2_SDM_SEL_GET(x)                                                (((x) & SYN_BS_2_SDM_SEL_MASK) >> SYN_BS_2_SDM_SEL_LSB)
#define SYN_BS_2_SDM_SEL_SET(x)                                                (((0 | (x)) << SYN_BS_2_SDM_SEL_LSB) & SYN_BS_2_SDM_SEL_MASK)
#define SYN_BS_2_SDM_SEL_RESET                                                 0x1
#define SYN_BS_2_SDMOGAIN_LSB                                                  24
#define SYN_BS_2_SDMOGAIN_MSB                                                  25
#define SYN_BS_2_SDMOGAIN_MASK                                                 0x3000000
#define SYN_BS_2_SDMOGAIN_GET(x)                                               (((x) & SYN_BS_2_SDMOGAIN_MASK) >> SYN_BS_2_SDMOGAIN_LSB)
#define SYN_BS_2_SDMOGAIN_SET(x)                                               (((0 | (x)) << SYN_BS_2_SDMOGAIN_LSB) & SYN_BS_2_SDMOGAIN_MASK)
#define SYN_BS_2_SDMOGAIN_RESET                                                0x0
#define SYN_BS_2_RFCNT_SEL_BSC_LSB                                             21
#define SYN_BS_2_RFCNT_SEL_BSC_MSB                                             23
#define SYN_BS_2_RFCNT_SEL_BSC_MASK                                            0xe00000
#define SYN_BS_2_RFCNT_SEL_BSC_GET(x)                                          (((x) & SYN_BS_2_RFCNT_SEL_BSC_MASK) >> SYN_BS_2_RFCNT_SEL_BSC_LSB)
#define SYN_BS_2_RFCNT_SEL_BSC_SET(x)                                          (((0 | (x)) << SYN_BS_2_RFCNT_SEL_BSC_LSB) & SYN_BS_2_RFCNT_SEL_BSC_MASK)
#define SYN_BS_2_RFCNT_SEL_BSC_RESET                                           0x2
#define SYN_BS_2_MULT_NDIVM1_LSB                                               18
#define SYN_BS_2_MULT_NDIVM1_MSB                                               20
#define SYN_BS_2_MULT_NDIVM1_MASK                                              0x1c0000
#define SYN_BS_2_MULT_NDIVM1_GET(x)                                            (((x) & SYN_BS_2_MULT_NDIVM1_MASK) >> SYN_BS_2_MULT_NDIVM1_LSB)
#define SYN_BS_2_MULT_NDIVM1_SET(x)                                            (((0 | (x)) << SYN_BS_2_MULT_NDIVM1_LSB) & SYN_BS_2_MULT_NDIVM1_MASK)
#define SYN_BS_2_MULT_NDIVM1_RESET                                             0x1
#define SYN_BS_2_MONITOR_DLL_LSB                                               16
#define SYN_BS_2_MONITOR_DLL_MSB                                               17
#define SYN_BS_2_MONITOR_DLL_MASK                                              0x30000
#define SYN_BS_2_MONITOR_DLL_GET(x)                                            (((x) & SYN_BS_2_MONITOR_DLL_MASK) >> SYN_BS_2_MONITOR_DLL_LSB)
#define SYN_BS_2_MONITOR_DLL_SET(x)                                            (((0 | (x)) << SYN_BS_2_MONITOR_DLL_LSB) & SYN_BS_2_MONITOR_DLL_MASK)
#define SYN_BS_2_MONITOR_DLL_RESET                                             0x0
#define SYN_BS_2_DTEST0_SEL_LSB                                                12
#define SYN_BS_2_DTEST0_SEL_MSB                                                15
#define SYN_BS_2_DTEST0_SEL_MASK                                               0xf000
#define SYN_BS_2_DTEST0_SEL_GET(x)                                             (((x) & SYN_BS_2_DTEST0_SEL_MASK) >> SYN_BS_2_DTEST0_SEL_LSB)
#define SYN_BS_2_DTEST0_SEL_SET(x)                                             (((0 | (x)) << SYN_BS_2_DTEST0_SEL_LSB) & SYN_BS_2_DTEST0_SEL_MASK)
#define SYN_BS_2_DTEST0_SEL_RESET                                              0x0
#define SYN_BS_2_DTEST1_SEL_LSB                                                8
#define SYN_BS_2_DTEST1_SEL_MSB                                                11
#define SYN_BS_2_DTEST1_SEL_MASK                                               0xf00
#define SYN_BS_2_DTEST1_SEL_GET(x)                                             (((x) & SYN_BS_2_DTEST1_SEL_MASK) >> SYN_BS_2_DTEST1_SEL_LSB)
#define SYN_BS_2_DTEST1_SEL_SET(x)                                             (((0 | (x)) << SYN_BS_2_DTEST1_SEL_LSB) & SYN_BS_2_DTEST1_SEL_MASK)
#define SYN_BS_2_DTEST1_SEL_RESET                                              0x0
#define SYN_BS_2_BIST_RO_SEL_LSB                                               4
#define SYN_BS_2_BIST_RO_SEL_MSB                                               7
#define SYN_BS_2_BIST_RO_SEL_MASK                                              0xf0
#define SYN_BS_2_BIST_RO_SEL_GET(x)                                            (((x) & SYN_BS_2_BIST_RO_SEL_MASK) >> SYN_BS_2_BIST_RO_SEL_LSB)
#define SYN_BS_2_BIST_RO_SEL_SET(x)                                            (((0 | (x)) << SYN_BS_2_BIST_RO_SEL_LSB) & SYN_BS_2_BIST_RO_SEL_MASK)
#define SYN_BS_2_BIST_RO_SEL_RESET                                             0x0
#define SYN_BS_2_BS_RO_SEL_LSB                                                 0
#define SYN_BS_2_BS_RO_SEL_MSB                                                 3
#define SYN_BS_2_BS_RO_SEL_MASK                                                0xf
#define SYN_BS_2_BS_RO_SEL_GET(x)                                              (((x) & SYN_BS_2_BS_RO_SEL_MASK) >> SYN_BS_2_BS_RO_SEL_LSB)
#define SYN_BS_2_BS_RO_SEL_SET(x)                                              (((0 | (x)) << SYN_BS_2_BS_RO_SEL_LSB) & SYN_BS_2_BS_RO_SEL_MASK)
#define SYN_BS_2_BS_RO_SEL_RESET                                               0x0
#define SYN_BS_2_ADDRESS                                                       (0xc + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_BS_2_RSTMASK                                                       0xffffffff
#define SYN_BS_2_RESET                                                         0x84440000

// 0x10 (SYN_BS_READ)
#define SYN_BS_READ_VHT160_EN_3_LSB                                            28
#define SYN_BS_READ_VHT160_EN_3_MSB                                            28
#define SYN_BS_READ_VHT160_EN_3_MASK                                           0x10000000
#define SYN_BS_READ_VHT160_EN_3_GET(x)                                         (((x) & SYN_BS_READ_VHT160_EN_3_MASK) >> SYN_BS_READ_VHT160_EN_3_LSB)
#define SYN_BS_READ_VHT160_EN_3_SET(x)                                         (((0 | (x)) << SYN_BS_READ_VHT160_EN_3_LSB) & SYN_BS_READ_VHT160_EN_3_MASK)
#define SYN_BS_READ_VHT160_EN_3_RESET                                          0x0
#define SYN_BS_READ_VHT160_EN_2_LSB                                            27
#define SYN_BS_READ_VHT160_EN_2_MSB                                            27
#define SYN_BS_READ_VHT160_EN_2_MASK                                           0x8000000
#define SYN_BS_READ_VHT160_EN_2_GET(x)                                         (((x) & SYN_BS_READ_VHT160_EN_2_MASK) >> SYN_BS_READ_VHT160_EN_2_LSB)
#define SYN_BS_READ_VHT160_EN_2_SET(x)                                         (((0 | (x)) << SYN_BS_READ_VHT160_EN_2_LSB) & SYN_BS_READ_VHT160_EN_2_MASK)
#define SYN_BS_READ_VHT160_EN_2_RESET                                          0x0
#define SYN_BS_READ_VHT160_MODE_LSB                                            25
#define SYN_BS_READ_VHT160_MODE_MSB                                            26
#define SYN_BS_READ_VHT160_MODE_MASK                                           0x6000000
#define SYN_BS_READ_VHT160_MODE_GET(x)                                         (((x) & SYN_BS_READ_VHT160_MODE_MASK) >> SYN_BS_READ_VHT160_MODE_LSB)
#define SYN_BS_READ_VHT160_MODE_SET(x)                                         (((0 | (x)) << SYN_BS_READ_VHT160_MODE_LSB) & SYN_BS_READ_VHT160_MODE_MASK)
#define SYN_BS_READ_VHT160_MODE_RESET                                          0x0
#define SYN_BS_READ_TXON_MASK_LSB                                              24
#define SYN_BS_READ_TXON_MASK_MSB                                              24
#define SYN_BS_READ_TXON_MASK_MASK                                             0x1000000
#define SYN_BS_READ_TXON_MASK_GET(x)                                           (((x) & SYN_BS_READ_TXON_MASK_MASK) >> SYN_BS_READ_TXON_MASK_LSB)
#define SYN_BS_READ_TXON_MASK_SET(x)                                           (((0 | (x)) << SYN_BS_READ_TXON_MASK_LSB) & SYN_BS_READ_TXON_MASK_MASK)
#define SYN_BS_READ_TXON_MASK_RESET                                            0x0
#define SYN_BS_READ_CLBS_ON_LSB                                                23
#define SYN_BS_READ_CLBS_ON_MSB                                                23
#define SYN_BS_READ_CLBS_ON_MASK                                               0x800000
#define SYN_BS_READ_CLBS_ON_GET(x)                                             (((x) & SYN_BS_READ_CLBS_ON_MASK) >> SYN_BS_READ_CLBS_ON_LSB)
#define SYN_BS_READ_CLBS_ON_SET(x)                                             (((0 | (x)) << SYN_BS_READ_CLBS_ON_LSB) & SYN_BS_READ_CLBS_ON_MASK)
#define SYN_BS_READ_CLBS_ON_RESET                                              0x0
#define SYN_BS_READ_PAL_ON_LSB                                                 22
#define SYN_BS_READ_PAL_ON_MSB                                                 22
#define SYN_BS_READ_PAL_ON_MASK                                                0x400000
#define SYN_BS_READ_PAL_ON_GET(x)                                              (((x) & SYN_BS_READ_PAL_ON_MASK) >> SYN_BS_READ_PAL_ON_LSB)
#define SYN_BS_READ_PAL_ON_SET(x)                                              (((0 | (x)) << SYN_BS_READ_PAL_ON_LSB) & SYN_BS_READ_PAL_ON_MASK)
#define SYN_BS_READ_PAL_ON_RESET                                               0x0
#define SYN_BS_READ_VA_ON_LSB                                                  21
#define SYN_BS_READ_VA_ON_MSB                                                  21
#define SYN_BS_READ_VA_ON_MASK                                                 0x200000
#define SYN_BS_READ_VA_ON_GET(x)                                               (((x) & SYN_BS_READ_VA_ON_MASK) >> SYN_BS_READ_VA_ON_LSB)
#define SYN_BS_READ_VA_ON_SET(x)                                               (((0 | (x)) << SYN_BS_READ_VA_ON_LSB) & SYN_BS_READ_VA_ON_MASK)
#define SYN_BS_READ_VA_ON_RESET                                                0x0
#define SYN_BS_READ_BS_ON_LSB                                                  20
#define SYN_BS_READ_BS_ON_MSB                                                  20
#define SYN_BS_READ_BS_ON_MASK                                                 0x100000
#define SYN_BS_READ_BS_ON_GET(x)                                               (((x) & SYN_BS_READ_BS_ON_MASK) >> SYN_BS_READ_BS_ON_LSB)
#define SYN_BS_READ_BS_ON_SET(x)                                               (((0 | (x)) << SYN_BS_READ_BS_ON_LSB) & SYN_BS_READ_BS_ON_MASK)
#define SYN_BS_READ_BS_ON_RESET                                                0x0
#define SYN_BS_READ_BSLUT_ON_LSB                                               19
#define SYN_BS_READ_BSLUT_ON_MSB                                               19
#define SYN_BS_READ_BSLUT_ON_MASK                                              0x80000
#define SYN_BS_READ_BSLUT_ON_GET(x)                                            (((x) & SYN_BS_READ_BSLUT_ON_MASK) >> SYN_BS_READ_BSLUT_ON_LSB)
#define SYN_BS_READ_BSLUT_ON_SET(x)                                            (((0 | (x)) << SYN_BS_READ_BSLUT_ON_LSB) & SYN_BS_READ_BSLUT_ON_MASK)
#define SYN_BS_READ_BSLUT_ON_RESET                                             0x0
#define SYN_BS_READ_BIST_ON_LSB                                                18
#define SYN_BS_READ_BIST_ON_MSB                                                18
#define SYN_BS_READ_BIST_ON_MASK                                               0x40000
#define SYN_BS_READ_BIST_ON_GET(x)                                             (((x) & SYN_BS_READ_BIST_ON_MASK) >> SYN_BS_READ_BIST_ON_LSB)
#define SYN_BS_READ_BIST_ON_SET(x)                                             (((0 | (x)) << SYN_BS_READ_BIST_ON_LSB) & SYN_BS_READ_BIST_ON_MASK)
#define SYN_BS_READ_BIST_ON_RESET                                              0x0
#define SYN_BS_READ_RFCNT_BIST_PASS_LSB                                        17
#define SYN_BS_READ_RFCNT_BIST_PASS_MSB                                        17
#define SYN_BS_READ_RFCNT_BIST_PASS_MASK                                       0x20000
#define SYN_BS_READ_RFCNT_BIST_PASS_GET(x)                                     (((x) & SYN_BS_READ_RFCNT_BIST_PASS_MASK) >> SYN_BS_READ_RFCNT_BIST_PASS_LSB)
#define SYN_BS_READ_RFCNT_BIST_PASS_SET(x)                                     (((0 | (x)) << SYN_BS_READ_RFCNT_BIST_PASS_LSB) & SYN_BS_READ_RFCNT_BIST_PASS_MASK)
#define SYN_BS_READ_RFCNT_BIST_PASS_RESET                                      0x0
#define SYN_BS_READ_RFCNT_LATCH_TYPE_LSB                                       16
#define SYN_BS_READ_RFCNT_LATCH_TYPE_MSB                                       16
#define SYN_BS_READ_RFCNT_LATCH_TYPE_MASK                                      0x10000
#define SYN_BS_READ_RFCNT_LATCH_TYPE_GET(x)                                    (((x) & SYN_BS_READ_RFCNT_LATCH_TYPE_MASK) >> SYN_BS_READ_RFCNT_LATCH_TYPE_LSB)
#define SYN_BS_READ_RFCNT_LATCH_TYPE_SET(x)                                    (((0 | (x)) << SYN_BS_READ_RFCNT_LATCH_TYPE_LSB) & SYN_BS_READ_RFCNT_LATCH_TYPE_MASK)
#define SYN_BS_READ_RFCNT_LATCH_TYPE_RESET                                     0x0
#define SYN_BS_READ_BS_RO_LSB                                                  0
#define SYN_BS_READ_BS_RO_MSB                                                  15
#define SYN_BS_READ_BS_RO_MASK                                                 0xffff
#define SYN_BS_READ_BS_RO_GET(x)                                               (((x) & SYN_BS_READ_BS_RO_MASK) >> SYN_BS_READ_BS_RO_LSB)
#define SYN_BS_READ_BS_RO_SET(x)                                               (((0 | (x)) << SYN_BS_READ_BS_RO_LSB) & SYN_BS_READ_BS_RO_MASK)
#define SYN_BS_READ_BS_RO_RESET                                                0x0
#define SYN_BS_READ_ADDRESS                                                    (0x10 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_BS_READ_RSTMASK                                                    0x1fffffff
#define SYN_BS_READ_RESET                                                      0x0

// 0x14 (SYN_PC_0)
#define SYN_PC_0_FASTCH_VCON_LSB                                               31
#define SYN_PC_0_FASTCH_VCON_MSB                                               31
#define SYN_PC_0_FASTCH_VCON_MASK                                              0x80000000
#define SYN_PC_0_FASTCH_VCON_GET(x)                                            (((x) & SYN_PC_0_FASTCH_VCON_MASK) >> SYN_PC_0_FASTCH_VCON_LSB)
#define SYN_PC_0_FASTCH_VCON_SET(x)                                            (((0 | (x)) << SYN_PC_0_FASTCH_VCON_LSB) & SYN_PC_0_FASTCH_VCON_MASK)
#define SYN_PC_0_FASTCH_VCON_RESET                                             0x0
#define SYN_PC_0_FASTCH_TMR_LSB                                                28
#define SYN_PC_0_FASTCH_TMR_MSB                                                30
#define SYN_PC_0_FASTCH_TMR_MASK                                               0x70000000
#define SYN_PC_0_FASTCH_TMR_GET(x)                                             (((x) & SYN_PC_0_FASTCH_TMR_MASK) >> SYN_PC_0_FASTCH_TMR_LSB)
#define SYN_PC_0_FASTCH_TMR_SET(x)                                             (((0 | (x)) << SYN_PC_0_FASTCH_TMR_LSB) & SYN_PC_0_FASTCH_TMR_MASK)
#define SYN_PC_0_FASTCH_TMR_RESET                                              0x3
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_LSB                                       26
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_MSB                                       27
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_MASK                                      0xc000000
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_GET(x)                                    (((x) & SYN_PC_0_VCO_FAST_CBNK11_OVR_MASK) >> SYN_PC_0_VCO_FAST_CBNK11_OVR_LSB)
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_SET(x)                                    (((0 | (x)) << SYN_PC_0_VCO_FAST_CBNK11_OVR_LSB) & SYN_PC_0_VCO_FAST_CBNK11_OVR_MASK)
#define SYN_PC_0_VCO_FAST_CBNK11_OVR_RESET                                     0x0
#define SYN_PC_0_VCO_FAST_BIAS_OVR_LSB                                         24
#define SYN_PC_0_VCO_FAST_BIAS_OVR_MSB                                         25
#define SYN_PC_0_VCO_FAST_BIAS_OVR_MASK                                        0x3000000
#define SYN_PC_0_VCO_FAST_BIAS_OVR_GET(x)                                      (((x) & SYN_PC_0_VCO_FAST_BIAS_OVR_MASK) >> SYN_PC_0_VCO_FAST_BIAS_OVR_LSB)
#define SYN_PC_0_VCO_FAST_BIAS_OVR_SET(x)                                      (((0 | (x)) << SYN_PC_0_VCO_FAST_BIAS_OVR_LSB) & SYN_PC_0_VCO_FAST_BIAS_OVR_MASK)
#define SYN_PC_0_VCO_FAST_BIAS_OVR_RESET                                       0x0
#define SYN_PC_0_BIAS_FAST_CH_OVR_LSB                                          22
#define SYN_PC_0_BIAS_FAST_CH_OVR_MSB                                          23
#define SYN_PC_0_BIAS_FAST_CH_OVR_MASK                                         0xc00000
#define SYN_PC_0_BIAS_FAST_CH_OVR_GET(x)                                       (((x) & SYN_PC_0_BIAS_FAST_CH_OVR_MASK) >> SYN_PC_0_BIAS_FAST_CH_OVR_LSB)
#define SYN_PC_0_BIAS_FAST_CH_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_0_BIAS_FAST_CH_OVR_LSB) & SYN_PC_0_BIAS_FAST_CH_OVR_MASK)
#define SYN_PC_0_BIAS_FAST_CH_OVR_RESET                                        0x0
#define SYN_PC_0_CP_FAST_CH_OVR_LSB                                            20
#define SYN_PC_0_CP_FAST_CH_OVR_MSB                                            21
#define SYN_PC_0_CP_FAST_CH_OVR_MASK                                           0x300000
#define SYN_PC_0_CP_FAST_CH_OVR_GET(x)                                         (((x) & SYN_PC_0_CP_FAST_CH_OVR_MASK) >> SYN_PC_0_CP_FAST_CH_OVR_LSB)
#define SYN_PC_0_CP_FAST_CH_OVR_SET(x)                                         (((0 | (x)) << SYN_PC_0_CP_FAST_CH_OVR_LSB) & SYN_PC_0_CP_FAST_CH_OVR_MASK)
#define SYN_PC_0_CP_FAST_CH_OVR_RESET                                          0x0
#define SYN_PC_0_SDM_EN_LSB                                                    18
#define SYN_PC_0_SDM_EN_MSB                                                    19
#define SYN_PC_0_SDM_EN_MASK                                                   0xc0000
#define SYN_PC_0_SDM_EN_GET(x)                                                 (((x) & SYN_PC_0_SDM_EN_MASK) >> SYN_PC_0_SDM_EN_LSB)
#define SYN_PC_0_SDM_EN_SET(x)                                                 (((0 | (x)) << SYN_PC_0_SDM_EN_LSB) & SYN_PC_0_SDM_EN_MASK)
#define SYN_PC_0_SDM_EN_RESET                                                  0x0
#define SYN_PC_0_BIAS_EN_OVR_LSB                                               16
#define SYN_PC_0_BIAS_EN_OVR_MSB                                               17
#define SYN_PC_0_BIAS_EN_OVR_MASK                                              0x30000
#define SYN_PC_0_BIAS_EN_OVR_GET(x)                                            (((x) & SYN_PC_0_BIAS_EN_OVR_MASK) >> SYN_PC_0_BIAS_EN_OVR_LSB)
#define SYN_PC_0_BIAS_EN_OVR_SET(x)                                            (((0 | (x)) << SYN_PC_0_BIAS_EN_OVR_LSB) & SYN_PC_0_BIAS_EN_OVR_MASK)
#define SYN_PC_0_BIAS_EN_OVR_RESET                                             0x0
#define SYN_PC_0_SYNON_OVR_LSB                                                 14
#define SYN_PC_0_SYNON_OVR_MSB                                                 15
#define SYN_PC_0_SYNON_OVR_MASK                                                0xc000
#define SYN_PC_0_SYNON_OVR_GET(x)                                              (((x) & SYN_PC_0_SYNON_OVR_MASK) >> SYN_PC_0_SYNON_OVR_LSB)
#define SYN_PC_0_SYNON_OVR_SET(x)                                              (((0 | (x)) << SYN_PC_0_SYNON_OVR_LSB) & SYN_PC_0_SYNON_OVR_MASK)
#define SYN_PC_0_SYNON_OVR_RESET                                               0x0
#define SYN_PC_0_VCON_SW_OVR_LSB                                               12
#define SYN_PC_0_VCON_SW_OVR_MSB                                               13
#define SYN_PC_0_VCON_SW_OVR_MASK                                              0x3000
#define SYN_PC_0_VCON_SW_OVR_GET(x)                                            (((x) & SYN_PC_0_VCON_SW_OVR_MASK) >> SYN_PC_0_VCON_SW_OVR_LSB)
#define SYN_PC_0_VCON_SW_OVR_SET(x)                                            (((0 | (x)) << SYN_PC_0_VCON_SW_OVR_LSB) & SYN_PC_0_VCON_SW_OVR_MASK)
#define SYN_PC_0_VCON_SW_OVR_RESET                                             0x0
#define SYN_PC_0_LPF_VMGEN_EN_OVR_LSB                                          10
#define SYN_PC_0_LPF_VMGEN_EN_OVR_MSB                                          11
#define SYN_PC_0_LPF_VMGEN_EN_OVR_MASK                                         0xc00
#define SYN_PC_0_LPF_VMGEN_EN_OVR_GET(x)                                       (((x) & SYN_PC_0_LPF_VMGEN_EN_OVR_MASK) >> SYN_PC_0_LPF_VMGEN_EN_OVR_LSB)
#define SYN_PC_0_LPF_VMGEN_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_0_LPF_VMGEN_EN_OVR_LSB) & SYN_PC_0_LPF_VMGEN_EN_OVR_MASK)
#define SYN_PC_0_LPF_VMGEN_EN_OVR_RESET                                        0x0
#define SYN_PC_0_VCO_EN_OVR_LSB                                                8
#define SYN_PC_0_VCO_EN_OVR_MSB                                                9
#define SYN_PC_0_VCO_EN_OVR_MASK                                               0x300
#define SYN_PC_0_VCO_EN_OVR_GET(x)                                             (((x) & SYN_PC_0_VCO_EN_OVR_MASK) >> SYN_PC_0_VCO_EN_OVR_LSB)
#define SYN_PC_0_VCO_EN_OVR_SET(x)                                             (((0 | (x)) << SYN_PC_0_VCO_EN_OVR_LSB) & SYN_PC_0_VCO_EN_OVR_MASK)
#define SYN_PC_0_VCO_EN_OVR_RESET                                              0x0
#define SYN_PC_0_CNTR_RESET_OVR_LSB                                            6
#define SYN_PC_0_CNTR_RESET_OVR_MSB                                            7
#define SYN_PC_0_CNTR_RESET_OVR_MASK                                           0xc0
#define SYN_PC_0_CNTR_RESET_OVR_GET(x)                                         (((x) & SYN_PC_0_CNTR_RESET_OVR_MASK) >> SYN_PC_0_CNTR_RESET_OVR_LSB)
#define SYN_PC_0_CNTR_RESET_OVR_SET(x)                                         (((0 | (x)) << SYN_PC_0_CNTR_RESET_OVR_LSB) & SYN_PC_0_CNTR_RESET_OVR_MASK)
#define SYN_PC_0_CNTR_RESET_OVR_RESET                                          0x0
#define SYN_PC_0_CP_EN_OVR_LSB                                                 4
#define SYN_PC_0_CP_EN_OVR_MSB                                                 5
#define SYN_PC_0_CP_EN_OVR_MASK                                                0x30
#define SYN_PC_0_CP_EN_OVR_GET(x)                                              (((x) & SYN_PC_0_CP_EN_OVR_MASK) >> SYN_PC_0_CP_EN_OVR_LSB)
#define SYN_PC_0_CP_EN_OVR_SET(x)                                              (((0 | (x)) << SYN_PC_0_CP_EN_OVR_LSB) & SYN_PC_0_CP_EN_OVR_MASK)
#define SYN_PC_0_CP_EN_OVR_RESET                                               0x0
#define SYN_PC_0_PFD_RST_OVR_LSB                                               2
#define SYN_PC_0_PFD_RST_OVR_MSB                                               3
#define SYN_PC_0_PFD_RST_OVR_MASK                                              0xc
#define SYN_PC_0_PFD_RST_OVR_GET(x)                                            (((x) & SYN_PC_0_PFD_RST_OVR_MASK) >> SYN_PC_0_PFD_RST_OVR_LSB)
#define SYN_PC_0_PFD_RST_OVR_SET(x)                                            (((0 | (x)) << SYN_PC_0_PFD_RST_OVR_LSB) & SYN_PC_0_PFD_RST_OVR_MASK)
#define SYN_PC_0_PFD_RST_OVR_RESET                                             0x0
#define SYN_PC_0_LO_GM_EN_OVR_LSB                                              0
#define SYN_PC_0_LO_GM_EN_OVR_MSB                                              1
#define SYN_PC_0_LO_GM_EN_OVR_MASK                                             0x3
#define SYN_PC_0_LO_GM_EN_OVR_GET(x)                                           (((x) & SYN_PC_0_LO_GM_EN_OVR_MASK) >> SYN_PC_0_LO_GM_EN_OVR_LSB)
#define SYN_PC_0_LO_GM_EN_OVR_SET(x)                                           (((0 | (x)) << SYN_PC_0_LO_GM_EN_OVR_LSB) & SYN_PC_0_LO_GM_EN_OVR_MASK)
#define SYN_PC_0_LO_GM_EN_OVR_RESET                                            0x0
#define SYN_PC_0_ADDRESS                                                       (0x14 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_PC_0_RSTMASK                                                       0xffffffff
#define SYN_PC_0_RESET                                                         0x30000000

// 0x18 (SYN_PC_1)
#define SYN_PC_1_CP_REG25_EN_OVR_LSB                                           30
#define SYN_PC_1_CP_REG25_EN_OVR_MSB                                           31
#define SYN_PC_1_CP_REG25_EN_OVR_MASK                                          0xc0000000
#define SYN_PC_1_CP_REG25_EN_OVR_GET(x)                                        (((x) & SYN_PC_1_CP_REG25_EN_OVR_MASK) >> SYN_PC_1_CP_REG25_EN_OVR_LSB)
#define SYN_PC_1_CP_REG25_EN_OVR_SET(x)                                        (((0 | (x)) << SYN_PC_1_CP_REG25_EN_OVR_LSB) & SYN_PC_1_CP_REG25_EN_OVR_MASK)
#define SYN_PC_1_CP_REG25_EN_OVR_RESET                                         0x0
#define SYN_PC_1_CP_REG11_EN_OVR_LSB                                           28
#define SYN_PC_1_CP_REG11_EN_OVR_MSB                                           29
#define SYN_PC_1_CP_REG11_EN_OVR_MASK                                          0x30000000
#define SYN_PC_1_CP_REG11_EN_OVR_GET(x)                                        (((x) & SYN_PC_1_CP_REG11_EN_OVR_MASK) >> SYN_PC_1_CP_REG11_EN_OVR_LSB)
#define SYN_PC_1_CP_REG11_EN_OVR_SET(x)                                        (((0 | (x)) << SYN_PC_1_CP_REG11_EN_OVR_LSB) & SYN_PC_1_CP_REG11_EN_OVR_MASK)
#define SYN_PC_1_CP_REG11_EN_OVR_RESET                                         0x0
#define SYN_PC_1_VCO_REG25_EN_OVR_LSB                                          26
#define SYN_PC_1_VCO_REG25_EN_OVR_MSB                                          27
#define SYN_PC_1_VCO_REG25_EN_OVR_MASK                                         0xc000000
#define SYN_PC_1_VCO_REG25_EN_OVR_GET(x)                                       (((x) & SYN_PC_1_VCO_REG25_EN_OVR_MASK) >> SYN_PC_1_VCO_REG25_EN_OVR_LSB)
#define SYN_PC_1_VCO_REG25_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_1_VCO_REG25_EN_OVR_LSB) & SYN_PC_1_VCO_REG25_EN_OVR_MASK)
#define SYN_PC_1_VCO_REG25_EN_OVR_RESET                                        0x0
#define SYN_PC_1_VCO_REG11_EN_OVR_LSB                                          24
#define SYN_PC_1_VCO_REG11_EN_OVR_MSB                                          25
#define SYN_PC_1_VCO_REG11_EN_OVR_MASK                                         0x3000000
#define SYN_PC_1_VCO_REG11_EN_OVR_GET(x)                                       (((x) & SYN_PC_1_VCO_REG11_EN_OVR_MASK) >> SYN_PC_1_VCO_REG11_EN_OVR_LSB)
#define SYN_PC_1_VCO_REG11_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_1_VCO_REG11_EN_OVR_LSB) & SYN_PC_1_VCO_REG11_EN_OVR_MASK)
#define SYN_PC_1_VCO_REG11_EN_OVR_RESET                                        0x0
#define SYN_PC_1_CNTR_REG11_EN_OVR_LSB                                         22
#define SYN_PC_1_CNTR_REG11_EN_OVR_MSB                                         23
#define SYN_PC_1_CNTR_REG11_EN_OVR_MASK                                        0xc00000
#define SYN_PC_1_CNTR_REG11_EN_OVR_GET(x)                                      (((x) & SYN_PC_1_CNTR_REG11_EN_OVR_MASK) >> SYN_PC_1_CNTR_REG11_EN_OVR_LSB)
#define SYN_PC_1_CNTR_REG11_EN_OVR_SET(x)                                      (((0 | (x)) << SYN_PC_1_CNTR_REG11_EN_OVR_LSB) & SYN_PC_1_CNTR_REG11_EN_OVR_MASK)
#define SYN_PC_1_CNTR_REG11_EN_OVR_RESET                                       0x0
#define SYN_PC_1_LPF_PRECH_EN_OVR_LSB                                          20
#define SYN_PC_1_LPF_PRECH_EN_OVR_MSB                                          21
#define SYN_PC_1_LPF_PRECH_EN_OVR_MASK                                         0x300000
#define SYN_PC_1_LPF_PRECH_EN_OVR_GET(x)                                       (((x) & SYN_PC_1_LPF_PRECH_EN_OVR_MASK) >> SYN_PC_1_LPF_PRECH_EN_OVR_LSB)
#define SYN_PC_1_LPF_PRECH_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_1_LPF_PRECH_EN_OVR_LSB) & SYN_PC_1_LPF_PRECH_EN_OVR_MASK)
#define SYN_PC_1_LPF_PRECH_EN_OVR_RESET                                        0x0
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_LSB                                         18
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_MSB                                         19
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_MASK                                        0xc0000
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_GET(x)                                      (((x) & SYN_PC_1_LPF_VHLGEN_EN_OVR_MASK) >> SYN_PC_1_LPF_VHLGEN_EN_OVR_LSB)
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_SET(x)                                      (((0 | (x)) << SYN_PC_1_LPF_VHLGEN_EN_OVR_LSB) & SYN_PC_1_LPF_VHLGEN_EN_OVR_MASK)
#define SYN_PC_1_LPF_VHLGEN_EN_OVR_RESET                                       0x0
#define SYN_PC_1_LPF_COMPH_EN_OVR_LSB                                          16
#define SYN_PC_1_LPF_COMPH_EN_OVR_MSB                                          17
#define SYN_PC_1_LPF_COMPH_EN_OVR_MASK                                         0x30000
#define SYN_PC_1_LPF_COMPH_EN_OVR_GET(x)                                       (((x) & SYN_PC_1_LPF_COMPH_EN_OVR_MASK) >> SYN_PC_1_LPF_COMPH_EN_OVR_LSB)
#define SYN_PC_1_LPF_COMPH_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_1_LPF_COMPH_EN_OVR_LSB) & SYN_PC_1_LPF_COMPH_EN_OVR_MASK)
#define SYN_PC_1_LPF_COMPH_EN_OVR_RESET                                        0x0
#define SYN_PC_1_LPF_COMPL_EN_OVR_LSB                                          14
#define SYN_PC_1_LPF_COMPL_EN_OVR_MSB                                          15
#define SYN_PC_1_LPF_COMPL_EN_OVR_MASK                                         0xc000
#define SYN_PC_1_LPF_COMPL_EN_OVR_GET(x)                                       (((x) & SYN_PC_1_LPF_COMPL_EN_OVR_MASK) >> SYN_PC_1_LPF_COMPL_EN_OVR_LSB)
#define SYN_PC_1_LPF_COMPL_EN_OVR_SET(x)                                       (((0 | (x)) << SYN_PC_1_LPF_COMPL_EN_OVR_LSB) & SYN_PC_1_LPF_COMPL_EN_OVR_MASK)
#define SYN_PC_1_LPF_COMPL_EN_OVR_RESET                                        0x0
#define SYN_PC_1_MULT_EN_OVR_LSB                                               12
#define SYN_PC_1_MULT_EN_OVR_MSB                                               13
#define SYN_PC_1_MULT_EN_OVR_MASK                                              0x3000
#define SYN_PC_1_MULT_EN_OVR_GET(x)                                            (((x) & SYN_PC_1_MULT_EN_OVR_MASK) >> SYN_PC_1_MULT_EN_OVR_LSB)
#define SYN_PC_1_MULT_EN_OVR_SET(x)                                            (((0 | (x)) << SYN_PC_1_MULT_EN_OVR_LSB) & SYN_PC_1_MULT_EN_OVR_MASK)
#define SYN_PC_1_MULT_EN_OVR_RESET                                             0x0
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_LSB                                        10
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_MSB                                        11
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_MASK                                       0xc00
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_GET(x)                                     (((x) & SYN_PC_1_RFCNT_BSCLK_EN_OVR_MASK) >> SYN_PC_1_RFCNT_BSCLK_EN_OVR_LSB)
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_SET(x)                                     (((0 | (x)) << SYN_PC_1_RFCNT_BSCLK_EN_OVR_LSB) & SYN_PC_1_RFCNT_BSCLK_EN_OVR_MASK)
#define SYN_PC_1_RFCNT_BSCLK_EN_OVR_RESET                                      0x0
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_LSB                                        8
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_MSB                                        9
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_MASK                                       0x300
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_GET(x)                                     (((x) & SYN_PC_1_VCO_EN_PEAKDET_OVR_MASK) >> SYN_PC_1_VCO_EN_PEAKDET_OVR_LSB)
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_SET(x)                                     (((0 | (x)) << SYN_PC_1_VCO_EN_PEAKDET_OVR_LSB) & SYN_PC_1_VCO_EN_PEAKDET_OVR_MASK)
#define SYN_PC_1_VCO_EN_PEAKDET_OVR_RESET                                      0x0
#define SYN_PC_1_EN_DCLK_PLL_LSB                                               6
#define SYN_PC_1_EN_DCLK_PLL_MSB                                               7
#define SYN_PC_1_EN_DCLK_PLL_MASK                                              0xc0
#define SYN_PC_1_EN_DCLK_PLL_GET(x)                                            (((x) & SYN_PC_1_EN_DCLK_PLL_MASK) >> SYN_PC_1_EN_DCLK_PLL_LSB)
#define SYN_PC_1_EN_DCLK_PLL_SET(x)                                            (((0 | (x)) << SYN_PC_1_EN_DCLK_PLL_LSB) & SYN_PC_1_EN_DCLK_PLL_MASK)
#define SYN_PC_1_EN_DCLK_PLL_RESET                                             0x0
#define SYN_PC_1_ISO_DIS_OVR_LSB                                               4
#define SYN_PC_1_ISO_DIS_OVR_MSB                                               5
#define SYN_PC_1_ISO_DIS_OVR_MASK                                              0x30
#define SYN_PC_1_ISO_DIS_OVR_GET(x)                                            (((x) & SYN_PC_1_ISO_DIS_OVR_MASK) >> SYN_PC_1_ISO_DIS_OVR_LSB)
#define SYN_PC_1_ISO_DIS_OVR_SET(x)                                            (((0 | (x)) << SYN_PC_1_ISO_DIS_OVR_LSB) & SYN_PC_1_ISO_DIS_OVR_MASK)
#define SYN_PC_1_ISO_DIS_OVR_RESET                                             0x0
#define SYN_PC_1_SD_ISO_DIS_OVR_LSB                                            2
#define SYN_PC_1_SD_ISO_DIS_OVR_MSB                                            3
#define SYN_PC_1_SD_ISO_DIS_OVR_MASK                                           0xc
#define SYN_PC_1_SD_ISO_DIS_OVR_GET(x)                                         (((x) & SYN_PC_1_SD_ISO_DIS_OVR_MASK) >> SYN_PC_1_SD_ISO_DIS_OVR_LSB)
#define SYN_PC_1_SD_ISO_DIS_OVR_SET(x)                                         (((0 | (x)) << SYN_PC_1_SD_ISO_DIS_OVR_LSB) & SYN_PC_1_SD_ISO_DIS_OVR_MASK)
#define SYN_PC_1_SD_ISO_DIS_OVR_RESET                                          0x0
#define SYN_PC_1_LO_CHAIN_EN_OVR_LSB                                           0
#define SYN_PC_1_LO_CHAIN_EN_OVR_MSB                                           1
#define SYN_PC_1_LO_CHAIN_EN_OVR_MASK                                          0x3
#define SYN_PC_1_LO_CHAIN_EN_OVR_GET(x)                                        (((x) & SYN_PC_1_LO_CHAIN_EN_OVR_MASK) >> SYN_PC_1_LO_CHAIN_EN_OVR_LSB)
#define SYN_PC_1_LO_CHAIN_EN_OVR_SET(x)                                        (((0 | (x)) << SYN_PC_1_LO_CHAIN_EN_OVR_LSB) & SYN_PC_1_LO_CHAIN_EN_OVR_MASK)
#define SYN_PC_1_LO_CHAIN_EN_OVR_RESET                                         0x0
#define SYN_PC_1_ADDRESS                                                       (0x18 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_PC_1_RSTMASK                                                       0xffffffff
#define SYN_PC_1_RESET                                                         0x0

// 0x1c (SYN_DLL_0)
#define SYN_DLL_0_MULT_VCOCUR_INIT_LSB                                         28
#define SYN_DLL_0_MULT_VCOCUR_INIT_MSB                                         31
#define SYN_DLL_0_MULT_VCOCUR_INIT_MASK                                        0xf0000000
#define SYN_DLL_0_MULT_VCOCUR_INIT_GET(x)                                      (((x) & SYN_DLL_0_MULT_VCOCUR_INIT_MASK) >> SYN_DLL_0_MULT_VCOCUR_INIT_LSB)
#define SYN_DLL_0_MULT_VCOCUR_INIT_SET(x)                                      (((0 | (x)) << SYN_DLL_0_MULT_VCOCUR_INIT_LSB) & SYN_DLL_0_MULT_VCOCUR_INIT_MASK)
#define SYN_DLL_0_MULT_VCOCUR_INIT_RESET                                       0x5
#define SYN_DLL_0_MULT_VCOCUR_MIN_LSB                                          24
#define SYN_DLL_0_MULT_VCOCUR_MIN_MSB                                          27
#define SYN_DLL_0_MULT_VCOCUR_MIN_MASK                                         0xf000000
#define SYN_DLL_0_MULT_VCOCUR_MIN_GET(x)                                       (((x) & SYN_DLL_0_MULT_VCOCUR_MIN_MASK) >> SYN_DLL_0_MULT_VCOCUR_MIN_LSB)
#define SYN_DLL_0_MULT_VCOCUR_MIN_SET(x)                                       (((0 | (x)) << SYN_DLL_0_MULT_VCOCUR_MIN_LSB) & SYN_DLL_0_MULT_VCOCUR_MIN_MASK)
#define SYN_DLL_0_MULT_VCOCUR_MIN_RESET                                        0x0
#define SYN_DLL_0_MULT_VCOCUR_MAX_LSB                                          20
#define SYN_DLL_0_MULT_VCOCUR_MAX_MSB                                          23
#define SYN_DLL_0_MULT_VCOCUR_MAX_MASK                                         0xf00000
#define SYN_DLL_0_MULT_VCOCUR_MAX_GET(x)                                       (((x) & SYN_DLL_0_MULT_VCOCUR_MAX_MASK) >> SYN_DLL_0_MULT_VCOCUR_MAX_LSB)
#define SYN_DLL_0_MULT_VCOCUR_MAX_SET(x)                                       (((0 | (x)) << SYN_DLL_0_MULT_VCOCUR_MAX_LSB) & SYN_DLL_0_MULT_VCOCUR_MAX_MASK)
#define SYN_DLL_0_MULT_VCOCUR_MAX_RESET                                        0xf
#define SYN_DLL_0_MULT_VCOCAP_INIT_LSB                                         16
#define SYN_DLL_0_MULT_VCOCAP_INIT_MSB                                         19
#define SYN_DLL_0_MULT_VCOCAP_INIT_MASK                                        0xf0000
#define SYN_DLL_0_MULT_VCOCAP_INIT_GET(x)                                      (((x) & SYN_DLL_0_MULT_VCOCAP_INIT_MASK) >> SYN_DLL_0_MULT_VCOCAP_INIT_LSB)
#define SYN_DLL_0_MULT_VCOCAP_INIT_SET(x)                                      (((0 | (x)) << SYN_DLL_0_MULT_VCOCAP_INIT_LSB) & SYN_DLL_0_MULT_VCOCAP_INIT_MASK)
#define SYN_DLL_0_MULT_VCOCAP_INIT_RESET                                       0x0
#define SYN_DLL_0_MULT_VCOCAP_MIN_LSB                                          12
#define SYN_DLL_0_MULT_VCOCAP_MIN_MSB                                          15
#define SYN_DLL_0_MULT_VCOCAP_MIN_MASK                                         0xf000
#define SYN_DLL_0_MULT_VCOCAP_MIN_GET(x)                                       (((x) & SYN_DLL_0_MULT_VCOCAP_MIN_MASK) >> SYN_DLL_0_MULT_VCOCAP_MIN_LSB)
#define SYN_DLL_0_MULT_VCOCAP_MIN_SET(x)                                       (((0 | (x)) << SYN_DLL_0_MULT_VCOCAP_MIN_LSB) & SYN_DLL_0_MULT_VCOCAP_MIN_MASK)
#define SYN_DLL_0_MULT_VCOCAP_MIN_RESET                                        0x0
#define SYN_DLL_0_MULT_VCOCAP_MAX_LSB                                          8
#define SYN_DLL_0_MULT_VCOCAP_MAX_MSB                                          11
#define SYN_DLL_0_MULT_VCOCAP_MAX_MASK                                         0xf00
#define SYN_DLL_0_MULT_VCOCAP_MAX_GET(x)                                       (((x) & SYN_DLL_0_MULT_VCOCAP_MAX_MASK) >> SYN_DLL_0_MULT_VCOCAP_MAX_LSB)
#define SYN_DLL_0_MULT_VCOCAP_MAX_SET(x)                                       (((0 | (x)) << SYN_DLL_0_MULT_VCOCAP_MAX_LSB) & SYN_DLL_0_MULT_VCOCAP_MAX_MASK)
#define SYN_DLL_0_MULT_VCOCAP_MAX_RESET                                        0xf
#define SYN_DLL_0_MULT_VCOCAP_LIN_LSB                                          7
#define SYN_DLL_0_MULT_VCOCAP_LIN_MSB                                          7
#define SYN_DLL_0_MULT_VCOCAP_LIN_MASK                                         0x80
#define SYN_DLL_0_MULT_VCOCAP_LIN_GET(x)                                       (((x) & SYN_DLL_0_MULT_VCOCAP_LIN_MASK) >> SYN_DLL_0_MULT_VCOCAP_LIN_LSB)
#define SYN_DLL_0_MULT_VCOCAP_LIN_SET(x)                                       (((0 | (x)) << SYN_DLL_0_MULT_VCOCAP_LIN_LSB) & SYN_DLL_0_MULT_VCOCAP_LIN_MASK)
#define SYN_DLL_0_MULT_VCOCAP_LIN_RESET                                        0x0
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_LSB                                     6
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_MSB                                     6
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_MASK                                    0x40
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_GET(x)                                  (((x) & SYN_DLL_0_DLL_CHANGE_CAP_FIRST_MASK) >> SYN_DLL_0_DLL_CHANGE_CAP_FIRST_LSB)
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_SET(x)                                  (((0 | (x)) << SYN_DLL_0_DLL_CHANGE_CAP_FIRST_LSB) & SYN_DLL_0_DLL_CHANGE_CAP_FIRST_MASK)
#define SYN_DLL_0_DLL_CHANGE_CAP_FIRST_RESET                                   0x0
#define SYN_DLL_0_MULT_FORCE_CAPCUR_LSB                                        5
#define SYN_DLL_0_MULT_FORCE_CAPCUR_MSB                                        5
#define SYN_DLL_0_MULT_FORCE_CAPCUR_MASK                                       0x20
#define SYN_DLL_0_MULT_FORCE_CAPCUR_GET(x)                                     (((x) & SYN_DLL_0_MULT_FORCE_CAPCUR_MASK) >> SYN_DLL_0_MULT_FORCE_CAPCUR_LSB)
#define SYN_DLL_0_MULT_FORCE_CAPCUR_SET(x)                                     (((0 | (x)) << SYN_DLL_0_MULT_FORCE_CAPCUR_LSB) & SYN_DLL_0_MULT_FORCE_CAPCUR_MASK)
#define SYN_DLL_0_MULT_FORCE_CAPCUR_RESET                                      0x0
#define SYN_DLL_0_WAIT_DLLSM_LSB                                               0
#define SYN_DLL_0_WAIT_DLLSM_MSB                                               4
#define SYN_DLL_0_WAIT_DLLSM_MASK                                              0x1f
#define SYN_DLL_0_WAIT_DLLSM_GET(x)                                            (((x) & SYN_DLL_0_WAIT_DLLSM_MASK) >> SYN_DLL_0_WAIT_DLLSM_LSB)
#define SYN_DLL_0_WAIT_DLLSM_SET(x)                                            (((0 | (x)) << SYN_DLL_0_WAIT_DLLSM_LSB) & SYN_DLL_0_WAIT_DLLSM_MASK)
#define SYN_DLL_0_WAIT_DLLSM_RESET                                             0x3
#define SYN_DLL_0_ADDRESS                                                      (0x1c + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_DLL_0_RSTMASK                                                      0xffffffff
#define SYN_DLL_0_RESET                                                        0x50f00f03

// 0x20 (SYN_DLL_1)
#define SYN_DLL_1_DLL_VC_CHK_CNT_LSB                                           28
#define SYN_DLL_1_DLL_VC_CHK_CNT_MSB                                           31
#define SYN_DLL_1_DLL_VC_CHK_CNT_MASK                                          0xf0000000
#define SYN_DLL_1_DLL_VC_CHK_CNT_GET(x)                                        (((x) & SYN_DLL_1_DLL_VC_CHK_CNT_MASK) >> SYN_DLL_1_DLL_VC_CHK_CNT_LSB)
#define SYN_DLL_1_DLL_VC_CHK_CNT_SET(x)                                        (((0 | (x)) << SYN_DLL_1_DLL_VC_CHK_CNT_LSB) & SYN_DLL_1_DLL_VC_CHK_CNT_MASK)
#define SYN_DLL_1_DLL_VC_CHK_CNT_RESET                                         0x4
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_LSB                                      27
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_MSB                                      27
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_MASK                                     0x8000000
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_GET(x)                                   (((x) & SYN_DLL_1_FORCE_DLL_IS_LOCKED_MASK) >> SYN_DLL_1_FORCE_DLL_IS_LOCKED_LSB)
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_SET(x)                                   (((0 | (x)) << SYN_DLL_1_FORCE_DLL_IS_LOCKED_LSB) & SYN_DLL_1_FORCE_DLL_IS_LOCKED_MASK)
#define SYN_DLL_1_FORCE_DLL_IS_LOCKED_RESET                                    0x0
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_LSB                                        26
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_MSB                                        26
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_MASK                                       0x4000000
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_GET(x)                                     (((x) & SYN_DLL_1_DLL_IS_LOCKED_OVR_MASK) >> SYN_DLL_1_DLL_IS_LOCKED_OVR_LSB)
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_SET(x)                                     (((0 | (x)) << SYN_DLL_1_DLL_IS_LOCKED_OVR_LSB) & SYN_DLL_1_DLL_IS_LOCKED_OVR_MASK)
#define SYN_DLL_1_DLL_IS_LOCKED_OVR_RESET                                      0x0
#define SYN_DLL_1_MULT_BUSY_SEL_LSB                                            25
#define SYN_DLL_1_MULT_BUSY_SEL_MSB                                            25
#define SYN_DLL_1_MULT_BUSY_SEL_MASK                                           0x2000000
#define SYN_DLL_1_MULT_BUSY_SEL_GET(x)                                         (((x) & SYN_DLL_1_MULT_BUSY_SEL_MASK) >> SYN_DLL_1_MULT_BUSY_SEL_LSB)
#define SYN_DLL_1_MULT_BUSY_SEL_SET(x)                                         (((0 | (x)) << SYN_DLL_1_MULT_BUSY_SEL_LSB) & SYN_DLL_1_MULT_BUSY_SEL_MASK)
#define SYN_DLL_1_MULT_BUSY_SEL_RESET                                          0x0
#define SYN_DLL_1_MULT_SM_RESET_LSB                                            24
#define SYN_DLL_1_MULT_SM_RESET_MSB                                            24
#define SYN_DLL_1_MULT_SM_RESET_MASK                                           0x1000000
#define SYN_DLL_1_MULT_SM_RESET_GET(x)                                         (((x) & SYN_DLL_1_MULT_SM_RESET_MASK) >> SYN_DLL_1_MULT_SM_RESET_LSB)
#define SYN_DLL_1_MULT_SM_RESET_SET(x)                                         (((0 | (x)) << SYN_DLL_1_MULT_SM_RESET_LSB) & SYN_DLL_1_MULT_SM_RESET_MASK)
#define SYN_DLL_1_MULT_SM_RESET_RESET                                          0x0
#define SYN_DLL_1_MULT_START_SEL_LSB                                           22
#define SYN_DLL_1_MULT_START_SEL_MSB                                           23
#define SYN_DLL_1_MULT_START_SEL_MASK                                          0xc00000
#define SYN_DLL_1_MULT_START_SEL_GET(x)                                        (((x) & SYN_DLL_1_MULT_START_SEL_MASK) >> SYN_DLL_1_MULT_START_SEL_LSB)
#define SYN_DLL_1_MULT_START_SEL_SET(x)                                        (((0 | (x)) << SYN_DLL_1_MULT_START_SEL_LSB) & SYN_DLL_1_MULT_START_SEL_MASK)
#define SYN_DLL_1_MULT_START_SEL_RESET                                         0x0
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_LSB                                    21
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_MSB                                    21
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_MASK                                   0x200000
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_GET(x)                                 (((x) & SYN_DLL_1_BS_IGNORE_MULT_LOCKED_MASK) >> SYN_DLL_1_BS_IGNORE_MULT_LOCKED_LSB)
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_SET(x)                                 (((0 | (x)) << SYN_DLL_1_BS_IGNORE_MULT_LOCKED_LSB) & SYN_DLL_1_BS_IGNORE_MULT_LOCKED_MASK)
#define SYN_DLL_1_BS_IGNORE_MULT_LOCKED_RESET                                  0x0
#define SYN_DLL_1_RESERVED_0_LSB                                               0
#define SYN_DLL_1_RESERVED_0_MSB                                               20
#define SYN_DLL_1_RESERVED_0_MASK                                              0x1fffff
#define SYN_DLL_1_RESERVED_0_GET(x)                                            (((x) & SYN_DLL_1_RESERVED_0_MASK) >> SYN_DLL_1_RESERVED_0_LSB)
#define SYN_DLL_1_RESERVED_0_SET(x)                                            (((0 | (x)) << SYN_DLL_1_RESERVED_0_LSB) & SYN_DLL_1_RESERVED_0_MASK)
#define SYN_DLL_1_RESERVED_0_RESET                                             0x0
#define SYN_DLL_1_ADDRESS                                                      (0x20 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_DLL_1_RSTMASK                                                      0xffffffff
#define SYN_DLL_1_RESET                                                        0x40000000

// 0x24 (SYN_BIST)
#define SYN_BIST_BIST_START_LSB                                                31
#define SYN_BIST_BIST_START_MSB                                                31
#define SYN_BIST_BIST_START_MASK                                               0x80000000
#define SYN_BIST_BIST_START_GET(x)                                             (((x) & SYN_BIST_BIST_START_MASK) >> SYN_BIST_BIST_START_LSB)
#define SYN_BIST_BIST_START_SET(x)                                             (((0 | (x)) << SYN_BIST_BIST_START_LSB) & SYN_BIST_BIST_START_MASK)
#define SYN_BIST_BIST_START_RESET                                              0x0
#define SYN_BIST_BIST_MODE_LSB                                                 28
#define SYN_BIST_BIST_MODE_MSB                                                 30
#define SYN_BIST_BIST_MODE_MASK                                                0x70000000
#define SYN_BIST_BIST_MODE_GET(x)                                              (((x) & SYN_BIST_BIST_MODE_MASK) >> SYN_BIST_BIST_MODE_LSB)
#define SYN_BIST_BIST_MODE_SET(x)                                              (((0 | (x)) << SYN_BIST_BIST_MODE_LSB) & SYN_BIST_BIST_MODE_MASK)
#define SYN_BIST_BIST_MODE_RESET                                               0x6
#define SYN_BIST_BIST_TIME_LSB                                                 26
#define SYN_BIST_BIST_TIME_MSB                                                 27
#define SYN_BIST_BIST_TIME_MASK                                                0xc000000
#define SYN_BIST_BIST_TIME_GET(x)                                              (((x) & SYN_BIST_BIST_TIME_MASK) >> SYN_BIST_BIST_TIME_LSB)
#define SYN_BIST_BIST_TIME_SET(x)                                              (((0 | (x)) << SYN_BIST_BIST_TIME_LSB) & SYN_BIST_BIST_TIME_MASK)
#define SYN_BIST_BIST_TIME_RESET                                               0x2
#define SYN_BIST_BIST_WAIT_LSB                                                 24
#define SYN_BIST_BIST_WAIT_MSB                                                 25
#define SYN_BIST_BIST_WAIT_MASK                                                0x3000000
#define SYN_BIST_BIST_WAIT_GET(x)                                              (((x) & SYN_BIST_BIST_WAIT_MASK) >> SYN_BIST_BIST_WAIT_LSB)
#define SYN_BIST_BIST_WAIT_SET(x)                                              (((0 | (x)) << SYN_BIST_BIST_WAIT_LSB) & SYN_BIST_BIST_WAIT_MASK)
#define SYN_BIST_BIST_WAIT_RESET                                               0x1
#define SYN_BIST_NDIV_BIST_TIME_LSB                                            22
#define SYN_BIST_NDIV_BIST_TIME_MSB                                            23
#define SYN_BIST_NDIV_BIST_TIME_MASK                                           0xc00000
#define SYN_BIST_NDIV_BIST_TIME_GET(x)                                         (((x) & SYN_BIST_NDIV_BIST_TIME_MASK) >> SYN_BIST_NDIV_BIST_TIME_LSB)
#define SYN_BIST_NDIV_BIST_TIME_SET(x)                                         (((0 | (x)) << SYN_BIST_NDIV_BIST_TIME_LSB) & SYN_BIST_NDIV_BIST_TIME_MASK)
#define SYN_BIST_NDIV_BIST_TIME_RESET                                          0x0
#define SYN_BIST_EN_NDIV_BIST_LSB                                              21
#define SYN_BIST_EN_NDIV_BIST_MSB                                              21
#define SYN_BIST_EN_NDIV_BIST_MASK                                             0x200000
#define SYN_BIST_EN_NDIV_BIST_GET(x)                                           (((x) & SYN_BIST_EN_NDIV_BIST_MASK) >> SYN_BIST_EN_NDIV_BIST_LSB)
#define SYN_BIST_EN_NDIV_BIST_SET(x)                                           (((0 | (x)) << SYN_BIST_EN_NDIV_BIST_LSB) & SYN_BIST_EN_NDIV_BIST_MASK)
#define SYN_BIST_EN_NDIV_BIST_RESET                                            0x0
#define SYN_BIST_EN_RFCNT_BIST_LSB                                             20
#define SYN_BIST_EN_RFCNT_BIST_MSB                                             20
#define SYN_BIST_EN_RFCNT_BIST_MASK                                            0x100000
#define SYN_BIST_EN_RFCNT_BIST_GET(x)                                          (((x) & SYN_BIST_EN_RFCNT_BIST_MASK) >> SYN_BIST_EN_RFCNT_BIST_LSB)
#define SYN_BIST_EN_RFCNT_BIST_SET(x)                                          (((0 | (x)) << SYN_BIST_EN_RFCNT_BIST_LSB) & SYN_BIST_EN_RFCNT_BIST_MASK)
#define SYN_BIST_EN_RFCNT_BIST_RESET                                           0x0
#define SYN_BIST_RESERVED_0_LSB                                                19
#define SYN_BIST_RESERVED_0_MSB                                                19
#define SYN_BIST_RESERVED_0_MASK                                               0x80000
#define SYN_BIST_RESERVED_0_GET(x)                                             (((x) & SYN_BIST_RESERVED_0_MASK) >> SYN_BIST_RESERVED_0_LSB)
#define SYN_BIST_RESERVED_0_SET(x)                                             (((0 | (x)) << SYN_BIST_RESERVED_0_LSB) & SYN_BIST_RESERVED_0_MASK)
#define SYN_BIST_RESERVED_0_RESET                                              0x0
#define SYN_BIST_BIST_VMID_LSB                                                 16
#define SYN_BIST_BIST_VMID_MSB                                                 18
#define SYN_BIST_BIST_VMID_MASK                                                0x70000
#define SYN_BIST_BIST_VMID_GET(x)                                              (((x) & SYN_BIST_BIST_VMID_MASK) >> SYN_BIST_BIST_VMID_LSB)
#define SYN_BIST_BIST_VMID_SET(x)                                              (((0 | (x)) << SYN_BIST_BIST_VMID_LSB) & SYN_BIST_BIST_VMID_MASK)
#define SYN_BIST_BIST_VMID_RESET                                               0x4
#define SYN_BIST_RESERVED_1_LSB                                                15
#define SYN_BIST_RESERVED_1_MSB                                                15
#define SYN_BIST_RESERVED_1_MASK                                               0x8000
#define SYN_BIST_RESERVED_1_GET(x)                                             (((x) & SYN_BIST_RESERVED_1_MASK) >> SYN_BIST_RESERVED_1_LSB)
#define SYN_BIST_RESERVED_1_SET(x)                                             (((0 | (x)) << SYN_BIST_RESERVED_1_LSB) & SYN_BIST_RESERVED_1_MASK)
#define SYN_BIST_RESERVED_1_RESET                                              0x0
#define SYN_BIST_BIST_VMID_KVCOH_LSB                                           12
#define SYN_BIST_BIST_VMID_KVCOH_MSB                                           14
#define SYN_BIST_BIST_VMID_KVCOH_MASK                                          0x7000
#define SYN_BIST_BIST_VMID_KVCOH_GET(x)                                        (((x) & SYN_BIST_BIST_VMID_KVCOH_MASK) >> SYN_BIST_BIST_VMID_KVCOH_LSB)
#define SYN_BIST_BIST_VMID_KVCOH_SET(x)                                        (((0 | (x)) << SYN_BIST_BIST_VMID_KVCOH_LSB) & SYN_BIST_BIST_VMID_KVCOH_MASK)
#define SYN_BIST_BIST_VMID_KVCOH_RESET                                         0x6
#define SYN_BIST_RESERVED_2_LSB                                                11
#define SYN_BIST_RESERVED_2_MSB                                                11
#define SYN_BIST_RESERVED_2_MASK                                               0x800
#define SYN_BIST_RESERVED_2_GET(x)                                             (((x) & SYN_BIST_RESERVED_2_MASK) >> SYN_BIST_RESERVED_2_LSB)
#define SYN_BIST_RESERVED_2_SET(x)                                             (((0 | (x)) << SYN_BIST_RESERVED_2_LSB) & SYN_BIST_RESERVED_2_MASK)
#define SYN_BIST_RESERVED_2_RESET                                              0x0
#define SYN_BIST_BIST_VMID_KVCOL_LSB                                           8
#define SYN_BIST_BIST_VMID_KVCOL_MSB                                           10
#define SYN_BIST_BIST_VMID_KVCOL_MASK                                          0x700
#define SYN_BIST_BIST_VMID_KVCOL_GET(x)                                        (((x) & SYN_BIST_BIST_VMID_KVCOL_MASK) >> SYN_BIST_BIST_VMID_KVCOL_LSB)
#define SYN_BIST_BIST_VMID_KVCOL_SET(x)                                        (((0 | (x)) << SYN_BIST_BIST_VMID_KVCOL_LSB) & SYN_BIST_BIST_VMID_KVCOL_MASK)
#define SYN_BIST_BIST_VMID_KVCOL_RESET                                         0x2
#define SYN_BIST_RESERVED_3_LSB                                                0
#define SYN_BIST_RESERVED_3_MSB                                                7
#define SYN_BIST_RESERVED_3_MASK                                               0xff
#define SYN_BIST_RESERVED_3_GET(x)                                             (((x) & SYN_BIST_RESERVED_3_MASK) >> SYN_BIST_RESERVED_3_LSB)
#define SYN_BIST_RESERVED_3_SET(x)                                             (((0 | (x)) << SYN_BIST_RESERVED_3_LSB) & SYN_BIST_RESERVED_3_MASK)
#define SYN_BIST_RESERVED_3_RESET                                              0x0
#define SYN_BIST_ADDRESS                                                       (0x24 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_BIST_RSTMASK                                                       0xffffffff
#define SYN_BIST_RESET                                                         0x69046200

// 0x28 (SYN_AC_0)
#define SYN_AC_0_MULT_CP_LSB                                                   28
#define SYN_AC_0_MULT_CP_MSB                                                   31
#define SYN_AC_0_MULT_CP_MASK                                                  0xf0000000
#define SYN_AC_0_MULT_CP_GET(x)                                                (((x) & SYN_AC_0_MULT_CP_MASK) >> SYN_AC_0_MULT_CP_LSB)
#define SYN_AC_0_MULT_CP_SET(x)                                                (((0 | (x)) << SYN_AC_0_MULT_CP_LSB) & SYN_AC_0_MULT_CP_MASK)
#define SYN_AC_0_MULT_CP_RESET                                                 0xf
#define SYN_AC_0_MULT_VCL_LSB                                                  26
#define SYN_AC_0_MULT_VCL_MSB                                                  27
#define SYN_AC_0_MULT_VCL_MASK                                                 0xc000000
#define SYN_AC_0_MULT_VCL_GET(x)                                               (((x) & SYN_AC_0_MULT_VCL_MASK) >> SYN_AC_0_MULT_VCL_LSB)
#define SYN_AC_0_MULT_VCL_SET(x)                                               (((0 | (x)) << SYN_AC_0_MULT_VCL_LSB) & SYN_AC_0_MULT_VCL_MASK)
#define SYN_AC_0_MULT_VCL_RESET                                                0x2
#define SYN_AC_0_MULT_VCH_LSB                                                  24
#define SYN_AC_0_MULT_VCH_MSB                                                  25
#define SYN_AC_0_MULT_VCH_MASK                                                 0x3000000
#define SYN_AC_0_MULT_VCH_GET(x)                                               (((x) & SYN_AC_0_MULT_VCH_MASK) >> SYN_AC_0_MULT_VCH_LSB)
#define SYN_AC_0_MULT_VCH_SET(x)                                               (((0 | (x)) << SYN_AC_0_MULT_VCH_LSB) & SYN_AC_0_MULT_VCH_MASK)
#define SYN_AC_0_MULT_VCH_RESET                                                0x2
#define SYN_AC_0_MULT_CPCAL_LSB                                                22
#define SYN_AC_0_MULT_CPCAL_MSB                                                23
#define SYN_AC_0_MULT_CPCAL_MASK                                               0xc00000
#define SYN_AC_0_MULT_CPCAL_GET(x)                                             (((x) & SYN_AC_0_MULT_CPCAL_MASK) >> SYN_AC_0_MULT_CPCAL_LSB)
#define SYN_AC_0_MULT_CPCAL_SET(x)                                             (((0 | (x)) << SYN_AC_0_MULT_CPCAL_LSB) & SYN_AC_0_MULT_CPCAL_MASK)
#define SYN_AC_0_MULT_CPCAL_RESET                                              0x3
#define SYN_AC_0_MULT_PDCAL_LSB                                                21
#define SYN_AC_0_MULT_PDCAL_MSB                                                21
#define SYN_AC_0_MULT_PDCAL_MASK                                               0x200000
#define SYN_AC_0_MULT_PDCAL_GET(x)                                             (((x) & SYN_AC_0_MULT_PDCAL_MASK) >> SYN_AC_0_MULT_PDCAL_LSB)
#define SYN_AC_0_MULT_PDCAL_SET(x)                                             (((0 | (x)) << SYN_AC_0_MULT_PDCAL_LSB) & SYN_AC_0_MULT_PDCAL_MASK)
#define SYN_AC_0_MULT_PDCAL_RESET                                              0x0
#define SYN_AC_0_MULT_XOEDGESEL_LSB                                            20
#define SYN_AC_0_MULT_XOEDGESEL_MSB                                            20
#define SYN_AC_0_MULT_XOEDGESEL_MASK                                           0x100000
#define SYN_AC_0_MULT_XOEDGESEL_GET(x)                                         (((x) & SYN_AC_0_MULT_XOEDGESEL_MASK) >> SYN_AC_0_MULT_XOEDGESEL_LSB)
#define SYN_AC_0_MULT_XOEDGESEL_SET(x)                                         (((0 | (x)) << SYN_AC_0_MULT_XOEDGESEL_LSB) & SYN_AC_0_MULT_XOEDGESEL_MASK)
#define SYN_AC_0_MULT_XOEDGESEL_RESET                                          0x0
#define SYN_AC_0_MULT_VREF25_LSB                                               17
#define SYN_AC_0_MULT_VREF25_MSB                                               19
#define SYN_AC_0_MULT_VREF25_MASK                                              0xe0000
#define SYN_AC_0_MULT_VREF25_GET(x)                                            (((x) & SYN_AC_0_MULT_VREF25_MASK) >> SYN_AC_0_MULT_VREF25_LSB)
#define SYN_AC_0_MULT_VREF25_SET(x)                                            (((0 | (x)) << SYN_AC_0_MULT_VREF25_LSB) & SYN_AC_0_MULT_VREF25_MASK)
#define SYN_AC_0_MULT_VREF25_RESET                                             0x3
#define SYN_AC_0_MULT_VREF11_LSB                                               14
#define SYN_AC_0_MULT_VREF11_MSB                                               16
#define SYN_AC_0_MULT_VREF11_MASK                                              0x1c000
#define SYN_AC_0_MULT_VREF11_GET(x)                                            (((x) & SYN_AC_0_MULT_VREF11_MASK) >> SYN_AC_0_MULT_VREF11_LSB)
#define SYN_AC_0_MULT_VREF11_SET(x)                                            (((0 | (x)) << SYN_AC_0_MULT_VREF11_LSB) & SYN_AC_0_MULT_VREF11_MASK)
#define SYN_AC_0_MULT_VREF11_RESET                                             0x3
#define SYN_AC_0_CP_VREF25_LSB                                                 11
#define SYN_AC_0_CP_VREF25_MSB                                                 13
#define SYN_AC_0_CP_VREF25_MASK                                                0x3800
#define SYN_AC_0_CP_VREF25_GET(x)                                              (((x) & SYN_AC_0_CP_VREF25_MASK) >> SYN_AC_0_CP_VREF25_LSB)
#define SYN_AC_0_CP_VREF25_SET(x)                                              (((0 | (x)) << SYN_AC_0_CP_VREF25_LSB) & SYN_AC_0_CP_VREF25_MASK)
#define SYN_AC_0_CP_VREF25_RESET                                               0x3
#define SYN_AC_0_CP_VREF11_LSB                                                 8
#define SYN_AC_0_CP_VREF11_MSB                                                 10
#define SYN_AC_0_CP_VREF11_MASK                                                0x700
#define SYN_AC_0_CP_VREF11_GET(x)                                              (((x) & SYN_AC_0_CP_VREF11_MASK) >> SYN_AC_0_CP_VREF11_LSB)
#define SYN_AC_0_CP_VREF11_SET(x)                                              (((0 | (x)) << SYN_AC_0_CP_VREF11_LSB) & SYN_AC_0_CP_VREF11_MASK)
#define SYN_AC_0_CP_VREF11_RESET                                               0x3
#define SYN_AC_0_VCO_VREF25_LSB                                                5
#define SYN_AC_0_VCO_VREF25_MSB                                                7
#define SYN_AC_0_VCO_VREF25_MASK                                               0xe0
#define SYN_AC_0_VCO_VREF25_GET(x)                                             (((x) & SYN_AC_0_VCO_VREF25_MASK) >> SYN_AC_0_VCO_VREF25_LSB)
#define SYN_AC_0_VCO_VREF25_SET(x)                                             (((0 | (x)) << SYN_AC_0_VCO_VREF25_LSB) & SYN_AC_0_VCO_VREF25_MASK)
#define SYN_AC_0_VCO_VREF25_RESET                                              0x3
#define SYN_AC_0_VCO_VREF11_LSB                                                2
#define SYN_AC_0_VCO_VREF11_MSB                                                4
#define SYN_AC_0_VCO_VREF11_MASK                                               0x1c
#define SYN_AC_0_VCO_VREF11_GET(x)                                             (((x) & SYN_AC_0_VCO_VREF11_MASK) >> SYN_AC_0_VCO_VREF11_LSB)
#define SYN_AC_0_VCO_VREF11_SET(x)                                             (((0 | (x)) << SYN_AC_0_VCO_VREF11_LSB) & SYN_AC_0_VCO_VREF11_MASK)
#define SYN_AC_0_VCO_VREF11_RESET                                              0x3
#define SYN_AC_0_CP_REG25_LEAKER_LSB                                           1
#define SYN_AC_0_CP_REG25_LEAKER_MSB                                           1
#define SYN_AC_0_CP_REG25_LEAKER_MASK                                          0x2
#define SYN_AC_0_CP_REG25_LEAKER_GET(x)                                        (((x) & SYN_AC_0_CP_REG25_LEAKER_MASK) >> SYN_AC_0_CP_REG25_LEAKER_LSB)
#define SYN_AC_0_CP_REG25_LEAKER_SET(x)                                        (((0 | (x)) << SYN_AC_0_CP_REG25_LEAKER_LSB) & SYN_AC_0_CP_REG25_LEAKER_MASK)
#define SYN_AC_0_CP_REG25_LEAKER_RESET                                         0x0
#define SYN_AC_0_CNTR_REG11_LEAKER_LSB                                         0
#define SYN_AC_0_CNTR_REG11_LEAKER_MSB                                         0
#define SYN_AC_0_CNTR_REG11_LEAKER_MASK                                        0x1
#define SYN_AC_0_CNTR_REG11_LEAKER_GET(x)                                      (((x) & SYN_AC_0_CNTR_REG11_LEAKER_MASK) >> SYN_AC_0_CNTR_REG11_LEAKER_LSB)
#define SYN_AC_0_CNTR_REG11_LEAKER_SET(x)                                      (((0 | (x)) << SYN_AC_0_CNTR_REG11_LEAKER_LSB) & SYN_AC_0_CNTR_REG11_LEAKER_MASK)
#define SYN_AC_0_CNTR_REG11_LEAKER_RESET                                       0x0
#define SYN_AC_0_ADDRESS                                                       (0x28 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_AC_0_RSTMASK                                                       0xffffffff
#define SYN_AC_0_RESET                                                         0xfac6db6c

// 0x2c (SYN_AC_1)
#define SYN_AC_1_CNTR_VREF11_LSB                                               29
#define SYN_AC_1_CNTR_VREF11_MSB                                               31
#define SYN_AC_1_CNTR_VREF11_MASK                                              0xe0000000
#define SYN_AC_1_CNTR_VREF11_GET(x)                                            (((x) & SYN_AC_1_CNTR_VREF11_MASK) >> SYN_AC_1_CNTR_VREF11_LSB)
#define SYN_AC_1_CNTR_VREF11_SET(x)                                            (((0 | (x)) << SYN_AC_1_CNTR_VREF11_LSB) & SYN_AC_1_CNTR_VREF11_MASK)
#define SYN_AC_1_CNTR_VREF11_RESET                                             0x3
#define SYN_AC_1_CP_REG25_BYP_LSB                                              28
#define SYN_AC_1_CP_REG25_BYP_MSB                                              28
#define SYN_AC_1_CP_REG25_BYP_MASK                                             0x10000000
#define SYN_AC_1_CP_REG25_BYP_GET(x)                                           (((x) & SYN_AC_1_CP_REG25_BYP_MASK) >> SYN_AC_1_CP_REG25_BYP_LSB)
#define SYN_AC_1_CP_REG25_BYP_SET(x)                                           (((0 | (x)) << SYN_AC_1_CP_REG25_BYP_LSB) & SYN_AC_1_CP_REG25_BYP_MASK)
#define SYN_AC_1_CP_REG25_BYP_RESET                                            0x0
#define SYN_AC_1_VCO_REG25_BYP_LSB                                             27
#define SYN_AC_1_VCO_REG25_BYP_MSB                                             27
#define SYN_AC_1_VCO_REG25_BYP_MASK                                            0x8000000
#define SYN_AC_1_VCO_REG25_BYP_GET(x)                                          (((x) & SYN_AC_1_VCO_REG25_BYP_MASK) >> SYN_AC_1_VCO_REG25_BYP_LSB)
#define SYN_AC_1_VCO_REG25_BYP_SET(x)                                          (((0 | (x)) << SYN_AC_1_VCO_REG25_BYP_LSB) & SYN_AC_1_VCO_REG25_BYP_MASK)
#define SYN_AC_1_VCO_REG25_BYP_RESET                                           0x0
#define SYN_AC_1_VCO_REG11_BYP_LSB                                             26
#define SYN_AC_1_VCO_REG11_BYP_MSB                                             26
#define SYN_AC_1_VCO_REG11_BYP_MASK                                            0x4000000
#define SYN_AC_1_VCO_REG11_BYP_GET(x)                                          (((x) & SYN_AC_1_VCO_REG11_BYP_MASK) >> SYN_AC_1_VCO_REG11_BYP_LSB)
#define SYN_AC_1_VCO_REG11_BYP_SET(x)                                          (((0 | (x)) << SYN_AC_1_VCO_REG11_BYP_LSB) & SYN_AC_1_VCO_REG11_BYP_MASK)
#define SYN_AC_1_VCO_REG11_BYP_RESET                                           0x0
#define SYN_AC_1_CNTR_REG11_BYP_LSB                                            25
#define SYN_AC_1_CNTR_REG11_BYP_MSB                                            25
#define SYN_AC_1_CNTR_REG11_BYP_MASK                                           0x2000000
#define SYN_AC_1_CNTR_REG11_BYP_GET(x)                                         (((x) & SYN_AC_1_CNTR_REG11_BYP_MASK) >> SYN_AC_1_CNTR_REG11_BYP_LSB)
#define SYN_AC_1_CNTR_REG11_BYP_SET(x)                                         (((0 | (x)) << SYN_AC_1_CNTR_REG11_BYP_LSB) & SYN_AC_1_CNTR_REG11_BYP_MASK)
#define SYN_AC_1_CNTR_REG11_BYP_RESET                                          0x0
#define SYN_AC_1_CNTR_PWIDTH_LSB                                               23
#define SYN_AC_1_CNTR_PWIDTH_MSB                                               24
#define SYN_AC_1_CNTR_PWIDTH_MASK                                              0x1800000
#define SYN_AC_1_CNTR_PWIDTH_GET(x)                                            (((x) & SYN_AC_1_CNTR_PWIDTH_MASK) >> SYN_AC_1_CNTR_PWIDTH_LSB)
#define SYN_AC_1_CNTR_PWIDTH_SET(x)                                            (((0 | (x)) << SYN_AC_1_CNTR_PWIDTH_LSB) & SYN_AC_1_CNTR_PWIDTH_MASK)
#define SYN_AC_1_CNTR_PWIDTH_RESET                                             0x0
#define SYN_AC_1_LO_VMODE_EN_LSB                                               22
#define SYN_AC_1_LO_VMODE_EN_MSB                                               22
#define SYN_AC_1_LO_VMODE_EN_MASK                                              0x400000
#define SYN_AC_1_LO_VMODE_EN_GET(x)                                            (((x) & SYN_AC_1_LO_VMODE_EN_MASK) >> SYN_AC_1_LO_VMODE_EN_LSB)
#define SYN_AC_1_LO_VMODE_EN_SET(x)                                            (((0 | (x)) << SYN_AC_1_LO_VMODE_EN_LSB) & SYN_AC_1_LO_VMODE_EN_MASK)
#define SYN_AC_1_LO_VMODE_EN_RESET                                             0x0
#define SYN_AC_1_VCO_VMODE_EN_LSB                                              21
#define SYN_AC_1_VCO_VMODE_EN_MSB                                              21
#define SYN_AC_1_VCO_VMODE_EN_MASK                                             0x200000
#define SYN_AC_1_VCO_VMODE_EN_GET(x)                                           (((x) & SYN_AC_1_VCO_VMODE_EN_MASK) >> SYN_AC_1_VCO_VMODE_EN_LSB)
#define SYN_AC_1_VCO_VMODE_EN_SET(x)                                           (((0 | (x)) << SYN_AC_1_VCO_VMODE_EN_LSB) & SYN_AC_1_VCO_VMODE_EN_MASK)
#define SYN_AC_1_VCO_VMODE_EN_RESET                                            0x0
#define SYN_AC_1_VCO_CBNK11_LSB                                                18
#define SYN_AC_1_VCO_CBNK11_MSB                                                20
#define SYN_AC_1_VCO_CBNK11_MASK                                               0x1c0000
#define SYN_AC_1_VCO_CBNK11_GET(x)                                             (((x) & SYN_AC_1_VCO_CBNK11_MASK) >> SYN_AC_1_VCO_CBNK11_LSB)
#define SYN_AC_1_VCO_CBNK11_SET(x)                                             (((0 | (x)) << SYN_AC_1_VCO_CBNK11_LSB) & SYN_AC_1_VCO_CBNK11_MASK)
#define SYN_AC_1_VCO_CBNK11_RESET                                              0x5
#define SYN_AC_1_VCO_VMONITOR_LSB                                              15
#define SYN_AC_1_VCO_VMONITOR_MSB                                              17
#define SYN_AC_1_VCO_VMONITOR_MASK                                             0x38000
#define SYN_AC_1_VCO_VMONITOR_GET(x)                                           (((x) & SYN_AC_1_VCO_VMONITOR_MASK) >> SYN_AC_1_VCO_VMONITOR_LSB)
#define SYN_AC_1_VCO_VMONITOR_SET(x)                                           (((0 | (x)) << SYN_AC_1_VCO_VMONITOR_LSB) & SYN_AC_1_VCO_VMONITOR_MASK)
#define SYN_AC_1_VCO_VMONITOR_RESET                                            0x3
#define SYN_AC_1_VCO_KVCO_LSB                                                  12
#define SYN_AC_1_VCO_KVCO_MSB                                                  14
#define SYN_AC_1_VCO_KVCO_MASK                                                 0x7000
#define SYN_AC_1_VCO_KVCO_GET(x)                                               (((x) & SYN_AC_1_VCO_KVCO_MASK) >> SYN_AC_1_VCO_KVCO_LSB)
#define SYN_AC_1_VCO_KVCO_SET(x)                                               (((0 | (x)) << SYN_AC_1_VCO_KVCO_LSB) & SYN_AC_1_VCO_KVCO_MASK)
#define SYN_AC_1_VCO_KVCO_RESET                                                0x2
#define SYN_AC_1_VCO_BIAS_LSB                                                  7
#define SYN_AC_1_VCO_BIAS_MSB                                                  11
#define SYN_AC_1_VCO_BIAS_MASK                                                 0xf80
#define SYN_AC_1_VCO_BIAS_GET(x)                                               (((x) & SYN_AC_1_VCO_BIAS_MASK) >> SYN_AC_1_VCO_BIAS_LSB)
#define SYN_AC_1_VCO_BIAS_SET(x)                                               (((0 | (x)) << SYN_AC_1_VCO_BIAS_LSB) & SYN_AC_1_VCO_BIAS_MASK)
#define SYN_AC_1_VCO_BIAS_RESET                                                0x14
#define SYN_AC_1_BIAS_ICP_LSB                                                  5
#define SYN_AC_1_BIAS_ICP_MSB                                                  6
#define SYN_AC_1_BIAS_ICP_MASK                                                 0x60
#define SYN_AC_1_BIAS_ICP_GET(x)                                               (((x) & SYN_AC_1_BIAS_ICP_MASK) >> SYN_AC_1_BIAS_ICP_LSB)
#define SYN_AC_1_BIAS_ICP_SET(x)                                               (((0 | (x)) << SYN_AC_1_BIAS_ICP_LSB) & SYN_AC_1_BIAS_ICP_MASK)
#define SYN_AC_1_BIAS_ICP_RESET                                                0x2
#define SYN_AC_1_RESERVED_0_LSB                                                0
#define SYN_AC_1_RESERVED_0_MSB                                                4
#define SYN_AC_1_RESERVED_0_MASK                                               0x1f
#define SYN_AC_1_RESERVED_0_GET(x)                                             (((x) & SYN_AC_1_RESERVED_0_MASK) >> SYN_AC_1_RESERVED_0_LSB)
#define SYN_AC_1_RESERVED_0_SET(x)                                             (((0 | (x)) << SYN_AC_1_RESERVED_0_LSB) & SYN_AC_1_RESERVED_0_MASK)
#define SYN_AC_1_RESERVED_0_RESET                                              0x0
#define SYN_AC_1_ADDRESS                                                       (0x2c + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_AC_1_RSTMASK                                                       0xffffffff
#define SYN_AC_1_RESET                                                         0x6015aa40

// 0x30 (SYN_AC_2)
#define SYN_AC_2_CP_PINVC_LSB                                                  31
#define SYN_AC_2_CP_PINVC_MSB                                                  31
#define SYN_AC_2_CP_PINVC_MASK                                                 0x80000000
#define SYN_AC_2_CP_PINVC_GET(x)                                               (((x) & SYN_AC_2_CP_PINVC_MASK) >> SYN_AC_2_CP_PINVC_LSB)
#define SYN_AC_2_CP_PINVC_SET(x)                                               (((0 | (x)) << SYN_AC_2_CP_PINVC_LSB) & SYN_AC_2_CP_PINVC_MASK)
#define SYN_AC_2_CP_PINVC_RESET                                                0x0
#define SYN_AC_2_CP_ICP_LSB                                                    24
#define SYN_AC_2_CP_ICP_MSB                                                    30
#define SYN_AC_2_CP_ICP_MASK                                                   0x7f000000
#define SYN_AC_2_CP_ICP_GET(x)                                                 (((x) & SYN_AC_2_CP_ICP_MASK) >> SYN_AC_2_CP_ICP_LSB)
#define SYN_AC_2_CP_ICP_SET(x)                                                 (((0 | (x)) << SYN_AC_2_CP_ICP_LSB) & SYN_AC_2_CP_ICP_MASK)
#define SYN_AC_2_CP_ICP_RESET                                                  0x33
#define SYN_AC_2_CP_ILK_LSB                                                    20
#define SYN_AC_2_CP_ILK_MSB                                                    23
#define SYN_AC_2_CP_ILK_MASK                                                   0xf00000
#define SYN_AC_2_CP_ILK_GET(x)                                                 (((x) & SYN_AC_2_CP_ILK_MASK) >> SYN_AC_2_CP_ILK_LSB)
#define SYN_AC_2_CP_ILK_SET(x)                                                 (((0 | (x)) << SYN_AC_2_CP_ILK_LSB) & SYN_AC_2_CP_ILK_MASK)
#define SYN_AC_2_CP_ILK_RESET                                                  0x6
#define SYN_AC_2_CP_MON_FB_LSB                                                 19
#define SYN_AC_2_CP_MON_FB_MSB                                                 19
#define SYN_AC_2_CP_MON_FB_MASK                                                0x80000
#define SYN_AC_2_CP_MON_FB_GET(x)                                              (((x) & SYN_AC_2_CP_MON_FB_MASK) >> SYN_AC_2_CP_MON_FB_LSB)
#define SYN_AC_2_CP_MON_FB_SET(x)                                              (((0 | (x)) << SYN_AC_2_CP_MON_FB_LSB) & SYN_AC_2_CP_MON_FB_MASK)
#define SYN_AC_2_CP_MON_FB_RESET                                               0x0
#define SYN_AC_2_CP_MON_REF_LSB                                                18
#define SYN_AC_2_CP_MON_REF_MSB                                                18
#define SYN_AC_2_CP_MON_REF_MASK                                               0x40000
#define SYN_AC_2_CP_MON_REF_GET(x)                                             (((x) & SYN_AC_2_CP_MON_REF_MASK) >> SYN_AC_2_CP_MON_REF_LSB)
#define SYN_AC_2_CP_MON_REF_SET(x)                                             (((0 | (x)) << SYN_AC_2_CP_MON_REF_LSB) & SYN_AC_2_CP_MON_REF_MASK)
#define SYN_AC_2_CP_MON_REF_RESET                                              0x0
#define SYN_AC_2_CP_HIZ_UP_LSB                                                 17
#define SYN_AC_2_CP_HIZ_UP_MSB                                                 17
#define SYN_AC_2_CP_HIZ_UP_MASK                                                0x20000
#define SYN_AC_2_CP_HIZ_UP_GET(x)                                              (((x) & SYN_AC_2_CP_HIZ_UP_MASK) >> SYN_AC_2_CP_HIZ_UP_LSB)
#define SYN_AC_2_CP_HIZ_UP_SET(x)                                              (((0 | (x)) << SYN_AC_2_CP_HIZ_UP_LSB) & SYN_AC_2_CP_HIZ_UP_MASK)
#define SYN_AC_2_CP_HIZ_UP_RESET                                               0x0
#define SYN_AC_2_CP_HIZ_DN_LSB                                                 16
#define SYN_AC_2_CP_HIZ_DN_MSB                                                 16
#define SYN_AC_2_CP_HIZ_DN_MASK                                                0x10000
#define SYN_AC_2_CP_HIZ_DN_GET(x)                                              (((x) & SYN_AC_2_CP_HIZ_DN_MASK) >> SYN_AC_2_CP_HIZ_DN_LSB)
#define SYN_AC_2_CP_HIZ_DN_SET(x)                                              (((0 | (x)) << SYN_AC_2_CP_HIZ_DN_LSB) & SYN_AC_2_CP_HIZ_DN_MASK)
#define SYN_AC_2_CP_HIZ_DN_RESET                                               0x0
#define SYN_AC_2_CP_FORCE_DN_LSB                                               15
#define SYN_AC_2_CP_FORCE_DN_MSB                                               15
#define SYN_AC_2_CP_FORCE_DN_MASK                                              0x8000
#define SYN_AC_2_CP_FORCE_DN_GET(x)                                            (((x) & SYN_AC_2_CP_FORCE_DN_MASK) >> SYN_AC_2_CP_FORCE_DN_LSB)
#define SYN_AC_2_CP_FORCE_DN_SET(x)                                            (((0 | (x)) << SYN_AC_2_CP_FORCE_DN_LSB) & SYN_AC_2_CP_FORCE_DN_MASK)
#define SYN_AC_2_CP_FORCE_DN_RESET                                             0x0
#define SYN_AC_2_CP_LOW_NBIAS_LSB                                              14
#define SYN_AC_2_CP_LOW_NBIAS_MSB                                              14
#define SYN_AC_2_CP_LOW_NBIAS_MASK                                             0x4000
#define SYN_AC_2_CP_LOW_NBIAS_GET(x)                                           (((x) & SYN_AC_2_CP_LOW_NBIAS_MASK) >> SYN_AC_2_CP_LOW_NBIAS_LSB)
#define SYN_AC_2_CP_LOW_NBIAS_SET(x)                                           (((0 | (x)) << SYN_AC_2_CP_LOW_NBIAS_LSB) & SYN_AC_2_CP_LOW_NBIAS_MASK)
#define SYN_AC_2_CP_LOW_NBIAS_RESET                                            0x1
#define SYN_AC_2_RESERVED_0_LSB                                                13
#define SYN_AC_2_RESERVED_0_MSB                                                13
#define SYN_AC_2_RESERVED_0_MASK                                               0x2000
#define SYN_AC_2_RESERVED_0_GET(x)                                             (((x) & SYN_AC_2_RESERVED_0_MASK) >> SYN_AC_2_RESERVED_0_LSB)
#define SYN_AC_2_RESERVED_0_SET(x)                                             (((0 | (x)) << SYN_AC_2_RESERVED_0_LSB) & SYN_AC_2_RESERVED_0_MASK)
#define SYN_AC_2_RESERVED_0_RESET                                              0x0
#define SYN_AC_2_SYN_ABUS_SEL_LSB                                              8
#define SYN_AC_2_SYN_ABUS_SEL_MSB                                              12
#define SYN_AC_2_SYN_ABUS_SEL_MASK                                             0x1f00
#define SYN_AC_2_SYN_ABUS_SEL_GET(x)                                           (((x) & SYN_AC_2_SYN_ABUS_SEL_MASK) >> SYN_AC_2_SYN_ABUS_SEL_LSB)
#define SYN_AC_2_SYN_ABUS_SEL_SET(x)                                           (((0 | (x)) << SYN_AC_2_SYN_ABUS_SEL_LSB) & SYN_AC_2_SYN_ABUS_SEL_MASK)
#define SYN_AC_2_SYN_ABUS_SEL_RESET                                            0x0
#define SYN_AC_2_SYN_ABUSH_SEL_LSB                                             3
#define SYN_AC_2_SYN_ABUSH_SEL_MSB                                             7
#define SYN_AC_2_SYN_ABUSH_SEL_MASK                                            0xf8
#define SYN_AC_2_SYN_ABUSH_SEL_GET(x)                                          (((x) & SYN_AC_2_SYN_ABUSH_SEL_MASK) >> SYN_AC_2_SYN_ABUSH_SEL_LSB)
#define SYN_AC_2_SYN_ABUSH_SEL_SET(x)                                          (((0 | (x)) << SYN_AC_2_SYN_ABUSH_SEL_LSB) & SYN_AC_2_SYN_ABUSH_SEL_MASK)
#define SYN_AC_2_SYN_ABUSH_SEL_RESET                                           0x0
#define SYN_AC_2_RFBUS_EN_VCO_LSB                                              2
#define SYN_AC_2_RFBUS_EN_VCO_MSB                                              2
#define SYN_AC_2_RFBUS_EN_VCO_MASK                                             0x4
#define SYN_AC_2_RFBUS_EN_VCO_GET(x)                                           (((x) & SYN_AC_2_RFBUS_EN_VCO_MASK) >> SYN_AC_2_RFBUS_EN_VCO_LSB)
#define SYN_AC_2_RFBUS_EN_VCO_SET(x)                                           (((0 | (x)) << SYN_AC_2_RFBUS_EN_VCO_LSB) & SYN_AC_2_RFBUS_EN_VCO_MASK)
#define SYN_AC_2_RFBUS_EN_VCO_RESET                                            0x0
#define SYN_AC_2_RFBUS_EN_MULT_LSB                                             1
#define SYN_AC_2_RFBUS_EN_MULT_MSB                                             1
#define SYN_AC_2_RFBUS_EN_MULT_MASK                                            0x2
#define SYN_AC_2_RFBUS_EN_MULT_GET(x)                                          (((x) & SYN_AC_2_RFBUS_EN_MULT_MASK) >> SYN_AC_2_RFBUS_EN_MULT_LSB)
#define SYN_AC_2_RFBUS_EN_MULT_SET(x)                                          (((0 | (x)) << SYN_AC_2_RFBUS_EN_MULT_LSB) & SYN_AC_2_RFBUS_EN_MULT_MASK)
#define SYN_AC_2_RFBUS_EN_MULT_RESET                                           0x0
#define SYN_AC_2_LPF_VHMLGEN_BYP_LSB                                           0
#define SYN_AC_2_LPF_VHMLGEN_BYP_MSB                                           0
#define SYN_AC_2_LPF_VHMLGEN_BYP_MASK                                          0x1
#define SYN_AC_2_LPF_VHMLGEN_BYP_GET(x)                                        (((x) & SYN_AC_2_LPF_VHMLGEN_BYP_MASK) >> SYN_AC_2_LPF_VHMLGEN_BYP_LSB)
#define SYN_AC_2_LPF_VHMLGEN_BYP_SET(x)                                        (((0 | (x)) << SYN_AC_2_LPF_VHMLGEN_BYP_LSB) & SYN_AC_2_LPF_VHMLGEN_BYP_MASK)
#define SYN_AC_2_LPF_VHMLGEN_BYP_RESET                                         0x0
#define SYN_AC_2_ADDRESS                                                       (0x30 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_AC_2_RSTMASK                                                       0xffffffff
#define SYN_AC_2_RESET                                                         0x33604000

// 0x34 (SYN_AC_3)
#define SYN_AC_3_LPF_R1_LSB                                                    28
#define SYN_AC_3_LPF_R1_MSB                                                    31
#define SYN_AC_3_LPF_R1_MASK                                                   0xf0000000
#define SYN_AC_3_LPF_R1_GET(x)                                                 (((x) & SYN_AC_3_LPF_R1_MASK) >> SYN_AC_3_LPF_R1_LSB)
#define SYN_AC_3_LPF_R1_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_R1_LSB) & SYN_AC_3_LPF_R1_MASK)
#define SYN_AC_3_LPF_R1_RESET                                                  0x7
#define SYN_AC_3_LPF_R2_LSB                                                    24
#define SYN_AC_3_LPF_R2_MSB                                                    27
#define SYN_AC_3_LPF_R2_MASK                                                   0xf000000
#define SYN_AC_3_LPF_R2_GET(x)                                                 (((x) & SYN_AC_3_LPF_R2_MASK) >> SYN_AC_3_LPF_R2_LSB)
#define SYN_AC_3_LPF_R2_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_R2_LSB) & SYN_AC_3_LPF_R2_MASK)
#define SYN_AC_3_LPF_R2_RESET                                                  0x5
#define SYN_AC_3_RESERVED_0_LSB                                                22
#define SYN_AC_3_RESERVED_0_MSB                                                23
#define SYN_AC_3_RESERVED_0_MASK                                               0xc00000
#define SYN_AC_3_RESERVED_0_GET(x)                                             (((x) & SYN_AC_3_RESERVED_0_MASK) >> SYN_AC_3_RESERVED_0_LSB)
#define SYN_AC_3_RESERVED_0_SET(x)                                             (((0 | (x)) << SYN_AC_3_RESERVED_0_LSB) & SYN_AC_3_RESERVED_0_MASK)
#define SYN_AC_3_RESERVED_0_RESET                                              0x0
#define SYN_AC_3_LPF_C1_LSB                                                    20
#define SYN_AC_3_LPF_C1_MSB                                                    21
#define SYN_AC_3_LPF_C1_MASK                                                   0x300000
#define SYN_AC_3_LPF_C1_GET(x)                                                 (((x) & SYN_AC_3_LPF_C1_MASK) >> SYN_AC_3_LPF_C1_LSB)
#define SYN_AC_3_LPF_C1_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_C1_LSB) & SYN_AC_3_LPF_C1_MASK)
#define SYN_AC_3_LPF_C1_RESET                                                  0x1
#define SYN_AC_3_LPF_C2_LSB                                                    16
#define SYN_AC_3_LPF_C2_MSB                                                    19
#define SYN_AC_3_LPF_C2_MASK                                                   0xf0000
#define SYN_AC_3_LPF_C2_GET(x)                                                 (((x) & SYN_AC_3_LPF_C2_MASK) >> SYN_AC_3_LPF_C2_LSB)
#define SYN_AC_3_LPF_C2_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_C2_LSB) & SYN_AC_3_LPF_C2_MASK)
#define SYN_AC_3_LPF_C2_RESET                                                  0x5
#define SYN_AC_3_LPF_C3_LSB                                                    12
#define SYN_AC_3_LPF_C3_MSB                                                    15
#define SYN_AC_3_LPF_C3_MASK                                                   0xf000
#define SYN_AC_3_LPF_C3_GET(x)                                                 (((x) & SYN_AC_3_LPF_C3_MASK) >> SYN_AC_3_LPF_C3_LSB)
#define SYN_AC_3_LPF_C3_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_C3_LSB) & SYN_AC_3_LPF_C3_MASK)
#define SYN_AC_3_LPF_C3_RESET                                                  0x5
#define SYN_AC_3_RESERVED_1_LSB                                                11
#define SYN_AC_3_RESERVED_1_MSB                                                11
#define SYN_AC_3_RESERVED_1_MASK                                               0x800
#define SYN_AC_3_RESERVED_1_GET(x)                                             (((x) & SYN_AC_3_RESERVED_1_MASK) >> SYN_AC_3_RESERVED_1_LSB)
#define SYN_AC_3_RESERVED_1_SET(x)                                             (((0 | (x)) << SYN_AC_3_RESERVED_1_LSB) & SYN_AC_3_RESERVED_1_MASK)
#define SYN_AC_3_RESERVED_1_RESET                                              0x0
#define SYN_AC_3_LPF_VH_LSB                                                    8
#define SYN_AC_3_LPF_VH_MSB                                                    10
#define SYN_AC_3_LPF_VH_MASK                                                   0x700
#define SYN_AC_3_LPF_VH_GET(x)                                                 (((x) & SYN_AC_3_LPF_VH_MASK) >> SYN_AC_3_LPF_VH_LSB)
#define SYN_AC_3_LPF_VH_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_VH_LSB) & SYN_AC_3_LPF_VH_MASK)
#define SYN_AC_3_LPF_VH_RESET                                                  0x2
#define SYN_AC_3_RESERVED_2_LSB                                                7
#define SYN_AC_3_RESERVED_2_MSB                                                7
#define SYN_AC_3_RESERVED_2_MASK                                               0x80
#define SYN_AC_3_RESERVED_2_GET(x)                                             (((x) & SYN_AC_3_RESERVED_2_MASK) >> SYN_AC_3_RESERVED_2_LSB)
#define SYN_AC_3_RESERVED_2_SET(x)                                             (((0 | (x)) << SYN_AC_3_RESERVED_2_LSB) & SYN_AC_3_RESERVED_2_MASK)
#define SYN_AC_3_RESERVED_2_RESET                                              0x0
#define SYN_AC_3_LPF_VM_LSB                                                    4
#define SYN_AC_3_LPF_VM_MSB                                                    6
#define SYN_AC_3_LPF_VM_MASK                                                   0x70
#define SYN_AC_3_LPF_VM_GET(x)                                                 (((x) & SYN_AC_3_LPF_VM_MASK) >> SYN_AC_3_LPF_VM_LSB)
#define SYN_AC_3_LPF_VM_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_VM_LSB) & SYN_AC_3_LPF_VM_MASK)
#define SYN_AC_3_LPF_VM_RESET                                                  0x4
#define SYN_AC_3_RESERVED_3_LSB                                                3
#define SYN_AC_3_RESERVED_3_MSB                                                3
#define SYN_AC_3_RESERVED_3_MASK                                               0x8
#define SYN_AC_3_RESERVED_3_GET(x)                                             (((x) & SYN_AC_3_RESERVED_3_MASK) >> SYN_AC_3_RESERVED_3_LSB)
#define SYN_AC_3_RESERVED_3_SET(x)                                             (((0 | (x)) << SYN_AC_3_RESERVED_3_LSB) & SYN_AC_3_RESERVED_3_MASK)
#define SYN_AC_3_RESERVED_3_RESET                                              0x0
#define SYN_AC_3_LPF_VL_LSB                                                    0
#define SYN_AC_3_LPF_VL_MSB                                                    2
#define SYN_AC_3_LPF_VL_MASK                                                   0x7
#define SYN_AC_3_LPF_VL_GET(x)                                                 (((x) & SYN_AC_3_LPF_VL_MASK) >> SYN_AC_3_LPF_VL_LSB)
#define SYN_AC_3_LPF_VL_SET(x)                                                 (((0 | (x)) << SYN_AC_3_LPF_VL_LSB) & SYN_AC_3_LPF_VL_MASK)
#define SYN_AC_3_LPF_VL_RESET                                                  0x6
#define SYN_AC_3_ADDRESS                                                       (0x34 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_AC_3_RSTMASK                                                       0xffffffff
#define SYN_AC_3_RESET                                                         0x75155246

// 0x38 (SYN_PAL_READ)
#define SYN_PAL_READ_PAL_FLIP_MDIV_LSB                                         28
#define SYN_PAL_READ_PAL_FLIP_MDIV_MSB                                         31
#define SYN_PAL_READ_PAL_FLIP_MDIV_MASK                                        0xf0000000
#define SYN_PAL_READ_PAL_FLIP_MDIV_GET(x)                                      (((x) & SYN_PAL_READ_PAL_FLIP_MDIV_MASK) >> SYN_PAL_READ_PAL_FLIP_MDIV_LSB)
#define SYN_PAL_READ_PAL_FLIP_MDIV_SET(x)                                      (((0 | (x)) << SYN_PAL_READ_PAL_FLIP_MDIV_LSB) & SYN_PAL_READ_PAL_FLIP_MDIV_MASK)
#define SYN_PAL_READ_PAL_FLIP_MDIV_RESET                                       0x0
#define SYN_PAL_READ_PAL_FLIP_RXDIV_LSB                                        24
#define SYN_PAL_READ_PAL_FLIP_RXDIV_MSB                                        27
#define SYN_PAL_READ_PAL_FLIP_RXDIV_MASK                                       0xf000000
#define SYN_PAL_READ_PAL_FLIP_RXDIV_GET(x)                                     (((x) & SYN_PAL_READ_PAL_FLIP_RXDIV_MASK) >> SYN_PAL_READ_PAL_FLIP_RXDIV_LSB)
#define SYN_PAL_READ_PAL_FLIP_RXDIV_SET(x)                                     (((0 | (x)) << SYN_PAL_READ_PAL_FLIP_RXDIV_LSB) & SYN_PAL_READ_PAL_FLIP_RXDIV_MASK)
#define SYN_PAL_READ_PAL_FLIP_RXDIV_RESET                                      0x0
#define SYN_PAL_READ_PAL_FLIP_TXDIV_LSB                                        20
#define SYN_PAL_READ_PAL_FLIP_TXDIV_MSB                                        23
#define SYN_PAL_READ_PAL_FLIP_TXDIV_MASK                                       0xf00000
#define SYN_PAL_READ_PAL_FLIP_TXDIV_GET(x)                                     (((x) & SYN_PAL_READ_PAL_FLIP_TXDIV_MASK) >> SYN_PAL_READ_PAL_FLIP_TXDIV_LSB)
#define SYN_PAL_READ_PAL_FLIP_TXDIV_SET(x)                                     (((0 | (x)) << SYN_PAL_READ_PAL_FLIP_TXDIV_LSB) & SYN_PAL_READ_PAL_FLIP_TXDIV_MASK)
#define SYN_PAL_READ_PAL_FLIP_TXDIV_RESET                                      0x0
#define SYN_PAL_READ_PAL_INVERT_MDIV_LSB                                       17
#define SYN_PAL_READ_PAL_INVERT_MDIV_MSB                                       19
#define SYN_PAL_READ_PAL_INVERT_MDIV_MASK                                      0xe0000
#define SYN_PAL_READ_PAL_INVERT_MDIV_GET(x)                                    (((x) & SYN_PAL_READ_PAL_INVERT_MDIV_MASK) >> SYN_PAL_READ_PAL_INVERT_MDIV_LSB)
#define SYN_PAL_READ_PAL_INVERT_MDIV_SET(x)                                    (((0 | (x)) << SYN_PAL_READ_PAL_INVERT_MDIV_LSB) & SYN_PAL_READ_PAL_INVERT_MDIV_MASK)
#define SYN_PAL_READ_PAL_INVERT_MDIV_RESET                                     0x0
#define SYN_PAL_READ_PAL_INVERT_RXDIV_LSB                                      14
#define SYN_PAL_READ_PAL_INVERT_RXDIV_MSB                                      16
#define SYN_PAL_READ_PAL_INVERT_RXDIV_MASK                                     0x1c000
#define SYN_PAL_READ_PAL_INVERT_RXDIV_GET(x)                                   (((x) & SYN_PAL_READ_PAL_INVERT_RXDIV_MASK) >> SYN_PAL_READ_PAL_INVERT_RXDIV_LSB)
#define SYN_PAL_READ_PAL_INVERT_RXDIV_SET(x)                                   (((0 | (x)) << SYN_PAL_READ_PAL_INVERT_RXDIV_LSB) & SYN_PAL_READ_PAL_INVERT_RXDIV_MASK)
#define SYN_PAL_READ_PAL_INVERT_RXDIV_RESET                                    0x0
#define SYN_PAL_READ_PAL_INVERT_TXDIV_LSB                                      11
#define SYN_PAL_READ_PAL_INVERT_TXDIV_MSB                                      13
#define SYN_PAL_READ_PAL_INVERT_TXDIV_MASK                                     0x3800
#define SYN_PAL_READ_PAL_INVERT_TXDIV_GET(x)                                   (((x) & SYN_PAL_READ_PAL_INVERT_TXDIV_MASK) >> SYN_PAL_READ_PAL_INVERT_TXDIV_LSB)
#define SYN_PAL_READ_PAL_INVERT_TXDIV_SET(x)                                   (((0 | (x)) << SYN_PAL_READ_PAL_INVERT_TXDIV_LSB) & SYN_PAL_READ_PAL_INVERT_TXDIV_MASK)
#define SYN_PAL_READ_PAL_INVERT_TXDIV_RESET                                    0x0
#define SYN_PAL_READ_PAL_RESULT_MDIV_LSB                                       8
#define SYN_PAL_READ_PAL_RESULT_MDIV_MSB                                       10
#define SYN_PAL_READ_PAL_RESULT_MDIV_MASK                                      0x700
#define SYN_PAL_READ_PAL_RESULT_MDIV_GET(x)                                    (((x) & SYN_PAL_READ_PAL_RESULT_MDIV_MASK) >> SYN_PAL_READ_PAL_RESULT_MDIV_LSB)
#define SYN_PAL_READ_PAL_RESULT_MDIV_SET(x)                                    (((0 | (x)) << SYN_PAL_READ_PAL_RESULT_MDIV_LSB) & SYN_PAL_READ_PAL_RESULT_MDIV_MASK)
#define SYN_PAL_READ_PAL_RESULT_MDIV_RESET                                     0x0
#define SYN_PAL_READ_PAL_RESULT_RXDIV_LSB                                      5
#define SYN_PAL_READ_PAL_RESULT_RXDIV_MSB                                      7
#define SYN_PAL_READ_PAL_RESULT_RXDIV_MASK                                     0xe0
#define SYN_PAL_READ_PAL_RESULT_RXDIV_GET(x)                                   (((x) & SYN_PAL_READ_PAL_RESULT_RXDIV_MASK) >> SYN_PAL_READ_PAL_RESULT_RXDIV_LSB)
#define SYN_PAL_READ_PAL_RESULT_RXDIV_SET(x)                                   (((0 | (x)) << SYN_PAL_READ_PAL_RESULT_RXDIV_LSB) & SYN_PAL_READ_PAL_RESULT_RXDIV_MASK)
#define SYN_PAL_READ_PAL_RESULT_RXDIV_RESET                                    0x0
#define SYN_PAL_READ_PAL_RESULT_TXDIV_LSB                                      2
#define SYN_PAL_READ_PAL_RESULT_TXDIV_MSB                                      4
#define SYN_PAL_READ_PAL_RESULT_TXDIV_MASK                                     0x1c
#define SYN_PAL_READ_PAL_RESULT_TXDIV_GET(x)                                   (((x) & SYN_PAL_READ_PAL_RESULT_TXDIV_MASK) >> SYN_PAL_READ_PAL_RESULT_TXDIV_LSB)
#define SYN_PAL_READ_PAL_RESULT_TXDIV_SET(x)                                   (((0 | (x)) << SYN_PAL_READ_PAL_RESULT_TXDIV_LSB) & SYN_PAL_READ_PAL_RESULT_TXDIV_MASK)
#define SYN_PAL_READ_PAL_RESULT_TXDIV_RESET                                    0x0
#define SYN_PAL_READ_PAL_BIST_FAIL_LSB                                         1
#define SYN_PAL_READ_PAL_BIST_FAIL_MSB                                         1
#define SYN_PAL_READ_PAL_BIST_FAIL_MASK                                        0x2
#define SYN_PAL_READ_PAL_BIST_FAIL_GET(x)                                      (((x) & SYN_PAL_READ_PAL_BIST_FAIL_MASK) >> SYN_PAL_READ_PAL_BIST_FAIL_LSB)
#define SYN_PAL_READ_PAL_BIST_FAIL_SET(x)                                      (((0 | (x)) << SYN_PAL_READ_PAL_BIST_FAIL_LSB) & SYN_PAL_READ_PAL_BIST_FAIL_MASK)
#define SYN_PAL_READ_PAL_BIST_FAIL_RESET                                       0x0
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_LSB                                      0
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_MSB                                      0
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_MASK                                     0x1
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_GET(x)                                   (((x) & SYN_PAL_READ_PP_PAL_BIST_FAIL_MASK) >> SYN_PAL_READ_PP_PAL_BIST_FAIL_LSB)
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_SET(x)                                   (((0 | (x)) << SYN_PAL_READ_PP_PAL_BIST_FAIL_LSB) & SYN_PAL_READ_PP_PAL_BIST_FAIL_MASK)
#define SYN_PAL_READ_PP_PAL_BIST_FAIL_RESET                                    0x0
#define SYN_PAL_READ_ADDRESS                                                   (0x38 + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_PAL_READ_RSTMASK                                                   0xffffffff
#define SYN_PAL_READ_RESET                                                     0x0

// 0x3c (SYN_READ)
#define SYN_READ_MULT_VCOCAP_LSB                                               28
#define SYN_READ_MULT_VCOCAP_MSB                                               31
#define SYN_READ_MULT_VCOCAP_MASK                                              0xf0000000
#define SYN_READ_MULT_VCOCAP_GET(x)                                            (((x) & SYN_READ_MULT_VCOCAP_MASK) >> SYN_READ_MULT_VCOCAP_LSB)
#define SYN_READ_MULT_VCOCAP_SET(x)                                            (((0 | (x)) << SYN_READ_MULT_VCOCAP_LSB) & SYN_READ_MULT_VCOCAP_MASK)
#define SYN_READ_MULT_VCOCAP_RESET                                             0x0
#define SYN_READ_MULT_VCOCUR_LSB                                               24
#define SYN_READ_MULT_VCOCUR_MSB                                               27
#define SYN_READ_MULT_VCOCUR_MASK                                              0xf000000
#define SYN_READ_MULT_VCOCUR_GET(x)                                            (((x) & SYN_READ_MULT_VCOCUR_MASK) >> SYN_READ_MULT_VCOCUR_LSB)
#define SYN_READ_MULT_VCOCUR_SET(x)                                            (((0 | (x)) << SYN_READ_MULT_VCOCUR_LSB) & SYN_READ_MULT_VCOCUR_MASK)
#define SYN_READ_MULT_VCOCUR_RESET                                             0x0
#define SYN_READ_MULT_SM_STATE_LSB                                             22
#define SYN_READ_MULT_SM_STATE_MSB                                             23
#define SYN_READ_MULT_SM_STATE_MASK                                            0xc00000
#define SYN_READ_MULT_SM_STATE_GET(x)                                          (((x) & SYN_READ_MULT_SM_STATE_MASK) >> SYN_READ_MULT_SM_STATE_LSB)
#define SYN_READ_MULT_SM_STATE_SET(x)                                          (((0 | (x)) << SYN_READ_MULT_SM_STATE_LSB) & SYN_READ_MULT_SM_STATE_MASK)
#define SYN_READ_MULT_SM_STATE_RESET                                           0x0
#define SYN_READ_MULT_IS_LOCKED_LSB                                            21
#define SYN_READ_MULT_IS_LOCKED_MSB                                            21
#define SYN_READ_MULT_IS_LOCKED_MASK                                           0x200000
#define SYN_READ_MULT_IS_LOCKED_GET(x)                                         (((x) & SYN_READ_MULT_IS_LOCKED_MASK) >> SYN_READ_MULT_IS_LOCKED_LSB)
#define SYN_READ_MULT_IS_LOCKED_SET(x)                                         (((0 | (x)) << SYN_READ_MULT_IS_LOCKED_LSB) & SYN_READ_MULT_IS_LOCKED_MASK)
#define SYN_READ_MULT_IS_LOCKED_RESET                                          0x0
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_LSB                                     20
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_MSB                                     20
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_MASK                                    0x100000
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_GET(x)                                  (((x) & SYN_READ_MULT_CAPCUR_EXHAUSTED_MASK) >> SYN_READ_MULT_CAPCUR_EXHAUSTED_LSB)
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_SET(x)                                  (((0 | (x)) << SYN_READ_MULT_CAPCUR_EXHAUSTED_LSB) & SYN_READ_MULT_CAPCUR_EXHAUSTED_MASK)
#define SYN_READ_MULT_CAPCUR_EXHAUSTED_RESET                                   0x0
#define SYN_READ_MULT_VC2HI_LSB                                                19
#define SYN_READ_MULT_VC2HI_MSB                                                19
#define SYN_READ_MULT_VC2HI_MASK                                               0x80000
#define SYN_READ_MULT_VC2HI_GET(x)                                             (((x) & SYN_READ_MULT_VC2HI_MASK) >> SYN_READ_MULT_VC2HI_LSB)
#define SYN_READ_MULT_VC2HI_SET(x)                                             (((0 | (x)) << SYN_READ_MULT_VC2HI_LSB) & SYN_READ_MULT_VC2HI_MASK)
#define SYN_READ_MULT_VC2HI_RESET                                              0x0
#define SYN_READ_MULT_VC2LO_LSB                                                18
#define SYN_READ_MULT_VC2LO_MSB                                                18
#define SYN_READ_MULT_VC2LO_MASK                                               0x40000
#define SYN_READ_MULT_VC2LO_GET(x)                                             (((x) & SYN_READ_MULT_VC2LO_MASK) >> SYN_READ_MULT_VC2LO_LSB)
#define SYN_READ_MULT_VC2LO_SET(x)                                             (((0 | (x)) << SYN_READ_MULT_VC2LO_LSB) & SYN_READ_MULT_VC2LO_MASK)
#define SYN_READ_MULT_VC2LO_RESET                                              0x0
#define SYN_READ_LPF_VHIGH_LSB                                                 17
#define SYN_READ_LPF_VHIGH_MSB                                                 17
#define SYN_READ_LPF_VHIGH_MASK                                                0x20000
#define SYN_READ_LPF_VHIGH_GET(x)                                              (((x) & SYN_READ_LPF_VHIGH_MASK) >> SYN_READ_LPF_VHIGH_LSB)
#define SYN_READ_LPF_VHIGH_SET(x)                                              (((0 | (x)) << SYN_READ_LPF_VHIGH_LSB) & SYN_READ_LPF_VHIGH_MASK)
#define SYN_READ_LPF_VHIGH_RESET                                               0x0
#define SYN_READ_LPF_VLOW_LSB                                                  16
#define SYN_READ_LPF_VLOW_MSB                                                  16
#define SYN_READ_LPF_VLOW_MASK                                                 0x10000
#define SYN_READ_LPF_VLOW_GET(x)                                               (((x) & SYN_READ_LPF_VLOW_MASK) >> SYN_READ_LPF_VLOW_LSB)
#define SYN_READ_LPF_VLOW_SET(x)                                               (((0 | (x)) << SYN_READ_LPF_VLOW_LSB) & SYN_READ_LPF_VLOW_MASK)
#define SYN_READ_LPF_VLOW_RESET                                                0x0
#define SYN_READ_PLL_IS_LOCKED_LSB                                             15
#define SYN_READ_PLL_IS_LOCKED_MSB                                             15
#define SYN_READ_PLL_IS_LOCKED_MASK                                            0x8000
#define SYN_READ_PLL_IS_LOCKED_GET(x)                                          (((x) & SYN_READ_PLL_IS_LOCKED_MASK) >> SYN_READ_PLL_IS_LOCKED_LSB)
#define SYN_READ_PLL_IS_LOCKED_SET(x)                                          (((0 | (x)) << SYN_READ_PLL_IS_LOCKED_LSB) & SYN_READ_PLL_IS_LOCKED_MASK)
#define SYN_READ_PLL_IS_LOCKED_RESET                                           0x0
#define SYN_READ_VCO_AMP_COMP_O_LSB                                            14
#define SYN_READ_VCO_AMP_COMP_O_MSB                                            14
#define SYN_READ_VCO_AMP_COMP_O_MASK                                           0x4000
#define SYN_READ_VCO_AMP_COMP_O_GET(x)                                         (((x) & SYN_READ_VCO_AMP_COMP_O_MASK) >> SYN_READ_VCO_AMP_COMP_O_LSB)
#define SYN_READ_VCO_AMP_COMP_O_SET(x)                                         (((0 | (x)) << SYN_READ_VCO_AMP_COMP_O_LSB) & SYN_READ_VCO_AMP_COMP_O_MASK)
#define SYN_READ_VCO_AMP_COMP_O_RESET                                          0x0
#define SYN_READ_LO_DIST_ENCAP_LSB                                             11
#define SYN_READ_LO_DIST_ENCAP_MSB                                             13
#define SYN_READ_LO_DIST_ENCAP_MASK                                            0x3800
#define SYN_READ_LO_DIST_ENCAP_GET(x)                                          (((x) & SYN_READ_LO_DIST_ENCAP_MASK) >> SYN_READ_LO_DIST_ENCAP_LSB)
#define SYN_READ_LO_DIST_ENCAP_SET(x)                                          (((0 | (x)) << SYN_READ_LO_DIST_ENCAP_LSB) & SYN_READ_LO_DIST_ENCAP_MASK)
#define SYN_READ_LO_DIST_ENCAP_RESET                                           0x0
#define SYN_READ_LO_GEN_ENCAP_LSB                                              8
#define SYN_READ_LO_GEN_ENCAP_MSB                                              10
#define SYN_READ_LO_GEN_ENCAP_MASK                                             0x700
#define SYN_READ_LO_GEN_ENCAP_GET(x)                                           (((x) & SYN_READ_LO_GEN_ENCAP_MASK) >> SYN_READ_LO_GEN_ENCAP_LSB)
#define SYN_READ_LO_GEN_ENCAP_SET(x)                                           (((0 | (x)) << SYN_READ_LO_GEN_ENCAP_LSB) & SYN_READ_LO_GEN_ENCAP_MASK)
#define SYN_READ_LO_GEN_ENCAP_RESET                                            0x0
#define SYN_READ_PAL_RST23_CHK_FAIL_LSB                                        7
#define SYN_READ_PAL_RST23_CHK_FAIL_MSB                                        7
#define SYN_READ_PAL_RST23_CHK_FAIL_MASK                                       0x80
#define SYN_READ_PAL_RST23_CHK_FAIL_GET(x)                                     (((x) & SYN_READ_PAL_RST23_CHK_FAIL_MASK) >> SYN_READ_PAL_RST23_CHK_FAIL_LSB)
#define SYN_READ_PAL_RST23_CHK_FAIL_SET(x)                                     (((0 | (x)) << SYN_READ_PAL_RST23_CHK_FAIL_LSB) & SYN_READ_PAL_RST23_CHK_FAIL_MASK)
#define SYN_READ_PAL_RST23_CHK_FAIL_RESET                                      0x0
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_LSB                                    6
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_MSB                                    6
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_MASK                                   0x40
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_GET(x)                                 (((x) & SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_MASK) >> SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_LSB)
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_SET(x)                                 (((0 | (x)) << SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_LSB) & SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_MASK)
#define SYN_READ_PAL_FLIP_MDIV_CHK_FAIL_RESET                                  0x0
#define SYN_READ_PAL_RST2_CHK_FAIL_LSB                                         5
#define SYN_READ_PAL_RST2_CHK_FAIL_MSB                                         5
#define SYN_READ_PAL_RST2_CHK_FAIL_MASK                                        0x20
#define SYN_READ_PAL_RST2_CHK_FAIL_GET(x)                                      (((x) & SYN_READ_PAL_RST2_CHK_FAIL_MASK) >> SYN_READ_PAL_RST2_CHK_FAIL_LSB)
#define SYN_READ_PAL_RST2_CHK_FAIL_SET(x)                                      (((0 | (x)) << SYN_READ_PAL_RST2_CHK_FAIL_LSB) & SYN_READ_PAL_RST2_CHK_FAIL_MASK)
#define SYN_READ_PAL_RST2_CHK_FAIL_RESET                                       0x0
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_LSB                                  4
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_MSB                                  4
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_MASK                                 0x10
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_GET(x)                               (((x) & SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_MASK) >> SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_LSB)
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_SET(x)                               (((0 | (x)) << SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_LSB) & SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_MASK)
#define SYN_READ_PAL_FLIP_RTXDIV_CHK_FAIL_RESET                                0x0
#define SYN_READ_ADDRESS                                                       (0x3c + __SYN_REG_CSR_BASE_ADDRESS)
#define SYN_READ_RSTMASK                                                       0xfffffff0
#define SYN_READ_RESET                                                         0x0



#endif /* _SYN_REG_CSR_H_ */
