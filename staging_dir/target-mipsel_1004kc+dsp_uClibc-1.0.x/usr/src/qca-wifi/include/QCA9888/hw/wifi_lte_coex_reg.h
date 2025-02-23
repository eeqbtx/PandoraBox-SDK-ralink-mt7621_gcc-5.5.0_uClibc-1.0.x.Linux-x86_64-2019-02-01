/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */
#ifndef _WIFI_LTE_COEX_REG_H_
#define _WIFI_LTE_COEX_REG_H_


#ifndef __WIFI_LTE_COEX_REG_BASE_ADDRESS
#define __WIFI_LTE_COEX_REG_BASE_ADDRESS (0x43800)
#endif


// 0x0 (LTE_COEX_CTRL)
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_LSB                               8
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_MSB                               15
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_MASK                              0xff00
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_GET(x)                            (((x) & LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_MASK) >> LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_LSB)
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_SET(x)                            (((0 | (x)) << LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_LSB) & LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_MASK)
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_DELAY_RESET                             0x40
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_LSB                                5
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_MSB                                5
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_MASK                               0x20
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_GET(x)                             (((x) & LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_MASK) >> LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_LSB)
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_SET(x)                             (((0 | (x)) << LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_LSB) & LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_MASK)
#define LTE_COEX_CTRL_FORCE_WAIT_BA_DISABLE_RESET                              0x0
#define LTE_COEX_CTRL_BT_TX_ENABLE_LSB                                         4
#define LTE_COEX_CTRL_BT_TX_ENABLE_MSB                                         4
#define LTE_COEX_CTRL_BT_TX_ENABLE_MASK                                        0x10
#define LTE_COEX_CTRL_BT_TX_ENABLE_GET(x)                                      (((x) & LTE_COEX_CTRL_BT_TX_ENABLE_MASK) >> LTE_COEX_CTRL_BT_TX_ENABLE_LSB)
#define LTE_COEX_CTRL_BT_TX_ENABLE_SET(x)                                      (((0 | (x)) << LTE_COEX_CTRL_BT_TX_ENABLE_LSB) & LTE_COEX_CTRL_BT_TX_ENABLE_MASK)
#define LTE_COEX_CTRL_BT_TX_ENABLE_RESET                                       0x0
#define LTE_COEX_CTRL_BT_TX_LSB                                                3
#define LTE_COEX_CTRL_BT_TX_MSB                                                3
#define LTE_COEX_CTRL_BT_TX_MASK                                               0x8
#define LTE_COEX_CTRL_BT_TX_GET(x)                                             (((x) & LTE_COEX_CTRL_BT_TX_MASK) >> LTE_COEX_CTRL_BT_TX_LSB)
#define LTE_COEX_CTRL_BT_TX_SET(x)                                             (((0 | (x)) << LTE_COEX_CTRL_BT_TX_LSB) & LTE_COEX_CTRL_BT_TX_MASK)
#define LTE_COEX_CTRL_BT_TX_RESET                                              0x0
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_LSB                                     2
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_MSB                                     2
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_MASK                                    0x4
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_GET(x)                                  (((x) & LTE_COEX_CTRL_AUTO_ACTIVE_MASK_MASK) >> LTE_COEX_CTRL_AUTO_ACTIVE_MASK_LSB)
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_SET(x)                                  (((0 | (x)) << LTE_COEX_CTRL_AUTO_ACTIVE_MASK_LSB) & LTE_COEX_CTRL_AUTO_ACTIVE_MASK_MASK)
#define LTE_COEX_CTRL_AUTO_ACTIVE_MASK_RESET                                   0x0
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_LSB                                      1
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_MSB                                      1
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_MASK                                     0x2
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_GET(x)                                   (((x) & LTE_COEX_CTRL_RX_GRANT_ENABLE_MASK) >> LTE_COEX_CTRL_RX_GRANT_ENABLE_LSB)
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_SET(x)                                   (((0 | (x)) << LTE_COEX_CTRL_RX_GRANT_ENABLE_LSB) & LTE_COEX_CTRL_RX_GRANT_ENABLE_MASK)
#define LTE_COEX_CTRL_RX_GRANT_ENABLE_RESET                                    0x0
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_LSB                                      0
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_MSB                                      0
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_MASK                                     0x1
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_GET(x)                                   (((x) & LTE_COEX_CTRL_TX_GRANT_ENABLE_MASK) >> LTE_COEX_CTRL_TX_GRANT_ENABLE_LSB)
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_SET(x)                                   (((0 | (x)) << LTE_COEX_CTRL_TX_GRANT_ENABLE_LSB) & LTE_COEX_CTRL_TX_GRANT_ENABLE_MASK)
#define LTE_COEX_CTRL_TX_GRANT_ENABLE_RESET                                    0x0
#define LTE_COEX_CTRL_ADDRESS                                                  (0x0 + __WIFI_LTE_COEX_REG_BASE_ADDRESS)
#define LTE_COEX_CTRL_RSTMASK                                                  0xff3f
#define LTE_COEX_CTRL_RESET                                                    0x4000



#endif /* _WIFI_LTE_COEX_REG_H_ */
