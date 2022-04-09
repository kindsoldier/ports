#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXcomposite/Makefile $
#
PORTNAME= 	libXcomposite
PORTVERSION=	0.4.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= compositeproto>=0:xproto/compositeproto

#BUILD_DEPENDS+= fixesproto>=0:xproto/fixesproto

#BUILD_DEPENDS+= libXfixes>=0:x11/libXfixes
#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXfixes>=0:x11/libXfixes
#BUILD_DEPENDS+= libXext>=0:x11/libXext

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes

#RUN_DEPENDS+= compositeproto>=0:xproto/compositeproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xcomposite.3.gz


PLIST_FILES+=	man/man3/XCompositeCreateRegionFromBorderClip.3.gz
PLIST_FILES+=	man/man3/XCompositeGetOverlayWindow.3.gz
PLIST_FILES+=	man/man3/XCompositeNameWindowPixmap.3.gz
PLIST_FILES+=	man/man3/XCompositeQueryExtension.3.gz
PLIST_FILES+=	man/man3/XCompositeQueryVersion.3.gz
PLIST_FILES+=	man/man3/XCompositeRedirectSubwindows.3.gz
PLIST_FILES+=	man/man3/XCompositeRedirectWindow.3.gz
PLIST_FILES+=	man/man3/XCompositeReleaseOverlayWindow.3.gz
PLIST_FILES+=	man/man3/XCompositeUnredirectSubwindows.3.gz
PLIST_FILES+=	man/man3/XCompositeUnredirectWindow.3.gz
PLIST_FILES+=	man/man3/XCompositeVersion.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeCreateRegionFromBorderClip.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeGetOverlayWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeNameWindowPixmap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeRedirectSubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeRedirectWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeReleaseOverlayWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeUnredirectSubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeUnredirectWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcomposite.3 XCompositeVersion.3

.include <bsd.port.mk>
#EOF
