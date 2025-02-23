/*
 * Copyright (c) 2012, 2015, 2017 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * 2012, 2015 Qualcomm Atheros, Inc.
 * Qualcomm Atheros Confidential and Proprietary.
 */
//------------------------------------------------------------------------------
// <copyright file="dbglog_id.h" company="Atheros">
//    Copyright (c) 2004-2010 Atheros Corporation.  All rights reserved.
// $ATH_LICENSE_HOSTSDK0_C$
//------------------------------------------------------------------------------
//==============================================================================
// Author(s): ="Atheros"
//==============================================================================

#ifndef _DBGLOG_ID_H_
#define _DBGLOG_ID_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The target state machine framework will send dbglog messages on behalf on
 * other modules. We do this do avoid each target module adding identical
 * dbglog code for state transitions and event processing. We also don't want
 * to force each module to define the the same XXX_DBGID_SM_MSG with the same
 * value below. Instead we use a special ID that the host dbglog code
 * recognizes as a message sent by the SM on behalf on another module.
 */
#define DBGLOG_DBGID_SM_FRAMEWORK_PROXY_DBGLOG_MSG 1000

/*
 * The nomenclature for the debug identifiers is MODULE_DESCRIPTION.
 * Please ensure that the definition of any new debugid introduced is captured
 * between the <MODULE>_DBGID_DEFINITION_START and
 * <MODULE>_DBGID_DEFINITION_END defines. The structure is required for the
 * parser to correctly pick up the values for different debug identifiers.
 */

/*
* The target state machine framework will send dbglog messages on behalf on
* other modules. We do this do avoid each module adding identical dbglog code 
* for state transitions and event processing. We also don't want to force each
* module to define the the same XXX_DBGID_SM_MSG with the same value below.
* Instead we use a special ID that the host dbglog code recognizes as a
* message sent by the SM on behalf on another module.
*/
#define DBGLOG_DBGID_SM_FRAMEWORK_PROXY_DBGLOG_MSG 1000


/* INF debug identifier definitions */
    typedef enum {
        INF_DBGID_DEFINITION_START = 0 ,
        INF_ASSERTION_FAILED ,                          
        INF_TARGET_ID ,                                 
        INF_DBGID_DEFINITION_END ,                   
    } WLAN_MODULE_INF_T;

    typedef enum {
        WAL_MODULE_DE_DEFINITION_START = 0 ,
        WAL_MODULE_DE_DEFINITION_END ,                   
    } WAL_MODULE_DE_T;

    typedef enum {
        WLAN_MODULE_WAL_PDEV_DEFINITION_START = 0 ,
        WLAN_MODULE_WAL_PDEV_DEFINITION_END ,                   
    } WLAN_MODULE_WAL_PDEV_T;

    typedef enum {
        WLAN_MODULE_WAL_VDEV_DEFINITION_START = 0 ,
        WLAN_MODULE_WAL_VDEV_DEFINITION_END ,                   
    } WLAN_MODULE_WAL_VDEV_T;

    typedef enum {
        WLAN_MODULE_ROAM_DEFINITION_START = 0 ,
        WLAN_MODULE_ROAM_DEFINITION_END ,                   
    } WLAN_MODULE_ROAM_T;

    typedef enum {
        WLAN_MODULE_DATA_TXRX_DEFINITION_START = 0 ,
        WLAN_MODULE_DATA_TXRX_DEFINITION_END ,                   
    } WLAN_MODULE_DATA_TXRX_T;

    typedef enum {
        WLAN_MODULE_BLOCKACK_DEFINITION_START = 0 ,
        WLAN_MODULE_BLOCKACK_DEFINITION_END ,                   
    } WLAN_MODULE_BLOCKACK_T;

    typedef enum {
        WLAN_MODULE_QBOOST_DEFINITION_START = 0 ,
        WLAN_MODULE_QBOOST_DBGID_WLAN_PEER_NOT_FOUND ,
        WLAN_MODULE_QBOOST_DEFINITION_END ,                   
    } WLAN_MODULE_QBOOST_T;

    typedef enum {
        WLAN_MODULE_CACHEMGR_DEFINITION_START = 0 ,
        WLAN_MODULE_CACHEMGR_DEFINITION_END ,                   
    } WLAN_MODULE_CACHEMGR_T;

    typedef enum {
        WLAN_MODULE_HOST_DEFINITION_START = 0 ,
        WLAN_MODULE_HOST_DEFINITION_END ,                   
    } WLAN_MODULE_HOST_T;

/* WMI debug identifier definitions */
    typedef enum {
        WMI_DBGID_DEFINITION_START = 0 ,
        WMI_CMD_RX_XTND_PKT_TOO_SHORT ,
        WMI_EXTENDED_CMD_NOT_HANDLED ,
        WMI_CMD_RX_PKT_TOO_SHORT ,
        WMI_CALLING_WMI_EXTENSION_FN ,
        WMI_CMD_NOT_HANDLED ,
        WMI_IN_SYNC ,
        WMI_TARGET_WMI_SYNC_CMD ,
        WMI_SET_SNR_THRESHOLD_PARAMS ,
        WMI_SET_RSSI_THRESHOLD_PARAMS ,
        WMI_SET_LQ_TRESHOLD_PARAMS ,
        WMI_TARGET_CREATE_PSTREAM_CMD ,
        WMI_WI_DTM_INUSE ,
        WMI_TARGET_DELETE_PSTREAM_CMD ,
        WMI_TARGET_IMPLICIT_DELETE_PSTREAM_CMD ,
        WMI_TARGET_GET_BIT_RATE_CMD ,
        WMI_GET_RATE_MASK_CMD_FIX_RATE_MASK_IS ,
        WMI_TARGET_GET_AVAILABLE_CHANNELS_CMD ,
        WMI_TARGET_GET_TX_PWR_CMD ,
        WMI_FREE_EVBUF_WMIBUF ,
        WMI_FREE_EVBUF_DATABUF ,
        WMI_FREE_EVBUF_BADFLAG ,
        WMI_HTC_RX_ERROR_DATA_PACKET ,
        WMI_HTC_RX_SYNC_PAUSING_FOR_MBOX ,
        WMI_INCORRECT_WMI_DATA_HDR_DROPPING_PKT ,
        WMI_SENDING_READY_EVENT ,
        WMI_SETPOWER_MDOE_TO_MAXPERF ,
        WMI_SETPOWER_MDOE_TO_REC ,
        WMI_BSSINFO_EVENT_FROM ,
        WMI_TARGET_GET_STATS_CMD ,
        WMI_SENDING_SCAN_COMPLETE_EVENT ,
        WMI_SENDING_RSSI_INDB_THRESHOLD_EVENT ,
        WMI_SENDING_RSSI_INDBM_THRESHOLD_EVENT ,
        WMI_SENDING_LINK_QUALITY_THRESHOLD_EVENT ,
        WMI_SENDING_ERROR_REPORT_EVENT ,
        WMI_SENDING_CAC_EVENT ,
        WMI_TARGET_GET_ROAM_TABLE_CMD ,
        WMI_TARGET_GET_ROAM_DATA_CMD ,
        WMI_SENDING_GPIO_INTR_EVENT ,
        WMI_SENDING_GPIO_ACK_EVENT ,
        WMI_SENDING_GPIO_DATA_EVENT ,
        WMI_CMD_RX ,
        WMI_CMD_RX_XTND ,
        WMI_EVENT_SEND ,
        WMI_EVENT_SEND_XTND ,
        WMI_CMD_PARAMS_DUMP_START ,
        WMI_CMD_PARAMS_DUMP_END ,
        WMI_CMD_PARAMS ,
        WMI_EVENT_ALLOC_FAILURE ,
        WMI_DBGID_DCS_PARAM_CMD ,
        WMI_DBGID_DEFINITION_END ,
    } WLAN_MODULE_WMI_T;

