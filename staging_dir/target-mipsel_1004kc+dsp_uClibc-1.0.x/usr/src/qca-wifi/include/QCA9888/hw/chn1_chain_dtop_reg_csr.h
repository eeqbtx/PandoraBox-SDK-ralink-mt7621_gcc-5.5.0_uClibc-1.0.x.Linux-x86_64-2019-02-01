/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CHN1_CHAIN_DTOP_REG_CSR_H_
#define _CHN1_CHAIN_DTOP_REG_CSR_H_


#ifndef __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS
#define __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS (0x46600)
#endif


// 0x0 (CHN1_CH0)
#define CHN1_CH0_CHAIN_ENABLE_LSB                                              31
#define CHN1_CH0_CHAIN_ENABLE_MSB                                              31
#define CHN1_CH0_CHAIN_ENABLE_MASK                                             0x80000000
#define CHN1_CH0_CHAIN_ENABLE_GET(x)                                           (((x) & CHN1_CH0_CHAIN_ENABLE_MASK) >> CHN1_CH0_CHAIN_ENABLE_LSB)
#define CHN1_CH0_CHAIN_ENABLE_SET(x)                                           (((0 | (x)) << CHN1_CH0_CHAIN_ENABLE_LSB) & CHN1_CH0_CHAIN_ENABLE_MASK)
#define CHN1_CH0_CHAIN_ENABLE_RESET                                            0x0
#define CHN1_CH0_ADC_SAMP_RATE_OVR_LSB                                         28
#define CHN1_CH0_ADC_SAMP_RATE_OVR_MSB                                         30
#define CHN1_CH0_ADC_SAMP_RATE_OVR_MASK                                        0x70000000
#define CHN1_CH0_ADC_SAMP_RATE_OVR_GET(x)                                      (((x) & CHN1_CH0_ADC_SAMP_RATE_OVR_MASK) >> CHN1_CH0_ADC_SAMP_RATE_OVR_LSB)
#define CHN1_CH0_ADC_SAMP_RATE_OVR_SET(x)                                      (((0 | (x)) << CHN1_CH0_ADC_SAMP_RATE_OVR_LSB) & CHN1_CH0_ADC_SAMP_RATE_OVR_MASK)
#define CHN1_CH0_ADC_SAMP_RATE_OVR_RESET                                       0x0
#define CHN1_CH0_BW_ST_OVR_LSB                                                 24
#define CHN1_CH0_BW_ST_OVR_MSB                                                 27
#define CHN1_CH0_BW_ST_OVR_MASK                                                0xf000000
#define CHN1_CH0_BW_ST_OVR_GET(x)                                              (((x) & CHN1_CH0_BW_ST_OVR_MASK) >> CHN1_CH0_BW_ST_OVR_LSB)
#define CHN1_CH0_BW_ST_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH0_BW_ST_OVR_LSB) & CHN1_CH0_BW_ST_OVR_MASK)
#define CHN1_CH0_BW_ST_OVR_RESET                                               0x0
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_LSB                                         22
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_MSB                                         23
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_MASK                                        0xc00000
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_GET(x)                                      (((x) & CHN1_CH0_CHAIN_BIAS_ON_OVR_MASK) >> CHN1_CH0_CHAIN_BIAS_ON_OVR_LSB)
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_SET(x)                                      (((0 | (x)) << CHN1_CH0_CHAIN_BIAS_ON_OVR_LSB) & CHN1_CH0_CHAIN_BIAS_ON_OVR_MASK)
#define CHN1_CH0_CHAIN_BIAS_ON_OVR_RESET                                       0x0
#define CHN1_CH0_AGCON_OVR_LSB                                                 20
#define CHN1_CH0_AGCON_OVR_MSB                                                 21
#define CHN1_CH0_AGCON_OVR_MASK                                                0x300000
#define CHN1_CH0_AGCON_OVR_GET(x)                                              (((x) & CHN1_CH0_AGCON_OVR_MASK) >> CHN1_CH0_AGCON_OVR_LSB)
#define CHN1_CH0_AGCON_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH0_AGCON_OVR_LSB) & CHN1_CH0_AGCON_OVR_MASK)
#define CHN1_CH0_AGCON_OVR_RESET                                               0x0
#define CHN1_CH0_RXON_OVR_LSB                                                  18
#define CHN1_CH0_RXON_OVR_MSB                                                  19
#define CHN1_CH0_RXON_OVR_MASK                                                 0xc0000
#define CHN1_CH0_RXON_OVR_GET(x)                                               (((x) & CHN1_CH0_RXON_OVR_MASK) >> CHN1_CH0_RXON_OVR_LSB)
#define CHN1_CH0_RXON_OVR_SET(x)                                               (((0 | (x)) << CHN1_CH0_RXON_OVR_LSB) & CHN1_CH0_RXON_OVR_MASK)
#define CHN1_CH0_RXON_OVR_RESET                                                0x0
#define CHN1_CH0_TXON_OVR_LSB                                                  16
#define CHN1_CH0_TXON_OVR_MSB                                                  17
#define CHN1_CH0_TXON_OVR_MASK                                                 0x30000
#define CHN1_CH0_TXON_OVR_GET(x)                                               (((x) & CHN1_CH0_TXON_OVR_MASK) >> CHN1_CH0_TXON_OVR_LSB)
#define CHN1_CH0_TXON_OVR_SET(x)                                               (((0 | (x)) << CHN1_CH0_TXON_OVR_LSB) & CHN1_CH0_TXON_OVR_MASK)
#define CHN1_CH0_TXON_OVR_RESET                                                0x0
#define CHN1_CH0_DAON_OVR_LSB                                                  14
#define CHN1_CH0_DAON_OVR_MSB                                                  15
#define CHN1_CH0_DAON_OVR_MASK                                                 0xc000
#define CHN1_CH0_DAON_OVR_GET(x)                                               (((x) & CHN1_CH0_DAON_OVR_MASK) >> CHN1_CH0_DAON_OVR_LSB)
#define CHN1_CH0_DAON_OVR_SET(x)                                               (((0 | (x)) << CHN1_CH0_DAON_OVR_LSB) & CHN1_CH0_DAON_OVR_MASK)
#define CHN1_CH0_DAON_OVR_RESET                                                0x0
#define CHN1_CH0_CALRX_OVR_LSB                                                 12
#define CHN1_CH0_CALRX_OVR_MSB                                                 13
#define CHN1_CH0_CALRX_OVR_MASK                                                0x3000
#define CHN1_CH0_CALRX_OVR_GET(x)                                              (((x) & CHN1_CH0_CALRX_OVR_MASK) >> CHN1_CH0_CALRX_OVR_LSB)
#define CHN1_CH0_CALRX_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH0_CALRX_OVR_LSB) & CHN1_CH0_CALRX_OVR_MASK)
#define CHN1_CH0_CALRX_OVR_RESET                                               0x0
#define CHN1_CH0_CALTX_OVR_LSB                                                 10
#define CHN1_CH0_CALTX_OVR_MSB                                                 11
#define CHN1_CH0_CALTX_OVR_MASK                                                0xc00
#define CHN1_CH0_CALTX_OVR_GET(x)                                              (((x) & CHN1_CH0_CALTX_OVR_MASK) >> CHN1_CH0_CALTX_OVR_LSB)
#define CHN1_CH0_CALTX_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH0_CALTX_OVR_LSB) & CHN1_CH0_CALTX_OVR_MASK)
#define CHN1_CH0_CALTX_OVR_RESET                                               0x0
#define CHN1_CH0_CALFC_OVR_LSB                                                 8
#define CHN1_CH0_CALFC_OVR_MSB                                                 9
#define CHN1_CH0_CALFC_OVR_MASK                                                0x300
#define CHN1_CH0_CALFC_OVR_GET(x)                                              (((x) & CHN1_CH0_CALFC_OVR_MASK) >> CHN1_CH0_CALFC_OVR_LSB)
#define CHN1_CH0_CALFC_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH0_CALFC_OVR_LSB) & CHN1_CH0_CALFC_OVR_MASK)
#define CHN1_CH0_CALFC_OVR_RESET                                               0x0
#define CHN1_CH0_CALXPA_OVR_LSB                                                6
#define CHN1_CH0_CALXPA_OVR_MSB                                                7
#define CHN1_CH0_CALXPA_OVR_MASK                                               0xc0
#define CHN1_CH0_CALXPA_OVR_GET(x)                                             (((x) & CHN1_CH0_CALXPA_OVR_MASK) >> CHN1_CH0_CALXPA_OVR_LSB)
#define CHN1_CH0_CALXPA_OVR_SET(x)                                             (((0 | (x)) << CHN1_CH0_CALXPA_OVR_LSB) & CHN1_CH0_CALXPA_OVR_MASK)
#define CHN1_CH0_CALXPA_OVR_RESET                                              0x0
#define CHN1_CH0_CALTXSHIFT_OVR_LSB                                            4
#define CHN1_CH0_CALTXSHIFT_OVR_MSB                                            5
#define CHN1_CH0_CALTXSHIFT_OVR_MASK                                           0x30
#define CHN1_CH0_CALTXSHIFT_OVR_GET(x)                                         (((x) & CHN1_CH0_CALTXSHIFT_OVR_MASK) >> CHN1_CH0_CALTXSHIFT_OVR_LSB)
#define CHN1_CH0_CALTXSHIFT_OVR_SET(x)                                         (((0 | (x)) << CHN1_CH0_CALTXSHIFT_OVR_LSB) & CHN1_CH0_CALTXSHIFT_OVR_MASK)
#define CHN1_CH0_CALTXSHIFT_OVR_RESET                                          0x0
#define CHN1_CH0_CALRESIDUE_OVR_LSB                                            2
#define CHN1_CH0_CALRESIDUE_OVR_MSB                                            3
#define CHN1_CH0_CALRESIDUE_OVR_MASK                                           0xc
#define CHN1_CH0_CALRESIDUE_OVR_GET(x)                                         (((x) & CHN1_CH0_CALRESIDUE_OVR_MASK) >> CHN1_CH0_CALRESIDUE_OVR_LSB)
#define CHN1_CH0_CALRESIDUE_OVR_SET(x)                                         (((0 | (x)) << CHN1_CH0_CALRESIDUE_OVR_LSB) & CHN1_CH0_CALRESIDUE_OVR_MASK)
#define CHN1_CH0_CALRESIDUE_OVR_RESET                                          0x0
#define CHN1_CH0_CALADCOFFSET_OVR_LSB                                          0
#define CHN1_CH0_CALADCOFFSET_OVR_MSB                                          1
#define CHN1_CH0_CALADCOFFSET_OVR_MASK                                         0x3
#define CHN1_CH0_CALADCOFFSET_OVR_GET(x)                                       (((x) & CHN1_CH0_CALADCOFFSET_OVR_MASK) >> CHN1_CH0_CALADCOFFSET_OVR_LSB)
#define CHN1_CH0_CALADCOFFSET_OVR_SET(x)                                       (((0 | (x)) << CHN1_CH0_CALADCOFFSET_OVR_LSB) & CHN1_CH0_CALADCOFFSET_OVR_MASK)
#define CHN1_CH0_CALADCOFFSET_OVR_RESET                                        0x0
#define CHN1_CH0_ADDRESS                                                       (0x0 + __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS)
#define CHN1_CH0_RSTMASK                                                       0xffffffff
#define CHN1_CH0_RESET                                                         0x0

