#pragma once

/*
* Copyright (C) Igor Sysoev
* Copyright (C) Nginx, Inc.
*/


#ifndef _NGX_RIO_MODULE_H_INCLUDED_
#define _NGX_RIO_MODULE_H_INCLUDED_


typedef struct {
	int  threads;
	int  post_acceptex;
	int  acceptex_read;
} ngx_windows_rio_conf_t;


extern ngx_module_t  ngx_windows_rio_module;


#endif /* _NGX_RIO_MODULE_H_INCLUDED_ */
