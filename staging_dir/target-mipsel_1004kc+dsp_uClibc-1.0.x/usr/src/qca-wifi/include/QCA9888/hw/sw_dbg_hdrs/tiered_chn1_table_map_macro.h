/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef __REG_TIERED_CHN1_TABLE_MAP_MACRO_H__
#define __REG_TIERED_CHN1_TABLE_MAP_MACRO_H__


/* macros for BlueprintGlobalNameSpace::paprd_power_at_am2am_cal_b1 */
#ifndef __PAPRD_POWER_AT_AM2AM_CAL_B1_MACRO__
#define __PAPRD_POWER_AT_AM2AM_CAL_B1_MACRO__

/* macros for field paprd_power_at_am2am_cal_0_b1 */
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__SHIFT     0
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__WIDTH     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__MASK \
                    0x0000003fU
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_0_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field paprd_power_at_am2am_cal_1_b1 */
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__SHIFT     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__WIDTH     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__MASK \
                    0x00000fc0U
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_1_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field paprd_power_at_am2am_cal_2_b1 */
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__SHIFT    12
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__WIDTH     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__MASK \
                    0x0003f000U
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_2_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field paprd_power_at_am2am_cal_3_b1 */
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__SHIFT    18
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__WIDTH     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__MASK \
                    0x00fc0000U
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_3_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))

/* macros for field paprd_power_at_am2am_cal_4_b1 */
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__SHIFT    24
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__WIDTH     6
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__MASK \
                    0x3f000000U
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3f000000U) >> 24)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x3f000000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x3f000000U)
#define PAPRD_POWER_AT_AM2AM_CAL_B1__PAPRD_POWER_AT_AM2AM_CAL_4_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define PAPRD_POWER_AT_AM2AM_CAL_B1__TYPE                             u_int32_t
#define PAPRD_POWER_AT_AM2AM_CAL_B1__READ                           0x3fffffffU
#define PAPRD_POWER_AT_AM2AM_CAL_B1__WRITE                          0x3fffffffU

#endif /* __PAPRD_POWER_AT_AM2AM_CAL_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_power_at_am2am_cal_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_POWER_AT_AM2AM_CAL_B1__NUM              1

/* macros for BlueprintGlobalNameSpace::paprd_valid_obdb_b1 */
#ifndef __PAPRD_VALID_OBDB_B1_MACRO__
#define __PAPRD_VALID_OBDB_B1_MACRO__

/* macros for field paprd_valid_obdb_0_b1 */
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__SHIFT                     0
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__WIDTH                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__MASK            0x0000003fU
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_0_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field paprd_valid_obdb_1_b1 */
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__SHIFT                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__WIDTH                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__MASK            0x00000fc0U
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_1_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field paprd_valid_obdb_2_b1 */
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__SHIFT                    12
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__WIDTH                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__MASK            0x0003f000U
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_2_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field paprd_valid_obdb_3_b1 */
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__SHIFT                    18
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__WIDTH                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__MASK            0x00fc0000U
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_3_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))

/* macros for field paprd_valid_obdb_4_b1 */
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__SHIFT                    24
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__WIDTH                     6
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__MASK            0x3f000000U
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3f000000U) >> 24)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x3f000000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x3f000000U)
#define PAPRD_VALID_OBDB_B1__PAPRD_VALID_OBDB_4_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define PAPRD_VALID_OBDB_B1__TYPE                                     u_int32_t
#define PAPRD_VALID_OBDB_B1__READ                                   0x3fffffffU
#define PAPRD_VALID_OBDB_B1__WRITE                                  0x3fffffffU

#endif /* __PAPRD_VALID_OBDB_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_valid_obdb_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_VALID_OBDB_B1__NUM                      1

/* macros for BlueprintGlobalNameSpace::chn1_tables_dummy_2 */
#ifndef __CHN1_TABLES_DUMMY_2_MACRO__
#define __CHN1_TABLES_DUMMY_2_MACRO__

/* macros for field dummy2 */
#define CHN1_TABLES_DUMMY_2__DUMMY2__SHIFT                                    0
#define CHN1_TABLES_DUMMY_2__DUMMY2__WIDTH                                   32
#define CHN1_TABLES_DUMMY_2__DUMMY2__MASK                           0xffffffffU
#define CHN1_TABLES_DUMMY_2__DUMMY2__READ(src)   (u_int32_t)(src) & 0xffffffffU
#define CHN1_TABLES_DUMMY_2__DUMMY2__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define CHN1_TABLES_DUMMY_2__DUMMY2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define CHN1_TABLES_DUMMY_2__DUMMY2__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define CHN1_TABLES_DUMMY_2__TYPE                                     u_int32_t
#define CHN1_TABLES_DUMMY_2__READ                                   0xffffffffU
#define CHN1_TABLES_DUMMY_2__WRITE                                  0xffffffffU

#endif /* __CHN1_TABLES_DUMMY_2_MACRO__ */


/* macros for chn1_table_map.BB_chn1_tables_dummy_2 */
#define INST_CHN1_TABLE_MAP__BB_CHN1_TABLES_DUMMY_2__NUM                      1

/* macros for BlueprintGlobalNameSpace::txiqcorr_txpath_coef_b1 */
#ifndef __TXIQCORR_TXPATH_COEF_B1_MACRO__
#define __TXIQCORR_TXPATH_COEF_B1_MACRO__

/* macros for field txiqcorr_txpath_coef_chn1 */
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__SHIFT             0
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__WIDTH            18
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__MASK    0x0003ffffU
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define TXIQCORR_TXPATH_COEF_B1__TXIQCORR_TXPATH_COEF_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define TXIQCORR_TXPATH_COEF_B1__TYPE                                 u_int32_t
#define TXIQCORR_TXPATH_COEF_B1__READ                               0x0003ffffU
#define TXIQCORR_TXPATH_COEF_B1__WRITE                              0x0003ffffU

#endif /* __TXIQCORR_TXPATH_COEF_B1_MACRO__ */


/* macros for chn1_table_map.BB_txiqcorr_txpath_coef_b1 */
#define INST_CHN1_TABLE_MAP__BB_TXIQCORR_TXPATH_COEF_B1__NUM                 16

/* macros for BlueprintGlobalNameSpace::txiqcorr_rxpath_coef_b1 */
#ifndef __TXIQCORR_RXPATH_COEF_B1_MACRO__
#define __TXIQCORR_RXPATH_COEF_B1_MACRO__

/* macros for field txiqcorr_rxpath_coef_chn1 */
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__SHIFT             0
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__WIDTH            18
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__MASK    0x0003ffffU
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define TXIQCORR_RXPATH_COEF_B1__TXIQCORR_RXPATH_COEF_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define TXIQCORR_RXPATH_COEF_B1__TYPE                                 u_int32_t
#define TXIQCORR_RXPATH_COEF_B1__READ                               0x0003ffffU
#define TXIQCORR_RXPATH_COEF_B1__WRITE                              0x0003ffffU

#endif /* __TXIQCORR_RXPATH_COEF_B1_MACRO__ */


/* macros for chn1_table_map.BB_txiqcorr_rxpath_coef_b1 */
#define INST_CHN1_TABLE_MAP__BB_TXIQCORR_RXPATH_COEF_B1__NUM                 16

/* macros for BlueprintGlobalNameSpace::rxiqcorr_rxpath_coef_b1 */
#ifndef __RXIQCORR_RXPATH_COEF_B1_MACRO__
#define __RXIQCORR_RXPATH_COEF_B1_MACRO__

/* macros for field rxiqcorr_rxpath_coef_chn1 */
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__SHIFT             0
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__WIDTH            18
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__MASK    0x0003ffffU
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define RXIQCORR_RXPATH_COEF_B1__RXIQCORR_RXPATH_COEF_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define RXIQCORR_RXPATH_COEF_B1__TYPE                                 u_int32_t
#define RXIQCORR_RXPATH_COEF_B1__READ                               0x0003ffffU
#define RXIQCORR_RXPATH_COEF_B1__WRITE                              0x0003ffffU

#endif /* __RXIQCORR_RXPATH_COEF_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxiqcorr_rxpath_coef_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXIQCORR_RXPATH_COEF_B1__NUM                 16

/* macros for BlueprintGlobalNameSpace::rxiqcorr_txpath_coef_b1 */
#ifndef __RXIQCORR_TXPATH_COEF_B1_MACRO__
#define __RXIQCORR_TXPATH_COEF_B1_MACRO__