// 0x4 (CHN1_CH1)
#define CHN1_CH1_BMODE_OVR_LSB                                                 30
#define CHN1_CH1_BMODE_OVR_MSB                                                 31
#define CHN1_CH1_BMODE_OVR_MASK                                                0xc0000000
#define CHN1_CH1_BMODE_OVR_GET(x)                                              (((x) & CHN1_CH1_BMODE_OVR_MASK) >> CHN1_CH1_BMODE_OVR_LSB)
#define CHN1_CH1_BMODE_OVR_SET(x)                                              (((0 | (x)) << CHN1_CH1_BMODE_OVR_LSB) & CHN1_CH1_BMODE_OVR_MASK)
#define CHN1_CH1_BMODE_OVR_RESET                                               0x0
#define CHN1_CH1_LO_RTXON_OVR_LSB                                              28
#define CHN1_CH1_LO_RTXON_OVR_MSB                                              29
#define CHN1_CH1_LO_RTXON_OVR_MASK                                             0x30000000
#define CHN1_CH1_LO_RTXON_OVR_GET(x)                                           (((x) & CHN1_CH1_LO_RTXON_OVR_MASK) >> CHN1_CH1_LO_RTXON_OVR_LSB)
#define CHN1_CH1_LO_RTXON_OVR_SET(x)                                           (((0 | (x)) << CHN1_CH1_LO_RTXON_OVR_LSB) & CHN1_CH1_LO_RTXON_OVR_MASK)
#define CHN1_CH1_LO_RTXON_OVR_RESET                                            0x0
#define CHN1_CH1_CALFC_SYNTHON_LSB                                             27
#define CHN1_CH1_CALFC_SYNTHON_MSB                                             27
#define CHN1_CH1_CALFC_SYNTHON_MASK                                            0x8000000
#define CHN1_CH1_CALFC_SYNTHON_GET(x)                                          (((x) & CHN1_CH1_CALFC_SYNTHON_MASK) >> CHN1_CH1_CALFC_SYNTHON_LSB)
#define CHN1_CH1_CALFC_SYNTHON_SET(x)                                          (((0 | (x)) << CHN1_CH1_CALFC_SYNTHON_LSB) & CHN1_CH1_CALFC_SYNTHON_MASK)
#define CHN1_CH1_CALFC_SYNTHON_RESET                                           0x0
#define CHN1_CH1_CALADCOFFSET_SYNTHON_LSB                                      26
#define CHN1_CH1_CALADCOFFSET_SYNTHON_MSB                                      26
#define CHN1_CH1_CALADCOFFSET_SYNTHON_MASK                                     0x4000000
#define CHN1_CH1_CALADCOFFSET_SYNTHON_GET(x)                                   (((x) & CHN1_CH1_CALADCOFFSET_SYNTHON_MASK) >> CHN1_CH1_CALADCOFFSET_SYNTHON_LSB)
#define CHN1_CH1_CALADCOFFSET_SYNTHON_SET(x)                                   (((0 | (x)) << CHN1_CH1_CALADCOFFSET_SYNTHON_LSB) & CHN1_CH1_CALADCOFFSET_SYNTHON_MASK)
#define CHN1_CH1_CALADCOFFSET_SYNTHON_RESET                                    0x0
#define CHN1_CH1_EN_CLK_DRV_OVR_LSB                                            24
#define CHN1_CH1_EN_CLK_DRV_OVR_MSB                                            25
#define CHN1_CH1_EN_CLK_DRV_OVR_MASK                                           0x3000000
#define CHN1_CH1_EN_CLK_DRV_OVR_GET(x)                                         (((x) & CHN1_CH1_EN_CLK_DRV_OVR_MASK) >> CHN1_CH1_EN_CLK_DRV_OVR_LSB)
#define CHN1_CH1_EN_CLK_DRV_OVR_SET(x)                                         (((0 | (x)) << CHN1_CH1_EN_CLK_DRV_OVR_LSB) & CHN1_CH1_EN_CLK_DRV_OVR_MASK)
#define CHN1_CH1_EN_CLK_DRV_OVR_RESET                                          0x0
#define CHN1_CH1_CLK_DRV_LSB                                                   16
#define CHN1_CH1_CLK_DRV_MSB                                                   23
#define CHN1_CH1_CLK_DRV_MASK                                                  0xff0000
#define CHN1_CH1_CLK_DRV_GET(x)                                                (((x) & CHN1_CH1_CLK_DRV_MASK) >> CHN1_CH1_CLK_DRV_LSB)
#define CHN1_CH1_CLK_DRV_SET(x)                                                (((0 | (x)) << CHN1_CH1_CLK_DRV_LSB) & CHN1_CH1_CLK_DRV_MASK)
#define CHN1_CH1_CLK_DRV_RESET                                                 0x5
#define CHN1_CH1_CHAIN_ATBSEL_LSB                                              12
#define CHN1_CH1_CHAIN_ATBSEL_MSB                                              15
#define CHN1_CH1_CHAIN_ATBSEL_MASK                                             0xf000
#define CHN1_CH1_CHAIN_ATBSEL_GET(x)                                           (((x) & CHN1_CH1_CHAIN_ATBSEL_MASK) >> CHN1_CH1_CHAIN_ATBSEL_LSB)
#define CHN1_CH1_CHAIN_ATBSEL_SET(x)                                           (((0 | (x)) << CHN1_CH1_CHAIN_ATBSEL_LSB) & CHN1_CH1_CHAIN_ATBSEL_MASK)
#define CHN1_CH1_CHAIN_ATBSEL_RESET                                            0x0
#define CHN1_CH1_TXON_CHAINED_SEL_LSB                                          11
#define CHN1_CH1_TXON_CHAINED_SEL_MSB                                          11
#define CHN1_CH1_TXON_CHAINED_SEL_MASK                                         0x800
#define CHN1_CH1_TXON_CHAINED_SEL_GET(x)                                       (((x) & CHN1_CH1_TXON_CHAINED_SEL_MASK) >> CHN1_CH1_TXON_CHAINED_SEL_LSB)
#define CHN1_CH1_TXON_CHAINED_SEL_SET(x)                                       (((0 | (x)) << CHN1_CH1_TXON_CHAINED_SEL_LSB) & CHN1_CH1_TXON_CHAINED_SEL_MASK)
#define CHN1_CH1_TXON_CHAINED_SEL_RESET                                        0x0
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_LSB                                      10
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_MSB                                      10
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_MASK                                     0x400
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_GET(x)                                   (((x) & CHN1_CH1_TXON_CHAINED_OVR_SEL_MASK) >> CHN1_CH1_TXON_CHAINED_OVR_SEL_LSB)
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_SET(x)                                   (((0 | (x)) << CHN1_CH1_TXON_CHAINED_OVR_SEL_LSB) & CHN1_CH1_TXON_CHAINED_OVR_SEL_MASK)
#define CHN1_CH1_TXON_CHAINED_OVR_SEL_RESET                                    0x0
#define CHN1_CH1_RESERVED_0_LSB                                                0
#define CHN1_CH1_RESERVED_0_MSB                                                9
#define CHN1_CH1_RESERVED_0_MASK                                               0x3ff
#define CHN1_CH1_RESERVED_0_GET(x)                                             (((x) & CHN1_CH1_RESERVED_0_MASK) >> CHN1_CH1_RESERVED_0_LSB)
#define CHN1_CH1_RESERVED_0_SET(x)                                             (((0 | (x)) << CHN1_CH1_RESERVED_0_LSB) & CHN1_CH1_RESERVED_0_MASK)
#define CHN1_CH1_RESERVED_0_RESET                                              0x0
#define CHN1_CH1_ADDRESS                                                       (0x4 + __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS)
#define CHN1_CH1_RSTMASK                                                       0xffffffff
#define CHN1_CH1_RESET                                                         0x50000

