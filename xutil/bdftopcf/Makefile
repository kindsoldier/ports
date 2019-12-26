#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-bdftopcf/Makefile $
#
PORTNAME= 	bdftopcf
PORTVERSION=	1.0.4
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xfont.pc:x11/libXfont
BUILD_DEPENDS+= ${RUN_DEPENDS}

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
#LIBS+=		-L${LOCALBASE}/lib -lICE -lSM -lX11 -lXau -lXdmcp -lXext -lXmu -lXt

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto

LIB_DEPENDS+=	libXfont.so:x11/libXfont
LIB_DEPENDS+=	libfontenc.so:x11/libfontenc
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
CFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/bdftopcf
PLIST_FILES+=	man/man1/bdftopcf.1.gz

.include <bsd.port.mk>
#EOF
