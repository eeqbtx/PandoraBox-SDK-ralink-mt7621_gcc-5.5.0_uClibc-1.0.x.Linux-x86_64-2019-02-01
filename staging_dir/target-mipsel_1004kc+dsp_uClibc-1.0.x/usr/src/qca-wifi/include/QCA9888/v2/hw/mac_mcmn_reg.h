/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _MAC_MCMN_REG_H_
#define _MAC_MCMN_REG_H_


#ifndef __MAC_MCMN_REG_BASE_ADDRESS
#define __MAC_MCMN_REG_BASE_ADDRESS (0x31000)
#endif


// 0x0 (MCMN_ISR_P)
#define MCMN_ISR_P_AMPI_LSB                                                    11
#define MCMN_ISR_P_AMPI_MSB                                                    11
#define MCMN_ISR_P_AMPI_MASK                                                   0x800
#define MCMN_ISR_P_AMPI_GET(x)                                                 (((x) & MCMN_ISR_P_AMPI_MASK) >> MCMN_ISR_P_AMPI_LSB)
#define MCMN_ISR_P_AMPI_SET(x)                                                 (((0 | (x)) << MCMN_ISR_P_AMPI_LSB) & MCMN_ISR_P_AMPI_MASK)
#define MCMN_ISR_P_AMPI_RESET                                                  0x0
#define MCMN_ISR_P_MXI_LSB                                                     10
#define MCMN_ISR_P_MXI_MSB                                                     10
#define MCMN_ISR_P_MXI_MASK                                                    0x400
#define MCMN_ISR_P_MXI_GET(x)                                                  (((x) & MCMN_ISR_P_MXI_MASK) >> MCMN_ISR_P_MXI_LSB)
#define MCMN_ISR_P_MXI_SET(x)                                                  (((0 | (x)) << MCMN_ISR_P_MXI_LSB) & MCMN_ISR_P_MXI_MASK)
#define MCMN_ISR_P_MXI_RESET                                                   0x0
#define MCMN_ISR_P_HWSCH2_LSB                                                  9
#define MCMN_ISR_P_HWSCH2_MSB                                                  9
#define MCMN_ISR_P_HWSCH2_MASK                                                 0x200
#define MCMN_ISR_P_HWSCH2_GET(x)                                               (((x) & MCMN_ISR_P_HWSCH2_MASK) >> MCMN_ISR_P_HWSCH2_LSB)
#define MCMN_ISR_P_HWSCH2_SET(x)                                               (((0 | (x)) << MCMN_ISR_P_HWSCH2_LSB) & MCMN_ISR_P_HWSCH2_MASK)
#define MCMN_ISR_P_HWSCH2_RESET                                                0x0
#define MCMN_ISR_P_HWSCH1_LSB                                                  8
#define MCMN_ISR_P_HWSCH1_MSB                                                  8
#define MCMN_ISR_P_HWSCH1_MASK                                                 0x100
#define MCMN_ISR_P_HWSCH1_GET(x)                                               (((x) & MCMN_ISR_P_HWSCH1_MASK) >> MCMN_ISR_P_HWSCH1_LSB)
#define MCMN_ISR_P_HWSCH1_SET(x)                                               (((0 | (x)) << MCMN_ISR_P_HWSCH1_LSB) & MCMN_ISR_P_HWSCH1_MASK)
#define MCMN_ISR_P_HWSCH1_RESET                                                0x0
#define MCMN_ISR_P_HWSCH0_LSB                                                  7
#define MCMN_ISR_P_HWSCH0_MSB                                                  7
#define MCMN_ISR_P_HWSCH0_MASK                                                 0x80
#define MCMN_ISR_P_HWSCH0_GET(x)                                               (((x) & MCMN_ISR_P_HWSCH0_MASK) >> MCMN_ISR_P_HWSCH0_LSB)
#define MCMN_ISR_P_HWSCH0_SET(x)                                               (((0 | (x)) << MCMN_ISR_P_HWSCH0_LSB) & MCMN_ISR_P_HWSCH0_MASK)
#define MCMN_ISR_P_HWSCH0_RESET                                                0x0
#define MCMN_ISR_P_PDG_LSB                                                     6
#define MCMN_ISR_P_PDG_MSB                                                     6
#define MCMN_ISR_P_PDG_MASK                                                    0x40
#define MCMN_ISR_P_PDG_GET(x)                                                  (((x) & MCMN_ISR_P_PDG_MASK) >> MCMN_ISR_P_PDG_LSB)
#define MCMN_ISR_P_PDG_SET(x)                                                  (((0 | (x)) << MCMN_ISR_P_PDG_LSB) & MCMN_ISR_P_PDG_MASK)
#define MCMN_ISR_P_PDG_RESET                                                   0x0
#define MCMN_ISR_P_RXPCU_LSB                                                   5
#define MCMN_ISR_P_RXPCU_MSB                                                   5
#define MCMN_ISR_P_RXPCU_MASK                                                  0x20
#define MCMN_ISR_P_RXPCU_GET(x)                                                (((x) & MCMN_ISR_P_RXPCU_MASK) >> MCMN_ISR_P_RXPCU_LSB)
#define MCMN_ISR_P_RXPCU_SET(x)                                                (((0 | (x)) << MCMN_ISR_P_RXPCU_LSB) & MCMN_ISR_P_RXPCU_MASK)
#define MCMN_ISR_P_RXPCU_RESET                                                 0x0
#define MCMN_ISR_P_TXPCU_LSB                                                   4
#define MCMN_ISR_P_TXPCU_MSB                                                   4
#define MCMN_ISR_P_TXPCU_MASK                                                  0x10
#define MCMN_ISR_P_TXPCU_GET(x)                                                (((x) & MCMN_ISR_P_TXPCU_MASK) >> MCMN_ISR_P_TXPCU_LSB)
#define MCMN_ISR_P_TXPCU_SET(x)                                                (((0 | (x)) << MCMN_ISR_P_TXPCU_LSB) & MCMN_ISR_P_TXPCU_MASK)
#define MCMN_ISR_P_TXPCU_RESET                                                 0x0
#define MCMN_ISR_P_RXDMA_LSB                                                   3
#define MCMN_ISR_P_RXDMA_MSB                                                   3
#define MCMN_ISR_P_RXDMA_MASK                                                  0x8
#define MCMN_ISR_P_RXDMA_GET(x)                                                (((x) & MCMN_ISR_P_RXDMA_MASK) >> MCMN_ISR_P_RXDMA_LSB)
#define MCMN_ISR_P_RXDMA_SET(x)                                                (((0 | (x)) << MCMN_ISR_P_RXDMA_LSB) & MCMN_ISR_P_RXDMA_MASK)
#define MCMN_ISR_P_RXDMA_RESET                                                 0x0
#define MCMN_ISR_P_TXDMA_LSB                                                   2
#define MCMN_ISR_P_TXDMA_MSB                                                   2
#define MCMN_ISR_P_TXDMA_MASK                                                  0x4
#define MCMN_ISR_P_TXDMA_GET(x)                                                (((x) & MCMN_ISR_P_TXDMA_MASK) >> MCMN_ISR_P_TXDMA_LSB)
#define MCMN_ISR_P_TXDMA_SET(x)                                                (((0 | (x)) << MCMN_ISR_P_TXDMA_LSB) & MCMN_ISR_P_TXDMA_MASK)
#define MCMN_ISR_P_TXDMA_RESET                                                 0x0
#define MCMN_ISR_P_CRYPTO_LSB                                                  1
#define MCMN_ISR_P_CRYPTO_MSB                                                  1
#define MCMN_ISR_P_CRYPTO_MASK                                                 0x2
#define MCMN_ISR_P_CRYPTO_GET(x)                                               (((x) & MCMN_ISR_P_CRYPTO_MASK) >> MCMN_ISR_P_CRYPTO_LSB)
#define MCMN_ISR_P_CRYPTO_SET(x)                                               (((0 | (x)) << MCMN_ISR_P_CRYPTO_LSB) & MCMN_ISR_P_CRYPTO_MASK)
#define MCMN_ISR_P_CRYPTO_RESET                                                0x0
#define MCMN_ISR_P_OLE_LSB                                                     0
#define MCMN_ISR_P_OLE_MSB                                                     0
#define MCMN_ISR_P_OLE_MASK                                                    0x1
#define MCMN_ISR_P_OLE_GET(x)                                                  (((x) & MCMN_ISR_P_OLE_MASK) >> MCMN_ISR_P_OLE_LSB)
#define MCMN_ISR_P_OLE_SET(x)                                                  (((0 | (x)) << MCMN_ISR_P_OLE_LSB) & MCMN_ISR_P_OLE_MASK)
#define MCMN_ISR_P_OLE_RESET                                                   0x0
#define MCMN_ISR_P_ADDRESS                                                     (0x0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_P_RSTMASK                                                     0xfff
#define MCMN_ISR_P_RESET                                                       0x0

// 0x4 (MCMN_ISR_S0)
#define MCMN_ISR_S0_PN_BITMAP_ERROR_LSB                                        12
#define MCMN_ISR_S0_PN_BITMAP_ERROR_MSB                                        12
#define MCMN_ISR_S0_PN_BITMAP_ERROR_MASK                                       0x1000
#define MCMN_ISR_S0_PN_BITMAP_ERROR_GET(x)                                     (((x) & MCMN_ISR_S0_PN_BITMAP_ERROR_MASK) >> MCMN_ISR_S0_PN_BITMAP_ERROR_LSB)
#define MCMN_ISR_S0_PN_BITMAP_ERROR_SET(x)                                     (((0 | (x)) << MCMN_ISR_S0_PN_BITMAP_ERROR_LSB) & MCMN_ISR_S0_PN_BITMAP_ERROR_MASK)
#define MCMN_ISR_S0_PN_BITMAP_ERROR_RESET                                      0x0
#define MCMN_ISR_S0_RX_WMAC_ERR_LSB                                            11
#define MCMN_ISR_S0_RX_WMAC_ERR_MSB                                            11
#define MCMN_ISR_S0_RX_WMAC_ERR_MASK                                           0x800
#define MCMN_ISR_S0_RX_WMAC_ERR_GET(x)                                         (((x) & MCMN_ISR_S0_RX_WMAC_ERR_MASK) >> MCMN_ISR_S0_RX_WMAC_ERR_LSB)
#define MCMN_ISR_S0_RX_WMAC_ERR_SET(x)                                         (((0 | (x)) << MCMN_ISR_S0_RX_WMAC_ERR_LSB) & MCMN_ISR_S0_RX_WMAC_ERR_MASK)
#define MCMN_ISR_S0_RX_WMAC_ERR_RESET                                          0x0
#define MCMN_ISR_S0_RX_ETH_ERR_LSB                                             10
#define MCMN_ISR_S0_RX_ETH_ERR_MSB                                             10
#define MCMN_ISR_S0_RX_ETH_ERR_MASK                                            0x400
#define MCMN_ISR_S0_RX_ETH_ERR_GET(x)                                          (((x) & MCMN_ISR_S0_RX_ETH_ERR_MASK) >> MCMN_ISR_S0_RX_ETH_ERR_LSB)
#define MCMN_ISR_S0_RX_ETH_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S0_RX_ETH_ERR_LSB) & MCMN_ISR_S0_RX_ETH_ERR_MASK)
#define MCMN_ISR_S0_RX_ETH_ERR_RESET                                           0x0
#define MCMN_ISR_S0_RX_MSDU_LEN_LSB                                            9
#define MCMN_ISR_S0_RX_MSDU_LEN_MSB                                            9
#define MCMN_ISR_S0_RX_MSDU_LEN_MASK                                           0x200
#define MCMN_ISR_S0_RX_MSDU_LEN_GET(x)                                         (((x) & MCMN_ISR_S0_RX_MSDU_LEN_MASK) >> MCMN_ISR_S0_RX_MSDU_LEN_LSB)
#define MCMN_ISR_S0_RX_MSDU_LEN_SET(x)                                         (((0 | (x)) << MCMN_ISR_S0_RX_MSDU_LEN_LSB) & MCMN_ISR_S0_RX_MSDU_LEN_MASK)
#define MCMN_ISR_S0_RX_MSDU_LEN_RESET                                          0x0
#define MCMN_ISR_S0_TX_ILLEGAL_LSB                                             8
#define MCMN_ISR_S0_TX_ILLEGAL_MSB                                             8
#define MCMN_ISR_S0_TX_ILLEGAL_MASK                                            0x100
#define MCMN_ISR_S0_TX_ILLEGAL_GET(x)                                          (((x) & MCMN_ISR_S0_TX_ILLEGAL_MASK) >> MCMN_ISR_S0_TX_ILLEGAL_LSB)
#define MCMN_ISR_S0_TX_ILLEGAL_SET(x)                                          (((0 | (x)) << MCMN_ISR_S0_TX_ILLEGAL_LSB) & MCMN_ISR_S0_TX_ILLEGAL_MASK)
#define MCMN_ISR_S0_TX_ILLEGAL_RESET                                           0x0
#define MCMN_ISR_S0_TX_UNKN_LLC_LSB                                            7
#define MCMN_ISR_S0_TX_UNKN_LLC_MSB                                            7
#define MCMN_ISR_S0_TX_UNKN_LLC_MASK                                           0x80
#define MCMN_ISR_S0_TX_UNKN_LLC_GET(x)                                         (((x) & MCMN_ISR_S0_TX_UNKN_LLC_MASK) >> MCMN_ISR_S0_TX_UNKN_LLC_LSB)
#define MCMN_ISR_S0_TX_UNKN_LLC_SET(x)                                         (((0 | (x)) << MCMN_ISR_S0_TX_UNKN_LLC_LSB) & MCMN_ISR_S0_TX_UNKN_LLC_MASK)
#define MCMN_ISR_S0_TX_UNKN_LLC_RESET                                          0x0
#define MCMN_ISR_S0_TX_VLAN_LLC_LSB                                            6
#define MCMN_ISR_S0_TX_VLAN_LLC_MSB                                            6
#define MCMN_ISR_S0_TX_VLAN_LLC_MASK                                           0x40
#define MCMN_ISR_S0_TX_VLAN_LLC_GET(x)                                         (((x) & MCMN_ISR_S0_TX_VLAN_LLC_MASK) >> MCMN_ISR_S0_TX_VLAN_LLC_LSB)
#define MCMN_ISR_S0_TX_VLAN_LLC_SET(x)                                         (((0 | (x)) << MCMN_ISR_S0_TX_VLAN_LLC_LSB) & MCMN_ISR_S0_TX_VLAN_LLC_MASK)
#define MCMN_ISR_S0_TX_VLAN_LLC_RESET                                          0x0
#define MCMN_ISR_S0_WEP_KEY_ERR_LSB                                            5
#define MCMN_ISR_S0_WEP_KEY_ERR_MSB                                            5
#define MCMN_ISR_S0_WEP_KEY_ERR_MASK                                           0x20
#define MCMN_ISR_S0_WEP_KEY_ERR_GET(x)                                         (((x) & MCMN_ISR_S0_WEP_KEY_ERR_MASK) >> MCMN_ISR_S0_WEP_KEY_ERR_LSB)
#define MCMN_ISR_S0_WEP_KEY_ERR_SET(x)                                         (((0 | (x)) << MCMN_ISR_S0_WEP_KEY_ERR_LSB) & MCMN_ISR_S0_WEP_KEY_ERR_MASK)
#define MCMN_ISR_S0_WEP_KEY_ERR_RESET                                          0x0
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_LSB                                          4
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_MSB                                          4
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_MASK                                         0x10
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_GET(x)                                       (((x) & MCMN_ISR_S0_TX_SEQ_BM_ERR_MASK) >> MCMN_ISR_S0_TX_SEQ_BM_ERR_LSB)
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_SET(x)                                       (((0 | (x)) << MCMN_ISR_S0_TX_SEQ_BM_ERR_LSB) & MCMN_ISR_S0_TX_SEQ_BM_ERR_MASK)
#define MCMN_ISR_S0_TX_SEQ_BM_ERR_RESET                                        0x0
#define MCMN_ISR_S0_AMSDU_FRM_ERR_LSB                                          3
#define MCMN_ISR_S0_AMSDU_FRM_ERR_MSB                                          3
#define MCMN_ISR_S0_AMSDU_FRM_ERR_MASK                                         0x8
#define MCMN_ISR_S0_AMSDU_FRM_ERR_GET(x)                                       (((x) & MCMN_ISR_S0_AMSDU_FRM_ERR_MASK) >> MCMN_ISR_S0_AMSDU_FRM_ERR_LSB)
#define MCMN_ISR_S0_AMSDU_FRM_ERR_SET(x)                                       (((0 | (x)) << MCMN_ISR_S0_AMSDU_FRM_ERR_LSB) & MCMN_ISR_S0_AMSDU_FRM_ERR_MASK)
#define MCMN_ISR_S0_AMSDU_FRM_ERR_RESET                                        0x0
#define MCMN_ISR_S0_TX_TLV_ERR_LSB                                             2
#define MCMN_ISR_S0_TX_TLV_ERR_MSB                                             2
#define MCMN_ISR_S0_TX_TLV_ERR_MASK                                            0x4
#define MCMN_ISR_S0_TX_TLV_ERR_GET(x)                                          (((x) & MCMN_ISR_S0_TX_TLV_ERR_MASK) >> MCMN_ISR_S0_TX_TLV_ERR_LSB)
#define MCMN_ISR_S0_TX_TLV_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S0_TX_TLV_ERR_LSB) & MCMN_ISR_S0_TX_TLV_ERR_MASK)
#define MCMN_ISR_S0_TX_TLV_ERR_RESET                                           0x0
#define MCMN_ISR_S0_RX_TLV_ERR_LSB                                             1
#define MCMN_ISR_S0_RX_TLV_ERR_MSB                                             1
#define MCMN_ISR_S0_RX_TLV_ERR_MASK                                            0x2
#define MCMN_ISR_S0_RX_TLV_ERR_GET(x)                                          (((x) & MCMN_ISR_S0_RX_TLV_ERR_MASK) >> MCMN_ISR_S0_RX_TLV_ERR_LSB)
#define MCMN_ISR_S0_RX_TLV_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S0_RX_TLV_ERR_LSB) & MCMN_ISR_S0_RX_TLV_ERR_MASK)
#define MCMN_ISR_S0_RX_TLV_ERR_RESET                                           0x0
#define MCMN_ISR_S0_WDOG_TOUT_LSB                                              0
#define MCMN_ISR_S0_WDOG_TOUT_MSB                                              0
#define MCMN_ISR_S0_WDOG_TOUT_MASK                                             0x1
#define MCMN_ISR_S0_WDOG_TOUT_GET(x)                                           (((x) & MCMN_ISR_S0_WDOG_TOUT_MASK) >> MCMN_ISR_S0_WDOG_TOUT_LSB)
#define MCMN_ISR_S0_WDOG_TOUT_SET(x)                                           (((0 | (x)) << MCMN_ISR_S0_WDOG_TOUT_LSB) & MCMN_ISR_S0_WDOG_TOUT_MASK)
#define MCMN_ISR_S0_WDOG_TOUT_RESET                                            0x0
#define MCMN_ISR_S0_ADDRESS                                                    (0x4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S0_RSTMASK                                                    0x1fff
#define MCMN_ISR_S0_RESET                                                      0x0

// 0x8 (MCMN_ISR_S1)
#define MCMN_ISR_S1_TX_FLUSH_REQ_LSB                                           6
#define MCMN_ISR_S1_TX_FLUSH_REQ_MSB                                           6
#define MCMN_ISR_S1_TX_FLUSH_REQ_MASK                                          0x40
#define MCMN_ISR_S1_TX_FLUSH_REQ_GET(x)                                        (((x) & MCMN_ISR_S1_TX_FLUSH_REQ_MASK) >> MCMN_ISR_S1_TX_FLUSH_REQ_LSB)
#define MCMN_ISR_S1_TX_FLUSH_REQ_SET(x)                                        (((0 | (x)) << MCMN_ISR_S1_TX_FLUSH_REQ_LSB) & MCMN_ISR_S1_TX_FLUSH_REQ_MASK)
#define MCMN_ISR_S1_TX_FLUSH_REQ_RESET                                         0x0
#define MCMN_ISR_S1_RX_ABORT_LSB                                               5
#define MCMN_ISR_S1_RX_ABORT_MSB                                               5
#define MCMN_ISR_S1_RX_ABORT_MASK                                              0x20
#define MCMN_ISR_S1_RX_ABORT_GET(x)                                            (((x) & MCMN_ISR_S1_RX_ABORT_MASK) >> MCMN_ISR_S1_RX_ABORT_LSB)
#define MCMN_ISR_S1_RX_ABORT_SET(x)                                            (((0 | (x)) << MCMN_ISR_S1_RX_ABORT_LSB) & MCMN_ISR_S1_RX_ABORT_MASK)
#define MCMN_ISR_S1_RX_ABORT_RESET                                             0x0
#define MCMN_ISR_S1_TX_ABORT_LSB                                               4
#define MCMN_ISR_S1_TX_ABORT_MSB                                               4
#define MCMN_ISR_S1_TX_ABORT_MASK                                              0x10
#define MCMN_ISR_S1_TX_ABORT_GET(x)                                            (((x) & MCMN_ISR_S1_TX_ABORT_MASK) >> MCMN_ISR_S1_TX_ABORT_LSB)
#define MCMN_ISR_S1_TX_ABORT_SET(x)                                            (((0 | (x)) << MCMN_ISR_S1_TX_ABORT_LSB) & MCMN_ISR_S1_TX_ABORT_MASK)
#define MCMN_ISR_S1_TX_ABORT_RESET                                             0x0
#define MCMN_ISR_S1_DECRPT_ERR_LSB                                             3
#define MCMN_ISR_S1_DECRPT_ERR_MSB                                             3
#define MCMN_ISR_S1_DECRPT_ERR_MASK                                            0x8
#define MCMN_ISR_S1_DECRPT_ERR_GET(x)                                          (((x) & MCMN_ISR_S1_DECRPT_ERR_MASK) >> MCMN_ISR_S1_DECRPT_ERR_LSB)
#define MCMN_ISR_S1_DECRPT_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S1_DECRPT_ERR_LSB) & MCMN_ISR_S1_DECRPT_ERR_MASK)
#define MCMN_ISR_S1_DECRPT_ERR_RESET                                           0x0
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_LSB                                         2
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_MSB                                         2
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_MASK                                        0x4
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_GET(x)                                      (((x) & MCMN_ISR_S1_RX_TLV_OUT_SEQ_MASK) >> MCMN_ISR_S1_RX_TLV_OUT_SEQ_LSB)
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_SET(x)                                      (((0 | (x)) << MCMN_ISR_S1_RX_TLV_OUT_SEQ_LSB) & MCMN_ISR_S1_RX_TLV_OUT_SEQ_MASK)
#define MCMN_ISR_S1_RX_TLV_OUT_SEQ_RESET                                       0x0
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_LSB                                         1
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_MSB                                         1
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_MASK                                        0x2
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_GET(x)                                      (((x) & MCMN_ISR_S1_TX_TLV_OUT_SEQ_MASK) >> MCMN_ISR_S1_TX_TLV_OUT_SEQ_LSB)
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_SET(x)                                      (((0 | (x)) << MCMN_ISR_S1_TX_TLV_OUT_SEQ_LSB) & MCMN_ISR_S1_TX_TLV_OUT_SEQ_MASK)
#define MCMN_ISR_S1_TX_TLV_OUT_SEQ_RESET                                       0x0
#define MCMN_ISR_S1_CRYP_WD_TMOUT_LSB                                          0
#define MCMN_ISR_S1_CRYP_WD_TMOUT_MSB                                          0
#define MCMN_ISR_S1_CRYP_WD_TMOUT_MASK                                         0x1
#define MCMN_ISR_S1_CRYP_WD_TMOUT_GET(x)                                       (((x) & MCMN_ISR_S1_CRYP_WD_TMOUT_MASK) >> MCMN_ISR_S1_CRYP_WD_TMOUT_LSB)
#define MCMN_ISR_S1_CRYP_WD_TMOUT_SET(x)                                       (((0 | (x)) << MCMN_ISR_S1_CRYP_WD_TMOUT_LSB) & MCMN_ISR_S1_CRYP_WD_TMOUT_MASK)
#define MCMN_ISR_S1_CRYP_WD_TMOUT_RESET                                        0x0
#define MCMN_ISR_S1_ADDRESS                                                    (0x8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S1_RSTMASK                                                    0x7f
#define MCMN_ISR_S1_RESET                                                      0x0

// 0xc (MCMN_ISR_S2)
#define MCMN_ISR_S2_AXI_TMOUT_LSB                                              9
#define MCMN_ISR_S2_AXI_TMOUT_MSB                                              9
#define MCMN_ISR_S2_AXI_TMOUT_MASK                                             0x200
#define MCMN_ISR_S2_AXI_TMOUT_GET(x)                                           (((x) & MCMN_ISR_S2_AXI_TMOUT_MASK) >> MCMN_ISR_S2_AXI_TMOUT_LSB)
#define MCMN_ISR_S2_AXI_TMOUT_SET(x)                                           (((0 | (x)) << MCMN_ISR_S2_AXI_TMOUT_LSB) & MCMN_ISR_S2_AXI_TMOUT_MASK)
#define MCMN_ISR_S2_AXI_TMOUT_RESET                                            0x0
#define MCMN_ISR_S2_OLE_RDY_TMOUT_LSB                                          8
#define MCMN_ISR_S2_OLE_RDY_TMOUT_MSB                                          8
#define MCMN_ISR_S2_OLE_RDY_TMOUT_MASK                                         0x100
#define MCMN_ISR_S2_OLE_RDY_TMOUT_GET(x)                                       (((x) & MCMN_ISR_S2_OLE_RDY_TMOUT_MASK) >> MCMN_ISR_S2_OLE_RDY_TMOUT_LSB)
#define MCMN_ISR_S2_OLE_RDY_TMOUT_SET(x)                                       (((0 | (x)) << MCMN_ISR_S2_OLE_RDY_TMOUT_LSB) & MCMN_ISR_S2_OLE_RDY_TMOUT_MASK)
#define MCMN_ISR_S2_OLE_RDY_TMOUT_RESET                                        0x0
#define MCMN_ISR_S2_UNEX_NUL_PTR_LSB                                           7
#define MCMN_ISR_S2_UNEX_NUL_PTR_MSB                                           7
#define MCMN_ISR_S2_UNEX_NUL_PTR_MASK                                          0x80
#define MCMN_ISR_S2_UNEX_NUL_PTR_GET(x)                                        (((x) & MCMN_ISR_S2_UNEX_NUL_PTR_MASK) >> MCMN_ISR_S2_UNEX_NUL_PTR_LSB)
#define MCMN_ISR_S2_UNEX_NUL_PTR_SET(x)                                        (((0 | (x)) << MCMN_ISR_S2_UNEX_NUL_PTR_LSB) & MCMN_ISR_S2_UNEX_NUL_PTR_MASK)
#define MCMN_ISR_S2_UNEX_NUL_PTR_RESET                                         0x0
#define MCMN_ISR_S2_WDG_TMOUT_LSB                                              6
#define MCMN_ISR_S2_WDG_TMOUT_MSB                                              6
#define MCMN_ISR_S2_WDG_TMOUT_MASK                                             0x40
#define MCMN_ISR_S2_WDG_TMOUT_GET(x)                                           (((x) & MCMN_ISR_S2_WDG_TMOUT_MASK) >> MCMN_ISR_S2_WDG_TMOUT_LSB)
#define MCMN_ISR_S2_WDG_TMOUT_SET(x)                                           (((0 | (x)) << MCMN_ISR_S2_WDG_TMOUT_LSB) & MCMN_ISR_S2_WDG_TMOUT_MASK)
#define MCMN_ISR_S2_WDG_TMOUT_RESET                                            0x0
#define MCMN_ISR_S2_INVA_IDX_LSB                                               5
#define MCMN_ISR_S2_INVA_IDX_MSB                                               5
#define MCMN_ISR_S2_INVA_IDX_MASK                                              0x20
#define MCMN_ISR_S2_INVA_IDX_GET(x)                                            (((x) & MCMN_ISR_S2_INVA_IDX_MASK) >> MCMN_ISR_S2_INVA_IDX_LSB)
#define MCMN_ISR_S2_INVA_IDX_SET(x)                                            (((0 | (x)) << MCMN_ISR_S2_INVA_IDX_LSB) & MCMN_ISR_S2_INVA_IDX_MASK)
#define MCMN_ISR_S2_INVA_IDX_RESET                                             0x0
#define MCMN_ISR_S2_MISSIN_TLV_LSB                                             3
#define MCMN_ISR_S2_MISSIN_TLV_MSB                                             3
#define MCMN_ISR_S2_MISSIN_TLV_MASK                                            0x8
#define MCMN_ISR_S2_MISSIN_TLV_GET(x)                                          (((x) & MCMN_ISR_S2_MISSIN_TLV_MASK) >> MCMN_ISR_S2_MISSIN_TLV_LSB)
#define MCMN_ISR_S2_MISSIN_TLV_SET(x)                                          (((0 | (x)) << MCMN_ISR_S2_MISSIN_TLV_LSB) & MCMN_ISR_S2_MISSIN_TLV_MASK)
#define MCMN_ISR_S2_MISSIN_TLV_RESET                                           0x0
#define MCMN_ISR_S2_UNEX_FES_LSB                                               2
#define MCMN_ISR_S2_UNEX_FES_MSB                                               2
#define MCMN_ISR_S2_UNEX_FES_MASK                                              0x4
#define MCMN_ISR_S2_UNEX_FES_GET(x)                                            (((x) & MCMN_ISR_S2_UNEX_FES_MASK) >> MCMN_ISR_S2_UNEX_FES_LSB)
#define MCMN_ISR_S2_UNEX_FES_SET(x)                                            (((0 | (x)) << MCMN_ISR_S2_UNEX_FES_LSB) & MCMN_ISR_S2_UNEX_FES_MASK)
#define MCMN_ISR_S2_UNEX_FES_RESET                                             0x0
#define MCMN_ISR_S2_INCOM_TLV_LSB                                              1
#define MCMN_ISR_S2_INCOM_TLV_MSB                                              1
#define MCMN_ISR_S2_INCOM_TLV_MASK                                             0x2
#define MCMN_ISR_S2_INCOM_TLV_GET(x)                                           (((x) & MCMN_ISR_S2_INCOM_TLV_MASK) >> MCMN_ISR_S2_INCOM_TLV_LSB)
#define MCMN_ISR_S2_INCOM_TLV_SET(x)                                           (((0 | (x)) << MCMN_ISR_S2_INCOM_TLV_LSB) & MCMN_ISR_S2_INCOM_TLV_MASK)
#define MCMN_ISR_S2_INCOM_TLV_RESET                                            0x0
#define MCMN_ISR_S2_TX_DMA_IDLE_LSB                                            0
#define MCMN_ISR_S2_TX_DMA_IDLE_MSB                                            0
#define MCMN_ISR_S2_TX_DMA_IDLE_MASK                                           0x1
#define MCMN_ISR_S2_TX_DMA_IDLE_GET(x)                                         (((x) & MCMN_ISR_S2_TX_DMA_IDLE_MASK) >> MCMN_ISR_S2_TX_DMA_IDLE_LSB)
#define MCMN_ISR_S2_TX_DMA_IDLE_SET(x)                                         (((0 | (x)) << MCMN_ISR_S2_TX_DMA_IDLE_LSB) & MCMN_ISR_S2_TX_DMA_IDLE_MASK)
#define MCMN_ISR_S2_TX_DMA_IDLE_RESET                                          0x0
#define MCMN_ISR_S2_ADDRESS                                                    (0xc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S2_RSTMASK                                                    0x3ef
#define MCMN_ISR_S2_RESET                                                      0x0

