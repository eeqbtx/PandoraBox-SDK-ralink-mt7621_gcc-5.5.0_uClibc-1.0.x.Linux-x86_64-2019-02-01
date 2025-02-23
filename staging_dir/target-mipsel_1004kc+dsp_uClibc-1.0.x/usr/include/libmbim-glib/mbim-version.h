/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2013 Lanedo GmbH
 * Copyright (C) 2013 - 2014 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _MBIM_VERSION_H_
#define _MBIM_VERSION_H_

/**
 * SECTION:mbim-version
 * @short_description: Version information in the API.
 *
 * This section defines types that are used to identify the libmbim-glib version.
 **/

/**
 * MBIM_MAJOR_VERSION:
 *
 * Evaluates to the major version number of libmbim-glib which this source
 * is compiled against.
 */
#define MBIM_MAJOR_VERSION (1)

/**
 * MBIM_MINOR_VERSION:
 *
 * Evaluates to the minor version number of libmbim-glib which this source
 * is compiled against.
 */
#define MBIM_MINOR_VERSION (16)

/**
 * MBIM_MICRO_VERSION:
 *
 * Evaluates to the micro version number of libmbim-glib which this source
 * compiled against.
 */
#define MBIM_MICRO_VERSION (2)

/**
 * MBIM_CHECK_VERSION:
 * @major: major version (e.g. 1 for version 1.2.5)
 * @minor: minor version (e.g. 2 for version 1.2.5)
 * @micro: micro version (e.g. 5 for version 1.2.5)
 *
 * Returns: %TRUE if the version of the libmbim-glib header files
 * is the same as or newer than the passed-in version.
 */
#define MBIM_CHECK_VERSION(major,minor,micro)                         \
    (MBIM_MAJOR_VERSION > (major) ||                                  \
     (MBIM_MAJOR_VERSION == (major) && MBIM_MINOR_VERSION > (minor)) || \
     (MBIM_MAJOR_VERSION == (major) && MBIM_MINOR_VERSION == (minor) && MBIM_MICRO_VERSION >= (micro)))

#endif /* _MBIM_VERSION_H_ */
