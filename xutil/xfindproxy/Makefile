#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xfindproxy/Makefile $
#
PORTNAME= 	xfindproxy
PORTVERSION=	1.0.1
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/ice.pc:x11/libICE
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproxymngproto.pc:xproto/xproxymngproto
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXt.so:x11/libXt

#USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/xfindproxy
PLIST_FILES+=	man/man1/xfindproxy.1.gz

.include <bsd.port.mk>
#EOF
LIBS+= -lICE -lSM -lX11 -lXau -lXdmcp -lXt 
