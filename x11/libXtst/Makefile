#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXtst/Makefile $
#
PORTNAME= 	libXtst
PORTVERSION=	1.2.2
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= recordproto>=0:xproto/recordproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext

LIB_DEPENDS+=	libXi.so:x11/libXi
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= inputproto>=0:xproto/inputproto
BUILD_DEPENDS+= kbproto>=0:xproto/kbproto
BUILD_DEPENDS+= libpthread-stubs>=0:x11/libpthread-stubs


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-docs -disable-specs

PLIST_FILES+=	man/man3/XTestQueryExtension.3.gz



PLIST_FILES+=	man/man3/XTestCompareCurrentCursorWithWindow.3.gz
PLIST_FILES+=	man/man3/XTestCompareCursorWithWindow.3.gz
PLIST_FILES+=	man/man3/XTestDiscard.3.gz
PLIST_FILES+=	man/man3/XTestFakeButtonEvent.3.gz
PLIST_FILES+=	man/man3/XTestFakeKeyEvent.3.gz
PLIST_FILES+=	man/man3/XTestFakeMotionEvent.3.gz
PLIST_FILES+=	man/man3/XTestFakeRelativeMotionEvent.3.gz
PLIST_FILES+=	man/man3/XTestGrabControl.3.gz
PLIST_FILES+=	man/man3/XTestSetGContextOfGC.3.gz
PLIST_FILES+=	man/man3/XTestSetVisualIDOfVisual.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestCompareCurrentCursorWithWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestCompareCursorWithWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestDiscard.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestFakeButtonEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestFakeKeyEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestFakeMotionEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestFakeRelativeMotionEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestGrabControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestSetGContextOfGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTestQueryExtension.3 XTestSetVisualIDOfVisual.3

.include <bsd.port.mk>
#EOF
