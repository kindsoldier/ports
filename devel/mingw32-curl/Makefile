#
# $Id: Makefile 2233 2009-08-31 16:36:20Z root $
# $URL: file:///usr2/svn/ports5/network-utils/curl/Makefile $
#
PORTNAME=	curl
PORTVERSION=	7.63.0
CATEGORIES=	ftp www
MASTER_SITES+=	http://curl.haxx.se/download/ 
PKGNAMEPREFIX=	${TARGET}-

MAINTAINER=	onborodin@gmail.com
COMMENT=	Non-interactive tool to get files from FTP, GOPHER, HTTP(S) servers

BUILD_DEPENDS+=	${TARGET}-gcc>0:devel/${TARGET}-gcc 
BUILD_DEPENDS+=	${TARGET}-bin-msvcrt>0:devel/${TARGET}-bin-msvcrt
BUILD_DEPENDS+=	${TARGET}-zlib>0:devel/${TARGET}-zlib


HAS_CONFIGURE=	yes
USES+=		gmake

TARGET= mingw32

CONFIGURE_ARGS+= --host=${TARGET}
CONFIGURE_ARGS+= --disable-shared

CONFIGURE_ARGS+= --disable-gopher
CONFIGURE_ARGS+= --disable-manual

CONFIGURE_ARGS+= --disable-dict
CONFIGURE_ARGS+= --disable-http2
CONFIGURE_ARGS+= --disable-proxy
CONFIGURE_ARGS+= --disable-rtsp
CONFIGURE_ARGS+= --disable-sspi
CONFIGURE_ARGS+= --disable-threaded-resolver

CONFIGURE_ARGS+= --enable-cookies
CONFIGURE_ARGS+= --enable-file
CONFIGURE_ARGS+= --enable-ftp
CONFIGURE_ARGS+= --enable-http
CONFIGURE_ARGS+= --enable-imap
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-nonblocking
CONFIGURE_ARGS+= --enable-pop3
CONFIGURE_ARGS+= --enable-smtp
CONFIGURE_ARGS+= --enable-telnet
CONFIGURE_ARGS+= --enable-tftp

CONFIGURE_ARGS+= --without-gnutls
CONFIGURE_ARGS+= --without-gssapi
CONFIGURE_ARGS+= --without-krb4
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-libidn
CONFIGURE_ARGS+= --without-librtmp
CONFIGURE_ARGS+= --without-libssh2
CONFIGURE_ARGS+= --without-nss
CONFIGURE_ARGS+= --without-spnego

CONFIGURE_PREFIX= ${LOCALBASE}/${TARGET}

do-configure:
	cd ${WRKSRC} && ./configure --prefix=${CONFIGURE_PREFIX} ${CONFIGURE_ARGS}


.include <bsd.port.mk>
#EOF
