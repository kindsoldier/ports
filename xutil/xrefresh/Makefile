#
# $Id: Makefile 833 2007-08-27 07:41:15Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xrefresh/Makefile $
#
PORTNAME= 	xrefresh
PORTVERSION=	1.0.5
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp


#USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+= -lX11 -lXau -lXdmcp 


PLIST_FILES+= bin/xrefresh
PLIST_FILES+=	man/man1/xrefresh.1.gz

.include <bsd.port.mk>
#EOF