// 0x10 (MCMN_ISR_S3)
#define MCMN_ISR_S3_RXDMA_UAPSD_LSB                                            13
#define MCMN_ISR_S3_RXDMA_UAPSD_MSB                                            13
#define MCMN_ISR_S3_RXDMA_UAPSD_MASK                                           0x2000
#define MCMN_ISR_S3_RXDMA_UAPSD_GET(x)                                         (((x) & MCMN_ISR_S3_RXDMA_UAPSD_MASK) >> MCMN_ISR_S3_RXDMA_UAPSD_LSB)
#define MCMN_ISR_S3_RXDMA_UAPSD_SET(x)                                         (((0 | (x)) << MCMN_ISR_S3_RXDMA_UAPSD_LSB) & MCMN_ISR_S3_RXDMA_UAPSD_MASK)
#define MCMN_ISR_S3_RXDMA_UAPSD_RESET                                          0x0
#define MCMN_ISR_S3_RXDMA_RNG_LWM_LSB                                          9
#define MCMN_ISR_S3_RXDMA_RNG_LWM_MSB                                          12
#define MCMN_ISR_S3_RXDMA_RNG_LWM_MASK                                         0x1e00
#define MCMN_ISR_S3_RXDMA_RNG_LWM_GET(x)                                       (((x) & MCMN_ISR_S3_RXDMA_RNG_LWM_MASK) >> MCMN_ISR_S3_RXDMA_RNG_LWM_LSB)
#define MCMN_ISR_S3_RXDMA_RNG_LWM_SET(x)                                       (((0 | (x)) << MCMN_ISR_S3_RXDMA_RNG_LWM_LSB) & MCMN_ISR_S3_RXDMA_RNG_LWM_MASK)
#define MCMN_ISR_S3_RXDMA_RNG_LWM_RESET                                        0x0
#define MCMN_ISR_S3_TLV_FRME_ERR_LSB                                           8
#define MCMN_ISR_S3_TLV_FRME_ERR_MSB                                           8
#define MCMN_ISR_S3_TLV_FRME_ERR_MASK                                          0x100
#define MCMN_ISR_S3_TLV_FRME_ERR_GET(x)                                        (((x) & MCMN_ISR_S3_TLV_FRME_ERR_MASK) >> MCMN_ISR_S3_TLV_FRME_ERR_LSB)
#define MCMN_ISR_S3_TLV_FRME_ERR_SET(x)                                        (((0 | (x)) << MCMN_ISR_S3_TLV_FRME_ERR_LSB) & MCMN_ISR_S3_TLV_FRME_ERR_MASK)
#define MCMN_ISR_S3_TLV_FRME_ERR_RESET                                         0x0
#define MCMN_ISR_S3_TLV_SHORT_LSB                                              7
#define MCMN_ISR_S3_TLV_SHORT_MSB                                              7
#define MCMN_ISR_S3_TLV_SHORT_MASK                                             0x80
#define MCMN_ISR_S3_TLV_SHORT_GET(x)                                           (((x) & MCMN_ISR_S3_TLV_SHORT_MASK) >> MCMN_ISR_S3_TLV_SHORT_LSB)
#define MCMN_ISR_S3_TLV_SHORT_SET(x)                                           (((0 | (x)) << MCMN_ISR_S3_TLV_SHORT_LSB) & MCMN_ISR_S3_TLV_SHORT_MASK)
#define MCMN_ISR_S3_TLV_SHORT_RESET                                            0x0
#define MCMN_ISR_S3_INVAL_TAG_SEG_LSB                                          6
#define MCMN_ISR_S3_INVAL_TAG_SEG_MSB                                          6
#define MCMN_ISR_S3_INVAL_TAG_SEG_MASK                                         0x40
#define MCMN_ISR_S3_INVAL_TAG_SEG_GET(x)                                       (((x) & MCMN_ISR_S3_INVAL_TAG_SEG_MASK) >> MCMN_ISR_S3_INVAL_TAG_SEG_LSB)
#define MCMN_ISR_S3_INVAL_TAG_SEG_SET(x)                                       (((0 | (x)) << MCMN_ISR_S3_INVAL_TAG_SEG_LSB) & MCMN_ISR_S3_INVAL_TAG_SEG_MASK)
#define MCMN_ISR_S3_INVAL_TAG_SEG_RESET                                        0x0
#define MCMN_ISR_S3_INVAL_TAG_ID_LSB                                           5
#define MCMN_ISR_S3_INVAL_TAG_ID_MSB                                           5
#define MCMN_ISR_S3_INVAL_TAG_ID_MASK                                          0x20
#define MCMN_ISR_S3_INVAL_TAG_ID_GET(x)                                        (((x) & MCMN_ISR_S3_INVAL_TAG_ID_MASK) >> MCMN_ISR_S3_INVAL_TAG_ID_LSB)
#define MCMN_ISR_S3_INVAL_TAG_ID_SET(x)                                        (((0 | (x)) << MCMN_ISR_S3_INVAL_TAG_ID_LSB) & MCMN_ISR_S3_INVAL_TAG_ID_MASK)
#define MCMN_ISR_S3_INVAL_TAG_ID_RESET                                         0x0
#define MCMN_ISR_S3_NULL_RNG_MSK_LSB                                           4
#define MCMN_ISR_S3_NULL_RNG_MSK_MSB                                           4
#define MCMN_ISR_S3_NULL_RNG_MSK_MASK                                          0x10
#define MCMN_ISR_S3_NULL_RNG_MSK_GET(x)                                        (((x) & MCMN_ISR_S3_NULL_RNG_MSK_MASK) >> MCMN_ISR_S3_NULL_RNG_MSK_LSB)
#define MCMN_ISR_S3_NULL_RNG_MSK_SET(x)                                        (((0 | (x)) << MCMN_ISR_S3_NULL_RNG_MSK_LSB) & MCMN_ISR_S3_NULL_RNG_MSK_MASK)
#define MCMN_ISR_S3_NULL_RNG_MSK_RESET                                         0x0
#define MCMN_ISR_S3_MDAT_TLV_LSB                                               3
#define MCMN_ISR_S3_MDAT_TLV_MSB                                               3
#define MCMN_ISR_S3_MDAT_TLV_MASK                                              0x8
#define MCMN_ISR_S3_MDAT_TLV_GET(x)                                            (((x) & MCMN_ISR_S3_MDAT_TLV_MASK) >> MCMN_ISR_S3_MDAT_TLV_LSB)
#define MCMN_ISR_S3_MDAT_TLV_SET(x)                                            (((0 | (x)) << MCMN_ISR_S3_MDAT_TLV_LSB) & MCMN_ISR_S3_MDAT_TLV_MASK)
#define MCMN_ISR_S3_MDAT_TLV_RESET                                             0x0
#define MCMN_ISR_S3_NON_PKT_BUF_LSB                                            2
#define MCMN_ISR_S3_NON_PKT_BUF_MSB                                            2
#define MCMN_ISR_S3_NON_PKT_BUF_MASK                                           0x4
#define MCMN_ISR_S3_NON_PKT_BUF_GET(x)                                         (((x) & MCMN_ISR_S3_NON_PKT_BUF_MASK) >> MCMN_ISR_S3_NON_PKT_BUF_LSB)
#define MCMN_ISR_S3_NON_PKT_BUF_SET(x)                                         (((0 | (x)) << MCMN_ISR_S3_NON_PKT_BUF_LSB) & MCMN_ISR_S3_NON_PKT_BUF_MASK)
#define MCMN_ISR_S3_NON_PKT_BUF_RESET                                          0x0
#define MCMN_ISR_S3_RXDMA_WD_TOUT_LSB                                          1
#define MCMN_ISR_S3_RXDMA_WD_TOUT_MSB                                          1
#define MCMN_ISR_S3_RXDMA_WD_TOUT_MASK                                         0x2
#define MCMN_ISR_S3_RXDMA_WD_TOUT_GET(x)                                       (((x) & MCMN_ISR_S3_RXDMA_WD_TOUT_MASK) >> MCMN_ISR_S3_RXDMA_WD_TOUT_LSB)
#define MCMN_ISR_S3_RXDMA_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_ISR_S3_RXDMA_WD_TOUT_LSB) & MCMN_ISR_S3_RXDMA_WD_TOUT_MASK)
#define MCMN_ISR_S3_RXDMA_WD_TOUT_RESET                                        0x0
#define MCMN_ISR_S3_RXDMA_IDLE_LSB                                             0
#define MCMN_ISR_S3_RXDMA_IDLE_MSB                                             0
#define MCMN_ISR_S3_RXDMA_IDLE_MASK                                            0x1
#define MCMN_ISR_S3_RXDMA_IDLE_GET(x)                                          (((x) & MCMN_ISR_S3_RXDMA_IDLE_MASK) >> MCMN_ISR_S3_RXDMA_IDLE_LSB)
#define MCMN_ISR_S3_RXDMA_IDLE_SET(x)                                          (((0 | (x)) << MCMN_ISR_S3_RXDMA_IDLE_LSB) & MCMN_ISR_S3_RXDMA_IDLE_MASK)
#define MCMN_ISR_S3_RXDMA_IDLE_RESET                                           0x0
#define MCMN_ISR_S3_ADDRESS                                                    (0x10 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S3_RSTMASK                                                    0x3fff
#define MCMN_ISR_S3_RESET                                                      0x0

// 0x14 (MCMN_ISR_S4)
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_LSB                                     8
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_MSB                                     8
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_MASK                                    0x100
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_GET(x)                                  (((x) & MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_MASK) >> MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_LSB)
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_SET(x)                                  (((0 | (x)) << MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_LSB) & MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_MASK)
#define MCMN_ISR_S4_TXPCU_TX_PHY_ERROR_RESET                                   0x0
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB                             7
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_MSB                             7
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK                            0x80
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_GET(x)                          (((x) & MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK) >> MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB)
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_SET(x)                          (((0 | (x)) << MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB) & MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK)
#define MCMN_ISR_S4_TXPCU_RESPONSE_FRAME_ERROR_RESET                           0x0
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_LSB                                   6
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_MSB                                   6
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_MASK                                  0x40
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_GET(x)                                (((x) & MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_MASK) >> MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_LSB)
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_SET(x)                                (((0 | (x)) << MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_LSB) & MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_MASK)
#define MCMN_ISR_S4_TXPCU_RCVD_TLV_ABORT_RESET                                 0x0
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB                               5
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MSB                               5
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK                              0x20
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_GET(x)                            (((x) & MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK) >> MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB)
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_SET(x)                            (((0 | (x)) << MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB) & MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK)
#define MCMN_ISR_S4_TXPCU_REQD_TLVS_NOT_RCVD_RESET                             0x0
#define MCMN_ISR_S4_TXPCU_WD_TOUT_LSB                                          4
#define MCMN_ISR_S4_TXPCU_WD_TOUT_MSB                                          4
#define MCMN_ISR_S4_TXPCU_WD_TOUT_MASK                                         0x10
#define MCMN_ISR_S4_TXPCU_WD_TOUT_GET(x)                                       (((x) & MCMN_ISR_S4_TXPCU_WD_TOUT_MASK) >> MCMN_ISR_S4_TXPCU_WD_TOUT_LSB)
#define MCMN_ISR_S4_TXPCU_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_ISR_S4_TXPCU_WD_TOUT_LSB) & MCMN_ISR_S4_TXPCU_WD_TOUT_MASK)
#define MCMN_ISR_S4_TXPCU_WD_TOUT_RESET                                        0x0
#define MCMN_ISR_S4_BFEE_CV_TOUT_LSB                                           3
#define MCMN_ISR_S4_BFEE_CV_TOUT_MSB                                           3
#define MCMN_ISR_S4_BFEE_CV_TOUT_MASK                                          0x8
#define MCMN_ISR_S4_BFEE_CV_TOUT_GET(x)                                        (((x) & MCMN_ISR_S4_BFEE_CV_TOUT_MASK) >> MCMN_ISR_S4_BFEE_CV_TOUT_LSB)
#define MCMN_ISR_S4_BFEE_CV_TOUT_SET(x)                                        (((0 | (x)) << MCMN_ISR_S4_BFEE_CV_TOUT_LSB) & MCMN_ISR_S4_BFEE_CV_TOUT_MASK)
#define MCMN_ISR_S4_BFEE_CV_TOUT_RESET                                         0x0
#define MCMN_ISR_S4_DATA_URUN_LSB                                              2
#define MCMN_ISR_S4_DATA_URUN_MSB                                              2
#define MCMN_ISR_S4_DATA_URUN_MASK                                             0x4
#define MCMN_ISR_S4_DATA_URUN_GET(x)                                           (((x) & MCMN_ISR_S4_DATA_URUN_MASK) >> MCMN_ISR_S4_DATA_URUN_LSB)
#define MCMN_ISR_S4_DATA_URUN_SET(x)                                           (((0 | (x)) << MCMN_ISR_S4_DATA_URUN_LSB) & MCMN_ISR_S4_DATA_URUN_MASK)
#define MCMN_ISR_S4_DATA_URUN_RESET                                            0x0
#define MCMN_ISR_S4_RECD_GT_MPDU_LSB                                           1
#define MCMN_ISR_S4_RECD_GT_MPDU_MSB                                           1
#define MCMN_ISR_S4_RECD_GT_MPDU_MASK                                          0x2
#define MCMN_ISR_S4_RECD_GT_MPDU_GET(x)                                        (((x) & MCMN_ISR_S4_RECD_GT_MPDU_MASK) >> MCMN_ISR_S4_RECD_GT_MPDU_LSB)
#define MCMN_ISR_S4_RECD_GT_MPDU_SET(x)                                        (((0 | (x)) << MCMN_ISR_S4_RECD_GT_MPDU_LSB) & MCMN_ISR_S4_RECD_GT_MPDU_MASK)
#define MCMN_ISR_S4_RECD_GT_MPDU_RESET                                         0x0
#define MCMN_ISR_S4_RECD_LT_MPDU_LSB                                           0
#define MCMN_ISR_S4_RECD_LT_MPDU_MSB                                           0
#define MCMN_ISR_S4_RECD_LT_MPDU_MASK                                          0x1
#define MCMN_ISR_S4_RECD_LT_MPDU_GET(x)                                        (((x) & MCMN_ISR_S4_RECD_LT_MPDU_MASK) >> MCMN_ISR_S4_RECD_LT_MPDU_LSB)
#define MCMN_ISR_S4_RECD_LT_MPDU_SET(x)                                        (((0 | (x)) << MCMN_ISR_S4_RECD_LT_MPDU_LSB) & MCMN_ISR_S4_RECD_LT_MPDU_MASK)
#define MCMN_ISR_S4_RECD_LT_MPDU_RESET                                         0x0
#define MCMN_ISR_S4_ADDRESS                                                    (0x14 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S4_RSTMASK                                                    0x1ff
#define MCMN_ISR_S4_RESET                                                      0x0

// 0x18 (MCMN_ISR_S5)
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB                               17
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MSB                               17
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK                              0x20000
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_GET(x)                            (((x) & MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK) >> MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB)
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_SET(x)                            (((0 | (x)) << MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB) & MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK)
#define MCMN_ISR_S5_PHY_RXPCU_TLV_LENGTH_ERR_RESET                             0x0
#define MCMN_ISR_S5_RX_MAX_LENGTH_LSB                                          16
#define MCMN_ISR_S5_RX_MAX_LENGTH_MSB                                          16
#define MCMN_ISR_S5_RX_MAX_LENGTH_MASK                                         0x10000
#define MCMN_ISR_S5_RX_MAX_LENGTH_GET(x)                                       (((x) & MCMN_ISR_S5_RX_MAX_LENGTH_MASK) >> MCMN_ISR_S5_RX_MAX_LENGTH_LSB)
#define MCMN_ISR_S5_RX_MAX_LENGTH_SET(x)                                       (((0 | (x)) << MCMN_ISR_S5_RX_MAX_LENGTH_LSB) & MCMN_ISR_S5_RX_MAX_LENGTH_MASK)
#define MCMN_ISR_S5_RX_MAX_LENGTH_RESET                                        0x0
#define MCMN_ISR_S5_WDOG_TIMEOUT_LSB                                           15
#define MCMN_ISR_S5_WDOG_TIMEOUT_MSB                                           15
#define MCMN_ISR_S5_WDOG_TIMEOUT_MASK                                          0x8000
#define MCMN_ISR_S5_WDOG_TIMEOUT_GET(x)                                        (((x) & MCMN_ISR_S5_WDOG_TIMEOUT_MASK) >> MCMN_ISR_S5_WDOG_TIMEOUT_LSB)
#define MCMN_ISR_S5_WDOG_TIMEOUT_SET(x)                                        (((0 | (x)) << MCMN_ISR_S5_WDOG_TIMEOUT_LSB) & MCMN_ISR_S5_WDOG_TIMEOUT_MASK)
#define MCMN_ISR_S5_WDOG_TIMEOUT_RESET                                         0x0
#define MCMN_ISR_S5_MIB_COUNTER_LSB                                            14
#define MCMN_ISR_S5_MIB_COUNTER_MSB                                            14
#define MCMN_ISR_S5_MIB_COUNTER_MASK                                           0x4000
#define MCMN_ISR_S5_MIB_COUNTER_GET(x)                                         (((x) & MCMN_ISR_S5_MIB_COUNTER_MASK) >> MCMN_ISR_S5_MIB_COUNTER_LSB)
#define MCMN_ISR_S5_MIB_COUNTER_SET(x)                                         (((0 | (x)) << MCMN_ISR_S5_MIB_COUNTER_LSB) & MCMN_ISR_S5_MIB_COUNTER_MASK)
#define MCMN_ISR_S5_MIB_COUNTER_RESET                                          0x0
#define MCMN_ISR_S5_RX_OVFL_LSB                                                13
#define MCMN_ISR_S5_RX_OVFL_MSB                                                13
#define MCMN_ISR_S5_RX_OVFL_MASK                                               0x2000
#define MCMN_ISR_S5_RX_OVFL_GET(x)                                             (((x) & MCMN_ISR_S5_RX_OVFL_MASK) >> MCMN_ISR_S5_RX_OVFL_LSB)
#define MCMN_ISR_S5_RX_OVFL_SET(x)                                             (((0 | (x)) << MCMN_ISR_S5_RX_OVFL_LSB) & MCMN_ISR_S5_RX_OVFL_MASK)
#define MCMN_ISR_S5_RX_OVFL_RESET                                              0x0
#define MCMN_ISR_S5_CONFIG_PHY_ERR_LSB                                         12
#define MCMN_ISR_S5_CONFIG_PHY_ERR_MSB                                         12
#define MCMN_ISR_S5_CONFIG_PHY_ERR_MASK                                        0x1000
#define MCMN_ISR_S5_CONFIG_PHY_ERR_GET(x)                                      (((x) & MCMN_ISR_S5_CONFIG_PHY_ERR_MASK) >> MCMN_ISR_S5_CONFIG_PHY_ERR_LSB)
#define MCMN_ISR_S5_CONFIG_PHY_ERR_SET(x)                                      (((0 | (x)) << MCMN_ISR_S5_CONFIG_PHY_ERR_LSB) & MCMN_ISR_S5_CONFIG_PHY_ERR_MASK)
#define MCMN_ISR_S5_CONFIG_PHY_ERR_RESET                                       0x0
#define MCMN_ISR_S5_RX_DTIM_LSB                                                10
#define MCMN_ISR_S5_RX_DTIM_MSB                                                11
#define MCMN_ISR_S5_RX_DTIM_MASK                                               0xc00
#define MCMN_ISR_S5_RX_DTIM_GET(x)                                             (((x) & MCMN_ISR_S5_RX_DTIM_MASK) >> MCMN_ISR_S5_RX_DTIM_LSB)
#define MCMN_ISR_S5_RX_DTIM_SET(x)                                             (((0 | (x)) << MCMN_ISR_S5_RX_DTIM_LSB) & MCMN_ISR_S5_RX_DTIM_MASK)
#define MCMN_ISR_S5_RX_DTIM_RESET                                              0x0
#define MCMN_ISR_S5_RX_TIM_LSB                                                 8
#define MCMN_ISR_S5_RX_TIM_MSB                                                 9
#define MCMN_ISR_S5_RX_TIM_MASK                                                0x300
#define MCMN_ISR_S5_RX_TIM_GET(x)                                              (((x) & MCMN_ISR_S5_RX_TIM_MASK) >> MCMN_ISR_S5_RX_TIM_LSB)
#define MCMN_ISR_S5_RX_TIM_SET(x)                                              (((0 | (x)) << MCMN_ISR_S5_RX_TIM_LSB) & MCMN_ISR_S5_RX_TIM_MASK)
#define MCMN_ISR_S5_RX_TIM_RESET                                               0x0
#define MCMN_ISR_S5_RX_NOTIM_LSB                                               6
#define MCMN_ISR_S5_RX_NOTIM_MSB                                               7
#define MCMN_ISR_S5_RX_NOTIM_MASK                                              0xc0
#define MCMN_ISR_S5_RX_NOTIM_GET(x)                                            (((x) & MCMN_ISR_S5_RX_NOTIM_MASK) >> MCMN_ISR_S5_RX_NOTIM_LSB)
#define MCMN_ISR_S5_RX_NOTIM_SET(x)                                            (((0 | (x)) << MCMN_ISR_S5_RX_NOTIM_LSB) & MCMN_ISR_S5_RX_NOTIM_MASK)
#define MCMN_ISR_S5_RX_NOTIM_RESET                                             0x0
#define MCMN_ISR_S5_RSSI_LOW_LSB                                               4
#define MCMN_ISR_S5_RSSI_LOW_MSB                                               5
#define MCMN_ISR_S5_RSSI_LOW_MASK                                              0x30
#define MCMN_ISR_S5_RSSI_LOW_GET(x)                                            (((x) & MCMN_ISR_S5_RSSI_LOW_MASK) >> MCMN_ISR_S5_RSSI_LOW_LSB)
#define MCMN_ISR_S5_RSSI_LOW_SET(x)                                            (((0 | (x)) << MCMN_ISR_S5_RSSI_LOW_LSB) & MCMN_ISR_S5_RSSI_LOW_MASK)
#define MCMN_ISR_S5_RSSI_LOW_RESET                                             0x0
#define MCMN_ISR_S5_RSSI_HIGH_LSB                                              2
#define MCMN_ISR_S5_RSSI_HIGH_MSB                                              3
#define MCMN_ISR_S5_RSSI_HIGH_MASK                                             0xc
#define MCMN_ISR_S5_RSSI_HIGH_GET(x)                                           (((x) & MCMN_ISR_S5_RSSI_HIGH_MASK) >> MCMN_ISR_S5_RSSI_HIGH_LSB)
#define MCMN_ISR_S5_RSSI_HIGH_SET(x)                                           (((0 | (x)) << MCMN_ISR_S5_RSSI_HIGH_LSB) & MCMN_ISR_S5_RSSI_HIGH_MASK)
#define MCMN_ISR_S5_RSSI_HIGH_RESET                                            0x0
#define MCMN_ISR_S5_BCON_MISS_LSB                                              0
#define MCMN_ISR_S5_BCON_MISS_MSB                                              1
#define MCMN_ISR_S5_BCON_MISS_MASK                                             0x3
#define MCMN_ISR_S5_BCON_MISS_GET(x)                                           (((x) & MCMN_ISR_S5_BCON_MISS_MASK) >> MCMN_ISR_S5_BCON_MISS_LSB)
#define MCMN_ISR_S5_BCON_MISS_SET(x)                                           (((0 | (x)) << MCMN_ISR_S5_BCON_MISS_LSB) & MCMN_ISR_S5_BCON_MISS_MASK)
#define MCMN_ISR_S5_BCON_MISS_RESET                                            0x0
#define MCMN_ISR_S5_ADDRESS                                                    (0x18 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S5_RSTMASK                                                    0x3ffff
#define MCMN_ISR_S5_RESET                                                      0x0

// 0x1c (MCMN_ISR_S6)
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_LSB                                        7
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_MSB                                        7
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_MASK                                       0x80
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_GET(x)                                     (((x) & MCMN_ISR_S6_MPDU_LENGTH_ERR_MASK) >> MCMN_ISR_S6_MPDU_LENGTH_ERR_LSB)
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_SET(x)                                     (((0 | (x)) << MCMN_ISR_S6_MPDU_LENGTH_ERR_LSB) & MCMN_ISR_S6_MPDU_LENGTH_ERR_MASK)
#define MCMN_ISR_S6_MPDU_LENGTH_ERR_RESET                                      0x0
#define MCMN_ISR_S6_SETUP_ERR_LSB                                              6
#define MCMN_ISR_S6_SETUP_ERR_MSB                                              6
#define MCMN_ISR_S6_SETUP_ERR_MASK                                             0x40
#define MCMN_ISR_S6_SETUP_ERR_GET(x)                                           (((x) & MCMN_ISR_S6_SETUP_ERR_MASK) >> MCMN_ISR_S6_SETUP_ERR_LSB)
#define MCMN_ISR_S6_SETUP_ERR_SET(x)                                           (((0 | (x)) << MCMN_ISR_S6_SETUP_ERR_LSB) & MCMN_ISR_S6_SETUP_ERR_MASK)
#define MCMN_ISR_S6_SETUP_ERR_RESET                                            0x0
#define MCMN_ISR_S6_OVERFLOW_ERR_LSB                                           5
#define MCMN_ISR_S6_OVERFLOW_ERR_MSB                                           5
#define MCMN_ISR_S6_OVERFLOW_ERR_MASK                                          0x20
#define MCMN_ISR_S6_OVERFLOW_ERR_GET(x)                                        (((x) & MCMN_ISR_S6_OVERFLOW_ERR_MASK) >> MCMN_ISR_S6_OVERFLOW_ERR_LSB)
#define MCMN_ISR_S6_OVERFLOW_ERR_SET(x)                                        (((0 | (x)) << MCMN_ISR_S6_OVERFLOW_ERR_LSB) & MCMN_ISR_S6_OVERFLOW_ERR_MASK)
#define MCMN_ISR_S6_OVERFLOW_ERR_RESET                                         0x0
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_LSB                                      4
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_MSB                                      4
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_MASK                                     0x10
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_GET(x)                                   (((x) & MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_MASK) >> MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_LSB)
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_SET(x)                                   (((0 | (x)) << MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_LSB) & MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_MASK)
#define MCMN_ISR_S6_TXDMA_PDG_LEN_ERR_RESET                                    0x0
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB                                  3
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_MSB                                  3
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK                                 0x8
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_GET(x)                               (((x) & MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK) >> MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB)
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_SET(x)                               (((0 | (x)) << MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB) & MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK)
#define MCMN_ISR_S6_HWSCH_PDG_TLV_LEN_ERR_RESET                                0x0
#define MCMN_ISR_S6_WRNG_TLV_ORD_LSB                                           2
#define MCMN_ISR_S6_WRNG_TLV_ORD_MSB                                           2
#define MCMN_ISR_S6_WRNG_TLV_ORD_MASK                                          0x4
#define MCMN_ISR_S6_WRNG_TLV_ORD_GET(x)                                        (((x) & MCMN_ISR_S6_WRNG_TLV_ORD_MASK) >> MCMN_ISR_S6_WRNG_TLV_ORD_LSB)
#define MCMN_ISR_S6_WRNG_TLV_ORD_SET(x)                                        (((0 | (x)) << MCMN_ISR_S6_WRNG_TLV_ORD_LSB) & MCMN_ISR_S6_WRNG_TLV_ORD_MASK)
#define MCMN_ISR_S6_WRNG_TLV_ORD_RESET                                         0x0
#define MCMN_ISR_S6_RCV_FCS_BSY_LSB                                            1
#define MCMN_ISR_S6_RCV_FCS_BSY_MSB                                            1
#define MCMN_ISR_S6_RCV_FCS_BSY_MASK                                           0x2
#define MCMN_ISR_S6_RCV_FCS_BSY_GET(x)                                         (((x) & MCMN_ISR_S6_RCV_FCS_BSY_MASK) >> MCMN_ISR_S6_RCV_FCS_BSY_LSB)
#define MCMN_ISR_S6_RCV_FCS_BSY_SET(x)                                         (((0 | (x)) << MCMN_ISR_S6_RCV_FCS_BSY_LSB) & MCMN_ISR_S6_RCV_FCS_BSY_MASK)
#define MCMN_ISR_S6_RCV_FCS_BSY_RESET                                          0x0
#define MCMN_ISR_S6_PDG_WD_TOUT_LSB                                            0
#define MCMN_ISR_S6_PDG_WD_TOUT_MSB                                            0
#define MCMN_ISR_S6_PDG_WD_TOUT_MASK                                           0x1
#define MCMN_ISR_S6_PDG_WD_TOUT_GET(x)                                         (((x) & MCMN_ISR_S6_PDG_WD_TOUT_MASK) >> MCMN_ISR_S6_PDG_WD_TOUT_LSB)
#define MCMN_ISR_S6_PDG_WD_TOUT_SET(x)                                         (((0 | (x)) << MCMN_ISR_S6_PDG_WD_TOUT_LSB) & MCMN_ISR_S6_PDG_WD_TOUT_MASK)
#define MCMN_ISR_S6_PDG_WD_TOUT_RESET                                          0x0
#define MCMN_ISR_S6_ADDRESS                                                    (0x1c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S6_RSTMASK                                                    0xff
#define MCMN_ISR_S6_RESET                                                      0x0

// 0x20 (MCMN_ISR_S7)
#define MCMN_ISR_S7_HW_RNG_THR_LSB                                             16
#define MCMN_ISR_S7_HW_RNG_THR_MSB                                             31
#define MCMN_ISR_S7_HW_RNG_THR_MASK                                            0xffff0000
#define MCMN_ISR_S7_HW_RNG_THR_GET(x)                                          (((x) & MCMN_ISR_S7_HW_RNG_THR_MASK) >> MCMN_ISR_S7_HW_RNG_THR_LSB)
#define MCMN_ISR_S7_HW_RNG_THR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S7_HW_RNG_THR_LSB) & MCMN_ISR_S7_HW_RNG_THR_MASK)
#define MCMN_ISR_S7_HW_RNG_THR_RESET                                           0x0
#define MCMN_ISR_S7_HW_RNG_PSD_LSB                                             0
#define MCMN_ISR_S7_HW_RNG_PSD_MSB                                             15
#define MCMN_ISR_S7_HW_RNG_PSD_MASK                                            0xffff
#define MCMN_ISR_S7_HW_RNG_PSD_GET(x)                                          (((x) & MCMN_ISR_S7_HW_RNG_PSD_MASK) >> MCMN_ISR_S7_HW_RNG_PSD_LSB)
#define MCMN_ISR_S7_HW_RNG_PSD_SET(x)                                          (((0 | (x)) << MCMN_ISR_S7_HW_RNG_PSD_LSB) & MCMN_ISR_S7_HW_RNG_PSD_MASK)
#define MCMN_ISR_S7_HW_RNG_PSD_RESET                                           0x0
#define MCMN_ISR_S7_ADDRESS                                                    (0x20 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S7_RSTMASK                                                    0xffffffff
#define MCMN_ISR_S7_RESET                                                      0x0

// 0x24 (MCMN_ISR_S8)
#define MCMN_ISR_S8_MTU_BKOF_LSB                                               0
#define MCMN_ISR_S8_MTU_BKOF_MSB                                               15
#define MCMN_ISR_S8_MTU_BKOF_MASK                                              0xffff
#define MCMN_ISR_S8_MTU_BKOF_GET(x)                                            (((x) & MCMN_ISR_S8_MTU_BKOF_MASK) >> MCMN_ISR_S8_MTU_BKOF_LSB)
#define MCMN_ISR_S8_MTU_BKOF_SET(x)                                            (((0 | (x)) << MCMN_ISR_S8_MTU_BKOF_LSB) & MCMN_ISR_S8_MTU_BKOF_MASK)
#define MCMN_ISR_S8_MTU_BKOF_RESET                                             0x0
#define MCMN_ISR_S8_ADDRESS                                                    (0x24 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S8_RSTMASK                                                    0xffff
#define MCMN_ISR_S8_RESET                                                      0x0

