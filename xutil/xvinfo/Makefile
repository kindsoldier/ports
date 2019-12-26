#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xvinfo/Makefile $
#
PORTNAME= 	xvinfo
PORTVERSION=	1.1.2
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/videoproto.pc:xproto/videoproto

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXv.so:x11/libXv


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+=	-L${LOCALBASE}/lib -lX11 -lXau -lXdmcp -lXext -lXv

PLIST_FILES+=	man/man1/xvinfo.1.gz

.include <bsd.port.mk>
#EOF
