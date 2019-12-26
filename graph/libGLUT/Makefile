#
# $Id$
#
PORTNAME=	libGLUT
PORTVERSION=	3.0.0
CATEGORIES=	graphics
#MASTER_SITES=	SF
DISTNAME+=	freeglut-${PORTVERSION}

MAINTAINER=	x11@FreeBSD.org
COMMENT=	open source implementation of the GLUT library

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libICE.so:x11/libICE

LIB_DEPENDS+=	libGL.so:graph/libmesa
LIB_DEPENDS+=	libGLU.so:graph/libGLU


USES=		cmake
USE_LDCONFIG=	yes
#USE_XORG=	ice x11 xi xrandr
#USE_GL=		gl glu
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lusbhid -lm
INSTALL_TARGET=	install/strip

.include <bsd.port.options.mk>

pre-configure:
.for fract in Fractals/fractals.c Fractals_random/fractals_random.c
	${REINPLACE_CMD} -e "s|/usr/local|${PREFIX}|g"		\
		${WRKSRC}/progs/demos/${fract}
.endfor


.include <bsd.port.mk>
#EOF
