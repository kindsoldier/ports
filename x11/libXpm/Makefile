#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXpm/Makefile $
#
PORTNAME= 	libXpm
PORTVERSION=	3.5.11
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= xproto>=0:xproto/xproto

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXt.so:x11/libXt


USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man1/cxpm.1.gz
PLIST_FILES+=	man/man1/sxpm.1.gz

.include <bsd.port.mk>
#EOF
