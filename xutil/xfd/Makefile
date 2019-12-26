#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xfd/Makefile $
#
PORTNAME= 	xfd
PORTVERSION=	1.1.2
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/freetype2.pc:x11/
#?BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontconfig.pc:x11/
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xft.pc:x11/libXft
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto


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


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/freetype2/
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/xfd
PLIST_FILES+= share/X11/app-defaults/Xfd
PLIST_FILES+=	man/man1/xfd.1.gz

.include <bsd.port.mk>
#EOF
LIBS+= -lICE -lSM -lX11 -lXau -lXaw7 -lXdmcp -lXext -lXft -lXmu -lXp -lXpm -lXrender -lXt -lfontconfig -lfreetype 
