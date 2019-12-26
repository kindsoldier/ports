#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xperf/Makefile $
#
PORTNAME= 	x11perf
PORTVERSION=	1.4.1
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xrender.pc:x11/libXrender
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmuu.pc:x11/libXmu
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto


LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include  -I${LOCALBASE}/include/freetype2
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man1/x11perfcomp.1.gz
PLIST_FILES+=	man/man1/x11perf.1.gz
PLIST_FILES+=	man/man1/Xmark.1.gz

.include <bsd.port.mk>
#EOF
LIBS+= -lXdmcp -lexpat -lX11 -lXau -lXext -lXft -lXmuu -lXrender -lfontconfig -lfreetype 