// 0x28 (MCMN_ISR_S9)
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_LSB                                    5
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_MSB                                    8
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_MASK                                   0x1e0
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_GET(x)                                 (((x) & MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_MASK) >> MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_LSB)
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_SET(x)                                 (((0 | (x)) << MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_LSB) & MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_MASK)
#define MCMN_ISR_S9_MTU_TX_BOUNDARY_INT_RESET                                  0x0
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB                      4
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MSB                      4
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK                     0x10
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_GET(x)                   (((x) & MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK) >> MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB)
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_SET(x)                   (((0 | (x)) << MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB) & MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK)
#define MCMN_ISR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_RESET                    0x0
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB                    3
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MSB                    3
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK                   0x8
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_GET(x)                 (((x) & MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK) >> MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB)
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_SET(x)                 (((0 | (x)) << MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB) & MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK)
#define MCMN_ISR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_RESET                  0x0
#define MCMN_ISR_S9_AXI_RD_ERR_LSB                                             2
#define MCMN_ISR_S9_AXI_RD_ERR_MSB                                             2
#define MCMN_ISR_S9_AXI_RD_ERR_MASK                                            0x4
#define MCMN_ISR_S9_AXI_RD_ERR_GET(x)                                          (((x) & MCMN_ISR_S9_AXI_RD_ERR_MASK) >> MCMN_ISR_S9_AXI_RD_ERR_LSB)
#define MCMN_ISR_S9_AXI_RD_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S9_AXI_RD_ERR_LSB) & MCMN_ISR_S9_AXI_RD_ERR_MASK)
#define MCMN_ISR_S9_AXI_RD_ERR_RESET                                           0x0
#define MCMN_ISR_S9_AXI_WR_ERR_LSB                                             1
#define MCMN_ISR_S9_AXI_WR_ERR_MSB                                             1
#define MCMN_ISR_S9_AXI_WR_ERR_MASK                                            0x2
#define MCMN_ISR_S9_AXI_WR_ERR_GET(x)                                          (((x) & MCMN_ISR_S9_AXI_WR_ERR_MASK) >> MCMN_ISR_S9_AXI_WR_ERR_LSB)
#define MCMN_ISR_S9_AXI_WR_ERR_SET(x)                                          (((0 | (x)) << MCMN_ISR_S9_AXI_WR_ERR_LSB) & MCMN_ISR_S9_AXI_WR_ERR_MASK)
#define MCMN_ISR_S9_AXI_WR_ERR_RESET                                           0x0
#define MCMN_ISR_S9_HWSCH_WD_TOUT_LSB                                          0
#define MCMN_ISR_S9_HWSCH_WD_TOUT_MSB                                          0
#define MCMN_ISR_S9_HWSCH_WD_TOUT_MASK                                         0x1
#define MCMN_ISR_S9_HWSCH_WD_TOUT_GET(x)                                       (((x) & MCMN_ISR_S9_HWSCH_WD_TOUT_MASK) >> MCMN_ISR_S9_HWSCH_WD_TOUT_LSB)
#define MCMN_ISR_S9_HWSCH_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_ISR_S9_HWSCH_WD_TOUT_LSB) & MCMN_ISR_S9_HWSCH_WD_TOUT_MASK)
#define MCMN_ISR_S9_HWSCH_WD_TOUT_RESET                                        0x0
#define MCMN_ISR_S9_ADDRESS                                                    (0x28 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S9_RSTMASK                                                    0x1ff
#define MCMN_ISR_S9_RESET                                                      0x0

// 0x2c (MCMN_ISR_S10)
#define MCMN_ISR_S10_AXI_TMOUT_LSB                                             1
#define MCMN_ISR_S10_AXI_TMOUT_MSB                                             1
#define MCMN_ISR_S10_AXI_TMOUT_MASK                                            0x2
#define MCMN_ISR_S10_AXI_TMOUT_GET(x)                                          (((x) & MCMN_ISR_S10_AXI_TMOUT_MASK) >> MCMN_ISR_S10_AXI_TMOUT_LSB)
#define MCMN_ISR_S10_AXI_TMOUT_SET(x)                                          (((0 | (x)) << MCMN_ISR_S10_AXI_TMOUT_LSB) & MCMN_ISR_S10_AXI_TMOUT_MASK)
#define MCMN_ISR_S10_AXI_TMOUT_RESET                                           0x0
#define MCMN_ISR_S10_AXI_RESP_ERR_LSB                                          0
#define MCMN_ISR_S10_AXI_RESP_ERR_MSB                                          0
#define MCMN_ISR_S10_AXI_RESP_ERR_MASK                                         0x1
#define MCMN_ISR_S10_AXI_RESP_ERR_GET(x)                                       (((x) & MCMN_ISR_S10_AXI_RESP_ERR_MASK) >> MCMN_ISR_S10_AXI_RESP_ERR_LSB)
#define MCMN_ISR_S10_AXI_RESP_ERR_SET(x)                                       (((0 | (x)) << MCMN_ISR_S10_AXI_RESP_ERR_LSB) & MCMN_ISR_S10_AXI_RESP_ERR_MASK)
#define MCMN_ISR_S10_AXI_RESP_ERR_RESET                                        0x0
#define MCMN_ISR_S10_ADDRESS                                                   (0x2c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S10_RSTMASK                                                   0x3
#define MCMN_ISR_S10_RESET                                                     0x0

// 0x30 (MCMN_IMR_P)
#define MCMN_IMR_P_AMPI_LSB                                                    11
#define MCMN_IMR_P_AMPI_MSB                                                    11
#define MCMN_IMR_P_AMPI_MASK                                                   0x800
#define MCMN_IMR_P_AMPI_GET(x)                                                 (((x) & MCMN_IMR_P_AMPI_MASK) >> MCMN_IMR_P_AMPI_LSB)
#define MCMN_IMR_P_AMPI_SET(x)                                                 (((0 | (x)) << MCMN_IMR_P_AMPI_LSB) & MCMN_IMR_P_AMPI_MASK)
#define MCMN_IMR_P_AMPI_RESET                                                  0x0
#define MCMN_IMR_P_MXI_LSB                                                     10
#define MCMN_IMR_P_MXI_MSB                                                     10
#define MCMN_IMR_P_MXI_MASK                                                    0x400
#define MCMN_IMR_P_MXI_GET(x)                                                  (((x) & MCMN_IMR_P_MXI_MASK) >> MCMN_IMR_P_MXI_LSB)
#define MCMN_IMR_P_MXI_SET(x)                                                  (((0 | (x)) << MCMN_IMR_P_MXI_LSB) & MCMN_IMR_P_MXI_MASK)
#define MCMN_IMR_P_MXI_RESET                                                   0x0
#define MCMN_IMR_P_HWSCH2_LSB                                                  9
#define MCMN_IMR_P_HWSCH2_MSB                                                  9
#define MCMN_IMR_P_HWSCH2_MASK                                                 0x200
#define MCMN_IMR_P_HWSCH2_GET(x)                                               (((x) & MCMN_IMR_P_HWSCH2_MASK) >> MCMN_IMR_P_HWSCH2_LSB)
#define MCMN_IMR_P_HWSCH2_SET(x)                                               (((0 | (x)) << MCMN_IMR_P_HWSCH2_LSB) & MCMN_IMR_P_HWSCH2_MASK)
#define MCMN_IMR_P_HWSCH2_RESET                                                0x0
#define MCMN_IMR_P_HWSCH1_LSB                                                  8
#define MCMN_IMR_P_HWSCH1_MSB                                                  8
#define MCMN_IMR_P_HWSCH1_MASK                                                 0x100
#define MCMN_IMR_P_HWSCH1_GET(x)                                               (((x) & MCMN_IMR_P_HWSCH1_MASK) >> MCMN_IMR_P_HWSCH1_LSB)
#define MCMN_IMR_P_HWSCH1_SET(x)                                               (((0 | (x)) << MCMN_IMR_P_HWSCH1_LSB) & MCMN_IMR_P_HWSCH1_MASK)
#define MCMN_IMR_P_HWSCH1_RESET                                                0x0
#define MCMN_IMR_P_HWSCH0_LSB                                                  7
#define MCMN_IMR_P_HWSCH0_MSB                                                  7
#define MCMN_IMR_P_HWSCH0_MASK                                                 0x80
#define MCMN_IMR_P_HWSCH0_GET(x)                                               (((x) & MCMN_IMR_P_HWSCH0_MASK) >> MCMN_IMR_P_HWSCH0_LSB)
#define MCMN_IMR_P_HWSCH0_SET(x)                                               (((0 | (x)) << MCMN_IMR_P_HWSCH0_LSB) & MCMN_IMR_P_HWSCH0_MASK)
#define MCMN_IMR_P_HWSCH0_RESET                                                0x0
#define MCMN_IMR_P_PDG_LSB                                                     6
#define MCMN_IMR_P_PDG_MSB                                                     6
#define MCMN_IMR_P_PDG_MASK                                                    0x40
#define MCMN_IMR_P_PDG_GET(x)                                                  (((x) & MCMN_IMR_P_PDG_MASK) >> MCMN_IMR_P_PDG_LSB)
#define MCMN_IMR_P_PDG_SET(x)                                                  (((0 | (x)) << MCMN_IMR_P_PDG_LSB) & MCMN_IMR_P_PDG_MASK)
#define MCMN_IMR_P_PDG_RESET                                                   0x0
#define MCMN_IMR_P_RXPCU_LSB                                                   5
#define MCMN_IMR_P_RXPCU_MSB                                                   5
#define MCMN_IMR_P_RXPCU_MASK                                                  0x20
#define MCMN_IMR_P_RXPCU_GET(x)                                                (((x) & MCMN_IMR_P_RXPCU_MASK) >> MCMN_IMR_P_RXPCU_LSB)
#define MCMN_IMR_P_RXPCU_SET(x)                                                (((0 | (x)) << MCMN_IMR_P_RXPCU_LSB) & MCMN_IMR_P_RXPCU_MASK)
#define MCMN_IMR_P_RXPCU_RESET                                                 0x0
#define MCMN_IMR_P_TXPCU_LSB                                                   4
#define MCMN_IMR_P_TXPCU_MSB                                                   4
#define MCMN_IMR_P_TXPCU_MASK                                                  0x10
#define MCMN_IMR_P_TXPCU_GET(x)                                                (((x) & MCMN_IMR_P_TXPCU_MASK) >> MCMN_IMR_P_TXPCU_LSB)
#define MCMN_IMR_P_TXPCU_SET(x)                                                (((0 | (x)) << MCMN_IMR_P_TXPCU_LSB) & MCMN_IMR_P_TXPCU_MASK)
#define MCMN_IMR_P_TXPCU_RESET                                                 0x0
#define MCMN_IMR_P_RXDMA_LSB                                                   3
#define MCMN_IMR_P_RXDMA_MSB                                                   3
#define MCMN_IMR_P_RXDMA_MASK                                                  0x8
#define MCMN_IMR_P_RXDMA_GET(x)                                                (((x) & MCMN_IMR_P_RXDMA_MASK) >> MCMN_IMR_P_RXDMA_LSB)
#define MCMN_IMR_P_RXDMA_SET(x)                                                (((0 | (x)) << MCMN_IMR_P_RXDMA_LSB) & MCMN_IMR_P_RXDMA_MASK)
#define MCMN_IMR_P_RXDMA_RESET                                                 0x0
#define MCMN_IMR_P_TXDMA_LSB                                                   2
#define MCMN_IMR_P_TXDMA_MSB                                                   2
#define MCMN_IMR_P_TXDMA_MASK                                                  0x4
#define MCMN_IMR_P_TXDMA_GET(x)                                                (((x) & MCMN_IMR_P_TXDMA_MASK) >> MCMN_IMR_P_TXDMA_LSB)
#define MCMN_IMR_P_TXDMA_SET(x)                                                (((0 | (x)) << MCMN_IMR_P_TXDMA_LSB) & MCMN_IMR_P_TXDMA_MASK)
#define MCMN_IMR_P_TXDMA_RESET                                                 0x0
#define MCMN_IMR_P_CRYPTO_LSB                                                  1
#define MCMN_IMR_P_CRYPTO_MSB                                                  1
#define MCMN_IMR_P_CRYPTO_MASK                                                 0x2
#define MCMN_IMR_P_CRYPTO_GET(x)                                               (((x) & MCMN_IMR_P_CRYPTO_MASK) >> MCMN_IMR_P_CRYPTO_LSB)
#define MCMN_IMR_P_CRYPTO_SET(x)                                               (((0 | (x)) << MCMN_IMR_P_CRYPTO_LSB) & MCMN_IMR_P_CRYPTO_MASK)
#define MCMN_IMR_P_CRYPTO_RESET                                                0x0
#define MCMN_IMR_P_OLE_LSB                                                     0
#define MCMN_IMR_P_OLE_MSB                                                     0
#define MCMN_IMR_P_OLE_MASK                                                    0x1
#define MCMN_IMR_P_OLE_GET(x)                                                  (((x) & MCMN_IMR_P_OLE_MASK) >> MCMN_IMR_P_OLE_LSB)
#define MCMN_IMR_P_OLE_SET(x)                                                  (((0 | (x)) << MCMN_IMR_P_OLE_LSB) & MCMN_IMR_P_OLE_MASK)
#define MCMN_IMR_P_OLE_RESET                                                   0x0
#define MCMN_IMR_P_ADDRESS                                                     (0x30 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_P_RSTMASK                                                     0xfff
#define MCMN_IMR_P_RESET                                                       0x0

// 0x34 (MCMN_IMR_S0)
#define MCMN_IMR_S0_PN_BITMAP_ERROR_LSB                                        12
#define MCMN_IMR_S0_PN_BITMAP_ERROR_MSB                                        12
#define MCMN_IMR_S0_PN_BITMAP_ERROR_MASK                                       0x1000
#define MCMN_IMR_S0_PN_BITMAP_ERROR_GET(x)                                     (((x) & MCMN_IMR_S0_PN_BITMAP_ERROR_MASK) >> MCMN_IMR_S0_PN_BITMAP_ERROR_LSB)
#define MCMN_IMR_S0_PN_BITMAP_ERROR_SET(x)                                     (((0 | (x)) << MCMN_IMR_S0_PN_BITMAP_ERROR_LSB) & MCMN_IMR_S0_PN_BITMAP_ERROR_MASK)
#define MCMN_IMR_S0_PN_BITMAP_ERROR_RESET                                      0x0
#define MCMN_IMR_S0_RX_WMAC_ERR_LSB                                            11
#define MCMN_IMR_S0_RX_WMAC_ERR_MSB                                            11
#define MCMN_IMR_S0_RX_WMAC_ERR_MASK                                           0x800
#define MCMN_IMR_S0_RX_WMAC_ERR_GET(x)                                         (((x) & MCMN_IMR_S0_RX_WMAC_ERR_MASK) >> MCMN_IMR_S0_RX_WMAC_ERR_LSB)
#define MCMN_IMR_S0_RX_WMAC_ERR_SET(x)                                         (((0 | (x)) << MCMN_IMR_S0_RX_WMAC_ERR_LSB) & MCMN_IMR_S0_RX_WMAC_ERR_MASK)
#define MCMN_IMR_S0_RX_WMAC_ERR_RESET                                          0x0
#define MCMN_IMR_S0_RX_ETH_ERR_LSB                                             10
#define MCMN_IMR_S0_RX_ETH_ERR_MSB                                             10
#define MCMN_IMR_S0_RX_ETH_ERR_MASK                                            0x400
#define MCMN_IMR_S0_RX_ETH_ERR_GET(x)                                          (((x) & MCMN_IMR_S0_RX_ETH_ERR_MASK) >> MCMN_IMR_S0_RX_ETH_ERR_LSB)
#define MCMN_IMR_S0_RX_ETH_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S0_RX_ETH_ERR_LSB) & MCMN_IMR_S0_RX_ETH_ERR_MASK)
#define MCMN_IMR_S0_RX_ETH_ERR_RESET                                           0x0
#define MCMN_IMR_S0_RX_MSDU_LEN_LSB                                            9
#define MCMN_IMR_S0_RX_MSDU_LEN_MSB                                            9
#define MCMN_IMR_S0_RX_MSDU_LEN_MASK                                           0x200
#define MCMN_IMR_S0_RX_MSDU_LEN_GET(x)                                         (((x) & MCMN_IMR_S0_RX_MSDU_LEN_MASK) >> MCMN_IMR_S0_RX_MSDU_LEN_LSB)
#define MCMN_IMR_S0_RX_MSDU_LEN_SET(x)                                         (((0 | (x)) << MCMN_IMR_S0_RX_MSDU_LEN_LSB) & MCMN_IMR_S0_RX_MSDU_LEN_MASK)
#define MCMN_IMR_S0_RX_MSDU_LEN_RESET                                          0x0
#define MCMN_IMR_S0_TX_ILLEGAL_LSB                                             8
#define MCMN_IMR_S0_TX_ILLEGAL_MSB                                             8
#define MCMN_IMR_S0_TX_ILLEGAL_MASK                                            0x100
#define MCMN_IMR_S0_TX_ILLEGAL_GET(x)                                          (((x) & MCMN_IMR_S0_TX_ILLEGAL_MASK) >> MCMN_IMR_S0_TX_ILLEGAL_LSB)
#define MCMN_IMR_S0_TX_ILLEGAL_SET(x)                                          (((0 | (x)) << MCMN_IMR_S0_TX_ILLEGAL_LSB) & MCMN_IMR_S0_TX_ILLEGAL_MASK)
#define MCMN_IMR_S0_TX_ILLEGAL_RESET                                           0x0
#define MCMN_IMR_S0_TX_UNKN_LLC_LSB                                            7
#define MCMN_IMR_S0_TX_UNKN_LLC_MSB                                            7
#define MCMN_IMR_S0_TX_UNKN_LLC_MASK                                           0x80
#define MCMN_IMR_S0_TX_UNKN_LLC_GET(x)                                         (((x) & MCMN_IMR_S0_TX_UNKN_LLC_MASK) >> MCMN_IMR_S0_TX_UNKN_LLC_LSB)
#define MCMN_IMR_S0_TX_UNKN_LLC_SET(x)                                         (((0 | (x)) << MCMN_IMR_S0_TX_UNKN_LLC_LSB) & MCMN_IMR_S0_TX_UNKN_LLC_MASK)
#define MCMN_IMR_S0_TX_UNKN_LLC_RESET                                          0x0
#define MCMN_IMR_S0_TX_VLAN_LLC_LSB                                            6
#define MCMN_IMR_S0_TX_VLAN_LLC_MSB                                            6
#define MCMN_IMR_S0_TX_VLAN_LLC_MASK                                           0x40
#define MCMN_IMR_S0_TX_VLAN_LLC_GET(x)                                         (((x) & MCMN_IMR_S0_TX_VLAN_LLC_MASK) >> MCMN_IMR_S0_TX_VLAN_LLC_LSB)
#define MCMN_IMR_S0_TX_VLAN_LLC_SET(x)                                         (((0 | (x)) << MCMN_IMR_S0_TX_VLAN_LLC_LSB) & MCMN_IMR_S0_TX_VLAN_LLC_MASK)
#define MCMN_IMR_S0_TX_VLAN_LLC_RESET                                          0x0
#define MCMN_IMR_S0_WEP_KEY_ERR_LSB                                            5
#define MCMN_IMR_S0_WEP_KEY_ERR_MSB                                            5
#define MCMN_IMR_S0_WEP_KEY_ERR_MASK                                           0x20
#define MCMN_IMR_S0_WEP_KEY_ERR_GET(x)                                         (((x) & MCMN_IMR_S0_WEP_KEY_ERR_MASK) >> MCMN_IMR_S0_WEP_KEY_ERR_LSB)
#define MCMN_IMR_S0_WEP_KEY_ERR_SET(x)                                         (((0 | (x)) << MCMN_IMR_S0_WEP_KEY_ERR_LSB) & MCMN_IMR_S0_WEP_KEY_ERR_MASK)
#define MCMN_IMR_S0_WEP_KEY_ERR_RESET                                          0x0
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_LSB                                          4
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_MSB                                          4
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_MASK                                         0x10
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_GET(x)                                       (((x) & MCMN_IMR_S0_TX_SEQ_BM_ERR_MASK) >> MCMN_IMR_S0_TX_SEQ_BM_ERR_LSB)
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_SET(x)                                       (((0 | (x)) << MCMN_IMR_S0_TX_SEQ_BM_ERR_LSB) & MCMN_IMR_S0_TX_SEQ_BM_ERR_MASK)
#define MCMN_IMR_S0_TX_SEQ_BM_ERR_RESET                                        0x0
#define MCMN_IMR_S0_AMSDU_FRM_ERR_LSB                                          3
#define MCMN_IMR_S0_AMSDU_FRM_ERR_MSB                                          3
#define MCMN_IMR_S0_AMSDU_FRM_ERR_MASK                                         0x8
#define MCMN_IMR_S0_AMSDU_FRM_ERR_GET(x)                                       (((x) & MCMN_IMR_S0_AMSDU_FRM_ERR_MASK) >> MCMN_IMR_S0_AMSDU_FRM_ERR_LSB)
#define MCMN_IMR_S0_AMSDU_FRM_ERR_SET(x)                                       (((0 | (x)) << MCMN_IMR_S0_AMSDU_FRM_ERR_LSB) & MCMN_IMR_S0_AMSDU_FRM_ERR_MASK)
#define MCMN_IMR_S0_AMSDU_FRM_ERR_RESET                                        0x0
#define MCMN_IMR_S0_TX_TLV_ERR_LSB                                             2
#define MCMN_IMR_S0_TX_TLV_ERR_MSB                                             2
#define MCMN_IMR_S0_TX_TLV_ERR_MASK                                            0x4
#define MCMN_IMR_S0_TX_TLV_ERR_GET(x)                                          (((x) & MCMN_IMR_S0_TX_TLV_ERR_MASK) >> MCMN_IMR_S0_TX_TLV_ERR_LSB)
#define MCMN_IMR_S0_TX_TLV_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S0_TX_TLV_ERR_LSB) & MCMN_IMR_S0_TX_TLV_ERR_MASK)
#define MCMN_IMR_S0_TX_TLV_ERR_RESET                                           0x0
#define MCMN_IMR_S0_RX_TLV_ERR_LSB                                             1
#define MCMN_IMR_S0_RX_TLV_ERR_MSB                                             1
#define MCMN_IMR_S0_RX_TLV_ERR_MASK                                            0x2
#define MCMN_IMR_S0_RX_TLV_ERR_GET(x)                                          (((x) & MCMN_IMR_S0_RX_TLV_ERR_MASK) >> MCMN_IMR_S0_RX_TLV_ERR_LSB)
#define MCMN_IMR_S0_RX_TLV_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S0_RX_TLV_ERR_LSB) & MCMN_IMR_S0_RX_TLV_ERR_MASK)
#define MCMN_IMR_S0_RX_TLV_ERR_RESET                                           0x0
#define MCMN_IMR_S0_WDOG_TOUT_LSB                                              0
#define MCMN_IMR_S0_WDOG_TOUT_MSB                                              0
#define MCMN_IMR_S0_WDOG_TOUT_MASK                                             0x1
#define MCMN_IMR_S0_WDOG_TOUT_GET(x)                                           (((x) & MCMN_IMR_S0_WDOG_TOUT_MASK) >> MCMN_IMR_S0_WDOG_TOUT_LSB)
#define MCMN_IMR_S0_WDOG_TOUT_SET(x)                                           (((0 | (x)) << MCMN_IMR_S0_WDOG_TOUT_LSB) & MCMN_IMR_S0_WDOG_TOUT_MASK)
#define MCMN_IMR_S0_WDOG_TOUT_RESET                                            0x0
#define MCMN_IMR_S0_ADDRESS                                                    (0x34 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S0_RSTMASK                                                    0x1fff
#define MCMN_IMR_S0_RESET                                                      0x0

// 0x38 (MCMN_IMR_S1)
#define MCMN_IMR_S1_TX_FLUSH_REQ_LSB                                           6
#define MCMN_IMR_S1_TX_FLUSH_REQ_MSB                                           6
#define MCMN_IMR_S1_TX_FLUSH_REQ_MASK                                          0x40
#define MCMN_IMR_S1_TX_FLUSH_REQ_GET(x)                                        (((x) & MCMN_IMR_S1_TX_FLUSH_REQ_MASK) >> MCMN_IMR_S1_TX_FLUSH_REQ_LSB)
#define MCMN_IMR_S1_TX_FLUSH_REQ_SET(x)                                        (((0 | (x)) << MCMN_IMR_S1_TX_FLUSH_REQ_LSB) & MCMN_IMR_S1_TX_FLUSH_REQ_MASK)
#define MCMN_IMR_S1_TX_FLUSH_REQ_RESET                                         0x0
#define MCMN_IMR_S1_RX_ABORT_LSB                                               5
#define MCMN_IMR_S1_RX_ABORT_MSB                                               5
#define MCMN_IMR_S1_RX_ABORT_MASK                                              0x20
#define MCMN_IMR_S1_RX_ABORT_GET(x)                                            (((x) & MCMN_IMR_S1_RX_ABORT_MASK) >> MCMN_IMR_S1_RX_ABORT_LSB)
#define MCMN_IMR_S1_RX_ABORT_SET(x)                                            (((0 | (x)) << MCMN_IMR_S1_RX_ABORT_LSB) & MCMN_IMR_S1_RX_ABORT_MASK)
#define MCMN_IMR_S1_RX_ABORT_RESET                                             0x0
#define MCMN_IMR_S1_TX_ABORT_LSB                                               4
#define MCMN_IMR_S1_TX_ABORT_MSB                                               4
#define MCMN_IMR_S1_TX_ABORT_MASK                                              0x10
#define MCMN_IMR_S1_TX_ABORT_GET(x)                                            (((x) & MCMN_IMR_S1_TX_ABORT_MASK) >> MCMN_IMR_S1_TX_ABORT_LSB)
#define MCMN_IMR_S1_TX_ABORT_SET(x)                                            (((0 | (x)) << MCMN_IMR_S1_TX_ABORT_LSB) & MCMN_IMR_S1_TX_ABORT_MASK)
#define MCMN_IMR_S1_TX_ABORT_RESET                                             0x0
#define MCMN_IMR_S1_DECRPT_ERR_LSB                                             3
#define MCMN_IMR_S1_DECRPT_ERR_MSB                                             3
#define MCMN_IMR_S1_DECRPT_ERR_MASK                                            0x8
#define MCMN_IMR_S1_DECRPT_ERR_GET(x)                                          (((x) & MCMN_IMR_S1_DECRPT_ERR_MASK) >> MCMN_IMR_S1_DECRPT_ERR_LSB)
#define MCMN_IMR_S1_DECRPT_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S1_DECRPT_ERR_LSB) & MCMN_IMR_S1_DECRPT_ERR_MASK)
#define MCMN_IMR_S1_DECRPT_ERR_RESET                                           0x0
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_LSB                                         2
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_MSB                                         2
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_MASK                                        0x4
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_GET(x)                                      (((x) & MCMN_IMR_S1_RX_TLV_OUT_SEQ_MASK) >> MCMN_IMR_S1_RX_TLV_OUT_SEQ_LSB)
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_SET(x)                                      (((0 | (x)) << MCMN_IMR_S1_RX_TLV_OUT_SEQ_LSB) & MCMN_IMR_S1_RX_TLV_OUT_SEQ_MASK)
#define MCMN_IMR_S1_RX_TLV_OUT_SEQ_RESET                                       0x0
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_LSB                                         1
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_MSB                                         1
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_MASK                                        0x2
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_GET(x)                                      (((x) & MCMN_IMR_S1_TX_TLV_OUT_SEQ_MASK) >> MCMN_IMR_S1_TX_TLV_OUT_SEQ_LSB)
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_SET(x)                                      (((0 | (x)) << MCMN_IMR_S1_TX_TLV_OUT_SEQ_LSB) & MCMN_IMR_S1_TX_TLV_OUT_SEQ_MASK)
#define MCMN_IMR_S1_TX_TLV_OUT_SEQ_RESET                                       0x0
#define MCMN_IMR_S1_CRYP_WD_TMOUT_LSB                                          0
#define MCMN_IMR_S1_CRYP_WD_TMOUT_MSB                                          0
#define MCMN_IMR_S1_CRYP_WD_TMOUT_MASK                                         0x1
#define MCMN_IMR_S1_CRYP_WD_TMOUT_GET(x)                                       (((x) & MCMN_IMR_S1_CRYP_WD_TMOUT_MASK) >> MCMN_IMR_S1_CRYP_WD_TMOUT_LSB)
#define MCMN_IMR_S1_CRYP_WD_TMOUT_SET(x)                                       (((0 | (x)) << MCMN_IMR_S1_CRYP_WD_TMOUT_LSB) & MCMN_IMR_S1_CRYP_WD_TMOUT_MASK)
#define MCMN_IMR_S1_CRYP_WD_TMOUT_RESET                                        0x0
#define MCMN_IMR_S1_ADDRESS                                                    (0x38 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S1_RSTMASK                                                    0x7f
#define MCMN_IMR_S1_RESET                                                      0x0

// 0x3c (MCMN_IMR_S2)
#define MCMN_IMR_S2_AXI_TMOUT_LSB                                              9
#define MCMN_IMR_S2_AXI_TMOUT_MSB                                              9
#define MCMN_IMR_S2_AXI_TMOUT_MASK                                             0x200
#define MCMN_IMR_S2_AXI_TMOUT_GET(x)                                           (((x) & MCMN_IMR_S2_AXI_TMOUT_MASK) >> MCMN_IMR_S2_AXI_TMOUT_LSB)
#define MCMN_IMR_S2_AXI_TMOUT_SET(x)                                           (((0 | (x)) << MCMN_IMR_S2_AXI_TMOUT_LSB) & MCMN_IMR_S2_AXI_TMOUT_MASK)
#define MCMN_IMR_S2_AXI_TMOUT_RESET                                            0x0
#define MCMN_IMR_S2_OLE_RDY_TMOUT_LSB                                          8
#define MCMN_IMR_S2_OLE_RDY_TMOUT_MSB                                          8
#define MCMN_IMR_S2_OLE_RDY_TMOUT_MASK                                         0x100
#define MCMN_IMR_S2_OLE_RDY_TMOUT_GET(x)                                       (((x) & MCMN_IMR_S2_OLE_RDY_TMOUT_MASK) >> MCMN_IMR_S2_OLE_RDY_TMOUT_LSB)
#define MCMN_IMR_S2_OLE_RDY_TMOUT_SET(x)                                       (((0 | (x)) << MCMN_IMR_S2_OLE_RDY_TMOUT_LSB) & MCMN_IMR_S2_OLE_RDY_TMOUT_MASK)
#define MCMN_IMR_S2_OLE_RDY_TMOUT_RESET                                        0x0
#define MCMN_IMR_S2_UNEX_NUL_PTR_LSB                                           7
#define MCMN_IMR_S2_UNEX_NUL_PTR_MSB                                           7
#define MCMN_IMR_S2_UNEX_NUL_PTR_MASK                                          0x80
#define MCMN_IMR_S2_UNEX_NUL_PTR_GET(x)                                        (((x) & MCMN_IMR_S2_UNEX_NUL_PTR_MASK) >> MCMN_IMR_S2_UNEX_NUL_PTR_LSB)
#define MCMN_IMR_S2_UNEX_NUL_PTR_SET(x)                                        (((0 | (x)) << MCMN_IMR_S2_UNEX_NUL_PTR_LSB) & MCMN_IMR_S2_UNEX_NUL_PTR_MASK)
#define MCMN_IMR_S2_UNEX_NUL_PTR_RESET                                         0x0
#define MCMN_IMR_S2_WDG_TMOUT_LSB                                              6
#define MCMN_IMR_S2_WDG_TMOUT_MSB                                              6
#define MCMN_IMR_S2_WDG_TMOUT_MASK                                             0x40
#define MCMN_IMR_S2_WDG_TMOUT_GET(x)                                           (((x) & MCMN_IMR_S2_WDG_TMOUT_MASK) >> MCMN_IMR_S2_WDG_TMOUT_LSB)
#define MCMN_IMR_S2_WDG_TMOUT_SET(x)                                           (((0 | (x)) << MCMN_IMR_S2_WDG_TMOUT_LSB) & MCMN_IMR_S2_WDG_TMOUT_MASK)
#define MCMN_IMR_S2_WDG_TMOUT_RESET                                            0x0
#define MCMN_IMR_S2_INVA_IDX_LSB                                               5
#define MCMN_IMR_S2_INVA_IDX_MSB                                               5
#define MCMN_IMR_S2_INVA_IDX_MASK                                              0x20
#define MCMN_IMR_S2_INVA_IDX_GET(x)                                            (((x) & MCMN_IMR_S2_INVA_IDX_MASK) >> MCMN_IMR_S2_INVA_IDX_LSB)
#define MCMN_IMR_S2_INVA_IDX_SET(x)                                            (((0 | (x)) << MCMN_IMR_S2_INVA_IDX_LSB) & MCMN_IMR_S2_INVA_IDX_MASK)
#define MCMN_IMR_S2_INVA_IDX_RESET                                             0x0
#define MCMN_IMR_S2_MISSIN_TLV_LSB                                             3
#define MCMN_IMR_S2_MISSIN_TLV_MSB                                             3
#define MCMN_IMR_S2_MISSIN_TLV_MASK                                            0x8
#define MCMN_IMR_S2_MISSIN_TLV_GET(x)                                          (((x) & MCMN_IMR_S2_MISSIN_TLV_MASK) >> MCMN_IMR_S2_MISSIN_TLV_LSB)
#define MCMN_IMR_S2_MISSIN_TLV_SET(x)                                          (((0 | (x)) << MCMN_IMR_S2_MISSIN_TLV_LSB) & MCMN_IMR_S2_MISSIN_TLV_MASK)
#define MCMN_IMR_S2_MISSIN_TLV_RESET                                           0x0
#define MCMN_IMR_S2_UNEX_FES_LSB                                               2
#define MCMN_IMR_S2_UNEX_FES_MSB                                               2
#define MCMN_IMR_S2_UNEX_FES_MASK                                              0x4
#define MCMN_IMR_S2_UNEX_FES_GET(x)                                            (((x) & MCMN_IMR_S2_UNEX_FES_MASK) >> MCMN_IMR_S2_UNEX_FES_LSB)
#define MCMN_IMR_S2_UNEX_FES_SET(x)                                            (((0 | (x)) << MCMN_IMR_S2_UNEX_FES_LSB) & MCMN_IMR_S2_UNEX_FES_MASK)
#define MCMN_IMR_S2_UNEX_FES_RESET                                             0x0
#define MCMN_IMR_S2_INCOM_TLV_LSB                                              1
#define MCMN_IMR_S2_INCOM_TLV_MSB                                              1
#define MCMN_IMR_S2_INCOM_TLV_MASK                                             0x2
#define MCMN_IMR_S2_INCOM_TLV_GET(x)                                           (((x) & MCMN_IMR_S2_INCOM_TLV_MASK) >> MCMN_IMR_S2_INCOM_TLV_LSB)
#define MCMN_IMR_S2_INCOM_TLV_SET(x)                                           (((0 | (x)) << MCMN_IMR_S2_INCOM_TLV_LSB) & MCMN_IMR_S2_INCOM_TLV_MASK)
#define MCMN_IMR_S2_INCOM_TLV_RESET                                            0x0
#define MCMN_IMR_S2_TX_DMA_IDLE_LSB                                            0
#define MCMN_IMR_S2_TX_DMA_IDLE_MSB                                            0
#define MCMN_IMR_S2_TX_DMA_IDLE_MASK                                           0x1
#define MCMN_IMR_S2_TX_DMA_IDLE_GET(x)                                         (((x) & MCMN_IMR_S2_TX_DMA_IDLE_MASK) >> MCMN_IMR_S2_TX_DMA_IDLE_LSB)
#define MCMN_IMR_S2_TX_DMA_IDLE_SET(x)                                         (((0 | (x)) << MCMN_IMR_S2_TX_DMA_IDLE_LSB) & MCMN_IMR_S2_TX_DMA_IDLE_MASK)
#define MCMN_IMR_S2_TX_DMA_IDLE_RESET                                          0x0
#define MCMN_IMR_S2_ADDRESS                                                    (0x3c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S2_RSTMASK                                                    0x3ef
#define MCMN_IMR_S2_RESET                                                      0x0

