/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _SI_REG_H_
#define _SI_REG_H_


#ifndef __SI_REG_BASE_ADDRESS
#define __SI_REG_BASE_ADDRESS (0x84000)
#endif


// 0x0 (SI_CONFIG)
#define SI_CONFIG_ERR_INT_LSB                                                  19
#define SI_CONFIG_ERR_INT_MSB                                                  19
#define SI_CONFIG_ERR_INT_MASK                                                 0x80000
#define SI_CONFIG_ERR_INT_GET(x)                                               (((x) & SI_CONFIG_ERR_INT_MASK) >> SI_CONFIG_ERR_INT_LSB)
#define SI_CONFIG_ERR_INT_SET(x)                                               (((0 | (x)) << SI_CONFIG_ERR_INT_LSB) & SI_CONFIG_ERR_INT_MASK)
#define SI_CONFIG_ERR_INT_RESET                                                0x0
#define SI_CONFIG_BIDIR_OD_DATA_LSB                                            18
#define SI_CONFIG_BIDIR_OD_DATA_MSB                                            18
#define SI_CONFIG_BIDIR_OD_DATA_MASK                                           0x40000
#define SI_CONFIG_BIDIR_OD_DATA_GET(x)                                         (((x) & SI_CONFIG_BIDIR_OD_DATA_MASK) >> SI_CONFIG_BIDIR_OD_DATA_LSB)
#define SI_CONFIG_BIDIR_OD_DATA_SET(x)                                         (((0 | (x)) << SI_CONFIG_BIDIR_OD_DATA_LSB) & SI_CONFIG_BIDIR_OD_DATA_MASK)
#define SI_CONFIG_BIDIR_OD_DATA_RESET                                          0x1
#define SI_CONFIG_I2C_LSB                                                      16
#define SI_CONFIG_I2C_MSB                                                      16
#define SI_CONFIG_I2C_MASK                                                     0x10000
#define SI_CONFIG_I2C_GET(x)                                                   (((x) & SI_CONFIG_I2C_MASK) >> SI_CONFIG_I2C_LSB)
#define SI_CONFIG_I2C_SET(x)                                                   (((0 | (x)) << SI_CONFIG_I2C_LSB) & SI_CONFIG_I2C_MASK)
#define SI_CONFIG_I2C_RESET                                                    0x1
#define SI_CONFIG_POS_SAMPLE_LSB                                               7
#define SI_CONFIG_POS_SAMPLE_MSB                                               7
#define SI_CONFIG_POS_SAMPLE_MASK                                              0x80
#define SI_CONFIG_POS_SAMPLE_GET(x)                                            (((x) & SI_CONFIG_POS_SAMPLE_MASK) >> SI_CONFIG_POS_SAMPLE_LSB)
#define SI_CONFIG_POS_SAMPLE_SET(x)                                            (((0 | (x)) << SI_CONFIG_POS_SAMPLE_LSB) & SI_CONFIG_POS_SAMPLE_MASK)
#define SI_CONFIG_POS_SAMPLE_RESET                                             0x1
#define SI_CONFIG_POS_DRIVE_LSB                                                6
#define SI_CONFIG_POS_DRIVE_MSB                                                6
#define SI_CONFIG_POS_DRIVE_MASK                                               0x40
#define SI_CONFIG_POS_DRIVE_GET(x)                                             (((x) & SI_CONFIG_POS_DRIVE_MASK) >> SI_CONFIG_POS_DRIVE_LSB)
#define SI_CONFIG_POS_DRIVE_SET(x)                                             (((0 | (x)) << SI_CONFIG_POS_DRIVE_LSB) & SI_CONFIG_POS_DRIVE_MASK)
#define SI_CONFIG_POS_DRIVE_RESET                                              0x0
#define SI_CONFIG_INACTIVE_DATA_LSB                                            5
#define SI_CONFIG_INACTIVE_DATA_MSB                                            5
#define SI_CONFIG_INACTIVE_DATA_MASK                                           0x20
#define SI_CONFIG_INACTIVE_DATA_GET(x)                                         (((x) & SI_CONFIG_INACTIVE_DATA_MASK) >> SI_CONFIG_INACTIVE_DATA_LSB)
#define SI_CONFIG_INACTIVE_DATA_SET(x)                                         (((0 | (x)) << SI_CONFIG_INACTIVE_DATA_LSB) & SI_CONFIG_INACTIVE_DATA_MASK)
#define SI_CONFIG_INACTIVE_DATA_RESET                                          0x1
#define SI_CONFIG_INACTIVE_CLK_LSB                                             4
#define SI_CONFIG_INACTIVE_CLK_MSB                                             4
#define SI_CONFIG_INACTIVE_CLK_MASK                                            0x10
#define SI_CONFIG_INACTIVE_CLK_GET(x)                                          (((x) & SI_CONFIG_INACTIVE_CLK_MASK) >> SI_CONFIG_INACTIVE_CLK_LSB)
#define SI_CONFIG_INACTIVE_CLK_SET(x)                                          (((0 | (x)) << SI_CONFIG_INACTIVE_CLK_LSB) & SI_CONFIG_INACTIVE_CLK_MASK)
#define SI_CONFIG_INACTIVE_CLK_RESET                                           0x1
#define SI_CONFIG_DIVIDER_LSB                                                  0
#define SI_CONFIG_DIVIDER_MSB                                                  3
#define SI_CONFIG_DIVIDER_MASK                                                 0xf
#define SI_CONFIG_DIVIDER_GET(x)                                               (((x) & SI_CONFIG_DIVIDER_MASK) >> SI_CONFIG_DIVIDER_LSB)
#define SI_CONFIG_DIVIDER_SET(x)                                               (((0 | (x)) << SI_CONFIG_DIVIDER_LSB) & SI_CONFIG_DIVIDER_MASK)
#define SI_CONFIG_DIVIDER_RESET                                                0x0
#define SI_CONFIG_ADDRESS                                                      (0x0 + __SI_REG_BASE_ADDRESS)
#define SI_CONFIG_RSTMASK                                                      0xd00ff
#define SI_CONFIG_RESET                                                        0x500b0

