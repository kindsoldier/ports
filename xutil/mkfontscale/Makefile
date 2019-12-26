#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-mkfontscale/Makefile $
#
PORTNAME= 	mkfontscale
PORTVERSION=	1.1.1
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontenc.pc:x11/libfontenc
#?BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/freetype2.pc:graph/libfreetype2
BUILD_DEPENDS+= ${RUN_DEPENDS}

LIB_DEPENDS+=	libfontenc.so:x11/libfontenc
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/mkfontscale
PLIST_FILES+=	man/man1/mkfontscale.1.gz

.include <bsd.port.mk>
#EOF