/* macros for field rxiqcorr_txpath_coef_chn1 */
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__SHIFT             0
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__WIDTH            18
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__MASK    0x0003ffffU
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define RXIQCORR_TXPATH_COEF_B1__RXIQCORR_TXPATH_COEF_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define RXIQCORR_TXPATH_COEF_B1__TYPE                                 u_int32_t
#define RXIQCORR_TXPATH_COEF_B1__READ                               0x0003ffffU
#define RXIQCORR_TXPATH_COEF_B1__WRITE                              0x0003ffffU

#endif /* __RXIQCORR_TXPATH_COEF_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxiqcorr_txpath_coef_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXIQCORR_TXPATH_COEF_B1__NUM                 16

/* macros for BlueprintGlobalNameSpace::rxcal_tx_iqcorr_idx_7_0_b1 */
#ifndef __RXCAL_TX_IQCORR_IDX_7_0_B1_MACRO__
#define __RXCAL_TX_IQCORR_IDX_7_0_B1_MACRO__

/* macros for field rxcal_tx_iqcorr_idx_0_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__SHIFT         0
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__MASK \
                    0x0000000fU
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000000fU
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((u_int32_t)(src) &\
                    0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000000fU)))

/* macros for field rxcal_tx_iqcorr_idx_1_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__SHIFT         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__MASK \
                    0x000000f0U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000000f0U) >> 4)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((u_int32_t)(src) <<\
                    4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x000000f0U)))

/* macros for field rxcal_tx_iqcorr_idx_2_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__SHIFT         8
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__MASK \
                    0x00000f00U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000f00U) >> 8)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((u_int32_t)(src) <<\
                    8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_2_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x00000f00U)))

/* macros for field rxcal_tx_iqcorr_idx_3_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__SHIFT        12
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__MASK \
                    0x0000f000U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000f000U) >> 12)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_3_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0000f000U)))

/* macros for field rxcal_tx_iqcorr_idx_4_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__SHIFT        16
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__MASK \
                    0x000f0000U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000f0000U) >> 16)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((u_int32_t)(src) <<\
                    16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_4_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x000f0000U)))

/* macros for field rxcal_tx_iqcorr_idx_5_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__SHIFT        20
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__MASK \
                    0x00f00000U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00f00000U) >> 20)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00f00000U) | (((u_int32_t)(src) <<\
                    20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_5_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x00f00000U)))

/* macros for field rxcal_tx_iqcorr_idx_6_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__SHIFT        24
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__MASK \
                    0x0f000000U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0f000000U) >> 24)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_6_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x0f000000U)))

/* macros for field rxcal_tx_iqcorr_idx_7_chn1 */
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__SHIFT        28
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__WIDTH         4
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__MASK \
                    0xf0000000U
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0xf0000000U) >> 28)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf0000000U) | (((u_int32_t)(src) <<\
                    28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_7_0_B1__RXCAL_TX_IQCORR_IDX_7_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0xf0000000U)))
#define RXCAL_TX_IQCORR_IDX_7_0_B1__TYPE                              u_int32_t
#define RXCAL_TX_IQCORR_IDX_7_0_B1__READ                            0xffffffffU
#define RXCAL_TX_IQCORR_IDX_7_0_B1__WRITE                           0xffffffffU

#endif /* __RXCAL_TX_IQCORR_IDX_7_0_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxcal_tx_iqcorr_idx_7_0_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXCAL_TX_IQCORR_IDX_7_0_B1__NUM               1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_iqcorr_idx_15_8_b1 */
#ifndef __RXCAL_TX_IQCORR_IDX_15_8_B1_MACRO__
#define __RXCAL_TX_IQCORR_IDX_15_8_B1_MACRO__

/* macros for field rxcal_tx_iqcorr_idx_8_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__SHIFT        0
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__WIDTH        4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__MASK \
                    0x0000000fU
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000000fU
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((u_int32_t)(src) &\
                    0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_8_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000000fU)))

/* macros for field rxcal_tx_iqcorr_idx_9_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__SHIFT        4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__WIDTH        4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__MASK \
                    0x000000f0U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000000f0U) >> 4)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((u_int32_t)(src) <<\
                    4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_9_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x000000f0U)))

/* macros for field rxcal_tx_iqcorr_idx_10_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__SHIFT       8
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__MASK \
                    0x00000f00U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000f00U) >> 8)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((u_int32_t)(src) <<\
                    8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_10_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x00000f00U)))

/* macros for field rxcal_tx_iqcorr_idx_11_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__SHIFT      12
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__MASK \
                    0x0000f000U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000f000U) >> 12)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_11_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0000f000U)))

/* macros for field rxcal_tx_iqcorr_idx_12_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__SHIFT      16
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__MASK \
                    0x000f0000U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000f0000U) >> 16)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((u_int32_t)(src) <<\
                    16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_12_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x000f0000U)))

/* macros for field rxcal_tx_iqcorr_idx_13_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__SHIFT      20
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__MASK \
                    0x00f00000U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00f00000U) >> 20)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00f00000U) | (((u_int32_t)(src) <<\
                    20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_13_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x00f00000U)))

/* macros for field rxcal_tx_iqcorr_idx_14_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__SHIFT      24
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__MASK \
                    0x0f000000U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0f000000U) >> 24)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_14_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x0f000000U)))

/* macros for field rxcal_tx_iqcorr_idx_15_chn1 */
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__SHIFT      28
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__WIDTH       4
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__MASK \
                    0xf0000000U
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0xf0000000U) >> 28)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf0000000U) | (((u_int32_t)(src) <<\
                    28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_15_8_B1__RXCAL_TX_IQCORR_IDX_15_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0xf0000000U)))
#define RXCAL_TX_IQCORR_IDX_15_8_B1__TYPE                             u_int32_t
#define RXCAL_TX_IQCORR_IDX_15_8_B1__READ                           0xffffffffU
#define RXCAL_TX_IQCORR_IDX_15_8_B1__WRITE                          0xffffffffU

#endif /* __RXCAL_TX_IQCORR_IDX_15_8_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxcal_tx_iqcorr_idx_15_8_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXCAL_TX_IQCORR_IDX_15_8_B1__NUM              1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_iqcorr_idx_23_16_b1 */
#ifndef __RXCAL_TX_IQCORR_IDX_23_16_B1_MACRO__
#define __RXCAL_TX_IQCORR_IDX_23_16_B1_MACRO__

/* macros for field rxcal_tx_iqcorr_idx_16_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__SHIFT      0
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__MASK \
                    0x0000000fU
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000000fU
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((u_int32_t)(src) &\
                    0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_16_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000000fU)))

/* macros for field rxcal_tx_iqcorr_idx_17_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__SHIFT      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__MASK \
                    0x000000f0U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000000f0U) >> 4)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((u_int32_t)(src) <<\
                    4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_17_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x000000f0U)))

/* macros for field rxcal_tx_iqcorr_idx_18_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__SHIFT      8
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__MASK \
                    0x00000f00U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000f00U) >> 8)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((u_int32_t)(src) <<\
                    8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_18_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x00000f00U)))

/* macros for field rxcal_tx_iqcorr_idx_19_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__SHIFT     12
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__MASK \
                    0x0000f000U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000f000U) >> 12)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_19_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0000f000U)))

/* macros for field rxcal_tx_iqcorr_idx_20_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__SHIFT     16
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__MASK \
                    0x000f0000U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000f0000U) >> 16)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((u_int32_t)(src) <<\
                    16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_20_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x000f0000U)))

/* macros for field rxcal_tx_iqcorr_idx_21_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__SHIFT     20
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__MASK \
                    0x00f00000U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00f00000U) >> 20)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00f00000U) | (((u_int32_t)(src) <<\
                    20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_21_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x00f00000U)))

/* macros for field rxcal_tx_iqcorr_idx_22_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__SHIFT     24
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__MASK \
                    0x0f000000U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0f000000U) >> 24)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_22_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x0f000000U)))

/* macros for field rxcal_tx_iqcorr_idx_23_chn1 */
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__SHIFT     28
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__MASK \
                    0xf0000000U
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0xf0000000U) >> 28)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf0000000U) | (((u_int32_t)(src) <<\
                    28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_23_16_B1__RXCAL_TX_IQCORR_IDX_23_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0xf0000000U)))
#define RXCAL_TX_IQCORR_IDX_23_16_B1__TYPE                            u_int32_t
#define RXCAL_TX_IQCORR_IDX_23_16_B1__READ                          0xffffffffU
#define RXCAL_TX_IQCORR_IDX_23_16_B1__WRITE                         0xffffffffU

#endif /* __RXCAL_TX_IQCORR_IDX_23_16_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxcal_tx_iqcorr_idx_23_16_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXCAL_TX_IQCORR_IDX_23_16_B1__NUM             1

