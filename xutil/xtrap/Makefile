#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xtrap/Makefile $
#
PORTNAME= 	xtrap
PORTVERSION=	1.0.2
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xtrap.pc:x11/libXTrap
BUILD_DEPENDS+= ${RUN_DEPENDS}

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/trapproto.pc:xproto/trapproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXTrap.so:x11/libXTrap
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
LIBS+= -lICE -lSM -lX11 -lXTrap -lXau -lXdmcp -lXext -lXt 

PLIST_FILES+=	man/man1/xtrap.1.gz



PLIST_FILES+=	man/man1/xtrapchar.1.gz
PLIST_FILES+=	man/man1/xtrapin.1.gz
PLIST_FILES+=	man/man1/xtrapinfo.1.gz
PLIST_FILES+=	man/man1/xtrapout.1.gz
PLIST_FILES+=	man/man1/xtrapproto.1.gz
PLIST_FILES+=	man/man1/xtrapreset.1.gz
PLIST_FILES+=	man/man1/xtrapstats.1.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapchar.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapin.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapinfo.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapout.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapproto.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapreset.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  xtrap.1 xtrapstats.1

.include <bsd.port.mk>
#EOF
