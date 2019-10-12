/*
   Unix SMB/CIFS implementation.

   manipulate nbt name structures

   Copyright (C) Andrew Tridgell 2005

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _____LIBCLI_NBT_NBT_PROTO_H__
#define _____LIBCLI_NBT_NBT_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../libcli/nbt/nbtsocket.c  */

struct nbt_name_request *nbt_name_request_send(struct nbt_name_socket *nbtsock,
					       struct socket_address *dest,
					       struct nbt_name_packet *request,
					       int timeout, int retries,
					       bool allow_multiple_replies);
NTSTATUS nbt_name_request_recv(struct nbt_name_request *req);

/* The following definitions come from ../libcli/nbt/namequery.c  */


/* The following definitions come from ../libcli/nbt/nameregister.c  */

struct nbt_name_request *nbt_name_register_send(struct nbt_name_socket *nbtsock,
						struct nbt_name_register *io);
NTSTATUS nbt_name_register_bcast(struct nbt_name_socket *nbtsock,
				 struct nbt_name_register_bcast *io);

/* The following definitions come from ../libcli/nbt/namerefresh.c  */

struct nbt_name_request *nbt_name_refresh_send(struct nbt_name_socket *nbtsock,
					       struct nbt_name_refresh *io);

/* The following definitions come from ../libcli/nbt/namerelease.c  */

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* _____LIBCLI_NBT_NBT_PROTO_H__ */