// 0x8 (CHN1_CH2)
#define CHN1_CH2_CHAIN_DTOP_SPARE_LSB                                          0
#define CHN1_CH2_CHAIN_DTOP_SPARE_MSB                                          31
#define CHN1_CH2_CHAIN_DTOP_SPARE_MASK                                         0xffffffff
#define CHN1_CH2_CHAIN_DTOP_SPARE_GET(x)                                       (((x) & CHN1_CH2_CHAIN_DTOP_SPARE_MASK) >> CHN1_CH2_CHAIN_DTOP_SPARE_LSB)
#define CHN1_CH2_CHAIN_DTOP_SPARE_SET(x)                                       (((0 | (x)) << CHN1_CH2_CHAIN_DTOP_SPARE_LSB) & CHN1_CH2_CHAIN_DTOP_SPARE_MASK)
#define CHN1_CH2_CHAIN_DTOP_SPARE_RESET                                        0x0
#define CHN1_CH2_ADDRESS                                                       (0x8 + __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS)
#define CHN1_CH2_RSTMASK                                                       0xffffffff
#define CHN1_CH2_RESET                                                         0x0

// 0xc (CHN1_CH3)
#define CHN1_CH3_SS_MC_READBACK_LSB                                            0
#define CHN1_CH3_SS_MC_READBACK_MSB                                            31
#define CHN1_CH3_SS_MC_READBACK_MASK                                           0xffffffff
#define CHN1_CH3_SS_MC_READBACK_GET(x)                                         (((x) & CHN1_CH3_SS_MC_READBACK_MASK) >> CHN1_CH3_SS_MC_READBACK_LSB)
#define CHN1_CH3_SS_MC_READBACK_SET(x)                                         (((0 | (x)) << CHN1_CH3_SS_MC_READBACK_LSB) & CHN1_CH3_SS_MC_READBACK_MASK)
#define CHN1_CH3_SS_MC_READBACK_RESET                                          0x0
#define CHN1_CH3_ADDRESS                                                       (0xc + __CHN1_CHAIN_DTOP_REG_CSR_BASE_ADDRESS)
#define CHN1_CH3_RSTMASK                                                       0xffffffff
#define CHN1_CH3_RESET                                                         0x0



#endif /* _CHN1_CHAIN_DTOP_REG_CSR_H_ */
