#
# $Id$
#
PORTNAME=	mesa-demos
PORTVERSION=	8.4.0
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.freedesktop.org/pub/mesa/demos/${PORTVERSION}/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	OpenGL demos distributed with Mesa

LIB_DEPENDS+=	libGLEW.so:graph/libGLEW
LIB_DEPENDS+=	libglut.so:graph/libGLUT
LIB_DEPENDS+=	libGLU.so:graph/libGLU
LIB_DEPENDS+=	libdrm.so:system/libdrm


GNU_CONFIGURE=	yes
USES=		gmake tar:bzip2

CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --enable-egl
CONFIGURE_ARGS+= --disable-gbm
CONFIGURE_ARGS+= --enable-gles2
CONFIGURE_ARGS+= --disable-osmesa
CONFIGURE_ARGS+= --disable-vg
CONFIGURE_ARGS+= --disable-wayland
CONFIGURE_ARGS+= --with-system-data-files
CONFIGURE_ARGS+= --disable-freetype2

CONFIGURE_ARGS+= --bindir=${PREFIX}/lib/${PORTNAME}

do-build:
	cd ${WRKSRC}/src/util && ${GMAKE} 
	cd ${WRKSRC}/src && ${GMAKE}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ../lib/${PORTNAME}/glxinfo .
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ../lib/${PORTNAME}/glxgears .
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ../lib/${PORTNAME}/glinfo .
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ../lib/${PORTNAME}/eglinfo .
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf ../lib/${PORTNAME}/gears .

.include <bsd.port.mk>
#EOF