// 0x4 (SI_CS)
#define SI_CS_BIT_CNT_IN_LAST_BYTE_LSB                                         11
#define SI_CS_BIT_CNT_IN_LAST_BYTE_MSB                                         13
#define SI_CS_BIT_CNT_IN_LAST_BYTE_MASK                                        0x3800
#define SI_CS_BIT_CNT_IN_LAST_BYTE_GET(x)                                      (((x) & SI_CS_BIT_CNT_IN_LAST_BYTE_MASK) >> SI_CS_BIT_CNT_IN_LAST_BYTE_LSB)
#define SI_CS_BIT_CNT_IN_LAST_BYTE_SET(x)                                      (((0 | (x)) << SI_CS_BIT_CNT_IN_LAST_BYTE_LSB) & SI_CS_BIT_CNT_IN_LAST_BYTE_MASK)
#define SI_CS_BIT_CNT_IN_LAST_BYTE_RESET                                       0x0
#define SI_CS_DONE_ERR_LSB                                                     10
#define SI_CS_DONE_ERR_MSB                                                     10
#define SI_CS_DONE_ERR_MASK                                                    0x400
#define SI_CS_DONE_ERR_GET(x)                                                  (((x) & SI_CS_DONE_ERR_MASK) >> SI_CS_DONE_ERR_LSB)
#define SI_CS_DONE_ERR_SET(x)                                                  (((0 | (x)) << SI_CS_DONE_ERR_LSB) & SI_CS_DONE_ERR_MASK)
#define SI_CS_DONE_ERR_RESET                                                   0x0
#define SI_CS_DONE_INT_LSB                                                     9
#define SI_CS_DONE_INT_MSB                                                     9
#define SI_CS_DONE_INT_MASK                                                    0x200
#define SI_CS_DONE_INT_GET(x)                                                  (((x) & SI_CS_DONE_INT_MASK) >> SI_CS_DONE_INT_LSB)
#define SI_CS_DONE_INT_SET(x)                                                  (((0 | (x)) << SI_CS_DONE_INT_LSB) & SI_CS_DONE_INT_MASK)
#define SI_CS_DONE_INT_RESET                                                   0x0
#define SI_CS_START_LSB                                                        8
#define SI_CS_START_MSB                                                        8
#define SI_CS_START_MASK                                                       0x100
#define SI_CS_START_GET(x)                                                     (((x) & SI_CS_START_MASK) >> SI_CS_START_LSB)
#define SI_CS_START_SET(x)                                                     (((0 | (x)) << SI_CS_START_LSB) & SI_CS_START_MASK)
#define SI_CS_START_RESET                                                      0x0
#define SI_CS_RX_CNT_LSB                                                       4
#define SI_CS_RX_CNT_MSB                                                       7
#define SI_CS_RX_CNT_MASK                                                      0xf0
#define SI_CS_RX_CNT_GET(x)                                                    (((x) & SI_CS_RX_CNT_MASK) >> SI_CS_RX_CNT_LSB)
#define SI_CS_RX_CNT_SET(x)                                                    (((0 | (x)) << SI_CS_RX_CNT_LSB) & SI_CS_RX_CNT_MASK)
#define SI_CS_RX_CNT_RESET                                                     0x0
#define SI_CS_TX_CNT_LSB                                                       0
#define SI_CS_TX_CNT_MSB                                                       3
#define SI_CS_TX_CNT_MASK                                                      0xf
#define SI_CS_TX_CNT_GET(x)                                                    (((x) & SI_CS_TX_CNT_MASK) >> SI_CS_TX_CNT_LSB)
#define SI_CS_TX_CNT_SET(x)                                                    (((0 | (x)) << SI_CS_TX_CNT_LSB) & SI_CS_TX_CNT_MASK)
#define SI_CS_TX_CNT_RESET                                                     0x0
#define SI_CS_ADDRESS                                                          (0x4 + __SI_REG_BASE_ADDRESS)
#define SI_CS_RSTMASK                                                          0x3fff
#define SI_CS_RESET                                                            0x0

