#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXinerama/Makefile $
#
PORTNAME= 	libXinerama
PORTVERSION=	1.1.3
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xineramaproto>=0:xproto/xineramaproto
#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

#RUN_DEPENDS+= xineramaproto>=0:xproto/xineramaproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include -DHAVE__XEATDATAWORDS=1
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xinerama.3.gz
PLIST_FILES+=	man/man3/XineramaIsActive.3.gz
PLIST_FILES+=	man/man3/XineramaQueryExtension.3.gz
PLIST_FILES+=	man/man3/XineramaQueryScreens.3.gz
PLIST_FILES+=	man/man3/XineramaQueryVersion.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xinerama.3 XineramaIsActive.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xinerama.3 XineramaQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xinerama.3 XineramaQueryScreens.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xinerama.3 XineramaQueryVersion.3

.include <bsd.port.mk>
#EOF
