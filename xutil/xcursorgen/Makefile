#
# $Id: Makefile 892 2007-08-29 09:20:13Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xcursorgen/Makefile $
#
PORTNAME= 	xcursorgen
PORTVERSION=	1.0.6
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xcursor.pc:x11/libXcursor
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libpng.so:graph/libpng

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+= -lX11 -lXau -lXdmcp -lXfixes -lXrender -lX11 -lXcursor -lpng 


PLIST_FILES+= bin/xcursorgen
PLIST_FILES+=	man/man1/xcursorgen.1.gz

post-patch:
	cd ${WRKSRC} && ${REINPLACE_CMD} -e 's!libpng12!libpng!g' configure

.include <bsd.port.mk>
#EOF
