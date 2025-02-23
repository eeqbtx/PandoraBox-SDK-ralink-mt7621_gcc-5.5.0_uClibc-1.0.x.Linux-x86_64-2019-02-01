/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef __REG_TIERED_SM_TABLE_MAP_MACRO_H__
#define __REG_TIERED_SM_TABLE_MAP_MACRO_H__


/* macros for BlueprintGlobalNameSpace::sm_tables_dummy1 */
#ifndef __SM_TABLES_DUMMY1_MACRO__
#define __SM_TABLES_DUMMY1_MACRO__

/* macros for field dummy1 */
#define SM_TABLES_DUMMY1__DUMMY1__SHIFT                                       0
#define SM_TABLES_DUMMY1__DUMMY1__WIDTH                                      32
#define SM_TABLES_DUMMY1__DUMMY1__MASK                              0xffffffffU
#define SM_TABLES_DUMMY1__DUMMY1__READ(src)      (u_int32_t)(src) & 0xffffffffU
#define SM_TABLES_DUMMY1__DUMMY1__WRITE(src)   ((u_int32_t)(src) & 0xffffffffU)
#define SM_TABLES_DUMMY1__DUMMY1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define SM_TABLES_DUMMY1__DUMMY1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define SM_TABLES_DUMMY1__TYPE                                        u_int32_t
#define SM_TABLES_DUMMY1__READ                                      0xffffffffU
#define SM_TABLES_DUMMY1__WRITE                                     0xffffffffU

#endif /* __SM_TABLES_DUMMY1_MACRO__ */


/* macros for sm_table_map.BB_sm_tables_dummy1 */
#define INST_SM_TABLE_MAP__BB_SM_TABLES_DUMMY1__NUM                           1

/* macros for BlueprintGlobalNameSpace::dc_dac_mem_b0 */
#ifndef __DC_DAC_MEM_B0_MACRO__
#define __DC_DAC_MEM_B0_MACRO__

/* macros for field dc_dac_setting */
#define DC_DAC_MEM_B0__DC_DAC_SETTING__SHIFT                                  0
#define DC_DAC_MEM_B0__DC_DAC_SETTING__WIDTH                                 32
#define DC_DAC_MEM_B0__DC_DAC_SETTING__MASK                         0xffffffffU
#define DC_DAC_MEM_B0__DC_DAC_SETTING__READ(src) (u_int32_t)(src) & 0xffffffffU
#define DC_DAC_MEM_B0__DC_DAC_SETTING__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define DC_DAC_MEM_B0__DC_DAC_SETTING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define DC_DAC_MEM_B0__DC_DAC_SETTING__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define DC_DAC_MEM_B0__TYPE                                           u_int32_t
#define DC_DAC_MEM_B0__READ                                         0xffffffffU
#define DC_DAC_MEM_B0__WRITE                                        0xffffffffU

#endif /* __DC_DAC_MEM_B0_MACRO__ */


/* macros for sm_table_map.BB_dc_dac_mem_b0 */
#define INST_SM_TABLE_MAP__BB_DC_DAC_MEM_B0__NUM                             52

/* macros for BlueprintGlobalNameSpace::tpc_txgain_sram */
#ifndef __TPC_TXGAIN_SRAM_MACRO__
#define __TPC_TXGAIN_SRAM_MACRO__

/* macros for field tpc_txgain_word */
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__SHIFT                               0
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__WIDTH                              32
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__MASK                      0xffffffffU
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__READ(src) \
                    (u_int32_t)(src)\
                    & 0xffffffffU
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define TPC_TXGAIN_SRAM__TPC_TXGAIN_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define TPC_TXGAIN_SRAM__TYPE                                         u_int32_t
#define TPC_TXGAIN_SRAM__READ                                       0xffffffffU
#define TPC_TXGAIN_SRAM__WRITE                                      0xffffffffU

#endif /* __TPC_TXGAIN_SRAM_MACRO__ */


/* macros for sm_table_map.BB_tpc_txgain_sram */
#define INST_SM_TABLE_MAP__BB_TPC_TXGAIN_SRAM__NUM                           96

/* macros for BlueprintGlobalNameSpace::tpc_plut_sram */
#ifndef __TPC_PLUT_SRAM_MACRO__
#define __TPC_PLUT_SRAM_MACRO__