// 0x8 (SI_TX_DATA0)
#define SI_TX_DATA0_DATA3_LSB                                                  24
#define SI_TX_DATA0_DATA3_MSB                                                  31
#define SI_TX_DATA0_DATA3_MASK                                                 0xff000000
#define SI_TX_DATA0_DATA3_GET(x)                                               (((x) & SI_TX_DATA0_DATA3_MASK) >> SI_TX_DATA0_DATA3_LSB)
#define SI_TX_DATA0_DATA3_SET(x)                                               (((0 | (x)) << SI_TX_DATA0_DATA3_LSB) & SI_TX_DATA0_DATA3_MASK)
#define SI_TX_DATA0_DATA3_RESET                                                0x0
#define SI_TX_DATA0_DATA2_LSB                                                  16
#define SI_TX_DATA0_DATA2_MSB                                                  23
#define SI_TX_DATA0_DATA2_MASK                                                 0xff0000
#define SI_TX_DATA0_DATA2_GET(x)                                               (((x) & SI_TX_DATA0_DATA2_MASK) >> SI_TX_DATA0_DATA2_LSB)
#define SI_TX_DATA0_DATA2_SET(x)                                               (((0 | (x)) << SI_TX_DATA0_DATA2_LSB) & SI_TX_DATA0_DATA2_MASK)
#define SI_TX_DATA0_DATA2_RESET                                                0x0
#define SI_TX_DATA0_DATA1_LSB                                                  8
#define SI_TX_DATA0_DATA1_MSB                                                  15
#define SI_TX_DATA0_DATA1_MASK                                                 0xff00
#define SI_TX_DATA0_DATA1_GET(x)                                               (((x) & SI_TX_DATA0_DATA1_MASK) >> SI_TX_DATA0_DATA1_LSB)
#define SI_TX_DATA0_DATA1_SET(x)                                               (((0 | (x)) << SI_TX_DATA0_DATA1_LSB) & SI_TX_DATA0_DATA1_MASK)
#define SI_TX_DATA0_DATA1_RESET                                                0x0
#define SI_TX_DATA0_DATA0_LSB                                                  0
#define SI_TX_DATA0_DATA0_MSB                                                  7
#define SI_TX_DATA0_DATA0_MASK                                                 0xff
#define SI_TX_DATA0_DATA0_GET(x)                                               (((x) & SI_TX_DATA0_DATA0_MASK) >> SI_TX_DATA0_DATA0_LSB)
#define SI_TX_DATA0_DATA0_SET(x)                                               (((0 | (x)) << SI_TX_DATA0_DATA0_LSB) & SI_TX_DATA0_DATA0_MASK)
#define SI_TX_DATA0_DATA0_RESET                                                0x0
#define SI_TX_DATA0_ADDRESS                                                    (0x8 + __SI_REG_BASE_ADDRESS)
#define SI_TX_DATA0_RSTMASK                                                    0xffffffff
#define SI_TX_DATA0_RESET                                                      0x0