/* macros for BlueprintGlobalNameSpace::rxcal_tx_iqcorr_idx_31_24_b1 */
#ifndef __RXCAL_TX_IQCORR_IDX_31_24_B1_MACRO__
#define __RXCAL_TX_IQCORR_IDX_31_24_B1_MACRO__

/* macros for field rxcal_tx_iqcorr_idx_24_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__SHIFT      0
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__MASK \
                    0x0000000fU
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000000fU
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((u_int32_t)(src) &\
                    0x0000000fU)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_24_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000000fU)))

/* macros for field rxcal_tx_iqcorr_idx_25_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__SHIFT      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__MASK \
                    0x000000f0U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000000f0U) >> 4)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((u_int32_t)(src) <<\
                    4) & 0x000000f0U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_25_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x000000f0U)))

/* macros for field rxcal_tx_iqcorr_idx_26_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__SHIFT      8
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__MASK \
                    0x00000f00U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000f00U) >> 8)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((u_int32_t)(src) <<\
                    8) & 0x00000f00U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_26_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x00000f00U)))

/* macros for field rxcal_tx_iqcorr_idx_27_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__SHIFT     12
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__MASK \
                    0x0000f000U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000f000U) >> 12)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0000f000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_27_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0000f000U)))

/* macros for field rxcal_tx_iqcorr_idx_28_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__SHIFT     16
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__MASK \
                    0x000f0000U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000f0000U) >> 16)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((u_int32_t)(src) <<\
                    16) & 0x000f0000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_28_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x000f0000U)))

/* macros for field rxcal_tx_iqcorr_idx_29_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__SHIFT     20
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__MASK \
                    0x00f00000U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00f00000U) >> 20)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00f00000U) | (((u_int32_t)(src) <<\
                    20) & 0x00f00000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_29_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x00f00000U)))

/* macros for field rxcal_tx_iqcorr_idx_30_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__SHIFT     24
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__MASK \
                    0x0f000000U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0f000000U) >> 24)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((u_int32_t)(src) <<\
                    24) & 0x0f000000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_30_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 24) & ~0x0f000000U)))

/* macros for field rxcal_tx_iqcorr_idx_31_chn1 */
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__SHIFT     28
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__WIDTH      4
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__MASK \
                    0xf0000000U
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0xf0000000U) >> 28)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf0000000U) | (((u_int32_t)(src) <<\
                    28) & 0xf0000000U)
#define RXCAL_TX_IQCORR_IDX_31_24_B1__RXCAL_TX_IQCORR_IDX_31_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0xf0000000U)))
#define RXCAL_TX_IQCORR_IDX_31_24_B1__TYPE                            u_int32_t
#define RXCAL_TX_IQCORR_IDX_31_24_B1__READ                          0xffffffffU
#define RXCAL_TX_IQCORR_IDX_31_24_B1__WRITE                         0xffffffffU

#endif /* __RXCAL_TX_IQCORR_IDX_31_24_B1_MACRO__ */


/* macros for chn1_table_map.BB_rxcal_tx_iqcorr_idx_31_24_b1 */
#define INST_CHN1_TABLE_MAP__BB_RXCAL_TX_IQCORR_IDX_31_24_B1__NUM             1

/* macros for BlueprintGlobalNameSpace::paprd_sm_sig_gain_table_0_2_b1 */
#ifndef __PAPRD_SM_SIG_GAIN_TABLE_0_2_B1_MACRO__
#define __PAPRD_SM_SIG_GAIN_TABLE_0_2_B1_MACRO__

/* macros for field paprd_sm_sig_gain_0 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__SHIFT            0
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__MASK   0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_0__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field paprd_sm_sig_gain_1 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__SHIFT           10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__MASK   0x000ffc00U
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000ffc00U) >> 10)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000ffc00U) | (((u_int32_t)(src) <<\
                    10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 10) & ~0x000ffc00U)))

/* macros for field paprd_sm_sig_gain_2 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__SHIFT           20
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__MASK   0x3ff00000U
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3ff00000U) >> 20)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3ff00000U) | (((u_int32_t)(src) <<\
                    20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__PAPRD_SM_SIG_GAIN_2__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x3ff00000U)))
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__TYPE                          u_int32_t
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__READ                        0x3fffffffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__WRITE                       0x3fffffffU

#endif /* __PAPRD_SM_SIG_GAIN_TABLE_0_2_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_sm_sig_gain_table_0_2_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_SM_SIG_GAIN_TABLE_0_2_B1__NUM           1

/* macros for BlueprintGlobalNameSpace::paprd_sm_sig_gain_table_3_5_b1 */
#ifndef __PAPRD_SM_SIG_GAIN_TABLE_3_5_B1_MACRO__
#define __PAPRD_SM_SIG_GAIN_TABLE_3_5_B1_MACRO__

/* macros for field paprd_sm_sig_gain_3 */
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__SHIFT            0
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__MASK   0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_3__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field paprd_sm_sig_gain_4 */
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__SHIFT           10
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__MASK   0x000ffc00U
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000ffc00U) >> 10)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000ffc00U) | (((u_int32_t)(src) <<\
                    10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_4__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 10) & ~0x000ffc00U)))

/* macros for field paprd_sm_sig_gain_5 */
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__SHIFT           20
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__WIDTH           10
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__MASK   0x3ff00000U
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3ff00000U) >> 20)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3ff00000U) | (((u_int32_t)(src) <<\
                    20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__PAPRD_SM_SIG_GAIN_5__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x3ff00000U)))
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__TYPE                          u_int32_t
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__READ                        0x3fffffffU
#define PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__WRITE                       0x3fffffffU

#endif /* __PAPRD_SM_SIG_GAIN_TABLE_3_5_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_sm_sig_gain_table_3_5_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_SM_SIG_GAIN_TABLE_3_5_B1__NUM           1

/* macros for BlueprintGlobalNameSpace::paprd_sm_sig_gain_table_0_2_sec80_b1 */
#ifndef __PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1_MACRO__
#define __PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1_MACRO__

/* macros for field paprd_sm_sig_gain_sec80_0 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__SHIFT \
                    0
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__WIDTH \
                    10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__MASK \
                    0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_0__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field paprd_sm_sig_gain_sec80_1 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__SHIFT \
                    10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__WIDTH \
                    10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__MASK \
                    0x000ffc00U
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000ffc00U) >> 10)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000ffc00U) | (((u_int32_t)(src) <<\
                    10) & 0x000ffc00U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 10) & ~0x000ffc00U)))

/* macros for field paprd_sm_sig_gain_sec80_2 */
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__SHIFT \
                    20
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__WIDTH \
                    10
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__MASK \
                    0x3ff00000U
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3ff00000U) >> 20)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3ff00000U) | (((u_int32_t)(src) <<\
                    20) & 0x3ff00000U)
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__PAPRD_SM_SIG_GAIN_SEC80_2__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x3ff00000U)))
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__TYPE                    u_int32_t
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__READ                  0x3fffffffU
#define PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__WRITE                 0x3fffffffU

#endif /* __PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_sm_sig_gain_table_0_2_sec80_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_SM_SIG_GAIN_TABLE_0_2_SEC80_B1__NUM     1

/* macros for BlueprintGlobalNameSpace::paprd_peftbl_sel_b1 */
#ifndef __PAPRD_PEFTBL_SEL_B1_MACRO__
#define __PAPRD_PEFTBL_SEL_B1_MACRO__

/* macros for field pef_table_sel_dpd0_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__SHIFT                     0
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__MASK            0x00000003U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000003U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000003U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((u_int32_t)(src) &\
                    0x00000003U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD0_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000003U)))

/* macros for field pef_table_sel_dpd1_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__SHIFT                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__MASK            0x0000000cU
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000000cU) >> 2)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 2) & 0x0000000cU)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((u_int32_t)(src) <<\
                    2) & 0x0000000cU)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD1_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 2) & ~0x0000000cU)))

/* macros for field pef_table_sel_dpd2_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__SHIFT                     4
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__MASK            0x00000030U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000030U) >> 4)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x00000030U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000030U) | (((u_int32_t)(src) <<\
                    4) & 0x00000030U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD2_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x00000030U)))

/* macros for field pef_table_sel_dpd3_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__SHIFT                     6
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__MASK            0x000000c0U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000000c0U) >> 6)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x000000c0U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000c0U) | (((u_int32_t)(src) <<\
                    6) & 0x000000c0U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD3_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x000000c0U)))

/* macros for field pef_table_sel_dpd4_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__SHIFT                     8
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__MASK            0x00000300U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000300U) >> 8)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x00000300U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000300U) | (((u_int32_t)(src) <<\
                    8) & 0x00000300U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD4_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x00000300U)))

/* macros for field pef_table_sel_dpd5_b1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__SHIFT                    10
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__WIDTH                     2
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__MASK            0x00000c00U
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000c00U) >> 10)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 10) & 0x00000c00U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000c00U) | (((u_int32_t)(src) <<\
                    10) & 0x00000c00U)
#define PAPRD_PEFTBL_SEL_B1__PEF_TABLE_SEL_DPD5_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 10) & ~0x00000c00U)))

/* macros for field pef_half_rate_tb0_1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__SHIFT                      12
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__WIDTH                       1
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__MASK              0x00001000U
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00001000U) >> 12)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00001000U)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((u_int32_t)(src) <<\
                    12) & 0x00001000U)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((u_int32_t)(1) << 12)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB0_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((u_int32_t)(0) << 12)

/* macros for field pef_half_rate_tb1_1 */
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__SHIFT                      13
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__WIDTH                       1
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__MASK              0x00002000U
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00002000U) >> 13)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 13) & 0x00002000U)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((u_int32_t)(src) <<\
                    13) & 0x00002000U)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((u_int32_t)(1) << 13)