/* macros for field tpc_plut_word */
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__SHIFT                                   0
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__WIDTH                                  32
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__MASK                          0xffffffffU
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__READ(src)  (u_int32_t)(src) & 0xffffffffU
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define TPC_PLUT_SRAM__TPC_PLUT_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define TPC_PLUT_SRAM__TYPE                                           u_int32_t
#define TPC_PLUT_SRAM__READ                                         0xffffffffU
#define TPC_PLUT_SRAM__WRITE                                        0xffffffffU

#endif /* __TPC_PLUT_SRAM_MACRO__ */


/* macros for sm_table_map.BB_tpc_plut_sram */
#define INST_SM_TABLE_MAP__BB_TPC_PLUT_SRAM__NUM                            640

/* macros for BlueprintGlobalNameSpace::tpc_glut_sram */
#ifndef __TPC_GLUT_SRAM_MACRO__
#define __TPC_GLUT_SRAM_MACRO__

/* macros for field tpc_glut_word */
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__SHIFT                                   0
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__WIDTH                                  32
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__MASK                          0xffffffffU
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__READ(src)  (u_int32_t)(src) & 0xffffffffU
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define TPC_GLUT_SRAM__TPC_GLUT_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define TPC_GLUT_SRAM__TYPE                                           u_int32_t
#define TPC_GLUT_SRAM__READ                                         0xffffffffU
#define TPC_GLUT_SRAM__WRITE                                        0xffffffffU

#endif /* __TPC_GLUT_SRAM_MACRO__ */


/* macros for sm_table_map.BB_tpc_glut_sram */
#define INST_SM_TABLE_MAP__BB_TPC_GLUT_SRAM__NUM                            164

/* macros for BlueprintGlobalNameSpace::tpc_alut_sram */
#ifndef __TPC_ALUT_SRAM_MACRO__
#define __TPC_ALUT_SRAM_MACRO__

/* macros for field tpc_alut_word */
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__SHIFT                                   0
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__WIDTH                                  32
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__MASK                          0xffffffffU
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__READ(src)  (u_int32_t)(src) & 0xffffffffU
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define TPC_ALUT_SRAM__TPC_ALUT_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define TPC_ALUT_SRAM__TYPE                                           u_int32_t
#define TPC_ALUT_SRAM__READ                                         0xffffffffU
#define TPC_ALUT_SRAM__WRITE                                        0xffffffffU

#endif /* __TPC_ALUT_SRAM_MACRO__ */


/* macros for sm_table_map.BB_tpc_alut_sram */
#define INST_SM_TABLE_MAP__BB_TPC_ALUT_SRAM__NUM                            160

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_0 */
#ifndef __RXCAL_TX_GAIN_TABLE_0_MACRO__
#define __RXCAL_TX_GAIN_TABLE_0_MACRO__

/* macros for field rxcal_tx_gain_table_0 */
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_0__RXCAL_TX_GAIN_TABLE_0__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_0__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_0__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_0__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_0_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_0 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_0__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_1 */
#ifndef __RXCAL_TX_GAIN_TABLE_1_MACRO__
#define __RXCAL_TX_GAIN_TABLE_1_MACRO__

/* macros for field rxcal_tx_gain_table_1 */
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_1__RXCAL_TX_GAIN_TABLE_1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_1__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_1__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_1__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_1_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_1 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_1__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_2 */
#ifndef __RXCAL_TX_GAIN_TABLE_2_MACRO__
#define __RXCAL_TX_GAIN_TABLE_2_MACRO__

/* macros for field rxcal_tx_gain_table_2 */
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_2__RXCAL_TX_GAIN_TABLE_2__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_2__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_2__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_2__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_2_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_2 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_2__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_3 */
#ifndef __RXCAL_TX_GAIN_TABLE_3_MACRO__
#define __RXCAL_TX_GAIN_TABLE_3_MACRO__

/* macros for field rxcal_tx_gain_table_3 */
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_3__RXCAL_TX_GAIN_TABLE_3__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_3__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_3__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_3__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_3_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_3 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_3__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_4 */
#ifndef __RXCAL_TX_GAIN_TABLE_4_MACRO__
#define __RXCAL_TX_GAIN_TABLE_4_MACRO__