// 0xc (SI_TX_DATA1)
#define SI_TX_DATA1_DATA7_LSB                                                  24
#define SI_TX_DATA1_DATA7_MSB                                                  31
#define SI_TX_DATA1_DATA7_MASK                                                 0xff000000
#define SI_TX_DATA1_DATA7_GET(x)                                               (((x) & SI_TX_DATA1_DATA7_MASK) >> SI_TX_DATA1_DATA7_LSB)
#define SI_TX_DATA1_DATA7_SET(x)                                               (((0 | (x)) << SI_TX_DATA1_DATA7_LSB) & SI_TX_DATA1_DATA7_MASK)
#define SI_TX_DATA1_DATA7_RESET                                                0x0
#define SI_TX_DATA1_DATA6_LSB                                                  16
#define SI_TX_DATA1_DATA6_MSB                                                  23
#define SI_TX_DATA1_DATA6_MASK                                                 0xff0000
#define SI_TX_DATA1_DATA6_GET(x)                                               (((x) & SI_TX_DATA1_DATA6_MASK) >> SI_TX_DATA1_DATA6_LSB)
#define SI_TX_DATA1_DATA6_SET(x)                                               (((0 | (x)) << SI_TX_DATA1_DATA6_LSB) & SI_TX_DATA1_DATA6_MASK)
#define SI_TX_DATA1_DATA6_RESET                                                0x0
#define SI_TX_DATA1_DATA5_LSB                                                  8
#define SI_TX_DATA1_DATA5_MSB                                                  15
#define SI_TX_DATA1_DATA5_MASK                                                 0xff00
#define SI_TX_DATA1_DATA5_GET(x)                                               (((x) & SI_TX_DATA1_DATA5_MASK) >> SI_TX_DATA1_DATA5_LSB)
#define SI_TX_DATA1_DATA5_SET(x)                                               (((0 | (x)) << SI_TX_DATA1_DATA5_LSB) & SI_TX_DATA1_DATA5_MASK)
#define SI_TX_DATA1_DATA5_RESET                                                0x0
#define SI_TX_DATA1_DATA4_LSB                                                  0
#define SI_TX_DATA1_DATA4_MSB                                                  7
#define SI_TX_DATA1_DATA4_MASK                                                 0xff
#define SI_TX_DATA1_DATA4_GET(x)                                               (((x) & SI_TX_DATA1_DATA4_MASK) >> SI_TX_DATA1_DATA4_LSB)
#define SI_TX_DATA1_DATA4_SET(x)                                               (((0 | (x)) << SI_TX_DATA1_DATA4_LSB) & SI_TX_DATA1_DATA4_MASK)
#define SI_TX_DATA1_DATA4_RESET                                                0x0
#define SI_TX_DATA1_ADDRESS                                                    (0xc + __SI_REG_BASE_ADDRESS)
#define SI_TX_DATA1_RSTMASK                                                    0xffffffff
#define SI_TX_DATA1_RESET                                                      0x0

// 0x10 (SI_RX_DATA0)
#define SI_RX_DATA0_DATA3_LSB                                                  24
#define SI_RX_DATA0_DATA3_MSB                                                  31
#define SI_RX_DATA0_DATA3_MASK                                                 0xff000000
#define SI_RX_DATA0_DATA3_GET(x)                                               (((x) & SI_RX_DATA0_DATA3_MASK) >> SI_RX_DATA0_DATA3_LSB)
#define SI_RX_DATA0_DATA3_SET(x)                                               (((0 | (x)) << SI_RX_DATA0_DATA3_LSB) & SI_RX_DATA0_DATA3_MASK)
#define SI_RX_DATA0_DATA3_RESET                                                0x0
#define SI_RX_DATA0_DATA2_LSB                                                  16
#define SI_RX_DATA0_DATA2_MSB                                                  23
#define SI_RX_DATA0_DATA2_MASK                                                 0xff0000
#define SI_RX_DATA0_DATA2_GET(x)                                               (((x) & SI_RX_DATA0_DATA2_MASK) >> SI_RX_DATA0_DATA2_LSB)
#define SI_RX_DATA0_DATA2_SET(x)                                               (((0 | (x)) << SI_RX_DATA0_DATA2_LSB) & SI_RX_DATA0_DATA2_MASK)
#define SI_RX_DATA0_DATA2_RESET                                                0x0
#define SI_RX_DATA0_DATA1_LSB                                                  8
#define SI_RX_DATA0_DATA1_MSB                                                  15
#define SI_RX_DATA0_DATA1_MASK                                                 0xff00
#define SI_RX_DATA0_DATA1_GET(x)                                               (((x) & SI_RX_DATA0_DATA1_MASK) >> SI_RX_DATA0_DATA1_LSB)
#define SI_RX_DATA0_DATA1_SET(x)                                               (((0 | (x)) << SI_RX_DATA0_DATA1_LSB) & SI_RX_DATA0_DATA1_MASK)
#define SI_RX_DATA0_DATA1_RESET                                                0x0
#define SI_RX_DATA0_DATA0_LSB                                                  0
#define SI_RX_DATA0_DATA0_MSB                                                  7
#define SI_RX_DATA0_DATA0_MASK                                                 0xff
#define SI_RX_DATA0_DATA0_GET(x)                                               (((x) & SI_RX_DATA0_DATA0_MASK) >> SI_RX_DATA0_DATA0_LSB)
#define SI_RX_DATA0_DATA0_SET(x)                                               (((0 | (x)) << SI_RX_DATA0_DATA0_LSB) & SI_RX_DATA0_DATA0_MASK)
#define SI_RX_DATA0_DATA0_RESET                                                0x0
#define SI_RX_DATA0_ADDRESS                                                    (0x10 + __SI_REG_BASE_ADDRESS)
#define SI_RX_DATA0_RSTMASK                                                    0xffffffff
#define SI_RX_DATA0_RESET                                                      0x0