#define PAPRD_PEFTBL_SEL_B1__PEF_HALF_RATE_TB1_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((u_int32_t)(0) << 13)
#define PAPRD_PEFTBL_SEL_B1__TYPE                                     u_int32_t
#define PAPRD_PEFTBL_SEL_B1__READ                                   0x00003fffU
#define PAPRD_PEFTBL_SEL_B1__WRITE                                  0x00003fffU

#endif /* __PAPRD_PEFTBL_SEL_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_peftbl_sel_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_PEFTBL_SEL_B1__NUM                      1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set0_b1 */
#ifndef __PREEMP_COEF_TBL0_SET0_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET0_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_0_b1 */
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_I_0_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_0_b1 */
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET0_B1__TX_PREEMP_COEF_TBL0_Q_0_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET0_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET0_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET0_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET0_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set0_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET0_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set1_b1 */
#ifndef __PREEMP_COEF_TBL0_SET1_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET1_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_1_b1 */
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_I_1_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_1_b1 */
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET1_B1__TX_PREEMP_COEF_TBL0_Q_1_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET1_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET1_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET1_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET1_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set1_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET1_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set2_b1 */
#ifndef __PREEMP_COEF_TBL0_SET2_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET2_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_2_b1 */
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_I_2_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_2_b1 */
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET2_B1__TX_PREEMP_COEF_TBL0_Q_2_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET2_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET2_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET2_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET2_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set2_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET2_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set3_b1 */
#ifndef __PREEMP_COEF_TBL0_SET3_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET3_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_3_b1 */
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_I_3_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_3_b1 */
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET3_B1__TX_PREEMP_COEF_TBL0_Q_3_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET3_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET3_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET3_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET3_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set3_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET3_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set4_b1 */
#ifndef __PREEMP_COEF_TBL0_SET4_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET4_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_4_b1 */
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_I_4_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_4_b1 */
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET4_B1__TX_PREEMP_COEF_TBL0_Q_4_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET4_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET4_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET4_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET4_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set4_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET4_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set5_b1 */
#ifndef __PREEMP_COEF_TBL0_SET5_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET5_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_5_b1 */
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_I_5_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_5_b1 */
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET5_B1__TX_PREEMP_COEF_TBL0_Q_5_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET5_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET5_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET5_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET5_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set5_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET5_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set6_b1 */
#ifndef __PREEMP_COEF_TBL0_SET6_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET6_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_6_b1 */
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_I_6_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_6_b1 */
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET6_B1__TX_PREEMP_COEF_TBL0_Q_6_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET6_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET6_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET6_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET6_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set6_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET6_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set7_b1 */
#ifndef __PREEMP_COEF_TBL0_SET7_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET7_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_7_b1 */
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_I_7_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_7_b1 */
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET7_B1__TX_PREEMP_COEF_TBL0_Q_7_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET7_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET7_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET7_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET7_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set7_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET7_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl0_set8_b1 */
#ifndef __PREEMP_COEF_TBL0_SET8_B1_MACRO__
#define __PREEMP_COEF_TBL0_SET8_B1_MACRO__

/* macros for field tx_preemp_coef_tbl0_i_8_b1 */
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__SHIFT           0
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_I_8_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl0_q_8_b1 */
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__SHIFT          12
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__WIDTH          12
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL0_SET8_B1__TX_PREEMP_COEF_TBL0_Q_8_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL0_SET8_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL0_SET8_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL0_SET8_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL0_SET8_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl0_set8_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL0_SET8_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set0_b1 */
#ifndef __PREEMP_COEF_TBL1_SET0_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET0_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_0_b1 */
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_I_0_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_0_b1 */
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET0_B1__TX_PREEMP_COEF_TBL1_Q_0_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET0_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET0_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET0_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET0_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set0_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET0_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set1_b1 */
#ifndef __PREEMP_COEF_TBL1_SET1_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET1_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_1_b1 */
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_I_1_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_1_b1 */
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET1_B1__TX_PREEMP_COEF_TBL1_Q_1_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET1_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET1_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET1_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET1_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set1_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET1_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set2_b1 */
#ifndef __PREEMP_COEF_TBL1_SET2_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET2_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_2_b1 */
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_I_2_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_2_b1 */
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET2_B1__TX_PREEMP_COEF_TBL1_Q_2_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET2_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET2_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET2_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET2_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set2_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET2_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set3_b1 */
#ifndef __PREEMP_COEF_TBL1_SET3_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET3_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_3_b1 */
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_I_3_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_3_b1 */
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET3_B1__TX_PREEMP_COEF_TBL1_Q_3_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET3_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET3_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET3_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET3_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set3_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET3_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set4_b1 */
#ifndef __PREEMP_COEF_TBL1_SET4_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET4_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_4_b1 */
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_I_4_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_4_b1 */
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET4_B1__TX_PREEMP_COEF_TBL1_Q_4_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET4_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET4_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET4_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET4_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set4_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET4_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set5_b1 */
#ifndef __PREEMP_COEF_TBL1_SET5_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET5_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_5_b1 */
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_I_5_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_5_b1 */
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET5_B1__TX_PREEMP_COEF_TBL1_Q_5_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET5_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET5_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET5_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET5_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set5_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET5_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set6_b1 */
#ifndef __PREEMP_COEF_TBL1_SET6_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET6_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_6_b1 */
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_I_6_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_6_b1 */
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET6_B1__TX_PREEMP_COEF_TBL1_Q_6_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET6_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET6_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET6_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET6_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set6_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET6_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set7_b1 */
#ifndef __PREEMP_COEF_TBL1_SET7_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET7_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_7_b1 */
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_I_7_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_7_b1 */
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET7_B1__TX_PREEMP_COEF_TBL1_Q_7_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET7_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET7_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET7_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET7_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set7_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET7_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::preemp_coef_tbl1_set8_b1 */
#ifndef __PREEMP_COEF_TBL1_SET8_B1_MACRO__
#define __PREEMP_COEF_TBL1_SET8_B1_MACRO__

/* macros for field tx_preemp_coef_tbl1_i_8_b1 */
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__SHIFT           0
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__MASK  0x00000fffU
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000fffU
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000fffU)
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((u_int32_t)(src) &\
                    0x00000fffU)
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_I_8_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000fffU)))

/* macros for field tx_preemp_coef_tbl1_q_8_b1 */
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__SHIFT          12
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__WIDTH          12
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__MASK  0x00fff000U
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((u_int32_t)(src) <<\
                    12) & 0x00fff000U)
#define PREEMP_COEF_TBL1_SET8_B1__TX_PREEMP_COEF_TBL1_Q_8_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PREEMP_COEF_TBL1_SET8_B1__TYPE                                u_int32_t
#define PREEMP_COEF_TBL1_SET8_B1__READ                              0x00ffffffU
#define PREEMP_COEF_TBL1_SET8_B1__WRITE                             0x00ffffffU

#endif /* __PREEMP_COEF_TBL1_SET8_B1_MACRO__ */


/* macros for chn1_table_map.BB_preemp_coef_tbl1_set8_b1 */
#define INST_CHN1_TABLE_MAP__BB_PREEMP_COEF_TBL1_SET8_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::paprd_bw_table_dpdoff_b1 */
#ifndef __PAPRD_BW_TABLE_DPDOFF_B1_MACRO__
#define __PAPRD_BW_TABLE_DPDOFF_B1_MACRO__