/* macros for field rxcal_tx_gain_table_4 */
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_4__RXCAL_TX_GAIN_TABLE_4__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_4__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_4__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_4__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_4_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_4 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_4__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_5 */
#ifndef __RXCAL_TX_GAIN_TABLE_5_MACRO__
#define __RXCAL_TX_GAIN_TABLE_5_MACRO__

/* macros for field rxcal_tx_gain_table_5 */
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_5__RXCAL_TX_GAIN_TABLE_5__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_5__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_5__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_5__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_5_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_5 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_5__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_6 */
#ifndef __RXCAL_TX_GAIN_TABLE_6_MACRO__
#define __RXCAL_TX_GAIN_TABLE_6_MACRO__

/* macros for field rxcal_tx_gain_table_6 */
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_6__RXCAL_TX_GAIN_TABLE_6__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_6__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_6__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_6__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_6_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_6 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_6__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_7 */
#ifndef __RXCAL_TX_GAIN_TABLE_7_MACRO__
#define __RXCAL_TX_GAIN_TABLE_7_MACRO__

/* macros for field rxcal_tx_gain_table_7 */
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_7__RXCAL_TX_GAIN_TABLE_7__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_7__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_7__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_7__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_7_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_7 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_7__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_8 */
#ifndef __RXCAL_TX_GAIN_TABLE_8_MACRO__
#define __RXCAL_TX_GAIN_TABLE_8_MACRO__

/* macros for field rxcal_tx_gain_table_8 */
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_8__RXCAL_TX_GAIN_TABLE_8__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_8__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_8__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_8__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_8_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_8 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_8__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_9 */
#ifndef __RXCAL_TX_GAIN_TABLE_9_MACRO__
#define __RXCAL_TX_GAIN_TABLE_9_MACRO__

/* macros for field rxcal_tx_gain_table_9 */
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__SHIFT                   0
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__WIDTH                  21
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__MASK          0x001fffffU
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_9__RXCAL_TX_GAIN_TABLE_9__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_9__TYPE                                   u_int32_t
#define RXCAL_TX_GAIN_TABLE_9__READ                                 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_9__WRITE                                0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_9_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_9 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_9__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_10 */
#ifndef __RXCAL_TX_GAIN_TABLE_10_MACRO__
#define __RXCAL_TX_GAIN_TABLE_10_MACRO__

/* macros for field rxcal_tx_gain_table_10 */
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_10__RXCAL_TX_GAIN_TABLE_10__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_10__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_10__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_10__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_10_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_10 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_10__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_11 */
#ifndef __RXCAL_TX_GAIN_TABLE_11_MACRO__
#define __RXCAL_TX_GAIN_TABLE_11_MACRO__

/* macros for field rxcal_tx_gain_table_11 */
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_11__RXCAL_TX_GAIN_TABLE_11__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_11__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_11__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_11__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_11_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_11 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_11__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_12 */
#ifndef __RXCAL_TX_GAIN_TABLE_12_MACRO__
#define __RXCAL_TX_GAIN_TABLE_12_MACRO__

/* macros for field rxcal_tx_gain_table_12 */
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_12__RXCAL_TX_GAIN_TABLE_12__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_12__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_12__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_12__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_12_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_12 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_12__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_13 */
#ifndef __RXCAL_TX_GAIN_TABLE_13_MACRO__
#define __RXCAL_TX_GAIN_TABLE_13_MACRO__

/* macros for field rxcal_tx_gain_table_13 */
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_13__RXCAL_TX_GAIN_TABLE_13__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_13__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_13__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_13__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_13_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_13 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_13__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_14 */
#ifndef __RXCAL_TX_GAIN_TABLE_14_MACRO__
#define __RXCAL_TX_GAIN_TABLE_14_MACRO__

/* macros for field rxcal_tx_gain_table_14 */
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_14__RXCAL_TX_GAIN_TABLE_14__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_14__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_14__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_14__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_14_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_14 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_14__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_15 */
#ifndef __RXCAL_TX_GAIN_TABLE_15_MACRO__
#define __RXCAL_TX_GAIN_TABLE_15_MACRO__

/* macros for field rxcal_tx_gain_table_15 */
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_15__RXCAL_TX_GAIN_TABLE_15__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_15__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_15__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_15__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_15_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_15 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_15__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_16 */
#ifndef __RXCAL_TX_GAIN_TABLE_16_MACRO__
#define __RXCAL_TX_GAIN_TABLE_16_MACRO__

