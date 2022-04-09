#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXt/Makefile $
#
PORTNAME= 	libXdamage
PORTVERSION=	1.1.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= damageproto>=0:xproto/damageproto

#BUILD_DEPENDS+= fixesproto>=0:xproto/fixesproto
#BUILD_DEPENDS+= damageproto>=0:xproto/damageproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libSM>=0:x11/libSM

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libxcb.so:x11/libxcb


USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs


.include <bsd.port.mk>
#EOF
