#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xrx/Makefile $
#
PORTNAME= 	xrx
PORTVERSION=	1.0.4
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xext.pc:x11/libXext
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xtrans.pc:xproto/xtransproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproxymngproto.pc:xproto/xproxymngproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xau.pc:x11/libXau
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xtrans.pc:xproto/xtransproto


LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw7.so:x11/libXaw
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXt.so:x11/libXt

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --enable-xproto

PLIST_FILES+=	man/man1/xrx.1.gz
PLIST_FILES+=	man/man1/libxrx.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's|mozilla-plugin|disabled-libxul-plugin|g' \
		${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
LIBS+= -lICE -lSM -lX11 -lXau -lXaw7 -lXdmcp -lXext -lXext -lXmu -lXp -lXpm -lXt 
