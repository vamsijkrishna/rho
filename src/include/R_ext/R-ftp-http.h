/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 2001-2016 The R Core Team.
 *  Copyright (C) 2008-2014  Andrew R. Runnalls.
 *  Copyright (C) 2014 and onwards the Rho Project Authors.
 *
 *  Rho is not part of the R project, and bugs and other issues should
 *  not be reported via r-bugs or other R project channels; instead refer
 *  to the Rho website.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2.1 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, a copy is available at
 *  https://www.R-project.org/Licenses/
 */

/* Advertized entry points, for that part of libxml included in
 * the internet module.
 */

#ifndef R_FTP_HTTP_H_
#define R_FTP_HTTP_H_

/*
  allow for 'large' files (>= 2GB) on 32-bit systems, where supported.
*/
/* required by C99/C11 */
#ifndef NO_C_HEADERS
# ifdef __cplusplus
#  include <cstdint>
# else
#  include <stdint.h>
# endif
#endif
typedef int_fast64_t DLsize_t; // used for download lengths and sizes

#ifdef __cplusplus
extern "C" {
#endif

void *R_HTTPOpen(const char *url);
int   R_HTTPRead(void *ctx, char *dest, int len);
void  R_HTTPClose(void *ctx);

void *R_FTPOpen(const char *url);
int   R_FTPRead(void *ctx, char *dest, int len);
void  R_FTPClose(void *ctx);

void *	RxmlNanoHTTPOpen(const char *URL, char **contentType, const char *headers, int cacheOK);
int	RxmlNanoHTTPRead(void *ctx, void *dest, int len);
void	RxmlNanoHTTPClose(void *ctx);
int 	RxmlNanoHTTPReturnCode(void *ctx);
char * 	RxmlNanoHTTPStatusMsg(void *ctx);
DLsize_t RxmlNanoHTTPContentLength(void *ctx);
char *	RxmlNanoHTTPContentType(void *ctx);
void	RxmlNanoHTTPTimeout(int delay);

void *	RxmlNanoFTPOpen(const char *URL);
int	RxmlNanoFTPRead(void *ctx, void *dest, int len);
int	RxmlNanoFTPClose(void *ctx);
void	RxmlNanoFTPTimeout(int delay);
DLsize_t RxmlNanoFTPContentLength(void *ctx);

void    RxmlMessage(int level, const char *format, ...);

/* not currently used */

void RxmlNanoFTPCleanup(void);
void RxmlNanoHTTPCleanup(void);

#ifdef __cplusplus
}
#endif

#endif /* R_FTP_HTTP_H_ */
