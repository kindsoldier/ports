#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xsetroot/Makefile $
#
PORTNAME= 	xsetroot
PORTVERSION=	1.1.1
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmuu.pc:x11/libXmu
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xbitmaps.pc:xmisc/xbitmaps
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS= -I${LOCALBASE}/include
CFLAGS= -I${LOCALBASE}/include
LDFLAGS= -L${LOCALBASE}/lib
LIBS+= -lX11 -lXau -lXdmcp -lXmuu -lXcursor -lXrender -lXfixes 

PLIST_FILES+= bin/xsetroot
PLIST_FILES+=	man/man1/xsetroot.1.gz

.include <bsd.port.mk>
#EOF
