/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef __REG_TIERED_CHN_TABLE_MAP_H__
#define __REG_TIERED_CHN_TABLE_MAP_H__

#include "tiered_chn_table_map_macro.h"

struct chn_table_map {
  volatile unsigned int pad__0[0x20];             /*        0x0 - 0x80       */
  volatile u_int32_t BB_paprd_power_at_am2am_cal_b0;
                                                  /*       0x80 - 0x84       */
  volatile u_int32_t BB_paprd_valid_obdb_b0;      /*       0x84 - 0x88       */
  volatile unsigned int pad__1[0x1e];             /*       0x88 - 0x100      */
  volatile u_int32_t BB_chn_tables_dummy_2;       /*      0x100 - 0x104      */
  volatile unsigned int pad__2[0x1e3];            /*      0x104 - 0x890      */
  volatile u_int32_t BB_txiqcorr_txpath_coef_b0[16];
                                                  /*      0x890 - 0x8d0      */
  volatile u_int32_t BB_txiqcorr_rxpath_coef_b0[16];
                                                  /*      0x8d0 - 0x910      */
  volatile u_int32_t BB_rxiqcorr_rxpath_coef_b0[16];
                                                  /*      0x910 - 0x950      */
  volatile u_int32_t BB_rxiqcorr_txpath_coef_b0[16];
                                                  /*      0x950 - 0x990      */
  volatile unsigned int pad__3[0x2c];             /*      0x990 - 0xa40      */
  volatile u_int32_t BB_rxcal_tx_iqcorr_idx_7_0_b0;
                                                  /*      0xa40 - 0xa44      */
  volatile u_int32_t BB_rxcal_tx_iqcorr_idx_15_8_b0;
                                                  /*      0xa44 - 0xa48      */
  volatile u_int32_t BB_rxcal_tx_iqcorr_idx_23_16_b0;
                                                  /*      0xa48 - 0xa4c      */
  volatile u_int32_t BB_rxcal_tx_iqcorr_idx_31_24_b0;
                                                  /*      0xa4c - 0xa50      */
  volatile u_int32_t BB_txcal_rx_iqcorr_idx_7_0;  /*      0xa50 - 0xa54      */
  volatile u_int32_t BB_txcal_rx_iqcorr_idx_15_8; /*      0xa54 - 0xa58      */
  volatile u_int32_t BB_txcal_rx_iqcorr_idx_23_16;
                                                  /*      0xa58 - 0xa5c      */
  volatile u_int32_t BB_txcal_rx_iqcorr_idx_24;   /*      0xa5c - 0xa60      */
  volatile u_int32_t BB_paprd_sm_sig_gain_table_0_2_b0;
                                                  /*      0xa60 - 0xa64      */
  volatile u_int32_t BB_paprd_sm_sig_gain_table_3_5_b0;
                                                  /*      0xa64 - 0xa68      */
  volatile unsigned int pad__4;                   /*      0xa68 - 0xa6c      */
  volatile u_int32_t BB_paprd_peftbl_sel_b0;      /*      0xa6c - 0xa70      */
  volatile u_int32_t BB_preemp_coef_tbl0_set0_b0; /*      0xa70 - 0xa74      */
  volatile u_int32_t BB_preemp_coef_tbl0_set1_b0; /*      0xa74 - 0xa78      */
  volatile u_int32_t BB_preemp_coef_tbl0_set2_b0; /*      0xa78 - 0xa7c      */
  volatile u_int32_t BB_preemp_coef_tbl0_set3_b0; /*      0xa7c - 0xa80      */
  volatile u_int32_t BB_preemp_coef_tbl0_set4_b0; /*      0xa80 - 0xa84      */
  volatile u_int32_t BB_preemp_coef_tbl0_set5_b0; /*      0xa84 - 0xa88      */
  volatile u_int32_t BB_preemp_coef_tbl0_set6_b0; /*      0xa88 - 0xa8c      */
  volatile u_int32_t BB_preemp_coef_tbl0_set7_b0; /*      0xa8c - 0xa90      */
  volatile u_int32_t BB_preemp_coef_tbl0_set8_b0; /*      0xa90 - 0xa94      */
  volatile u_int32_t BB_preemp_coef_tbl1_set0_b0; /*      0xa94 - 0xa98      */
  volatile u_int32_t BB_preemp_coef_tbl1_set1_b0; /*      0xa98 - 0xa9c      */
  volatile u_int32_t BB_preemp_coef_tbl1_set2_b0; /*      0xa9c - 0xaa0      */
  volatile u_int32_t BB_preemp_coef_tbl1_set3_b0; /*      0xaa0 - 0xaa4      */
  volatile u_int32_t BB_preemp_coef_tbl1_set4_b0; /*      0xaa4 - 0xaa8      */
  volatile u_int32_t BB_preemp_coef_tbl1_set5_b0; /*      0xaa8 - 0xaac      */
  volatile u_int32_t BB_preemp_coef_tbl1_set6_b0; /*      0xaac - 0xab0      */
  volatile u_int32_t BB_preemp_coef_tbl1_set7_b0; /*      0xab0 - 0xab4      */
  volatile u_int32_t BB_preemp_coef_tbl1_set8_b0; /*      0xab4 - 0xab8      */
  volatile u_int32_t BB_paprd_bw_table_dpdoff_b0; /*      0xab8 - 0xabc      */
  volatile u_int32_t BB_paprd_bw_table_1_0_b0;    /*      0xabc - 0xac0      */
  volatile u_int32_t BB_paprd_bw_table_3_2_b0;    /*      0xac0 - 0xac4      */
  volatile u_int32_t BB_paprd_bw_table_5_4_b0;    /*      0xac4 - 0xac8      */
  volatile u_int32_t BB_tx_notch_coef_b0;         /*      0xac8 - 0xacc      */
  volatile u_int32_t BB_tx_notch_dpd_en_b0;       /*      0xacc - 0xad0      */
  volatile unsigned int pad__5[0xc];              /*      0xad0 - 0xb00      */
  volatile u_int32_t BB_tx_plybck_ctrl_0_b0;      /*      0xb00 - 0xb04      */
  volatile u_int32_t BB_tx_plybck_ctrl_1_b0;      /*      0xb04 - 0xb08      */
  volatile u_int32_t BB_ibfcal_cntl;              /*      0xb08 - 0xb0c      */
  volatile u_int32_t BB_ibfcal_stat_step1;        /*      0xb0c - 0xb10      */
  volatile u_int32_t BB_ibfcal_stat_step2;        /*      0xb10 - 0xb14      */
  volatile u_int32_t BB_ibfcal_stat_step3;        /*      0xb14 - 0xb18      */
  volatile u_int32_t BB_ibfcal_stat_step4;        /*      0xb18 - 0xb1c      */
  volatile u_int32_t BB_ibfcal_stat_step5;        /*      0xb1c - 0xb20      */
  volatile u_int32_t BB_ibfcal_stat_step6;        /*      0xb20 - 0xb24      */
  volatile u_int32_t BB_ibfcal_phasecorrection_chn0;
                                                  /*      0xb24 - 0xb28      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g0_chn0; /*      0xb28 - 0xb2c      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g1_chn0; /*      0xb2c - 0xb30      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g2_chn0; /*      0xb30 - 0xb34      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g3_chn0; /*      0xb34 - 0xb38      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g4_chn0; /*      0xb38 - 0xb3c      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g5_chn0; /*      0xb3c - 0xb40      */
  volatile u_int32_t BB_ibfcal_rffe_comp_g6_chn0; /*      0xb40 - 0xb44      */
  volatile u_int32_t BB_ibfcal_gm_tia_comp_g1;    /*      0xb44 - 0xb48      */
  volatile u_int32_t BB_ibfcal_gm_tia_comp_g2;    /*      0xb48 - 0xb4c      */
  volatile u_int32_t BB_ibfcal_gm_tia_comp_g3;    /*      0xb4c - 0xb50      */
  volatile unsigned int pad__6[0x2c];             /*      0xb50 - 0xc00      */
  volatile u_int32_t BB_normrx_rxiq_corr_coeff_b0[160];
                                                  /*      0xc00 - 0xe80      */
  volatile u_int32_t BB_paprd_mem_tab_b0[768];    /*      0xe80 - 0x1a80     */
  volatile unsigned int pad__7[0x25f];            /*     0x1a80 - 0x23fc     */
  volatile u_int32_t BB_paprd_train_adcsat;       /*     0x23fc - 0x2400     */
  volatile u_int32_t BB_paprd_trainer_cntl1;      /*     0x2400 - 0x2404     */
  volatile u_int32_t BB_paprd_trainer_cntl2;      /*     0x2404 - 0x2408     */
  volatile u_int32_t BB_paprd_trainer_cntl3;      /*     0x2408 - 0x240c     */
  volatile u_int32_t BB_paprd_trainer_cntl4;      /*     0x240c - 0x2410     */
  volatile u_int32_t BB_paprd_trainer_stat1;      /*     0x2410 - 0x2414     */
  volatile u_int32_t BB_paprd_trainer_stat2;      /*     0x2414 - 0x2418     */
  volatile u_int32_t BB_paprd_trainer_stat3;      /*     0x2418 - 0x241c     */
  volatile u_int32_t BB_paprd_train_gain_set0;    /*     0x241c - 0x2420     */
  volatile u_int32_t BB_paprd_train_gain_set1;    /*     0x2420 - 0x2424     */
  volatile u_int32_t BB_paprd_train_gain_set2;    /*     0x2424 - 0x2428     */
  volatile u_int32_t BB_paprd_train_gain_set3;    /*     0x2428 - 0x242c     */
  volatile u_int32_t BB_paprd_train_gain_set4;    /*     0x242c - 0x2430     */
  volatile u_int32_t BB_paprd_train_gain_set5;    /*     0x2430 - 0x2434     */
  volatile u_int32_t BB_paprd_train_gain_set6;    /*     0x2434 - 0x2438     */
  volatile u_int32_t BB_paprd_train_gain_set7;    /*     0x2438 - 0x243c     */
  volatile u_int32_t BB_paprd_train_gain_set8;    /*     0x243c - 0x2440     */
  volatile u_int32_t BB_paprd_train_gain_idx_set0;
                                                  /*     0x2440 - 0x2444     */
  volatile u_int32_t BB_paprd_train_gain_idx_set1;
                                                  /*     0x2444 - 0x2448     */
  volatile u_int32_t BB_paprd_train_gain_idx_set2;
                                                  /*     0x2448 - 0x244c     */
  volatile u_int32_t BB_paprd_train_gain_idx_set3;
                                                  /*     0x244c - 0x2450     */
  volatile u_int32_t BB_paprd_train_agc0;         /*     0x2450 - 0x2454     */
  volatile u_int32_t BB_paprd_train_agc1;         /*     0x2454 - 0x2458     */
  volatile u_int32_t BB_paprd_train_qchk_acc_0;   /*     0x2458 - 0x245c     */
  volatile u_int32_t BB_paprd_train_qchk_acc_1;   /*     0x245c - 0x2460     */
  volatile u_int32_t BB_paprd_train_qchk_acc_2;   /*     0x2460 - 0x2464     */
  volatile u_int32_t BB_paprd_train_qchk_acc_3;   /*     0x2464 - 0x2468     */
  volatile u_int32_t BB_paprd_train_qchk_data_0;  /*     0x2468 - 0x246c     */
  volatile u_int32_t BB_paprd_train_qchk_data_1;  /*     0x246c - 0x2470     */
  volatile u_int32_t BB_paprd_train_qchk_data_2;  /*     0x2470 - 0x2474     */
  volatile u_int32_t BB_paprd_train_qchk_data_3;  /*     0x2474 - 0x2478     */
  volatile u_int32_t BB_paprd_train_mem[384];     /*     0x2478 - 0x2a78     */
  volatile unsigned int pad__8[0x20];             /*     0x2a78 - 0x2af8     */
  volatile u_int32_t BB_paprd_train_gain_set9;    /*     0x2af8 - 0x2afc     */
  volatile u_int32_t BB_paprd_train_gain_set10;   /*     0x2afc - 0x2b00     */
  volatile u_int32_t BB_paprd_train_gain_set11;   /*     0x2b00 - 0x2b04     */
  volatile u_int32_t BB_paprd_train_gain_set12;   /*     0x2b04 - 0x2b08     */
  volatile u_int32_t BB_paprd_train_gain_set13;   /*     0x2b08 - 0x2b0c     */
  volatile u_int32_t BB_paprd_train_gain_set14;   /*     0x2b0c - 0x2b10     */
  volatile u_int32_t BB_paprd_train_gain_idx_set4;
                                                  /*     0x2b10 - 0x2b14     */
  volatile u_int32_t BB_paprd_train_gain_idx_set5;
                                                  /*     0x2b14 - 0x2b18     */
  volatile unsigned int pad__9[0xf2];             /*     0x2b18 - 0x2ee0     */
  volatile u_int32_t BB_normtx_txiq_corr_coeff_b0[160];
                                                  /*     0x2ee0 - 0x3160     */
  volatile unsigned int pad__10[0x14];            /*     0x3160 - 0x31b0     */
  volatile u_int32_t BB_paprd_train_dc_est;       /*     0x31b0 - 0x31b4     */
  volatile unsigned int pad__11[0x13];            /*     0x31b4 - 0x3200     */
  volatile u_int32_t BB_chaninfo_tab_b0[256];     /*     0x3200 - 0x3600     */
  volatile unsigned int pad__12[0x2c];            /*     0x3600 - 0x36b0     */
  volatile u_int32_t BB_tx_fir_coeff_mem[280];    /*     0x36b0 - 0x3b10     */
  volatile u_int32_t BB_tx_fir_cntl;              /*     0x3b10 - 0x3b14     */
  volatile u_int32_t BB_chn_dc_notch_fd_01_mem[256];
                                                  /*     0x3b14 - 0x3f14     */
  volatile u_int32_t BB_chn_dc_notch_fd_23_mem[256];
                                                  /*     0x3f14 - 0x4314     */
  volatile unsigned int pad__13[0x11e6];          /*     0x4314 - 0x8aac     */
  volatile u_int32_t BB_chn_tables_dummy_1;       /*     0x8aac - 0x8ab0     */
};

struct tiered_chn_table_map {
  struct chn_table_map chn_table_map;             /*        0x0 - 0x8a30     */
  volatile unsigned int pad__0[0x20];             /*     0x8a30 - 0x8ab0     */
};

#endif /* __REG_TIERED_CHN_TABLE_MAP_H__ */