// 0x40 (MCMN_IMR_S3)
#define MCMN_IMR_S3_RXDMA_UAPSD_LSB                                            13
#define MCMN_IMR_S3_RXDMA_UAPSD_MSB                                            13
#define MCMN_IMR_S3_RXDMA_UAPSD_MASK                                           0x2000
#define MCMN_IMR_S3_RXDMA_UAPSD_GET(x)                                         (((x) & MCMN_IMR_S3_RXDMA_UAPSD_MASK) >> MCMN_IMR_S3_RXDMA_UAPSD_LSB)
#define MCMN_IMR_S3_RXDMA_UAPSD_SET(x)                                         (((0 | (x)) << MCMN_IMR_S3_RXDMA_UAPSD_LSB) & MCMN_IMR_S3_RXDMA_UAPSD_MASK)
#define MCMN_IMR_S3_RXDMA_UAPSD_RESET                                          0x0
#define MCMN_IMR_S3_RXDMA_RNG_LWM_LSB                                          9
#define MCMN_IMR_S3_RXDMA_RNG_LWM_MSB                                          12
#define MCMN_IMR_S3_RXDMA_RNG_LWM_MASK                                         0x1e00
#define MCMN_IMR_S3_RXDMA_RNG_LWM_GET(x)                                       (((x) & MCMN_IMR_S3_RXDMA_RNG_LWM_MASK) >> MCMN_IMR_S3_RXDMA_RNG_LWM_LSB)
#define MCMN_IMR_S3_RXDMA_RNG_LWM_SET(x)                                       (((0 | (x)) << MCMN_IMR_S3_RXDMA_RNG_LWM_LSB) & MCMN_IMR_S3_RXDMA_RNG_LWM_MASK)
#define MCMN_IMR_S3_RXDMA_RNG_LWM_RESET                                        0x0
#define MCMN_IMR_S3_TLV_FRME_ERR_LSB                                           8
#define MCMN_IMR_S3_TLV_FRME_ERR_MSB                                           8
#define MCMN_IMR_S3_TLV_FRME_ERR_MASK                                          0x100
#define MCMN_IMR_S3_TLV_FRME_ERR_GET(x)                                        (((x) & MCMN_IMR_S3_TLV_FRME_ERR_MASK) >> MCMN_IMR_S3_TLV_FRME_ERR_LSB)
#define MCMN_IMR_S3_TLV_FRME_ERR_SET(x)                                        (((0 | (x)) << MCMN_IMR_S3_TLV_FRME_ERR_LSB) & MCMN_IMR_S3_TLV_FRME_ERR_MASK)
#define MCMN_IMR_S3_TLV_FRME_ERR_RESET                                         0x0
#define MCMN_IMR_S3_TLV_SHORT_LSB                                              7
#define MCMN_IMR_S3_TLV_SHORT_MSB                                              7
#define MCMN_IMR_S3_TLV_SHORT_MASK                                             0x80
#define MCMN_IMR_S3_TLV_SHORT_GET(x)                                           (((x) & MCMN_IMR_S3_TLV_SHORT_MASK) >> MCMN_IMR_S3_TLV_SHORT_LSB)
#define MCMN_IMR_S3_TLV_SHORT_SET(x)                                           (((0 | (x)) << MCMN_IMR_S3_TLV_SHORT_LSB) & MCMN_IMR_S3_TLV_SHORT_MASK)
#define MCMN_IMR_S3_TLV_SHORT_RESET                                            0x0
#define MCMN_IMR_S3_INVAL_TAG_SEG_LSB                                          6
#define MCMN_IMR_S3_INVAL_TAG_SEG_MSB                                          6
#define MCMN_IMR_S3_INVAL_TAG_SEG_MASK                                         0x40
#define MCMN_IMR_S3_INVAL_TAG_SEG_GET(x)                                       (((x) & MCMN_IMR_S3_INVAL_TAG_SEG_MASK) >> MCMN_IMR_S3_INVAL_TAG_SEG_LSB)
#define MCMN_IMR_S3_INVAL_TAG_SEG_SET(x)                                       (((0 | (x)) << MCMN_IMR_S3_INVAL_TAG_SEG_LSB) & MCMN_IMR_S3_INVAL_TAG_SEG_MASK)
#define MCMN_IMR_S3_INVAL_TAG_SEG_RESET                                        0x0
#define MCMN_IMR_S3_INVAL_TAG_ID_LSB                                           5
#define MCMN_IMR_S3_INVAL_TAG_ID_MSB                                           5
#define MCMN_IMR_S3_INVAL_TAG_ID_MASK                                          0x20
#define MCMN_IMR_S3_INVAL_TAG_ID_GET(x)                                        (((x) & MCMN_IMR_S3_INVAL_TAG_ID_MASK) >> MCMN_IMR_S3_INVAL_TAG_ID_LSB)
#define MCMN_IMR_S3_INVAL_TAG_ID_SET(x)                                        (((0 | (x)) << MCMN_IMR_S3_INVAL_TAG_ID_LSB) & MCMN_IMR_S3_INVAL_TAG_ID_MASK)
#define MCMN_IMR_S3_INVAL_TAG_ID_RESET                                         0x0
#define MCMN_IMR_S3_NULL_RNG_MSK_LSB                                           4
#define MCMN_IMR_S3_NULL_RNG_MSK_MSB                                           4
#define MCMN_IMR_S3_NULL_RNG_MSK_MASK                                          0x10
#define MCMN_IMR_S3_NULL_RNG_MSK_GET(x)                                        (((x) & MCMN_IMR_S3_NULL_RNG_MSK_MASK) >> MCMN_IMR_S3_NULL_RNG_MSK_LSB)
#define MCMN_IMR_S3_NULL_RNG_MSK_SET(x)                                        (((0 | (x)) << MCMN_IMR_S3_NULL_RNG_MSK_LSB) & MCMN_IMR_S3_NULL_RNG_MSK_MASK)
#define MCMN_IMR_S3_NULL_RNG_MSK_RESET                                         0x0
#define MCMN_IMR_S3_MDAT_TLV_LSB                                               3
#define MCMN_IMR_S3_MDAT_TLV_MSB                                               3
#define MCMN_IMR_S3_MDAT_TLV_MASK                                              0x8
#define MCMN_IMR_S3_MDAT_TLV_GET(x)                                            (((x) & MCMN_IMR_S3_MDAT_TLV_MASK) >> MCMN_IMR_S3_MDAT_TLV_LSB)
#define MCMN_IMR_S3_MDAT_TLV_SET(x)                                            (((0 | (x)) << MCMN_IMR_S3_MDAT_TLV_LSB) & MCMN_IMR_S3_MDAT_TLV_MASK)
#define MCMN_IMR_S3_MDAT_TLV_RESET                                             0x0
#define MCMN_IMR_S3_NON_PKT_BUF_LSB                                            2
#define MCMN_IMR_S3_NON_PKT_BUF_MSB                                            2
#define MCMN_IMR_S3_NON_PKT_BUF_MASK                                           0x4
#define MCMN_IMR_S3_NON_PKT_BUF_GET(x)                                         (((x) & MCMN_IMR_S3_NON_PKT_BUF_MASK) >> MCMN_IMR_S3_NON_PKT_BUF_LSB)
#define MCMN_IMR_S3_NON_PKT_BUF_SET(x)                                         (((0 | (x)) << MCMN_IMR_S3_NON_PKT_BUF_LSB) & MCMN_IMR_S3_NON_PKT_BUF_MASK)
#define MCMN_IMR_S3_NON_PKT_BUF_RESET                                          0x0
#define MCMN_IMR_S3_RXDMA_WD_TOUT_LSB                                          1
#define MCMN_IMR_S3_RXDMA_WD_TOUT_MSB                                          1
#define MCMN_IMR_S3_RXDMA_WD_TOUT_MASK                                         0x2
#define MCMN_IMR_S3_RXDMA_WD_TOUT_GET(x)                                       (((x) & MCMN_IMR_S3_RXDMA_WD_TOUT_MASK) >> MCMN_IMR_S3_RXDMA_WD_TOUT_LSB)
#define MCMN_IMR_S3_RXDMA_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_IMR_S3_RXDMA_WD_TOUT_LSB) & MCMN_IMR_S3_RXDMA_WD_TOUT_MASK)
#define MCMN_IMR_S3_RXDMA_WD_TOUT_RESET                                        0x0
#define MCMN_IMR_S3_RXDMA_IDLE_LSB                                             0
#define MCMN_IMR_S3_RXDMA_IDLE_MSB                                             0
#define MCMN_IMR_S3_RXDMA_IDLE_MASK                                            0x1
#define MCMN_IMR_S3_RXDMA_IDLE_GET(x)                                          (((x) & MCMN_IMR_S3_RXDMA_IDLE_MASK) >> MCMN_IMR_S3_RXDMA_IDLE_LSB)
#define MCMN_IMR_S3_RXDMA_IDLE_SET(x)                                          (((0 | (x)) << MCMN_IMR_S3_RXDMA_IDLE_LSB) & MCMN_IMR_S3_RXDMA_IDLE_MASK)
#define MCMN_IMR_S3_RXDMA_IDLE_RESET                                           0x0
#define MCMN_IMR_S3_ADDRESS                                                    (0x40 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S3_RSTMASK                                                    0x3fff
#define MCMN_IMR_S3_RESET                                                      0x0

// 0x44 (MCMN_IMR_S4)
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_LSB                                     8
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_MSB                                     8
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_MASK                                    0x100
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_GET(x)                                  (((x) & MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_MASK) >> MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_LSB)
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_SET(x)                                  (((0 | (x)) << MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_LSB) & MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_MASK)
#define MCMN_IMR_S4_TXPCU_TX_PHY_ERROR_RESET                                   0x0
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB                             7
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_MSB                             7
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK                            0x80
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_GET(x)                          (((x) & MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK) >> MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB)
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_SET(x)                          (((0 | (x)) << MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_LSB) & MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_MASK)
#define MCMN_IMR_S4_TXPCU_RESPONSE_FRAME_ERROR_RESET                           0x0
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_LSB                                   6
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_MSB                                   6
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_MASK                                  0x40
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_GET(x)                                (((x) & MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_MASK) >> MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_LSB)
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_SET(x)                                (((0 | (x)) << MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_LSB) & MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_MASK)
#define MCMN_IMR_S4_TXPCU_RCVD_TLV_ABORT_RESET                                 0x0
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB                               5
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MSB                               5
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK                              0x20
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_GET(x)                            (((x) & MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK) >> MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB)
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_SET(x)                            (((0 | (x)) << MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_LSB) & MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_MASK)
#define MCMN_IMR_S4_TXPCU_REQD_TLVS_NOT_RCVD_RESET                             0x0
#define MCMN_IMR_S4_TXPCU_WD_TOUT_LSB                                          4
#define MCMN_IMR_S4_TXPCU_WD_TOUT_MSB                                          4
#define MCMN_IMR_S4_TXPCU_WD_TOUT_MASK                                         0x10
#define MCMN_IMR_S4_TXPCU_WD_TOUT_GET(x)                                       (((x) & MCMN_IMR_S4_TXPCU_WD_TOUT_MASK) >> MCMN_IMR_S4_TXPCU_WD_TOUT_LSB)
#define MCMN_IMR_S4_TXPCU_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_IMR_S4_TXPCU_WD_TOUT_LSB) & MCMN_IMR_S4_TXPCU_WD_TOUT_MASK)
#define MCMN_IMR_S4_TXPCU_WD_TOUT_RESET                                        0x0
#define MCMN_IMR_S4_BFEE_CV_TOUT_LSB                                           3
#define MCMN_IMR_S4_BFEE_CV_TOUT_MSB                                           3
#define MCMN_IMR_S4_BFEE_CV_TOUT_MASK                                          0x8
#define MCMN_IMR_S4_BFEE_CV_TOUT_GET(x)                                        (((x) & MCMN_IMR_S4_BFEE_CV_TOUT_MASK) >> MCMN_IMR_S4_BFEE_CV_TOUT_LSB)
#define MCMN_IMR_S4_BFEE_CV_TOUT_SET(x)                                        (((0 | (x)) << MCMN_IMR_S4_BFEE_CV_TOUT_LSB) & MCMN_IMR_S4_BFEE_CV_TOUT_MASK)
#define MCMN_IMR_S4_BFEE_CV_TOUT_RESET                                         0x0
#define MCMN_IMR_S4_DATA_URUN_LSB                                              2
#define MCMN_IMR_S4_DATA_URUN_MSB                                              2
#define MCMN_IMR_S4_DATA_URUN_MASK                                             0x4
#define MCMN_IMR_S4_DATA_URUN_GET(x)                                           (((x) & MCMN_IMR_S4_DATA_URUN_MASK) >> MCMN_IMR_S4_DATA_URUN_LSB)
#define MCMN_IMR_S4_DATA_URUN_SET(x)                                           (((0 | (x)) << MCMN_IMR_S4_DATA_URUN_LSB) & MCMN_IMR_S4_DATA_URUN_MASK)
#define MCMN_IMR_S4_DATA_URUN_RESET                                            0x0
#define MCMN_IMR_S4_RECD_GT_MPDU_LSB                                           1
#define MCMN_IMR_S4_RECD_GT_MPDU_MSB                                           1
#define MCMN_IMR_S4_RECD_GT_MPDU_MASK                                          0x2
#define MCMN_IMR_S4_RECD_GT_MPDU_GET(x)                                        (((x) & MCMN_IMR_S4_RECD_GT_MPDU_MASK) >> MCMN_IMR_S4_RECD_GT_MPDU_LSB)
#define MCMN_IMR_S4_RECD_GT_MPDU_SET(x)                                        (((0 | (x)) << MCMN_IMR_S4_RECD_GT_MPDU_LSB) & MCMN_IMR_S4_RECD_GT_MPDU_MASK)
#define MCMN_IMR_S4_RECD_GT_MPDU_RESET                                         0x0
#define MCMN_IMR_S4_RECD_LT_MPDU_LSB                                           0
#define MCMN_IMR_S4_RECD_LT_MPDU_MSB                                           0
#define MCMN_IMR_S4_RECD_LT_MPDU_MASK                                          0x1
#define MCMN_IMR_S4_RECD_LT_MPDU_GET(x)                                        (((x) & MCMN_IMR_S4_RECD_LT_MPDU_MASK) >> MCMN_IMR_S4_RECD_LT_MPDU_LSB)
#define MCMN_IMR_S4_RECD_LT_MPDU_SET(x)                                        (((0 | (x)) << MCMN_IMR_S4_RECD_LT_MPDU_LSB) & MCMN_IMR_S4_RECD_LT_MPDU_MASK)
#define MCMN_IMR_S4_RECD_LT_MPDU_RESET                                         0x0
#define MCMN_IMR_S4_ADDRESS                                                    (0x44 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S4_RSTMASK                                                    0x1ff
#define MCMN_IMR_S4_RESET                                                      0x0

// 0x48 (MCMN_IMR_S5)
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB                               17
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MSB                               17
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK                              0x20000
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_GET(x)                            (((x) & MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK) >> MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB)
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_SET(x)                            (((0 | (x)) << MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_LSB) & MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_MASK)
#define MCMN_IMR_S5_PHY_RXPCU_TLV_LENGTH_ERR_RESET                             0x0
#define MCMN_IMR_S5_RX_MAX_LENGTH_LSB                                          16
#define MCMN_IMR_S5_RX_MAX_LENGTH_MSB                                          16
#define MCMN_IMR_S5_RX_MAX_LENGTH_MASK                                         0x10000
#define MCMN_IMR_S5_RX_MAX_LENGTH_GET(x)                                       (((x) & MCMN_IMR_S5_RX_MAX_LENGTH_MASK) >> MCMN_IMR_S5_RX_MAX_LENGTH_LSB)
#define MCMN_IMR_S5_RX_MAX_LENGTH_SET(x)                                       (((0 | (x)) << MCMN_IMR_S5_RX_MAX_LENGTH_LSB) & MCMN_IMR_S5_RX_MAX_LENGTH_MASK)
#define MCMN_IMR_S5_RX_MAX_LENGTH_RESET                                        0x0
#define MCMN_IMR_S5_WDOG_TIMEOUT_LSB                                           15
#define MCMN_IMR_S5_WDOG_TIMEOUT_MSB                                           15
#define MCMN_IMR_S5_WDOG_TIMEOUT_MASK                                          0x8000
#define MCMN_IMR_S5_WDOG_TIMEOUT_GET(x)                                        (((x) & MCMN_IMR_S5_WDOG_TIMEOUT_MASK) >> MCMN_IMR_S5_WDOG_TIMEOUT_LSB)
#define MCMN_IMR_S5_WDOG_TIMEOUT_SET(x)                                        (((0 | (x)) << MCMN_IMR_S5_WDOG_TIMEOUT_LSB) & MCMN_IMR_S5_WDOG_TIMEOUT_MASK)
#define MCMN_IMR_S5_WDOG_TIMEOUT_RESET                                         0x0
#define MCMN_IMR_S5_MIB_COUNTER_LSB                                            14
#define MCMN_IMR_S5_MIB_COUNTER_MSB                                            14
#define MCMN_IMR_S5_MIB_COUNTER_MASK                                           0x4000
#define MCMN_IMR_S5_MIB_COUNTER_GET(x)                                         (((x) & MCMN_IMR_S5_MIB_COUNTER_MASK) >> MCMN_IMR_S5_MIB_COUNTER_LSB)
#define MCMN_IMR_S5_MIB_COUNTER_SET(x)                                         (((0 | (x)) << MCMN_IMR_S5_MIB_COUNTER_LSB) & MCMN_IMR_S5_MIB_COUNTER_MASK)
#define MCMN_IMR_S5_MIB_COUNTER_RESET                                          0x0
#define MCMN_IMR_S5_RX_OVFL_LSB                                                13
#define MCMN_IMR_S5_RX_OVFL_MSB                                                13
#define MCMN_IMR_S5_RX_OVFL_MASK                                               0x2000
#define MCMN_IMR_S5_RX_OVFL_GET(x)                                             (((x) & MCMN_IMR_S5_RX_OVFL_MASK) >> MCMN_IMR_S5_RX_OVFL_LSB)
#define MCMN_IMR_S5_RX_OVFL_SET(x)                                             (((0 | (x)) << MCMN_IMR_S5_RX_OVFL_LSB) & MCMN_IMR_S5_RX_OVFL_MASK)
#define MCMN_IMR_S5_RX_OVFL_RESET                                              0x0
#define MCMN_IMR_S5_CONFIG_PHY_ERR_LSB                                         12
#define MCMN_IMR_S5_CONFIG_PHY_ERR_MSB                                         12
#define MCMN_IMR_S5_CONFIG_PHY_ERR_MASK                                        0x1000
#define MCMN_IMR_S5_CONFIG_PHY_ERR_GET(x)                                      (((x) & MCMN_IMR_S5_CONFIG_PHY_ERR_MASK) >> MCMN_IMR_S5_CONFIG_PHY_ERR_LSB)
#define MCMN_IMR_S5_CONFIG_PHY_ERR_SET(x)                                      (((0 | (x)) << MCMN_IMR_S5_CONFIG_PHY_ERR_LSB) & MCMN_IMR_S5_CONFIG_PHY_ERR_MASK)
#define MCMN_IMR_S5_CONFIG_PHY_ERR_RESET                                       0x0
#define MCMN_IMR_S5_RX_DTIM_LSB                                                10
#define MCMN_IMR_S5_RX_DTIM_MSB                                                11
#define MCMN_IMR_S5_RX_DTIM_MASK                                               0xc00
#define MCMN_IMR_S5_RX_DTIM_GET(x)                                             (((x) & MCMN_IMR_S5_RX_DTIM_MASK) >> MCMN_IMR_S5_RX_DTIM_LSB)
#define MCMN_IMR_S5_RX_DTIM_SET(x)                                             (((0 | (x)) << MCMN_IMR_S5_RX_DTIM_LSB) & MCMN_IMR_S5_RX_DTIM_MASK)
#define MCMN_IMR_S5_RX_DTIM_RESET                                              0x0
#define MCMN_IMR_S5_RX_TIM_LSB                                                 8
#define MCMN_IMR_S5_RX_TIM_MSB                                                 9
#define MCMN_IMR_S5_RX_TIM_MASK                                                0x300
#define MCMN_IMR_S5_RX_TIM_GET(x)                                              (((x) & MCMN_IMR_S5_RX_TIM_MASK) >> MCMN_IMR_S5_RX_TIM_LSB)
#define MCMN_IMR_S5_RX_TIM_SET(x)                                              (((0 | (x)) << MCMN_IMR_S5_RX_TIM_LSB) & MCMN_IMR_S5_RX_TIM_MASK)
#define MCMN_IMR_S5_RX_TIM_RESET                                               0x0
#define MCMN_IMR_S5_RX_NOTIM_LSB                                               6
#define MCMN_IMR_S5_RX_NOTIM_MSB                                               7
#define MCMN_IMR_S5_RX_NOTIM_MASK                                              0xc0
#define MCMN_IMR_S5_RX_NOTIM_GET(x)                                            (((x) & MCMN_IMR_S5_RX_NOTIM_MASK) >> MCMN_IMR_S5_RX_NOTIM_LSB)
#define MCMN_IMR_S5_RX_NOTIM_SET(x)                                            (((0 | (x)) << MCMN_IMR_S5_RX_NOTIM_LSB) & MCMN_IMR_S5_RX_NOTIM_MASK)
#define MCMN_IMR_S5_RX_NOTIM_RESET                                             0x0
#define MCMN_IMR_S5_RSSI_LOW_LSB                                               4
#define MCMN_IMR_S5_RSSI_LOW_MSB                                               5
#define MCMN_IMR_S5_RSSI_LOW_MASK                                              0x30
#define MCMN_IMR_S5_RSSI_LOW_GET(x)                                            (((x) & MCMN_IMR_S5_RSSI_LOW_MASK) >> MCMN_IMR_S5_RSSI_LOW_LSB)
#define MCMN_IMR_S5_RSSI_LOW_SET(x)                                            (((0 | (x)) << MCMN_IMR_S5_RSSI_LOW_LSB) & MCMN_IMR_S5_RSSI_LOW_MASK)
#define MCMN_IMR_S5_RSSI_LOW_RESET                                             0x0
#define MCMN_IMR_S5_RSSI_HIGH_LSB                                              2
#define MCMN_IMR_S5_RSSI_HIGH_MSB                                              3
#define MCMN_IMR_S5_RSSI_HIGH_MASK                                             0xc
#define MCMN_IMR_S5_RSSI_HIGH_GET(x)                                           (((x) & MCMN_IMR_S5_RSSI_HIGH_MASK) >> MCMN_IMR_S5_RSSI_HIGH_LSB)
#define MCMN_IMR_S5_RSSI_HIGH_SET(x)                                           (((0 | (x)) << MCMN_IMR_S5_RSSI_HIGH_LSB) & MCMN_IMR_S5_RSSI_HIGH_MASK)
#define MCMN_IMR_S5_RSSI_HIGH_RESET                                            0x0
#define MCMN_IMR_S5_BCON_MISS_LSB                                              0
#define MCMN_IMR_S5_BCON_MISS_MSB                                              1
#define MCMN_IMR_S5_BCON_MISS_MASK                                             0x3
#define MCMN_IMR_S5_BCON_MISS_GET(x)                                           (((x) & MCMN_IMR_S5_BCON_MISS_MASK) >> MCMN_IMR_S5_BCON_MISS_LSB)
#define MCMN_IMR_S5_BCON_MISS_SET(x)                                           (((0 | (x)) << MCMN_IMR_S5_BCON_MISS_LSB) & MCMN_IMR_S5_BCON_MISS_MASK)
#define MCMN_IMR_S5_BCON_MISS_RESET                                            0x0
#define MCMN_IMR_S5_ADDRESS                                                    (0x48 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S5_RSTMASK                                                    0x3ffff
#define MCMN_IMR_S5_RESET                                                      0x0

// 0x4c (MCMN_IMR_S6)
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_LSB                                        7
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_MSB                                        7
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_MASK                                       0x80
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_GET(x)                                     (((x) & MCMN_IMR_S6_MPDU_LENGTH_ERR_MASK) >> MCMN_IMR_S6_MPDU_LENGTH_ERR_LSB)
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_SET(x)                                     (((0 | (x)) << MCMN_IMR_S6_MPDU_LENGTH_ERR_LSB) & MCMN_IMR_S6_MPDU_LENGTH_ERR_MASK)
#define MCMN_IMR_S6_MPDU_LENGTH_ERR_RESET                                      0x0
#define MCMN_IMR_S6_SETUP_ERR_LSB                                              6
#define MCMN_IMR_S6_SETUP_ERR_MSB                                              6
#define MCMN_IMR_S6_SETUP_ERR_MASK                                             0x40
#define MCMN_IMR_S6_SETUP_ERR_GET(x)                                           (((x) & MCMN_IMR_S6_SETUP_ERR_MASK) >> MCMN_IMR_S6_SETUP_ERR_LSB)
#define MCMN_IMR_S6_SETUP_ERR_SET(x)                                           (((0 | (x)) << MCMN_IMR_S6_SETUP_ERR_LSB) & MCMN_IMR_S6_SETUP_ERR_MASK)
#define MCMN_IMR_S6_SETUP_ERR_RESET                                            0x0
#define MCMN_IMR_S6_OVERFLOW_ERR_LSB                                           5
#define MCMN_IMR_S6_OVERFLOW_ERR_MSB                                           5
#define MCMN_IMR_S6_OVERFLOW_ERR_MASK                                          0x20
#define MCMN_IMR_S6_OVERFLOW_ERR_GET(x)                                        (((x) & MCMN_IMR_S6_OVERFLOW_ERR_MASK) >> MCMN_IMR_S6_OVERFLOW_ERR_LSB)
#define MCMN_IMR_S6_OVERFLOW_ERR_SET(x)                                        (((0 | (x)) << MCMN_IMR_S6_OVERFLOW_ERR_LSB) & MCMN_IMR_S6_OVERFLOW_ERR_MASK)
#define MCMN_IMR_S6_OVERFLOW_ERR_RESET                                         0x0
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_LSB                                      4
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_MSB                                      4
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_MASK                                     0x10
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_GET(x)                                   (((x) & MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_MASK) >> MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_LSB)
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_SET(x)                                   (((0 | (x)) << MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_LSB) & MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_MASK)
#define MCMN_IMR_S6_TXDMA_PDG_LEN_ERR_RESET                                    0x0
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB                                  3
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_MSB                                  3
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK                                 0x8
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_GET(x)                               (((x) & MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK) >> MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB)
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_SET(x)                               (((0 | (x)) << MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_LSB) & MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_MASK)
#define MCMN_IMR_S6_HWSCH_PDG_TLV_LEN_ERR_RESET                                0x0
#define MCMN_IMR_S6_WRNG_TLV_ORD_LSB                                           2
#define MCMN_IMR_S6_WRNG_TLV_ORD_MSB                                           2
#define MCMN_IMR_S6_WRNG_TLV_ORD_MASK                                          0x4
#define MCMN_IMR_S6_WRNG_TLV_ORD_GET(x)                                        (((x) & MCMN_IMR_S6_WRNG_TLV_ORD_MASK) >> MCMN_IMR_S6_WRNG_TLV_ORD_LSB)
#define MCMN_IMR_S6_WRNG_TLV_ORD_SET(x)                                        (((0 | (x)) << MCMN_IMR_S6_WRNG_TLV_ORD_LSB) & MCMN_IMR_S6_WRNG_TLV_ORD_MASK)
#define MCMN_IMR_S6_WRNG_TLV_ORD_RESET                                         0x0
#define MCMN_IMR_S6_RCV_FCS_BSY_LSB                                            1
#define MCMN_IMR_S6_RCV_FCS_BSY_MSB                                            1
#define MCMN_IMR_S6_RCV_FCS_BSY_MASK                                           0x2
#define MCMN_IMR_S6_RCV_FCS_BSY_GET(x)                                         (((x) & MCMN_IMR_S6_RCV_FCS_BSY_MASK) >> MCMN_IMR_S6_RCV_FCS_BSY_LSB)
#define MCMN_IMR_S6_RCV_FCS_BSY_SET(x)                                         (((0 | (x)) << MCMN_IMR_S6_RCV_FCS_BSY_LSB) & MCMN_IMR_S6_RCV_FCS_BSY_MASK)
#define MCMN_IMR_S6_RCV_FCS_BSY_RESET                                          0x0
#define MCMN_IMR_S6_PDG_WD_TOUT_LSB                                            0
#define MCMN_IMR_S6_PDG_WD_TOUT_MSB                                            0
#define MCMN_IMR_S6_PDG_WD_TOUT_MASK                                           0x1
#define MCMN_IMR_S6_PDG_WD_TOUT_GET(x)                                         (((x) & MCMN_IMR_S6_PDG_WD_TOUT_MASK) >> MCMN_IMR_S6_PDG_WD_TOUT_LSB)
#define MCMN_IMR_S6_PDG_WD_TOUT_SET(x)                                         (((0 | (x)) << MCMN_IMR_S6_PDG_WD_TOUT_LSB) & MCMN_IMR_S6_PDG_WD_TOUT_MASK)
#define MCMN_IMR_S6_PDG_WD_TOUT_RESET                                          0x0
#define MCMN_IMR_S6_ADDRESS                                                    (0x4c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S6_RSTMASK                                                    0xff
#define MCMN_IMR_S6_RESET                                                      0x0

// 0x50 (MCMN_IMR_S7)
#define MCMN_IMR_S7_HW_RNG_THR_LSB                                             16
#define MCMN_IMR_S7_HW_RNG_THR_MSB                                             31
#define MCMN_IMR_S7_HW_RNG_THR_MASK                                            0xffff0000
#define MCMN_IMR_S7_HW_RNG_THR_GET(x)                                          (((x) & MCMN_IMR_S7_HW_RNG_THR_MASK) >> MCMN_IMR_S7_HW_RNG_THR_LSB)
#define MCMN_IMR_S7_HW_RNG_THR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S7_HW_RNG_THR_LSB) & MCMN_IMR_S7_HW_RNG_THR_MASK)
#define MCMN_IMR_S7_HW_RNG_THR_RESET                                           0x0
#define MCMN_IMR_S7_HW_RNG_PSD_LSB                                             0
#define MCMN_IMR_S7_HW_RNG_PSD_MSB                                             15
#define MCMN_IMR_S7_HW_RNG_PSD_MASK                                            0xffff
#define MCMN_IMR_S7_HW_RNG_PSD_GET(x)                                          (((x) & MCMN_IMR_S7_HW_RNG_PSD_MASK) >> MCMN_IMR_S7_HW_RNG_PSD_LSB)
#define MCMN_IMR_S7_HW_RNG_PSD_SET(x)                                          (((0 | (x)) << MCMN_IMR_S7_HW_RNG_PSD_LSB) & MCMN_IMR_S7_HW_RNG_PSD_MASK)
#define MCMN_IMR_S7_HW_RNG_PSD_RESET                                           0x0
#define MCMN_IMR_S7_ADDRESS                                                    (0x50 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S7_RSTMASK                                                    0xffffffff
#define MCMN_IMR_S7_RESET                                                      0x0

