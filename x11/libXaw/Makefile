#
# $Id: Makefile 939 2007-08-31 08:12:20Z root $
# $URL: file:///usr2/svn/ports5/x11/libXaw/Makefile $
#
PORTNAME= 	libXaw
PORTVERSION=	1.0.12
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= printproto>=0:xproto/printproto
BUILD_DEPENDS+= xproto>=0:xproto/xproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext
#BUILD_DEPENDS+= libXmu>=0:x11/libXmu
#BUILD_DEPENDS+= libXp>=0:x11/libXp
#BUILD_DEPENDS+= libXpm>=0:x11/libXpm
#BUILD_DEPENDS+= libXt>=0:x11/libXext

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXt.so:x11/libXt

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs

PLIST_FILES+=	man/man3/Xaw.3.gz

.include <bsd.port.mk>
#EOF
