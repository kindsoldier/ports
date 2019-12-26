#
# $Id$
#
PORTNAME=	mdds
PORTVERSION=	1.2.2 #0.11.1
CATEGORIES=	devel
MASTER_SITES=	http://kohei.us/files/mdds/src/
DISTNAME=	${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	office@FreeBSD.org
COMMENT=	Multi-dimensional data index algorithm

PROJECTHOST=	multidimalgorithm

USES+=		tar:bz2
NO_BUILD=	yes

do-configure:
	${SED} -e 's|@prefix@|${PREFIX}|' \
	    -e 's|@includedir@|$${prefix}/include|' \
	    -e 's|@VERSION@|${PORTVERSION}|' \
	    ${WRKSRC}/misc/mdds.pc.in > ${WRKSRC}/misc/mdds.pc

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	cd ${WRKSRC} && ${COPYTREE_SHARE} include ${STAGEDIR}${PREFIX}
	${INSTALL_DATA} ${WRKSRC}/misc/mdds.pc \
	    ${STAGEDIR}${PREFIX}/lib/pkgconfig

.include <bsd.port.mk>
#EOF
