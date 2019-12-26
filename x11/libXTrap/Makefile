#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXTrap/Makefile $
#
PORTNAME= 	libXTrap
PORTVERSION=	1.0.1
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXt>=0:x11/libXt
BUILD_DEPENDS+= trapproto>=0:xproto/trapproto
BUILD_DEPENDS+= libXext>=0:x11/libXext
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto

BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= kbproto>=0:xproto/kbproto
BUILD_DEPENDS+= libpthread-stubs>=0:x11/libpthread-stubs


LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXt.so:x11/libXt


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
