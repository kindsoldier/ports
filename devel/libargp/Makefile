# Created by: Sergey Matveychuk <sem@ciam.ru>
# $FreeBSD: head/devel/argp-standalone/Makefile 421834 2016-09-11 16:38:32Z amdmi3 $

PORTNAME=       libargp
DISTNAME=	argp-standalone-${PORTVERSION}
PORTVERSION=	1.3
CATEGORIES=	devel
MASTER_SITES=	http://www.lysator.liu.se/~nisse/misc/ LOCAL/sem

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standalone version of arguments parsing functions from GLIBC

USES=		autoreconf libtool gmake
USE_CSTD=	gnu89
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-install:
	${INSTALL_DATA} ${WRKSRC}/argp.h ${STAGEDIR}${PREFIX}/include

.include <bsd.port.mk>
#EOF