// 0x54 (MCMN_IMR_S8)
#define MCMN_IMR_S8_MTU_BKOF_LSB                                               0
#define MCMN_IMR_S8_MTU_BKOF_MSB                                               15
#define MCMN_IMR_S8_MTU_BKOF_MASK                                              0xffff
#define MCMN_IMR_S8_MTU_BKOF_GET(x)                                            (((x) & MCMN_IMR_S8_MTU_BKOF_MASK) >> MCMN_IMR_S8_MTU_BKOF_LSB)
#define MCMN_IMR_S8_MTU_BKOF_SET(x)                                            (((0 | (x)) << MCMN_IMR_S8_MTU_BKOF_LSB) & MCMN_IMR_S8_MTU_BKOF_MASK)
#define MCMN_IMR_S8_MTU_BKOF_RESET                                             0x0
#define MCMN_IMR_S8_ADDRESS                                                    (0x54 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S8_RSTMASK                                                    0xffff
#define MCMN_IMR_S8_RESET                                                      0x0

// 0x58 (MCMN_IMR_S9)
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_LSB                                    5
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_MSB                                    8
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_MASK                                   0x1e0
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_GET(x)                                 (((x) & MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_MASK) >> MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_LSB)
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_SET(x)                                 (((0 | (x)) << MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_LSB) & MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_MASK)
#define MCMN_IMR_S9_MTU_TX_BOUNDARY_INT_RESET                                  0x0
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB                      4
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MSB                      4
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK                     0x10
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_GET(x)                   (((x) & MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK) >> MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB)
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_SET(x)                   (((0 | (x)) << MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_LSB) & MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_MASK)
#define MCMN_IMR_S9_HWSCH_TX_STATUS_LOW_WMARK_REACHED_RESET                    0x0
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB                    3
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MSB                    3
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK                   0x8
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_GET(x)                 (((x) & MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK) >> MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB)
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_SET(x)                 (((0 | (x)) << MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_LSB) & MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_MASK)
#define MCMN_IMR_S9_HWSCH_TX_STATUS_PANIC_WMARK_REACHED_RESET                  0x0
#define MCMN_IMR_S9_AXI_RD_ERR_LSB                                             2
#define MCMN_IMR_S9_AXI_RD_ERR_MSB                                             2
#define MCMN_IMR_S9_AXI_RD_ERR_MASK                                            0x4
#define MCMN_IMR_S9_AXI_RD_ERR_GET(x)                                          (((x) & MCMN_IMR_S9_AXI_RD_ERR_MASK) >> MCMN_IMR_S9_AXI_RD_ERR_LSB)
#define MCMN_IMR_S9_AXI_RD_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S9_AXI_RD_ERR_LSB) & MCMN_IMR_S9_AXI_RD_ERR_MASK)
#define MCMN_IMR_S9_AXI_RD_ERR_RESET                                           0x0
#define MCMN_IMR_S9_AXI_WR_ERR_LSB                                             1
#define MCMN_IMR_S9_AXI_WR_ERR_MSB                                             1
#define MCMN_IMR_S9_AXI_WR_ERR_MASK                                            0x2
#define MCMN_IMR_S9_AXI_WR_ERR_GET(x)                                          (((x) & MCMN_IMR_S9_AXI_WR_ERR_MASK) >> MCMN_IMR_S9_AXI_WR_ERR_LSB)
#define MCMN_IMR_S9_AXI_WR_ERR_SET(x)                                          (((0 | (x)) << MCMN_IMR_S9_AXI_WR_ERR_LSB) & MCMN_IMR_S9_AXI_WR_ERR_MASK)
#define MCMN_IMR_S9_AXI_WR_ERR_RESET                                           0x0
#define MCMN_IMR_S9_HWSCH_WD_TOUT_LSB                                          0
#define MCMN_IMR_S9_HWSCH_WD_TOUT_MSB                                          0
#define MCMN_IMR_S9_HWSCH_WD_TOUT_MASK                                         0x1
#define MCMN_IMR_S9_HWSCH_WD_TOUT_GET(x)                                       (((x) & MCMN_IMR_S9_HWSCH_WD_TOUT_MASK) >> MCMN_IMR_S9_HWSCH_WD_TOUT_LSB)
#define MCMN_IMR_S9_HWSCH_WD_TOUT_SET(x)                                       (((0 | (x)) << MCMN_IMR_S9_HWSCH_WD_TOUT_LSB) & MCMN_IMR_S9_HWSCH_WD_TOUT_MASK)
#define MCMN_IMR_S9_HWSCH_WD_TOUT_RESET                                        0x0
#define MCMN_IMR_S9_ADDRESS                                                    (0x58 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S9_RSTMASK                                                    0x1ff
#define MCMN_IMR_S9_RESET                                                      0x0

// 0x5c (MCMN_IMR_S10)
#define MCMN_IMR_S10_AXI_TMOUT_LSB                                             1
#define MCMN_IMR_S10_AXI_TMOUT_MSB                                             1
#define MCMN_IMR_S10_AXI_TMOUT_MASK                                            0x2
#define MCMN_IMR_S10_AXI_TMOUT_GET(x)                                          (((x) & MCMN_IMR_S10_AXI_TMOUT_MASK) >> MCMN_IMR_S10_AXI_TMOUT_LSB)
#define MCMN_IMR_S10_AXI_TMOUT_SET(x)                                          (((0 | (x)) << MCMN_IMR_S10_AXI_TMOUT_LSB) & MCMN_IMR_S10_AXI_TMOUT_MASK)
#define MCMN_IMR_S10_AXI_TMOUT_RESET                                           0x0
#define MCMN_IMR_S10_AXI_RESP_ERR_LSB                                          0
#define MCMN_IMR_S10_AXI_RESP_ERR_MSB                                          0
#define MCMN_IMR_S10_AXI_RESP_ERR_MASK                                         0x1
#define MCMN_IMR_S10_AXI_RESP_ERR_GET(x)                                       (((x) & MCMN_IMR_S10_AXI_RESP_ERR_MASK) >> MCMN_IMR_S10_AXI_RESP_ERR_LSB)
#define MCMN_IMR_S10_AXI_RESP_ERR_SET(x)                                       (((0 | (x)) << MCMN_IMR_S10_AXI_RESP_ERR_LSB) & MCMN_IMR_S10_AXI_RESP_ERR_MASK)
#define MCMN_IMR_S10_AXI_RESP_ERR_RESET                                        0x0
#define MCMN_IMR_S10_ADDRESS                                                   (0x5c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S10_RSTMASK                                                   0x3
#define MCMN_IMR_S10_RESET                                                     0x0

// 0x68 (MPDU_LINK_DESC_BASE_ADDR)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_LSB                                       0
#define MPDU_LINK_DESC_BASE_ADDR_VAL_MSB                                       31
#define MPDU_LINK_DESC_BASE_ADDR_VAL_MASK                                      0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_VAL_GET(x)                                    (((x) & MPDU_LINK_DESC_BASE_ADDR_VAL_MASK) >> MPDU_LINK_DESC_BASE_ADDR_VAL_LSB)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_SET(x)                                    (((0 | (x)) << MPDU_LINK_DESC_BASE_ADDR_VAL_LSB) & MPDU_LINK_DESC_BASE_ADDR_VAL_MASK)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_RESET                                     0x0
#define MPDU_LINK_DESC_BASE_ADDR_ADDRESS                                       (0x68 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_BASE_ADDR_RSTMASK                                       0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_RESET                                         0x0

// 0x68 (MPDU_LINK_DESC_BASE_ADDR_0)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_LSB                                     0
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_MSB                                     31
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_MASK                                    0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_GET(x)                                  (((x) & MPDU_LINK_DESC_BASE_ADDR_VAL_0_MASK) >> MPDU_LINK_DESC_BASE_ADDR_VAL_0_LSB)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_SET(x)                                  (((0 | (x)) << MPDU_LINK_DESC_BASE_ADDR_VAL_0_LSB) & MPDU_LINK_DESC_BASE_ADDR_VAL_0_MASK)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_0_RESET                                   0x0
#define MPDU_LINK_DESC_BASE_ADDR_0_ADDRESS                                     (0x68 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_BASE_ADDR_0_RSTMASK                                     0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_0_RESET                                       0x0

// 0x6c (MPDU_LINK_DESC_BASE_ADDR_1)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_LSB                                     0
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_MSB                                     31
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_MASK                                    0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_GET(x)                                  (((x) & MPDU_LINK_DESC_BASE_ADDR_VAL_1_MASK) >> MPDU_LINK_DESC_BASE_ADDR_VAL_1_LSB)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_SET(x)                                  (((0 | (x)) << MPDU_LINK_DESC_BASE_ADDR_VAL_1_LSB) & MPDU_LINK_DESC_BASE_ADDR_VAL_1_MASK)
#define MPDU_LINK_DESC_BASE_ADDR_VAL_1_RESET                                   0x0
#define MPDU_LINK_DESC_BASE_ADDR_1_ADDRESS                                     (0x6c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_BASE_ADDR_1_RSTMASK                                     0xffffffff
#define MPDU_LINK_DESC_BASE_ADDR_1_RESET                                       0x0

// 0x70 (MPDU_LINK_DESC_MIN_IDX)
#define MPDU_LINK_DESC_MIN_IDX_VAL_LSB                                         0
#define MPDU_LINK_DESC_MIN_IDX_VAL_MSB                                         13
#define MPDU_LINK_DESC_MIN_IDX_VAL_MASK                                        0x3fff
#define MPDU_LINK_DESC_MIN_IDX_VAL_GET(x)                                      (((x) & MPDU_LINK_DESC_MIN_IDX_VAL_MASK) >> MPDU_LINK_DESC_MIN_IDX_VAL_LSB)
#define MPDU_LINK_DESC_MIN_IDX_VAL_SET(x)                                      (((0 | (x)) << MPDU_LINK_DESC_MIN_IDX_VAL_LSB) & MPDU_LINK_DESC_MIN_IDX_VAL_MASK)
#define MPDU_LINK_DESC_MIN_IDX_VAL_RESET                                       0x0
#define MPDU_LINK_DESC_MIN_IDX_ADDRESS                                         (0x70 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MIN_IDX_RSTMASK                                         0x3fff
#define MPDU_LINK_DESC_MIN_IDX_RESET                                           0x0

// 0x70 (MPDU_LINK_DESC_MIN_IDX_0)
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_LSB                                       0
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_MSB                                       13
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_MASK                                      0x3fff
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_GET(x)                                    (((x) & MPDU_LINK_DESC_MIN_IDX_VAL_0_MASK) >> MPDU_LINK_DESC_MIN_IDX_VAL_0_LSB)
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_SET(x)                                    (((0 | (x)) << MPDU_LINK_DESC_MIN_IDX_VAL_0_LSB) & MPDU_LINK_DESC_MIN_IDX_VAL_0_MASK)
#define MPDU_LINK_DESC_MIN_IDX_VAL_0_RESET                                     0x0
#define MPDU_LINK_DESC_MIN_IDX_0_ADDRESS                                       (0x70 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MIN_IDX_0_RSTMASK                                       0x3fff
#define MPDU_LINK_DESC_MIN_IDX_0_RESET                                         0x0

// 0x74 (MPDU_LINK_DESC_MIN_IDX_1)
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_LSB                                       0
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_MSB                                       13
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_MASK                                      0x3fff
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_GET(x)                                    (((x) & MPDU_LINK_DESC_MIN_IDX_VAL_1_MASK) >> MPDU_LINK_DESC_MIN_IDX_VAL_1_LSB)
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_SET(x)                                    (((0 | (x)) << MPDU_LINK_DESC_MIN_IDX_VAL_1_LSB) & MPDU_LINK_DESC_MIN_IDX_VAL_1_MASK)
#define MPDU_LINK_DESC_MIN_IDX_VAL_1_RESET                                     0x0
#define MPDU_LINK_DESC_MIN_IDX_1_ADDRESS                                       (0x74 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MIN_IDX_1_RSTMASK                                       0x3fff
#define MPDU_LINK_DESC_MIN_IDX_1_RESET                                         0x0

// 0x78 (MPDU_LINK_DESC_MAX_IDX)
#define MPDU_LINK_DESC_MAX_IDX_VAL_LSB                                         0
#define MPDU_LINK_DESC_MAX_IDX_VAL_MSB                                         13
#define MPDU_LINK_DESC_MAX_IDX_VAL_MASK                                        0x3fff
#define MPDU_LINK_DESC_MAX_IDX_VAL_GET(x)                                      (((x) & MPDU_LINK_DESC_MAX_IDX_VAL_MASK) >> MPDU_LINK_DESC_MAX_IDX_VAL_LSB)
#define MPDU_LINK_DESC_MAX_IDX_VAL_SET(x)                                      (((0 | (x)) << MPDU_LINK_DESC_MAX_IDX_VAL_LSB) & MPDU_LINK_DESC_MAX_IDX_VAL_MASK)
#define MPDU_LINK_DESC_MAX_IDX_VAL_RESET                                       0x0
#define MPDU_LINK_DESC_MAX_IDX_ADDRESS                                         (0x78 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MAX_IDX_RSTMASK                                         0x3fff
#define MPDU_LINK_DESC_MAX_IDX_RESET                                           0x0

// 0x78 (MPDU_LINK_DESC_MAX_IDX_0)
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_LSB                                       0
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_MSB                                       13
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_MASK                                      0x3fff
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_GET(x)                                    (((x) & MPDU_LINK_DESC_MAX_IDX_VAL_0_MASK) >> MPDU_LINK_DESC_MAX_IDX_VAL_0_LSB)
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_SET(x)                                    (((0 | (x)) << MPDU_LINK_DESC_MAX_IDX_VAL_0_LSB) & MPDU_LINK_DESC_MAX_IDX_VAL_0_MASK)
#define MPDU_LINK_DESC_MAX_IDX_VAL_0_RESET                                     0x0
#define MPDU_LINK_DESC_MAX_IDX_0_ADDRESS                                       (0x78 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MAX_IDX_0_RSTMASK                                       0x3fff
#define MPDU_LINK_DESC_MAX_IDX_0_RESET                                         0x0

// 0x7c (MPDU_LINK_DESC_MAX_IDX_1)
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_LSB                                       0
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_MSB                                       13
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_MASK                                      0x3fff
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_GET(x)                                    (((x) & MPDU_LINK_DESC_MAX_IDX_VAL_1_MASK) >> MPDU_LINK_DESC_MAX_IDX_VAL_1_LSB)
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_SET(x)                                    (((0 | (x)) << MPDU_LINK_DESC_MAX_IDX_VAL_1_LSB) & MPDU_LINK_DESC_MAX_IDX_VAL_1_MASK)
#define MPDU_LINK_DESC_MAX_IDX_VAL_1_RESET                                     0x0
#define MPDU_LINK_DESC_MAX_IDX_1_ADDRESS                                       (0x7c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_MAX_IDX_1_RSTMASK                                       0x3fff
#define MPDU_LINK_DESC_MAX_IDX_1_RESET                                         0x0

// 0x80 (MPDU_LINK_EXT_DESC_SWAP)
#define MPDU_LINK_EXT_DESC_SWAP_VAL_LSB                                        0
#define MPDU_LINK_EXT_DESC_SWAP_VAL_MSB                                        0
#define MPDU_LINK_EXT_DESC_SWAP_VAL_MASK                                       0x1
#define MPDU_LINK_EXT_DESC_SWAP_VAL_GET(x)                                     (((x) & MPDU_LINK_EXT_DESC_SWAP_VAL_MASK) >> MPDU_LINK_EXT_DESC_SWAP_VAL_LSB)
#define MPDU_LINK_EXT_DESC_SWAP_VAL_SET(x)                                     (((0 | (x)) << MPDU_LINK_EXT_DESC_SWAP_VAL_LSB) & MPDU_LINK_EXT_DESC_SWAP_VAL_MASK)
#define MPDU_LINK_EXT_DESC_SWAP_VAL_RESET                                      0x0
#define MPDU_LINK_EXT_DESC_SWAP_ADDRESS                                        (0x80 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_EXT_DESC_SWAP_RSTMASK                                        0x1
#define MPDU_LINK_EXT_DESC_SWAP_RESET                                          0x0

// 0x84 (MSDU_LINK_DESC_SWAP)
#define MSDU_LINK_DESC_SWAP_VAL_LSB                                            0
#define MSDU_LINK_DESC_SWAP_VAL_MSB                                            0
#define MSDU_LINK_DESC_SWAP_VAL_MASK                                           0x1
#define MSDU_LINK_DESC_SWAP_VAL_GET(x)                                         (((x) & MSDU_LINK_DESC_SWAP_VAL_MASK) >> MSDU_LINK_DESC_SWAP_VAL_LSB)
#define MSDU_LINK_DESC_SWAP_VAL_SET(x)                                         (((0 | (x)) << MSDU_LINK_DESC_SWAP_VAL_LSB) & MSDU_LINK_DESC_SWAP_VAL_MASK)
#define MSDU_LINK_DESC_SWAP_VAL_RESET                                          0x0
#define MSDU_LINK_DESC_SWAP_ADDRESS                                            (0x84 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_DESC_SWAP_RSTMASK                                            0x1
#define MSDU_LINK_DESC_SWAP_RESET                                              0x0

// 0x88 (MPDU_LINK_EXT_DESC_BASE_ADDR)
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB                                   0
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_MSB                                   31
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK                                  0xffffffff
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_GET(x)                                (((x) & MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK) >> MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB)
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_SET(x)                                (((0 | (x)) << MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB) & MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK)
#define MPDU_LINK_EXT_DESC_BASE_ADDR_VAL_RESET                                 0x0
#define MPDU_LINK_EXT_DESC_BASE_ADDR_ADDRESS                                   (0x88 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_EXT_DESC_BASE_ADDR_RSTMASK                                   0xffffffff
#define MPDU_LINK_EXT_DESC_BASE_ADDR_RESET                                     0x0

// 0x90 (MSDU_LINK_DESC_BASE_ADDR)
#define MSDU_LINK_DESC_BASE_ADDR_VAL_LSB                                       0
#define MSDU_LINK_DESC_BASE_ADDR_VAL_MSB                                       31
#define MSDU_LINK_DESC_BASE_ADDR_VAL_MASK                                      0xffffffff
#define MSDU_LINK_DESC_BASE_ADDR_VAL_GET(x)                                    (((x) & MSDU_LINK_DESC_BASE_ADDR_VAL_MASK) >> MSDU_LINK_DESC_BASE_ADDR_VAL_LSB)
#define MSDU_LINK_DESC_BASE_ADDR_VAL_SET(x)                                    (((0 | (x)) << MSDU_LINK_DESC_BASE_ADDR_VAL_LSB) & MSDU_LINK_DESC_BASE_ADDR_VAL_MASK)
#define MSDU_LINK_DESC_BASE_ADDR_VAL_RESET                                     0x0
#define MSDU_LINK_DESC_BASE_ADDR_ADDRESS                                       (0x90 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_DESC_BASE_ADDR_RSTMASK                                       0xffffffff
#define MSDU_LINK_DESC_BASE_ADDR_RESET                                         0x0

// 0xa0 (MSDU_LINK_EXT_DESC_BASE_ADDR)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB                                   0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_MSB                                   31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK                                  0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_ADDRESS                                   (0xa0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_RSTMASK                                   0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_RESET                                     0x0

// 0xa0 (MSDU_LINK_EXT_DESC_BASE_ADDR_0)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_0_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_0_ADDRESS                                 (0xa0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_0_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_0_RESET                                   0x0

// 0xa4 (MSDU_LINK_EXT_DESC_BASE_ADDR_1)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_1_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_1_ADDRESS                                 (0xa4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_1_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_1_RESET                                   0x0

// 0xa8 (MSDU_LINK_EXT_DESC_BASE_ADDR_2)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_2_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_2_ADDRESS                                 (0xa8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_2_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_2_RESET                                   0x0

// 0xac (MSDU_LINK_EXT_DESC_BASE_ADDR_3)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_3_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_3_ADDRESS                                 (0xac + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_3_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_3_RESET                                   0x0

// 0xb0 (MSDU_LINK_EXT_DESC_BASE_ADDR_4)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_4_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_4_ADDRESS                                 (0xb0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_4_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_4_RESET                                   0x0

// 0xb4 (MSDU_LINK_EXT_DESC_BASE_ADDR_5)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_5_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_5_ADDRESS                                 (0xb4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_5_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_5_RESET                                   0x0

// 0xb8 (MSDU_LINK_EXT_DESC_BASE_ADDR_6)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_6_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_6_ADDRESS                                 (0xb8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_6_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_6_RESET                                   0x0

// 0xbc (MSDU_LINK_EXT_DESC_BASE_ADDR_7)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_7_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_7_ADDRESS                                 (0xbc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_7_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_7_RESET                                   0x0

// 0xc0 (MSDU_LINK_EXT_DESC_BASE_ADDR_8)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_8_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_8_ADDRESS                                 (0xc0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_8_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_8_RESET                                   0x0

// 0xc4 (MSDU_LINK_EXT_DESC_BASE_ADDR_9)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_LSB                                 0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_MSB                                 31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_MASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_GET(x)                              (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_SET(x)                              (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_9_RESET                               0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_9_ADDRESS                                 (0xc4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_9_RSTMASK                                 0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_9_RESET                                   0x0

// 0xc8 (MSDU_LINK_EXT_DESC_BASE_ADDR_10)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_10_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_10_ADDRESS                                (0xc8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_10_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_10_RESET                                  0x0

// 0xcc (MSDU_LINK_EXT_DESC_BASE_ADDR_11)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_11_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_11_ADDRESS                                (0xcc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_11_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_11_RESET                                  0x0

// 0xd0 (MSDU_LINK_EXT_DESC_BASE_ADDR_12)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_12_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_12_ADDRESS                                (0xd0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_12_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_12_RESET                                  0x0

// 0xd4 (MSDU_LINK_EXT_DESC_BASE_ADDR_13)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_13_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_13_ADDRESS                                (0xd4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_13_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_13_RESET                                  0x0

// 0xd8 (MSDU_LINK_EXT_DESC_BASE_ADDR_14)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_14_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_14_ADDRESS                                (0xd8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_14_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_14_RESET                                  0x0

// 0xdc (MSDU_LINK_EXT_DESC_BASE_ADDR_15)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_LSB                                0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_MSB                                31
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_MASK                               0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_GET(x)                             (((x) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_MASK) >> MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_LSB)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_SET(x)                             (((0 | (x)) << MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_LSB) & MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_MASK)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_VAL_15_RESET                              0x0
#define MSDU_LINK_EXT_DESC_BASE_ADDR_15_ADDRESS                                (0xdc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_BASE_ADDR_15_RSTMASK                                0xffffffff
#define MSDU_LINK_EXT_DESC_BASE_ADDR_15_RESET                                  0x0

// 0xe0 (MSDU_LINK_EXT_DESC_MIN_IDX)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_LSB                                     0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_MSB                                     15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_MASK                                    0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_ADDRESS                                     (0xe0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_RSTMASK                                     0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_RESET                                       0x0

// 0xe0 (MSDU_LINK_EXT_DESC_MIN_IDX_0)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_0_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_0_ADDRESS                                   (0xe0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_0_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_0_RESET                                     0x0

// 0xe4 (MSDU_LINK_EXT_DESC_MIN_IDX_1)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_1_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_1_ADDRESS                                   (0xe4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_1_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_1_RESET                                     0x0

// 0xe8 (MSDU_LINK_EXT_DESC_MIN_IDX_2)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_2_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_2_ADDRESS                                   (0xe8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_2_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_2_RESET                                     0x0

// 0xec (MSDU_LINK_EXT_DESC_MIN_IDX_3)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_3_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_3_ADDRESS                                   (0xec + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_3_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_3_RESET                                     0x0

// 0xf0 (MSDU_LINK_EXT_DESC_MIN_IDX_4)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_4_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_4_ADDRESS                                   (0xf0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_4_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_4_RESET                                     0x0

// 0xf4 (MSDU_LINK_EXT_DESC_MIN_IDX_5)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_5_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_5_ADDRESS                                   (0xf4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_5_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_5_RESET                                     0x0

// 0xf8 (MSDU_LINK_EXT_DESC_MIN_IDX_6)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_6_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_6_ADDRESS                                   (0xf8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_6_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_6_RESET                                     0x0

// 0xfc (MSDU_LINK_EXT_DESC_MIN_IDX_7)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_7_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_7_ADDRESS                                   (0xfc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_7_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_7_RESET                                     0x0

// 0x100 (MSDU_LINK_EXT_DESC_MIN_IDX_8)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_8_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_8_ADDRESS                                   (0x100 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_8_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_8_RESET                                     0x0

// 0x104 (MSDU_LINK_EXT_DESC_MIN_IDX_9)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_LSB                                   0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_MSB                                   15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_9_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_9_ADDRESS                                   (0x104 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_9_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_9_RESET                                     0x0

// 0x108 (MSDU_LINK_EXT_DESC_MIN_IDX_10)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_10_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_10_ADDRESS                                  (0x108 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_10_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_10_RESET                                    0x0

// 0x10c (MSDU_LINK_EXT_DESC_MIN_IDX_11)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_11_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_11_ADDRESS                                  (0x10c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_11_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_11_RESET                                    0x0

// 0x110 (MSDU_LINK_EXT_DESC_MIN_IDX_12)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_12_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_12_ADDRESS                                  (0x110 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_12_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_12_RESET                                    0x0

// 0x114 (MSDU_LINK_EXT_DESC_MIN_IDX_13)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_13_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_13_ADDRESS                                  (0x114 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_13_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_13_RESET                                    0x0

// 0x118 (MSDU_LINK_EXT_DESC_MIN_IDX_14)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_14_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_14_ADDRESS                                  (0x118 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_14_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_14_RESET                                    0x0

// 0x11c (MSDU_LINK_EXT_DESC_MIN_IDX_15)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_LSB                                  0
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_MSB                                  15
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_MASK) >> MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_LSB)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_LSB) & MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_MASK)
#define MSDU_LINK_EXT_DESC_MIN_IDX_VAL_15_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MIN_IDX_15_ADDRESS                                  (0x11c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MIN_IDX_15_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MIN_IDX_15_RESET                                    0x0

// 0x120 (MSDU_LINK_EXT_DESC_MAX_IDX)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_LSB                                     0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_MSB                                     15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_MASK                                    0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_ADDRESS                                     (0x120 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_RSTMASK                                     0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_RESET                                       0x0

// 0x120 (MSDU_LINK_EXT_DESC_MAX_IDX_0)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_0_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_0_ADDRESS                                   (0x120 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_0_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_0_RESET                                     0x0

// 0x124 (MSDU_LINK_EXT_DESC_MAX_IDX_1)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_1_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_1_ADDRESS                                   (0x124 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_1_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_1_RESET                                     0x0

// 0x128 (MSDU_LINK_EXT_DESC_MAX_IDX_2)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_2_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_2_ADDRESS                                   (0x128 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_2_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_2_RESET                                     0x0

// 0x12c (MSDU_LINK_EXT_DESC_MAX_IDX_3)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_3_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_3_ADDRESS                                   (0x12c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_3_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_3_RESET                                     0x0

// 0x130 (MSDU_LINK_EXT_DESC_MAX_IDX_4)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_4_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_4_ADDRESS                                   (0x130 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_4_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_4_RESET                                     0x0

// 0x134 (MSDU_LINK_EXT_DESC_MAX_IDX_5)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_5_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_5_ADDRESS                                   (0x134 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_5_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_5_RESET                                     0x0

// 0x138 (MSDU_LINK_EXT_DESC_MAX_IDX_6)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_6_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_6_ADDRESS                                   (0x138 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_6_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_6_RESET                                     0x0

// 0x13c (MSDU_LINK_EXT_DESC_MAX_IDX_7)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_7_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_7_ADDRESS                                   (0x13c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_7_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_7_RESET                                     0x0

// 0x140 (MSDU_LINK_EXT_DESC_MAX_IDX_8)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_8_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_8_ADDRESS                                   (0x140 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_8_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_8_RESET                                     0x0

// 0x144 (MSDU_LINK_EXT_DESC_MAX_IDX_9)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_LSB                                   0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_MSB                                   15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_MASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_GET(x)                                (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_SET(x)                                (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_9_RESET                                 0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_9_ADDRESS                                   (0x144 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_9_RSTMASK                                   0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_9_RESET                                     0x0

// 0x148 (MSDU_LINK_EXT_DESC_MAX_IDX_10)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_10_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_10_ADDRESS                                  (0x148 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_10_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_10_RESET                                    0x0

// 0x14c (MSDU_LINK_EXT_DESC_MAX_IDX_11)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_11_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_11_ADDRESS                                  (0x14c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_11_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_11_RESET                                    0x0

// 0x150 (MSDU_LINK_EXT_DESC_MAX_IDX_12)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_12_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_12_ADDRESS                                  (0x150 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_12_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_12_RESET                                    0x0

// 0x154 (MSDU_LINK_EXT_DESC_MAX_IDX_13)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_13_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_13_ADDRESS                                  (0x154 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_13_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_13_RESET                                    0x0

// 0x158 (MSDU_LINK_EXT_DESC_MAX_IDX_14)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_14_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_14_ADDRESS                                  (0x158 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_14_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_14_RESET                                    0x0

// 0x15c (MSDU_LINK_EXT_DESC_MAX_IDX_15)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_LSB                                  0
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_MSB                                  15
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_MASK                                 0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_GET(x)                               (((x) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_MASK) >> MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_LSB)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_SET(x)                               (((0 | (x)) << MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_LSB) & MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_MASK)
#define MSDU_LINK_EXT_DESC_MAX_IDX_VAL_15_RESET                                0x0
#define MSDU_LINK_EXT_DESC_MAX_IDX_15_ADDRESS                                  (0x15c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_MAX_IDX_15_RSTMASK                                  0xffff
#define MSDU_LINK_EXT_DESC_MAX_IDX_15_RESET                                    0x0

// 0x160 (MSDU_LINK_EXT_DESC_SWAP)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_LSB                                        0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_MSB                                        0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_MASK                                       0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_GET(x)                                     (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_SET(x)                                     (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_RESET                                      0x0
#define MSDU_LINK_EXT_DESC_SWAP_ADDRESS                                        (0x160 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_RSTMASK                                        0x1
#define MSDU_LINK_EXT_DESC_SWAP_RESET                                          0x0

// 0x160 (MSDU_LINK_EXT_DESC_SWAP_0)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_0_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_0_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_0_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_0_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_0_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_0_ADDRESS                                      (0x160 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_0_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_0_RESET                                        0x0

// 0x164 (MSDU_LINK_EXT_DESC_SWAP_1)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_1_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_1_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_1_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_1_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_1_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_1_ADDRESS                                      (0x164 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_1_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_1_RESET                                        0x0

// 0x168 (MSDU_LINK_EXT_DESC_SWAP_2)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_2_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_2_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_2_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_2_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_2_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_2_ADDRESS                                      (0x168 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_2_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_2_RESET                                        0x0

// 0x16c (MSDU_LINK_EXT_DESC_SWAP_3)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_3_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_3_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_3_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_3_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_3_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_3_ADDRESS                                      (0x16c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_3_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_3_RESET                                        0x0

// 0x170 (MSDU_LINK_EXT_DESC_SWAP_4)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_4_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_4_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_4_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_4_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_4_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_4_ADDRESS                                      (0x170 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_4_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_4_RESET                                        0x0

// 0x174 (MSDU_LINK_EXT_DESC_SWAP_5)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_5_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_5_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_5_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_5_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_5_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_5_ADDRESS                                      (0x174 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_5_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_5_RESET                                        0x0

// 0x178 (MSDU_LINK_EXT_DESC_SWAP_6)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_6_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_6_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_6_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_6_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_6_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_6_ADDRESS                                      (0x178 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_6_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_6_RESET                                        0x0

// 0x17c (MSDU_LINK_EXT_DESC_SWAP_7)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_7_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_7_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_7_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_7_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_7_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_7_ADDRESS                                      (0x17c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_7_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_7_RESET                                        0x0

// 0x180 (MSDU_LINK_EXT_DESC_SWAP_8)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_8_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_8_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_8_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_8_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_8_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_8_ADDRESS                                      (0x180 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_8_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_8_RESET                                        0x0

