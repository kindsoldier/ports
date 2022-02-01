#
# $Id: Makefile 2233 2009-08-31 16:36:20Z root $
# $URL: file:///usr2/svn/ports5/network-utils/curl/Makefile $
#
PORTNAME=	curl
PORTVERSION=	7.81.0 #7.48.0
CATEGORIES=	ftp www
MASTER_SITES+=	http://curl.haxx.se/download/ 
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Non-interactive tool to get files from FTP, GOPHER, HTTP(S) servers

RUN_DEPENDS+= ${LOCALBASE}/etc/ca-bundle.crt:crypto/ca-bundle
BUILD_DEPENDS+= ${LOCALBASE}/etc/ca-bundle.crt:crypto/ca-bundle

LIB_DEPENDS+=	libnghttp2.so:net/libnghttp2
#LIB_DEPENDS+=	libssh2.so:net/libssh2


GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes

CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-zlib=/usr
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --with-libidn=${LOCALBASE}
CONFIGURE_ARGS+= --without-libssh2

CONFIGURE_ARGS+= --disable-sspi

CONFIGURE_ARGS+= --enable-cookies
CONFIGURE_ARGS+= --enable-crypto-auth
CONFIGURE_ARGS+= --enable-dict
CONFIGURE_ARGS+= --enable-file
CONFIGURE_ARGS+= --enable-ftp
CONFIGURE_ARGS+= --enable-http

CONFIGURE_ARGS+= --enable-http2

CONFIGURE_ARGS+= --enable-imap
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-nonblocking
CONFIGURE_ARGS+= --enable-pop3
CONFIGURE_ARGS+= --enable-proxy
CONFIGURE_ARGS+= --enable-rtsp
CONFIGURE_ARGS+= --enable-smtp
CONFIGURE_ARGS+= --enable-telnet
CONFIGURE_ARGS+= --enable-tftp
CONFIGURE_ARGS+= --enable-threaded-resolver

CONFIGURE_ARGS+= --without-gssapi
CONFIGURE_ARGS+= --without-krb4
CONFIGURE_ARGS+= --without-librtmp
CONFIGURE_ARGS+= --without-nss
CONFIGURE_ARGS+= --without-spnego
CONFIGURE_ARGS+= --without-ldap

CONFIGURE_ARGS+= --with-ssl
CONFIGURE_ARGS+= --without-gnutls

CONFIGURE_ARGS+= --with-ca-bundle=${LOCALBASE}/etc/ca-bundle.crt
#CONFIGURE_ARGS+= --without-ca-bundle
#CONFIGURE_ARGS+= --with-ca-path=${LOCALBASE}/etc/ca-bundle.d
CONFIGURE_ARGS+= --without-ca-path

.include <bsd.port.mk>
#EOF
