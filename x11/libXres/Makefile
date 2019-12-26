#
# $Id: Makefile 892 2007-08-29 09:20:13Z root $
# $URL: file:///usr2/svn/ports5/x11/libXres/Makefile $
#
PORTNAME= 	libXres
PORTVERSION=	1.0.7
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext
BUILD_DEPENDS+= resourceproto>=0:xproto/resourceproto

BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xproto>=0:xproto/xproto


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

USE_X_PREFIX=	yes
USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include  -DHAVE__XEATDATAWORDS=1
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/XRes.3.gz


PLIST_FILES+=	man/man3/XResQueryClientPixmapBytes.3.gz
PLIST_FILES+=	man/man3/XResQueryClientResources.3.gz
PLIST_FILES+=	man/man3/XResQueryClients.3.gz
PLIST_FILES+=	man/man3/XResQueryExtension.3.gz
PLIST_FILES+=	man/man3/XResQueryVersion.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRes.3 XResQueryClientPixmapBytes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRes.3 XResQueryClientResources.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRes.3 XResQueryClients.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRes.3 XResQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRes.3 XResQueryVersion.3

.include <bsd.port.mk>
#EOF
