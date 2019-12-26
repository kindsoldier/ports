#
# $Id$
#
PORTNAME=	argp-standalone
PORTVERSION=	1.3
CATEGORIES=	devel
MASTER_SITES=	http://www.lysator.liu.se/~nisse/misc/ LOCAL/sem
PKGNAMEPREFIX=	lib


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standalone version of arguments parsing functions from GLIBC

USES=		gmake autoreconf libtool
USE_CSTD=	gnu89
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

#post-patch:
#	cd  ${WRKSRC} && autoreconf -fiv

post-install:
	${INSTALL_DATA} ${WRKSRC}/argp.h ${STAGEDIR}${PREFIX}/include

.include <bsd.port.mk>