/* macros for field rxcal_tx_gain_table_16 */
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_16__RXCAL_TX_GAIN_TABLE_16__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_16__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_16__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_16__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_16_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_16 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_16__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_17 */
#ifndef __RXCAL_TX_GAIN_TABLE_17_MACRO__
#define __RXCAL_TX_GAIN_TABLE_17_MACRO__

/* macros for field rxcal_tx_gain_table_17 */
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_17__RXCAL_TX_GAIN_TABLE_17__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_17__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_17__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_17__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_17_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_17 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_17__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_18 */
#ifndef __RXCAL_TX_GAIN_TABLE_18_MACRO__
#define __RXCAL_TX_GAIN_TABLE_18_MACRO__

/* macros for field rxcal_tx_gain_table_18 */
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_18__RXCAL_TX_GAIN_TABLE_18__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_18__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_18__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_18__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_18_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_18 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_18__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_19 */
#ifndef __RXCAL_TX_GAIN_TABLE_19_MACRO__
#define __RXCAL_TX_GAIN_TABLE_19_MACRO__

/* macros for field rxcal_tx_gain_table_19 */
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_19__RXCAL_TX_GAIN_TABLE_19__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_19__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_19__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_19__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_19_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_19 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_19__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_20 */
#ifndef __RXCAL_TX_GAIN_TABLE_20_MACRO__
#define __RXCAL_TX_GAIN_TABLE_20_MACRO__

/* macros for field rxcal_tx_gain_table_20 */
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_20__RXCAL_TX_GAIN_TABLE_20__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_20__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_20__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_20__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_20_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_20 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_20__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_21 */
#ifndef __RXCAL_TX_GAIN_TABLE_21_MACRO__
#define __RXCAL_TX_GAIN_TABLE_21_MACRO__

/* macros for field rxcal_tx_gain_table_21 */
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_21__RXCAL_TX_GAIN_TABLE_21__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_21__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_21__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_21__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_21_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_21 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_21__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_22 */
#ifndef __RXCAL_TX_GAIN_TABLE_22_MACRO__
#define __RXCAL_TX_GAIN_TABLE_22_MACRO__

/* macros for field rxcal_tx_gain_table_22 */
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_22__RXCAL_TX_GAIN_TABLE_22__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_22__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_22__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_22__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_22_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_22 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_22__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_23 */
#ifndef __RXCAL_TX_GAIN_TABLE_23_MACRO__
#define __RXCAL_TX_GAIN_TABLE_23_MACRO__

/* macros for field rxcal_tx_gain_table_23 */
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_23__RXCAL_TX_GAIN_TABLE_23__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_23__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_23__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_23__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_23_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_23 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_23__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_24 */
#ifndef __RXCAL_TX_GAIN_TABLE_24_MACRO__
#define __RXCAL_TX_GAIN_TABLE_24_MACRO__

/* macros for field rxcal_tx_gain_table_24 */
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_24__RXCAL_TX_GAIN_TABLE_24__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_24__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_24__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_24__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_24_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_24 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_24__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_25 */
#ifndef __RXCAL_TX_GAIN_TABLE_25_MACRO__
#define __RXCAL_TX_GAIN_TABLE_25_MACRO__

/* macros for field rxcal_tx_gain_table_25 */
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_25__RXCAL_TX_GAIN_TABLE_25__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_25__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_25__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_25__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_25_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_25 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_25__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_26 */
#ifndef __RXCAL_TX_GAIN_TABLE_26_MACRO__
#define __RXCAL_TX_GAIN_TABLE_26_MACRO__

/* macros for field rxcal_tx_gain_table_26 */
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_26__RXCAL_TX_GAIN_TABLE_26__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_26__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_26__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_26__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_26_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_26 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_26__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_27 */
#ifndef __RXCAL_TX_GAIN_TABLE_27_MACRO__
#define __RXCAL_TX_GAIN_TABLE_27_MACRO__

/* macros for field rxcal_tx_gain_table_27 */
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_27__RXCAL_TX_GAIN_TABLE_27__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_27__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_27__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_27__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_27_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_27 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_27__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_28 */
#ifndef __RXCAL_TX_GAIN_TABLE_28_MACRO__
#define __RXCAL_TX_GAIN_TABLE_28_MACRO__

