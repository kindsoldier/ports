#
# $Id: Makefile 892 2007-08-29 09:20:13Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-smproxy/Makefile $
#
PORTNAME= 	smproxy
PORTVERSION=	1.0.5
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmu.pc:x11/libXmu
BUILD_DEPENDS+= ${RUN_DEPENDS}

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
#LIB_DEPENDS+=	libX11.so:x11/libX11

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXt.so:x11/libXt


USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+= -lICE -lSM -lX11 -lXau -lXdmcp -lXext -lXmu -lXt 


PLIST_FILES+= bin/smproxy
PLIST_FILES+=	man/man1/smproxy.1.gz

.include <bsd.port.mk>
#EOF
