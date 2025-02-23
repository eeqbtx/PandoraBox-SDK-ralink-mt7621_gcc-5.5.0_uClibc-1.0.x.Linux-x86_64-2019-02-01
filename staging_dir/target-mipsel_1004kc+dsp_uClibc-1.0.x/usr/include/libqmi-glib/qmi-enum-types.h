
/* Generated data (by glib-mkenums) */

#ifndef __LIBQMI_GLIB_ENUM_TYPES_H__
#define __LIBQMI_GLIB_ENUM_TYPES_H__
#include "qmi-enums.h"
#include "qmi-enums-wds.h"
#include "qmi-enums-dms.h"
#include "qmi-enums-nas.h"
#include "qmi-enums-wms.h"
#include "qmi-enums-pds.h"
#include "qmi-enums-pdc.h"
#include "qmi-enums-pbm.h"
#include "qmi-enums-uim.h"
#include "qmi-enums-oma.h"
#include "qmi-enums-wda.h"
#include "qmi-enums-voice.h"
#include "qmi-enums-loc.h"
#include "qmi-device.h"

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "../../../src/libqmi-glib/qmi-enums.h" */
GType qmi_service_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_SERVICE (qmi_service_get_type ())

/* Define type-specific symbols */
#define __QMI_SERVICE_IS_ENUM__

#if defined __QMI_SERVICE_IS_ENUM__
/**
 * qmi_service_get_string:
 * @val: a QmiService.
 *
 * Gets the nickname string for the #QmiService specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_service_get_string (QmiService val);
#endif

#if defined __QMI_SERVICE_IS_FLAGS__
/**
 * qmi_service_build_string_from_mask:
 * @mask: bitmask of QmiService values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiService in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_service_build_string_from_mask (QmiService mask);
#endif

GType qmi_data_endpoint_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DATA_ENDPOINT_TYPE (qmi_data_endpoint_type_get_type ())

/* Define type-specific symbols */
#define __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__

#if defined __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
/**
 * qmi_data_endpoint_type_get_string:
 * @val: a QmiDataEndpointType.
 *
 * Gets the nickname string for the #QmiDataEndpointType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_data_endpoint_type_get_string (QmiDataEndpointType val);
#endif

#if defined __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
/**
 * qmi_data_endpoint_type_build_string_from_mask:
 * @mask: bitmask of QmiDataEndpointType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDataEndpointType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_data_endpoint_type_build_string_from_mask (QmiDataEndpointType mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-wds.h" */
