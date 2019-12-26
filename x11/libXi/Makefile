#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXi/Makefile $
#
PORTNAME= 	libXi
PORTVERSION=	1.7.4
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= inputproto>=0:xproto/inputproto

BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext
BUILD_DEPENDS+= fixesproto>=0:xproto/fixesproto

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
CONFIGURE_ARGS+= --disable-docs
CONFIGURE_ARGS+= --disable-specs



PLIST_FILES+=	man/man3/XAllowDeviceEvents.3.gz
PLIST_FILES+=	man/man3/XChangeDeviceDontPropagateList.3.gz
PLIST_FILES+=	man/man3/XChangeKeyboardDevice.3.gz
PLIST_FILES+=	man/man3/XChangePointerDevice.3.gz
PLIST_FILES+=	man/man3/XDeviceBell.3.gz
PLIST_FILES+=	man/man3/XGetDeviceControl.3.gz
PLIST_FILES+=	man/man3/XGetDeviceKeyMapping.3.gz
PLIST_FILES+=	man/man3/XGetDeviceModifierMapping.3.gz
PLIST_FILES+=	man/man3/XGetDeviceMotionEvents.3.gz
PLIST_FILES+=	man/man3/XGetDeviceProperty.3.gz
PLIST_FILES+=	man/man3/XGetExtensionVersion.3.gz
PLIST_FILES+=	man/man3/XGetFeedbackControl.3.gz
PLIST_FILES+=	man/man3/XGrabDevice.3.gz
PLIST_FILES+=	man/man3/XGrabDeviceButton.3.gz
PLIST_FILES+=	man/man3/XGrabDeviceKey.3.gz
PLIST_FILES+=	man/man3/XIBarrierReleasePointer.3.gz
PLIST_FILES+=	man/man3/XIChangeHierarchy.3.gz
PLIST_FILES+=	man/man3/XIChangeProperty.3.gz
PLIST_FILES+=	man/man3/XIDefineCursor.3.gz
PLIST_FILES+=	man/man3/XIGrabButton.3.gz
PLIST_FILES+=	man/man3/XIGrabDevice.3.gz
PLIST_FILES+=	man/man3/XIGrabEnter.3.gz
PLIST_FILES+=	man/man3/XIListProperties.3.gz
PLIST_FILES+=	man/man3/XIQueryDevice.3.gz
PLIST_FILES+=	man/man3/XIQueryPointer.3.gz
PLIST_FILES+=	man/man3/XIQueryVersion.3.gz
PLIST_FILES+=	man/man3/XISelectEvents.3.gz
PLIST_FILES+=	man/man3/XISetClientPointer.3.gz
PLIST_FILES+=	man/man3/XISetFocus.3.gz
PLIST_FILES+=	man/man3/XIWarpPointer.3.gz
PLIST_FILES+=	man/man3/XListDeviceProperties.3.gz
PLIST_FILES+=	man/man3/XListInputDevices.3.gz
PLIST_FILES+=	man/man3/XOpenDevice.3.gz
PLIST_FILES+=	man/man3/XQueryDeviceState.3.gz
PLIST_FILES+=	man/man3/XSelectExtensionEvent.3.gz
PLIST_FILES+=	man/man3/XSendExtensionEvent.3.gz
PLIST_FILES+=	man/man3/XSetDeviceButtonMapping.3.gz
PLIST_FILES+=	man/man3/XSetDeviceFocus.3.gz
PLIST_FILES+=	man/man3/XSetDeviceMode.3.gz
PLIST_FILES+=	man/man3/XSetDeviceValuators.3.gz