/* macros for field bw_table_dpdoff_bw05_b1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__SHIFT              0
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__MASK     0x00000007U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000007U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000007U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((u_int32_t)(src) &\
                    0x00000007U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW05_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000007U)))

/* macros for field bw_table_dpdoff_bw10_b1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__SHIFT              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__MASK     0x00000038U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000038U) >> 3)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 3) & 0x00000038U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((u_int32_t)(src) <<\
                    3) & 0x00000038U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 3) & ~0x00000038U)))

/* macros for field bw_table_dpdoff_bw20_b1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__SHIFT              6
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__MASK     0x000001c0U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000001c0U) >> 6)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x000001c0U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((u_int32_t)(src) <<\
                    6) & 0x000001c0U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x000001c0U)))

/* macros for field bw_table_dpdoff_bw40_b1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__SHIFT              9
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__MASK     0x00000e00U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000e00U) >> 9)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 9) & 0x00000e00U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((u_int32_t)(src) <<\
                    9) & 0x00000e00U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 9) & ~0x00000e00U)))

/* macros for field bw_table_dpdoff_bw80_b1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__SHIFT             12
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__MASK     0x00007000U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00007000U) >> 12)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00007000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((u_int32_t)(src) <<\
                    12) & 0x00007000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00007000U)))

/* macros for field bw_table_dpdoff_bw80_sec80_1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__SHIFT        16
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__WIDTH         3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__MASK \
                    0x00070000U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00070000U) >> 16)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x00070000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((u_int32_t)(src) <<\
                    16) & 0x00070000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_DPDOFF_BW80_SEC80_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x00070000U)))

/* macros for field bw_table_0_bw80_sec80_1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__SHIFT             19
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__MASK     0x00380000U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00380000U) >> 19)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 19) & 0x00380000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00380000U) | (((u_int32_t)(src) <<\
                    19) & 0x00380000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_0_BW80_SEC80_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 19) & ~0x00380000U)))

/* macros for field bw_table_1_bw80_sec80_1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__SHIFT             22
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__MASK     0x01c00000U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x01c00000U) >> 22)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 22) & 0x01c00000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01c00000U) | (((u_int32_t)(src) <<\
                    22) & 0x01c00000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_1_BW80_SEC80_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 22) & ~0x01c00000U)))

/* macros for field bw_table_2_bw80_sec80_1 */
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__SHIFT             25
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__WIDTH              3
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__MASK     0x0e000000U
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0e000000U) >> 25)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 25) & 0x0e000000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0e000000U) | (((u_int32_t)(src) <<\
                    25) & 0x0e000000U)
#define PAPRD_BW_TABLE_DPDOFF_B1__BW_TABLE_2_BW80_SEC80_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 25) & ~0x0e000000U)))
#define PAPRD_BW_TABLE_DPDOFF_B1__TYPE                                u_int32_t
#define PAPRD_BW_TABLE_DPDOFF_B1__READ                              0x0fff7fffU
#define PAPRD_BW_TABLE_DPDOFF_B1__WRITE                             0x0fff7fffU

#endif /* __PAPRD_BW_TABLE_DPDOFF_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_bw_table_dpdoff_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_BW_TABLE_DPDOFF_B1__NUM                 1

/* macros for BlueprintGlobalNameSpace::paprd_bw_table_1_0_b1 */
#ifndef __PAPRD_BW_TABLE_1_0_B1_MACRO__
#define __PAPRD_BW_TABLE_1_0_B1_MACRO__

/* macros for field bw_table_0_bw05_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__SHIFT                      0
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__MASK             0x00000007U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000007U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000007U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((u_int32_t)(src) &\
                    0x00000007U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW05_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000007U)))

/* macros for field bw_table_0_bw10_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__SHIFT                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__MASK             0x00000038U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000038U) >> 3)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 3) & 0x00000038U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((u_int32_t)(src) <<\
                    3) & 0x00000038U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 3) & ~0x00000038U)))

/* macros for field bw_table_0_bw20_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__SHIFT                      6
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__MASK             0x000001c0U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000001c0U) >> 6)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x000001c0U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((u_int32_t)(src) <<\
                    6) & 0x000001c0U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x000001c0U)))

/* macros for field bw_table_0_bw40_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__SHIFT                      9
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__MASK             0x00000e00U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000e00U) >> 9)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 9) & 0x00000e00U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((u_int32_t)(src) <<\
                    9) & 0x00000e00U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 9) & ~0x00000e00U)))

/* macros for field bw_table_0_bw80_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__SHIFT                     12
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__MASK             0x00007000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00007000U) >> 12)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00007000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((u_int32_t)(src) <<\
                    12) & 0x00007000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_0_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00007000U)))

/* macros for field bw_table_1_bw05_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__SHIFT                     16
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__MASK             0x00070000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00070000U) >> 16)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x00070000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((u_int32_t)(src) <<\
                    16) & 0x00070000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW05_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x00070000U)))

/* macros for field bw_table_1_bw10_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__SHIFT                     19
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__MASK             0x00380000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00380000U) >> 19)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 19) & 0x00380000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00380000U) | (((u_int32_t)(src) <<\
                    19) & 0x00380000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 19) & ~0x00380000U)))

/* macros for field bw_table_1_bw20_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__SHIFT                     22
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__MASK             0x01c00000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x01c00000U) >> 22)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 22) & 0x01c00000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01c00000U) | (((u_int32_t)(src) <<\
                    22) & 0x01c00000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 22) & ~0x01c00000U)))

/* macros for field bw_table_1_bw40_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__SHIFT                     25
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__MASK             0x0e000000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0e000000U) >> 25)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 25) & 0x0e000000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0e000000U) | (((u_int32_t)(src) <<\
                    25) & 0x0e000000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 25) & ~0x0e000000U)))

/* macros for field bw_table_1_bw80_b1 */
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__SHIFT                     28
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__MASK             0x70000000U
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x70000000U) >> 28)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0x70000000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((u_int32_t)(src) <<\
                    28) & 0x70000000U)
#define PAPRD_BW_TABLE_1_0_B1__BW_TABLE_1_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0x70000000U)))
#define PAPRD_BW_TABLE_1_0_B1__TYPE                                   u_int32_t
#define PAPRD_BW_TABLE_1_0_B1__READ                                 0x7fff7fffU
#define PAPRD_BW_TABLE_1_0_B1__WRITE                                0x7fff7fffU

#endif /* __PAPRD_BW_TABLE_1_0_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_bw_table_1_0_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_BW_TABLE_1_0_B1__NUM                    1

/* macros for BlueprintGlobalNameSpace::paprd_bw_table_3_2_b1 */
#ifndef __PAPRD_BW_TABLE_3_2_B1_MACRO__
#define __PAPRD_BW_TABLE_3_2_B1_MACRO__

/* macros for field bw_table_2_bw05_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__SHIFT                      0
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__MASK             0x00000007U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000007U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000007U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((u_int32_t)(src) &\
                    0x00000007U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW05_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000007U)))

/* macros for field bw_table_2_bw10_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__SHIFT                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__MASK             0x00000038U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000038U) >> 3)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 3) & 0x00000038U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((u_int32_t)(src) <<\
                    3) & 0x00000038U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 3) & ~0x00000038U)))

/* macros for field bw_table_2_bw20_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__SHIFT                      6
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__MASK             0x000001c0U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000001c0U) >> 6)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x000001c0U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((u_int32_t)(src) <<\
                    6) & 0x000001c0U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x000001c0U)))

/* macros for field bw_table_2_bw40_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__SHIFT                      9
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__MASK             0x00000e00U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000e00U) >> 9)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 9) & 0x00000e00U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((u_int32_t)(src) <<\
                    9) & 0x00000e00U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 9) & ~0x00000e00U)))

/* macros for field bw_table_2_bw80_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__SHIFT                     12
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__MASK             0x00007000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00007000U) >> 12)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00007000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((u_int32_t)(src) <<\
                    12) & 0x00007000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_2_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00007000U)))

/* macros for field bw_table_3_bw05_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__SHIFT                     16
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__MASK             0x00070000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00070000U) >> 16)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x00070000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((u_int32_t)(src) <<\
                    16) & 0x00070000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW05_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x00070000U)))

/* macros for field bw_table_3_bw10_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__SHIFT                     19
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__MASK             0x00380000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00380000U) >> 19)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 19) & 0x00380000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00380000U) | (((u_int32_t)(src) <<\
                    19) & 0x00380000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 19) & ~0x00380000U)))

/* macros for field bw_table_3_bw20_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__SHIFT                     22
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__MASK             0x01c00000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x01c00000U) >> 22)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 22) & 0x01c00000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01c00000U) | (((u_int32_t)(src) <<\
                    22) & 0x01c00000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 22) & ~0x01c00000U)))

/* macros for field bw_table_3_bw40_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__SHIFT                     25
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__MASK             0x0e000000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0e000000U) >> 25)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 25) & 0x0e000000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0e000000U) | (((u_int32_t)(src) <<\
                    25) & 0x0e000000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 25) & ~0x0e000000U)))

/* macros for field bw_table_3_bw80_b1 */
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__SHIFT                     28
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__MASK             0x70000000U
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x70000000U) >> 28)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0x70000000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((u_int32_t)(src) <<\
                    28) & 0x70000000U)