/*  PM Message definition*/

    typedef enum {
        PS_STA_DEFINITION_START = 0 ,
        PS_STA_PM_ARB_REQUEST ,
        PS_STA_DELIVER_EVENT ,
    } WLAN_MODULE_STA_PWRSAVE_T;


/** RESMGR OCS dbg ids */

    typedef enum {
        RESMGR_OCS_DEFINITION_START = 0 ,
        RESMGR_OCS_ALLOCRAM_SIZE ,
        RESMGR_OCS_RESOURCES ,
        RESMGR_OCS_LINK_CREATE ,
        RESMGR_OCS_LINK_DELETE ,
        RESMGR_OCS_CHREQ_CREATE ,
        RESMGR_OCS_CHREQ_DELETE ,
        RESMGR_OCS_CHREQ_START ,
        RESMGR_OCS_CHREQ_STOP ,
        RESMGR_OCS_SCHEDULER_INVOKED ,
        RESMGR_OCS_CHREQ_GRANT ,
        RESMGR_OCS_CHREQ_COMPLETE ,
        RESMGR_OCS_NEXT_TSFTIME ,
        RESMGR_OCS_TSF_TIMEOUT_US ,
        RESMGR_OCS_CURR_CAT_WINDOW ,
        RESMGR_OCS_CURR_CAT_WINDOW_REQ ,
        RESMGR_OCS_CURR_CAT_WINDOW_TIMESLOT ,
        RESMGR_OCS_CHREQ_RESTART ,
        RESMGR_OCS_CLEANUP_CH_ALLOCATORS ,
        RESMGR_OCS_PURGE_CHREQ ,
        RESMGR_OCS_CH_ALLOCATOR_FREE ,
        RESMGR_OCS_RECOMPUTE_SCHEDULE ,
        RESMGR_OCS_NEW_CAT_WINDOW_REQ ,
        RESMGR_OCS_NEW_CAT_WINDOW_TIMESLOT ,
        RESMGR_OCS_CUR_CH_ALLOC ,
        RESMGR_OCS_WIN_CH_ALLOC ,
        RESMGR_OCS_SCHED_CH_CHANGE ,
        RESMGR_OCS_CONSTRUCT_CAT_WIN ,
        RESMGR_OCS_CHREQ_PREEMPTED ,
        RESMGR_OCS_CH_SWITCH_REQ ,
        RESMGR_OCS_CHANNEL_SWITCHED ,
        RESMGR_OCS_CLEANUP_STALE_REQS ,
        RESMGR_OCS_CHREQ_UPDATE ,
        RESMGR_OCS_REG_NOA_NOTIF ,
        RESMGR_OCS_DEREG_NOA_NOTIF ,
        RESMGR_OCS_GEN_PERIODIC_NOA ,
        RESMGR_OCS_RECAL_QUOTAS ,
        RESMGR_OCS_GRANTED_QUOTA_STATS ,
        RESMGR_OCS_ALLOCATED_QUOTA_STATS ,
        RESMGR_OCS_REQ_QUOTA_STATS ,
        RESMGR_OCS_TRACKING_TIME_FIRED ,
        RESMGR_OCS_DEFINITION_END ,
    } WLAN_MODULE_RESMGR_OCS_T;


/* RESMGR CHNMGR debug ids */

    typedef enum {
        RESMGR_CHMGR_DEFINITION_START = 0 ,
        RESMGR_CHMGR_PAUSE_COMPLETE ,
        RESMGR_CHMGR_CHANNEL_CHANGE ,
        RESMGR_CHMGR_RESUME_COMPLETE ,
        RESMGR_CHMGR_VDEV_PAUSE ,
        RESMGR_CHMGR_VDEV_UNPAUSE ,
        RESMGR_CHMGR_CTS2S_TX_COMP ,
        RESMGR_CHMGR_CFEND_TX_COMP ,
        RESMGR_CHMGR_DEFINITION_END ,
    } WLAN_MODULE_RESMGR_CHAN_MANAGER_T;

