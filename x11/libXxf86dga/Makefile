#
# $Id: Makefile 1387 2007-11-03 00:59:33Z root $
# $URL: file:///usr2/svn/ports5/x11/libXres/Makefile $
#
PORTNAME= 	libXxf86dga
PORTVERSION=	1.1.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+= dmxproto>=0:xproto/dmxproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xf86dgaproto>=0:xproto/xf86dgaproto
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+=	pkg-config:devel/pkg-config

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include -DHAVE__XEATDATAWORDS=1
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/XDGA.3.gz



PLIST_FILES+=	man/man3/XDGAChangePixmapMode.3.gz
PLIST_FILES+=	man/man3/XDGACloseFramebuffer.3.gz
PLIST_FILES+=	man/man3/XDGACopyArea.3.gz
PLIST_FILES+=	man/man3/XDGACopyTransparentArea.3.gz
PLIST_FILES+=	man/man3/XDGACreateColormap.3.gz
PLIST_FILES+=	man/man3/XDGAFillRectangle.3.gz
PLIST_FILES+=	man/man3/XDGAGetViewportStatus.3.gz
PLIST_FILES+=	man/man3/XDGAInstallColormap.3.gz
PLIST_FILES+=	man/man3/XDGAKeyEventToXKeyEvent.3.gz
PLIST_FILES+=	man/man3/XDGAOpenFramebuffer.3.gz
PLIST_FILES+=	man/man3/XDGAQueryExtension.3.gz
PLIST_FILES+=	man/man3/XDGAQueryModes.3.gz
PLIST_FILES+=	man/man3/XDGAQueryVersion.3.gz
PLIST_FILES+=	man/man3/XDGASelectInput.3.gz
PLIST_FILES+=	man/man3/XDGASetClientVersion.3.gz
PLIST_FILES+=	man/man3/XDGASetMode.3.gz
PLIST_FILES+=	man/man3/XDGASetViewport.3.gz
PLIST_FILES+=	man/man3/XDGASync.3.gz
PLIST_FILES+=	man/man3/XF86DGA.3.gz
PLIST_FILES+=	man/man3/XFree86-DGA.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAChangePixmapMode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGACloseFramebuffer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGACopyArea.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGACopyTransparentArea.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGACreateColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAFillRectangle.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAGetViewportStatus.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAInstallColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAKeyEventToXKeyEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAOpenFramebuffer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAQueryModes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGAQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGASelectInput.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGASetClientVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGASetMode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGASetViewport.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XDGASync.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XF86DGA.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDGA.3 XFree86-DGA.3

.include <bsd.port.mk>
#EOF
