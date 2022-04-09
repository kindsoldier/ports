#
# $Id: Makefile 1388 2007-11-03 01:24:57Z root $
# $URL: file:///usr2/svn/ports5/x11/libXxfvm/Makefile $
#
PORTNAME= 	libXxf86vm
PORTVERSION=	1.1.3
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= xf86vidmodeproto>=0:xproto/xf86vidmodeproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/XF86VM.3.gz


PLIST_FILES+=	man/man3/XF86VidModeDeleteModeLine.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetAllModeLines.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetDotClocks.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetGamma.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetGammaRamp.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetGammaRampSize.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetModeLine.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetMonitor.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetPermissions.3.gz
PLIST_FILES+=	man/man3/XF86VidModeGetViewPort.3.gz
PLIST_FILES+=	man/man3/XF86VidModeLockModeSwitch.3.gz
PLIST_FILES+=	man/man3/XF86VidModeModModeLine.3.gz
PLIST_FILES+=	man/man3/XF86VidModeQueryExtension.3.gz
PLIST_FILES+=	man/man3/XF86VidModeQueryVersion.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSetClientVersion.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSetGamma.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSetGammaRamp.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSetViewPort.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSwitchMode.3.gz
PLIST_FILES+=	man/man3/XF86VidModeSwitchToMode.3.gz
PLIST_FILES+=	man/man3/XF86VidModeValidateModeLine.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeDeleteModeLine.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetAllModeLines.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetDotClocks.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetGamma.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetGammaRamp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetGammaRampSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetModeLine.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetMonitor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetPermissions.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeGetViewPort.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeLockModeSwitch.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeModModeLine.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSetClientVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSetGamma.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSetGammaRamp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSetViewPort.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSwitchMode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeSwitchToMode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86VM.3 XF86VidModeValidateModeLine.3

.include <bsd.port.mk>
#EOF