/* VDEV manager debug ids */

    typedef enum {
        VDEV_MGR_DEFINITION_START = 0 ,
        VDEV_MGR_BMISS_TIMEOUT ,
        VDEV_MGR_BMISS_DETECTED ,
        VDEV_MGR_BCN_IN_SYNC ,
        VDEV_MGR_AP_KEEPALIVE_IDLE ,
        VDEV_MGR_AP_KEEPALIVE_INACTIVE ,
        VDEV_MGR_AP_KEEPALIVE_UNRESPONSIVE ,
        VDEV_MGR_AP_TBTT_CONFIG ,
        VDEV_MGR_FIRST_BCN_RECEIVED ,
        VDEV_MGR_VDEV_START ,
        VDEV_MGR_VDEV_UP ,
        VDEV_MGR_PEER_AUTHORIZED ,
        VDEV_MGR_OCS_HP_LP_REQ_POSTED ,
        VDEV_MGR_VDEV_START_OCS_HP_REQ_COMPLETE ,
        VDEV_MGR_VDEV_START_OCS_HP_REQ_STOP ,
        VDEV_MGR_HP_START_TIME ,
        VDEV_MGR_FIRST_BMISS_DETECTED ,
        VDEV_MGR_FINAL_BMISS_DETECTED ,
        VDEV_MGR_VDEV_STOP ,
        VDEV_MGR_VDEV_DOWN ,
        VDEV_MGR_VDEV_START_RESP ,
        VDEV_MGR_VDEV_STOP_RESP ,
        VDEV_MGR_VDEV_CREATE ,
        VDEV_MGR_VDEV_DELETE ,
        VDEV_MGR_DEFINITION_END ,
    } WLAN_MODULE_VDEV_MGR_T;