#define PAPRD_BW_TABLE_3_2_B1__BW_TABLE_3_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0x70000000U)))
#define PAPRD_BW_TABLE_3_2_B1__TYPE                                   u_int32_t
#define PAPRD_BW_TABLE_3_2_B1__READ                                 0x7fff7fffU
#define PAPRD_BW_TABLE_3_2_B1__WRITE                                0x7fff7fffU

#endif /* __PAPRD_BW_TABLE_3_2_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_bw_table_3_2_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_BW_TABLE_3_2_B1__NUM                    1

/* macros for BlueprintGlobalNameSpace::paprd_bw_table_5_4_b1 */
#ifndef __PAPRD_BW_TABLE_5_4_B1_MACRO__
#define __PAPRD_BW_TABLE_5_4_B1_MACRO__

/* macros for field bw_table_4_bw05_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__SHIFT                      0
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__MASK             0x00000007U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000007U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000007U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((u_int32_t)(src) &\
                    0x00000007U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW05_B1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000007U)))

/* macros for field bw_table_4_bw10_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__SHIFT                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__MASK             0x00000038U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000038U) >> 3)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 3) & 0x00000038U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((u_int32_t)(src) <<\
                    3) & 0x00000038U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 3) & ~0x00000038U)))

/* macros for field bw_table_4_bw20_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__SHIFT                      6
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__MASK             0x000001c0U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000001c0U) >> 6)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x000001c0U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((u_int32_t)(src) <<\
                    6) & 0x000001c0U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x000001c0U)))

/* macros for field bw_table_4_bw40_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__SHIFT                      9
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__MASK             0x00000e00U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000e00U) >> 9)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 9) & 0x00000e00U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((u_int32_t)(src) <<\
                    9) & 0x00000e00U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 9) & ~0x00000e00U)))

/* macros for field bw_table_4_bw80_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__SHIFT                     12
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__MASK             0x00007000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00007000U) >> 12)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x00007000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((u_int32_t)(src) <<\
                    12) & 0x00007000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_4_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x00007000U)))

/* macros for field bw_table_5_bw05_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__SHIFT                     16
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__MASK             0x00070000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00070000U) >> 16)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0x00070000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((u_int32_t)(src) <<\
                    16) & 0x00070000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW05_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0x00070000U)))

/* macros for field bw_table_5_bw10_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__SHIFT                     19
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__MASK             0x00380000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00380000U) >> 19)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 19) & 0x00380000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00380000U) | (((u_int32_t)(src) <<\
                    19) & 0x00380000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW10_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 19) & ~0x00380000U)))

/* macros for field bw_table_5_bw20_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__SHIFT                     22
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__MASK             0x01c00000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x01c00000U) >> 22)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 22) & 0x01c00000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01c00000U) | (((u_int32_t)(src) <<\
                    22) & 0x01c00000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW20_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 22) & ~0x01c00000U)))

/* macros for field bw_table_5_bw40_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__SHIFT                     25
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__MASK             0x0e000000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0e000000U) >> 25)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 25) & 0x0e000000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0e000000U) | (((u_int32_t)(src) <<\
                    25) & 0x0e000000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW40_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 25) & ~0x0e000000U)))

/* macros for field bw_table_5_bw80_b1 */
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__SHIFT                     28
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__WIDTH                      3
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__MASK             0x70000000U
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x70000000U) >> 28)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 28) & 0x70000000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((u_int32_t)(src) <<\
                    28) & 0x70000000U)
#define PAPRD_BW_TABLE_5_4_B1__BW_TABLE_5_BW80_B1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 28) & ~0x70000000U)))
#define PAPRD_BW_TABLE_5_4_B1__TYPE                                   u_int32_t
#define PAPRD_BW_TABLE_5_4_B1__READ                                 0x7fff7fffU
#define PAPRD_BW_TABLE_5_4_B1__WRITE                                0x7fff7fffU

#endif /* __PAPRD_BW_TABLE_5_4_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_bw_table_5_4_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_BW_TABLE_5_4_B1__NUM                    1

/* macros for BlueprintGlobalNameSpace::tx_notch_coef_b1 */
#ifndef __TX_NOTCH_COEF_B1_MACRO__
#define __TX_NOTCH_COEF_B1_MACRO__

/* macros for field tx_notch_coef_a1_1 */
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__SHIFT                           0
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__WIDTH                          10
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__MASK                  0x000003ffU
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000003ffU
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000003ffU)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((u_int32_t)(src) &\
                    0x000003ffU)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A1_1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000003ffU)))

/* macros for field tx_notch_coef_a2_1 */
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__SHIFT                          10
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__WIDTH                          10
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__MASK                  0x000ffc00U
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x000ffc00U) >> 10)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 10) & 0x000ffc00U)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000ffc00U) | (((u_int32_t)(src) <<\
                    10) & 0x000ffc00U)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_A2_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 10) & ~0x000ffc00U)))

/* macros for field tx_notch_coef_b1_1 */
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__SHIFT                          20
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__WIDTH                          10
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__MASK                  0x3ff00000U
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x3ff00000U) >> 20)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 20) & 0x3ff00000U)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3ff00000U) | (((u_int32_t)(src) <<\
                    20) & 0x3ff00000U)
#define TX_NOTCH_COEF_B1__TX_NOTCH_COEF_B1_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 20) & ~0x3ff00000U)))
#define TX_NOTCH_COEF_B1__TYPE                                        u_int32_t
#define TX_NOTCH_COEF_B1__READ                                      0x3fffffffU
#define TX_NOTCH_COEF_B1__WRITE                                     0x3fffffffU

#endif /* __TX_NOTCH_COEF_B1_MACRO__ */


/* macros for chn1_table_map.BB_tx_notch_coef_b1 */
#define INST_CHN1_TABLE_MAP__BB_TX_NOTCH_COEF_B1__NUM                         1

/* macros for BlueprintGlobalNameSpace::tx_notch_dpd_en_b1 */
#ifndef __TX_NOTCH_DPD_EN_B1_MACRO__
#define __TX_NOTCH_DPD_EN_B1_MACRO__

/* macros for field paprd_notch_sel_dpd0_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__SHIFT                     0
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__MASK            0x00000001U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000001U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000001U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((u_int32_t)(src) &\
                    0x00000001U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000001U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (u_int32_t)(1)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD0_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (u_int32_t)(0)

/* macros for field paprd_notch_sel_dpd1_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__SHIFT                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__MASK            0x00000002U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000002U) >> 1)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 1) & 0x00000002U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((u_int32_t)(src) <<\
                    1) & 0x00000002U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 1) & ~0x00000002U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((u_int32_t)(1) << 1)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD1_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((u_int32_t)(0) << 1)

/* macros for field paprd_notch_sel_dpd2_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__SHIFT                     2
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__MASK            0x00000004U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000004U) >> 2)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 2) & 0x00000004U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((u_int32_t)(src) <<\
                    2) & 0x00000004U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 2) & ~0x00000004U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((u_int32_t)(1) << 2)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD2_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((u_int32_t)(0) << 2)

/* macros for field paprd_notch_sel_dpd3_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__SHIFT                     3
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__MASK            0x00000008U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000008U) >> 3)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 3) & 0x00000008U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((u_int32_t)(src) <<\
                    3) & 0x00000008U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 3) & ~0x00000008U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((u_int32_t)(1) << 3)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD3_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((u_int32_t)(0) << 3)

/* macros for field paprd_notch_sel_dpd4_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__SHIFT                     4
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__MASK            0x00000010U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000010U) >> 4)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x00000010U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((u_int32_t)(src) <<\
                    4) & 0x00000010U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x00000010U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((u_int32_t)(1) << 4)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD4_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((u_int32_t)(0) << 4)

/* macros for field paprd_notch_sel_dpd5_1 */
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__SHIFT                     5
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__WIDTH                     1
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__MASK            0x00000020U
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000020U) >> 5)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 5) & 0x00000020U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((u_int32_t)(src) <<\
                    5) & 0x00000020U)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 5) & ~0x00000020U)))
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((u_int32_t)(1) << 5)
#define TX_NOTCH_DPD_EN_B1__PAPRD_NOTCH_SEL_DPD5_1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((u_int32_t)(0) << 5)
#define TX_NOTCH_DPD_EN_B1__TYPE                                      u_int32_t
#define TX_NOTCH_DPD_EN_B1__READ                                    0x0000003fU
#define TX_NOTCH_DPD_EN_B1__WRITE                                   0x0000003fU

