#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11-xorg-utils/xorg-xclock/Makefile $
#
PORTNAME= 	xclock
PORTVERSION=	1.0.7
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER= homeunix7@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xrender.pc:x11/libXrender
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xft.pc:x11/libXft
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw7.so:x11/libXaw
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libxkbfile.so:x11/libxkbfile


#USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir="${PREFIX}/man"
CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/freetype2/
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-xft
CONFIGURE_ARGS+= --with-xkb
CONFIGURE_ARGS+= --disable-xprint
LIBS+= -lICE -lSM -lX11 -lXau -lXaw7 -lXdmcp -lXext -lXft -lXmu -lXp -lXpm -lXrender -lXt -lfontconfig -lfreetype -lxkbfile 


PLIST_FILES+= bin/xclock
PLIST_FILES+= share/X11/app-defaults/XClock-color
PLIST_FILES+= share/X11/app-defaults/XClock

PLIST_FILES+=	man/man1/xclock.1.gz

.include <bsd.port.mk>
#EOF