/* WHAL debug identifier definitions */

    typedef enum {
        WHAL_DBGID_DEFINITION_START = 0 ,
        WHAL_ERROR_ANI_CONTROL ,
        WHAL_ERROR_CHIP_TEST1 ,
        WHAL_ERROR_CHIP_TEST2 ,
        WHAL_ERROR_EEPROM_CHECKSUM ,
        WHAL_ERROR_EEPROM_MACADDR ,
        WHAL_ERROR_INTERRUPT_HIU ,
        WHAL_ERROR_KEYCACHE_RESET ,
        WHAL_ERROR_KEYCACHE_SET ,
        WHAL_ERROR_KEYCACHE_TYPE ,
        WHAL_ERROR_KEYCACHE_TKIPENTRY ,
        WHAL_ERROR_KEYCACHE_WEPLENGTH ,
        WHAL_ERROR_PHY_INVALID_CHANNEL ,
        WHAL_ERROR_POWER_AWAKE ,
        WHAL_ERROR_POWER_SET ,
        WHAL_ERROR_RECV_STOPDMA ,
        WHAL_ERROR_RECV_STOPPCU ,
        WHAL_ERROR_RESET_CHANNF1 ,
        WHAL_ERROR_RESET_CHANNF2 ,
        WHAL_ERROR_RESET_PM ,
        WHAL_ERROR_RESET_OFFSETCAL ,
        WHAL_ERROR_RESET_RFGRANT ,
        WHAL_ERROR_RESET_RXFRAME ,
        WHAL_ERROR_RESET_STOPDMA ,
        WHAL_ERROR_RESET_ERRID ,
        WHAL_ERROR_RESET_ADCDCCAL1 ,
        WHAL_ERROR_RESET_ADCDCCAL2 ,
        WHAL_ERROR_RESET_TXIQCAL ,
        WHAL_ERROR_RESET_RXIQCAL ,
        WHAL_ERROR_RESET_CARRIERLEAK ,
        WHAL_ERROR_XMIT_COMPUTE ,
        WHAL_ERROR_XMIT_NOQUEUE ,
        WHAL_ERROR_XMIT_ACTIVEQUEUE ,
        WHAL_ERROR_XMIT_BADTYPE ,
        WHAL_ERROR_XMIT_STOPDMA ,
        WHAL_ERROR_INTERRUPT_BB_PANIC ,
        WHAL_ERROR_PAPRD_MAXGAIN_ABOVE_WINDOW ,
        WHAL_SMARTANT_CONFIGURE ,
        WHAL_SMARTANT_RXANTENNA ,
        WHAL_TX_ENQUEUE,
        WHAL_CAL_SET_CAL_PERIOD,
        WHAL_CAL_PERFORM_CALIBRATION,
        WHAL_DBGID_DEFINITION_END ,
    } WLAN_MODULE_WHAL_T;


    typedef enum {
        COEX_DEBUGID_START = 0,
        BTCOEX_DBG_MCI_1 ,
        BTCOEX_DBG_MCI_2 ,
        BTCOEX_DBG_MCI_3 ,
        BTCOEX_DBG_MCI_4 ,
        BTCOEX_DBG_MCI_5 ,
        BTCOEX_DBG_MCI_6 ,
        BTCOEX_DBG_MCI_7 ,
        BTCOEX_DBG_MCI_8 ,
        BTCOEX_DBG_MCI_9 ,
        BTCOEX_DBG_MCI_10 ,
        COEX_WAL_BTCOEX_INIT ,
        COEX_WAL_PAUSE ,
        COEX_WAL_RESUME ,
        COEX_UPDATE_AFH ,
        COEX_HWQ_EMPTY_CB ,
        COEX_MCI_TIMER_HANDLER  ,
        COEX_MCI_RECOVER ,
        ERROR_COEX_MCI_ISR ,
        ERROR_COEX_MCI_GPM ,
        COEX_ProfileType ,
        COEX_LinkID ,
        COEX_LinkState ,
        COEX_LinkRole ,
        COEX_LinkRate ,
        COEX_VoiceType ,
        COEX_TInterval ,
        COEX_WRetrx ,
        COEX_Attempts ,
        COEX_PerformanceState ,
        COEX_LinkType ,
        COEX_RX_MCI_GPM_VERSION_QUERY ,
        COEX_RX_MCI_GPM_VERSION_RESPONSE ,
        COEX_RX_MCI_GPM_STATUS_QUERY ,
        COEX_STATE_WLAN_VDEV_DOWN ,
        COEX_STATE_WLAN_VDEV_START ,
        COEX_STATE_WLAN_VDEV_CONNECTED ,
        COEX_STATE_WLAN_VDEV_SCAN_STARTED ,
        COEX_STATE_WLAN_VDEV_SCAN_END ,
        COEX_STATE_WLAN_DEFAULT ,
        COEX_CHANNEL_CHANGE ,
        COEX_POWER_CHANGE ,
        COEX_CONFIG_MGR ,
        COEX_TX_MCI_GPM_BT_CAL_REQ ,
        COEX_TX_MCI_GPM_BT_CAL_GRANT ,
        COEX_TX_MCI_GPM_BT_CAL_DONE ,
        COEX_TX_MCI_GPM_WLAN_CAL_REQ ,
        COEX_TX_MCI_GPM_WLAN_CAL_GRANT              ,
        COEX_TX_MCI_GPM_WLAN_CAL_DONE               ,
        COEX_TX_MCI_GPM_BT_DEBUG                    ,
        COEX_TX_MCI_GPM_VERSION_QUERY               ,
        COEX_TX_MCI_GPM_VERSION_RESPONSE            ,
        COEX_TX_MCI_GPM_STATUS_QUERY                ,
        COEX_TX_MCI_GPM_HALT_BT_GPM                 ,
        COEX_TX_MCI_GPM_WLAN_CHANNELS               ,
        COEX_TX_MCI_GPM_BT_PROFILE_INFO             ,
        COEX_TX_MCI_GPM_BT_STATUS_UPDATE            ,
        COEX_TX_MCI_GPM_BT_UPDATE_FLAGS             ,
        COEX_TX_MCI_GPM_UNKNOWN                     ,
        COEX_TX_MCI_SYS_WAKING                      ,
        COEX_TX_MCI_LNA_TAKE                        ,
        COEX_TX_MCI_LNA_TRANS                       ,
        COEX_TX_MCI_SYS_SLEEPING                    ,
        COEX_TX_MCI_REQ_WAKE                        ,
        COEX_TX_MCI_REMOTE_RESET                    ,
        COEX_TX_MCI_TYPE_UNKNOWN                    ,
        COEX_WHAL_MCI_RESET                         ,
        COEX_POLL_BT_CAL_DONE_TIMEOUT               ,
        COEX_WHAL_PAUSE                             ,
        COEX_RX_MCI_GPM_BT_CAL_REQ                  ,
        COEX_RX_MCI_GPM_BT_CAL_DONE                 ,
        COEX_RX_MCI_GPM_BT_CAL_GRANT                ,
        COEX_WLAN_CAL_START                         ,
        COEX_WLAN_CAL_RESULT                        ,
        COEX_BtMciState                             ,
        COEX_BtCalState                             ,
        COEX_WlanCalState                           ,
        COEX_RxReqWakeCount                         ,
        COEX_RxRemoteResetCount                     ,
        COEX_RESTART_CAL                            ,
        COEX_SENDMSG_QUEUE                          ,
        COEX_RESETSEQ_LNAINFO_TIMEOUT               ,
        COEX_MCI_ISR_IntRaw                         ,
        COEX_MCI_ISR_Int1Raw                        ,
        COEX_MCI_ISR_RxMsgRaw                       ,
        COEX_WHAL_COEX_RESET                        ,
        COEX_WAL_COEX_INIT                          ,
        COEX_TXRX_CNT_LIMIT_ISR                     ,
        COEX_CH_BUSY                                ,
        COEX_REASSESS_WLAN_STATE                    ,
        COEX_BTCOEX_WLAN_STATE_UPDATE               ,
        COEX_BT_NUM_OF_PROFILES                     ,
        COEX_BT_NUM_OF_HID_PROFILES                 ,
        COEX_BT_NUM_OF_ACL_PROFILES                 ,
        COEX_BT_NUM_OF_HI_ACL_PROFILES              ,
        COEX_BT_NUM_OF_VOICE_PROFILES               ,
        COEX_WLAN_AGGR_LIMIT                        ,
        COEX_BT_LOW_PRIO_BUDGET                     ,
        COEX_BT_HI_PRIO_BUDGET                      ,
        COEX_BT_IDLE_TIME                           ,
        COEX_SET_COEX_WEIGHT                        ,
        COEX_WLAN_WEIGHT_GROUP                      ,
        COEX_BT_WEIGHT_GROUP                        ,
        COEX_BT_INTERVAL_ALLOC                      ,
        COEX_BT_SCHEME                              ,
        COEX_BT_MGR                                 ,
        COEX_BT_SM_ERROR                            ,
        COEX_SYSTEM_UPDATE                          ,
        COEX_LOW_PRIO_LIMIT                         ,
        COEX_HI_PRIO_LIMIT                          ,
        COEX_BT_INTERVAL_START                      ,
        COEX_WLAN_INTERVAL_START                    ,
        COEX_NON_LINK_BUDGET                        ,
        COEX_CONTENTION_MSG                         ,
        COEX_SET_NSS                                ,
        COEX_SELF_GEN_MASK                          ,
        COEX_PROFILE_ERROR                          ,
        COEX_WLAN_INIT                              ,
        COEX_BEACON_MISS                            ,
        COEX_BEACON_OK                              ,
        COEX_BTCOEX_SCAN_ACTIVITY                   ,
        COEX_SCAN_ACTIVITY                          ,
        COEX_FORCE_QUIETTIME                        ,
        COEX_BT_MGR_QUIETTIME                       ,
        COEX_BT_INACTIVITY_TRIGGER                  ,
        COEX_BT_INACTIVITY_REPORTED                 ,
        COEX_TX_MCI_GPM_WLAN_PRIO                   ,
        COEX_TX_MCI_GPM_BT_PAUSE_PROFILE            ,
        COEX_TX_MCI_GPM_WLAN_SET_ACL_INACTIVITY     ,
        COEX_RX_MCI_GPM_BT_ACL_INACTIVITY_REPORT    ,
        COEX_GENERIC_ERROR                          ,
        COEX_RX_RATE_THRESHOLD                      ,
        COEX_RSSI                                   ,
        COEX_WLAN_VDEV_NOTIF_START                  ,
        COEX_WLAN_VDEV_NOTIF_UP                     ,
        COEX_WLAN_VDEV_NOTIF_DOWN                   ,
        COEX_WLAN_VDEV_NOTIF_STOP                   ,
        COEX_WLAN_VDEV_NOTIF_ADD_PEER               ,
        COEX_WLAN_VDEV_NOTIF_DELETE_PEER            ,
        COEX_WLAN_VDEV_NOTIF_CONNECTED_PEER         ,
        COEX_WLAN_VDEV_NOTIF_PAUSE                  ,
        COEX_WLAN_VDEV_NOTIF_UNPAUSED               ,
        COEX_STATE_WLAN_VDEV_PEER_ADD               ,
        COEX_STATE_WLAN_VDEV_CONNECTED_PEER         ,
        COEX_STATE_WLAN_VDEV_DELETE_PEER            ,
        COEX_STATE_WLAN_VDEV_PAUSE                  ,
        COEX_STATE_WLAN_VDEV_UNPAUSED               ,
        COEX_SCAN_CALLBACK                          ,
        COEX_RC_SET_CHAINMASK                       ,
        COEX_DEBUG_ID_END                           ,
    } WLAN_MODULE_COEX_T;

    typedef enum {
        SCAN_START_COMMAND_FAILED = 0,
        SCAN_STOP_COMMAND_FAILED                    ,
        SCAN_EVENT_SEND_FAILED                      ,
        SCAN_ENGINE_START                           ,
        SCAN_ENGINE_CANCEL_COMMAND                  ,
        SCAN_ENGINE_STOP_DUE_TO_TIMEOUT             ,
        SCAN_EVENT_SEND_TO_HOST                     ,
        SCAN_EVENT_ADD                              ,
        SCAN_EVENT_REM                              ,
        SCAN_EVENT_PREEMPTED                        ,
        SCAN_EVENT_RESTARTED                        ,
        SCAN_EVENT_COMPLETED                        ,
        SCAN_START_PARAMS1                          ,
        SCAN_START_PARAMS2                          ,
        SCAN_EVENT_SEND                             ,
    } WLAN_MODULE_SCAN_T;

    typedef enum {
        BEACON_EVENT_SWBA_SEND_FAILED = 0               ,
    } WLAN_MODULE_BEACON_T;

    typedef enum {
        RATECTRL_DBGID_DEFINITION_START = 0         ,
        RATECTRL_DBGID_ASSOC                        ,
        RATECTRL_DBGID_NSS_CHANGE                   ,
        RATECTRL_DBGID_CHAINMASK_ERR                ,
        RATECTRL_DBGID_UNEXPECTED_FRAME             ,
        RATECTRL_DBGID_WAL_RCQUERY                  ,
        RATECTRL_DBGID_WAL_RCUPDATE                 ,
        RATECTRL_DBGID_DEFINITION_END               ,
    } WLAN_MODULE_RATECTRL_T;

    typedef enum {
        AP_PS_DBGID_DEFINITION_START = 0            ,
        AP_PS_DBGID_UPDATE_TIM                      ,
        AP_PS_DBGID_PEER_STATE_CHANGE               ,
        AP_PS_DBGID_PSPOLL                          ,
        AP_PS_DBGID_PEER_CREATE                     ,
        AP_PS_DBGID_PEER_DELETE                     ,
        AP_PS_DBGID_VDEV_CREATE                     ,
        AP_PS_DBGID_VDEV_DELETE                     ,
        AP_PS_DBGID_SYNC_TIM                        ,
        AP_PS_DBGID_NEXT_RESPONSE                   ,
        AP_PS_DBGID_START_SP                        ,
        AP_PS_DBGID_COMPLETED_EOSP                  ,
        AP_PS_DBGID_TRIGGER                         ,
        AP_PS_DBGID_DUPLICATE_TRIGGER               ,
        AP_PS_DBGID_UAPSD_RESPONSE                  ,
        AP_PS_DBGID_SEND_COMPLETE                   ,
        AP_PS_DBGID_SEND_N_COMPLETE                 ,
        AP_PS_DBGID_DETECT_OUT_OF_SYNC_STA          ,
    } WLAN_MODULE_AP_PWRSAVE_T;

    typedef enum {
        MGMT_TXRX_DBGID_DEFINITION_START = 0        ,
        MGMT_TXRX_FORWARD_TO_HOST                   ,
        MGMT_TXRX_MU_GID_MGMT                       ,
        MGMT_TXRX_DBGID_DEFINITION_END              ,
    } WLAN_MODULE_MGMT_TXRX_T;

    typedef enum {
        WAL_DBGID_DEFINITION_START = 0,
        WAL_DBGID_FAST_WAKE_REQUEST                 ,
        WAL_DBGID_FAST_WAKE_RELEASE                 ,
        WAL_DBGID_SET_POWER_STATE                   ,
        WAL_DBGID_CHANNEL_CHANGE_FORCE_RESET        ,
        WAL_DBGID_CHANNEL_CHANGE                    ,
        WAL_DBGID_VDEV_START                        ,
        WAL_DBGID_VDEV_STOP                         ,
        WAL_DBGID_VDEV_UP                           ,
        WAL_DBGID_VDEV_DOWN                         ,
        WAL_DBGID_SW_WDOG_RESET                     ,
        WAL_DBGID_TX_SCH_REGISTER_TIDQ              ,
        WAL_DBGID_TX_SCH_UNREGISTER_TIDQ            ,
        WAL_DBGID_TX_SCH_TICKLE_TIDQ                ,
        WAL_DBGID_XCESS_FAILURES                    ,
        WAL_DBGID_AST_ADD_WDS_ENTRY                 ,
        WAL_DBGID_AST_DEL_WDS_ENTRY                 ,
        WAL_DBGID_AST_WDS_ENTRY_PEER_CHG            ,
        WAL_DBGID_AST_WDS_SRC_LEARN_FAIL            ,
        WAL_DBGID_STA_KICKOUT                       ,
        WAL_DBGID_BAR_TX_FAIL                       ,
        WAL_DBGID_BAR_ALLOC_FAIL                    ,
        WAL_DBGID_LOCAL_DATA_TX_FAIL                ,
        WAL_DBGID_SECURITY_PM4_QUEUED               ,
        WAL_DBGID_SECURITY_GM1_QUEUED               ,
        WAL_DBGID_SECURITY_PM4_SENT                 ,
        WAL_DBGID_SECURITY_ALLOW_DATA               ,
        WAL_DBGID_SECURITY_UCAST_KEY_SET            ,
        WAL_DBGID_SECURITY_MCAST_KEY_SET            ,
        WAL_DBGID_SECURITY_ENCR_EN                  ,
        WAL_DBGID_BB_WDOG_TRIGGERED                 ,
        WAL_DBGID_RX_LOCAL_BUFS_LWM                 ,
        WAL_DBGID_RX_LOCAL_DROP_LARGE_MGMT          ,
        WAL_DBGID_VHT_ILLEGAL_RATE_PHY_ERR_DETECTED ,
        WAL_DBGID_DEV_RESET                         ,
        WAL_DBGID_TX_BA_SETUP                       ,
        WAL_DBGID_RX_BA_SETUP                       ,
        WAL_DBGID_DEV_TX_TIMEOUT                    ,
        WAL_DBGID_DEV_RX_TIMEOUT                    , 
        WAL_DBGID_STA_VDEV_XRETRY                   ,  
        WAL_DBGID_DCS                               ,
        WAL_DBGID_HCM_BIN                           ,
        WAL_DBGID_HCM_BIN_PENALIZE                  ,
        WAL_DBGID_HCM_BIN_DEPENALIZE                ,
        WAL_DBGID_AST_UPDATE_WDS_ENTRY              ,
        WAL_DBGID_PEER_EXT_STATS                    ,
        WAL_DBGID_TX_AC_BUFFER_SET                  ,
        WAL_DBGID_AST_ENTRY_EXIST                   ,
        WAL_DBGID_AST_ENTRY_FULL                    ,
        WAL_DBGID_MGMT_TX_FAIL                      ,
        WAL_DBGID_SET_M4_SENT_MANUALLY              ,
        WAL_DBGID_PROCESS_4_WAY_HANDSHAKE           ,
        WAL_DBGID_SET_HW_FILTER                     ,
        WAL_DBGID_TX_PPDU_COMP_ERR                  ,
        WAL_DBGID_TX_ENC_KEY_DROP                   ,
        WAL_DBGID_PDEV_INFO_PRINT                   ,
        WAL_DBGID_VDEV_INFO_PRINT                   ,
        WAL_DBGID_LTEU_START_MU                     ,
        WAL_DBGID_LTEU_REPORT_MU                    ,
        WAL_DBGID_LTEU_SET_CONFIG1                  ,
        WAL_DBGID_LTEU_SET_CONFIG2                  ,
        WAL_DBGID_LTEU_SET_CONFIG3                  ,
        WAL_DBGID_LTEU_INIT                         ,
        WAL_DBGID_LTEU_MU_IN_PROGRESS               ,
        WAL_DBGID_LTEU_END_MU                       ,
        WAL_DBGID_LTEU_PER_PKT_LOG1                 ,
        WAL_DBGID_LTEU_PER_PKT_LOG2                 ,
        WAL_DBGID_LTEU_PER_PKT_LOG3                 ,
        WAL_DBGID_LTEU_START_MU_PARAMS              ,
        WAL_DBGID_LTEU_PKT_BASIC_MU                 ,
        WAL_DBGID_LTEU_PKT_ADV_MU                   ,
        WAL_DBGID_LTEU_PKT_BSSID_ENTRY              ,
        WAL_DBGID_LTEU_PER_BSSID_MU                 ,
        WAL_DBGID_LTEU_COMPUTED_BSSID_MU            ,
        WAL_DBGID_LTEU_TOTAL_BSSID_MU               ,
        WAL_DBGID_LTEU_HIDDEN_NODE                  ,
        WAL_DBGID_LTEU_REPORT_MU1                   ,
        WAL_DBGID_LTEU_REPORT_MU2                   ,
        WAL_DBGID_LTEU_START_MU_PARAMS1             ,
        WAL_DBGID_LTEU_START_MU_PARAMS2             ,
        WAL_DBGID_LTEU_UPDATE_BSSID_MU              ,
        WAL_DBGID_LTEU_BSSID_INDEX_MU               ,
        WAL_DBGID_LTEU_BSSID_MU_INFO                ,
        WAL_DBGID_LTEU_PKT_BINNING                  ,
        WAL_DBGID_LTEU_PKT_MU_DB_ENTRY              ,
        WAL_DBGID_LTEU_MU_DB_ENTRY1                 ,
        WAL_DBGID_LTEU_MU_DB_ENTRY2                 ,
        WAL_DBGID_RdOrCrOtCtAgSrHgRdsSsAbFoFbFp     ,
        WAL_DBGID_DPD_STATS1                        ,
        WAL_DBGID_DPD_STATS2                        ,
        WAL_DBGID_DPD_STATS3                        ,
        WAL_DBGID_DPD_STATS4                        ,
        WAL_DBGID_DPD_STATS5                        ,
        WAL_DBGID_DPD_STATS6                        ,
        WAL_DBGID_DPD_STATS7                        ,
        WAL_DBGID_DPD_STATS8                        ,
        WAL_DBGID_DPD_STATS9                        ,
        WAL_DBGID_DPD_STATS10                       ,
        WAL_DBGID_DPD_STATS11                       ,
        WAL_DBGID_DPD_STATS12                       ,
        WAL_DBGID_IBF_STATS1                        ,
        WAL_DBGID_IBF_STATS2                        ,
        WAL_DBGID_IBF_STATS3                        ,
        WAL_DBGID_IBF_STATS4                        ,
        WAL_DBGID_IBF_STATS5                        ,
        WAL_DBGID_IBF_STATS6                        ,
        WAL_DBGID_IBF_STATS7                        ,
        WAL_DBGID_TX_TIMEOUT_STATS                  ,
        WAL_DBGID_RST_STATS                         ,
        WAL_DBGID_NF_STATS1                         ,
        WAL_DBGID_NF_STATS2                         ,
        WAL_DBGID_NF_STATS3                         ,
        WAL_DBGID_NF_STATS4                         ,
        WAL_DBGID_NF_STATS5                         ,
        WAL_DBGID_NF_STATS6                         ,
        WAL_DBGID_NF_STATS7                         ,
        WAL_DBGID_DEFINITION_END                    ,
    } WLAN_MODULE_WAL_T;  

    typedef enum {
        ANI_DBGID_POLL = 0                          ,
        ANI_DBGID_CONTROL                            ,
        ANI_DBGID_OFDM_PARAMS                        ,
        ANI_DBGID_CCK_PARAMS                         ,
        ANI_DBGID_RESET                              ,
        ANI_DBGID_RESTART                            ,
        ANI_DBGID_OFDM_LEVEL                         ,
        ANI_DBGID_CCK_LEVEL                          ,
        ANI_DBGID_FIRSTEP                            ,
        ANI_DBGID_CYCPWR                             ,
        ANI_DBGID_MRC_CCK                           ,
        ANI_DBGID_SELF_CORR_LOW                     ,
        ANI_DBGID_ENABLE                            ,
        ANI_DBGID_CURRENT_LEVEL                     ,
        ANI_DBGID_POLL_PERIOD                       ,
        ANI_DBGID_LISTEN_PERIOD                     ,
        ANI_DBGID_OFDM_LEVEL_CFG                    ,
        ANI_DBGID_CCK_LEVEL_CFG                     ,
    } WLAN_MODULE_ANI_T;

