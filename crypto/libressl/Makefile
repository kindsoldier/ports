# Created by: Vsevolod Stakhov <vsevolod@FreeBSD.org>
# $FreeBSD: head/security/libressl/Makefile 440004 2017-05-03 08:44:36Z brnrd $

PORTNAME=	libressl
PORTVERSION=	2.8.3 #2.7.4
CATEGORIES=	security devel
MASTER_SITES=	OPENBSD/LibreSSL

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	Free version of the SSL/TLS protocol forked from OpenSSL

GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig autoreconf gmake
USE_LDCONFIG=	yes
OPTIONS_SUB=	yes
CFLAGS+=	-fpic -DPIC -Wl,-rpath,${PREFIX}/lib -Wl,--as-needed
LDFLAGS+=	-pthread


INSTALL_TARGET=	install-strip
TEST_TARGET=	check

#post-install:
#	${RM} -r ${STAGEDIR}/${PREFIX}/etc/ssl/cert.pem

.include <bsd.port.mk>
#EOF