// 0x184 (MSDU_LINK_EXT_DESC_SWAP_9)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_LSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_MSB                                      0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_MASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_GET(x)                                   (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_9_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_9_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_SET(x)                                   (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_9_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_9_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_9_RESET                                    0x0
#define MSDU_LINK_EXT_DESC_SWAP_9_ADDRESS                                      (0x184 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_9_RSTMASK                                      0x1
#define MSDU_LINK_EXT_DESC_SWAP_9_RESET                                        0x0

// 0x188 (MSDU_LINK_EXT_DESC_SWAP_10)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_10_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_10_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_10_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_10_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_10_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_10_ADDRESS                                     (0x188 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_10_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_10_RESET                                       0x0

// 0x18c (MSDU_LINK_EXT_DESC_SWAP_11)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_11_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_11_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_11_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_11_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_11_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_11_ADDRESS                                     (0x18c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_11_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_11_RESET                                       0x0

// 0x190 (MSDU_LINK_EXT_DESC_SWAP_12)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_12_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_12_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_12_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_12_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_12_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_12_ADDRESS                                     (0x190 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_12_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_12_RESET                                       0x0

// 0x194 (MSDU_LINK_EXT_DESC_SWAP_13)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_13_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_13_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_13_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_13_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_13_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_13_ADDRESS                                     (0x194 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_13_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_13_RESET                                       0x0

// 0x198 (MSDU_LINK_EXT_DESC_SWAP_14)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_14_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_14_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_14_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_14_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_14_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_14_ADDRESS                                     (0x198 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_14_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_14_RESET                                       0x0

// 0x19c (MSDU_LINK_EXT_DESC_SWAP_15)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_LSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_MSB                                     0
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_MASK                                    0x1
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_GET(x)                                  (((x) & MSDU_LINK_EXT_DESC_SWAP_VAL_15_MASK) >> MSDU_LINK_EXT_DESC_SWAP_VAL_15_LSB)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_SET(x)                                  (((0 | (x)) << MSDU_LINK_EXT_DESC_SWAP_VAL_15_LSB) & MSDU_LINK_EXT_DESC_SWAP_VAL_15_MASK)
#define MSDU_LINK_EXT_DESC_SWAP_VAL_15_RESET                                   0x0
#define MSDU_LINK_EXT_DESC_SWAP_15_ADDRESS                                     (0x19c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MSDU_LINK_EXT_DESC_SWAP_15_RSTMASK                                     0x1
#define MSDU_LINK_EXT_DESC_SWAP_15_RESET                                       0x0

// 0x1a0 (MAX_AXI_RD_BURST_SIZE)
#define MAX_AXI_RD_BURST_SIZE_VAL_LSB                                          0
#define MAX_AXI_RD_BURST_SIZE_VAL_MSB                                          1
#define MAX_AXI_RD_BURST_SIZE_VAL_MASK                                         0x3
#define MAX_AXI_RD_BURST_SIZE_VAL_GET(x)                                       (((x) & MAX_AXI_RD_BURST_SIZE_VAL_MASK) >> MAX_AXI_RD_BURST_SIZE_VAL_LSB)
#define MAX_AXI_RD_BURST_SIZE_VAL_SET(x)                                       (((0 | (x)) << MAX_AXI_RD_BURST_SIZE_VAL_LSB) & MAX_AXI_RD_BURST_SIZE_VAL_MASK)
#define MAX_AXI_RD_BURST_SIZE_VAL_RESET                                        0x0
#define MAX_AXI_RD_BURST_SIZE_ADDRESS                                          (0x1a0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAX_AXI_RD_BURST_SIZE_RSTMASK                                          0x3
#define MAX_AXI_RD_BURST_SIZE_RESET                                            0x0

// 0x1a4 (MAC_PCU_STA_ADDR_L32)
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_LSB                                     0
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_MSB                                     31
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_MASK                                    0xffffffff
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_GET(x)                                  (((x) & MAC_PCU_STA_ADDR_L32_ADDR_31_0_MASK) >> MAC_PCU_STA_ADDR_L32_ADDR_31_0_LSB)
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_SET(x)                                  (((0 | (x)) << MAC_PCU_STA_ADDR_L32_ADDR_31_0_LSB) & MAC_PCU_STA_ADDR_L32_ADDR_31_0_MASK)
#define MAC_PCU_STA_ADDR_L32_ADDR_31_0_RESET                                   0x0
#define MAC_PCU_STA_ADDR_L32_ADDRESS                                           (0x1a4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_STA_ADDR_L32_RSTMASK                                           0xffffffff
#define MAC_PCU_STA_ADDR_L32_RESET                                             0x0

// 0x1a8 (MAC_PCU_STA_ADDR_U16)
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_LSB                            31
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_MSB                            31
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_MASK                           0x80000000
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_GET(x)                         (((x) & MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_MASK) >> MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_LSB)
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_SET(x)                         (((0 | (x)) << MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_LSB) & MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_MASK)
#define MAC_PCU_STA_ADDR_U16_ADHOC_MCAST_SEARCH_RESET                          0x0
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_LSB                                  30
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_MSB                                  30
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_MASK                                 0x40000000
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_GET(x)                               (((x) & MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_MASK) >> MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_LSB)
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_SET(x)                               (((0 | (x)) << MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_LSB) & MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_MASK)
#define MAC_PCU_STA_ADDR_U16_CBCIV_ENDIAN_RESET                                0x0
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_LSB                               29
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_MSB                               29
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_MASK                              0x20000000
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_GET(x)                            (((x) & MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_MASK) >> MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_LSB)
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_SET(x)                            (((0 | (x)) << MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_LSB) & MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_MASK)
#define MAC_PCU_STA_ADDR_U16_PRESERVE_SEQNUM_RESET                             0x1
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_LSB                                    28
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_MSB                                    28
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_MASK                                   0x10000000
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_GET(x)                                 (((x) & MAC_PCU_STA_ADDR_U16_KSRCH_MODE_MASK) >> MAC_PCU_STA_ADDR_U16_KSRCH_MODE_LSB)
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_SET(x)                                 (((0 | (x)) << MAC_PCU_STA_ADDR_U16_KSRCH_MODE_LSB) & MAC_PCU_STA_ADDR_U16_KSRCH_MODE_MASK)
#define MAC_PCU_STA_ADDR_U16_KSRCH_MODE_RESET                                  0x0
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_LSB                               27
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_MSB                               27
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_MASK                              0x8000000
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_GET(x)                            (((x) & MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_MASK) >> MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_LSB)
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_SET(x)                            (((0 | (x)) << MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_LSB) & MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_MASK)
#define MAC_PCU_STA_ADDR_U16_CRPT_MIC_ENABLE_RESET                             0x0
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_LSB                               26
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_MSB                               26
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_MASK                              0x4000000
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_GET(x)                            (((x) & MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_MASK) >> MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_LSB)
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_SET(x)                            (((0 | (x)) << MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_LSB) & MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_MASK)
#define MAC_PCU_STA_ADDR_U16_SECTOR_SELF_GEN_RESET                             0x0
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_LSB                                 25
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_MSB                                 25
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_MASK                                0x2000000
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_GET(x)                              (((x) & MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_MASK) >> MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_LSB)
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_SET(x)                              (((0 | (x)) << MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_LSB) & MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_MASK)
#define MAC_PCU_STA_ADDR_U16_BASE_RATE_11B_RESET                               0x0
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_LSB                                    24
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_MSB                                    24
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_MASK                                   0x1000000
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_GET(x)                                 (((x) & MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_MASK) >> MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_LSB)
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_SET(x)                                 (((0 | (x)) << MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_LSB) & MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_MASK)
#define MAC_PCU_STA_ADDR_U16_ACKCTS_6MB_RESET                                  0x0
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_LSB                                   23
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_MSB                                   23
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_MASK                                  0x800000
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_GET(x)                                (((x) & MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_MASK) >> MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_LSB)
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_SET(x)                                (((0 | (x)) << MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_LSB) & MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_MASK)
#define MAC_PCU_STA_ADDR_U16_RTS_USE_DEF_RESET                                 0x0
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_LSB                                 22
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_MSB                                 22
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_MASK                                0x400000
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_GET(x)                              (((x) & MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_MASK) >> MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_LSB)
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_SET(x)                              (((0 | (x)) << MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_LSB) & MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_MASK)
#define MAC_PCU_STA_ADDR_U16_DEFANT_UPDATE_RESET                               0x0
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_LSB                                    21
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_MSB                                    21
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_MASK                                   0x200000
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_GET(x)                                 (((x) & MAC_PCU_STA_ADDR_U16_USE_DEFANT_MASK) >> MAC_PCU_STA_ADDR_U16_USE_DEFANT_LSB)
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_SET(x)                                 (((0 | (x)) << MAC_PCU_STA_ADDR_U16_USE_DEFANT_LSB) & MAC_PCU_STA_ADDR_U16_USE_DEFANT_MASK)
#define MAC_PCU_STA_ADDR_U16_USE_DEFANT_RESET                                  0x0
#define MAC_PCU_STA_ADDR_U16_PCF_LSB                                           20
#define MAC_PCU_STA_ADDR_U16_PCF_MSB                                           20
#define MAC_PCU_STA_ADDR_U16_PCF_MASK                                          0x100000
#define MAC_PCU_STA_ADDR_U16_PCF_GET(x)                                        (((x) & MAC_PCU_STA_ADDR_U16_PCF_MASK) >> MAC_PCU_STA_ADDR_U16_PCF_LSB)
#define MAC_PCU_STA_ADDR_U16_PCF_SET(x)                                        (((0 | (x)) << MAC_PCU_STA_ADDR_U16_PCF_LSB) & MAC_PCU_STA_ADDR_U16_PCF_MASK)
#define MAC_PCU_STA_ADDR_U16_PCF_RESET                                         0x0
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_LSB                                   19
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_MSB                                   19
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_MASK                                  0x80000
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_GET(x)                                (((x) & MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_MASK) >> MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_LSB)
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_SET(x)                                (((0 | (x)) << MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_LSB) & MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_MASK)
#define MAC_PCU_STA_ADDR_U16_KEYSRCH_DIS_RESET                                 0x0
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_LSB                                       18
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_MSB                                       18
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_MASK                                      0x40000
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_GET(x)                                    (((x) & MAC_PCU_STA_ADDR_U16_PW_SAVE_MASK) >> MAC_PCU_STA_ADDR_U16_PW_SAVE_LSB)
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_SET(x)                                    (((0 | (x)) << MAC_PCU_STA_ADDR_U16_PW_SAVE_LSB) & MAC_PCU_STA_ADDR_U16_PW_SAVE_MASK)
#define MAC_PCU_STA_ADDR_U16_PW_SAVE_RESET                                     0x0
#define MAC_PCU_STA_ADDR_U16_ADHOC_LSB                                         17
#define MAC_PCU_STA_ADDR_U16_ADHOC_MSB                                         17
#define MAC_PCU_STA_ADDR_U16_ADHOC_MASK                                        0x20000
#define MAC_PCU_STA_ADDR_U16_ADHOC_GET(x)                                      (((x) & MAC_PCU_STA_ADDR_U16_ADHOC_MASK) >> MAC_PCU_STA_ADDR_U16_ADHOC_LSB)
#define MAC_PCU_STA_ADDR_U16_ADHOC_SET(x)                                      (((0 | (x)) << MAC_PCU_STA_ADDR_U16_ADHOC_LSB) & MAC_PCU_STA_ADDR_U16_ADHOC_MASK)
#define MAC_PCU_STA_ADDR_U16_ADHOC_RESET                                       0x0
#define MAC_PCU_STA_ADDR_U16_STA_AP_LSB                                        16
#define MAC_PCU_STA_ADDR_U16_STA_AP_MSB                                        16
#define MAC_PCU_STA_ADDR_U16_STA_AP_MASK                                       0x10000
#define MAC_PCU_STA_ADDR_U16_STA_AP_GET(x)                                     (((x) & MAC_PCU_STA_ADDR_U16_STA_AP_MASK) >> MAC_PCU_STA_ADDR_U16_STA_AP_LSB)
#define MAC_PCU_STA_ADDR_U16_STA_AP_SET(x)                                     (((0 | (x)) << MAC_PCU_STA_ADDR_U16_STA_AP_LSB) & MAC_PCU_STA_ADDR_U16_STA_AP_MASK)
#define MAC_PCU_STA_ADDR_U16_STA_AP_RESET                                      0x0
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_LSB                                    0
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_MSB                                    15
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_MASK                                   0xffff
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_GET(x)                                 (((x) & MAC_PCU_STA_ADDR_U16_ADDR_47_32_MASK) >> MAC_PCU_STA_ADDR_U16_ADDR_47_32_LSB)
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_SET(x)                                 (((0 | (x)) << MAC_PCU_STA_ADDR_U16_ADDR_47_32_LSB) & MAC_PCU_STA_ADDR_U16_ADDR_47_32_MASK)
#define MAC_PCU_STA_ADDR_U16_ADDR_47_32_RESET                                  0x0
#define MAC_PCU_STA_ADDR_U16_ADDRESS                                           (0x1a8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_STA_ADDR_U16_RSTMASK                                           0xffffffff
#define MAC_PCU_STA_ADDR_U16_RESET                                             0x20000000

// 0x1ac (MAC_PCU_BSSID_L32)
#define MAC_PCU_BSSID_L32_ADDR_LSB                                             0
#define MAC_PCU_BSSID_L32_ADDR_MSB                                             31
#define MAC_PCU_BSSID_L32_ADDR_MASK                                            0xffffffff
#define MAC_PCU_BSSID_L32_ADDR_GET(x)                                          (((x) & MAC_PCU_BSSID_L32_ADDR_MASK) >> MAC_PCU_BSSID_L32_ADDR_LSB)
#define MAC_PCU_BSSID_L32_ADDR_SET(x)                                          (((0 | (x)) << MAC_PCU_BSSID_L32_ADDR_LSB) & MAC_PCU_BSSID_L32_ADDR_MASK)
#define MAC_PCU_BSSID_L32_ADDR_RESET                                           0x0
#define MAC_PCU_BSSID_L32_ADDRESS                                              (0x1ac + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_BSSID_L32_RSTMASK                                              0xffffffff
#define MAC_PCU_BSSID_L32_RESET                                                0x0

// 0x1b0 (MAC_PCU_BSSID_U16)
#define MAC_PCU_BSSID_U16_AID_LSB                                              16
#define MAC_PCU_BSSID_U16_AID_MSB                                              26
#define MAC_PCU_BSSID_U16_AID_MASK                                             0x7ff0000
#define MAC_PCU_BSSID_U16_AID_GET(x)                                           (((x) & MAC_PCU_BSSID_U16_AID_MASK) >> MAC_PCU_BSSID_U16_AID_LSB)
#define MAC_PCU_BSSID_U16_AID_SET(x)                                           (((0 | (x)) << MAC_PCU_BSSID_U16_AID_LSB) & MAC_PCU_BSSID_U16_AID_MASK)
#define MAC_PCU_BSSID_U16_AID_RESET                                            0x0
#define MAC_PCU_BSSID_U16_ADDR_LSB                                             0
#define MAC_PCU_BSSID_U16_ADDR_MSB                                             15
#define MAC_PCU_BSSID_U16_ADDR_MASK                                            0xffff
#define MAC_PCU_BSSID_U16_ADDR_GET(x)                                          (((x) & MAC_PCU_BSSID_U16_ADDR_MASK) >> MAC_PCU_BSSID_U16_ADDR_LSB)
#define MAC_PCU_BSSID_U16_ADDR_SET(x)                                          (((0 | (x)) << MAC_PCU_BSSID_U16_ADDR_LSB) & MAC_PCU_BSSID_U16_ADDR_MASK)
#define MAC_PCU_BSSID_U16_ADDR_RESET                                           0x0
#define MAC_PCU_BSSID_U16_ADDRESS                                              (0x1b0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_BSSID_U16_RSTMASK                                              0x7ffffff
#define MAC_PCU_BSSID_U16_RESET                                                0x0

// 0x1b4 (MAC_PCU_DIAG_SW)
#define MAC_PCU_DIAG_SW_DEBUG_MODE_LSB                                         30
#define MAC_PCU_DIAG_SW_DEBUG_MODE_MSB                                         31
#define MAC_PCU_DIAG_SW_DEBUG_MODE_MASK                                        0xc0000000
#define MAC_PCU_DIAG_SW_DEBUG_MODE_GET(x)                                      (((x) & MAC_PCU_DIAG_SW_DEBUG_MODE_MASK) >> MAC_PCU_DIAG_SW_DEBUG_MODE_LSB)
#define MAC_PCU_DIAG_SW_DEBUG_MODE_SET(x)                                      (((0 | (x)) << MAC_PCU_DIAG_SW_DEBUG_MODE_LSB) & MAC_PCU_DIAG_SW_DEBUG_MODE_MASK)
#define MAC_PCU_DIAG_SW_DEBUG_MODE_RESET                                       0x0
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_LSB                                   29
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_MSB                                   29
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_MASK                                  0x20000000
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_GET(x)                                (((x) & MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_MASK) >> MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_LSB)
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_SET(x)                                (((0 | (x)) << MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_LSB) & MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_MASK)
#define MAC_PCU_DIAG_SW_RX_CLEAR_EXT_LOW_RESET                                 0x0
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_LSB                                   28
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_MSB                                   28
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_MASK                                  0x10000000
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_GET(x)                                (((x) & MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_MASK) >> MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_LSB)
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_SET(x)                                (((0 | (x)) << MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_LSB) & MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_MASK)
#define MAC_PCU_DIAG_SW_RX_CLEAR_CTL_LOW_RESET                                 0x0
#define MAC_PCU_DIAG_SW_OBS_SEL_2_LSB                                          27
#define MAC_PCU_DIAG_SW_OBS_SEL_2_MSB                                          27
#define MAC_PCU_DIAG_SW_OBS_SEL_2_MASK                                         0x8000000
#define MAC_PCU_DIAG_SW_OBS_SEL_2_GET(x)                                       (((x) & MAC_PCU_DIAG_SW_OBS_SEL_2_MASK) >> MAC_PCU_DIAG_SW_OBS_SEL_2_LSB)
#define MAC_PCU_DIAG_SW_OBS_SEL_2_SET(x)                                       (((0 | (x)) << MAC_PCU_DIAG_SW_OBS_SEL_2_LSB) & MAC_PCU_DIAG_SW_OBS_SEL_2_MASK)
#define MAC_PCU_DIAG_SW_OBS_SEL_2_RESET                                        0x0
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_LSB                                 26
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_MSB                                 26
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_MASK                                0x4000000
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_GET(x)                              (((x) & MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_MASK) >> MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_LSB)
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_SET(x)                              (((0 | (x)) << MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_LSB) & MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_MASK)
#define MAC_PCU_DIAG_SW_SATURATE_CYCLE_CNT_RESET                               0x0
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_LSB                                     25
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_MSB                                     25
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_MASK                                    0x2000000
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_GET(x)                                  (((x) & MAC_PCU_DIAG_SW_FORCE_RX_ABORT_MASK) >> MAC_PCU_DIAG_SW_FORCE_RX_ABORT_LSB)
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_SET(x)                                  (((0 | (x)) << MAC_PCU_DIAG_SW_FORCE_RX_ABORT_LSB) & MAC_PCU_DIAG_SW_FORCE_RX_ABORT_MASK)
#define MAC_PCU_DIAG_SW_FORCE_RX_ABORT_RESET                                   0x0
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_LSB                               24
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_MSB                               24
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_MASK                              0x1000000
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_GET(x)                            (((x) & MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_MASK) >> MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_LSB)
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_SET(x)                            (((0 | (x)) << MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_LSB) & MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_MASK)
#define MAC_PCU_DIAG_SW_DUAL_CHAIN_CHAN_INFO_RESET                             0x0
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_LSB                             23
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_MSB                             23
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_MASK                            0x800000
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_GET(x)                          (((x) & MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_MASK) >> MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_LSB)
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_SET(x)                          (((0 | (x)) << MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_LSB) & MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_MASK)
#define MAC_PCU_DIAG_SW_PHYERR_ENABLE_EIFS_CTL_RESET                           0x0
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_LSB                                     22
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_MSB                                     22
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_MASK                                    0x400000
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_GET(x)                                  (((x) & MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_MASK) >> MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_LSB)
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_SET(x)                                  (((0 | (x)) << MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_LSB) & MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_MASK)
#define MAC_PCU_DIAG_SW_CHAN_IDLE_HIGH_RESET                                   0x0
#define MAC_PCU_DIAG_SW_IGNORE_NAV_LSB                                         21
#define MAC_PCU_DIAG_SW_IGNORE_NAV_MSB                                         21
#define MAC_PCU_DIAG_SW_IGNORE_NAV_MASK                                        0x200000
#define MAC_PCU_DIAG_SW_IGNORE_NAV_GET(x)                                      (((x) & MAC_PCU_DIAG_SW_IGNORE_NAV_MASK) >> MAC_PCU_DIAG_SW_IGNORE_NAV_LSB)
#define MAC_PCU_DIAG_SW_IGNORE_NAV_SET(x)                                      (((0 | (x)) << MAC_PCU_DIAG_SW_IGNORE_NAV_LSB) & MAC_PCU_DIAG_SW_IGNORE_NAV_MASK)
#define MAC_PCU_DIAG_SW_IGNORE_NAV_RESET                                       0x0
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_LSB                                      20
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_MSB                                      20
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_MASK                                     0x100000
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_GET(x)                                   (((x) & MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_MASK) >> MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_LSB)
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_SET(x)                                   (((0 | (x)) << MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_LSB) & MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_MASK)
#define MAC_PCU_DIAG_SW_RX_CLEAR_HIGH_RESET                                    0x0
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_LSB                                        18
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_MSB                                        19
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_MASK                                       0xc0000
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_GET(x)                                     (((x) & MAC_PCU_DIAG_SW_OBS_SEL_1_0_MASK) >> MAC_PCU_DIAG_SW_OBS_SEL_1_0_LSB)
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_SET(x)                                     (((0 | (x)) << MAC_PCU_DIAG_SW_OBS_SEL_1_0_LSB) & MAC_PCU_DIAG_SW_OBS_SEL_1_0_MASK)
#define MAC_PCU_DIAG_SW_OBS_SEL_1_0_RESET                                      0x0
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_LSB                                      17
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_MSB                                      17
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_MASK                                     0x20000
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_GET(x)                                   (((x) & MAC_PCU_DIAG_SW_ACCEPT_NON_V0_MASK) >> MAC_PCU_DIAG_SW_ACCEPT_NON_V0_LSB)
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_SET(x)                                   (((0 | (x)) << MAC_PCU_DIAG_SW_ACCEPT_NON_V0_LSB) & MAC_PCU_DIAG_SW_ACCEPT_NON_V0_MASK)
#define MAC_PCU_DIAG_SW_ACCEPT_NON_V0_RESET                                    0x0
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_LSB                                     8
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_MSB                                     8
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_MASK                                    0x100
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_GET(x)                                  (((x) & MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_MASK) >> MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_LSB)
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_SET(x)                                  (((0 | (x)) << MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_LSB) & MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_MASK)
#define MAC_PCU_DIAG_SW_DUMP_CHAN_INFO_RESET                                   0x0
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_LSB                                        7
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_MSB                                        7
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_MASK                                       0x80
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_GET(x)                                     (((x) & MAC_PCU_DIAG_SW_CORRUPT_FCS_MASK) >> MAC_PCU_DIAG_SW_CORRUPT_FCS_LSB)
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_SET(x)                                     (((0 | (x)) << MAC_PCU_DIAG_SW_CORRUPT_FCS_LSB) & MAC_PCU_DIAG_SW_CORRUPT_FCS_MASK)
#define MAC_PCU_DIAG_SW_CORRUPT_FCS_RESET                                      0x0
#define MAC_PCU_DIAG_SW_LOOP_BACK_LSB                                          6
#define MAC_PCU_DIAG_SW_LOOP_BACK_MSB                                          6
#define MAC_PCU_DIAG_SW_LOOP_BACK_MASK                                         0x40
#define MAC_PCU_DIAG_SW_LOOP_BACK_GET(x)                                       (((x) & MAC_PCU_DIAG_SW_LOOP_BACK_MASK) >> MAC_PCU_DIAG_SW_LOOP_BACK_LSB)
#define MAC_PCU_DIAG_SW_LOOP_BACK_SET(x)                                       (((0 | (x)) << MAC_PCU_DIAG_SW_LOOP_BACK_LSB) & MAC_PCU_DIAG_SW_LOOP_BACK_MASK)
#define MAC_PCU_DIAG_SW_LOOP_BACK_RESET                                        0x0
#define MAC_PCU_DIAG_SW_HALT_RX_LSB                                            5
#define MAC_PCU_DIAG_SW_HALT_RX_MSB                                            5
#define MAC_PCU_DIAG_SW_HALT_RX_MASK                                           0x20
#define MAC_PCU_DIAG_SW_HALT_RX_GET(x)                                         (((x) & MAC_PCU_DIAG_SW_HALT_RX_MASK) >> MAC_PCU_DIAG_SW_HALT_RX_LSB)
#define MAC_PCU_DIAG_SW_HALT_RX_SET(x)                                         (((0 | (x)) << MAC_PCU_DIAG_SW_HALT_RX_LSB) & MAC_PCU_DIAG_SW_HALT_RX_MASK)
#define MAC_PCU_DIAG_SW_HALT_RX_RESET                                          0x0
#define MAC_PCU_DIAG_SW_NO_DECRYPT_LSB                                         4
#define MAC_PCU_DIAG_SW_NO_DECRYPT_MSB                                         4
#define MAC_PCU_DIAG_SW_NO_DECRYPT_MASK                                        0x10
#define MAC_PCU_DIAG_SW_NO_DECRYPT_GET(x)                                      (((x) & MAC_PCU_DIAG_SW_NO_DECRYPT_MASK) >> MAC_PCU_DIAG_SW_NO_DECRYPT_LSB)
#define MAC_PCU_DIAG_SW_NO_DECRYPT_SET(x)                                      (((0 | (x)) << MAC_PCU_DIAG_SW_NO_DECRYPT_LSB) & MAC_PCU_DIAG_SW_NO_DECRYPT_MASK)
#define MAC_PCU_DIAG_SW_NO_DECRYPT_RESET                                       0x0
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_LSB                                         3
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_MSB                                         3
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_MASK                                        0x8
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_GET(x)                                      (((x) & MAC_PCU_DIAG_SW_NO_ENCRYPT_MASK) >> MAC_PCU_DIAG_SW_NO_ENCRYPT_LSB)
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_SET(x)                                      (((0 | (x)) << MAC_PCU_DIAG_SW_NO_ENCRYPT_LSB) & MAC_PCU_DIAG_SW_NO_ENCRYPT_MASK)
#define MAC_PCU_DIAG_SW_NO_ENCRYPT_RESET                                       0x0
#define MAC_PCU_DIAG_SW_NO_CTS_LSB                                             2
#define MAC_PCU_DIAG_SW_NO_CTS_MSB                                             2
#define MAC_PCU_DIAG_SW_NO_CTS_MASK                                            0x4
#define MAC_PCU_DIAG_SW_NO_CTS_GET(x)                                          (((x) & MAC_PCU_DIAG_SW_NO_CTS_MASK) >> MAC_PCU_DIAG_SW_NO_CTS_LSB)
#define MAC_PCU_DIAG_SW_NO_CTS_SET(x)                                          (((0 | (x)) << MAC_PCU_DIAG_SW_NO_CTS_LSB) & MAC_PCU_DIAG_SW_NO_CTS_MASK)
#define MAC_PCU_DIAG_SW_NO_CTS_RESET                                           0x0
#define MAC_PCU_DIAG_SW_NO_ACK_LSB                                             1
#define MAC_PCU_DIAG_SW_NO_ACK_MSB                                             1
#define MAC_PCU_DIAG_SW_NO_ACK_MASK                                            0x2
#define MAC_PCU_DIAG_SW_NO_ACK_GET(x)                                          (((x) & MAC_PCU_DIAG_SW_NO_ACK_MASK) >> MAC_PCU_DIAG_SW_NO_ACK_LSB)
#define MAC_PCU_DIAG_SW_NO_ACK_SET(x)                                          (((0 | (x)) << MAC_PCU_DIAG_SW_NO_ACK_LSB) & MAC_PCU_DIAG_SW_NO_ACK_MASK)
#define MAC_PCU_DIAG_SW_NO_ACK_RESET                                           0x0
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_LSB                                 0
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_MSB                                 0
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_MASK                                0x1
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_GET(x)                              (((x) & MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_MASK) >> MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_LSB)
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_SET(x)                              (((0 | (x)) << MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_LSB) & MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_MASK)
#define MAC_PCU_DIAG_SW_INVALID_KEY_NO_ACK_RESET                               0x0
#define MAC_PCU_DIAG_SW_ADDRESS                                                (0x1b4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_DIAG_SW_RSTMASK                                                0xfffe01ff
#define MAC_PCU_DIAG_SW_RESET                                                  0x0

// 0x1b8 (MAC_PCU_AZIMUTH_MODE)
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_LSB                         11
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_MSB                         11
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_MASK                        0x800
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_GET(x)                      (((x) & MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_MASK) >> MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_LSB)
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_SET(x)                      (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_LSB) & MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_MASK)
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX2_ENABLE_RESET                       0x1
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_LSB                         10
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_MSB                         10
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_MASK                        0x400
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_GET(x)                      (((x) & MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_MASK) >> MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_LSB)
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_SET(x)                      (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_LSB) & MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_MASK)
#define MAC_PCU_AZIMUTH_MODE_PROXY_STA_FIX1_ENABLE_RESET                       0x1
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_LSB                              9
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_MSB                              9
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_MASK                             0x200
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_GET(x)                           (((x) & MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_MASK) >> MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_LSB)
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_SET(x)                           (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_LSB) & MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_MASK)
#define MAC_PCU_AZIMUTH_MODE_FILTER_PASS_HOLD_RESET                            0x1
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_LSB                                  8
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_MSB                                  8
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_MASK                                 0x100
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_GET(x)                               (((x) & MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_MASK) >> MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_LSB)
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_SET(x)                               (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_LSB) & MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_MASK)
#define MAC_PCU_AZIMUTH_MODE_WMAC_CLK_SEL_RESET                                0x1
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_LSB                                   7
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_MSB                                   7
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_MASK                                  0x80
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_GET(x)                                (((x) & MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_MASK) >> MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_LSB)
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_SET(x)                                (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_LSB) & MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_MASK)
#define MAC_PCU_AZIMUTH_MODE_BA_USES_AD1_RESET                                 0x0
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_LSB                          6
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_MSB                          6
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_MASK                         0x40
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_GET(x)                       (((x) & MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_MASK) >> MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_LSB)
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_SET(x)                       (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_LSB) & MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_MASK)
#define MAC_PCU_AZIMUTH_MODE_ACK_CTS_MATCH_TX_AD2_RESET                        0x1
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_LSB                                    5
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_MSB                                    5
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_MASK                                   0x20
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_GET(x)                                 (((x) & MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_MASK) >> MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_LSB)
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_SET(x)                                 (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_LSB) & MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_MASK)
#define MAC_PCU_AZIMUTH_MODE_TX_DESC_EN_RESET                                  0x0
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_LSB                                        4
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_MSB                                        4
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_MASK                                       0x10
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_GET(x)                                     (((x) & MAC_PCU_AZIMUTH_MODE_CLK_EN_MASK) >> MAC_PCU_AZIMUTH_MODE_CLK_EN_LSB)
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_SET(x)                                     (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_CLK_EN_LSB) & MAC_PCU_AZIMUTH_MODE_CLK_EN_MASK)
#define MAC_PCU_AZIMUTH_MODE_CLK_EN_RESET                                      0x0
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_LSB                             3
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_MSB                             3
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_MASK                            0x8
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_GET(x)                          (((x) & MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_MASK) >> MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_LSB)
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_SET(x)                          (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_LSB) & MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_MASK)
#define MAC_PCU_AZIMUTH_MODE_RX_TSF_STATUS_SEL_RESET                           0x0
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_LSB                             2
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_MSB                             2
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_MASK                            0x4
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_GET(x)                          (((x) & MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_MASK) >> MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_LSB)
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_SET(x)                          (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_LSB) & MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_MASK)
#define MAC_PCU_AZIMUTH_MODE_TX_TSF_STATUS_SEL_RESET                           0x0
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_LSB                                1
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_MSB                                1
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_MASK                               0x2
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_GET(x)                             (((x) & MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_MASK) >> MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_LSB)
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_SET(x)                             (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_LSB) & MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_MASK)
#define MAC_PCU_AZIMUTH_MODE_KEY_SEARCH_AD1_RESET                              0x0
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_LSB                            0
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_MSB                            0
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_MASK                           0x1
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_GET(x)                         (((x) & MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_MASK) >> MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_LSB)
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_SET(x)                         (((0 | (x)) << MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_LSB) & MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_MASK)
#define MAC_PCU_AZIMUTH_MODE_DISABLE_TSF_UPDATE_RESET                          0x0
#define MAC_PCU_AZIMUTH_MODE_ADDRESS                                           (0x1b8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_AZIMUTH_MODE_RSTMASK                                           0xfff
#define MAC_PCU_AZIMUTH_MODE_RESET                                             0xf40

