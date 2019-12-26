#
# $Id$
#
PORTNAME=	libGLU
PORTVERSION=	9.0.0
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.freedesktop.org/pub/mesa/glu/
DISTNAME=	glu-${PORTVERSION}

#LIB_DEPENDS+=	libdrm.so:x11/libdrm
LIB_DEPENDS+=	libGL.so:graph/libmesa
LIB_DEPENDS+=	libglapi.so:graph/libmesa

MAINTAINER=	onborodin@gmail.com
COMMENT=	OpenGL utility library

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
INSTALL_TARGET=	install-strip
USES+=		tar:bzip2 gmake
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


USE_LDCONFIG=	yes

.include <bsd.port.mk>
