
/* Generated data (by glib-mkenums) */

#ifndef __LIBMBIM_GLIB_ERROR_TYPES_H__
#define __LIBMBIM_GLIB_ERROR_TYPES_H__
#include "mbim-errors.h"

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "../../../src/libmbim-glib/mbim-errors.h" */
GQuark mbim_core_error_quark    (void);
GType  mbim_core_error_get_type (void) G_GNUC_CONST;
#define MBIM_CORE_ERROR (mbim_core_error_quark ())
#define MBIM_TYPE_CORE_ERROR (mbim_core_error_get_type ())
const gchar *mbim_core_error_get_string (MbimCoreError val);
GQuark mbim_protocol_error_quark    (void);
GType  mbim_protocol_error_get_type (void) G_GNUC_CONST;
#define MBIM_PROTOCOL_ERROR (mbim_protocol_error_quark ())
#define MBIM_TYPE_PROTOCOL_ERROR (mbim_protocol_error_get_type ())
const gchar *mbim_protocol_error_get_string (MbimProtocolError val);
GQuark mbim_status_error_quark    (void);
GType  mbim_status_error_get_type (void) G_GNUC_CONST;
#define MBIM_STATUS_ERROR (mbim_status_error_quark ())
#define MBIM_TYPE_STATUS_ERROR (mbim_status_error_get_type ())
const gchar *mbim_status_error_get_string (MbimStatusError val);
G_END_DECLS

#endif /* __LIBMBIM_GLIB_ERROR_TYPES_H__ */

/* Generated data ends here */

