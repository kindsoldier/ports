#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXrandr/Makefile $
#
PORTNAME= 	libXrandr
PORTVERSION=	1.5.1
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= randrproto>=0:xproto/randrproto

BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= renderproto>=0:xproto/renderproto


BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext
BUILD_DEPENDS+= libXrender>=0:x11/libXrender


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXrender.so:x11/libXrender

RUN_DEPENDS+= randrproto>=0:xproto/randrproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
CFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xrandr.3.gz


PLIST_FILES+=	man/man3/XRRConfigCurrentConfiguration.3.gz
PLIST_FILES+=	man/man3/XRRConfigCurrentRate.3.gz
PLIST_FILES+=	man/man3/XRRConfigRates.3.gz
PLIST_FILES+=	man/man3/XRRConfigRotations.3.gz
PLIST_FILES+=	man/man3/XRRConfigSizes.3.gz
PLIST_FILES+=	man/man3/XRRConfigTimes.3.gz
PLIST_FILES+=	man/man3/XRRFreeScreenConfigInfo.3.gz
PLIST_FILES+=	man/man3/XRRGetScreenInfo.3.gz
PLIST_FILES+=	man/man3/XRRQueryExtension.3.gz
PLIST_FILES+=	man/man3/XRRQueryVersion.3.gz
PLIST_FILES+=	man/man3/XRRRootToScreen.3.gz
PLIST_FILES+=	man/man3/XRRSelectInput.3.gz
PLIST_FILES+=	man/man3/XRRSetScreenConfig.3.gz
PLIST_FILES+=	man/man3/XRRSetScreenConfigAndRate.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigCurrentConfiguration.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigCurrentRate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigRates.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigRotations.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigSizes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRConfigTimes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRFreeScreenConfigInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRGetScreenInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRRootToScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRSelectInput.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRSetScreenConfig.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xrandr.3 XRRSetScreenConfigAndRate.3

.include <bsd.port.mk>
#EOF