/* macros for field rxcal_tx_gain_table_28 */
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_28__RXCAL_TX_GAIN_TABLE_28__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_28__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_28__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_28__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_28_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_28 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_28__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_29 */
#ifndef __RXCAL_TX_GAIN_TABLE_29_MACRO__
#define __RXCAL_TX_GAIN_TABLE_29_MACRO__

/* macros for field rxcal_tx_gain_table_29 */
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_29__RXCAL_TX_GAIN_TABLE_29__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_29__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_29__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_29__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_29_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_29 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_29__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_30 */
#ifndef __RXCAL_TX_GAIN_TABLE_30_MACRO__
#define __RXCAL_TX_GAIN_TABLE_30_MACRO__

/* macros for field rxcal_tx_gain_table_30 */
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_30__RXCAL_TX_GAIN_TABLE_30__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_30__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_30__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_30__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_30_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_30 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_30__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_gain_table_31 */
#ifndef __RXCAL_TX_GAIN_TABLE_31_MACRO__
#define __RXCAL_TX_GAIN_TABLE_31_MACRO__

/* macros for field rxcal_tx_gain_table_31 */
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__SHIFT                 0
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__WIDTH                21
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__MASK        0x001fffffU
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__READ(src) \
                    (u_int32_t)(src)\
                    & 0x001fffffU
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fffffU) | ((u_int32_t)(src) &\
                    0x001fffffU)
#define RXCAL_TX_GAIN_TABLE_31__RXCAL_TX_GAIN_TABLE_31__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x001fffffU)))
#define RXCAL_TX_GAIN_TABLE_31__TYPE                                  u_int32_t
#define RXCAL_TX_GAIN_TABLE_31__READ                                0x001fffffU
#define RXCAL_TX_GAIN_TABLE_31__WRITE                               0x001fffffU

#endif /* __RXCAL_TX_GAIN_TABLE_31_MACRO__ */


/* macros for sm_table_map.BB_rxcal_tx_gain_table_31 */
#define INST_SM_TABLE_MAP__BB_RXCAL_TX_GAIN_TABLE_31__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_0 */
#ifndef __RXCAL_RX_GAIN_TABLE_0_MACRO__
#define __RXCAL_RX_GAIN_TABLE_0_MACRO__

/* macros for field rxcal_rx_gain_table_0 */
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_RX_GAIN_TABLE_0__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_0 */
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_0__RXCAL_GAIN_DELTA_DB_TABLE_0__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_0__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_0__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_0__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_0_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_0 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_0__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_1 */
#ifndef __RXCAL_RX_GAIN_TABLE_1_MACRO__
#define __RXCAL_RX_GAIN_TABLE_1_MACRO__

/* macros for field rxcal_rx_gain_table_1 */
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_RX_GAIN_TABLE_1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_1 */
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_1__RXCAL_GAIN_DELTA_DB_TABLE_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_1__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_1__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_1__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_1_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_1 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_1__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_2 */
#ifndef __RXCAL_RX_GAIN_TABLE_2_MACRO__
#define __RXCAL_RX_GAIN_TABLE_2_MACRO__

/* macros for field rxcal_rx_gain_table_2 */
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_RX_GAIN_TABLE_2__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_2 */
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_2__RXCAL_GAIN_DELTA_DB_TABLE_2__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_2__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_2__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_2__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_2_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_2 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_2__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_3 */
#ifndef __RXCAL_RX_GAIN_TABLE_3_MACRO__
#define __RXCAL_RX_GAIN_TABLE_3_MACRO__

/* macros for field rxcal_rx_gain_table_3 */
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_RX_GAIN_TABLE_3__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_3 */
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_3__RXCAL_GAIN_DELTA_DB_TABLE_3__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_3__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_3__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_3__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_3_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_3 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_3__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_4 */
#ifndef __RXCAL_RX_GAIN_TABLE_4_MACRO__
#define __RXCAL_RX_GAIN_TABLE_4_MACRO__

/* macros for field rxcal_rx_gain_table_4 */
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_RX_GAIN_TABLE_4__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_4 */
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_4__RXCAL_GAIN_DELTA_DB_TABLE_4__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_4__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_4__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_4__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_4_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_4 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_4__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_5 */
#ifndef __RXCAL_RX_GAIN_TABLE_5_MACRO__
#define __RXCAL_RX_GAIN_TABLE_5_MACRO__

