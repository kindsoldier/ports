#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/libXft/Makefile $
#
PORTNAME= 	libXft
PORTVERSION=	2.3.1
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= libXrender>=0:x11/libXrender
BUILD_DEPENDS+= libfontconfig>=0:x11/libfontconfig
BUILD_DEPENDS+= renderproto>=0:xproto/renderproto


LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

RUN_DEPENDS+= xproto>=0:xproto/xproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-x

PLIST_FILES+=	man/man3/Xft.3.gz

.include <bsd.port.mk>
#EOF