GType qmi_wds_ip_family_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_IP_FAMILY (qmi_wds_ip_family_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_IP_FAMILY_IS_ENUM__

#if defined __QMI_WDS_IP_FAMILY_IS_ENUM__
/**
 * qmi_wds_ip_family_get_string:
 * @val: a QmiWdsIpFamily.
 *
 * Gets the nickname string for the #QmiWdsIpFamily specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_ip_family_get_string (QmiWdsIpFamily val);
#endif

#if defined __QMI_WDS_IP_FAMILY_IS_FLAGS__
/**
 * qmi_wds_ip_family_build_string_from_mask:
 * @mask: bitmask of QmiWdsIpFamily values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsIpFamily in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_ip_family_build_string_from_mask (QmiWdsIpFamily mask);
#endif

GType qmi_wds_technology_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_TECHNOLOGY_PREFERENCE (qmi_wds_technology_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_TECHNOLOGY_PREFERENCE_IS_FLAGS__

#if defined __QMI_WDS_TECHNOLOGY_PREFERENCE_IS_ENUM__
/**
 * qmi_wds_technology_preference_get_string:
 * @val: a QmiWdsTechnologyPreference.
 *
 * Gets the nickname string for the #QmiWdsTechnologyPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_technology_preference_get_string (QmiWdsTechnologyPreference val);
#endif

#if defined __QMI_WDS_TECHNOLOGY_PREFERENCE_IS_FLAGS__
/**
 * qmi_wds_technology_preference_build_string_from_mask:
 * @mask: bitmask of QmiWdsTechnologyPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsTechnologyPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_technology_preference_build_string_from_mask (QmiWdsTechnologyPreference mask);
#endif

GType qmi_wds_extended_technology_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_EXTENDED_TECHNOLOGY_PREFERENCE (qmi_wds_extended_technology_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_EXTENDED_TECHNOLOGY_PREFERENCE_IS_ENUM__

#if defined __QMI_WDS_EXTENDED_TECHNOLOGY_PREFERENCE_IS_ENUM__
/**
 * qmi_wds_extended_technology_preference_get_string:
 * @val: a QmiWdsExtendedTechnologyPreference.
 *
 * Gets the nickname string for the #QmiWdsExtendedTechnologyPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_extended_technology_preference_get_string (QmiWdsExtendedTechnologyPreference val);
#endif

#if defined __QMI_WDS_EXTENDED_TECHNOLOGY_PREFERENCE_IS_FLAGS__
/**
 * qmi_wds_extended_technology_preference_build_string_from_mask:
 * @mask: bitmask of QmiWdsExtendedTechnologyPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsExtendedTechnologyPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_extended_technology_preference_build_string_from_mask (QmiWdsExtendedTechnologyPreference mask);
#endif

GType qmi_wds_call_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_CALL_TYPE (qmi_wds_call_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_CALL_TYPE_IS_ENUM__

#if defined __QMI_WDS_CALL_TYPE_IS_ENUM__
/**
 * qmi_wds_call_type_get_string:
 * @val: a QmiWdsCallType.
 *
 * Gets the nickname string for the #QmiWdsCallType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_call_type_get_string (QmiWdsCallType val);
#endif

#if defined __QMI_WDS_CALL_TYPE_IS_FLAGS__
/**
 * qmi_wds_call_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsCallType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsCallType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_call_type_build_string_from_mask (QmiWdsCallType mask);
#endif

GType qmi_wds_call_end_reason_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_CALL_END_REASON (qmi_wds_call_end_reason_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_CALL_END_REASON_IS_ENUM__

#if defined __QMI_WDS_CALL_END_REASON_IS_ENUM__
/**
 * qmi_wds_call_end_reason_get_string:
 * @val: a QmiWdsCallEndReason.
 *
 * Gets the nickname string for the #QmiWdsCallEndReason specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_call_end_reason_get_string (QmiWdsCallEndReason val);
#endif

#if defined __QMI_WDS_CALL_END_REASON_IS_FLAGS__
/**
 * qmi_wds_call_end_reason_build_string_from_mask:
 * @mask: bitmask of QmiWdsCallEndReason values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsCallEndReason in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_call_end_reason_build_string_from_mask (QmiWdsCallEndReason mask);
#endif

GType qmi_wds_verbose_call_end_reason_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_TYPE (qmi_wds_verbose_call_end_reason_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_TYPE_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_TYPE_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_type_get_string:
 * @val: a QmiWdsVerboseCallEndReasonType.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_type_get_string (QmiWdsVerboseCallEndReasonType val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_TYPE_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_type_build_string_from_mask (QmiWdsVerboseCallEndReasonType mask);
#endif

GType qmi_wds_verbose_call_end_reason_mip_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_MIP (qmi_wds_verbose_call_end_reason_mip_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_MIP_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_MIP_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_mip_get_string:
 * @val: a QmiWdsVerboseCallEndReasonMip.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonMip specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_mip_get_string (QmiWdsVerboseCallEndReasonMip val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_MIP_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_mip_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonMip values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonMip in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_mip_build_string_from_mask (QmiWdsVerboseCallEndReasonMip mask);
#endif

GType qmi_wds_verbose_call_end_reason_internal_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_INTERNAL (qmi_wds_verbose_call_end_reason_internal_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_INTERNAL_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_INTERNAL_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_internal_get_string:
 * @val: a QmiWdsVerboseCallEndReasonInternal.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonInternal specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_internal_get_string (QmiWdsVerboseCallEndReasonInternal val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_INTERNAL_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_internal_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonInternal values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonInternal in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_internal_build_string_from_mask (QmiWdsVerboseCallEndReasonInternal mask);
#endif

GType qmi_wds_verbose_call_end_reason_cm_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_CM (qmi_wds_verbose_call_end_reason_cm_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_CM_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_CM_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_cm_get_string:
 * @val: a QmiWdsVerboseCallEndReasonCm.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonCm specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_cm_get_string (QmiWdsVerboseCallEndReasonCm val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_CM_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_cm_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonCm values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonCm in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_cm_build_string_from_mask (QmiWdsVerboseCallEndReasonCm mask);
#endif

GType qmi_wds_verbose_call_end_reason_3gpp_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_3GPP (qmi_wds_verbose_call_end_reason_3gpp_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_3GPP_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_3GPP_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_3gpp_get_string:
 * @val: a QmiWdsVerboseCallEndReason3gpp.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReason3gpp specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_3gpp_get_string (QmiWdsVerboseCallEndReason3gpp val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_3GPP_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_3gpp_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReason3gpp values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReason3gpp in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_3gpp_build_string_from_mask (QmiWdsVerboseCallEndReason3gpp mask);
#endif

GType qmi_wds_verbose_call_end_reason_ppp_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_PPP (qmi_wds_verbose_call_end_reason_ppp_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_PPP_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_PPP_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_ppp_get_string:
 * @val: a QmiWdsVerboseCallEndReasonPpp.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonPpp specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_ppp_get_string (QmiWdsVerboseCallEndReasonPpp val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_PPP_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_ppp_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonPpp values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonPpp in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_ppp_build_string_from_mask (QmiWdsVerboseCallEndReasonPpp mask);
#endif

GType qmi_wds_verbose_call_end_reason_ehrpd_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_EHRPD (qmi_wds_verbose_call_end_reason_ehrpd_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_EHRPD_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_EHRPD_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_ehrpd_get_string:
 * @val: a QmiWdsVerboseCallEndReasonEhrpd.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonEhrpd specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_ehrpd_get_string (QmiWdsVerboseCallEndReasonEhrpd val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_EHRPD_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_ehrpd_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonEhrpd values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonEhrpd in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_ehrpd_build_string_from_mask (QmiWdsVerboseCallEndReasonEhrpd mask);
#endif

GType qmi_wds_verbose_call_end_reason_ipv6_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_VERBOSE_CALL_END_REASON_IPV6 (qmi_wds_verbose_call_end_reason_ipv6_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_VERBOSE_CALL_END_REASON_IPV6_IS_ENUM__

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_IPV6_IS_ENUM__
/**
 * qmi_wds_verbose_call_end_reason_ipv6_get_string:
 * @val: a QmiWdsVerboseCallEndReasonIpv6.
 *
 * Gets the nickname string for the #QmiWdsVerboseCallEndReasonIpv6 specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_verbose_call_end_reason_ipv6_get_string (QmiWdsVerboseCallEndReasonIpv6 val);
#endif

#if defined __QMI_WDS_VERBOSE_CALL_END_REASON_IPV6_IS_FLAGS__
/**
 * qmi_wds_verbose_call_end_reason_ipv6_build_string_from_mask:
 * @mask: bitmask of QmiWdsVerboseCallEndReasonIpv6 values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsVerboseCallEndReasonIpv6 in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_verbose_call_end_reason_ipv6_build_string_from_mask (QmiWdsVerboseCallEndReasonIpv6 mask);
#endif

GType qmi_wds_connection_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_CONNECTION_STATUS (qmi_wds_connection_status_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_CONNECTION_STATUS_IS_ENUM__

#if defined __QMI_WDS_CONNECTION_STATUS_IS_ENUM__
/**
 * qmi_wds_connection_status_get_string:
 * @val: a QmiWdsConnectionStatus.
 *
 * Gets the nickname string for the #QmiWdsConnectionStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_connection_status_get_string (QmiWdsConnectionStatus val);
#endif

#if defined __QMI_WDS_CONNECTION_STATUS_IS_FLAGS__
/**
 * qmi_wds_connection_status_build_string_from_mask:
 * @mask: bitmask of QmiWdsConnectionStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsConnectionStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_connection_status_build_string_from_mask (QmiWdsConnectionStatus mask);
#endif

GType qmi_wds_data_bearer_technology_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DATA_BEARER_TECHNOLOGY (qmi_wds_data_bearer_technology_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DATA_BEARER_TECHNOLOGY_IS_ENUM__

#if defined __QMI_WDS_DATA_BEARER_TECHNOLOGY_IS_ENUM__
/**
 * qmi_wds_data_bearer_technology_get_string:
 * @val: a QmiWdsDataBearerTechnology.
 *
 * Gets the nickname string for the #QmiWdsDataBearerTechnology specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_data_bearer_technology_get_string (QmiWdsDataBearerTechnology val);
#endif

#if defined __QMI_WDS_DATA_BEARER_TECHNOLOGY_IS_FLAGS__
/**
 * qmi_wds_data_bearer_technology_build_string_from_mask:
 * @mask: bitmask of QmiWdsDataBearerTechnology values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDataBearerTechnology in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_data_bearer_technology_build_string_from_mask (QmiWdsDataBearerTechnology mask);
#endif

GType qmi_wds_network_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_NETWORK_TYPE (qmi_wds_network_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_NETWORK_TYPE_IS_ENUM__

#if defined __QMI_WDS_NETWORK_TYPE_IS_ENUM__
/**
 * qmi_wds_network_type_get_string:
 * @val: a QmiWdsNetworkType.
 *
 * Gets the nickname string for the #QmiWdsNetworkType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_network_type_get_string (QmiWdsNetworkType val);
#endif

#if defined __QMI_WDS_NETWORK_TYPE_IS_FLAGS__
/**
 * qmi_wds_network_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsNetworkType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsNetworkType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_network_type_build_string_from_mask (QmiWdsNetworkType mask);
#endif

GType qmi_wds_data_system_network_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DATA_SYSTEM_NETWORK_TYPE (qmi_wds_data_system_network_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DATA_SYSTEM_NETWORK_TYPE_IS_ENUM__

#if defined __QMI_WDS_DATA_SYSTEM_NETWORK_TYPE_IS_ENUM__
/**
 * qmi_wds_data_system_network_type_get_string:
 * @val: a QmiWdsDataSystemNetworkType.
 *
 * Gets the nickname string for the #QmiWdsDataSystemNetworkType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_data_system_network_type_get_string (QmiWdsDataSystemNetworkType val);
#endif

#if defined __QMI_WDS_DATA_SYSTEM_NETWORK_TYPE_IS_FLAGS__
/**
 * qmi_wds_data_system_network_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsDataSystemNetworkType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDataSystemNetworkType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_data_system_network_type_build_string_from_mask (QmiWdsDataSystemNetworkType mask);
#endif

GType qmi_wds_data_system_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DATA_SYSTEM (qmi_wds_data_system_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DATA_SYSTEM_IS_ENUM__

#if defined __QMI_WDS_DATA_SYSTEM_IS_ENUM__
/**
 * qmi_wds_data_system_get_string:
 * @val: a QmiWdsDataSystem.
 *
 * Gets the nickname string for the #QmiWdsDataSystem specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_data_system_get_string (QmiWdsDataSystem val);
#endif

#if defined __QMI_WDS_DATA_SYSTEM_IS_FLAGS__
/**
 * qmi_wds_data_system_build_string_from_mask:
 * @mask: bitmask of QmiWdsDataSystem values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDataSystem in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_data_system_build_string_from_mask (QmiWdsDataSystem mask);
#endif

GType qmi_wds_rat_3gpp2_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_RAT_3GPP2 (qmi_wds_rat_3gpp2_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_RAT_3GPP2_IS_FLAGS__

#if defined __QMI_WDS_RAT_3GPP2_IS_ENUM__
/**
 * qmi_wds_rat_3gpp2_get_string:
 * @val: a QmiWdsRat3gpp2.
 *
 * Gets the nickname string for the #QmiWdsRat3gpp2 specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_rat_3gpp2_get_string (QmiWdsRat3gpp2 val);
#endif

#if defined __QMI_WDS_RAT_3GPP2_IS_FLAGS__
/**
 * qmi_wds_rat_3gpp2_build_string_from_mask:
 * @mask: bitmask of QmiWdsRat3gpp2 values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsRat3gpp2 in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_rat_3gpp2_build_string_from_mask (QmiWdsRat3gpp2 mask);
#endif

GType qmi_wds_rat_3gpp_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_RAT_3GPP (qmi_wds_rat_3gpp_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_RAT_3GPP_IS_FLAGS__

#if defined __QMI_WDS_RAT_3GPP_IS_ENUM__
/**
 * qmi_wds_rat_3gpp_get_string:
 * @val: a QmiWdsRat3gpp.
 *
 * Gets the nickname string for the #QmiWdsRat3gpp specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_rat_3gpp_get_string (QmiWdsRat3gpp val);
#endif

#if defined __QMI_WDS_RAT_3GPP_IS_FLAGS__
/**
 * qmi_wds_rat_3gpp_build_string_from_mask:
 * @mask: bitmask of QmiWdsRat3gpp values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsRat3gpp in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_rat_3gpp_build_string_from_mask (QmiWdsRat3gpp mask);
#endif

GType qmi_wds_so_cdma1x_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SO_CDMA1X (qmi_wds_so_cdma1x_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SO_CDMA1X_IS_FLAGS__

#if defined __QMI_WDS_SO_CDMA1X_IS_ENUM__
/**
 * qmi_wds_so_cdma1x_get_string:
 * @val: a QmiWdsSoCdma1x.
 *
 * Gets the nickname string for the #QmiWdsSoCdma1x specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_so_cdma1x_get_string (QmiWdsSoCdma1x val);
#endif

#if defined __QMI_WDS_SO_CDMA1X_IS_FLAGS__
/**
 * qmi_wds_so_cdma1x_build_string_from_mask:
 * @mask: bitmask of QmiWdsSoCdma1x values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSoCdma1x in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_so_cdma1x_build_string_from_mask (QmiWdsSoCdma1x mask);
#endif

GType qmi_wds_so_evdo_rev0_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SO_EVDO_REV0 (qmi_wds_so_evdo_rev0_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SO_EVDO_REV0_IS_FLAGS__

#if defined __QMI_WDS_SO_EVDO_REV0_IS_ENUM__
/**
 * qmi_wds_so_evdo_rev0_get_string:
 * @val: a QmiWdsSoEvdoRev0.
 *
 * Gets the nickname string for the #QmiWdsSoEvdoRev0 specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_so_evdo_rev0_get_string (QmiWdsSoEvdoRev0 val);
#endif

#if defined __QMI_WDS_SO_EVDO_REV0_IS_FLAGS__
/**
 * qmi_wds_so_evdo_rev0_build_string_from_mask:
 * @mask: bitmask of QmiWdsSoEvdoRev0 values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSoEvdoRev0 in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_so_evdo_rev0_build_string_from_mask (QmiWdsSoEvdoRev0 mask);
#endif

GType qmi_wds_so_evdo_reva_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SO_EVDO_REVA (qmi_wds_so_evdo_reva_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SO_EVDO_REVA_IS_FLAGS__

#if defined __QMI_WDS_SO_EVDO_REVA_IS_ENUM__
/**
 * qmi_wds_so_evdo_reva_get_string:
 * @val: a QmiWdsSoEvdoRevA.
 *
 * Gets the nickname string for the #QmiWdsSoEvdoRevA specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_so_evdo_reva_get_string (QmiWdsSoEvdoRevA val);
#endif

#if defined __QMI_WDS_SO_EVDO_REVA_IS_FLAGS__
/**
 * qmi_wds_so_evdo_reva_build_string_from_mask:
 * @mask: bitmask of QmiWdsSoEvdoRevA values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSoEvdoRevA in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_so_evdo_reva_build_string_from_mask (QmiWdsSoEvdoRevA mask);
#endif

GType qmi_wds_so_evdo_revb_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SO_EVDO_REVB (qmi_wds_so_evdo_revb_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SO_EVDO_REVB_IS_FLAGS__

#if defined __QMI_WDS_SO_EVDO_REVB_IS_ENUM__
/**
 * qmi_wds_so_evdo_revb_get_string:
 * @val: a QmiWdsSoEvdoRevB.
 *
 * Gets the nickname string for the #QmiWdsSoEvdoRevB specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_so_evdo_revb_get_string (QmiWdsSoEvdoRevB val);
#endif

#if defined __QMI_WDS_SO_EVDO_REVB_IS_FLAGS__
/**
 * qmi_wds_so_evdo_revb_build_string_from_mask:
 * @mask: bitmask of QmiWdsSoEvdoRevB values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSoEvdoRevB in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_so_evdo_revb_build_string_from_mask (QmiWdsSoEvdoRevB mask);
#endif

GType qmi_wds_get_current_settings_requested_settings_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_GET_CURRENT_SETTINGS_REQUESTED_SETTINGS (qmi_wds_get_current_settings_requested_settings_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_GET_CURRENT_SETTINGS_REQUESTED_SETTINGS_IS_FLAGS__

#if defined __QMI_WDS_GET_CURRENT_SETTINGS_REQUESTED_SETTINGS_IS_ENUM__
/**
 * qmi_wds_get_current_settings_requested_settings_get_string:
 * @val: a QmiWdsGetCurrentSettingsRequestedSettings.
 *
 * Gets the nickname string for the #QmiWdsGetCurrentSettingsRequestedSettings specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_get_current_settings_requested_settings_get_string (QmiWdsGetCurrentSettingsRequestedSettings val);
#endif

#if defined __QMI_WDS_GET_CURRENT_SETTINGS_REQUESTED_SETTINGS_IS_FLAGS__
/**
 * qmi_wds_get_current_settings_requested_settings_build_string_from_mask:
 * @mask: bitmask of QmiWdsGetCurrentSettingsRequestedSettings values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsGetCurrentSettingsRequestedSettings in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_get_current_settings_requested_settings_build_string_from_mask (QmiWdsGetCurrentSettingsRequestedSettings mask);
#endif

GType qmi_wds_pdp_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_PDP_TYPE (qmi_wds_pdp_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_PDP_TYPE_IS_ENUM__

#if defined __QMI_WDS_PDP_TYPE_IS_ENUM__
/**
 * qmi_wds_pdp_type_get_string:
 * @val: a QmiWdsPdpType.
 *
 * Gets the nickname string for the #QmiWdsPdpType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_pdp_type_get_string (QmiWdsPdpType val);
#endif

#if defined __QMI_WDS_PDP_TYPE_IS_FLAGS__
/**
 * qmi_wds_pdp_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsPdpType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsPdpType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_pdp_type_build_string_from_mask (QmiWdsPdpType mask);
#endif

GType qmi_wds_traffic_class_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_TRAFFIC_CLASS (qmi_wds_traffic_class_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_TRAFFIC_CLASS_IS_ENUM__

#if defined __QMI_WDS_TRAFFIC_CLASS_IS_ENUM__
/**
 * qmi_wds_traffic_class_get_string:
 * @val: a QmiWdsTrafficClass.
 *
 * Gets the nickname string for the #QmiWdsTrafficClass specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_traffic_class_get_string (QmiWdsTrafficClass val);
#endif

#if defined __QMI_WDS_TRAFFIC_CLASS_IS_FLAGS__
/**
 * qmi_wds_traffic_class_build_string_from_mask:
 * @mask: bitmask of QmiWdsTrafficClass values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsTrafficClass in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_traffic_class_build_string_from_mask (QmiWdsTrafficClass mask);
#endif

GType qmi_wds_authentication_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_AUTHENTICATION (qmi_wds_authentication_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_AUTHENTICATION_IS_FLAGS__

#if defined __QMI_WDS_AUTHENTICATION_IS_ENUM__
/**
 * qmi_wds_authentication_get_string:
 * @val: a QmiWdsAuthentication.
 *
 * Gets the nickname string for the #QmiWdsAuthentication specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_authentication_get_string (QmiWdsAuthentication val);
#endif

#if defined __QMI_WDS_AUTHENTICATION_IS_FLAGS__
/**
 * qmi_wds_authentication_build_string_from_mask:
 * @mask: bitmask of QmiWdsAuthentication values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsAuthentication in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_authentication_build_string_from_mask (QmiWdsAuthentication mask);
#endif

GType qmi_wds_profile_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_PROFILE_TYPE (qmi_wds_profile_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_PROFILE_TYPE_IS_ENUM__

#if defined __QMI_WDS_PROFILE_TYPE_IS_ENUM__
/**
 * qmi_wds_profile_type_get_string:
 * @val: a QmiWdsProfileType.
 *
 * Gets the nickname string for the #QmiWdsProfileType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_profile_type_get_string (QmiWdsProfileType val);
#endif

#if defined __QMI_WDS_PROFILE_TYPE_IS_FLAGS__
/**
 * qmi_wds_profile_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsProfileType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsProfileType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_profile_type_build_string_from_mask (QmiWdsProfileType mask);
#endif

GType qmi_wds_delivery_order_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DELIVERY_ORDER (qmi_wds_delivery_order_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DELIVERY_ORDER_IS_ENUM__

#if defined __QMI_WDS_DELIVERY_ORDER_IS_ENUM__
/**
 * qmi_wds_delivery_order_get_string:
 * @val: a QmiWdsDeliveryOrder.
 *
 * Gets the nickname string for the #QmiWdsDeliveryOrder specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_delivery_order_get_string (QmiWdsDeliveryOrder val);
#endif

#if defined __QMI_WDS_DELIVERY_ORDER_IS_FLAGS__
/**
 * qmi_wds_delivery_order_build_string_from_mask:
 * @mask: bitmask of QmiWdsDeliveryOrder values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDeliveryOrder in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_delivery_order_build_string_from_mask (QmiWdsDeliveryOrder mask);
#endif

GType qmi_wds_sdu_error_ratio_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SDU_ERROR_RATIO (qmi_wds_sdu_error_ratio_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SDU_ERROR_RATIO_IS_ENUM__

#if defined __QMI_WDS_SDU_ERROR_RATIO_IS_ENUM__
/**
 * qmi_wds_sdu_error_ratio_get_string:
 * @val: a QmiWdsSduErrorRatio.
 *
 * Gets the nickname string for the #QmiWdsSduErrorRatio specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_sdu_error_ratio_get_string (QmiWdsSduErrorRatio val);
#endif

#if defined __QMI_WDS_SDU_ERROR_RATIO_IS_FLAGS__
/**
 * qmi_wds_sdu_error_ratio_build_string_from_mask:
 * @mask: bitmask of QmiWdsSduErrorRatio values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSduErrorRatio in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_sdu_error_ratio_build_string_from_mask (QmiWdsSduErrorRatio mask);
#endif

GType qmi_wds_sdu_residual_bit_error_ratio_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SDU_RESIDUAL_BIT_ERROR_RATIO (qmi_wds_sdu_residual_bit_error_ratio_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SDU_RESIDUAL_BIT_ERROR_RATIO_IS_ENUM__

#if defined __QMI_WDS_SDU_RESIDUAL_BIT_ERROR_RATIO_IS_ENUM__
/**
 * qmi_wds_sdu_residual_bit_error_ratio_get_string:
 * @val: a QmiWdsSduResidualBitErrorRatio.
 *
 * Gets the nickname string for the #QmiWdsSduResidualBitErrorRatio specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_sdu_residual_bit_error_ratio_get_string (QmiWdsSduResidualBitErrorRatio val);
#endif

#if defined __QMI_WDS_SDU_RESIDUAL_BIT_ERROR_RATIO_IS_FLAGS__
/**
 * qmi_wds_sdu_residual_bit_error_ratio_build_string_from_mask:
 * @mask: bitmask of QmiWdsSduResidualBitErrorRatio values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSduResidualBitErrorRatio in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_sdu_residual_bit_error_ratio_build_string_from_mask (QmiWdsSduResidualBitErrorRatio mask);
#endif

GType qmi_wds_sdu_erroneous_delivery_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SDU_ERRONEOUS_DELIVERY (qmi_wds_sdu_erroneous_delivery_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SDU_ERRONEOUS_DELIVERY_IS_ENUM__

#if defined __QMI_WDS_SDU_ERRONEOUS_DELIVERY_IS_ENUM__
/**
 * qmi_wds_sdu_erroneous_delivery_get_string:
 * @val: a QmiWdsSduErroneousDelivery.
 *
 * Gets the nickname string for the #QmiWdsSduErroneousDelivery specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_sdu_erroneous_delivery_get_string (QmiWdsSduErroneousDelivery val);
#endif

#if defined __QMI_WDS_SDU_ERRONEOUS_DELIVERY_IS_FLAGS__
/**
 * qmi_wds_sdu_erroneous_delivery_build_string_from_mask:
 * @mask: bitmask of QmiWdsSduErroneousDelivery values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSduErroneousDelivery in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_sdu_erroneous_delivery_build_string_from_mask (QmiWdsSduErroneousDelivery mask);
#endif

GType qmi_wds_packet_statistics_mask_flag_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_PACKET_STATISTICS_MASK_FLAG (qmi_wds_packet_statistics_mask_flag_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_PACKET_STATISTICS_MASK_FLAG_IS_FLAGS__

#if defined __QMI_WDS_PACKET_STATISTICS_MASK_FLAG_IS_ENUM__
/**
 * qmi_wds_packet_statistics_mask_flag_get_string:
 * @val: a QmiWdsPacketStatisticsMaskFlag.
 *
 * Gets the nickname string for the #QmiWdsPacketStatisticsMaskFlag specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_packet_statistics_mask_flag_get_string (QmiWdsPacketStatisticsMaskFlag val);
#endif

#if defined __QMI_WDS_PACKET_STATISTICS_MASK_FLAG_IS_FLAGS__
/**
 * qmi_wds_packet_statistics_mask_flag_build_string_from_mask:
 * @mask: bitmask of QmiWdsPacketStatisticsMaskFlag values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsPacketStatisticsMaskFlag in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_packet_statistics_mask_flag_build_string_from_mask (QmiWdsPacketStatisticsMaskFlag mask);
#endif

GType qmi_wds_ds_profile_error_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DS_PROFILE_ERROR (qmi_wds_ds_profile_error_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DS_PROFILE_ERROR_IS_ENUM__

#if defined __QMI_WDS_DS_PROFILE_ERROR_IS_ENUM__
/**
 * qmi_wds_ds_profile_error_get_string:
 * @val: a QmiWdsDsProfileError.
 *
 * Gets the nickname string for the #QmiWdsDsProfileError specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_ds_profile_error_get_string (QmiWdsDsProfileError val);
#endif

#if defined __QMI_WDS_DS_PROFILE_ERROR_IS_FLAGS__
/**
 * qmi_wds_ds_profile_error_build_string_from_mask:
 * @mask: bitmask of QmiWdsDsProfileError values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDsProfileError in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_ds_profile_error_build_string_from_mask (QmiWdsDsProfileError mask);
#endif

GType qmi_wds_autoconnect_setting_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_AUTOCONNECT_SETTING (qmi_wds_autoconnect_setting_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_AUTOCONNECT_SETTING_IS_ENUM__

#if defined __QMI_WDS_AUTOCONNECT_SETTING_IS_ENUM__
/**
 * qmi_wds_autoconnect_setting_get_string:
 * @val: a QmiWdsAutoconnectSetting.
 *
 * Gets the nickname string for the #QmiWdsAutoconnectSetting specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_autoconnect_setting_get_string (QmiWdsAutoconnectSetting val);
#endif

#if defined __QMI_WDS_AUTOCONNECT_SETTING_IS_FLAGS__
/**
 * qmi_wds_autoconnect_setting_build_string_from_mask:
 * @mask: bitmask of QmiWdsAutoconnectSetting values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsAutoconnectSetting in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_autoconnect_setting_build_string_from_mask (QmiWdsAutoconnectSetting mask);
#endif

GType qmi_wds_autoconnect_setting_roaming_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_AUTOCONNECT_SETTING_ROAMING (qmi_wds_autoconnect_setting_roaming_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_AUTOCONNECT_SETTING_ROAMING_IS_ENUM__

#if defined __QMI_WDS_AUTOCONNECT_SETTING_ROAMING_IS_ENUM__
/**
 * qmi_wds_autoconnect_setting_roaming_get_string:
 * @val: a QmiWdsAutoconnectSettingRoaming.
 *
 * Gets the nickname string for the #QmiWdsAutoconnectSettingRoaming specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_autoconnect_setting_roaming_get_string (QmiWdsAutoconnectSettingRoaming val);
#endif

#if defined __QMI_WDS_AUTOCONNECT_SETTING_ROAMING_IS_FLAGS__
/**
 * qmi_wds_autoconnect_setting_roaming_build_string_from_mask:
 * @mask: bitmask of QmiWdsAutoconnectSettingRoaming values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsAutoconnectSettingRoaming in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_autoconnect_setting_roaming_build_string_from_mask (QmiWdsAutoconnectSettingRoaming mask);
#endif

GType qmi_wds_set_event_report_transfer_statistics_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_SET_EVENT_REPORT_TRANSFER_STATISTICS (qmi_wds_set_event_report_transfer_statistics_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_SET_EVENT_REPORT_TRANSFER_STATISTICS_IS_FLAGS__

#if defined __QMI_WDS_SET_EVENT_REPORT_TRANSFER_STATISTICS_IS_ENUM__
/**
 * qmi_wds_set_event_report_transfer_statistics_get_string:
 * @val: a QmiWdsSetEventReportTransferStatistics.
 *
 * Gets the nickname string for the #QmiWdsSetEventReportTransferStatistics specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_set_event_report_transfer_statistics_get_string (QmiWdsSetEventReportTransferStatistics val);
#endif

#if defined __QMI_WDS_SET_EVENT_REPORT_TRANSFER_STATISTICS_IS_FLAGS__
/**
 * qmi_wds_set_event_report_transfer_statistics_build_string_from_mask:
 * @mask: bitmask of QmiWdsSetEventReportTransferStatistics values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsSetEventReportTransferStatistics in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_set_event_report_transfer_statistics_build_string_from_mask (QmiWdsSetEventReportTransferStatistics mask);
#endif

GType qmi_wds_dormancy_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DORMANCY_STATUS (qmi_wds_dormancy_status_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DORMANCY_STATUS_IS_ENUM__

#if defined __QMI_WDS_DORMANCY_STATUS_IS_ENUM__
/**
 * qmi_wds_dormancy_status_get_string:
 * @val: a QmiWdsDormancyStatus.
 *
 * Gets the nickname string for the #QmiWdsDormancyStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_dormancy_status_get_string (QmiWdsDormancyStatus val);
#endif

#if defined __QMI_WDS_DORMANCY_STATUS_IS_FLAGS__
/**
 * qmi_wds_dormancy_status_build_string_from_mask:
 * @mask: bitmask of QmiWdsDormancyStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDormancyStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_dormancy_status_build_string_from_mask (QmiWdsDormancyStatus mask);
#endif

GType qmi_wds_data_call_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DATA_CALL_STATUS (qmi_wds_data_call_status_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DATA_CALL_STATUS_IS_ENUM__

#if defined __QMI_WDS_DATA_CALL_STATUS_IS_ENUM__
/**
 * qmi_wds_data_call_status_get_string:
 * @val: a QmiWdsDataCallStatus.
 *
 * Gets the nickname string for the #QmiWdsDataCallStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_data_call_status_get_string (QmiWdsDataCallStatus val);
#endif

#if defined __QMI_WDS_DATA_CALL_STATUS_IS_FLAGS__
/**
 * qmi_wds_data_call_status_build_string_from_mask:
 * @mask: bitmask of QmiWdsDataCallStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDataCallStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_data_call_status_build_string_from_mask (QmiWdsDataCallStatus mask);
#endif

GType qmi_wds_data_call_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_DATA_CALL_TYPE (qmi_wds_data_call_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_DATA_CALL_TYPE_IS_ENUM__

#if defined __QMI_WDS_DATA_CALL_TYPE_IS_ENUM__
/**
 * qmi_wds_data_call_type_get_string:
 * @val: a QmiWdsDataCallType.
 *
 * Gets the nickname string for the #QmiWdsDataCallType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_data_call_type_get_string (QmiWdsDataCallType val);
#endif

#if defined __QMI_WDS_DATA_CALL_TYPE_IS_FLAGS__
/**
 * qmi_wds_data_call_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsDataCallType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsDataCallType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_data_call_type_build_string_from_mask (QmiWdsDataCallType mask);
#endif

GType qmi_wds_tethered_call_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_TETHERED_CALL_TYPE (qmi_wds_tethered_call_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_TETHERED_CALL_TYPE_IS_ENUM__

#if defined __QMI_WDS_TETHERED_CALL_TYPE_IS_ENUM__
/**
 * qmi_wds_tethered_call_type_get_string:
 * @val: a QmiWdsTetheredCallType.
 *
 * Gets the nickname string for the #QmiWdsTetheredCallType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_tethered_call_type_get_string (QmiWdsTetheredCallType val);
#endif

#if defined __QMI_WDS_TETHERED_CALL_TYPE_IS_FLAGS__
/**
 * qmi_wds_tethered_call_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsTetheredCallType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsTetheredCallType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_tethered_call_type_build_string_from_mask (QmiWdsTetheredCallType mask);
#endif

GType qmi_wds_radio_access_technology_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_RADIO_ACCESS_TECHNOLOGY (qmi_wds_radio_access_technology_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_RADIO_ACCESS_TECHNOLOGY_IS_ENUM__

#if defined __QMI_WDS_RADIO_ACCESS_TECHNOLOGY_IS_ENUM__
/**
 * qmi_wds_radio_access_technology_get_string:
 * @val: a QmiWdsRadioAccessTechnology.
 *
 * Gets the nickname string for the #QmiWdsRadioAccessTechnology specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_radio_access_technology_get_string (QmiWdsRadioAccessTechnology val);
#endif

#if defined __QMI_WDS_RADIO_ACCESS_TECHNOLOGY_IS_FLAGS__
/**
 * qmi_wds_radio_access_technology_build_string_from_mask:
 * @mask: bitmask of QmiWdsRadioAccessTechnology values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsRadioAccessTechnology in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_radio_access_technology_build_string_from_mask (QmiWdsRadioAccessTechnology mask);
#endif

GType qmi_wds_extended_data_bearer_technology_3gpp_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP (qmi_wds_extended_data_bearer_technology_3gpp_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP_IS_FLAGS__

#if defined __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP_IS_ENUM__
/**
 * qmi_wds_extended_data_bearer_technology_3gpp_get_string:
 * @val: a QmiWdsExtendedDataBearerTechnology3gpp.
 *
 * Gets the nickname string for the #QmiWdsExtendedDataBearerTechnology3gpp specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_extended_data_bearer_technology_3gpp_get_string (QmiWdsExtendedDataBearerTechnology3gpp val);
#endif

#if defined __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP_IS_FLAGS__
/**
 * qmi_wds_extended_data_bearer_technology_3gpp_build_string_from_mask:
 * @mask: bitmask of QmiWdsExtendedDataBearerTechnology3gpp values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsExtendedDataBearerTechnology3gpp in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_extended_data_bearer_technology_3gpp_build_string_from_mask (QmiWdsExtendedDataBearerTechnology3gpp mask);
#endif

GType qmi_wds_extended_data_bearer_technology_3gpp2_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP2 (qmi_wds_extended_data_bearer_technology_3gpp2_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP2_IS_FLAGS__

#if defined __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP2_IS_ENUM__
/**
 * qmi_wds_extended_data_bearer_technology_3gpp2_get_string:
 * @val: a QmiWdsExtendedDataBearerTechnology3gpp2.
 *
 * Gets the nickname string for the #QmiWdsExtendedDataBearerTechnology3gpp2 specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_extended_data_bearer_technology_3gpp2_get_string (QmiWdsExtendedDataBearerTechnology3gpp2 val);
#endif

#if defined __QMI_WDS_EXTENDED_DATA_BEARER_TECHNOLOGY_3GPP2_IS_FLAGS__
/**
 * qmi_wds_extended_data_bearer_technology_3gpp2_build_string_from_mask:
 * @mask: bitmask of QmiWdsExtendedDataBearerTechnology3gpp2 values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsExtendedDataBearerTechnology3gpp2 in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_extended_data_bearer_technology_3gpp2_build_string_from_mask (QmiWdsExtendedDataBearerTechnology3gpp2 mask);
#endif

GType qmi_wds_pdp_header_compression_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_PDP_HEADER_COMPRESSION_TYPE (qmi_wds_pdp_header_compression_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_PDP_HEADER_COMPRESSION_TYPE_IS_ENUM__

#if defined __QMI_WDS_PDP_HEADER_COMPRESSION_TYPE_IS_ENUM__
/**
 * qmi_wds_pdp_header_compression_type_get_string:
 * @val: a QmiWdsPdpHeaderCompressionType.
 *
 * Gets the nickname string for the #QmiWdsPdpHeaderCompressionType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_pdp_header_compression_type_get_string (QmiWdsPdpHeaderCompressionType val);
#endif

#if defined __QMI_WDS_PDP_HEADER_COMPRESSION_TYPE_IS_FLAGS__
/**
 * qmi_wds_pdp_header_compression_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsPdpHeaderCompressionType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsPdpHeaderCompressionType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_pdp_header_compression_type_build_string_from_mask (QmiWdsPdpHeaderCompressionType mask);
#endif

GType qmi_wds_pdp_data_compression_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_PDP_DATA_COMPRESSION_TYPE (qmi_wds_pdp_data_compression_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_PDP_DATA_COMPRESSION_TYPE_IS_ENUM__

#if defined __QMI_WDS_PDP_DATA_COMPRESSION_TYPE_IS_ENUM__
/**
 * qmi_wds_pdp_data_compression_type_get_string:
 * @val: a QmiWdsPdpDataCompressionType.
 *
 * Gets the nickname string for the #QmiWdsPdpDataCompressionType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_pdp_data_compression_type_get_string (QmiWdsPdpDataCompressionType val);
#endif

#if defined __QMI_WDS_PDP_DATA_COMPRESSION_TYPE_IS_FLAGS__
/**
 * qmi_wds_pdp_data_compression_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsPdpDataCompressionType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsPdpDataCompressionType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_pdp_data_compression_type_build_string_from_mask (QmiWdsPdpDataCompressionType mask);
#endif

GType qmi_wds_qos_class_identifier_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_QOS_CLASS_IDENTIFIER (qmi_wds_qos_class_identifier_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_QOS_CLASS_IDENTIFIER_IS_ENUM__

#if defined __QMI_WDS_QOS_CLASS_IDENTIFIER_IS_ENUM__
/**
 * qmi_wds_qos_class_identifier_get_string:
 * @val: a QmiWdsQosClassIdentifier.
 *
 * Gets the nickname string for the #QmiWdsQosClassIdentifier specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_qos_class_identifier_get_string (QmiWdsQosClassIdentifier val);
#endif

#if defined __QMI_WDS_QOS_CLASS_IDENTIFIER_IS_FLAGS__
/**
 * qmi_wds_qos_class_identifier_build_string_from_mask:
 * @mask: bitmask of QmiWdsQosClassIdentifier values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsQosClassIdentifier in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_qos_class_identifier_build_string_from_mask (QmiWdsQosClassIdentifier mask);
#endif

GType qmi_wds_client_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDS_CLIENT_TYPE (qmi_wds_client_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WDS_CLIENT_TYPE_IS_ENUM__

#if defined __QMI_WDS_CLIENT_TYPE_IS_ENUM__
/**
 * qmi_wds_client_type_get_string:
 * @val: a QmiWdsClientType.
 *
 * Gets the nickname string for the #QmiWdsClientType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wds_client_type_get_string (QmiWdsClientType val);
#endif

#if defined __QMI_WDS_CLIENT_TYPE_IS_FLAGS__
/**
 * qmi_wds_client_type_build_string_from_mask:
 * @mask: bitmask of QmiWdsClientType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdsClientType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wds_client_type_build_string_from_mask (QmiWdsClientType mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-dms.h" */
GType qmi_dms_data_service_capability_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_DATA_SERVICE_CAPABILITY (qmi_dms_data_service_capability_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_DATA_SERVICE_CAPABILITY_IS_ENUM__

#if defined __QMI_DMS_DATA_SERVICE_CAPABILITY_IS_ENUM__
/**
 * qmi_dms_data_service_capability_get_string:
 * @val: a QmiDmsDataServiceCapability.
 *
 * Gets the nickname string for the #QmiDmsDataServiceCapability specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_data_service_capability_get_string (QmiDmsDataServiceCapability val);
#endif

#if defined __QMI_DMS_DATA_SERVICE_CAPABILITY_IS_FLAGS__
/**
 * qmi_dms_data_service_capability_build_string_from_mask:
 * @mask: bitmask of QmiDmsDataServiceCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsDataServiceCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_data_service_capability_build_string_from_mask (QmiDmsDataServiceCapability mask);
#endif

GType qmi_dms_sim_capability_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_SIM_CAPABILITY (qmi_dms_sim_capability_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_SIM_CAPABILITY_IS_ENUM__

#if defined __QMI_DMS_SIM_CAPABILITY_IS_ENUM__
/**
 * qmi_dms_sim_capability_get_string:
 * @val: a QmiDmsSimCapability.
 *
 * Gets the nickname string for the #QmiDmsSimCapability specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_sim_capability_get_string (QmiDmsSimCapability val);
#endif

#if defined __QMI_DMS_SIM_CAPABILITY_IS_FLAGS__
/**
 * qmi_dms_sim_capability_build_string_from_mask:
 * @mask: bitmask of QmiDmsSimCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsSimCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_sim_capability_build_string_from_mask (QmiDmsSimCapability mask);
#endif

GType qmi_dms_radio_interface_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_RADIO_INTERFACE (qmi_dms_radio_interface_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_RADIO_INTERFACE_IS_ENUM__

#if defined __QMI_DMS_RADIO_INTERFACE_IS_ENUM__
/**
 * qmi_dms_radio_interface_get_string:
 * @val: a QmiDmsRadioInterface.
 *
 * Gets the nickname string for the #QmiDmsRadioInterface specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_radio_interface_get_string (QmiDmsRadioInterface val);
#endif

#if defined __QMI_DMS_RADIO_INTERFACE_IS_FLAGS__
/**
 * qmi_dms_radio_interface_build_string_from_mask:
 * @mask: bitmask of QmiDmsRadioInterface values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsRadioInterface in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_radio_interface_build_string_from_mask (QmiDmsRadioInterface mask);
#endif

GType qmi_dms_power_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_POWER_STATE (qmi_dms_power_state_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_POWER_STATE_IS_FLAGS__

#if defined __QMI_DMS_POWER_STATE_IS_ENUM__
/**
 * qmi_dms_power_state_get_string:
 * @val: a QmiDmsPowerState.
 *
 * Gets the nickname string for the #QmiDmsPowerState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_power_state_get_string (QmiDmsPowerState val);
#endif

#if defined __QMI_DMS_POWER_STATE_IS_FLAGS__
/**
 * qmi_dms_power_state_build_string_from_mask:
 * @mask: bitmask of QmiDmsPowerState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsPowerState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_power_state_build_string_from_mask (QmiDmsPowerState mask);
#endif

GType qmi_dms_uim_pin_id_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_UIM_PIN_ID (qmi_dms_uim_pin_id_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_UIM_PIN_ID_IS_ENUM__

#if defined __QMI_DMS_UIM_PIN_ID_IS_ENUM__
/**
 * qmi_dms_uim_pin_id_get_string:
 * @val: a QmiDmsUimPinId.
 *
 * Gets the nickname string for the #QmiDmsUimPinId specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_uim_pin_id_get_string (QmiDmsUimPinId val);
#endif

#if defined __QMI_DMS_UIM_PIN_ID_IS_FLAGS__
/**
 * qmi_dms_uim_pin_id_build_string_from_mask:
 * @mask: bitmask of QmiDmsUimPinId values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsUimPinId in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_uim_pin_id_build_string_from_mask (QmiDmsUimPinId mask);
#endif

GType qmi_dms_uim_pin_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_UIM_PIN_STATUS (qmi_dms_uim_pin_status_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_UIM_PIN_STATUS_IS_ENUM__

#if defined __QMI_DMS_UIM_PIN_STATUS_IS_ENUM__
/**
 * qmi_dms_uim_pin_status_get_string:
 * @val: a QmiDmsUimPinStatus.
 *
 * Gets the nickname string for the #QmiDmsUimPinStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_uim_pin_status_get_string (QmiDmsUimPinStatus val);
#endif

#if defined __QMI_DMS_UIM_PIN_STATUS_IS_FLAGS__
/**
 * qmi_dms_uim_pin_status_build_string_from_mask:
 * @mask: bitmask of QmiDmsUimPinStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsUimPinStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_uim_pin_status_build_string_from_mask (QmiDmsUimPinStatus mask);
#endif

GType qmi_dms_operating_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_OPERATING_MODE (qmi_dms_operating_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_OPERATING_MODE_IS_ENUM__

#if defined __QMI_DMS_OPERATING_MODE_IS_ENUM__
/**
 * qmi_dms_operating_mode_get_string:
 * @val: a QmiDmsOperatingMode.
 *
 * Gets the nickname string for the #QmiDmsOperatingMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_operating_mode_get_string (QmiDmsOperatingMode val);
#endif

#if defined __QMI_DMS_OPERATING_MODE_IS_FLAGS__
/**
 * qmi_dms_operating_mode_build_string_from_mask:
 * @mask: bitmask of QmiDmsOperatingMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsOperatingMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_operating_mode_build_string_from_mask (QmiDmsOperatingMode mask);
#endif

GType qmi_dms_offline_reason_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_OFFLINE_REASON (qmi_dms_offline_reason_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_OFFLINE_REASON_IS_FLAGS__

#if defined __QMI_DMS_OFFLINE_REASON_IS_ENUM__
/**
 * qmi_dms_offline_reason_get_string:
 * @val: a QmiDmsOfflineReason.
 *
 * Gets the nickname string for the #QmiDmsOfflineReason specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_offline_reason_get_string (QmiDmsOfflineReason val);
#endif

#if defined __QMI_DMS_OFFLINE_REASON_IS_FLAGS__
/**
 * qmi_dms_offline_reason_build_string_from_mask:
 * @mask: bitmask of QmiDmsOfflineReason values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsOfflineReason in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_offline_reason_build_string_from_mask (QmiDmsOfflineReason mask);
#endif

GType qmi_dms_time_source_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_TIME_SOURCE (qmi_dms_time_source_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_TIME_SOURCE_IS_ENUM__

#if defined __QMI_DMS_TIME_SOURCE_IS_ENUM__
/**
 * qmi_dms_time_source_get_string:
 * @val: a QmiDmsTimeSource.
 *
 * Gets the nickname string for the #QmiDmsTimeSource specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_time_source_get_string (QmiDmsTimeSource val);
#endif

#if defined __QMI_DMS_TIME_SOURCE_IS_FLAGS__
/**
 * qmi_dms_time_source_build_string_from_mask:
 * @mask: bitmask of QmiDmsTimeSource values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsTimeSource in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_time_source_build_string_from_mask (QmiDmsTimeSource mask);
#endif

GType qmi_dms_activation_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_ACTIVATION_STATE (qmi_dms_activation_state_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_ACTIVATION_STATE_IS_ENUM__

#if defined __QMI_DMS_ACTIVATION_STATE_IS_ENUM__
/**
 * qmi_dms_activation_state_get_string:
 * @val: a QmiDmsActivationState.
 *
 * Gets the nickname string for the #QmiDmsActivationState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_activation_state_get_string (QmiDmsActivationState val);
#endif

#if defined __QMI_DMS_ACTIVATION_STATE_IS_FLAGS__
/**
 * qmi_dms_activation_state_build_string_from_mask:
 * @mask: bitmask of QmiDmsActivationState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsActivationState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_activation_state_build_string_from_mask (QmiDmsActivationState mask);
#endif

GType qmi_dms_uim_facility_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_UIM_FACILITY (qmi_dms_uim_facility_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_UIM_FACILITY_IS_ENUM__

#if defined __QMI_DMS_UIM_FACILITY_IS_ENUM__
/**
 * qmi_dms_uim_facility_get_string:
 * @val: a QmiDmsUimFacility.
 *
 * Gets the nickname string for the #QmiDmsUimFacility specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_uim_facility_get_string (QmiDmsUimFacility val);
#endif

#if defined __QMI_DMS_UIM_FACILITY_IS_FLAGS__
/**
 * qmi_dms_uim_facility_build_string_from_mask:
 * @mask: bitmask of QmiDmsUimFacility values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsUimFacility in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_uim_facility_build_string_from_mask (QmiDmsUimFacility mask);
#endif

GType qmi_dms_uim_facility_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_UIM_FACILITY_STATE (qmi_dms_uim_facility_state_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_UIM_FACILITY_STATE_IS_ENUM__

#if defined __QMI_DMS_UIM_FACILITY_STATE_IS_ENUM__
/**
 * qmi_dms_uim_facility_state_get_string:
 * @val: a QmiDmsUimFacilityState.
 *
 * Gets the nickname string for the #QmiDmsUimFacilityState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_uim_facility_state_get_string (QmiDmsUimFacilityState val);
#endif

#if defined __QMI_DMS_UIM_FACILITY_STATE_IS_FLAGS__
/**
 * qmi_dms_uim_facility_state_build_string_from_mask:
 * @mask: bitmask of QmiDmsUimFacilityState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsUimFacilityState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_uim_facility_state_build_string_from_mask (QmiDmsUimFacilityState mask);
#endif

GType qmi_dms_uim_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_UIM_STATE (qmi_dms_uim_state_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_UIM_STATE_IS_ENUM__

#if defined __QMI_DMS_UIM_STATE_IS_ENUM__
/**
 * qmi_dms_uim_state_get_string:
 * @val: a QmiDmsUimState.
 *
 * Gets the nickname string for the #QmiDmsUimState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_uim_state_get_string (QmiDmsUimState val);
#endif

#if defined __QMI_DMS_UIM_STATE_IS_FLAGS__
/**
 * qmi_dms_uim_state_build_string_from_mask:
 * @mask: bitmask of QmiDmsUimState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsUimState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_uim_state_build_string_from_mask (QmiDmsUimState mask);
#endif

GType qmi_dms_time_reference_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_TIME_REFERENCE_TYPE (qmi_dms_time_reference_type_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_TIME_REFERENCE_TYPE_IS_ENUM__

#if defined __QMI_DMS_TIME_REFERENCE_TYPE_IS_ENUM__
/**
 * qmi_dms_time_reference_type_get_string:
 * @val: a QmiDmsTimeReferenceType.
 *
 * Gets the nickname string for the #QmiDmsTimeReferenceType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_time_reference_type_get_string (QmiDmsTimeReferenceType val);
#endif

#if defined __QMI_DMS_TIME_REFERENCE_TYPE_IS_FLAGS__
/**
 * qmi_dms_time_reference_type_build_string_from_mask:
 * @mask: bitmask of QmiDmsTimeReferenceType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsTimeReferenceType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_time_reference_type_build_string_from_mask (QmiDmsTimeReferenceType mask);
#endif

GType qmi_dms_firmware_image_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_FIRMWARE_IMAGE_TYPE (qmi_dms_firmware_image_type_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_FIRMWARE_IMAGE_TYPE_IS_ENUM__

#if defined __QMI_DMS_FIRMWARE_IMAGE_TYPE_IS_ENUM__
/**
 * qmi_dms_firmware_image_type_get_string:
 * @val: a QmiDmsFirmwareImageType.
 *
 * Gets the nickname string for the #QmiDmsFirmwareImageType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_firmware_image_type_get_string (QmiDmsFirmwareImageType val);
#endif

#if defined __QMI_DMS_FIRMWARE_IMAGE_TYPE_IS_FLAGS__
/**
 * qmi_dms_firmware_image_type_build_string_from_mask:
 * @mask: bitmask of QmiDmsFirmwareImageType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsFirmwareImageType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_firmware_image_type_build_string_from_mask (QmiDmsFirmwareImageType mask);
#endif

GType qmi_dms_boot_image_download_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_BOOT_IMAGE_DOWNLOAD_MODE (qmi_dms_boot_image_download_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_BOOT_IMAGE_DOWNLOAD_MODE_IS_ENUM__

#if defined __QMI_DMS_BOOT_IMAGE_DOWNLOAD_MODE_IS_ENUM__
/**
 * qmi_dms_boot_image_download_mode_get_string:
 * @val: a QmiDmsBootImageDownloadMode.
 *
 * Gets the nickname string for the #QmiDmsBootImageDownloadMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_boot_image_download_mode_get_string (QmiDmsBootImageDownloadMode val);
#endif

#if defined __QMI_DMS_BOOT_IMAGE_DOWNLOAD_MODE_IS_FLAGS__
/**
 * qmi_dms_boot_image_download_mode_build_string_from_mask:
 * @mask: bitmask of QmiDmsBootImageDownloadMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsBootImageDownloadMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_boot_image_download_mode_build_string_from_mask (QmiDmsBootImageDownloadMode mask);
#endif

GType qmi_dms_hp_device_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_HP_DEVICE_MODE (qmi_dms_hp_device_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_HP_DEVICE_MODE_IS_ENUM__

#if defined __QMI_DMS_HP_DEVICE_MODE_IS_ENUM__
/**
 * qmi_dms_hp_device_mode_get_string:
 * @val: a QmiDmsHpDeviceMode.
 *
 * Gets the nickname string for the #QmiDmsHpDeviceMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_hp_device_mode_get_string (QmiDmsHpDeviceMode val);
#endif

#if defined __QMI_DMS_HP_DEVICE_MODE_IS_FLAGS__
/**
 * qmi_dms_hp_device_mode_build_string_from_mask:
 * @mask: bitmask of QmiDmsHpDeviceMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsHpDeviceMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_hp_device_mode_build_string_from_mask (QmiDmsHpDeviceMode mask);
#endif

GType qmi_dms_swi_usb_composition_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DMS_SWI_USB_COMPOSITION (qmi_dms_swi_usb_composition_get_type ())

/* Define type-specific symbols */
#define __QMI_DMS_SWI_USB_COMPOSITION_IS_ENUM__

#if defined __QMI_DMS_SWI_USB_COMPOSITION_IS_ENUM__
/**
 * qmi_dms_swi_usb_composition_get_string:
 * @val: a QmiDmsSwiUsbComposition.
 *
 * Gets the nickname string for the #QmiDmsSwiUsbComposition specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_dms_swi_usb_composition_get_string (QmiDmsSwiUsbComposition val);
#endif

#if defined __QMI_DMS_SWI_USB_COMPOSITION_IS_FLAGS__
/**
 * qmi_dms_swi_usb_composition_build_string_from_mask:
 * @mask: bitmask of QmiDmsSwiUsbComposition values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsSwiUsbComposition in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_swi_usb_composition_build_string_from_mask (QmiDmsSwiUsbComposition mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-nas.h" */
GType qmi_nas_radio_interface_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_RADIO_INTERFACE (qmi_nas_radio_interface_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_RADIO_INTERFACE_IS_ENUM__

#if defined __QMI_NAS_RADIO_INTERFACE_IS_ENUM__
/**
 * qmi_nas_radio_interface_get_string:
 * @val: a QmiNasRadioInterface.
 *
 * Gets the nickname string for the #QmiNasRadioInterface specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_radio_interface_get_string (QmiNasRadioInterface val);
#endif

#if defined __QMI_NAS_RADIO_INTERFACE_IS_FLAGS__
/**
 * qmi_nas_radio_interface_build_string_from_mask:
 * @mask: bitmask of QmiNasRadioInterface values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRadioInterface in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_radio_interface_build_string_from_mask (QmiNasRadioInterface mask);
#endif

GType qmi_nas_active_band_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_ACTIVE_BAND (qmi_nas_active_band_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_ACTIVE_BAND_IS_ENUM__

#if defined __QMI_NAS_ACTIVE_BAND_IS_ENUM__
/**
 * qmi_nas_active_band_get_string:
 * @val: a QmiNasActiveBand.
 *
 * Gets the nickname string for the #QmiNasActiveBand specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_active_band_get_string (QmiNasActiveBand val);
#endif

#if defined __QMI_NAS_ACTIVE_BAND_IS_FLAGS__
/**
 * qmi_nas_active_band_build_string_from_mask:
 * @mask: bitmask of QmiNasActiveBand values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasActiveBand in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_active_band_build_string_from_mask (QmiNasActiveBand mask);
#endif

GType qmi_nas_network_service_domain_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_SERVICE_DOMAIN (qmi_nas_network_service_domain_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_SERVICE_DOMAIN_IS_ENUM__

#if defined __QMI_NAS_NETWORK_SERVICE_DOMAIN_IS_ENUM__
/**
 * qmi_nas_network_service_domain_get_string:
 * @val: a QmiNasNetworkServiceDomain.
 *
 * Gets the nickname string for the #QmiNasNetworkServiceDomain specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_service_domain_get_string (QmiNasNetworkServiceDomain val);
#endif

#if defined __QMI_NAS_NETWORK_SERVICE_DOMAIN_IS_FLAGS__
/**
 * qmi_nas_network_service_domain_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkServiceDomain values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkServiceDomain in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_service_domain_build_string_from_mask (QmiNasNetworkServiceDomain mask);
#endif

GType qmi_nas_evdo_sinr_level_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_EVDO_SINR_LEVEL (qmi_nas_evdo_sinr_level_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_EVDO_SINR_LEVEL_IS_ENUM__

#if defined __QMI_NAS_EVDO_SINR_LEVEL_IS_ENUM__
/**
 * qmi_nas_evdo_sinr_level_get_string:
 * @val: a QmiNasEvdoSinrLevel.
 *
 * Gets the nickname string for the #QmiNasEvdoSinrLevel specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_evdo_sinr_level_get_string (QmiNasEvdoSinrLevel val);
#endif

#if defined __QMI_NAS_EVDO_SINR_LEVEL_IS_FLAGS__
/**
 * qmi_nas_evdo_sinr_level_build_string_from_mask:
 * @mask: bitmask of QmiNasEvdoSinrLevel values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasEvdoSinrLevel in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_evdo_sinr_level_build_string_from_mask (QmiNasEvdoSinrLevel mask);
#endif

GType qmi_nas_signal_strength_request_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_SIGNAL_STRENGTH_REQUEST (qmi_nas_signal_strength_request_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_SIGNAL_STRENGTH_REQUEST_IS_FLAGS__

#if defined __QMI_NAS_SIGNAL_STRENGTH_REQUEST_IS_ENUM__
/**
 * qmi_nas_signal_strength_request_get_string:
 * @val: a QmiNasSignalStrengthRequest.
 *
 * Gets the nickname string for the #QmiNasSignalStrengthRequest specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_signal_strength_request_get_string (QmiNasSignalStrengthRequest val);
#endif

#if defined __QMI_NAS_SIGNAL_STRENGTH_REQUEST_IS_FLAGS__
/**
 * qmi_nas_signal_strength_request_build_string_from_mask:
 * @mask: bitmask of QmiNasSignalStrengthRequest values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasSignalStrengthRequest in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_signal_strength_request_build_string_from_mask (QmiNasSignalStrengthRequest mask);
#endif

GType qmi_nas_network_scan_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_SCAN_TYPE (qmi_nas_network_scan_type_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_SCAN_TYPE_IS_FLAGS__

#if defined __QMI_NAS_NETWORK_SCAN_TYPE_IS_ENUM__
/**
 * qmi_nas_network_scan_type_get_string:
 * @val: a QmiNasNetworkScanType.
 *
 * Gets the nickname string for the #QmiNasNetworkScanType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_scan_type_get_string (QmiNasNetworkScanType val);
#endif

#if defined __QMI_NAS_NETWORK_SCAN_TYPE_IS_FLAGS__
/**
 * qmi_nas_network_scan_type_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkScanType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkScanType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_scan_type_build_string_from_mask (QmiNasNetworkScanType mask);
#endif

GType qmi_nas_network_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_STATUS (qmi_nas_network_status_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_STATUS_IS_FLAGS__

#if defined __QMI_NAS_NETWORK_STATUS_IS_ENUM__
/**
 * qmi_nas_network_status_get_string:
 * @val: a QmiNasNetworkStatus.
 *
 * Gets the nickname string for the #QmiNasNetworkStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_status_get_string (QmiNasNetworkStatus val);
#endif

#if defined __QMI_NAS_NETWORK_STATUS_IS_FLAGS__
/**
 * qmi_nas_network_status_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_status_build_string_from_mask (QmiNasNetworkStatus mask);
#endif

GType qmi_nas_network_register_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_REGISTER_TYPE (qmi_nas_network_register_type_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_REGISTER_TYPE_IS_ENUM__

#if defined __QMI_NAS_NETWORK_REGISTER_TYPE_IS_ENUM__
/**
 * qmi_nas_network_register_type_get_string:
 * @val: a QmiNasNetworkRegisterType.
 *
 * Gets the nickname string for the #QmiNasNetworkRegisterType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_register_type_get_string (QmiNasNetworkRegisterType val);
#endif

#if defined __QMI_NAS_NETWORK_REGISTER_TYPE_IS_FLAGS__
/**
 * qmi_nas_network_register_type_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkRegisterType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkRegisterType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_register_type_build_string_from_mask (QmiNasNetworkRegisterType mask);
#endif

GType qmi_nas_ps_attach_action_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_PS_ATTACH_ACTION (qmi_nas_ps_attach_action_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_PS_ATTACH_ACTION_IS_ENUM__

#if defined __QMI_NAS_PS_ATTACH_ACTION_IS_ENUM__
/**
 * qmi_nas_ps_attach_action_get_string:
 * @val: a QmiNasPsAttachAction.
 *
 * Gets the nickname string for the #QmiNasPsAttachAction specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_ps_attach_action_get_string (QmiNasPsAttachAction val);
#endif

#if defined __QMI_NAS_PS_ATTACH_ACTION_IS_FLAGS__
/**
 * qmi_nas_ps_attach_action_build_string_from_mask:
 * @mask: bitmask of QmiNasPsAttachAction values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasPsAttachAction in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_ps_attach_action_build_string_from_mask (QmiNasPsAttachAction mask);
#endif

GType qmi_nas_registration_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_REGISTRATION_STATE (qmi_nas_registration_state_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_REGISTRATION_STATE_IS_ENUM__

#if defined __QMI_NAS_REGISTRATION_STATE_IS_ENUM__
/**
 * qmi_nas_registration_state_get_string:
 * @val: a QmiNasRegistrationState.
 *
 * Gets the nickname string for the #QmiNasRegistrationState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_registration_state_get_string (QmiNasRegistrationState val);
#endif

#if defined __QMI_NAS_REGISTRATION_STATE_IS_FLAGS__
/**
 * qmi_nas_registration_state_build_string_from_mask:
 * @mask: bitmask of QmiNasRegistrationState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRegistrationState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_registration_state_build_string_from_mask (QmiNasRegistrationState mask);
#endif

GType qmi_nas_attach_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_ATTACH_STATE (qmi_nas_attach_state_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_ATTACH_STATE_IS_ENUM__

#if defined __QMI_NAS_ATTACH_STATE_IS_ENUM__
/**
 * qmi_nas_attach_state_get_string:
 * @val: a QmiNasAttachState.
 *
 * Gets the nickname string for the #QmiNasAttachState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_attach_state_get_string (QmiNasAttachState val);
#endif

#if defined __QMI_NAS_ATTACH_STATE_IS_FLAGS__
/**
 * qmi_nas_attach_state_build_string_from_mask:
 * @mask: bitmask of QmiNasAttachState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasAttachState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_attach_state_build_string_from_mask (QmiNasAttachState mask);
#endif

GType qmi_nas_network_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_TYPE (qmi_nas_network_type_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_TYPE_IS_ENUM__

#if defined __QMI_NAS_NETWORK_TYPE_IS_ENUM__
/**
 * qmi_nas_network_type_get_string:
 * @val: a QmiNasNetworkType.
 *
 * Gets the nickname string for the #QmiNasNetworkType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_type_get_string (QmiNasNetworkType val);
#endif

#if defined __QMI_NAS_NETWORK_TYPE_IS_FLAGS__
/**
 * qmi_nas_network_type_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_type_build_string_from_mask (QmiNasNetworkType mask);
#endif

GType qmi_nas_roaming_indicator_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_ROAMING_INDICATOR_STATUS (qmi_nas_roaming_indicator_status_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_ROAMING_INDICATOR_STATUS_IS_ENUM__

#if defined __QMI_NAS_ROAMING_INDICATOR_STATUS_IS_ENUM__
/**
 * qmi_nas_roaming_indicator_status_get_string:
 * @val: a QmiNasRoamingIndicatorStatus.
 *
 * Gets the nickname string for the #QmiNasRoamingIndicatorStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_roaming_indicator_status_get_string (QmiNasRoamingIndicatorStatus val);
#endif

#if defined __QMI_NAS_ROAMING_INDICATOR_STATUS_IS_FLAGS__
/**
 * qmi_nas_roaming_indicator_status_build_string_from_mask:
 * @mask: bitmask of QmiNasRoamingIndicatorStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRoamingIndicatorStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_roaming_indicator_status_build_string_from_mask (QmiNasRoamingIndicatorStatus mask);
#endif

GType qmi_nas_data_capability_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_DATA_CAPABILITY (qmi_nas_data_capability_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_DATA_CAPABILITY_IS_ENUM__

#if defined __QMI_NAS_DATA_CAPABILITY_IS_ENUM__
/**
 * qmi_nas_data_capability_get_string:
 * @val: a QmiNasDataCapability.
 *
 * Gets the nickname string for the #QmiNasDataCapability specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_data_capability_get_string (QmiNasDataCapability val);
#endif

#if defined __QMI_NAS_DATA_CAPABILITY_IS_FLAGS__
/**
 * qmi_nas_data_capability_build_string_from_mask:
 * @mask: bitmask of QmiNasDataCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasDataCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_data_capability_build_string_from_mask (QmiNasDataCapability mask);
#endif

GType qmi_nas_service_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_SERVICE_STATUS (qmi_nas_service_status_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_SERVICE_STATUS_IS_ENUM__

#if defined __QMI_NAS_SERVICE_STATUS_IS_ENUM__
/**
 * qmi_nas_service_status_get_string:
 * @val: a QmiNasServiceStatus.
 *
 * Gets the nickname string for the #QmiNasServiceStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_service_status_get_string (QmiNasServiceStatus val);
#endif

#if defined __QMI_NAS_SERVICE_STATUS_IS_FLAGS__
/**
 * qmi_nas_service_status_build_string_from_mask:
 * @mask: bitmask of QmiNasServiceStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasServiceStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_service_status_build_string_from_mask (QmiNasServiceStatus mask);
#endif

GType qmi_nas_hdr_personality_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_HDR_PERSONALITY (qmi_nas_hdr_personality_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_HDR_PERSONALITY_IS_ENUM__

#if defined __QMI_NAS_HDR_PERSONALITY_IS_ENUM__
/**
 * qmi_nas_hdr_personality_get_string:
 * @val: a QmiNasHdrPersonality.
 *
 * Gets the nickname string for the #QmiNasHdrPersonality specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_hdr_personality_get_string (QmiNasHdrPersonality val);
#endif

#if defined __QMI_NAS_HDR_PERSONALITY_IS_FLAGS__
/**
 * qmi_nas_hdr_personality_build_string_from_mask:
 * @mask: bitmask of QmiNasHdrPersonality values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasHdrPersonality in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_hdr_personality_build_string_from_mask (QmiNasHdrPersonality mask);
#endif

GType qmi_nas_call_barring_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_CALL_BARRING_STATUS (qmi_nas_call_barring_status_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_CALL_BARRING_STATUS_IS_ENUM__

#if defined __QMI_NAS_CALL_BARRING_STATUS_IS_ENUM__
/**
 * qmi_nas_call_barring_status_get_string:
 * @val: a QmiNasCallBarringStatus.
 *
 * Gets the nickname string for the #QmiNasCallBarringStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_call_barring_status_get_string (QmiNasCallBarringStatus val);
#endif

#if defined __QMI_NAS_CALL_BARRING_STATUS_IS_FLAGS__
/**
 * qmi_nas_call_barring_status_build_string_from_mask:
 * @mask: bitmask of QmiNasCallBarringStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasCallBarringStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_call_barring_status_build_string_from_mask (QmiNasCallBarringStatus mask);
#endif

GType qmi_nas_network_description_display_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_DESCRIPTION_DISPLAY (qmi_nas_network_description_display_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_IS_ENUM__

#if defined __QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_IS_ENUM__
/**
 * qmi_nas_network_description_display_get_string:
 * @val: a QmiNasNetworkDescriptionDisplay.
 *
 * Gets the nickname string for the #QmiNasNetworkDescriptionDisplay specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_description_display_get_string (QmiNasNetworkDescriptionDisplay val);
#endif

#if defined __QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_IS_FLAGS__
/**
 * qmi_nas_network_description_display_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkDescriptionDisplay values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkDescriptionDisplay in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_description_display_build_string_from_mask (QmiNasNetworkDescriptionDisplay mask);
#endif

GType qmi_nas_network_description_encoding_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_DESCRIPTION_ENCODING (qmi_nas_network_description_encoding_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_DESCRIPTION_ENCODING_IS_ENUM__

#if defined __QMI_NAS_NETWORK_DESCRIPTION_ENCODING_IS_ENUM__
/**
 * qmi_nas_network_description_encoding_get_string:
 * @val: a QmiNasNetworkDescriptionEncoding.
 *
 * Gets the nickname string for the #QmiNasNetworkDescriptionEncoding specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_description_encoding_get_string (QmiNasNetworkDescriptionEncoding val);
#endif

#if defined __QMI_NAS_NETWORK_DESCRIPTION_ENCODING_IS_FLAGS__
/**
 * qmi_nas_network_description_encoding_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkDescriptionEncoding values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkDescriptionEncoding in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_description_encoding_build_string_from_mask (QmiNasNetworkDescriptionEncoding mask);
#endif

GType qmi_nas_radio_technology_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_RADIO_TECHNOLOGY_PREFERENCE (qmi_nas_radio_technology_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_IS_FLAGS__

#if defined __QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_radio_technology_preference_get_string:
 * @val: a QmiNasRadioTechnologyPreference.
 *
 * Gets the nickname string for the #QmiNasRadioTechnologyPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_radio_technology_preference_get_string (QmiNasRadioTechnologyPreference val);
#endif

#if defined __QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_radio_technology_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasRadioTechnologyPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRadioTechnologyPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_radio_technology_preference_build_string_from_mask (QmiNasRadioTechnologyPreference mask);
#endif

GType qmi_nas_preference_duration_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_PREFERENCE_DURATION (qmi_nas_preference_duration_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_PREFERENCE_DURATION_IS_ENUM__

#if defined __QMI_NAS_PREFERENCE_DURATION_IS_ENUM__
/**
 * qmi_nas_preference_duration_get_string:
 * @val: a QmiNasPreferenceDuration.
 *
 * Gets the nickname string for the #QmiNasPreferenceDuration specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_preference_duration_get_string (QmiNasPreferenceDuration val);
#endif

#if defined __QMI_NAS_PREFERENCE_DURATION_IS_FLAGS__
/**
 * qmi_nas_preference_duration_build_string_from_mask:
 * @mask: bitmask of QmiNasPreferenceDuration values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasPreferenceDuration in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_preference_duration_build_string_from_mask (QmiNasPreferenceDuration mask);
#endif

GType qmi_nas_rat_mode_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_RAT_MODE_PREFERENCE (qmi_nas_rat_mode_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_RAT_MODE_PREFERENCE_IS_FLAGS__

#if defined __QMI_NAS_RAT_MODE_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_rat_mode_preference_get_string:
 * @val: a QmiNasRatModePreference.
 *
 * Gets the nickname string for the #QmiNasRatModePreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_rat_mode_preference_get_string (QmiNasRatModePreference val);
#endif

#if defined __QMI_NAS_RAT_MODE_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_rat_mode_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasRatModePreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRatModePreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_rat_mode_preference_build_string_from_mask (QmiNasRatModePreference mask);
#endif

GType qmi_nas_cdma_prl_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_CDMA_PRL_PREFERENCE (qmi_nas_cdma_prl_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_CDMA_PRL_PREFERENCE_IS_ENUM__

#if defined __QMI_NAS_CDMA_PRL_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_cdma_prl_preference_get_string:
 * @val: a QmiNasCdmaPrlPreference.
 *
 * Gets the nickname string for the #QmiNasCdmaPrlPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_cdma_prl_preference_get_string (QmiNasCdmaPrlPreference val);
#endif

#if defined __QMI_NAS_CDMA_PRL_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_cdma_prl_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasCdmaPrlPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasCdmaPrlPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_cdma_prl_preference_build_string_from_mask (QmiNasCdmaPrlPreference mask);
#endif

GType qmi_nas_roaming_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_ROAMING_PREFERENCE (qmi_nas_roaming_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_ROAMING_PREFERENCE_IS_ENUM__

#if defined __QMI_NAS_ROAMING_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_roaming_preference_get_string:
 * @val: a QmiNasRoamingPreference.
 *
 * Gets the nickname string for the #QmiNasRoamingPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_roaming_preference_get_string (QmiNasRoamingPreference val);
#endif

#if defined __QMI_NAS_ROAMING_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_roaming_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasRoamingPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRoamingPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_roaming_preference_build_string_from_mask (QmiNasRoamingPreference mask);
#endif

GType qmi_nas_network_selection_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_SELECTION_PREFERENCE (qmi_nas_network_selection_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_SELECTION_PREFERENCE_IS_ENUM__

#if defined __QMI_NAS_NETWORK_SELECTION_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_network_selection_preference_get_string:
 * @val: a QmiNasNetworkSelectionPreference.
 *
 * Gets the nickname string for the #QmiNasNetworkSelectionPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_selection_preference_get_string (QmiNasNetworkSelectionPreference val);
#endif

#if defined __QMI_NAS_NETWORK_SELECTION_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_network_selection_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkSelectionPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkSelectionPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_selection_preference_build_string_from_mask (QmiNasNetworkSelectionPreference mask);
#endif

GType qmi_nas_change_duration_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_CHANGE_DURATION (qmi_nas_change_duration_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_CHANGE_DURATION_IS_ENUM__

#if defined __QMI_NAS_CHANGE_DURATION_IS_ENUM__
/**
 * qmi_nas_change_duration_get_string:
 * @val: a QmiNasChangeDuration.
 *
 * Gets the nickname string for the #QmiNasChangeDuration specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_change_duration_get_string (QmiNasChangeDuration val);
#endif

#if defined __QMI_NAS_CHANGE_DURATION_IS_FLAGS__
/**
 * qmi_nas_change_duration_build_string_from_mask:
 * @mask: bitmask of QmiNasChangeDuration values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasChangeDuration in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_change_duration_build_string_from_mask (QmiNasChangeDuration mask);
#endif

GType qmi_nas_service_domain_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_SERVICE_DOMAIN_PREFERENCE (qmi_nas_service_domain_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_SERVICE_DOMAIN_PREFERENCE_IS_ENUM__

#if defined __QMI_NAS_SERVICE_DOMAIN_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_service_domain_preference_get_string:
 * @val: a QmiNasServiceDomainPreference.
 *
 * Gets the nickname string for the #QmiNasServiceDomainPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_service_domain_preference_get_string (QmiNasServiceDomainPreference val);
#endif

#if defined __QMI_NAS_SERVICE_DOMAIN_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_service_domain_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasServiceDomainPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasServiceDomainPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_service_domain_preference_build_string_from_mask (QmiNasServiceDomainPreference mask);
#endif

GType qmi_nas_gsm_wcdma_acquisition_order_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE (qmi_nas_gsm_wcdma_acquisition_order_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_IS_ENUM__

#if defined __QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_gsm_wcdma_acquisition_order_preference_get_string:
 * @val: a QmiNasGsmWcdmaAcquisitionOrderPreference.
 *
 * Gets the nickname string for the #QmiNasGsmWcdmaAcquisitionOrderPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_gsm_wcdma_acquisition_order_preference_get_string (QmiNasGsmWcdmaAcquisitionOrderPreference val);
#endif

#if defined __QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_gsm_wcdma_acquisition_order_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasGsmWcdmaAcquisitionOrderPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasGsmWcdmaAcquisitionOrderPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_gsm_wcdma_acquisition_order_preference_build_string_from_mask (QmiNasGsmWcdmaAcquisitionOrderPreference mask);
#endif

GType qmi_nas_td_scdma_band_preference_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_TD_SCDMA_BAND_PREFERENCE (qmi_nas_td_scdma_band_preference_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_TD_SCDMA_BAND_PREFERENCE_IS_FLAGS__

#if defined __QMI_NAS_TD_SCDMA_BAND_PREFERENCE_IS_ENUM__
/**
 * qmi_nas_td_scdma_band_preference_get_string:
 * @val: a QmiNasTdScdmaBandPreference.
 *
 * Gets the nickname string for the #QmiNasTdScdmaBandPreference specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_td_scdma_band_preference_get_string (QmiNasTdScdmaBandPreference val);
#endif

#if defined __QMI_NAS_TD_SCDMA_BAND_PREFERENCE_IS_FLAGS__
/**
 * qmi_nas_td_scdma_band_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasTdScdmaBandPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasTdScdmaBandPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_td_scdma_band_preference_build_string_from_mask (QmiNasTdScdmaBandPreference mask);
#endif

GType qmi_nas_roaming_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_ROAMING_STATUS (qmi_nas_roaming_status_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_ROAMING_STATUS_IS_ENUM__

#if defined __QMI_NAS_ROAMING_STATUS_IS_ENUM__
/**
 * qmi_nas_roaming_status_get_string:
 * @val: a QmiNasRoamingStatus.
 *
 * Gets the nickname string for the #QmiNasRoamingStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_roaming_status_get_string (QmiNasRoamingStatus val);
#endif

#if defined __QMI_NAS_ROAMING_STATUS_IS_FLAGS__
/**
 * qmi_nas_roaming_status_build_string_from_mask:
 * @mask: bitmask of QmiNasRoamingStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasRoamingStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_roaming_status_build_string_from_mask (QmiNasRoamingStatus mask);
#endif

GType qmi_nas_hdr_protocol_revision_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_HDR_PROTOCOL_REVISION (qmi_nas_hdr_protocol_revision_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_HDR_PROTOCOL_REVISION_IS_ENUM__

#if defined __QMI_NAS_HDR_PROTOCOL_REVISION_IS_ENUM__
/**
 * qmi_nas_hdr_protocol_revision_get_string:
 * @val: a QmiNasHdrProtocolRevision.
 *
 * Gets the nickname string for the #QmiNasHdrProtocolRevision specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_hdr_protocol_revision_get_string (QmiNasHdrProtocolRevision val);
#endif

#if defined __QMI_NAS_HDR_PROTOCOL_REVISION_IS_FLAGS__
/**
 * qmi_nas_hdr_protocol_revision_build_string_from_mask:
 * @mask: bitmask of QmiNasHdrProtocolRevision values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasHdrProtocolRevision in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_hdr_protocol_revision_build_string_from_mask (QmiNasHdrProtocolRevision mask);
#endif

GType qmi_nas_wcdma_hs_service_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_WCDMA_HS_SERVICE (qmi_nas_wcdma_hs_service_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_WCDMA_HS_SERVICE_IS_ENUM__

#if defined __QMI_NAS_WCDMA_HS_SERVICE_IS_ENUM__
/**
 * qmi_nas_wcdma_hs_service_get_string:
 * @val: a QmiNasWcdmaHsService.
 *
 * Gets the nickname string for the #QmiNasWcdmaHsService specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_wcdma_hs_service_get_string (QmiNasWcdmaHsService val);
#endif

#if defined __QMI_NAS_WCDMA_HS_SERVICE_IS_FLAGS__
/**
 * qmi_nas_wcdma_hs_service_build_string_from_mask:
 * @mask: bitmask of QmiNasWcdmaHsService values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasWcdmaHsService in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_wcdma_hs_service_build_string_from_mask (QmiNasWcdmaHsService mask);
#endif

GType qmi_nas_cell_broadcast_capability_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_CELL_BROADCAST_CAPABILITY (qmi_nas_cell_broadcast_capability_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_CELL_BROADCAST_CAPABILITY_IS_ENUM__

#if defined __QMI_NAS_CELL_BROADCAST_CAPABILITY_IS_ENUM__
/**
 * qmi_nas_cell_broadcast_capability_get_string:
 * @val: a QmiNasCellBroadcastCapability.
 *
 * Gets the nickname string for the #QmiNasCellBroadcastCapability specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_cell_broadcast_capability_get_string (QmiNasCellBroadcastCapability val);
#endif

#if defined __QMI_NAS_CELL_BROADCAST_CAPABILITY_IS_FLAGS__
/**
 * qmi_nas_cell_broadcast_capability_build_string_from_mask:
 * @mask: bitmask of QmiNasCellBroadcastCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasCellBroadcastCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_cell_broadcast_capability_build_string_from_mask (QmiNasCellBroadcastCapability mask);
#endif

GType qmi_nas_sim_reject_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_SIM_REJECT_STATE (qmi_nas_sim_reject_state_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_SIM_REJECT_STATE_IS_ENUM__

#if defined __QMI_NAS_SIM_REJECT_STATE_IS_ENUM__
/**
 * qmi_nas_sim_reject_state_get_string:
 * @val: a QmiNasSimRejectState.
 *
 * Gets the nickname string for the #QmiNasSimRejectState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_sim_reject_state_get_string (QmiNasSimRejectState val);
#endif

#if defined __QMI_NAS_SIM_REJECT_STATE_IS_FLAGS__
/**
 * qmi_nas_sim_reject_state_build_string_from_mask:
 * @mask: bitmask of QmiNasSimRejectState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasSimRejectState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_sim_reject_state_build_string_from_mask (QmiNasSimRejectState mask);
#endif

GType qmi_nas_cdma_pilot_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_CDMA_PILOT_TYPE (qmi_nas_cdma_pilot_type_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_CDMA_PILOT_TYPE_IS_ENUM__

#if defined __QMI_NAS_CDMA_PILOT_TYPE_IS_ENUM__
/**
 * qmi_nas_cdma_pilot_type_get_string:
 * @val: a QmiNasCdmaPilotType.
 *
 * Gets the nickname string for the #QmiNasCdmaPilotType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_cdma_pilot_type_get_string (QmiNasCdmaPilotType val);
#endif

#if defined __QMI_NAS_CDMA_PILOT_TYPE_IS_FLAGS__
/**
 * qmi_nas_cdma_pilot_type_build_string_from_mask:
 * @mask: bitmask of QmiNasCdmaPilotType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasCdmaPilotType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_cdma_pilot_type_build_string_from_mask (QmiNasCdmaPilotType mask);
#endif

GType qmi_nas_day_of_week_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_DAY_OF_WEEK (qmi_nas_day_of_week_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_DAY_OF_WEEK_IS_ENUM__

#if defined __QMI_NAS_DAY_OF_WEEK_IS_ENUM__
/**
 * qmi_nas_day_of_week_get_string:
 * @val: a QmiNasDayOfWeek.
 *
 * Gets the nickname string for the #QmiNasDayOfWeek specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_day_of_week_get_string (QmiNasDayOfWeek val);
#endif

#if defined __QMI_NAS_DAY_OF_WEEK_IS_FLAGS__
/**
 * qmi_nas_day_of_week_build_string_from_mask:
 * @mask: bitmask of QmiNasDayOfWeek values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasDayOfWeek in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_day_of_week_build_string_from_mask (QmiNasDayOfWeek mask);
#endif

GType qmi_nas_daylight_savings_adjustment_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT (qmi_nas_daylight_savings_adjustment_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_IS_ENUM__

#if defined __QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_IS_ENUM__
/**
 * qmi_nas_daylight_savings_adjustment_get_string:
 * @val: a QmiNasDaylightSavingsAdjustment.
 *
 * Gets the nickname string for the #QmiNasDaylightSavingsAdjustment specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_daylight_savings_adjustment_get_string (QmiNasDaylightSavingsAdjustment val);
#endif

#if defined __QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_IS_FLAGS__
/**
 * qmi_nas_daylight_savings_adjustment_build_string_from_mask:
 * @mask: bitmask of QmiNasDaylightSavingsAdjustment values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasDaylightSavingsAdjustment in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_daylight_savings_adjustment_build_string_from_mask (QmiNasDaylightSavingsAdjustment mask);
#endif

GType qmi_nas_wcdma_rrc_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_WCDMA_RRC_STATE (qmi_nas_wcdma_rrc_state_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_WCDMA_RRC_STATE_IS_ENUM__

#if defined __QMI_NAS_WCDMA_RRC_STATE_IS_ENUM__
/**
 * qmi_nas_wcdma_rrc_state_get_string:
 * @val: a QmiNasWcdmaRrcState.
 *
 * Gets the nickname string for the #QmiNasWcdmaRrcState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_wcdma_rrc_state_get_string (QmiNasWcdmaRrcState val);
#endif

#if defined __QMI_NAS_WCDMA_RRC_STATE_IS_FLAGS__
/**
 * qmi_nas_wcdma_rrc_state_build_string_from_mask:
 * @mask: bitmask of QmiNasWcdmaRrcState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasWcdmaRrcState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_wcdma_rrc_state_build_string_from_mask (QmiNasWcdmaRrcState mask);
#endif

GType qmi_nas_dl_bandwidth_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_DL_BANDWIDTH (qmi_nas_dl_bandwidth_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_DL_BANDWIDTH_IS_ENUM__

#if defined __QMI_NAS_DL_BANDWIDTH_IS_ENUM__
/**
 * qmi_nas_dl_bandwidth_get_string:
 * @val: a QmiNasDLBandwidth.
 *
 * Gets the nickname string for the #QmiNasDLBandwidth specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_dl_bandwidth_get_string (QmiNasDLBandwidth val);
#endif

#if defined __QMI_NAS_DL_BANDWIDTH_IS_FLAGS__
/**
 * qmi_nas_dl_bandwidth_build_string_from_mask:
 * @mask: bitmask of QmiNasDLBandwidth values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasDLBandwidth in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_dl_bandwidth_build_string_from_mask (QmiNasDLBandwidth mask);
#endif

GType qmi_nas_scell_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_SCELL_STATE (qmi_nas_scell_state_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_SCELL_STATE_IS_ENUM__

#if defined __QMI_NAS_SCELL_STATE_IS_ENUM__
/**
 * qmi_nas_scell_state_get_string:
 * @val: a QmiNasScellState.
 *
 * Gets the nickname string for the #QmiNasScellState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_scell_state_get_string (QmiNasScellState val);
#endif

#if defined __QMI_NAS_SCELL_STATE_IS_FLAGS__
/**
 * qmi_nas_scell_state_build_string_from_mask:
 * @mask: bitmask of QmiNasScellState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasScellState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_scell_state_build_string_from_mask (QmiNasScellState mask);
#endif

GType qmi_nas_plmn_encoding_scheme_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_PLMN_ENCODING_SCHEME (qmi_nas_plmn_encoding_scheme_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_PLMN_ENCODING_SCHEME_IS_ENUM__

#if defined __QMI_NAS_PLMN_ENCODING_SCHEME_IS_ENUM__
/**
 * qmi_nas_plmn_encoding_scheme_get_string:
 * @val: a QmiNasPlmnEncodingScheme.
 *
 * Gets the nickname string for the #QmiNasPlmnEncodingScheme specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_plmn_encoding_scheme_get_string (QmiNasPlmnEncodingScheme val);
#endif

#if defined __QMI_NAS_PLMN_ENCODING_SCHEME_IS_FLAGS__
/**
 * qmi_nas_plmn_encoding_scheme_build_string_from_mask:
 * @mask: bitmask of QmiNasPlmnEncodingScheme values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasPlmnEncodingScheme in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_plmn_encoding_scheme_build_string_from_mask (QmiNasPlmnEncodingScheme mask);
#endif

GType qmi_nas_network_name_display_condition_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_NETWORK_NAME_DISPLAY_CONDITION (qmi_nas_network_name_display_condition_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_IS_FLAGS__

#if defined __QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_IS_ENUM__
/**
 * qmi_nas_network_name_display_condition_get_string:
 * @val: a QmiNasNetworkNameDisplayCondition.
 *
 * Gets the nickname string for the #QmiNasNetworkNameDisplayCondition specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_network_name_display_condition_get_string (QmiNasNetworkNameDisplayCondition val);
#endif

#if defined __QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_IS_FLAGS__
/**
 * qmi_nas_network_name_display_condition_build_string_from_mask:
 * @mask: bitmask of QmiNasNetworkNameDisplayCondition values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasNetworkNameDisplayCondition in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_network_name_display_condition_build_string_from_mask (QmiNasNetworkNameDisplayCondition mask);
#endif

GType qmi_nas_plmn_name_country_initials_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_PLMN_NAME_COUNTRY_INITIALS (qmi_nas_plmn_name_country_initials_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_PLMN_NAME_COUNTRY_INITIALS_IS_ENUM__

#if defined __QMI_NAS_PLMN_NAME_COUNTRY_INITIALS_IS_ENUM__
/**
 * qmi_nas_plmn_name_country_initials_get_string:
 * @val: a QmiNasPlmnNameCountryInitials.
 *
 * Gets the nickname string for the #QmiNasPlmnNameCountryInitials specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_plmn_name_country_initials_get_string (QmiNasPlmnNameCountryInitials val);
#endif

#if defined __QMI_NAS_PLMN_NAME_COUNTRY_INITIALS_IS_FLAGS__
/**
 * qmi_nas_plmn_name_country_initials_build_string_from_mask:
 * @mask: bitmask of QmiNasPlmnNameCountryInitials values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasPlmnNameCountryInitials in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_plmn_name_country_initials_build_string_from_mask (QmiNasPlmnNameCountryInitials mask);
#endif

GType qmi_nas_plmn_name_spare_bits_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_NAS_PLMN_NAME_SPARE_BITS (qmi_nas_plmn_name_spare_bits_get_type ())

/* Define type-specific symbols */
#define __QMI_NAS_PLMN_NAME_SPARE_BITS_IS_ENUM__

#if defined __QMI_NAS_PLMN_NAME_SPARE_BITS_IS_ENUM__
/**
 * qmi_nas_plmn_name_spare_bits_get_string:
 * @val: a QmiNasPlmnNameSpareBits.
 *
 * Gets the nickname string for the #QmiNasPlmnNameSpareBits specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_nas_plmn_name_spare_bits_get_string (QmiNasPlmnNameSpareBits val);
#endif

#if defined __QMI_NAS_PLMN_NAME_SPARE_BITS_IS_FLAGS__
/**
 * qmi_nas_plmn_name_spare_bits_build_string_from_mask:
 * @mask: bitmask of QmiNasPlmnNameSpareBits values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasPlmnNameSpareBits in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_plmn_name_spare_bits_build_string_from_mask (QmiNasPlmnNameSpareBits mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-wms.h" */
GType qmi_wms_storage_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_STORAGE_TYPE (qmi_wms_storage_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_STORAGE_TYPE_IS_ENUM__

#if defined __QMI_WMS_STORAGE_TYPE_IS_ENUM__
/**
 * qmi_wms_storage_type_get_string:
 * @val: a QmiWmsStorageType.
 *
 * Gets the nickname string for the #QmiWmsStorageType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_storage_type_get_string (QmiWmsStorageType val);
#endif

#if defined __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
/**
 * qmi_wms_storage_type_build_string_from_mask:
 * @mask: bitmask of QmiWmsStorageType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsStorageType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_storage_type_build_string_from_mask (QmiWmsStorageType mask);
#endif

GType qmi_wms_ack_indicator_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_ACK_INDICATOR (qmi_wms_ack_indicator_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_ACK_INDICATOR_IS_ENUM__

#if defined __QMI_WMS_ACK_INDICATOR_IS_ENUM__
/**
 * qmi_wms_ack_indicator_get_string:
 * @val: a QmiWmsAckIndicator.
 *
 * Gets the nickname string for the #QmiWmsAckIndicator specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_ack_indicator_get_string (QmiWmsAckIndicator val);
#endif

#if defined __QMI_WMS_ACK_INDICATOR_IS_FLAGS__
/**
 * qmi_wms_ack_indicator_build_string_from_mask:
 * @mask: bitmask of QmiWmsAckIndicator values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsAckIndicator in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_ack_indicator_build_string_from_mask (QmiWmsAckIndicator mask);
#endif

GType qmi_wms_message_format_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_FORMAT (qmi_wms_message_format_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__
/**
 * qmi_wms_message_format_get_string:
 * @val: a QmiWmsMessageFormat.
 *
 * Gets the nickname string for the #QmiWmsMessageFormat specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_format_get_string (QmiWmsMessageFormat val);
#endif

#if defined __QMI_WMS_MESSAGE_FORMAT_IS_FLAGS__
/**
 * qmi_wms_message_format_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageFormat values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageFormat in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_format_build_string_from_mask (QmiWmsMessageFormat mask);
#endif

GType qmi_wms_message_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_MODE (qmi_wms_message_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_MODE_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_MODE_IS_ENUM__
/**
 * qmi_wms_message_mode_get_string:
 * @val: a QmiWmsMessageMode.
 *
 * Gets the nickname string for the #QmiWmsMessageMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_mode_get_string (QmiWmsMessageMode val);
#endif

#if defined __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
/**
 * qmi_wms_message_mode_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_mode_build_string_from_mask (QmiWmsMessageMode mask);
#endif

GType qmi_wms_notification_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_NOTIFICATION_TYPE (qmi_wms_notification_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_NOTIFICATION_TYPE_IS_ENUM__

#if defined __QMI_WMS_NOTIFICATION_TYPE_IS_ENUM__
/**
 * qmi_wms_notification_type_get_string:
 * @val: a QmiWmsNotificationType.
 *
 * Gets the nickname string for the #QmiWmsNotificationType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_notification_type_get_string (QmiWmsNotificationType val);
#endif

#if defined __QMI_WMS_NOTIFICATION_TYPE_IS_FLAGS__
/**
 * qmi_wms_notification_type_build_string_from_mask:
 * @mask: bitmask of QmiWmsNotificationType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsNotificationType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_notification_type_build_string_from_mask (QmiWmsNotificationType mask);
#endif

GType qmi_wms_cdma_service_option_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_CDMA_SERVICE_OPTION (qmi_wms_cdma_service_option_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_CDMA_SERVICE_OPTION_IS_ENUM__

#if defined __QMI_WMS_CDMA_SERVICE_OPTION_IS_ENUM__
/**
 * qmi_wms_cdma_service_option_get_string:
 * @val: a QmiWmsCdmaServiceOption.
 *
 * Gets the nickname string for the #QmiWmsCdmaServiceOption specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_cdma_service_option_get_string (QmiWmsCdmaServiceOption val);
#endif

#if defined __QMI_WMS_CDMA_SERVICE_OPTION_IS_FLAGS__
/**
 * qmi_wms_cdma_service_option_build_string_from_mask:
 * @mask: bitmask of QmiWmsCdmaServiceOption values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsCdmaServiceOption in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_cdma_service_option_build_string_from_mask (QmiWmsCdmaServiceOption mask);
#endif

GType qmi_wms_cdma_cause_code_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_CDMA_CAUSE_CODE (qmi_wms_cdma_cause_code_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_CDMA_CAUSE_CODE_IS_ENUM__

#if defined __QMI_WMS_CDMA_CAUSE_CODE_IS_ENUM__
/**
 * qmi_wms_cdma_cause_code_get_string:
 * @val: a QmiWmsCdmaCauseCode.
 *
 * Gets the nickname string for the #QmiWmsCdmaCauseCode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_cdma_cause_code_get_string (QmiWmsCdmaCauseCode val);
#endif

#if defined __QMI_WMS_CDMA_CAUSE_CODE_IS_FLAGS__
/**
 * qmi_wms_cdma_cause_code_build_string_from_mask:
 * @mask: bitmask of QmiWmsCdmaCauseCode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsCdmaCauseCode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_cdma_cause_code_build_string_from_mask (QmiWmsCdmaCauseCode mask);
#endif

GType qmi_wms_cdma_error_class_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_CDMA_ERROR_CLASS (qmi_wms_cdma_error_class_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_CDMA_ERROR_CLASS_IS_ENUM__

#if defined __QMI_WMS_CDMA_ERROR_CLASS_IS_ENUM__
/**
 * qmi_wms_cdma_error_class_get_string:
 * @val: a QmiWmsCdmaErrorClass.
 *
 * Gets the nickname string for the #QmiWmsCdmaErrorClass specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_cdma_error_class_get_string (QmiWmsCdmaErrorClass val);
#endif

#if defined __QMI_WMS_CDMA_ERROR_CLASS_IS_FLAGS__
/**
 * qmi_wms_cdma_error_class_build_string_from_mask:
 * @mask: bitmask of QmiWmsCdmaErrorClass values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsCdmaErrorClass in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_cdma_error_class_build_string_from_mask (QmiWmsCdmaErrorClass mask);
#endif

GType qmi_wms_gsm_umts_rp_cause_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_GSM_UMTS_RP_CAUSE (qmi_wms_gsm_umts_rp_cause_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_ENUM__

#if defined __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_ENUM__
/**
 * qmi_wms_gsm_umts_rp_cause_get_string:
 * @val: a QmiWmsGsmUmtsRpCause.
 *
 * Gets the nickname string for the #QmiWmsGsmUmtsRpCause specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_gsm_umts_rp_cause_get_string (QmiWmsGsmUmtsRpCause val);
#endif

#if defined __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_FLAGS__
/**
 * qmi_wms_gsm_umts_rp_cause_build_string_from_mask:
 * @mask: bitmask of QmiWmsGsmUmtsRpCause values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsGsmUmtsRpCause in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_gsm_umts_rp_cause_build_string_from_mask (QmiWmsGsmUmtsRpCause mask);
#endif

GType qmi_wms_gsm_umts_tp_cause_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_GSM_UMTS_TP_CAUSE (qmi_wms_gsm_umts_tp_cause_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_ENUM__

#if defined __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_ENUM__
/**
 * qmi_wms_gsm_umts_tp_cause_get_string:
 * @val: a QmiWmsGsmUmtsTpCause.
 *
 * Gets the nickname string for the #QmiWmsGsmUmtsTpCause specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_gsm_umts_tp_cause_get_string (QmiWmsGsmUmtsTpCause val);
#endif

#if defined __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_FLAGS__
/**
 * qmi_wms_gsm_umts_tp_cause_build_string_from_mask:
 * @mask: bitmask of QmiWmsGsmUmtsTpCause values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsGsmUmtsTpCause in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_gsm_umts_tp_cause_build_string_from_mask (QmiWmsGsmUmtsTpCause mask);
#endif

GType qmi_wms_message_delivery_failure_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_DELIVERY_FAILURE_TYPE (qmi_wms_message_delivery_failure_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_ENUM__
/**
 * qmi_wms_message_delivery_failure_type_get_string:
 * @val: a QmiWmsMessageDeliveryFailureType.
 *
 * Gets the nickname string for the #QmiWmsMessageDeliveryFailureType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_delivery_failure_type_get_string (QmiWmsMessageDeliveryFailureType val);
#endif

#if defined __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_FLAGS__
/**
 * qmi_wms_message_delivery_failure_type_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageDeliveryFailureType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageDeliveryFailureType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_delivery_failure_type_build_string_from_mask (QmiWmsMessageDeliveryFailureType mask);
#endif

GType qmi_wms_message_tag_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_TAG_TYPE (qmi_wms_message_tag_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
/**
 * qmi_wms_message_tag_type_get_string:
 * @val: a QmiWmsMessageTagType.
 *
 * Gets the nickname string for the #QmiWmsMessageTagType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_tag_type_get_string (QmiWmsMessageTagType val);
#endif

#if defined __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
/**
 * qmi_wms_message_tag_type_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageTagType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageTagType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_tag_type_build_string_from_mask (QmiWmsMessageTagType mask);
#endif

GType qmi_wms_message_protocol_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_PROTOCOL (qmi_wms_message_protocol_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_PROTOCOL_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_PROTOCOL_IS_ENUM__
/**
 * qmi_wms_message_protocol_get_string:
 * @val: a QmiWmsMessageProtocol.
 *
 * Gets the nickname string for the #QmiWmsMessageProtocol specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_protocol_get_string (QmiWmsMessageProtocol val);
#endif

#if defined __QMI_WMS_MESSAGE_PROTOCOL_IS_FLAGS__
/**
 * qmi_wms_message_protocol_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageProtocol values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageProtocol in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_protocol_build_string_from_mask (QmiWmsMessageProtocol mask);
#endif

GType qmi_wms_message_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_TYPE (qmi_wms_message_type_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_TYPE_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_TYPE_IS_ENUM__
/**
 * qmi_wms_message_type_get_string:
 * @val: a QmiWmsMessageType.
 *
 * Gets the nickname string for the #QmiWmsMessageType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_type_get_string (QmiWmsMessageType val);
#endif

#if defined __QMI_WMS_MESSAGE_TYPE_IS_FLAGS__
/**
 * qmi_wms_message_type_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_type_build_string_from_mask (QmiWmsMessageType mask);
#endif

GType qmi_wms_message_class_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_MESSAGE_CLASS (qmi_wms_message_class_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_MESSAGE_CLASS_IS_ENUM__

#if defined __QMI_WMS_MESSAGE_CLASS_IS_ENUM__
/**
 * qmi_wms_message_class_get_string:
 * @val: a QmiWmsMessageClass.
 *
 * Gets the nickname string for the #QmiWmsMessageClass specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_message_class_get_string (QmiWmsMessageClass val);
#endif

#if defined __QMI_WMS_MESSAGE_CLASS_IS_FLAGS__
/**
 * qmi_wms_message_class_build_string_from_mask:
 * @mask: bitmask of QmiWmsMessageClass values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsMessageClass in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_message_class_build_string_from_mask (QmiWmsMessageClass mask);
#endif

GType qmi_wms_receipt_action_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_RECEIPT_ACTION (qmi_wms_receipt_action_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_RECEIPT_ACTION_IS_ENUM__

#if defined __QMI_WMS_RECEIPT_ACTION_IS_ENUM__
/**
 * qmi_wms_receipt_action_get_string:
 * @val: a QmiWmsReceiptAction.
 *
 * Gets the nickname string for the #QmiWmsReceiptAction specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_receipt_action_get_string (QmiWmsReceiptAction val);
#endif

#if defined __QMI_WMS_RECEIPT_ACTION_IS_FLAGS__
/**
 * qmi_wms_receipt_action_build_string_from_mask:
 * @mask: bitmask of QmiWmsReceiptAction values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsReceiptAction in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_receipt_action_build_string_from_mask (QmiWmsReceiptAction mask);
#endif

GType qmi_wms_transfer_indication_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WMS_TRANSFER_INDICATION (qmi_wms_transfer_indication_get_type ())

/* Define type-specific symbols */
#define __QMI_WMS_TRANSFER_INDICATION_IS_ENUM__

#if defined __QMI_WMS_TRANSFER_INDICATION_IS_ENUM__
/**
 * qmi_wms_transfer_indication_get_string:
 * @val: a QmiWmsTransferIndication.
 *
 * Gets the nickname string for the #QmiWmsTransferIndication specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wms_transfer_indication_get_string (QmiWmsTransferIndication val);
#endif

#if defined __QMI_WMS_TRANSFER_INDICATION_IS_FLAGS__
/**
 * qmi_wms_transfer_indication_build_string_from_mask:
 * @mask: bitmask of QmiWmsTransferIndication values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWmsTransferIndication in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wms_transfer_indication_build_string_from_mask (QmiWmsTransferIndication mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-pdc.h" */
GType qmi_pdc_configuration_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDC_CONFIGURATION_TYPE (qmi_pdc_configuration_type_get_type ())

/* Define type-specific symbols */
#define __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__

#if defined __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
/**
 * qmi_pdc_configuration_type_get_string:
 * @val: a QmiPdcConfigurationType.
 *
 * Gets the nickname string for the #QmiPdcConfigurationType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pdc_configuration_type_get_string (QmiPdcConfigurationType val);
#endif

#if defined __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
/**
 * qmi_pdc_configuration_type_build_string_from_mask:
 * @mask: bitmask of QmiPdcConfigurationType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdcConfigurationType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pdc_configuration_type_build_string_from_mask (QmiPdcConfigurationType mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-pds.h" */
GType qmi_pds_operation_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_OPERATION_MODE (qmi_pds_operation_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_OPERATION_MODE_IS_ENUM__

#if defined __QMI_PDS_OPERATION_MODE_IS_ENUM__
/**
 * qmi_pds_operation_mode_get_string:
 * @val: a QmiPdsOperationMode.
 *
 * Gets the nickname string for the #QmiPdsOperationMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_operation_mode_get_string (QmiPdsOperationMode val);
#endif

#if defined __QMI_PDS_OPERATION_MODE_IS_FLAGS__
/**
 * qmi_pds_operation_mode_build_string_from_mask:
 * @mask: bitmask of QmiPdsOperationMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsOperationMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_operation_mode_build_string_from_mask (QmiPdsOperationMode mask);
#endif

GType qmi_pds_position_session_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_POSITION_SESSION_STATUS (qmi_pds_position_session_status_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_POSITION_SESSION_STATUS_IS_ENUM__

#if defined __QMI_PDS_POSITION_SESSION_STATUS_IS_ENUM__
/**
 * qmi_pds_position_session_status_get_string:
 * @val: a QmiPdsPositionSessionStatus.
 *
 * Gets the nickname string for the #QmiPdsPositionSessionStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_position_session_status_get_string (QmiPdsPositionSessionStatus val);
#endif

#if defined __QMI_PDS_POSITION_SESSION_STATUS_IS_FLAGS__
/**
 * qmi_pds_position_session_status_build_string_from_mask:
 * @mask: bitmask of QmiPdsPositionSessionStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsPositionSessionStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_position_session_status_build_string_from_mask (QmiPdsPositionSessionStatus mask);
#endif

GType qmi_pds_data_valid_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_DATA_VALID (qmi_pds_data_valid_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_DATA_VALID_IS_FLAGS__

#if defined __QMI_PDS_DATA_VALID_IS_ENUM__
/**
 * qmi_pds_data_valid_get_string:
 * @val: a QmiPdsDataValid.
 *
 * Gets the nickname string for the #QmiPdsDataValid specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_data_valid_get_string (QmiPdsDataValid val);
#endif

#if defined __QMI_PDS_DATA_VALID_IS_FLAGS__
/**
 * qmi_pds_data_valid_build_string_from_mask:
 * @mask: bitmask of QmiPdsDataValid values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsDataValid in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_data_valid_build_string_from_mask (QmiPdsDataValid mask);
#endif

GType qmi_pds_tracking_session_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_TRACKING_SESSION_STATE (qmi_pds_tracking_session_state_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_TRACKING_SESSION_STATE_IS_ENUM__

#if defined __QMI_PDS_TRACKING_SESSION_STATE_IS_ENUM__
/**
 * qmi_pds_tracking_session_state_get_string:
 * @val: a QmiPdsTrackingSessionState.
 *
 * Gets the nickname string for the #QmiPdsTrackingSessionState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_tracking_session_state_get_string (QmiPdsTrackingSessionState val);
#endif

#if defined __QMI_PDS_TRACKING_SESSION_STATE_IS_FLAGS__
/**
 * qmi_pds_tracking_session_state_build_string_from_mask:
 * @mask: bitmask of QmiPdsTrackingSessionState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsTrackingSessionState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_tracking_session_state_build_string_from_mask (QmiPdsTrackingSessionState mask);
#endif

GType qmi_pds_operating_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_OPERATING_MODE (qmi_pds_operating_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_OPERATING_MODE_IS_ENUM__

#if defined __QMI_PDS_OPERATING_MODE_IS_ENUM__
/**
 * qmi_pds_operating_mode_get_string:
 * @val: a QmiPdsOperatingMode.
 *
 * Gets the nickname string for the #QmiPdsOperatingMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_operating_mode_get_string (QmiPdsOperatingMode val);
#endif

#if defined __QMI_PDS_OPERATING_MODE_IS_FLAGS__
/**
 * qmi_pds_operating_mode_build_string_from_mask:
 * @mask: bitmask of QmiPdsOperatingMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsOperatingMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_operating_mode_build_string_from_mask (QmiPdsOperatingMode mask);
#endif

GType qmi_pds_network_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PDS_NETWORK_MODE (qmi_pds_network_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_PDS_NETWORK_MODE_IS_ENUM__

#if defined __QMI_PDS_NETWORK_MODE_IS_ENUM__
/**
 * qmi_pds_network_mode_get_string:
 * @val: a QmiPdsNetworkMode.
 *
 * Gets the nickname string for the #QmiPdsNetworkMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pds_network_mode_get_string (QmiPdsNetworkMode val);
#endif

#if defined __QMI_PDS_NETWORK_MODE_IS_FLAGS__
/**
 * qmi_pds_network_mode_build_string_from_mask:
 * @mask: bitmask of QmiPdsNetworkMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPdsNetworkMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pds_network_mode_build_string_from_mask (QmiPdsNetworkMode mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-pbm.h" */
GType qmi_pbm_event_registration_flag_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PBM_EVENT_REGISTRATION_FLAG (qmi_pbm_event_registration_flag_get_type ())

/* Define type-specific symbols */
#define __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_FLAGS__

#if defined __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_ENUM__
/**
 * qmi_pbm_event_registration_flag_get_string:
 * @val: a QmiPbmEventRegistrationFlag.
 *
 * Gets the nickname string for the #QmiPbmEventRegistrationFlag specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pbm_event_registration_flag_get_string (QmiPbmEventRegistrationFlag val);
#endif

#if defined __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_FLAGS__
/**
 * qmi_pbm_event_registration_flag_build_string_from_mask:
 * @mask: bitmask of QmiPbmEventRegistrationFlag values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPbmEventRegistrationFlag in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pbm_event_registration_flag_build_string_from_mask (QmiPbmEventRegistrationFlag mask);
#endif

GType qmi_pbm_phonebook_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PBM_PHONEBOOK_TYPE (qmi_pbm_phonebook_type_get_type ())

/* Define type-specific symbols */
#define __QMI_PBM_PHONEBOOK_TYPE_IS_FLAGS__

#if defined __QMI_PBM_PHONEBOOK_TYPE_IS_ENUM__
/**
 * qmi_pbm_phonebook_type_get_string:
 * @val: a QmiPbmPhonebookType.
 *
 * Gets the nickname string for the #QmiPbmPhonebookType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pbm_phonebook_type_get_string (QmiPbmPhonebookType val);
#endif

#if defined __QMI_PBM_PHONEBOOK_TYPE_IS_FLAGS__
/**
 * qmi_pbm_phonebook_type_build_string_from_mask:
 * @mask: bitmask of QmiPbmPhonebookType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPbmPhonebookType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pbm_phonebook_type_build_string_from_mask (QmiPbmPhonebookType mask);
#endif

GType qmi_pbm_session_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_PBM_SESSION_TYPE (qmi_pbm_session_type_get_type ())

/* Define type-specific symbols */
#define __QMI_PBM_SESSION_TYPE_IS_ENUM__

#if defined __QMI_PBM_SESSION_TYPE_IS_ENUM__
/**
 * qmi_pbm_session_type_get_string:
 * @val: a QmiPbmSessionType.
 *
 * Gets the nickname string for the #QmiPbmSessionType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_pbm_session_type_get_string (QmiPbmSessionType val);
#endif

#if defined __QMI_PBM_SESSION_TYPE_IS_FLAGS__
/**
 * qmi_pbm_session_type_build_string_from_mask:
 * @mask: bitmask of QmiPbmSessionType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiPbmSessionType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_pbm_session_type_build_string_from_mask (QmiPbmSessionType mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-uim.h" */
GType qmi_uim_session_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_SESSION_TYPE (qmi_uim_session_type_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_SESSION_TYPE_IS_ENUM__

#if defined __QMI_UIM_SESSION_TYPE_IS_ENUM__
/**
 * qmi_uim_session_type_get_string:
 * @val: a QmiUimSessionType.
 *
 * Gets the nickname string for the #QmiUimSessionType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_session_type_get_string (QmiUimSessionType val);
#endif

#if defined __QMI_UIM_SESSION_TYPE_IS_FLAGS__
/**
 * qmi_uim_session_type_build_string_from_mask:
 * @mask: bitmask of QmiUimSessionType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimSessionType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_session_type_build_string_from_mask (QmiUimSessionType mask);
#endif

GType qmi_uim_file_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_FILE_TYPE (qmi_uim_file_type_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_FILE_TYPE_IS_ENUM__

#if defined __QMI_UIM_FILE_TYPE_IS_ENUM__
/**
 * qmi_uim_file_type_get_string:
 * @val: a QmiUimFileType.
 *
 * Gets the nickname string for the #QmiUimFileType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_file_type_get_string (QmiUimFileType val);
#endif

#if defined __QMI_UIM_FILE_TYPE_IS_FLAGS__
/**
 * qmi_uim_file_type_build_string_from_mask:
 * @mask: bitmask of QmiUimFileType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimFileType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_file_type_build_string_from_mask (QmiUimFileType mask);
#endif

GType qmi_uim_security_attribute_logic_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_SECURITY_ATTRIBUTE_LOGIC (qmi_uim_security_attribute_logic_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__

#if defined __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
/**
 * qmi_uim_security_attribute_logic_get_string:
 * @val: a QmiUimSecurityAttributeLogic.
 *
 * Gets the nickname string for the #QmiUimSecurityAttributeLogic specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_security_attribute_logic_get_string (QmiUimSecurityAttributeLogic val);
#endif

#if defined __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
/**
 * qmi_uim_security_attribute_logic_build_string_from_mask:
 * @mask: bitmask of QmiUimSecurityAttributeLogic values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimSecurityAttributeLogic in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_security_attribute_logic_build_string_from_mask (QmiUimSecurityAttributeLogic mask);
#endif

GType qmi_uim_security_attribute_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_SECURITY_ATTRIBUTE (qmi_uim_security_attribute_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__

#if defined __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
/**
 * qmi_uim_security_attribute_get_string:
 * @val: a QmiUimSecurityAttribute.
 *
 * Gets the nickname string for the #QmiUimSecurityAttribute specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_security_attribute_get_string (QmiUimSecurityAttribute val);
#endif

#if defined __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
/**
 * qmi_uim_security_attribute_build_string_from_mask:
 * @mask: bitmask of QmiUimSecurityAttribute values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimSecurityAttribute in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_security_attribute_build_string_from_mask (QmiUimSecurityAttribute mask);
#endif

GType qmi_uim_pin_id_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_PIN_ID (qmi_uim_pin_id_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_PIN_ID_IS_ENUM__

#if defined __QMI_UIM_PIN_ID_IS_ENUM__
/**
 * qmi_uim_pin_id_get_string:
 * @val: a QmiUimPinId.
 *
 * Gets the nickname string for the #QmiUimPinId specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_pin_id_get_string (QmiUimPinId val);
#endif

#if defined __QMI_UIM_PIN_ID_IS_FLAGS__
/**
 * qmi_uim_pin_id_build_string_from_mask:
 * @mask: bitmask of QmiUimPinId values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimPinId in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_pin_id_build_string_from_mask (QmiUimPinId mask);
#endif

GType qmi_uim_card_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_STATE (qmi_uim_card_state_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_STATE_IS_ENUM__

#if defined __QMI_UIM_CARD_STATE_IS_ENUM__
/**
 * qmi_uim_card_state_get_string:
 * @val: a QmiUimCardState.
 *
 * Gets the nickname string for the #QmiUimCardState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_state_get_string (QmiUimCardState val);
#endif

#if defined __QMI_UIM_CARD_STATE_IS_FLAGS__
/**
 * qmi_uim_card_state_build_string_from_mask:
 * @mask: bitmask of QmiUimCardState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_state_build_string_from_mask (QmiUimCardState mask);
#endif

GType qmi_uim_pin_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_PIN_STATE (qmi_uim_pin_state_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_PIN_STATE_IS_ENUM__

#if defined __QMI_UIM_PIN_STATE_IS_ENUM__
/**
 * qmi_uim_pin_state_get_string:
 * @val: a QmiUimPinState.
 *
 * Gets the nickname string for the #QmiUimPinState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_pin_state_get_string (QmiUimPinState val);
#endif

#if defined __QMI_UIM_PIN_STATE_IS_FLAGS__
/**
 * qmi_uim_pin_state_build_string_from_mask:
 * @mask: bitmask of QmiUimPinState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimPinState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_pin_state_build_string_from_mask (QmiUimPinState mask);
#endif

GType qmi_uim_card_error_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_ERROR (qmi_uim_card_error_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_ERROR_IS_ENUM__

#if defined __QMI_UIM_CARD_ERROR_IS_ENUM__
/**
 * qmi_uim_card_error_get_string:
 * @val: a QmiUimCardError.
 *
 * Gets the nickname string for the #QmiUimCardError specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_error_get_string (QmiUimCardError val);
#endif

#if defined __QMI_UIM_CARD_ERROR_IS_FLAGS__
/**
 * qmi_uim_card_error_build_string_from_mask:
 * @mask: bitmask of QmiUimCardError values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardError in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_error_build_string_from_mask (QmiUimCardError mask);
#endif

GType qmi_uim_card_application_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_APPLICATION_TYPE (qmi_uim_card_application_type_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_APPLICATION_TYPE_IS_ENUM__

#if defined __QMI_UIM_CARD_APPLICATION_TYPE_IS_ENUM__
/**
 * qmi_uim_card_application_type_get_string:
 * @val: a QmiUimCardApplicationType.
 *
 * Gets the nickname string for the #QmiUimCardApplicationType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_application_type_get_string (QmiUimCardApplicationType val);
#endif

#if defined __QMI_UIM_CARD_APPLICATION_TYPE_IS_FLAGS__
/**
 * qmi_uim_card_application_type_build_string_from_mask:
 * @mask: bitmask of QmiUimCardApplicationType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardApplicationType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_application_type_build_string_from_mask (QmiUimCardApplicationType mask);
#endif

GType qmi_uim_card_application_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_APPLICATION_STATE (qmi_uim_card_application_state_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_APPLICATION_STATE_IS_ENUM__

#if defined __QMI_UIM_CARD_APPLICATION_STATE_IS_ENUM__
/**
 * qmi_uim_card_application_state_get_string:
 * @val: a QmiUimCardApplicationState.
 *
 * Gets the nickname string for the #QmiUimCardApplicationState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_application_state_get_string (QmiUimCardApplicationState val);
#endif

#if defined __QMI_UIM_CARD_APPLICATION_STATE_IS_FLAGS__
/**
 * qmi_uim_card_application_state_build_string_from_mask:
 * @mask: bitmask of QmiUimCardApplicationState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardApplicationState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_application_state_build_string_from_mask (QmiUimCardApplicationState mask);
#endif

GType qmi_uim_card_application_personalization_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_APPLICATION_PERSONALIZATION_STATE (qmi_uim_card_application_personalization_state_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_ENUM__

#if defined __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_ENUM__
/**
 * qmi_uim_card_application_personalization_state_get_string:
 * @val: a QmiUimCardApplicationPersonalizationState.
 *
 * Gets the nickname string for the #QmiUimCardApplicationPersonalizationState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_application_personalization_state_get_string (QmiUimCardApplicationPersonalizationState val);
#endif

#if defined __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_FLAGS__
/**
 * qmi_uim_card_application_personalization_state_build_string_from_mask:
 * @mask: bitmask of QmiUimCardApplicationPersonalizationState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardApplicationPersonalizationState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_application_personalization_state_build_string_from_mask (QmiUimCardApplicationPersonalizationState mask);
#endif

GType qmi_uim_card_application_personalization_feature_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE (qmi_uim_card_application_personalization_feature_get_type ())

/* Define type-specific symbols */
#define __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_ENUM__

#if defined __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_ENUM__
/**
 * qmi_uim_card_application_personalization_feature_get_string:
 * @val: a QmiUimCardApplicationPersonalizationFeature.
 *
 * Gets the nickname string for the #QmiUimCardApplicationPersonalizationFeature specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_uim_card_application_personalization_feature_get_string (QmiUimCardApplicationPersonalizationFeature val);
#endif

#if defined __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_FLAGS__
/**
 * qmi_uim_card_application_personalization_feature_build_string_from_mask:
 * @mask: bitmask of QmiUimCardApplicationPersonalizationFeature values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiUimCardApplicationPersonalizationFeature in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_uim_card_application_personalization_feature_build_string_from_mask (QmiUimCardApplicationPersonalizationFeature mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-oma.h" */
GType qmi_oma_session_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_OMA_SESSION_TYPE (qmi_oma_session_type_get_type ())

/* Define type-specific symbols */
#define __QMI_OMA_SESSION_TYPE_IS_ENUM__

#if defined __QMI_OMA_SESSION_TYPE_IS_ENUM__
/**
 * qmi_oma_session_type_get_string:
 * @val: a QmiOmaSessionType.
 *
 * Gets the nickname string for the #QmiOmaSessionType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_oma_session_type_get_string (QmiOmaSessionType val);
#endif

#if defined __QMI_OMA_SESSION_TYPE_IS_FLAGS__
/**
 * qmi_oma_session_type_build_string_from_mask:
 * @mask: bitmask of QmiOmaSessionType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiOmaSessionType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_oma_session_type_build_string_from_mask (QmiOmaSessionType mask);
#endif

GType qmi_oma_session_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_OMA_SESSION_STATE (qmi_oma_session_state_get_type ())

/* Define type-specific symbols */
#define __QMI_OMA_SESSION_STATE_IS_ENUM__

#if defined __QMI_OMA_SESSION_STATE_IS_ENUM__
/**
 * qmi_oma_session_state_get_string:
 * @val: a QmiOmaSessionState.
 *
 * Gets the nickname string for the #QmiOmaSessionState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_oma_session_state_get_string (QmiOmaSessionState val);
#endif

#if defined __QMI_OMA_SESSION_STATE_IS_FLAGS__
/**
 * qmi_oma_session_state_build_string_from_mask:
 * @mask: bitmask of QmiOmaSessionState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiOmaSessionState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_oma_session_state_build_string_from_mask (QmiOmaSessionState mask);
#endif

GType qmi_oma_session_failed_reason_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_OMA_SESSION_FAILED_REASON (qmi_oma_session_failed_reason_get_type ())

/* Define type-specific symbols */
#define __QMI_OMA_SESSION_FAILED_REASON_IS_ENUM__

#if defined __QMI_OMA_SESSION_FAILED_REASON_IS_ENUM__
/**
 * qmi_oma_session_failed_reason_get_string:
 * @val: a QmiOmaSessionFailedReason.
 *
 * Gets the nickname string for the #QmiOmaSessionFailedReason specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_oma_session_failed_reason_get_string (QmiOmaSessionFailedReason val);
#endif

#if defined __QMI_OMA_SESSION_FAILED_REASON_IS_FLAGS__
/**
 * qmi_oma_session_failed_reason_build_string_from_mask:
 * @mask: bitmask of QmiOmaSessionFailedReason values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiOmaSessionFailedReason in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_oma_session_failed_reason_build_string_from_mask (QmiOmaSessionFailedReason mask);
#endif

GType qmi_oma_hfa_feature_done_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_OMA_HFA_FEATURE_DONE_STATE (qmi_oma_hfa_feature_done_state_get_type ())

/* Define type-specific symbols */
#define __QMI_OMA_HFA_FEATURE_DONE_STATE_IS_ENUM__

#if defined __QMI_OMA_HFA_FEATURE_DONE_STATE_IS_ENUM__
/**
 * qmi_oma_hfa_feature_done_state_get_string:
 * @val: a QmiOmaHfaFeatureDoneState.
 *
 * Gets the nickname string for the #QmiOmaHfaFeatureDoneState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_oma_hfa_feature_done_state_get_string (QmiOmaHfaFeatureDoneState val);
#endif

#if defined __QMI_OMA_HFA_FEATURE_DONE_STATE_IS_FLAGS__
/**
 * qmi_oma_hfa_feature_done_state_build_string_from_mask:
 * @mask: bitmask of QmiOmaHfaFeatureDoneState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiOmaHfaFeatureDoneState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_oma_hfa_feature_done_state_build_string_from_mask (QmiOmaHfaFeatureDoneState mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-wda.h" */
GType qmi_wda_link_layer_protocol_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDA_LINK_LAYER_PROTOCOL (qmi_wda_link_layer_protocol_get_type ())

/* Define type-specific symbols */
#define __QMI_WDA_LINK_LAYER_PROTOCOL_IS_ENUM__

#if defined __QMI_WDA_LINK_LAYER_PROTOCOL_IS_ENUM__
/**
 * qmi_wda_link_layer_protocol_get_string:
 * @val: a QmiWdaLinkLayerProtocol.
 *
 * Gets the nickname string for the #QmiWdaLinkLayerProtocol specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wda_link_layer_protocol_get_string (QmiWdaLinkLayerProtocol val);
#endif

#if defined __QMI_WDA_LINK_LAYER_PROTOCOL_IS_FLAGS__
/**
 * qmi_wda_link_layer_protocol_build_string_from_mask:
 * @mask: bitmask of QmiWdaLinkLayerProtocol values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdaLinkLayerProtocol in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wda_link_layer_protocol_build_string_from_mask (QmiWdaLinkLayerProtocol mask);
#endif

GType qmi_wda_data_aggregation_protocol_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_WDA_DATA_AGGREGATION_PROTOCOL (qmi_wda_data_aggregation_protocol_get_type ())

/* Define type-specific symbols */
#define __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__

#if defined __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
/**
 * qmi_wda_data_aggregation_protocol_get_string:
 * @val: a QmiWdaDataAggregationProtocol.
 *
 * Gets the nickname string for the #QmiWdaDataAggregationProtocol specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_wda_data_aggregation_protocol_get_string (QmiWdaDataAggregationProtocol val);
#endif

#if defined __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
/**
 * qmi_wda_data_aggregation_protocol_build_string_from_mask:
 * @mask: bitmask of QmiWdaDataAggregationProtocol values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiWdaDataAggregationProtocol in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_wda_data_aggregation_protocol_build_string_from_mask (QmiWdaDataAggregationProtocol mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-voice.h" */
GType qmi_voice_call_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_CALL_STATE (qmi_voice_call_state_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_CALL_STATE_IS_ENUM__

#if defined __QMI_VOICE_CALL_STATE_IS_ENUM__
/**
 * qmi_voice_call_state_get_string:
 * @val: a QmiVoiceCallState.
 *
 * Gets the nickname string for the #QmiVoiceCallState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_call_state_get_string (QmiVoiceCallState val);
#endif

#if defined __QMI_VOICE_CALL_STATE_IS_FLAGS__
/**
 * qmi_voice_call_state_build_string_from_mask:
 * @mask: bitmask of QmiVoiceCallState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceCallState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_call_state_build_string_from_mask (QmiVoiceCallState mask);
#endif

GType qmi_voice_call_type_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_CALL_TYPE (qmi_voice_call_type_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_CALL_TYPE_IS_ENUM__

#if defined __QMI_VOICE_CALL_TYPE_IS_ENUM__
/**
 * qmi_voice_call_type_get_string:
 * @val: a QmiVoiceCallType.
 *
 * Gets the nickname string for the #QmiVoiceCallType specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_call_type_get_string (QmiVoiceCallType val);
#endif

#if defined __QMI_VOICE_CALL_TYPE_IS_FLAGS__
/**
 * qmi_voice_call_type_build_string_from_mask:
 * @mask: bitmask of QmiVoiceCallType values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceCallType in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_call_type_build_string_from_mask (QmiVoiceCallType mask);
#endif

GType qmi_voice_call_direction_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_CALL_DIRECTION (qmi_voice_call_direction_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_CALL_DIRECTION_IS_ENUM__

#if defined __QMI_VOICE_CALL_DIRECTION_IS_ENUM__
/**
 * qmi_voice_call_direction_get_string:
 * @val: a QmiVoiceCallDirection.
 *
 * Gets the nickname string for the #QmiVoiceCallDirection specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_call_direction_get_string (QmiVoiceCallDirection val);
#endif

#if defined __QMI_VOICE_CALL_DIRECTION_IS_FLAGS__
/**
 * qmi_voice_call_direction_build_string_from_mask:
 * @mask: bitmask of QmiVoiceCallDirection values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceCallDirection in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_call_direction_build_string_from_mask (QmiVoiceCallDirection mask);
#endif

GType qmi_voice_call_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_CALL_MODE (qmi_voice_call_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_CALL_MODE_IS_ENUM__

#if defined __QMI_VOICE_CALL_MODE_IS_ENUM__
/**
 * qmi_voice_call_mode_get_string:
 * @val: a QmiVoiceCallMode.
 *
 * Gets the nickname string for the #QmiVoiceCallMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_call_mode_get_string (QmiVoiceCallMode val);
#endif

#if defined __QMI_VOICE_CALL_MODE_IS_FLAGS__
/**
 * qmi_voice_call_mode_build_string_from_mask:
 * @mask: bitmask of QmiVoiceCallMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceCallMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_call_mode_build_string_from_mask (QmiVoiceCallMode mask);
#endif

GType qmi_voice_als_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_ALS (qmi_voice_als_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_ALS_IS_ENUM__

#if defined __QMI_VOICE_ALS_IS_ENUM__
/**
 * qmi_voice_als_get_string:
 * @val: a QmiVoiceAls.
 *
 * Gets the nickname string for the #QmiVoiceAls specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_als_get_string (QmiVoiceAls val);
#endif

#if defined __QMI_VOICE_ALS_IS_FLAGS__
/**
 * qmi_voice_als_build_string_from_mask:
 * @mask: bitmask of QmiVoiceAls values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceAls in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_als_build_string_from_mask (QmiVoiceAls mask);
#endif

GType qmi_voice_presentation_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_PRESENTATION (qmi_voice_presentation_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_PRESENTATION_IS_ENUM__

#if defined __QMI_VOICE_PRESENTATION_IS_ENUM__
/**
 * qmi_voice_presentation_get_string:
 * @val: a QmiVoicePresentation.
 *
 * Gets the nickname string for the #QmiVoicePresentation specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_presentation_get_string (QmiVoicePresentation val);
#endif

#if defined __QMI_VOICE_PRESENTATION_IS_FLAGS__
/**
 * qmi_voice_presentation_build_string_from_mask:
 * @mask: bitmask of QmiVoicePresentation values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoicePresentation in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_presentation_build_string_from_mask (QmiVoicePresentation mask);
#endif

GType qmi_voice_tty_mode_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_TTY_MODE (qmi_voice_tty_mode_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_TTY_MODE_IS_ENUM__

#if defined __QMI_VOICE_TTY_MODE_IS_ENUM__
/**
 * qmi_voice_tty_mode_get_string:
 * @val: a QmiVoiceTtyMode.
 *
 * Gets the nickname string for the #QmiVoiceTtyMode specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_tty_mode_get_string (QmiVoiceTtyMode val);
#endif

#if defined __QMI_VOICE_TTY_MODE_IS_FLAGS__
/**
 * qmi_voice_tty_mode_build_string_from_mask:
 * @mask: bitmask of QmiVoiceTtyMode values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceTtyMode in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_tty_mode_build_string_from_mask (QmiVoiceTtyMode mask);
#endif

GType qmi_voice_service_option_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_SERVICE_OPTION (qmi_voice_service_option_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_SERVICE_OPTION_IS_ENUM__

#if defined __QMI_VOICE_SERVICE_OPTION_IS_ENUM__
/**
 * qmi_voice_service_option_get_string:
 * @val: a QmiVoiceServiceOption.
 *
 * Gets the nickname string for the #QmiVoiceServiceOption specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_service_option_get_string (QmiVoiceServiceOption val);
#endif

#if defined __QMI_VOICE_SERVICE_OPTION_IS_FLAGS__
/**
 * qmi_voice_service_option_build_string_from_mask:
 * @mask: bitmask of QmiVoiceServiceOption values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceServiceOption in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_service_option_build_string_from_mask (QmiVoiceServiceOption mask);
#endif

GType qmi_voice_wcdma_amr_status_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_WCDMA_AMR_STATUS (qmi_voice_wcdma_amr_status_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_WCDMA_AMR_STATUS_IS_FLAGS__

#if defined __QMI_VOICE_WCDMA_AMR_STATUS_IS_ENUM__
/**
 * qmi_voice_wcdma_amr_status_get_string:
 * @val: a QmiVoiceWcdmaAmrStatus.
 *
 * Gets the nickname string for the #QmiVoiceWcdmaAmrStatus specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_wcdma_amr_status_get_string (QmiVoiceWcdmaAmrStatus val);
#endif

#if defined __QMI_VOICE_WCDMA_AMR_STATUS_IS_FLAGS__
/**
 * qmi_voice_wcdma_amr_status_build_string_from_mask:
 * @mask: bitmask of QmiVoiceWcdmaAmrStatus values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceWcdmaAmrStatus in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_wcdma_amr_status_build_string_from_mask (QmiVoiceWcdmaAmrStatus mask);
#endif

GType qmi_voice_privacy_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_PRIVACY (qmi_voice_privacy_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_PRIVACY_IS_ENUM__

#if defined __QMI_VOICE_PRIVACY_IS_ENUM__
/**
 * qmi_voice_privacy_get_string:
 * @val: a QmiVoicePrivacy.
 *
 * Gets the nickname string for the #QmiVoicePrivacy specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_privacy_get_string (QmiVoicePrivacy val);
#endif

#if defined __QMI_VOICE_PRIVACY_IS_FLAGS__
/**
 * qmi_voice_privacy_build_string_from_mask:
 * @mask: bitmask of QmiVoicePrivacy values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoicePrivacy in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_privacy_build_string_from_mask (QmiVoicePrivacy mask);
#endif

GType qmi_voice_domain_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_VOICE_DOMAIN (qmi_voice_domain_get_type ())

/* Define type-specific symbols */
#define __QMI_VOICE_DOMAIN_IS_ENUM__

#if defined __QMI_VOICE_DOMAIN_IS_ENUM__
/**
 * qmi_voice_domain_get_string:
 * @val: a QmiVoiceDomain.
 *
 * Gets the nickname string for the #QmiVoiceDomain specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_voice_domain_get_string (QmiVoiceDomain val);
#endif

#if defined __QMI_VOICE_DOMAIN_IS_FLAGS__
/**
 * qmi_voice_domain_build_string_from_mask:
 * @mask: bitmask of QmiVoiceDomain values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiVoiceDomain in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_voice_domain_build_string_from_mask (QmiVoiceDomain mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-enums-loc.h" */
GType qmi_loc_intermediate_report_state_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_LOC_INTERMEDIATE_REPORT_STATE (qmi_loc_intermediate_report_state_get_type ())

/* Define type-specific symbols */
#define __QMI_LOC_INTERMEDIATE_REPORT_STATE_IS_ENUM__

#if defined __QMI_LOC_INTERMEDIATE_REPORT_STATE_IS_ENUM__
/**
 * qmi_loc_intermediate_report_state_get_string:
 * @val: a QmiLocIntermediateReportState.
 *
 * Gets the nickname string for the #QmiLocIntermediateReportState specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_loc_intermediate_report_state_get_string (QmiLocIntermediateReportState val);
#endif

#if defined __QMI_LOC_INTERMEDIATE_REPORT_STATE_IS_FLAGS__
/**
 * qmi_loc_intermediate_report_state_build_string_from_mask:
 * @mask: bitmask of QmiLocIntermediateReportState values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiLocIntermediateReportState in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_loc_intermediate_report_state_build_string_from_mask (QmiLocIntermediateReportState mask);
#endif


/* enumerations from "../../../src/libqmi-glib/qmi-device.h" */
GType qmi_device_open_flags_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DEVICE_OPEN_FLAGS (qmi_device_open_flags_get_type ())

/* Define type-specific symbols */
#define __QMI_DEVICE_OPEN_FLAGS_IS_FLAGS__

#if defined __QMI_DEVICE_OPEN_FLAGS_IS_ENUM__
/**
 * qmi_device_open_flags_get_string:
 * @val: a QmiDeviceOpenFlags.
 *
 * Gets the nickname string for the #QmiDeviceOpenFlags specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_device_open_flags_get_string (QmiDeviceOpenFlags val);
#endif

#if defined __QMI_DEVICE_OPEN_FLAGS_IS_FLAGS__
/**
 * qmi_device_open_flags_build_string_from_mask:
 * @mask: bitmask of QmiDeviceOpenFlags values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDeviceOpenFlags in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_device_open_flags_build_string_from_mask (QmiDeviceOpenFlags mask);
#endif

GType qmi_device_release_client_flags_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DEVICE_RELEASE_CLIENT_FLAGS (qmi_device_release_client_flags_get_type ())

/* Define type-specific symbols */
#define __QMI_DEVICE_RELEASE_CLIENT_FLAGS_IS_FLAGS__

#if defined __QMI_DEVICE_RELEASE_CLIENT_FLAGS_IS_ENUM__
/**
 * qmi_device_release_client_flags_get_string:
 * @val: a QmiDeviceReleaseClientFlags.
 *
 * Gets the nickname string for the #QmiDeviceReleaseClientFlags specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_device_release_client_flags_get_string (QmiDeviceReleaseClientFlags val);
#endif

#if defined __QMI_DEVICE_RELEASE_CLIENT_FLAGS_IS_FLAGS__
/**
 * qmi_device_release_client_flags_build_string_from_mask:
 * @mask: bitmask of QmiDeviceReleaseClientFlags values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDeviceReleaseClientFlags in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_device_release_client_flags_build_string_from_mask (QmiDeviceReleaseClientFlags mask);
#endif

GType qmi_device_expected_data_format_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_DEVICE_EXPECTED_DATA_FORMAT (qmi_device_expected_data_format_get_type ())

/* Define type-specific symbols */
#define __QMI_DEVICE_EXPECTED_DATA_FORMAT_IS_ENUM__

#if defined __QMI_DEVICE_EXPECTED_DATA_FORMAT_IS_ENUM__
/**
 * qmi_device_expected_data_format_get_string:
 * @val: a QmiDeviceExpectedDataFormat.
 *
 * Gets the nickname string for the #QmiDeviceExpectedDataFormat specified at @val.
 *
 * Returns: (transfer none): a string with the nickname, or %NULL if not found. Do not free the returned value.
 */
const gchar *qmi_device_expected_data_format_get_string (QmiDeviceExpectedDataFormat val);
#endif

#if defined __QMI_DEVICE_EXPECTED_DATA_FORMAT_IS_FLAGS__
/**
 * qmi_device_expected_data_format_build_string_from_mask:
 * @mask: bitmask of QmiDeviceExpectedDataFormat values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDeviceExpectedDataFormat in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_device_expected_data_format_build_string_from_mask (QmiDeviceExpectedDataFormat mask);
#endif

G_END_DECLS

#endif /* __LIBQMI_GLIB_ENUM_TYPES_H__ */

/* Generated data ends here */