/* macros for field rxcal_rx_gain_table_5 */
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_RX_GAIN_TABLE_5__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_5 */
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_5__RXCAL_GAIN_DELTA_DB_TABLE_5__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_5__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_5__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_5__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_5_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_5 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_5__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_6 */
#ifndef __RXCAL_RX_GAIN_TABLE_6_MACRO__
#define __RXCAL_RX_GAIN_TABLE_6_MACRO__

/* macros for field rxcal_rx_gain_table_6 */
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_RX_GAIN_TABLE_6__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_6 */
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_6__RXCAL_GAIN_DELTA_DB_TABLE_6__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_6__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_6__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_6__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_6_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_6 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_6__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_7 */
#ifndef __RXCAL_RX_GAIN_TABLE_7_MACRO__
#define __RXCAL_RX_GAIN_TABLE_7_MACRO__

/* macros for field rxcal_rx_gain_table_7 */
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_RX_GAIN_TABLE_7__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_7 */
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_7__RXCAL_GAIN_DELTA_DB_TABLE_7__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_7__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_7__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_7__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_7_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_7 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_7__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_8 */
#ifndef __RXCAL_RX_GAIN_TABLE_8_MACRO__
#define __RXCAL_RX_GAIN_TABLE_8_MACRO__

/* macros for field rxcal_rx_gain_table_8 */
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_RX_GAIN_TABLE_8__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_8 */
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_8__RXCAL_GAIN_DELTA_DB_TABLE_8__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_8__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_8__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_8__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_8_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_8 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_8__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_9 */
#ifndef __RXCAL_RX_GAIN_TABLE_9_MACRO__
#define __RXCAL_RX_GAIN_TABLE_9_MACRO__

/* macros for field rxcal_rx_gain_table_9 */
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__SHIFT                   0
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__WIDTH                  10
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__MASK          0x000003ffU
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_RX_GAIN_TABLE_9__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_9 */
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__SHIFT            12
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__WIDTH             6
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__MASK    0x0003f000U
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_9__RXCAL_GAIN_DELTA_DB_TABLE_9__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_9__TYPE                                   u_int32_t
#define RXCAL_RX_GAIN_TABLE_9__READ                                 0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_9__WRITE                                0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_9_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_9 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_9__NUM                      1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_10 */
#ifndef __RXCAL_RX_GAIN_TABLE_10_MACRO__
#define __RXCAL_RX_GAIN_TABLE_10_MACRO__

/* macros for field rxcal_rx_gain_table_10 */
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_RX_GAIN_TABLE_10__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_10 */
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_10__RXCAL_GAIN_DELTA_DB_TABLE_10__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_10__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_10__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_10__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_10_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_10 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_10__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_11 */
#ifndef __RXCAL_RX_GAIN_TABLE_11_MACRO__
#define __RXCAL_RX_GAIN_TABLE_11_MACRO__

/* macros for field rxcal_rx_gain_table_11 */
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_RX_GAIN_TABLE_11__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_11 */
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_11__RXCAL_GAIN_DELTA_DB_TABLE_11__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_11__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_11__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_11__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_11_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_11 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_11__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_12 */
#ifndef __RXCAL_RX_GAIN_TABLE_12_MACRO__
#define __RXCAL_RX_GAIN_TABLE_12_MACRO__

/* macros for field rxcal_rx_gain_table_12 */
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_RX_GAIN_TABLE_12__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_12 */
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_12__RXCAL_GAIN_DELTA_DB_TABLE_12__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_12__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_12__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_12__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_12_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_12 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_12__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_13 */
#ifndef __RXCAL_RX_GAIN_TABLE_13_MACRO__
#define __RXCAL_RX_GAIN_TABLE_13_MACRO__

/* macros for field rxcal_rx_gain_table_13 */
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_RX_GAIN_TABLE_13__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_13 */
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_13__RXCAL_GAIN_DELTA_DB_TABLE_13__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_13__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_13__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_13__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_13_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_13 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_13__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_14 */
#ifndef __RXCAL_RX_GAIN_TABLE_14_MACRO__
#define __RXCAL_RX_GAIN_TABLE_14_MACRO__

