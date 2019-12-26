#
# $Id$
#
PORTNAME=	libev
PORTVERSION=	4.22
CATEGORIES=	devel
MASTER_SITES=	http://dist.schmorp.de/libev/
MASTER_SITES=	http://dist.schmorp.de/libev/Attic/

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Full-featured and high-performance event loop library


GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake pkgconfig
USE_LDCONFIG=	yes

PKGCONFIGDIR=	${PREFIX}/lib/pkgconfig

post-patch:
	${SED} -e 's|%PREFIX%|${PREFIX}|g ; s|%VERSION%|${PORTVERSION}|g' \
		${FILESDIR}/libev.pc.in > ${WRKDIR}/libev.pc

post-install:
	${MKDIR} -p ${STAGEDIR}${PKGCONFIGDIR}/
	${INSTALL_DATA} ${WRKDIR}/libev.pc ${STAGEDIR}${PKGCONFIGDIR}/

.include <bsd.port.mk>
#EOF