#endif /* __TX_NOTCH_DPD_EN_B1_MACRO__ */


/* macros for chn1_table_map.BB_tx_notch_dpd_en_b1 */
#define INST_CHN1_TABLE_MAP__BB_TX_NOTCH_DPD_EN_B1__NUM                       1

/* macros for BlueprintGlobalNameSpace::tx_plybck_ctrl_0_b1 */
#ifndef __TX_PLYBCK_CTRL_0_B1_MACRO__
#define __TX_PLYBCK_CTRL_0_B1_MACRO__

/* macros for field tx_plybck_enable */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__SHIFT                          0
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__WIDTH                          1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__MASK                 0x00000001U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__READ(src) \
                    (u_int32_t)(src)\
                    & 0x00000001U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00000001U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((u_int32_t)(src) &\
                    0x00000001U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00000001U)))
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (u_int32_t)(1)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (u_int32_t)(0)

/* macros for field tx_plybck_s2_write */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__SHIFT                        1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__WIDTH                        1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__MASK               0x00000002U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000002U) >> 1)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 1) & 0x00000002U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((u_int32_t)(src) <<\
                    1) & 0x00000002U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 1) & ~0x00000002U)))
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((u_int32_t)(1) << 1)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_S2_WRITE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((u_int32_t)(0) << 1)

/* macros for field tx_plybck_rd_mode */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__SHIFT                         2
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__WIDTH                         2
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__MASK                0x0000000cU
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000000cU) >> 2)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 2) & 0x0000000cU)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((u_int32_t)(src) <<\
                    2) & 0x0000000cU)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_RD_MODE__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 2) & ~0x0000000cU)))

/* macros for field tx_plybck_dpd_train */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__SHIFT                       4
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__WIDTH                       1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__MASK              0x00000010U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000010U) >> 4)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 4) & 0x00000010U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((u_int32_t)(src) <<\
                    4) & 0x00000010U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 4) & ~0x00000010U)))
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((u_int32_t)(1) << 4)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_DPD_TRAIN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((u_int32_t)(0) << 4)

/* macros for field tx_plybck_sw_start */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__SHIFT                        5
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__WIDTH                        1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__MASK               0x00000020U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000020U) >> 5)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 5) & 0x00000020U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((u_int32_t)(src) <<\
                    5) & 0x00000020U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 5) & ~0x00000020U)))
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((u_int32_t)(1) << 5)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_SW_START__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((u_int32_t)(0) << 5)

/* macros for field tx_plybck_mix_disable */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__SHIFT                     6
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__WIDTH                     1
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__MASK            0x00000040U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000040U) >> 6)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000040U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((u_int32_t)(src) <<\
                    6) & 0x00000040U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000040U)))
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((u_int32_t)(1) << 6)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_MIX_DISABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((u_int32_t)(0) << 6)

/* macros for field tx_plybck_start_addr */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__SHIFT                      8
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__WIDTH                      8
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__MASK             0x0000ff00U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x0000ff00U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((u_int32_t)(src) <<\
                    8) & 0x0000ff00U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_START_ADDR__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x0000ff00U)))

/* macros for field tx_plybck_nsamples */
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__SHIFT                       16
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__WIDTH                       16
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__MASK               0xffff0000U
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__READ(src) \
                    (((u_int32_t)(src)\
                    & 0xffff0000U) >> 16)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 16) & 0xffff0000U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((u_int32_t)(src) <<\
                    16) & 0xffff0000U)
#define TX_PLYBCK_CTRL_0_B1__TX_PLYBCK_NSAMPLES__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define TX_PLYBCK_CTRL_0_B1__TYPE                                     u_int32_t
#define TX_PLYBCK_CTRL_0_B1__READ                                   0xffffff7fU
#define TX_PLYBCK_CTRL_0_B1__WRITE                                  0xffffff7fU

#endif /* __TX_PLYBCK_CTRL_0_B1_MACRO__ */


/* macros for chn1_table_map.BB_tx_plybck_ctrl_0_b1 */
#define INST_CHN1_TABLE_MAP__BB_TX_PLYBCK_CTRL_0_B1__NUM                      1

/* macros for BlueprintGlobalNameSpace::ibfcal_phasecorrection_chn1 */
#ifndef __IBFCAL_PHASECORRECTION_CHN1_MACRO__
#define __IBFCAL_PHASECORRECTION_CHN1_MACRO__

/* macros for field ibfcal_phasecorr_pre_comp_i_1 */
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__SHIFT     0
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__WIDTH     8
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__MASK \
                    0x000000ffU
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x000000ffU
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x000000ffU)
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((u_int32_t)(src) &\
                    0x000000ffU)
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_I_1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x000000ffU)))

/* macros for field ibfcal_phasecorr_pre_comp_q_1 */
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__SHIFT     8
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__WIDTH     8
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__MASK \
                    0x0000ff00U
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 8) & 0x0000ff00U)
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((u_int32_t)(src) <<\
                    8) & 0x0000ff00U)
#define IBFCAL_PHASECORRECTION_CHN1__IBFCAL_PHASECORR_PRE_COMP_Q_1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define IBFCAL_PHASECORRECTION_CHN1__TYPE                             u_int32_t
#define IBFCAL_PHASECORRECTION_CHN1__READ                           0x0000ffffU
#define IBFCAL_PHASECORRECTION_CHN1__WRITE                          0x0000ffffU

#endif /* __IBFCAL_PHASECORRECTION_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_phasecorrection_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_PHASECORRECTION_CHN1__NUM              1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g0_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G0_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G0_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g0_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g0_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g0_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_I_G0_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g0_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G0_CHN1__IBFCAL_COMP_RFFE_Q_G0_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G0_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G0_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G0_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G0_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g0_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G0_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g1_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G1_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G1_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g1_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g1_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g1_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_I_G1_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g1_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G1_CHN1__IBFCAL_COMP_RFFE_Q_G1_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G1_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G1_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G1_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G1_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g1_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G1_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g2_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G2_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G2_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g2_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g2_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g2_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_I_G2_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g2_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G2_CHN1__IBFCAL_COMP_RFFE_Q_G2_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G2_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G2_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G2_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G2_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g2_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G2_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g3_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G3_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G3_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g3_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g3_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g3_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_I_G3_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g3_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G3_CHN1__IBFCAL_COMP_RFFE_Q_G3_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G3_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G3_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G3_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G3_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g3_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G3_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g4_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G4_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G4_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g4_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g4_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g4_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_I_G4_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g4_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G4_CHN1__IBFCAL_COMP_RFFE_Q_G4_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G4_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G4_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G4_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G4_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g4_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G4_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g5_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G5_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G5_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g5_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g5_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g5_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_I_G5_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g5_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G5_CHN1__IBFCAL_COMP_RFFE_Q_G5_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G5_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G5_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G5_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G5_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g5_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G5_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::ibfcal_rffe_comp_g6_chn1 */
#ifndef __IBFCAL_RFFE_COMP_G6_CHN1_MACRO__
#define __IBFCAL_RFFE_COMP_G6_CHN1_MACRO__

/* macros for field ibfcal_comp_rffe_i_g6_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__SHIFT     0
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__MASK \
                    0x0000003fU
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0000003fU
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0000003fU)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((u_int32_t)(src) &\
                    0x0000003fU)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA0_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0000003fU)))

/* macros for field ibfcal_comp_rffe_q_g6_xlna0_chn1 */
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__SHIFT     6
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__MASK \
                    0x00000fc0U
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((u_int32_t)(src) <<\
                    6) & 0x00000fc0U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA0_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 6) & ~0x00000fc0U)))

