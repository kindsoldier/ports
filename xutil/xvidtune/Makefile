#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xvidtune/Makefile $
#
PORTNAME= 	xvidtune
PORTVERSION=	1.0.3
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xxf86vm.pc:x11/libXxf86vm
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${RUN_DEPENDS}

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xf86vidmodeproto.pc:xproto/xf86vidmodeproto


LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw7.so:x11/libXaw
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+= -L${LOCALBASE}/lib -lXaw7 -lXmu -lXt -lICE -lSM -lXau -lXdmcp -lXext -lXp -lXpm -lXxf86vm -lX11


PLIST_FILES+= bin/xvidtune
PLIST_FILES+= share/X11/app-defaults/Xvidtune
PLIST_FILES+=	man/man1/xvidtune.1.gz

.include <bsd.port.mk>
#EOF
