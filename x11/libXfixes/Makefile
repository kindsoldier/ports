#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXfixes/Makefile $
#
PORTNAME= 	libXfixes
PORTVERSION=	5.0.1
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= fixesproto>=0:xproto/fixesproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto

#BUILD_DEPENDS+= fixesproto>=0:xproto/fixesproto
#BUILD_DEPENDS+= damageproto>=0:xproto/damageproto


#BUILD_DEPENDS+= libX11>=0:x11/libX11

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp

#RUN_DEPENDS+= fixesproto>=0:xproto/fixesproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include -DHAVE__XEATDATAWORDS=1
CFLAGS+=	-I${LOCALBASE}/include -DHAVE__XEATDATAWORDS=1
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xfixes.3.gz

.include <bsd.port.mk>
#EOF