/* macros for field ibfcal_comp_rffe_i_g6_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__SHIFT    12
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__MASK \
                    0x0003f000U
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x0003f000U) >> 12)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((u_int32_t)(src) <<\
                    12) & 0x0003f000U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_I_G6_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 12) & ~0x0003f000U)))

/* macros for field ibfcal_comp_rffe_q_g6_xlna1_chn1 */
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__SHIFT    18
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__WIDTH     6
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__MASK \
                    0x00fc0000U
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__READ(src) \
                    (((u_int32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__WRITE(src) \
                    (((u_int32_t)(src)\
                    << 18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((u_int32_t)(src) <<\
                    18) & 0x00fc0000U)
#define IBFCAL_RFFE_COMP_G6_CHN1__IBFCAL_COMP_RFFE_Q_G6_XLNA1_CHN1__VERIFY(src) \
                    (!((((u_int32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define IBFCAL_RFFE_COMP_G6_CHN1__TYPE                                u_int32_t
#define IBFCAL_RFFE_COMP_G6_CHN1__READ                              0x00ffffffU
#define IBFCAL_RFFE_COMP_G6_CHN1__WRITE                             0x00ffffffU

#endif /* __IBFCAL_RFFE_COMP_G6_CHN1_MACRO__ */


/* macros for chn1_table_map.BB_ibfcal_rffe_comp_g6_chn1 */
#define INST_CHN1_TABLE_MAP__BB_IBFCAL_RFFE_COMP_G6_CHN1__NUM                 1

/* macros for BlueprintGlobalNameSpace::normrx_rxiq_corr_coeff_b1 */
#ifndef __NORMRX_RXIQ_CORR_COEFF_B1_MACRO__
#define __NORMRX_RXIQ_CORR_COEFF_B1_MACRO__

/* macros for field normrx_iqc_coeff_table_chn1 */
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__SHIFT         0
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__WIDTH        18
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__MASK \
                    0x0003ffffU
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define NORMRX_RXIQ_CORR_COEFF_B1__NORMRX_IQC_COEFF_TABLE_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define NORMRX_RXIQ_CORR_COEFF_B1__TYPE                               u_int32_t
#define NORMRX_RXIQ_CORR_COEFF_B1__READ                             0x0003ffffU
#define NORMRX_RXIQ_CORR_COEFF_B1__WRITE                            0x0003ffffU

#endif /* __NORMRX_RXIQ_CORR_COEFF_B1_MACRO__ */


/* macros for chn1_table_map.BB_normrx_rxiq_corr_coeff_b1 */
#define INST_CHN1_TABLE_MAP__BB_NORMRX_RXIQ_CORR_COEFF_B1__NUM              160

/* macros for BlueprintGlobalNameSpace::paprd_mem_tab_b1 */
#ifndef __PAPRD_MEM_TAB_B1_MACRO__
#define __PAPRD_MEM_TAB_B1_MACRO__

/* macros for field paprd_mem */
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__SHIFT                                    0
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__WIDTH                                   24
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__MASK                           0x00ffffffU
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__READ(src)   (u_int32_t)(src) & 0x00ffffffU
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x00ffffffU)
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ffffffU) | ((u_int32_t)(src) &\
                    0x00ffffffU)
#define PAPRD_MEM_TAB_B1__PAPRD_MEM__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x00ffffffU)))
#define PAPRD_MEM_TAB_B1__TYPE                                        u_int32_t
#define PAPRD_MEM_TAB_B1__READ                                      0x00ffffffU
#define PAPRD_MEM_TAB_B1__WRITE                                     0x00ffffffU

#endif /* __PAPRD_MEM_TAB_B1_MACRO__ */


/* macros for chn1_table_map.BB_paprd_mem_tab_b1 */
#define INST_CHN1_TABLE_MAP__BB_PAPRD_MEM_TAB_B1__NUM                       768

/* macros for BlueprintGlobalNameSpace::normtx_txiq_corr_coeff_b1 */
#ifndef __NORMTX_TXIQ_CORR_COEFF_B1_MACRO__
#define __NORMTX_TXIQ_CORR_COEFF_B1_MACRO__

/* macros for field normtx_iqc_coeff_table_chn1 */
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__SHIFT         0
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__WIDTH        18
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__MASK \
                    0x0003ffffU
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__READ(src) \
                    (u_int32_t)(src)\
                    & 0x0003ffffU
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0x0003ffffU)
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003ffffU) | ((u_int32_t)(src) &\
                    0x0003ffffU)
#define NORMTX_TXIQ_CORR_COEFF_B1__NORMTX_IQC_COEFF_TABLE_CHN1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0x0003ffffU)))
#define NORMTX_TXIQ_CORR_COEFF_B1__TYPE                               u_int32_t
#define NORMTX_TXIQ_CORR_COEFF_B1__READ                             0x0003ffffU
#define NORMTX_TXIQ_CORR_COEFF_B1__WRITE                            0x0003ffffU

#endif /* __NORMTX_TXIQ_CORR_COEFF_B1_MACRO__ */


/* macros for chn1_table_map.BB_normtx_txiq_corr_coeff_b1 */
#define INST_CHN1_TABLE_MAP__BB_NORMTX_TXIQ_CORR_COEFF_B1__NUM              160

/* macros for BlueprintGlobalNameSpace::chaninfo_tab_b1 */
#ifndef __CHANINFO_TAB_B1_MACRO__
#define __CHANINFO_TAB_B1_MACRO__

/* macros for field chaninfo_word */
#define CHANINFO_TAB_B1__CHANINFO_WORD__SHIFT                                 0
#define CHANINFO_TAB_B1__CHANINFO_WORD__WIDTH                                32
#define CHANINFO_TAB_B1__CHANINFO_WORD__MASK                        0xffffffffU
#define CHANINFO_TAB_B1__CHANINFO_WORD__READ(src) \
                    (u_int32_t)(src)\
                    & 0xffffffffU
#define CHANINFO_TAB_B1__CHANINFO_WORD__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define CHANINFO_TAB_B1__CHANINFO_WORD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define CHANINFO_TAB_B1__CHANINFO_WORD__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define CHANINFO_TAB_B1__TYPE                                         u_int32_t
#define CHANINFO_TAB_B1__READ                                       0xffffffffU
#define CHANINFO_TAB_B1__WRITE                                      0xffffffffU

#endif /* __CHANINFO_TAB_B1_MACRO__ */


/* macros for chn1_table_map.BB_chaninfo_tab_b1 */
#define INST_CHN1_TABLE_MAP__BB_CHANINFO_TAB_B1__NUM                        256

/* macros for BlueprintGlobalNameSpace::chn1_tables_dummy_1 */
#ifndef __CHN1_TABLES_DUMMY_1_MACRO__
#define __CHN1_TABLES_DUMMY_1_MACRO__

/* macros for field dummy1 */
#define CHN1_TABLES_DUMMY_1__DUMMY1__SHIFT                                    0
#define CHN1_TABLES_DUMMY_1__DUMMY1__WIDTH                                   32
#define CHN1_TABLES_DUMMY_1__DUMMY1__MASK                           0xffffffffU
#define CHN1_TABLES_DUMMY_1__DUMMY1__READ(src)   (u_int32_t)(src) & 0xffffffffU
#define CHN1_TABLES_DUMMY_1__DUMMY1__WRITE(src) \
                    ((u_int32_t)(src)\
                    & 0xffffffffU)
#define CHN1_TABLES_DUMMY_1__DUMMY1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((u_int32_t)(src) &\
                    0xffffffffU)
#define CHN1_TABLES_DUMMY_1__DUMMY1__VERIFY(src) \
                    (!(((u_int32_t)(src)\
                    & ~0xffffffffU)))
#define CHN1_TABLES_DUMMY_1__TYPE                                     u_int32_t
#define CHN1_TABLES_DUMMY_1__READ                                   0xffffffffU
#define CHN1_TABLES_DUMMY_1__WRITE                                  0xffffffffU

#endif /* __CHN1_TABLES_DUMMY_1_MACRO__ */


/* macros for chn1_table_map.BB_chn1_tables_dummy_1 */
#define INST_CHN1_TABLE_MAP__BB_CHN1_TABLES_DUMMY_1__NUM                      1
#define RFILE_INST_CHN1_TABLE_MAP__NUM                                        1

#define TIERED_CHN1_TABLE_MAP__VERSION \
                    "/prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/ip/athr/wifi/besra/shared/scripts/perllib/Pinfo.pm\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/ip/athr/wifi/besra/shared/xml/bin/ath_ansic.pm\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/chip_top_reg.rdl\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/chip_top_reg_common_signals.rdl\n\
                    /prj/qca/chips/besra/1.0/shanghai-qca/dev_01/tyzhang/tyzhang_besra_chip/chips/besra/1.0/src/chip_top/design/blueprint/srcs/chn1_table_map.rdl"
#endif /* __REG_TIERED_CHN1_TABLE_MAP_MACRO_H__ */