// 0x14 (SI_RX_DATA1)
#define SI_RX_DATA1_DATA7_LSB                                                  24
#define SI_RX_DATA1_DATA7_MSB                                                  31
#define SI_RX_DATA1_DATA7_MASK                                                 0xff000000
#define SI_RX_DATA1_DATA7_GET(x)                                               (((x) & SI_RX_DATA1_DATA7_MASK) >> SI_RX_DATA1_DATA7_LSB)
#define SI_RX_DATA1_DATA7_SET(x)                                               (((0 | (x)) << SI_RX_DATA1_DATA7_LSB) & SI_RX_DATA1_DATA7_MASK)
#define SI_RX_DATA1_DATA7_RESET                                                0x0
#define SI_RX_DATA1_DATA6_LSB                                                  16
#define SI_RX_DATA1_DATA6_MSB                                                  23
#define SI_RX_DATA1_DATA6_MASK                                                 0xff0000
#define SI_RX_DATA1_DATA6_GET(x)                                               (((x) & SI_RX_DATA1_DATA6_MASK) >> SI_RX_DATA1_DATA6_LSB)
#define SI_RX_DATA1_DATA6_SET(x)                                               (((0 | (x)) << SI_RX_DATA1_DATA6_LSB) & SI_RX_DATA1_DATA6_MASK)
#define SI_RX_DATA1_DATA6_RESET                                                0x0
#define SI_RX_DATA1_DATA5_LSB                                                  8
#define SI_RX_DATA1_DATA5_MSB                                                  15
#define SI_RX_DATA1_DATA5_MASK                                                 0xff00
#define SI_RX_DATA1_DATA5_GET(x)                                               (((x) & SI_RX_DATA1_DATA5_MASK) >> SI_RX_DATA1_DATA5_LSB)
#define SI_RX_DATA1_DATA5_SET(x)                                               (((0 | (x)) << SI_RX_DATA1_DATA5_LSB) & SI_RX_DATA1_DATA5_MASK)
#define SI_RX_DATA1_DATA5_RESET                                                0x0
#define SI_RX_DATA1_DATA4_LSB                                                  0
#define SI_RX_DATA1_DATA4_MSB                                                  7
#define SI_RX_DATA1_DATA4_MASK                                                 0xff
#define SI_RX_DATA1_DATA4_GET(x)                                               (((x) & SI_RX_DATA1_DATA4_MASK) >> SI_RX_DATA1_DATA4_LSB)
#define SI_RX_DATA1_DATA4_SET(x)                                               (((0 | (x)) << SI_RX_DATA1_DATA4_LSB) & SI_RX_DATA1_DATA4_MASK)
#define SI_RX_DATA1_DATA4_RESET                                                0x0
#define SI_RX_DATA1_ADDRESS                                                    (0x14 + __SI_REG_BASE_ADDRESS)
#define SI_RX_DATA1_RSTMASK                                                    0xffffffff
#define SI_RX_DATA1_RESET                                                      0x0



#endif /* _SI_REG_H_ */
