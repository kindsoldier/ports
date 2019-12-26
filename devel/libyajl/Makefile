#
# $Id$
#
PORTNAME=	yajl
PORTVERSION=	2.1.0
CATEGORIES=	devel
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Portable JSON parsing and serialization library in ANSI C

WRKSRC=		${WRKDIR}/lloyd-yajl-66cb08c

CFLAGS+=	-O1
USE_CMAKE=	yes
USE_LDCONFIG=	yes
USES=		cmake

PLIST_SUB=	VERSION=${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e "s,share/pkgconfig,lib/pkgconfig,g" \
		${WRKSRC}/src/CMakeLists.txt
	${REINPLACE_CMD} -e 's|include/yajl|include|' \
		${WRKSRC}/src/yajl.pc.cmake

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${MV} libyajl_s.a libyajl.a

.include <bsd.port.mk>
#EOF
