/**
 * \file nc_client.h
 * \author Radek Krejci <rkrejci@cesnet.cz>
 * \brief libnetconf2's main public header for NETCONF clients.
 *
 * Copyright (c) 2015 CESNET, z.s.p.o.
 *
 * This source code is licensed under BSD 3-Clause License (the "License").
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     https://opensource.org/licenses/BSD-3-Clause
 */

#ifndef NC_CLIENT_H_
#define NC_CLIENT_H_

#ifndef NC_ENABLED_SSH
#define NC_ENABLED_SSH
#endif
#ifndef NC_ENABLED_TLS
#define NC_ENABLED_TLS
#endif

#include <libnetconf2/netconf.h>
#include <libnetconf2/log.h>
#include <libnetconf2/messages_client.h>
#include <libnetconf2/session_client.h>
#include <libnetconf2/session_client_ch.h>

#endif /* NC_CLIENT_H_ */