// 0x1c4 (MAC_PCU_WARM_TX_CONTROL)
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_LSB                            31
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_MSB                            31
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_MASK                           0x80000000
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_GET(x)                         (((x) & MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_MASK) >> MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_LSB)
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_SET(x)                         (((0 | (x)) << MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_LSB) & MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_MASK)
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_SELF_GEN_RESET                          0x0
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_LSB                                30
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_MSB                                30
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_MASK                               0x40000000
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_GET(x)                             (((x) & MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_MASK) >> MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_LSB)
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_SET(x)                             (((0 | (x)) << MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_LSB) & MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_MASK)
#define MAC_PCU_WARM_TX_CONTROL_ENABLE_DATA_RESET                              0x0
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_LSB                                   0
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_MSB                                   15
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_MASK                                  0xffff
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_GET(x)                                (((x) & MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_MASK) >> MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_LSB)
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_SET(x)                                (((0 | (x)) << MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_LSB) & MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_MASK)
#define MAC_PCU_WARM_TX_CONTROL_SIFS_DUR_RESET                                 0x280
#define MAC_PCU_WARM_TX_CONTROL_ADDRESS                                        (0x1c4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_WARM_TX_CONTROL_RSTMASK                                        0xc000ffff
#define MAC_PCU_WARM_TX_CONTROL_RESET                                          0x280

// 0x1c8 (MCMN_GO_TO_IDLE)
#define MCMN_GO_TO_IDLE_PDG_LSB                                                3
#define MCMN_GO_TO_IDLE_PDG_MSB                                                3
#define MCMN_GO_TO_IDLE_PDG_MASK                                               0x8
#define MCMN_GO_TO_IDLE_PDG_GET(x)                                             (((x) & MCMN_GO_TO_IDLE_PDG_MASK) >> MCMN_GO_TO_IDLE_PDG_LSB)
#define MCMN_GO_TO_IDLE_PDG_SET(x)                                             (((0 | (x)) << MCMN_GO_TO_IDLE_PDG_LSB) & MCMN_GO_TO_IDLE_PDG_MASK)
#define MCMN_GO_TO_IDLE_PDG_RESET                                              0x0
#define MCMN_GO_TO_IDLE_RXPCU_LSB                                              2
#define MCMN_GO_TO_IDLE_RXPCU_MSB                                              2
#define MCMN_GO_TO_IDLE_RXPCU_MASK                                             0x4
#define MCMN_GO_TO_IDLE_RXPCU_GET(x)                                           (((x) & MCMN_GO_TO_IDLE_RXPCU_MASK) >> MCMN_GO_TO_IDLE_RXPCU_LSB)
#define MCMN_GO_TO_IDLE_RXPCU_SET(x)                                           (((0 | (x)) << MCMN_GO_TO_IDLE_RXPCU_LSB) & MCMN_GO_TO_IDLE_RXPCU_MASK)
#define MCMN_GO_TO_IDLE_RXPCU_RESET                                            0x0
#define MCMN_GO_TO_IDLE_TXDMA_LSB                                              1
#define MCMN_GO_TO_IDLE_TXDMA_MSB                                              1
#define MCMN_GO_TO_IDLE_TXDMA_MASK                                             0x2
#define MCMN_GO_TO_IDLE_TXDMA_GET(x)                                           (((x) & MCMN_GO_TO_IDLE_TXDMA_MASK) >> MCMN_GO_TO_IDLE_TXDMA_LSB)
#define MCMN_GO_TO_IDLE_TXDMA_SET(x)                                           (((0 | (x)) << MCMN_GO_TO_IDLE_TXDMA_LSB) & MCMN_GO_TO_IDLE_TXDMA_MASK)
#define MCMN_GO_TO_IDLE_TXDMA_RESET                                            0x0
#define MCMN_GO_TO_IDLE_OLE_LSB                                                0
#define MCMN_GO_TO_IDLE_OLE_MSB                                                0
#define MCMN_GO_TO_IDLE_OLE_MASK                                               0x1
#define MCMN_GO_TO_IDLE_OLE_GET(x)                                             (((x) & MCMN_GO_TO_IDLE_OLE_MASK) >> MCMN_GO_TO_IDLE_OLE_LSB)
#define MCMN_GO_TO_IDLE_OLE_SET(x)                                             (((0 | (x)) << MCMN_GO_TO_IDLE_OLE_LSB) & MCMN_GO_TO_IDLE_OLE_MASK)
#define MCMN_GO_TO_IDLE_OLE_RESET                                              0x0
#define MCMN_GO_TO_IDLE_ADDRESS                                                (0x1c8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_GO_TO_IDLE_RSTMASK                                                0xf
#define MCMN_GO_TO_IDLE_RESET                                                  0x0

// 0x1e0 (TESTBUS_SELECT)
#define TESTBUS_SELECT_TRACER_SEL_LSB                                          4
#define TESTBUS_SELECT_TRACER_SEL_MSB                                          4
#define TESTBUS_SELECT_TRACER_SEL_MASK                                         0x10
#define TESTBUS_SELECT_TRACER_SEL_GET(x)                                       (((x) & TESTBUS_SELECT_TRACER_SEL_MASK) >> TESTBUS_SELECT_TRACER_SEL_LSB)
#define TESTBUS_SELECT_TRACER_SEL_SET(x)                                       (((0 | (x)) << TESTBUS_SELECT_TRACER_SEL_LSB) & TESTBUS_SELECT_TRACER_SEL_MASK)
#define TESTBUS_SELECT_TRACER_SEL_RESET                                        0x0
#define TESTBUS_SELECT_WMAC_SEL_LSB                                            0
#define TESTBUS_SELECT_WMAC_SEL_MSB                                            3
#define TESTBUS_SELECT_WMAC_SEL_MASK                                           0xf
#define TESTBUS_SELECT_WMAC_SEL_GET(x)                                         (((x) & TESTBUS_SELECT_WMAC_SEL_MASK) >> TESTBUS_SELECT_WMAC_SEL_LSB)
#define TESTBUS_SELECT_WMAC_SEL_SET(x)                                         (((0 | (x)) << TESTBUS_SELECT_WMAC_SEL_LSB) & TESTBUS_SELECT_WMAC_SEL_MASK)
#define TESTBUS_SELECT_WMAC_SEL_RESET                                          0x0
#define TESTBUS_SELECT_ADDRESS                                                 (0x1e0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define TESTBUS_SELECT_RSTMASK                                                 0x1f
#define TESTBUS_SELECT_RESET                                                   0x0

// 0x1e4 (MPDU_LINK_DESC_SWAP)
#define MPDU_LINK_DESC_SWAP_VAL_LSB                                            0
#define MPDU_LINK_DESC_SWAP_VAL_MSB                                            1
#define MPDU_LINK_DESC_SWAP_VAL_MASK                                           0x3
#define MPDU_LINK_DESC_SWAP_VAL_GET(x)                                         (((x) & MPDU_LINK_DESC_SWAP_VAL_MASK) >> MPDU_LINK_DESC_SWAP_VAL_LSB)
#define MPDU_LINK_DESC_SWAP_VAL_SET(x)                                         (((0 | (x)) << MPDU_LINK_DESC_SWAP_VAL_LSB) & MPDU_LINK_DESC_SWAP_VAL_MASK)
#define MPDU_LINK_DESC_SWAP_VAL_RESET                                          0x0
#define MPDU_LINK_DESC_SWAP_ADDRESS                                            (0x1e4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MPDU_LINK_DESC_SWAP_RSTMASK                                            0x3
#define MPDU_LINK_DESC_SWAP_RESET                                              0x0

// 0x1e8 (MCMN_ISR_RX_OK)
#define MCMN_ISR_RX_OK_RXDMA_PPDU_LSB                                          2
#define MCMN_ISR_RX_OK_RXDMA_PPDU_MSB                                          2
#define MCMN_ISR_RX_OK_RXDMA_PPDU_MASK                                         0x4
#define MCMN_ISR_RX_OK_RXDMA_PPDU_GET(x)                                       (((x) & MCMN_ISR_RX_OK_RXDMA_PPDU_MASK) >> MCMN_ISR_RX_OK_RXDMA_PPDU_LSB)
#define MCMN_ISR_RX_OK_RXDMA_PPDU_SET(x)                                       (((0 | (x)) << MCMN_ISR_RX_OK_RXDMA_PPDU_LSB) & MCMN_ISR_RX_OK_RXDMA_PPDU_MASK)
#define MCMN_ISR_RX_OK_RXDMA_PPDU_RESET                                        0x0
#define MCMN_ISR_RX_OK_RXDMA_MPDU_LSB                                          1
#define MCMN_ISR_RX_OK_RXDMA_MPDU_MSB                                          1
#define MCMN_ISR_RX_OK_RXDMA_MPDU_MASK                                         0x2
#define MCMN_ISR_RX_OK_RXDMA_MPDU_GET(x)                                       (((x) & MCMN_ISR_RX_OK_RXDMA_MPDU_MASK) >> MCMN_ISR_RX_OK_RXDMA_MPDU_LSB)
#define MCMN_ISR_RX_OK_RXDMA_MPDU_SET(x)                                       (((0 | (x)) << MCMN_ISR_RX_OK_RXDMA_MPDU_LSB) & MCMN_ISR_RX_OK_RXDMA_MPDU_MASK)
#define MCMN_ISR_RX_OK_RXDMA_MPDU_RESET                                        0x0
#define MCMN_ISR_RX_OK_RXDMA_MSDU_LSB                                          0
#define MCMN_ISR_RX_OK_RXDMA_MSDU_MSB                                          0
#define MCMN_ISR_RX_OK_RXDMA_MSDU_MASK                                         0x1
#define MCMN_ISR_RX_OK_RXDMA_MSDU_GET(x)                                       (((x) & MCMN_ISR_RX_OK_RXDMA_MSDU_MASK) >> MCMN_ISR_RX_OK_RXDMA_MSDU_LSB)
#define MCMN_ISR_RX_OK_RXDMA_MSDU_SET(x)                                       (((0 | (x)) << MCMN_ISR_RX_OK_RXDMA_MSDU_LSB) & MCMN_ISR_RX_OK_RXDMA_MSDU_MASK)
#define MCMN_ISR_RX_OK_RXDMA_MSDU_RESET                                        0x0
#define MCMN_ISR_RX_OK_ADDRESS                                                 (0x1e8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_RX_OK_RSTMASK                                                 0x7
#define MCMN_ISR_RX_OK_RESET                                                   0x0

// 0x1ec (MCMN_IMR_RX_OK)
#define MCMN_IMR_RX_OK_RXDMA_PPDU_LSB                                          2
#define MCMN_IMR_RX_OK_RXDMA_PPDU_MSB                                          2
#define MCMN_IMR_RX_OK_RXDMA_PPDU_MASK                                         0x4
#define MCMN_IMR_RX_OK_RXDMA_PPDU_GET(x)                                       (((x) & MCMN_IMR_RX_OK_RXDMA_PPDU_MASK) >> MCMN_IMR_RX_OK_RXDMA_PPDU_LSB)
#define MCMN_IMR_RX_OK_RXDMA_PPDU_SET(x)                                       (((0 | (x)) << MCMN_IMR_RX_OK_RXDMA_PPDU_LSB) & MCMN_IMR_RX_OK_RXDMA_PPDU_MASK)
#define MCMN_IMR_RX_OK_RXDMA_PPDU_RESET                                        0x0
#define MCMN_IMR_RX_OK_RXDMA_MPDU_LSB                                          1
#define MCMN_IMR_RX_OK_RXDMA_MPDU_MSB                                          1
#define MCMN_IMR_RX_OK_RXDMA_MPDU_MASK                                         0x2
#define MCMN_IMR_RX_OK_RXDMA_MPDU_GET(x)                                       (((x) & MCMN_IMR_RX_OK_RXDMA_MPDU_MASK) >> MCMN_IMR_RX_OK_RXDMA_MPDU_LSB)
#define MCMN_IMR_RX_OK_RXDMA_MPDU_SET(x)                                       (((0 | (x)) << MCMN_IMR_RX_OK_RXDMA_MPDU_LSB) & MCMN_IMR_RX_OK_RXDMA_MPDU_MASK)
#define MCMN_IMR_RX_OK_RXDMA_MPDU_RESET                                        0x0
#define MCMN_IMR_RX_OK_RXDMA_MSDU_LSB                                          0
#define MCMN_IMR_RX_OK_RXDMA_MSDU_MSB                                          0
#define MCMN_IMR_RX_OK_RXDMA_MSDU_MASK                                         0x1
#define MCMN_IMR_RX_OK_RXDMA_MSDU_GET(x)                                       (((x) & MCMN_IMR_RX_OK_RXDMA_MSDU_MASK) >> MCMN_IMR_RX_OK_RXDMA_MSDU_LSB)
#define MCMN_IMR_RX_OK_RXDMA_MSDU_SET(x)                                       (((0 | (x)) << MCMN_IMR_RX_OK_RXDMA_MSDU_LSB) & MCMN_IMR_RX_OK_RXDMA_MSDU_MASK)
#define MCMN_IMR_RX_OK_RXDMA_MSDU_RESET                                        0x0
#define MCMN_IMR_RX_OK_ADDRESS                                                 (0x1ec + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_RX_OK_RSTMASK                                                 0x7
#define MCMN_IMR_RX_OK_RESET                                                   0x0

// 0x1f0 (MCMN_ISR_SIFS_RESP)
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB                        4
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MSB                        4
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK                       0x10
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_GET(x)                     (((x) & MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK) >> MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB)
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_SET(x)                     (((0 | (x)) << MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB) & MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK)
#define MCMN_ISR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_RESET                      0x0
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB                            3
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MSB                            3
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK                           0x8
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_GET(x)                         (((x) & MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK) >> MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB)
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_SET(x)                         (((0 | (x)) << MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB) & MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK)
#define MCMN_ISR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_RESET                          0x0
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB                       2
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MSB                       2
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK                      0x4
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_GET(x)                    (((x) & MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK) >> MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB)
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_SET(x)                    (((0 | (x)) << MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB) & MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK)
#define MCMN_ISR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_RESET                     0x0
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_LSB                                 1
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_MSB                                 1
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_MASK                                0x2
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_GET(x)                              (((x) & MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_MASK) >> MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_LSB)
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_SET(x)                              (((0 | (x)) << MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_LSB) & MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_MASK)
#define MCMN_ISR_SIFS_RESP_UAPSD_SIFS_RESP_RESET                               0x0
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB                               0
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_MSB                               0
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK                              0x1
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_GET(x)                            (((x) & MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK) >> MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB)
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_SET(x)                            (((0 | (x)) << MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB) & MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK)
#define MCMN_ISR_SIFS_RESP_PS_POLL_SIFS_RESP_RESET                             0x0
#define MCMN_ISR_SIFS_RESP_ADDRESS                                             (0x1f0 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_SIFS_RESP_RSTMASK                                             0x1f
#define MCMN_ISR_SIFS_RESP_RESET                                               0x0

// 0x1f4 (MCMN_IMR_SIFS_RESP)
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB                        4
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MSB                        4
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK                       0x10
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_GET(x)                     (((x) & MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK) >> MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB)
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_SET(x)                     (((0 | (x)) << MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_LSB) & MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_MASK)
#define MCMN_IMR_SIFS_RESP_QBOOST_QOSDATA_SIFS_RESP_RESET                      0x0
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB                            3
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MSB                            3
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK                           0x8
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_GET(x)                         (((x) & MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK) >> MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB)
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_SET(x)                         (((0 | (x)) << MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_LSB) & MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_MASK)
#define MCMN_IMR_SIFS_RESP_QBOOST_BAR_SIFS_RESP_RESET                          0x0
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB                       2
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MSB                       2
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK                      0x4
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_GET(x)                    (((x) & MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK) >> MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB)
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_SET(x)                    (((0 | (x)) << MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_LSB) & MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_MASK)
#define MCMN_IMR_SIFS_RESP_QBOOST_EXPLICIT_SIFS_RESP_RESET                     0x0
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_LSB                                 1
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_MSB                                 1
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_MASK                                0x2
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_GET(x)                              (((x) & MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_MASK) >> MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_LSB)
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_SET(x)                              (((0 | (x)) << MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_LSB) & MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_MASK)
#define MCMN_IMR_SIFS_RESP_UAPSD_SIFS_RESP_RESET                               0x0
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB                               0
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_MSB                               0
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK                              0x1
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_GET(x)                            (((x) & MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK) >> MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB)
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_SET(x)                            (((0 | (x)) << MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_LSB) & MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_MASK)
#define MCMN_IMR_SIFS_RESP_PS_POLL_SIFS_RESP_RESET                             0x0
#define MCMN_IMR_SIFS_RESP_ADDRESS                                             (0x1f4 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_SIFS_RESP_RSTMASK                                             0x1f
#define MCMN_IMR_SIFS_RESP_RESET                                               0x0

// 0x1f8 (MCMN_ISR_TX_OK)
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB                          1
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MSB                          1
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK                         0x2
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_GET(x)                       (((x) & MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK) >> MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB)
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_SET(x)                       (((0 | (x)) << MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB) & MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK)
#define MCMN_ISR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_RESET                        0x0
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB                    0
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MSB                    0
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK                   0x1
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_GET(x)                 (((x) & MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK) >> MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB)
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_SET(x)                 (((0 | (x)) << MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB) & MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK)
#define MCMN_ISR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_RESET                  0x0
#define MCMN_ISR_TX_OK_ADDRESS                                                 (0x1f8 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_TX_OK_RSTMASK                                                 0x3
#define MCMN_ISR_TX_OK_RESET                                                   0x0

// 0x1fc (MCMN_IMR_TX_OK)
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB                          1
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MSB                          1
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK                         0x2
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_GET(x)                       (((x) & MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK) >> MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB)
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_SET(x)                       (((0 | (x)) << MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_LSB) & MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_MASK)
#define MCMN_IMR_TX_OK_HWSCH_TX_FES_STATUS_UPDATE_RESET                        0x0
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB                    0
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MSB                    0
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK                   0x1
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_GET(x)                 (((x) & MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK) >> MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB)
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_SET(x)                 (((0 | (x)) << MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_LSB) & MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_MASK)
#define MCMN_IMR_TX_OK_HWSCH_SCHEDULER_TX_STATUS_UPDATE_RESET                  0x0
#define MCMN_IMR_TX_OK_ADDRESS                                                 (0x1fc + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_TX_OK_RSTMASK                                                 0x3
#define MCMN_IMR_TX_OK_RESET                                                   0x0

// 0x200 (MCMN_WOCLR_ISR_P_EN)
#define MCMN_WOCLR_ISR_P_EN_VAL_LSB                                            0
#define MCMN_WOCLR_ISR_P_EN_VAL_MSB                                            0
#define MCMN_WOCLR_ISR_P_EN_VAL_MASK                                           0x1
#define MCMN_WOCLR_ISR_P_EN_VAL_GET(x)                                         (((x) & MCMN_WOCLR_ISR_P_EN_VAL_MASK) >> MCMN_WOCLR_ISR_P_EN_VAL_LSB)
#define MCMN_WOCLR_ISR_P_EN_VAL_SET(x)                                         (((0 | (x)) << MCMN_WOCLR_ISR_P_EN_VAL_LSB) & MCMN_WOCLR_ISR_P_EN_VAL_MASK)
#define MCMN_WOCLR_ISR_P_EN_VAL_RESET                                          0x0
#define MCMN_WOCLR_ISR_P_EN_ADDRESS                                            (0x200 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_WOCLR_ISR_P_EN_RSTMASK                                            0x1
#define MCMN_WOCLR_ISR_P_EN_RESET                                              0x0

// 0x204 (MAC_PCU_CYCLE_CNT)
#define MAC_PCU_CYCLE_CNT_VALUE_LSB                                            0
#define MAC_PCU_CYCLE_CNT_VALUE_MSB                                            31
#define MAC_PCU_CYCLE_CNT_VALUE_MASK                                           0xffffffff
#define MAC_PCU_CYCLE_CNT_VALUE_GET(x)                                         (((x) & MAC_PCU_CYCLE_CNT_VALUE_MASK) >> MAC_PCU_CYCLE_CNT_VALUE_LSB)
#define MAC_PCU_CYCLE_CNT_VALUE_SET(x)                                         (((0 | (x)) << MAC_PCU_CYCLE_CNT_VALUE_LSB) & MAC_PCU_CYCLE_CNT_VALUE_MASK)
#define MAC_PCU_CYCLE_CNT_VALUE_RESET                                          0x0
#define MAC_PCU_CYCLE_CNT_ADDRESS                                              (0x204 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_CYCLE_CNT_RSTMASK                                              0xffffffff
#define MAC_PCU_CYCLE_CNT_RESET                                                0x0

// 0x208 (MAC_PCU_MIB_CNT_CTRL)
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_LSB                                   4
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_MSB                                   4
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_MASK                                  0x10
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_GET(x)                                (((x) & MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_MASK) >> MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_LSB)
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_SET(x)                                (((0 | (x)) << MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_LSB) & MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_MASK)
#define MAC_PCU_MIB_CNT_CTRL_WRAP_CNT_EN_RESET                                 0x0
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_LSB                                 3
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_MSB                                 3
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_MASK                                0x8
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_GET(x)                              (((x) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_MASK) >> MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_LSB)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_SET(x)                              (((0 | (x)) << MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_LSB) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_MASK)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FORCE_RESET                               0x0
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_LSB                                 2
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_MSB                                 2
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_MASK                                0x4
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_GET(x)                              (((x) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_MASK) >> MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_LSB)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_SET(x)                              (((0 | (x)) << MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_LSB) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_MASK)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_CLEAR_RESET                               0x0
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_LSB                                1
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_MSB                                1
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_MASK                               0x2
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_GET(x)                             (((x) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_MASK) >> MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_LSB)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_SET(x)                             (((0 | (x)) << MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_LSB) & MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_MASK)
#define MAC_PCU_MIB_CNT_CTRL_PCI_MIB_FREEZE_RESET                              0x0
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_LSB                                 0
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_MSB                                 0
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_MASK                                0x1
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_GET(x)                              (((x) & MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_MASK) >> MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_LSB)
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_SET(x)                              (((0 | (x)) << MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_LSB) & MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_MASK)
#define MAC_PCU_MIB_CNT_CTRL_WMAC_RX_ABORT_RESET                               0x0
#define MAC_PCU_MIB_CNT_CTRL_ADDRESS                                           (0x208 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_MIB_CNT_CTRL_RSTMASK                                           0x1f
#define MAC_PCU_MIB_CNT_CTRL_RESET                                             0x0

// 0x20c (MCMN_ISR_S11)
#define MCMN_ISR_S11_RX_TLV_ERROR_LSB                                          1
#define MCMN_ISR_S11_RX_TLV_ERROR_MSB                                          1
#define MCMN_ISR_S11_RX_TLV_ERROR_MASK                                         0x2
#define MCMN_ISR_S11_RX_TLV_ERROR_GET(x)                                       (((x) & MCMN_ISR_S11_RX_TLV_ERROR_MASK) >> MCMN_ISR_S11_RX_TLV_ERROR_LSB)
#define MCMN_ISR_S11_RX_TLV_ERROR_SET(x)                                       (((0 | (x)) << MCMN_ISR_S11_RX_TLV_ERROR_LSB) & MCMN_ISR_S11_RX_TLV_ERROR_MASK)
#define MCMN_ISR_S11_RX_TLV_ERROR_RESET                                        0x0
#define MCMN_ISR_S11_TX_TLV_ERROR_LSB                                          0
#define MCMN_ISR_S11_TX_TLV_ERROR_MSB                                          0
#define MCMN_ISR_S11_TX_TLV_ERROR_MASK                                         0x1
#define MCMN_ISR_S11_TX_TLV_ERROR_GET(x)                                       (((x) & MCMN_ISR_S11_TX_TLV_ERROR_MASK) >> MCMN_ISR_S11_TX_TLV_ERROR_LSB)
#define MCMN_ISR_S11_TX_TLV_ERROR_SET(x)                                       (((0 | (x)) << MCMN_ISR_S11_TX_TLV_ERROR_LSB) & MCMN_ISR_S11_TX_TLV_ERROR_MASK)
#define MCMN_ISR_S11_TX_TLV_ERROR_RESET                                        0x0
#define MCMN_ISR_S11_ADDRESS                                                   (0x20c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ISR_S11_RSTMASK                                                   0x3
#define MCMN_ISR_S11_RESET                                                     0x0

// 0x210 (MCMN_IMR_S11)
#define MCMN_IMR_S11_RX_TLV_ERROR_LSB                                          1
#define MCMN_IMR_S11_RX_TLV_ERROR_MSB                                          1
#define MCMN_IMR_S11_RX_TLV_ERROR_MASK                                         0x2
#define MCMN_IMR_S11_RX_TLV_ERROR_GET(x)                                       (((x) & MCMN_IMR_S11_RX_TLV_ERROR_MASK) >> MCMN_IMR_S11_RX_TLV_ERROR_LSB)
#define MCMN_IMR_S11_RX_TLV_ERROR_SET(x)                                       (((0 | (x)) << MCMN_IMR_S11_RX_TLV_ERROR_LSB) & MCMN_IMR_S11_RX_TLV_ERROR_MASK)
#define MCMN_IMR_S11_RX_TLV_ERROR_RESET                                        0x0
#define MCMN_IMR_S11_TX_TLV_ERROR_LSB                                          0
#define MCMN_IMR_S11_TX_TLV_ERROR_MSB                                          0
#define MCMN_IMR_S11_TX_TLV_ERROR_MASK                                         0x1
#define MCMN_IMR_S11_TX_TLV_ERROR_GET(x)                                       (((x) & MCMN_IMR_S11_TX_TLV_ERROR_MASK) >> MCMN_IMR_S11_TX_TLV_ERROR_LSB)
#define MCMN_IMR_S11_TX_TLV_ERROR_SET(x)                                       (((0 | (x)) << MCMN_IMR_S11_TX_TLV_ERROR_LSB) & MCMN_IMR_S11_TX_TLV_ERROR_MASK)
#define MCMN_IMR_S11_TX_TLV_ERROR_RESET                                        0x0
#define MCMN_IMR_S11_ADDRESS                                                   (0x210 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_IMR_S11_RSTMASK                                                   0x3
#define MCMN_IMR_S11_RESET                                                     0x0

// 0x214 (MCMN_EVENT_TRACE_BUS_SELECT)
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_LSB                                    0
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_MSB                                    0
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_MASK                                   0x1
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_GET(x)                                 (((x) & MCMN_EVENT_TRACE_BUS_SELECT_VAL_MASK) >> MCMN_EVENT_TRACE_BUS_SELECT_VAL_LSB)
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_SET(x)                                 (((0 | (x)) << MCMN_EVENT_TRACE_BUS_SELECT_VAL_LSB) & MCMN_EVENT_TRACE_BUS_SELECT_VAL_MASK)
#define MCMN_EVENT_TRACE_BUS_SELECT_VAL_RESET                                  0x0
#define MCMN_EVENT_TRACE_BUS_SELECT_ADDRESS                                    (0x214 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_EVENT_TRACE_BUS_SELECT_RSTMASK                                    0x1
#define MCMN_EVENT_TRACE_BUS_SELECT_RESET                                      0x0

// 0x218 (MCMN_APB_CLK_DISABLE)
#define MCMN_APB_CLK_DISABLE_CRYPTO_LSB                                        9
#define MCMN_APB_CLK_DISABLE_CRYPTO_MSB                                        9
#define MCMN_APB_CLK_DISABLE_CRYPTO_MASK                                       0x200
#define MCMN_APB_CLK_DISABLE_CRYPTO_GET(x)                                     (((x) & MCMN_APB_CLK_DISABLE_CRYPTO_MASK) >> MCMN_APB_CLK_DISABLE_CRYPTO_LSB)
#define MCMN_APB_CLK_DISABLE_CRYPTO_SET(x)                                     (((0 | (x)) << MCMN_APB_CLK_DISABLE_CRYPTO_LSB) & MCMN_APB_CLK_DISABLE_CRYPTO_MASK)
#define MCMN_APB_CLK_DISABLE_CRYPTO_RESET                                      0x1
#define MCMN_APB_CLK_DISABLE_HWSCH_LSB                                         8
#define MCMN_APB_CLK_DISABLE_HWSCH_MSB                                         8
#define MCMN_APB_CLK_DISABLE_HWSCH_MASK                                        0x100
#define MCMN_APB_CLK_DISABLE_HWSCH_GET(x)                                      (((x) & MCMN_APB_CLK_DISABLE_HWSCH_MASK) >> MCMN_APB_CLK_DISABLE_HWSCH_LSB)
#define MCMN_APB_CLK_DISABLE_HWSCH_SET(x)                                      (((0 | (x)) << MCMN_APB_CLK_DISABLE_HWSCH_LSB) & MCMN_APB_CLK_DISABLE_HWSCH_MASK)
#define MCMN_APB_CLK_DISABLE_HWSCH_RESET                                       0x1
#define MCMN_APB_CLK_DISABLE_MXI_LSB                                           7
#define MCMN_APB_CLK_DISABLE_MXI_MSB                                           7
#define MCMN_APB_CLK_DISABLE_MXI_MASK                                          0x80
#define MCMN_APB_CLK_DISABLE_MXI_GET(x)                                        (((x) & MCMN_APB_CLK_DISABLE_MXI_MASK) >> MCMN_APB_CLK_DISABLE_MXI_LSB)
#define MCMN_APB_CLK_DISABLE_MXI_SET(x)                                        (((0 | (x)) << MCMN_APB_CLK_DISABLE_MXI_LSB) & MCMN_APB_CLK_DISABLE_MXI_MASK)
#define MCMN_APB_CLK_DISABLE_MXI_RESET                                         0x1
#define MCMN_APB_CLK_DISABLE_OLE_LSB                                           6
#define MCMN_APB_CLK_DISABLE_OLE_MSB                                           6
#define MCMN_APB_CLK_DISABLE_OLE_MASK                                          0x40
#define MCMN_APB_CLK_DISABLE_OLE_GET(x)                                        (((x) & MCMN_APB_CLK_DISABLE_OLE_MASK) >> MCMN_APB_CLK_DISABLE_OLE_LSB)
#define MCMN_APB_CLK_DISABLE_OLE_SET(x)                                        (((0 | (x)) << MCMN_APB_CLK_DISABLE_OLE_LSB) & MCMN_APB_CLK_DISABLE_OLE_MASK)
#define MCMN_APB_CLK_DISABLE_OLE_RESET                                         0x1
#define MCMN_APB_CLK_DISABLE_PDG_LSB                                           5
#define MCMN_APB_CLK_DISABLE_PDG_MSB                                           5
#define MCMN_APB_CLK_DISABLE_PDG_MASK                                          0x20
#define MCMN_APB_CLK_DISABLE_PDG_GET(x)                                        (((x) & MCMN_APB_CLK_DISABLE_PDG_MASK) >> MCMN_APB_CLK_DISABLE_PDG_LSB)
#define MCMN_APB_CLK_DISABLE_PDG_SET(x)                                        (((0 | (x)) << MCMN_APB_CLK_DISABLE_PDG_LSB) & MCMN_APB_CLK_DISABLE_PDG_MASK)
#define MCMN_APB_CLK_DISABLE_PDG_RESET                                         0x1
#define MCMN_APB_CLK_DISABLE_RXDMA_LSB                                         4
#define MCMN_APB_CLK_DISABLE_RXDMA_MSB                                         4
#define MCMN_APB_CLK_DISABLE_RXDMA_MASK                                        0x10
#define MCMN_APB_CLK_DISABLE_RXDMA_GET(x)                                      (((x) & MCMN_APB_CLK_DISABLE_RXDMA_MASK) >> MCMN_APB_CLK_DISABLE_RXDMA_LSB)
#define MCMN_APB_CLK_DISABLE_RXDMA_SET(x)                                      (((0 | (x)) << MCMN_APB_CLK_DISABLE_RXDMA_LSB) & MCMN_APB_CLK_DISABLE_RXDMA_MASK)
#define MCMN_APB_CLK_DISABLE_RXDMA_RESET                                       0x1
#define MCMN_APB_CLK_DISABLE_RXPCU_LSB                                         3
#define MCMN_APB_CLK_DISABLE_RXPCU_MSB                                         3
#define MCMN_APB_CLK_DISABLE_RXPCU_MASK                                        0x8
#define MCMN_APB_CLK_DISABLE_RXPCU_GET(x)                                      (((x) & MCMN_APB_CLK_DISABLE_RXPCU_MASK) >> MCMN_APB_CLK_DISABLE_RXPCU_LSB)
#define MCMN_APB_CLK_DISABLE_RXPCU_SET(x)                                      (((0 | (x)) << MCMN_APB_CLK_DISABLE_RXPCU_LSB) & MCMN_APB_CLK_DISABLE_RXPCU_MASK)
#define MCMN_APB_CLK_DISABLE_RXPCU_RESET                                       0x1
#define MCMN_APB_CLK_DISABLE_TXDMA_LSB                                         2
#define MCMN_APB_CLK_DISABLE_TXDMA_MSB                                         2
#define MCMN_APB_CLK_DISABLE_TXDMA_MASK                                        0x4
#define MCMN_APB_CLK_DISABLE_TXDMA_GET(x)                                      (((x) & MCMN_APB_CLK_DISABLE_TXDMA_MASK) >> MCMN_APB_CLK_DISABLE_TXDMA_LSB)
#define MCMN_APB_CLK_DISABLE_TXDMA_SET(x)                                      (((0 | (x)) << MCMN_APB_CLK_DISABLE_TXDMA_LSB) & MCMN_APB_CLK_DISABLE_TXDMA_MASK)
#define MCMN_APB_CLK_DISABLE_TXDMA_RESET                                       0x1
#define MCMN_APB_CLK_DISABLE_TXPCU_LSB                                         1
#define MCMN_APB_CLK_DISABLE_TXPCU_MSB                                         1
#define MCMN_APB_CLK_DISABLE_TXPCU_MASK                                        0x2
#define MCMN_APB_CLK_DISABLE_TXPCU_GET(x)                                      (((x) & MCMN_APB_CLK_DISABLE_TXPCU_MASK) >> MCMN_APB_CLK_DISABLE_TXPCU_LSB)
#define MCMN_APB_CLK_DISABLE_TXPCU_SET(x)                                      (((0 | (x)) << MCMN_APB_CLK_DISABLE_TXPCU_LSB) & MCMN_APB_CLK_DISABLE_TXPCU_MASK)
#define MCMN_APB_CLK_DISABLE_TXPCU_RESET                                       0x1
#define MCMN_APB_CLK_DISABLE_AMPI_LSB                                          0
#define MCMN_APB_CLK_DISABLE_AMPI_MSB                                          0
#define MCMN_APB_CLK_DISABLE_AMPI_MASK                                         0x1
#define MCMN_APB_CLK_DISABLE_AMPI_GET(x)                                       (((x) & MCMN_APB_CLK_DISABLE_AMPI_MASK) >> MCMN_APB_CLK_DISABLE_AMPI_LSB)
#define MCMN_APB_CLK_DISABLE_AMPI_SET(x)                                       (((0 | (x)) << MCMN_APB_CLK_DISABLE_AMPI_LSB) & MCMN_APB_CLK_DISABLE_AMPI_MASK)
#define MCMN_APB_CLK_DISABLE_AMPI_RESET                                        0x1
#define MCMN_APB_CLK_DISABLE_ADDRESS                                           (0x218 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_APB_CLK_DISABLE_RSTMASK                                           0x3ff
#define MCMN_APB_CLK_DISABLE_RESET                                             0x3ff