/* macros for field rxcal_rx_gain_table_14 */
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_RX_GAIN_TABLE_14__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_14 */
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_14__RXCAL_GAIN_DELTA_DB_TABLE_14__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_14__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_14__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_14__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_14_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_14 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_14__NUM                     1

/* macros for BlueprintGlobalNameSpace::rxcal_rx_gain_table_15 */
#ifndef __RXCAL_RX_GAIN_TABLE_15_MACRO__
#define __RXCAL_RX_GAIN_TABLE_15_MACRO__

/* macros for field rxcal_rx_gain_table_15 */
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__SHIFT                 0
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__WIDTH                10
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__MASK        0x000003ffU
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_RX_GAIN_TABLE_15__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field rxcal_gain_delta_db_table_15 */
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__SHIFT          12
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__WIDTH           6
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__MASK  0x0003f000U
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define RXCAL_RX_GAIN_TABLE_15__RXCAL_GAIN_DELTA_DB_TABLE_15__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define RXCAL_RX_GAIN_TABLE_15__TYPE                                  u_int32_t
#define RXCAL_RX_GAIN_TABLE_15__READ                                0x0003f3ffU
#define RXCAL_RX_GAIN_TABLE_15__WRITE                               0x0003f3ffU

#endif /* __RXCAL_RX_GAIN_TABLE_15_MACRO__ */


/* macros for sm_table_map.BB_rxcal_rx_gain_table_15 */
#define INST_SM_TABLE_MAP__BB_RXCAL_RX_GAIN_TABLE_15__NUM                     1

/* macros for BlueprintGlobalNameSpace::sm_hc_preemp_lut */
#ifndef __SM_HC_PREEMP_LUT_MACRO__
#define __SM_HC_PREEMP_LUT_MACRO__

/* macros for field sm_hc_preemp_lut_word */
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__SHIFT                        0
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__WIDTH                       18
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__MASK               0x0003ffffU
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define SM_HC_PREEMP_LUT__SM_HC_PREEMP_LUT_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define SM_HC_PREEMP_LUT__TYPE                                        u_int32_t
#define SM_HC_PREEMP_LUT__READ                                      0x0003ffffU
#define SM_HC_PREEMP_LUT__WRITE                                     0x0003ffffU

#endif /* __SM_HC_PREEMP_LUT_MACRO__ */


/* macros for sm_table_map.BB_sm_hc_preemp_lut */
#define INST_SM_TABLE_MAP__BB_SM_HC_PREEMP_LUT__NUM                         412

/* macros for BlueprintGlobalNameSpace::sm_tables_dummy2 */
#ifndef __SM_TABLES_DUMMY2_MACRO__
#define __SM_TABLES_DUMMY2_MACRO__

/* macros for field dummy2 */
#define SM_TABLES_DUMMY2__DUMMY2__SHIFT                                       0
#define SM_TABLES_DUMMY2__DUMMY2__WIDTH                                      32
#define SM_TABLES_DUMMY2__DUMMY2__MASK                              0xffffffffU
#define SM_TABLES_DUMMY2__DUMMY2__READ(src)      (u_int32_t)(src) & 0xffffffffU
#define SM_TABLES_DUMMY2__DUMMY2__WRITE(src)   ((u_int32_t)(src) & 0xffffffffU)
#define SM_TABLES_DUMMY2__DUMMY2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define SM_TABLES_DUMMY2__DUMMY2__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define SM_TABLES_DUMMY2__TYPE                                        u_int32_t
#define SM_TABLES_DUMMY2__READ                                      0xffffffffU
#define SM_TABLES_DUMMY2__WRITE                                     0xffffffffU

#endif /* __SM_TABLES_DUMMY2_MACRO__ */


/* macros for sm_table_map.BB_sm_tables_dummy2 */
#define INST_SM_TABLE_MAP__BB_SM_TABLES_DUMMY2__NUM                           1
#define RFILE_INST_SM_TABLE_MAP__NUM                                          1

#define TIERED_SM_TABLE_MAP__VERSION \
                    "/prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/ip/athr/wifi/besra/shared/scripts/perllib/Pinfo.pm\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/ip/athr/wifi/besra/shared/xml/bin/ath_ansic.pm\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/chip_top_reg.rdl\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/chip_top_reg_common_signals.rdl\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/srcs/sm_table_map.rdl"
#endif /* __REG_TIERED_SM_TABLE_MAP_MACRO_H__ */
