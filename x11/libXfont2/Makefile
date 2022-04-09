#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/libXfont/Makefile $
#
PORTNAME= 	libXfont2
PORTVERSION=	2.0.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= fontcacheproto>=0:xproto/fontcacheproto
#BUILD_DEPENDS+= fontsproto>=0:xproto/fontsproto
#BUILD_DEPENDS+= xproto>=0:xproto/xproto

#BUILD_DEPENDS+= libfontenc>=0:x11/libfontenc
#BUILD_DEPENDS+= xtransproto>=0:x11/libxtrans

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libfontenc.so:x11/libfontenc
LIB_DEPENDS+=	libpng.so:graph/libpng




USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --enable-ipv6
#CONFIGURE_ARGS+= --enable-local-transport
CONFIGURE_ARGS+= --enable-tcp-transport
CONFIGURE_ARGS+= --enable-unix-transport
CONFIGURE_ARGS+= --with-bzip2

.include <bsd.port.mk>
#EOF
