#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-showfont/Makefile $
#
PORTNAME= 	showfont
PORTVERSION=	1.0.4
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/libfs.pc:x11/libFS
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto
#LIB_DEPENDS+=	libX11.so:x11/libX11

LIB_DEPENDS+=	libFS.so:x11/libFS

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/showfont
PLIST_FILES+=	man/man1/showfont.1.gz

.include <bsd.port.mk>
#EOF
