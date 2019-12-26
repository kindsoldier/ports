#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-bitmap/Makefile $
#
PORTNAME= 	bitmap
PORTVERSION=	1.0.7
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xbitmaps.pc:x11/xdata-xbitmaps
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmu.pc:x11/libXmu
BUILD_DEPENDS+= ${RUN_DEPENDS}

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xbitmaps.pc:xmisc/xbitmaps

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

LIBS+= -lICE -lSM -lX11 -lXau -lXaw7 -lXdmcp -lXext -lXmu -lXp -lXpm -lXt 

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man1/bitmap.1.gz


PLIST_FILES+=	man/man1/atobm.1.gz
PLIST_FILES+=	man/man1/bmtoa.1.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  bitmap.1 atobm.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  bitmap.1 bmtoa.1

.include <bsd.port.mk>
#EOF