// 0x21c (MCMN_ECO_SPARE)
#define MCMN_ECO_SPARE_VAL_LSB                                                 0
#define MCMN_ECO_SPARE_VAL_MSB                                                 31
#define MCMN_ECO_SPARE_VAL_MASK                                                0xffffffff
#define MCMN_ECO_SPARE_VAL_GET(x)                                              (((x) & MCMN_ECO_SPARE_VAL_MASK) >> MCMN_ECO_SPARE_VAL_LSB)
#define MCMN_ECO_SPARE_VAL_SET(x)                                              (((0 | (x)) << MCMN_ECO_SPARE_VAL_LSB) & MCMN_ECO_SPARE_VAL_MASK)
#define MCMN_ECO_SPARE_VAL_RESET                                               0x5
#define MCMN_ECO_SPARE_ADDRESS                                                 (0x21c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_ECO_SPARE_RSTMASK                                                 0xffffffff
#define MCMN_ECO_SPARE_RESET                                                   0x5

// 0x220 (MCMN_CLK_GATE_DISABLE)
#define MCMN_CLK_GATE_DISABLE_VAL_LSB                                          0
#define MCMN_CLK_GATE_DISABLE_VAL_MSB                                          0
#define MCMN_CLK_GATE_DISABLE_VAL_MASK                                         0x1
#define MCMN_CLK_GATE_DISABLE_VAL_GET(x)                                       (((x) & MCMN_CLK_GATE_DISABLE_VAL_MASK) >> MCMN_CLK_GATE_DISABLE_VAL_LSB)
#define MCMN_CLK_GATE_DISABLE_VAL_SET(x)                                       (((0 | (x)) << MCMN_CLK_GATE_DISABLE_VAL_LSB) & MCMN_CLK_GATE_DISABLE_VAL_MASK)
#define MCMN_CLK_GATE_DISABLE_VAL_RESET                                        0x1
#define MCMN_CLK_GATE_DISABLE_ADDRESS                                          (0x220 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_CLK_GATE_DISABLE_RSTMASK                                          0x1
#define MCMN_CLK_GATE_DISABLE_RESET                                            0x1

// 0x224 (MCMN_EVENTBUS_BLOCK_MASK)
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_LSB                                       0
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_MSB                                       10
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_MASK                                      0x7ff
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_GET(x)                                    (((x) & MCMN_EVENTBUS_BLOCK_MASK_VAL_MASK) >> MCMN_EVENTBUS_BLOCK_MASK_VAL_LSB)
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_SET(x)                                    (((0 | (x)) << MCMN_EVENTBUS_BLOCK_MASK_VAL_LSB) & MCMN_EVENTBUS_BLOCK_MASK_VAL_MASK)
#define MCMN_EVENTBUS_BLOCK_MASK_VAL_RESET                                     0x0
#define MCMN_EVENTBUS_BLOCK_MASK_ADDRESS                                       (0x224 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_EVENTBUS_BLOCK_MASK_RSTMASK                                       0x7ff
#define MCMN_EVENTBUS_BLOCK_MASK_RESET                                         0x0

// 0x228 (MCMN_SW_EVENTBUS)
#define MCMN_SW_EVENTBUS_VALID_LSB                                             30
#define MCMN_SW_EVENTBUS_VALID_MSB                                             30
#define MCMN_SW_EVENTBUS_VALID_MASK                                            0x40000000
#define MCMN_SW_EVENTBUS_VALID_GET(x)                                          (((x) & MCMN_SW_EVENTBUS_VALID_MASK) >> MCMN_SW_EVENTBUS_VALID_LSB)
#define MCMN_SW_EVENTBUS_VALID_SET(x)                                          (((0 | (x)) << MCMN_SW_EVENTBUS_VALID_LSB) & MCMN_SW_EVENTBUS_VALID_MASK)
#define MCMN_SW_EVENTBUS_VALID_RESET                                           0x0
#define MCMN_SW_EVENTBUS_IN_LSB                                                0
#define MCMN_SW_EVENTBUS_IN_MSB                                                29
#define MCMN_SW_EVENTBUS_IN_MASK                                               0x3fffffff
#define MCMN_SW_EVENTBUS_IN_GET(x)                                             (((x) & MCMN_SW_EVENTBUS_IN_MASK) >> MCMN_SW_EVENTBUS_IN_LSB)
#define MCMN_SW_EVENTBUS_IN_SET(x)                                             (((0 | (x)) << MCMN_SW_EVENTBUS_IN_LSB) & MCMN_SW_EVENTBUS_IN_MASK)
#define MCMN_SW_EVENTBUS_IN_RESET                                              0x0
#define MCMN_SW_EVENTBUS_ADDRESS                                               (0x228 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_SW_EVENTBUS_RSTMASK                                               0x7fffffff
#define MCMN_SW_EVENTBUS_RESET                                                 0x0

// 0x22c (MCMN_MEM_CNTL_0)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_LSB                            31
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_MSB                            31
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_MASK                           0x80000000
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_GET(x)                         (((x) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_MASK) >> MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_SET(x)                         (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_LSB) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_AWT_RESET                          0x0
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_LSB                             30
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_MSB                             30
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_MASK                            0x40000000
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_GET(x)                          (((x) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_SET(x)                          (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_LSB) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_PD_RESET                           0x0
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_LSB                          28
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_MSB                          29
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_MASK                         0x30000000
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_GET(x)                       (((x) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_SET(x)                       (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_RTSEL_RESET                        0x1
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_LSB                          26
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_MSB                          27
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_MASK                         0xc000000
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_GET(x)                       (((x) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_MASK) >> MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_SET(x)                       (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_LSB) & MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_FES_SETUP_RAM_WTSEL_RESET                        0x1
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_LSB                             25
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_MSB                             25
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_MASK                            0x2000000
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_GET(x)                          (((x) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_SET(x)                          (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_LSB) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_PD_RESET                           0x0
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_LSB                          24
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_MSB                          24
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_MASK                         0x1000000
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_GET(x)                       (((x) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_SET(x)                       (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_RTSEL_RESET                        0x0
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_LSB                           22
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_MSB                           23
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_MASK                          0xc00000
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_GET(x)                        (((x) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_MASK) >> MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_SET(x)                        (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_LSB) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TSEL_RESET                         0x1
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_LSB                          21
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_MSB                          21
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_MASK                         0x200000
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_GET(x)                       (((x) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_MASK) >> MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_LSB)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_SET(x)                       (((0 | (x)) << MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_LSB) & MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_MASK)
#define MCMN_MEM_CNTL_0_HWSCH_TX_STATUS_RAM_TURBO_RESET                        0x1
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_LSB                                20
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_MSB                                20
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_MASK                               0x100000
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_GET(x)                             (((x) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_MASK) >> MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_LSB)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_SET(x)                             (((0 | (x)) << MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_LSB) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_MASK)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_AWT_RESET                              0x0
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_LSB                                 19
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_MSB                                 19
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_MASK                                0x80000
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_GET(x)                              (((x) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_SET(x)                              (((0 | (x)) << MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_LSB) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_PD_RESET                               0x0
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_LSB                              17
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_MSB                              18
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_MASK                             0x60000
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_GET(x)                           (((x) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_SET(x)                           (((0 | (x)) << MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_RTSEL_RESET                            0x1
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_LSB                              15
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_MSB                              16
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_MASK                             0x18000
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_GET(x)                           (((x) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_MASK) >> MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_LSB)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_SET(x)                           (((0 | (x)) << MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_LSB) & MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_MASK)
#define MCMN_MEM_CNTL_0_RXPCU_RXBUF_RAM_WTSEL_RESET                            0x1
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_LSB                                  14
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_MSB                                  14
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_MASK                                 0x4000
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_GET(x)                               (((x) & MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_SET(x)                               (((0 | (x)) << MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_LSB) & MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_OLE_TX_BUF_RAM_PD_RESET                                0x0
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_LSB                                  13
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_MSB                                  13
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_MASK                                 0x2000
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_GET(x)                               (((x) & MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_SET(x)                               (((0 | (x)) << MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_LSB) & MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_OLE_RX_BUF_RAM_PD_RESET                                0x0
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_LSB                           12
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_MSB                           12
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_MASK                          0x1000
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_GET(x)                        (((x) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_MASK) >> MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_SET(x)                        (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_LSB) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_AWT_RESET                         0x0
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_LSB                            11
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_MSB                            11
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_MASK                           0x800
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_GET(x)                         (((x) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_SET(x)                         (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_LSB) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_PD_RESET                          0x0
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_LSB                         9
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_MSB                         10
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_MASK                        0x600
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_GET(x)                      (((x) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_SET(x)                      (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_RTSEL_RESET                       0x1
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_LSB                         7
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_MSB                         8
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_MASK                        0x180
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_GET(x)                      (((x) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_MASK) >> MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_SET(x)                      (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_LSB) & MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_GEN_FRAMES_RAM_WTSEL_RESET                       0x1
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_LSB                                6
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_MSB                                6
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_MASK                               0x40
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_GET(x)                             (((x) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_MASK) >> MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_SET(x)                             (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_LSB) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_AWT_RESET                              0x0
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_LSB                                 5
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_MSB                                 5
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_MASK                                0x20
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_GET(x)                              (((x) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_MASK) >> MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_SET(x)                              (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_LSB) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_PD_RESET                               0x0
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_LSB                              3
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_MSB                              4
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_MASK                             0x18
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_GET(x)                           (((x) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_SET(x)                           (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_RTSEL_RESET                            0x1
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_LSB                              1
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_MSB                              2
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_MASK                             0x6
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_GET(x)                           (((x) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_MASK) >> MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_LSB)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_SET(x)                           (((0 | (x)) << MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_LSB) & MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_MASK)
#define MCMN_MEM_CNTL_0_TXPCU_TXBUF_RAM_WTSEL_RESET                            0x1
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_LSB                                        0
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_MSB                                        0
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_MASK                                       0x1
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_GET(x)                                     (((x) & MCMN_MEM_CNTL_0_TRC_RAM_AWT_MASK) >> MCMN_MEM_CNTL_0_TRC_RAM_AWT_LSB)
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_SET(x)                                     (((0 | (x)) << MCMN_MEM_CNTL_0_TRC_RAM_AWT_LSB) & MCMN_MEM_CNTL_0_TRC_RAM_AWT_MASK)
#define MCMN_MEM_CNTL_0_TRC_RAM_AWT_RESET                                      0x0
#define MCMN_MEM_CNTL_0_ADDRESS                                                (0x22c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_MEM_CNTL_0_RSTMASK                                                0xffffffff
#define MCMN_MEM_CNTL_0_RESET                                                  0x1462828a

// 0x230 (MCMN_MEM_CNTL_1)
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_LSB                                         4
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_MSB                                         4
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_MASK                                        0x10
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_GET(x)                                      (((x) & MCMN_MEM_CNTL_1_TRC_RAM_PD_MASK) >> MCMN_MEM_CNTL_1_TRC_RAM_PD_LSB)
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_SET(x)                                      (((0 | (x)) << MCMN_MEM_CNTL_1_TRC_RAM_PD_LSB) & MCMN_MEM_CNTL_1_TRC_RAM_PD_MASK)
#define MCMN_MEM_CNTL_1_TRC_RAM_PD_RESET                                       0x0
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_LSB                                      2
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_MSB                                      3
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_MASK                                     0xc
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_GET(x)                                   (((x) & MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_MASK) >> MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_LSB)
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_SET(x)                                   (((0 | (x)) << MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_LSB) & MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_MASK)
#define MCMN_MEM_CNTL_1_TRC_RAM_RTSEL_RESET                                    0x1
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_LSB                                      0
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_MSB                                      1
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_MASK                                     0x3
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_GET(x)                                   (((x) & MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_MASK) >> MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_LSB)
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_SET(x)                                   (((0 | (x)) << MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_LSB) & MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_MASK)
#define MCMN_MEM_CNTL_1_TRC_RAM_WTSEL_RESET                                    0x1
#define MCMN_MEM_CNTL_1_ADDRESS                                                (0x230 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_MEM_CNTL_1_RSTMASK                                                0x1f
#define MCMN_MEM_CNTL_1_RESET                                                  0x5

// 0x234 (MCMN_MAC_IDLE)
#define MCMN_MAC_IDLE_MXI_LSB                                                  14
#define MCMN_MAC_IDLE_MXI_MSB                                                  14
#define MCMN_MAC_IDLE_MXI_MASK                                                 0x4000
#define MCMN_MAC_IDLE_MXI_GET(x)                                               (((x) & MCMN_MAC_IDLE_MXI_MASK) >> MCMN_MAC_IDLE_MXI_LSB)
#define MCMN_MAC_IDLE_MXI_SET(x)                                               (((0 | (x)) << MCMN_MAC_IDLE_MXI_LSB) & MCMN_MAC_IDLE_MXI_MASK)
#define MCMN_MAC_IDLE_MXI_RESET                                                0x1
#define MCMN_MAC_IDLE_AMPI_RX_LSB                                              13
#define MCMN_MAC_IDLE_AMPI_RX_MSB                                              13
#define MCMN_MAC_IDLE_AMPI_RX_MASK                                             0x2000
#define MCMN_MAC_IDLE_AMPI_RX_GET(x)                                           (((x) & MCMN_MAC_IDLE_AMPI_RX_MASK) >> MCMN_MAC_IDLE_AMPI_RX_LSB)
#define MCMN_MAC_IDLE_AMPI_RX_SET(x)                                           (((0 | (x)) << MCMN_MAC_IDLE_AMPI_RX_LSB) & MCMN_MAC_IDLE_AMPI_RX_MASK)
#define MCMN_MAC_IDLE_AMPI_RX_RESET                                            0x1
#define MCMN_MAC_IDLE_AMPI_TX_LSB                                              12
#define MCMN_MAC_IDLE_AMPI_TX_MSB                                              12
#define MCMN_MAC_IDLE_AMPI_TX_MASK                                             0x1000
#define MCMN_MAC_IDLE_AMPI_TX_GET(x)                                           (((x) & MCMN_MAC_IDLE_AMPI_TX_MASK) >> MCMN_MAC_IDLE_AMPI_TX_LSB)
#define MCMN_MAC_IDLE_AMPI_TX_SET(x)                                           (((0 | (x)) << MCMN_MAC_IDLE_AMPI_TX_LSB) & MCMN_MAC_IDLE_AMPI_TX_MASK)
#define MCMN_MAC_IDLE_AMPI_TX_RESET                                            0x1
#define MCMN_MAC_IDLE_CRYPTO_RX_LSB                                            11
#define MCMN_MAC_IDLE_CRYPTO_RX_MSB                                            11
#define MCMN_MAC_IDLE_CRYPTO_RX_MASK                                           0x800
#define MCMN_MAC_IDLE_CRYPTO_RX_GET(x)                                         (((x) & MCMN_MAC_IDLE_CRYPTO_RX_MASK) >> MCMN_MAC_IDLE_CRYPTO_RX_LSB)
#define MCMN_MAC_IDLE_CRYPTO_RX_SET(x)                                         (((0 | (x)) << MCMN_MAC_IDLE_CRYPTO_RX_LSB) & MCMN_MAC_IDLE_CRYPTO_RX_MASK)
#define MCMN_MAC_IDLE_CRYPTO_RX_RESET                                          0x1
#define MCMN_MAC_IDLE_CRYPTO_TX_LSB                                            10
#define MCMN_MAC_IDLE_CRYPTO_TX_MSB                                            10
#define MCMN_MAC_IDLE_CRYPTO_TX_MASK                                           0x400
#define MCMN_MAC_IDLE_CRYPTO_TX_GET(x)                                         (((x) & MCMN_MAC_IDLE_CRYPTO_TX_MASK) >> MCMN_MAC_IDLE_CRYPTO_TX_LSB)
#define MCMN_MAC_IDLE_CRYPTO_TX_SET(x)                                         (((0 | (x)) << MCMN_MAC_IDLE_CRYPTO_TX_LSB) & MCMN_MAC_IDLE_CRYPTO_TX_MASK)
#define MCMN_MAC_IDLE_CRYPTO_TX_RESET                                          0x1
#define MCMN_MAC_IDLE_RXPCU_LSB                                                9
#define MCMN_MAC_IDLE_RXPCU_MSB                                                9
#define MCMN_MAC_IDLE_RXPCU_MASK                                               0x200
#define MCMN_MAC_IDLE_RXPCU_GET(x)                                             (((x) & MCMN_MAC_IDLE_RXPCU_MASK) >> MCMN_MAC_IDLE_RXPCU_LSB)
#define MCMN_MAC_IDLE_RXPCU_SET(x)                                             (((0 | (x)) << MCMN_MAC_IDLE_RXPCU_LSB) & MCMN_MAC_IDLE_RXPCU_MASK)
#define MCMN_MAC_IDLE_RXPCU_RESET                                              0x1
#define MCMN_MAC_IDLE_TXPCU_LSB                                                8
#define MCMN_MAC_IDLE_TXPCU_MSB                                                8
#define MCMN_MAC_IDLE_TXPCU_MASK                                               0x100
#define MCMN_MAC_IDLE_TXPCU_GET(x)                                             (((x) & MCMN_MAC_IDLE_TXPCU_MASK) >> MCMN_MAC_IDLE_TXPCU_LSB)
#define MCMN_MAC_IDLE_TXPCU_SET(x)                                             (((0 | (x)) << MCMN_MAC_IDLE_TXPCU_LSB) & MCMN_MAC_IDLE_TXPCU_MASK)
#define MCMN_MAC_IDLE_TXPCU_RESET                                              0x1
#define MCMN_MAC_IDLE_OLE_RX_LSB                                               7
#define MCMN_MAC_IDLE_OLE_RX_MSB                                               7
#define MCMN_MAC_IDLE_OLE_RX_MASK                                              0x80
#define MCMN_MAC_IDLE_OLE_RX_GET(x)                                            (((x) & MCMN_MAC_IDLE_OLE_RX_MASK) >> MCMN_MAC_IDLE_OLE_RX_LSB)
#define MCMN_MAC_IDLE_OLE_RX_SET(x)                                            (((0 | (x)) << MCMN_MAC_IDLE_OLE_RX_LSB) & MCMN_MAC_IDLE_OLE_RX_MASK)
#define MCMN_MAC_IDLE_OLE_RX_RESET                                             0x1
#define MCMN_MAC_IDLE_OLE_TX_LSB                                               6
#define MCMN_MAC_IDLE_OLE_TX_MSB                                               6
#define MCMN_MAC_IDLE_OLE_TX_MASK                                              0x40
#define MCMN_MAC_IDLE_OLE_TX_GET(x)                                            (((x) & MCMN_MAC_IDLE_OLE_TX_MASK) >> MCMN_MAC_IDLE_OLE_TX_LSB)
#define MCMN_MAC_IDLE_OLE_TX_SET(x)                                            (((0 | (x)) << MCMN_MAC_IDLE_OLE_TX_LSB) & MCMN_MAC_IDLE_OLE_TX_MASK)
#define MCMN_MAC_IDLE_OLE_TX_RESET                                             0x1
#define MCMN_MAC_IDLE_RXDMA_LSB                                                5
#define MCMN_MAC_IDLE_RXDMA_MSB                                                5
#define MCMN_MAC_IDLE_RXDMA_MASK                                               0x20
#define MCMN_MAC_IDLE_RXDMA_GET(x)                                             (((x) & MCMN_MAC_IDLE_RXDMA_MASK) >> MCMN_MAC_IDLE_RXDMA_LSB)
#define MCMN_MAC_IDLE_RXDMA_SET(x)                                             (((0 | (x)) << MCMN_MAC_IDLE_RXDMA_LSB) & MCMN_MAC_IDLE_RXDMA_MASK)
#define MCMN_MAC_IDLE_RXDMA_RESET                                              0x1
#define MCMN_MAC_IDLE_TXDMA_LSB                                                4
#define MCMN_MAC_IDLE_TXDMA_MSB                                                4
#define MCMN_MAC_IDLE_TXDMA_MASK                                               0x10
#define MCMN_MAC_IDLE_TXDMA_GET(x)                                             (((x) & MCMN_MAC_IDLE_TXDMA_MASK) >> MCMN_MAC_IDLE_TXDMA_LSB)
#define MCMN_MAC_IDLE_TXDMA_SET(x)                                             (((0 | (x)) << MCMN_MAC_IDLE_TXDMA_LSB) & MCMN_MAC_IDLE_TXDMA_MASK)
#define MCMN_MAC_IDLE_TXDMA_RESET                                              0x1
#define MCMN_MAC_IDLE_PDG_LSB                                                  3
#define MCMN_MAC_IDLE_PDG_MSB                                                  3
#define MCMN_MAC_IDLE_PDG_MASK                                                 0x8
#define MCMN_MAC_IDLE_PDG_GET(x)                                               (((x) & MCMN_MAC_IDLE_PDG_MASK) >> MCMN_MAC_IDLE_PDG_LSB)
#define MCMN_MAC_IDLE_PDG_SET(x)                                               (((0 | (x)) << MCMN_MAC_IDLE_PDG_LSB) & MCMN_MAC_IDLE_PDG_MASK)
#define MCMN_MAC_IDLE_PDG_RESET                                                0x1
#define MCMN_MAC_IDLE_HWSCH_LSB                                                2
#define MCMN_MAC_IDLE_HWSCH_MSB                                                2
#define MCMN_MAC_IDLE_HWSCH_MASK                                               0x4
#define MCMN_MAC_IDLE_HWSCH_GET(x)                                             (((x) & MCMN_MAC_IDLE_HWSCH_MASK) >> MCMN_MAC_IDLE_HWSCH_LSB)
#define MCMN_MAC_IDLE_HWSCH_SET(x)                                             (((0 | (x)) << MCMN_MAC_IDLE_HWSCH_LSB) & MCMN_MAC_IDLE_HWSCH_MASK)
#define MCMN_MAC_IDLE_HWSCH_RESET                                              0x1
#define MCMN_MAC_IDLE_RX_LSB                                                   1
#define MCMN_MAC_IDLE_RX_MSB                                                   1
#define MCMN_MAC_IDLE_RX_MASK                                                  0x2
#define MCMN_MAC_IDLE_RX_GET(x)                                                (((x) & MCMN_MAC_IDLE_RX_MASK) >> MCMN_MAC_IDLE_RX_LSB)
#define MCMN_MAC_IDLE_RX_SET(x)                                                (((0 | (x)) << MCMN_MAC_IDLE_RX_LSB) & MCMN_MAC_IDLE_RX_MASK)
#define MCMN_MAC_IDLE_RX_RESET                                                 0x1
#define MCMN_MAC_IDLE_TX_LSB                                                   0
#define MCMN_MAC_IDLE_TX_MSB                                                   0
#define MCMN_MAC_IDLE_TX_MASK                                                  0x1
#define MCMN_MAC_IDLE_TX_GET(x)                                                (((x) & MCMN_MAC_IDLE_TX_MASK) >> MCMN_MAC_IDLE_TX_LSB)
#define MCMN_MAC_IDLE_TX_SET(x)                                                (((0 | (x)) << MCMN_MAC_IDLE_TX_LSB) & MCMN_MAC_IDLE_TX_MASK)
#define MCMN_MAC_IDLE_TX_RESET                                                 0x1
#define MCMN_MAC_IDLE_ADDRESS                                                  (0x234 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_MAC_IDLE_RSTMASK                                                  0x7fff
#define MCMN_MAC_IDLE_RESET                                                    0x7fff

// 0x238 (MAC_PCU_RX_FRAME_CNT)
#define MAC_PCU_RX_FRAME_CNT_VALUE_LSB                                         0
#define MAC_PCU_RX_FRAME_CNT_VALUE_MSB                                         31
#define MAC_PCU_RX_FRAME_CNT_VALUE_MASK                                        0xffffffff
#define MAC_PCU_RX_FRAME_CNT_VALUE_GET(x)                                      (((x) & MAC_PCU_RX_FRAME_CNT_VALUE_MASK) >> MAC_PCU_RX_FRAME_CNT_VALUE_LSB)
#define MAC_PCU_RX_FRAME_CNT_VALUE_SET(x)                                      (((0 | (x)) << MAC_PCU_RX_FRAME_CNT_VALUE_LSB) & MAC_PCU_RX_FRAME_CNT_VALUE_MASK)
#define MAC_PCU_RX_FRAME_CNT_VALUE_RESET                                       0x0
#define MAC_PCU_RX_FRAME_CNT_ADDRESS                                           (0x238 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_RX_FRAME_CNT_RSTMASK                                           0xffffffff
#define MAC_PCU_RX_FRAME_CNT_RESET                                             0x0

// 0x23c (MAC_PCU_TX_FRAME_CNT)
#define MAC_PCU_TX_FRAME_CNT_VALUE_LSB                                         0
#define MAC_PCU_TX_FRAME_CNT_VALUE_MSB                                         31
#define MAC_PCU_TX_FRAME_CNT_VALUE_MASK                                        0xffffffff
#define MAC_PCU_TX_FRAME_CNT_VALUE_GET(x)                                      (((x) & MAC_PCU_TX_FRAME_CNT_VALUE_MASK) >> MAC_PCU_TX_FRAME_CNT_VALUE_LSB)
#define MAC_PCU_TX_FRAME_CNT_VALUE_SET(x)                                      (((0 | (x)) << MAC_PCU_TX_FRAME_CNT_VALUE_LSB) & MAC_PCU_TX_FRAME_CNT_VALUE_MASK)
#define MAC_PCU_TX_FRAME_CNT_VALUE_RESET                                       0x0
#define MAC_PCU_TX_FRAME_CNT_ADDRESS                                           (0x23c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_TX_FRAME_CNT_RSTMASK                                           0xffffffff
#define MAC_PCU_TX_FRAME_CNT_RESET                                             0x0

// 0x240 (MAC_PCU_RX_CLEAR_CNT)
#define MAC_PCU_RX_CLEAR_CNT_VALUE_LSB                                         0
#define MAC_PCU_RX_CLEAR_CNT_VALUE_MSB                                         31
#define MAC_PCU_RX_CLEAR_CNT_VALUE_MASK                                        0xffffffff
#define MAC_PCU_RX_CLEAR_CNT_VALUE_GET(x)                                      (((x) & MAC_PCU_RX_CLEAR_CNT_VALUE_MASK) >> MAC_PCU_RX_CLEAR_CNT_VALUE_LSB)
#define MAC_PCU_RX_CLEAR_CNT_VALUE_SET(x)                                      (((0 | (x)) << MAC_PCU_RX_CLEAR_CNT_VALUE_LSB) & MAC_PCU_RX_CLEAR_CNT_VALUE_MASK)
#define MAC_PCU_RX_CLEAR_CNT_VALUE_RESET                                       0x0
#define MAC_PCU_RX_CLEAR_CNT_ADDRESS                                           (0x240 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MAC_PCU_RX_CLEAR_CNT_RSTMASK                                           0xffffffff
#define MAC_PCU_RX_CLEAR_CNT_RESET                                             0x0

// 0x248 (MCMN_EVENTBUS_MASK0)
#define MCMN_EVENTBUS_MASK0_VAL_LSB                                            0
#define MCMN_EVENTBUS_MASK0_VAL_MSB                                            31
#define MCMN_EVENTBUS_MASK0_VAL_MASK                                           0xffffffff
#define MCMN_EVENTBUS_MASK0_VAL_GET(x)                                         (((x) & MCMN_EVENTBUS_MASK0_VAL_MASK) >> MCMN_EVENTBUS_MASK0_VAL_LSB)
#define MCMN_EVENTBUS_MASK0_VAL_SET(x)                                         (((0 | (x)) << MCMN_EVENTBUS_MASK0_VAL_LSB) & MCMN_EVENTBUS_MASK0_VAL_MASK)
#define MCMN_EVENTBUS_MASK0_VAL_RESET                                          0x0
#define MCMN_EVENTBUS_MASK0_ADDRESS                                            (0x248 + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_EVENTBUS_MASK0_RSTMASK                                            0xffffffff
#define MCMN_EVENTBUS_MASK0_RESET                                              0x0

// 0x24c (MCMN_EVENTBUS_MASK1)
#define MCMN_EVENTBUS_MASK1_VAL_LSB                                            0
#define MCMN_EVENTBUS_MASK1_VAL_MSB                                            8
#define MCMN_EVENTBUS_MASK1_VAL_MASK                                           0x1ff
#define MCMN_EVENTBUS_MASK1_VAL_GET(x)                                         (((x) & MCMN_EVENTBUS_MASK1_VAL_MASK) >> MCMN_EVENTBUS_MASK1_VAL_LSB)
#define MCMN_EVENTBUS_MASK1_VAL_SET(x)                                         (((0 | (x)) << MCMN_EVENTBUS_MASK1_VAL_LSB) & MCMN_EVENTBUS_MASK1_VAL_MASK)
#define MCMN_EVENTBUS_MASK1_VAL_RESET                                          0x0
#define MCMN_EVENTBUS_MASK1_ADDRESS                                            (0x24c + __MAC_MCMN_REG_BASE_ADDRESS)
#define MCMN_EVENTBUS_MASK1_RSTMASK                                            0x1ff
#define MCMN_EVENTBUS_MASK1_RESET                                              0x0



#endif /* _MAC_MCMN_REG_H_ */
