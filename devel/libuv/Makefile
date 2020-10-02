#
# $Id$
#
PORTNAME=	libuv
PORTVERSION=	1.39.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Multi-platform support library with a focus on asynchronous I/O

USE_GITHUB=	yes

USES=		autoreconf libtool gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

pre-configure:
	${ECHO_CMD} "m4_define([UV_EXTRA_AUTOMAKE_FLAGS], [ serial-tests])" \
		> ${WRKSRC}/m4/libuv-extra-automake-flags.m4

post-install:
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.la ${STAGEDIR}${PREFIX}/lib/

.include <bsd.port.mk>
#EOF

