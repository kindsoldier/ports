#
# $Id$
#
PORTNAME=	xinput
PORTVERSION=	1.6.1
CATEGORIES=	x11
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
X11_CATEGORY=	app
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-


MAINTAINER=	onborodin@gmail.com
COMMENT=	Very useful utility for configuring and testing XInput devices

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/inputproto.pc:xproto/inputproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fixesproto.pc:xproto/fixesproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/randrproto.pc:xproto/randrproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xineramaproto.pc:xproto/xineramaproto


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama

LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender


PLIST_FILES=	bin/xinput
GNU_CONFIGURE=	yes
USES+=		gmake

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+= -lX11 -lXau -lXdmcp -lXext -lXi -lXinerama -lXrandr -lXrender 

PLIST_FILES+=	man/man1/xinput.1.gz

.include <bsd.port.mk>
#EOF
