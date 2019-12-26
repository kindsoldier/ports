#
# $Id$
#
PORTNAME=	GLEW
PORTVERSION=	1.13.0
CATEGORIES=	graphics
MASTER_SITES=	SF
PKGNAMEPREFIX=	lib
DISTNAME=	glew-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	The OpenGL Extension Wrangler Library

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libGL.so:graph/libmesa

USES=		gmake tar:tgz
USE_LDCONFIG=	yes

MAKE_ENV+=	GLEW_DEST=${PREFIX}
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's|CFLAGS =|CFLAGS +=|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/glewinfo ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin/visualinfo ${STAGEDIR}${PREFIX}/bin

	${INSTALL_PROGRAM} ${WRKSRC}/lib/libGLEW.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib/libGLEW.so.1
	${INSTALL_PROGRAM} ${WRKSRC}/lib/libGLEWmx.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib/libGLEWmx.so.1
	${LN} -sf ${PREFIX}/lib/libGLEW.so.1 ${STAGEDIR}${PREFIX}/lib/libGLEW.so
	${LN} -sf ${PREFIX}/lib/libGLEWmx.so.1 ${STAGEDIR}${PREFIX}/lib/libGLEWmx.so
	${INSTALL_DATA} ${WRKSRC}/lib/libGLEW.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/lib/libGLEWmx.a ${STAGEDIR}${PREFIX}/lib
	${MKDIR} ${STAGEDIR}${PREFIX}/include/GL
	${INSTALL_DATA} ${WRKSRC}/include/GL/*.h ${STAGEDIR}${PREFIX}/include/GL
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/glew.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/glewmx.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig

.include <bsd.port.mk>
#EOF