PLIST_FILES+=	man/man3/XGetDeviceDontPropagateList.3.gz
PLIST_FILES+=	man/man3/XChangeDeviceControl.3.gz
PLIST_FILES+=	man/man3/XChangeDeviceKeyMapping.3.gz
PLIST_FILES+=	man/man3/XSetDeviceModifierMapping.3.gz
PLIST_FILES+=	man/man3/XDeviceTimeCoord.3.gz
PLIST_FILES+=	man/man3/XChangeDeviceProperty.3.gz
PLIST_FILES+=	man/man3/XDeleteDeviceProperty.3.gz
PLIST_FILES+=	man/man3/XChangeFeedbackControl.3.gz
PLIST_FILES+=	man/man3/XUngrabDevice.3.gz
PLIST_FILES+=	man/man3/XUngrabDeviceButton.3.gz
PLIST_FILES+=	man/man3/XUngrabDeviceKey.3.gz
PLIST_FILES+=	man/man3/XIBarrierReleasePointers.3.gz
PLIST_FILES+=	man/man3/XIDeleteProperty.3.gz
PLIST_FILES+=	man/man3/XIGetProperty.3.gz
PLIST_FILES+=	man/man3/XIUndefineCursor.3.gz
PLIST_FILES+=	man/man3/XIGrabKeycode.3.gz
PLIST_FILES+=	man/man3/XIGrabTouchBegin.3.gz
PLIST_FILES+=	man/man3/XIUngrabButton.3.gz
PLIST_FILES+=	man/man3/XIUngrabKeycode.3.gz
PLIST_FILES+=	man/man3/XIUngrabTouchBegin.3.gz
PLIST_FILES+=	man/man3/XIUngrabDevice.3.gz
PLIST_FILES+=	man/man3/XIGrabFocusIn.3.gz
PLIST_FILES+=	man/man3/XIUngrabEnter.3.gz
PLIST_FILES+=	man/man3/XIUngrabFocusIn.3.gz
PLIST_FILES+=	man/man3/XIFreeDeviceInfo.3.gz
PLIST_FILES+=	man/man3/XIGetSelectedEvents.3.gz
PLIST_FILES+=	man/man3/XIGetClientPointer.3.gz
PLIST_FILES+=	man/man3/XIGetFocus.3.gz
PLIST_FILES+=	man/man3/XFreeDeviceList.3.gz
PLIST_FILES+=	man/man3/XCloseDevice.3.gz
PLIST_FILES+=	man/man3/XGetSelectedExtensionEvents.3.gz
PLIST_FILES+=	man/man3/XGetDeviceButtonMapping.3.gz
PLIST_FILES+=	man/man3/XGetDeviceFocus.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeDeviceDontPropagateList.3 XGetDeviceDontPropagateList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceControl.3 XChangeDeviceControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceKeyMapping.3 XChangeDeviceKeyMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceModifierMapping.3 XSetDeviceModifierMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceMotionEvents.3 XDeviceTimeCoord.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceProperty.3 XChangeDeviceProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetDeviceProperty.3 XDeleteDeviceProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetFeedbackControl.3 XChangeFeedbackControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabDevice.3 XUngrabDevice.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabDeviceButton.3 XUngrabDeviceButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabDeviceKey.3 XUngrabDeviceKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIBarrierReleasePointer.3 XIBarrierReleasePointers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIChangeProperty.3 XIDeleteProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIChangeProperty.3 XIGetProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIDefineCursor.3 XIUndefineCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabButton.3 XIGrabKeycode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabButton.3 XIGrabTouchBegin.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabButton.3 XIUngrabButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabButton.3 XIUngrabKeycode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabButton.3 XIUngrabTouchBegin.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabDevice.3 XIUngrabDevice.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabEnter.3 XIGrabFocusIn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabEnter.3 XIUngrabEnter.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIGrabEnter.3 XIUngrabFocusIn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIQueryDevice.3 XIFreeDeviceInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XISelectEvents.3 XIGetSelectedEvents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XISetClientPointer.3 XIGetClientPointer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XISetFocus.3 XIGetFocus.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XListInputDevices.3 XFreeDeviceList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenDevice.3 XCloseDevice.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSelectExtensionEvent.3 XGetSelectedExtensionEvents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetDeviceButtonMapping.3 XGetDeviceButtonMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetDeviceFocus.3 XGetDeviceFocus.3

.include <bsd.port.mk>
#EOF