/* OFFLOAD Manager Debugids*/

    typedef enum {
        OFFLOAD_MGR_DBGID_DEFINITION_START = 0         ,
        OFFLOADMGR_REGISTER_OFFLOAD                    ,
        OFFLOADMGR_DEREGISTER_OFFLOAD                  ,
        OFFLOADMGR_NO_REG_DATA_HANDLERS                ,
        OFFLOADMGR_NO_REG_EVENT_HANDLERS               ,
        OFFLOADMGR_REG_OFFLOAD_FAILED                  ,
        OFFLOADMGR_DBGID_DEFINITION_END                ,
    } WLAN_MODULE_OFFLOAD_T;

/*Resource Debug IDs*/

    typedef enum {
        RESOURCE_DBGID_DEFINITION_START = 0         ,
        RESOURCE_PEER_ALLOC                         ,
        RESOURCE_PEER_FREE                          ,
        RESOURCE_PEER_ALLOC_WAL_PEER                ,
        RESOURCE_DBGID_DEFINITION_END               ,
    } WLAN_MODULE_RESOURCE_T;

    typedef enum {
/* DCS debug IDs*/
        WLAN_DCS_DBGID_INIT = 0                     ,
        WLAN_DCS_DBGID_WMI_CWINT                    ,
        WLAN_DCS_DBGID_TIMER                        ,
        WLAN_DCS_DBGID_CMDG                         ,
        WLAN_DCS_DBGID_CMDS                         ,
        WLAN_DCS_DBGID_DINIT                        ,
    } WLAN_MODULE_DCS_T;

    typedef enum {
/*P2P Module ids*/
        P2P_DBGID_DEFINITION_START = 0                      ,
        P2P_DEV_REGISTER                                    ,
        P2P_HANDLE_NOA                                      ,
        P2P_UPDATE_SCHEDULE_OPPS                            ,
        P2P_UPDATE_SCHEDULE                                 ,
        P2P_UPDATE_START_TIME                               ,
        P2P_UPDATE_START_TIME_DIFF_TSF32                    ,
        P2P_UPDATE_START_TIME_FINAL                         ,
        P2P_SETUP_SCHEDULE_TIMER                            ,
        P2P_PROCESS_SCHEDULE_AFTER_CALC                     ,
        P2P_PROCESS_SCHEDULE_STARTED_TIMER                  ,
        P2P_CALC_SCHEDULES_FIRST_CALL_ALL_NEXT_EVENT        ,
        P2P_CALC_SCHEDULES_FIRST_VALUE                      ,
        P2P_CALC_SCHEDULES_EARLIEST_NEXT_EVENT              ,
        P2P_CALC_SCHEDULES_SANITY_COUNT                     ,
        P2P_CALC_SCHEDULES_CALL_ALL_NEXT_EVENT_FROM_WHILE_LOOP ,
        P2P_CALC_SCHEDULES_TIMEOUT_1                        ,
        P2P_CALC_SCHEDULES_TIMEOUT_2                        ,
        P2P_FIND_ALL_NEXT_EVENTS_REQ_EXPIRED                ,
        P2P_FIND_ALL_NEXT_EVENTS_REQ_ACTIVE                 ,
        P2P_FIND_NEXT_EVENT_REQ_NOT_STARTED                 ,
        P2P_FIND_NEXT_EVENT_REQ_COMPLETE_NON_PERIODIC       ,
        P2P_FIND_NEXT_EVENT_IN_MID_OF_NOA                   ,
        P2P_FIND_NEXT_EVENT_REQ_COMPLETE                    ,
        P2P_SCHEDULE_TIMEOUT                                ,
        P2P_CALC_SCHEDULES_ENTER                            ,
        P2P_PROCESS_SCHEDULE_ENTER                          ,
        P2P_FIND_ALL_NEXT_EVENTS_INDIVIDUAL_REQ_AFTER_CHANGE    ,
        P2P_FIND_ALL_NEXT_EVENTS_INDIVIDUAL_REQ_BEFORE_CHANGE   ,
        P2P_FIND_ALL_NEXT_EVENTS_ENTER                      ,
        P2P_FIND_NEXT_EVENT_ENTER                           ,
        P2P_NOA_GO_PRESENT                                  ,
        P2P_NOA_GO_ABSENT                                   ,
        P2P_GO_NOA_NOTIF                                    ,
        P2P_GO_TBTT_OFFSET                                  ,
        P2P_GO_GET_NOA_INFO                                 ,
        P2P_DBGID_DEFINITION_END                            ,
    } WLAN_MODULE_P2P_T;


