# Created by: Tobias Roth <ports@fsck.ch>
# $FreeBSD: head/x11/slim/Makefile 437182 2017-03-29 06:50:28Z ashish $

PORTNAME=	slim
PORTVERSION=	1.3.6
CATEGORIES=	x11
MASTER_SITES=	ftp://ftp.berlios.de/pub/slim/ SF/slim.berlios

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Graphical login manager for X11, derived from Login.app

BUILD_DEPENDS=	libpthread-stubs>=0:x11/libpthread-stubs
LIB_DEPENDS=	libpng.so:graph/libpng
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libxcb.so:x11/libxcb
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXt.so:x11/libXt

USES=		cmake pkgconfig
USE_RC_SUBR=	slim
USE_LDCONFIG=	yes
SUB_FILES=	pkg-message

#CMAKE_ARGS+=	-DUSE_CONSOLEKIT=no
#CMAKE_ARGS+=	-DBUILD_SLIMLOCK=no
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=no
#CMAKE_ARGS+=	-DUSE_PAM=no

CFLAGS+= -I${LOCALBASE}/include/freetype2

post-patch:
	${CP} ${WRKSRC}/slim.conf ${WRKSRC}/slim.conf.sample
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/slim.conf.sample
	${REINPLACE_CMD} -e 's,%%PREFIX%%,${PREFIX},' ${WRKSRC}/slim.1

PORTEXAMPLES=   *

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/*.sample ${STAGEDIR}${EXAMPLESDIR}
.for THEME in fbi arpanet
	${MKDIR} ${STAGEDIR}${PREFIX}/share/slim/themes/${THEME}
	${INSTALL_DATA} ${FILESDIR}/${THEME}/background.png ${STAGEDIR}${PREFIX}/share/slim/themes/${THEME}
	${INSTALL_DATA} ${FILESDIR}/${THEME}/panel.png ${STAGEDIR}${PREFIX}/share/slim/themes/${THEME}
	${INSTALL_DATA} ${FILESDIR}/${THEME}/slim.theme ${STAGEDIR}${PREFIX}/share/slim/themes/${THEME}
.endfor

.include <bsd.port.mk>
#EOF