//CSA modules DBGIDs
    typedef enum {
        CSA_DBGID_DEFINITION_START = 0,
        CSA_OFFLOAD_POOL_INIT ,
        CSA_OFFLOAD_REGISTER_VDEV ,
        CSA_OFFLOAD_DEREGISTER_VDEV ,
        CSA_DEREGISTER_VDEV_ERROR ,
        CSA_OFFLOAD_BEACON_RECEIVED ,
        CSA_OFFLOAD_BEACON_CSA_RECV ,
        CSA_OFFLOAD_CSA_RECV_ERROR_IE ,
        CSA_OFFLOAD_CSA_TIMER_ERROR ,
        CSA_OFFLOAD_CSA_TIMER_EXP ,
        CSA_OFFLOAD_WMI_EVENT_ERROR ,
        CSA_OFFLOAD_WMI_EVENT_SENT ,
        CSA_OFFLOAD_WMI_CHANSWITCH_RECV ,
    } WLAN_MODULE_CSA_T;

/* Chatter module DBGIDs */
    typedef enum {
        WLAN_CHATTER_DBGID_DEFINITION_START = 0,
        WLAN_CHATTER_ENTER ,
        WLAN_CHATTER_EXIT ,
        WLAN_CHATTER_FILTER_HIT ,
        WLAN_CHATTER_FILTER_MISS ,
        WLAN_CHATTER_FILTER_FULL ,
        WLAN_CHATTER_FILTER_TM_ADJ  ,
        WLAN_CHATTER_DBGID_DEFINITION_END ,
    } WLAN_MODULE_CHATTER_T;

    typedef enum {
        WOW_DBGID_DEFINITION_START = 0,
        WOW_ENABLE_CMDID ,
        WOW_RECV_DATA_PKT ,
        WOW_WAKE_HOST_DATA ,
        WOW_RECV_MGMT ,
        WOW_WAKE_HOST_MGMT ,
        WOW_RECV_EVENT ,
        WOW_WAKE_HOST_EVENT , 
        WOW_INIT ,
        WOW_RECV_MAGIC_PKT ,
        WOW_RECV_BITMAP_PATTERN ,
    } WLAN_MODULE_WOW_T;

    /* RTT module DBGIDs, needs to be continguous for python script to work */
    typedef enum {
        RTT_CALL_FLOW = 0,
        RTT_REQ_SUB_TYPE,
        RTT_MEAS_REQ_HEAD,
        RTT_MEAS_REQ_BODY,
        RTT_INIT_GLOBAL_STATE,
        RTT_REPORT,
        RTT_ERROR_REPORT,
        RTT_TIMER_STOP,
        RTT_SEND_TM_FRAME,
        RTT_V3_RESP_CNT,
        RTT_V3_RESP_FINISH,
        RTT_CHANNEL_SWITCH_REQ,
        RTT_CHANNEL_SWITCH_GRANT,
        RTT_CHANNEL_SWITCH_COMPLETE,
        RTT_CHANNEL_SWITCH_PREEMPT,
        RTT_CHANNEL_SWITCH_STOP,
        RTT_TIMER_START,
        RTT_FTM_PARAM_INFO,
        RTT_RX_TM_FRAME,
        RTT_INITR_TSTAMP,
        RTT_RSPDR_TSTAMP,
        RTT_TX_COMP_STATUS,
        RTT_ERROR_WMI_EVENT
    } WLAN_MODULE_RTT_T;

    /* HOSTQ debug ids */
    typedef enum {
        HOSTQ_HOST_PARAM_NUMPEER = 0,
        HOSTQ_HOST_PARAM_NUMTID  = 1,
        HOSTQ_HOST_PARAM_HOSTADDR = 2,
    } WLAN_MODULE_HOSTQ_T; 

    /* Prefetch module id */
    typedef enum {
        WAL_DBGID_PFSCHED_SCH_CMD,
        WAL_DBGID_PFSCHED_USER_INFO,
    } WLAN_MODULE_PFSCHED_T;

    typedef enum {
        WLAN_DEBUG_MODULE_DBGID_START = 0,
        WLAN_DEBUG_DBGID_PEER,
        WLAN_DEBUG_DBGID_PDEV,
        WLAN_DEBUG_DBGID_VDEV,
        WLAN_DEBUG_MODULE_DBGID_END,
    } WLAN_MODULE_DEBUG_T;

    typedef enum {
        AP_CABQ_MCAST_DEFINITION_START = 0,
        AP_CABQ_MCAST_DEFINITION_END,
    } WLAN_MODULE_AP_CABQ_MCAST_T;
 
    /* DEBUG_PEER SUB COMMANDS */
    typedef enum {
        WMI_PEER_DBGCMD_DBGLOG_ID_1 = 0xa1,
        WMI_PEER_DBGCMD_DBGLOG_ID_2 = 0xa2,
        WMI_PEER_DBGCMD_DBGLOG_ID_3 = 0xa3,
        WMI_PEER_DBGCMD_DBGLOG_ID_4 = 0xa4,
        WMI_PEER_DBGCMD_DBGLOG_ID_5 = 0xa5,
        WMI_PEER_DBGCMD_DBGLOG_ID_6 = 0xa6,
        WMI_PEER_DBGCMD_DBGLOG_ID_254 = 0xdcba,
        WMI_PEER_DBGCMD_DBGLOG_ID_255 = 0xabcd,
    } WLAN_MODULE_PEER_DEBUG_T;

    /* FTM DEBUG LOG MESSAGES */
    typedef enum {
       FTM_DBGID_DEFINITION_START = 0,
       FTM_DBGID_WMI_INIT_RECVD,
       FTM_DBGID_SETUP_CHANNEL,
       FTM_DBGID_DEFINITION_END,
    } WLAN_MODULE_FTM_T;

    /* TDLS module DBGIDs */
    typedef enum {
       TDLS_DBGID_DEFINITION_START,
       TDLS_DBGID_VDEV_CREATE,
       TDLS_DBGID_VDEV_DELETE,
       TDLS_DBGID_ENABLED_PASSIVE,
       TDLS_DBGID_ENABLED_ACTIVE,
       TDLS_DBGID_DISABLED,
       TDLS_DBGID_CONNTRACK_TIMER,
       TDLS_DBGID_WAL_SET,
       TDLS_DBGID_WAL_GET,
       TDLS_DBGID_WAL_PEER_UPDATE_SET,
       TDLS_DBGID_WAL_PEER_UPDATE_EVT,
       TDLS_DBGID_WAL_VDEV_CREATE,
       TDLS_DBGID_WAL_VDEV_DELETE,
       TDLS_DBGID_WLAN_EVENT,
       TDLS_DBGID_WLAN_PEER_UPDATE_SET,
       TDLS_DBGID_PEER_EVT_DRP_THRESH,
       TDLS_DBGID_PEER_EVT_DRP_RATE,
       TDLS_DBGID_PEER_EVT_DRP_RSSI,
       TDLS_DBGID_PEER_EVT_DISCOVER,
       TDLS_DBGID_PEER_EVT_DELETE,
       TDLS_DBGID_PEER_CAP_UPDATE,
       TDLS_DBGID_UAPSD_SEND_PTI_FRAME,
       TDLS_DBGID_UAPSD_SEND_PTI_FRAME2PEER,
       TDLS_DBGID_UAPSD_START_PTR_TIMER,
       TDLS_DBGID_UAPSD_CANCEL_PTR_TIMER,
       TDLS_DBGID_UAPSD_PTR_TIMER_TIMEOUT,
       TDLS_DBGID_UAPSD_STA_PS_EVENT_HANDLER,
       TDLS_DBGID_UAPSD_PEER_EVENT_HANDLER,
       TDLS_DBGID_UAPSD_PS_DEFAULT_SETTINGS,
       TDLS_DBGID_UAPSD_GENERIC,
    } WLAN_MODULE_TDLS_T;

#ifdef __cplusplus
}
#endif

/* maintain legacy module names for backwards-compatibility */
#define WLAN_DEBUG_MODULE_T WLAN_MODULE_DEBUG_T
#define WLAN_PEER_DEBUG_T WLAN_MODULE_PEER_DEBUG_T

#endif /* _DBGLOG_ID_H_ */
