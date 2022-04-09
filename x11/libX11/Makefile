#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libX11/Makefile $
#
PORTNAME= 	libX11
PORTVERSION=	1.6.12
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
#DIST_SUBDIR=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= xproto>=0:xproto/xproto
#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= xcmiscproto>=0:xproto/xcmiscproto
#BUILD_DEPENDS+= bigreqsproto>=0:xproto/bigreqsproto
#BUILD_DEPENDS+= kbproto>=0:xproto/kbproto
#BUILD_DEPENDS+= inputproto>=0:xproto/inputproto
#BUILD_DEPENDS+= libXau>=0:x11/libXau
#BUILD_DEPENDS+= libXdmcp>=0:x11/libXdmcp
#BUILD_DEPENDS+= xtransproto>=0:xproto/xtransproto


LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libxcb.so:x11/libxcb

#RUN_DEPENDS+= kbproto>=0:xproto/kbproto
#RUN_DEPENDS+= xproto>=0:xproto/xproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes


CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --enable-loadable-i18n
#CONFIGURE_ARGS+= --enable-secure-rpc

CONFIGURE_ARGS+= --disable-specs 
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --without-xmlto 
CONFIGURE_ARGS+= --without-xsltproc 

CONFIGURE_ENV+=	ac_cv_path_PS2PDF=""
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-specDATA//' ${WRKSRC}/nls/Makefile.in



post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 BlackPixel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ConnectionNumber.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultDepth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultRootWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultScreenOfDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DefaultVisual.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DisplayCells.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DisplayPlanes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 DisplayString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 LastKnownRequestProcessed.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 NextRequest.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ProtocolRevision.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ProtocolVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 QLength.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 RootWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ScreenCount.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ScreenOfDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 ServerVendor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 VendorRelease.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 WhitePixel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 XExtendedMaxRequestSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 XListDepths.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  AllPlanes.3 XMaxRequestSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 CellsOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DefaultColormapOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DefaultDepthOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DefaultGCOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DefaultVisualOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DisplayOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DoesBackingStore.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 DoesSaveUnders.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 EventMaskOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 HeightMMOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 HeightOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 MaxCmapsOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 MinCmapsOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 PlanesOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 RootWindowOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 WhitePixelOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 WidthMMOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 WidthOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  BlackPixelOfScreen.3 XScreenNumberOfScreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Compose.5 XCompose.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Compose.5 XCompose.5
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  DisplayOfCCC.3 ClientWhitePointOfCCC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  DisplayOfCCC.3 ScreenNumberOfCCC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  DisplayOfCCC.3 ScreenWhitePointOfCCC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  DisplayOfCCC.3 VisualOfCCC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 BitmapBitOrder.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 BitmapPad.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 BitmapUnit.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 DisplayHeight.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 DisplayHeightMM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 DisplayWidth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 DisplayWidthMM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 XListPixmapFormats.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ImageByteOrder.3 XPixmapFormatValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsFunctionKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsKeypadKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsMiscFunctionKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsModifierKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsPFKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  IsCursorKey.3 IsPrivateKeypadKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddConnectionWatch.3 XInternalConnectionNumbers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddConnectionWatch.3 XProcessInternalConnection.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddConnectionWatch.3 XRemoveConnectionWatch.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XAddHosts.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XDisableAccessControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XEnableAccessControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XHostAddress.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XListHosts.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XRemoveHost.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XRemoveHosts.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAddHost.3 XSetAccessControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocClassHint.3 XClassHint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocClassHint.3 XGetClassHint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocClassHint.3 XSetClassHint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocColor.3 XAllocColorCells.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocColor.3 XAllocColorPlanes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocColor.3 XAllocNamedColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocColor.3 XFreeColors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocIconSize.3 XGetIconSizes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocIconSize.3 XIconSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocIconSize.3 XSetIconSizes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocSizeHints.3 XGetWMNormalHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocSizeHints.3 XGetWMSizeHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocSizeHints.3 XSetWMNormalHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocSizeHints.3 XSetWMSizeHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocSizeHints.3 XSizeHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocStandardColormap.3 XGetRGBColormaps.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocStandardColormap.3 XSetRGBColormaps.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocStandardColormap.3 XStandardColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocWMHints.3 XGetWMHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocWMHints.3 XSetWMHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAllocWMHints.3 XWMHints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XAnyEvent.3 XEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XButtonEvent.3 XKeyEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XButtonEvent.3 XMotionEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XAutoRepeatOff.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XAutoRepeatOn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XBell.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XGetKeyboardControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XKeyboardControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardControl.3 XQueryKeymap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XDeleteModifiermapEntry.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XDisplayKeycodes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XFreeModifiermap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XGetKeyboardMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XGetModifierMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XInsertModifiermapEntry.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XModifierKeymap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XNewModifiermap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeKeyboardMapping.3 XSetModifierMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangePointerControl.3 XGetPointerControl.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeSaveSet.3 XAddToSaveSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeSaveSet.3 XRemoveFromSaveSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeWindowAttributes.3 XSetWindowBackground.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeWindowAttributes.3 XSetWindowBackgroundPixmap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeWindowAttributes.3 XSetWindowBorder.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeWindowAttributes.3 XSetWindowBorderPixmap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XChangeWindowAttributes.3 XSetWindowColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XClearArea.3 XClearWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XConfigureWindow.3 XMoveResizeWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XConfigureWindow.3 XMoveWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XConfigureWindow.3 XResizeWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XConfigureWindow.3 XSetWindowBorderWidth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XConfigureWindow.3 XWindowChanges.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCopyArea.3 XCopyPlane.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateColormap.3 XColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateColormap.3 XCopyColormapAndFree.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateColormap.3 XFreeColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateFontCursor.3 XCreateGlyphCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateFontCursor.3 XCreatePixmapCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateFontSet.3 XFreeFontSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XChangeGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XCopyGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XFreeGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XGCValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XGContextFromGC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateGC.3 XGetGCValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateIC.3 XDestroyIC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateIC.3 XIMOfIC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateOC.3 XDestroyOC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateOC.3 XGetOCValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateOC.3 XOMOfOC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateOC.3 XSetOCValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreatePixmap.3 XFreePixmap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateRegion.3 XDestroyRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateRegion.3 XSetRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateWindow.3 XCreateSimpleWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XCreateWindow.3 XSetWindowAttributes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDefineCursor.3 XUndefineCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDestroyWindow.3 XDestroySubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawArc.3 XArc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawArc.3 XDrawArcs.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawImageString.3 XDrawImageString16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawLine.3 XDrawLines.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawLine.3 XDrawSegments.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawLine.3 XSegment.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawPoint.3 XDrawPoints.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawPoint.3 XPoint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawRectangle.3 XDrawRectangles.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawRectangle.3 XRectangle.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawString.3 XDrawString16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawText.3 XDrawText16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawText.3 XTextItem.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XDrawText.3 XTextItem16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XEmptyRegion.3 XEqualRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XEmptyRegion.3 XPointInRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XEmptyRegion.3 XRectInRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFillRectangle.3 XFillArc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFillRectangle.3 XFillArcs.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFillRectangle.3 XFillPolygon.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFillRectangle.3 XFillRectangles.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFlush.3 XEventsQueued.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFlush.3 XPending.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFlush.3 XSync.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFontsOfFontSet.3 XBaseFontNameListOfFontSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFontsOfFontSet.3 XContextDependentDrawing.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFontsOfFontSet.3 XContextualDrawing.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFontsOfFontSet.3 XDirectionalDependentDrawing.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XFontsOfFontSet.3 XLocaleOfFontSet.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetEventData.3 XFreeEventData.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetEventData.3 XGenericEventCookie.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetVisualInfo.3 XMatchVisualInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetVisualInfo.3 XVisualIDFromVisual.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetVisualInfo.3 XVisualInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowAttributes.3 XGetGeometry.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowAttributes.3 XWindowAttributes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowProperty.3 XChangeProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowProperty.3 XDeleteProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowProperty.3 XListProperties.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGetWindowProperty.3 XRotateWindowProperties.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabButton.3 XUngrabButton.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabKey.3 XUngrabKey.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabKeyboard.3 XUngrabKeyboard.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabPointer.3 XChangeActivePointerGrab.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabPointer.3 XUngrabPointer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGrabServer.3 XUngrabServer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XGraphicsExposeEvent.3 XNoExposeEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIconifyWindow.3 XReconfigureWMWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIconifyWindow.3 XWithdrawWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIfEvent.3 XCheckIfEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIfEvent.3 XPeekIfEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XAddPixel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XCreateImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XDestroyImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XGetPixel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XPutPixel.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitImage.3 XSubImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitThreads.3 XLockDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInitThreads.3 XUnlockDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInstallColormap.3 XListInstalledColormaps.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInstallColormap.3 XUninstallColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInternAtom.3 XGetAtomName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInternAtom.3 XGetAtomNames.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XInternAtom.3 XInternAtoms.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XOffsetRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XShrinkRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XSubtractRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XUnionRectWithRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XUnionRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XIntersectRegion.3 XXorRegion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XListFonts.3 XFreeFontInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XListFonts.3 XFreeFontNames.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XListFonts.3 XListFontsWithInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XChar2b.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XCharStruct.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XFontProp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XFontStruct.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XFreeFont.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XGetFontProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XLoadQueryFont.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XQueryFont.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLoadFont.3 XUnloadFont.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLookupKeysym.3 XLookupString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLookupKeysym.3 XRebindKeysym.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XLookupKeysym.3 XRefreshKeyboardMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XMapEvent.3 XMappingEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XMapWindow.3 XMapRaised.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XMapWindow.3 XMapSubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XCheckMaskEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XCheckTypedEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XCheckTypedWindowEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XCheckWindowEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XMaskEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XPeekEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XNextEvent.3 XWindowEvent.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenDisplay.3 XCloseDisplay.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XCloseIM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XDisplayOfIM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XGetIMValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XLocaleOfIM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XRegisterIMInstantiateCallback.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XSetIMValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenIM.3 XUnregisterIMInstantiateCallback.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenOM.3 XCloseOM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenOM.3 XDisplayOfOM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenOM.3 XGetOMValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenOM.3 XLocaleOfOM.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XOpenOM.3 XSetOMValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XParseGeometry.3 XWMGeometry.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XPolygonRegion.3 XClipBox.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XPutImage.3 XGetImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XPutImage.3 XGetSubImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryBestSize.3 XQueryBestStipple.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryBestSize.3 XQueryBestTile.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryColor.3 XLookupColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryColor.3 XParseColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryColor.3 XQueryColors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryExtension.3 XFreeExtensionList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XQueryExtension.3 XListExtensions.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRaiseWindow.3 XCirculateSubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRaiseWindow.3 XCirculateSubwindowsDown.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRaiseWindow.3 XCirculateSubwindowsUp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRaiseWindow.3 XLowerWindow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRaiseWindow.3 XRestackWindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XReadBitmapFile.3 XCreateBitmapFromData.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XReadBitmapFile.3 XCreatePixmapFromBitmapData.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XReadBitmapFile.3 XReadBitmapFileData.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XReadBitmapFile.3 XWriteBitmapFile.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRecolorCursor.3 XFreeCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XRecolorCursor.3 XQueryBestCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XResourceManagerString.3 XScreenResourceString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSaveContext.3 XDeleteContext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSaveContext.3 XFindContext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSaveContext.3 XUniqueContext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSendEvent.3 XDisplayMotionBufferSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSendEvent.3 XGetMotionEvents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSendEvent.3 XTimeCoord.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetArcMode.3 XSetGraphicsExposure.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetArcMode.3 XSetSubwindowMode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetClipOrigin.3 XSetClipMask.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetClipOrigin.3 XSetClipRectangles.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetCloseDownMode.3 XKillClient.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetCommand.3 XGetCommand.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetErrorHandler.3 XDisplayName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetErrorHandler.3 XGetErrorDatabaseText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetErrorHandler.3 XGetErrorText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetErrorHandler.3 XSetIOErrorHandler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetFillStyle.3 XSetFillRule.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetFontPath.3 XFreeFontPath.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetFontPath.3 XGetFontPath.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetICFocus.3 XUnsetICFocus.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetICValues.3 XGetICValues.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetInputFocus.3 XGetInputFocus.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetLineAttributes.3 XSetDashes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetPointerMapping.3 XGetPointerMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetScreenSaver.3 XActivateScreenSaver.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetScreenSaver.3 XForceScreenSaver.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetScreenSaver.3 XGetScreenSaver.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetScreenSaver.3 XResetScreenSaver.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetSelectionOwner.3 XConvertSelection.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetSelectionOwner.3 XGetSelectionOwner.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetState.3 XSetBackground.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetState.3 XSetForeground.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetState.3 XSetFunction.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetState.3 XSetPlaneMask.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetTextProperty.3 XGetTextProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetTile.3 XSetStipple.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetTile.3 XSetTSOrigin.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetTransientForHint.3 XGetTransientForHint.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMClientMachine.3 XGetWMClientMachine.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMColormapWindows.3 XGetWMColormapWindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMIconName.3 XGetIconName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMIconName.3 XGetWMIconName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMIconName.3 XSetIconName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMName.3 XFetchName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMName.3 XGetWMName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMName.3 XStoreName.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMProperties.3 XmbSetWMProperties.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMProperties.3 Xutf8SetWMProperties.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSetWMProtocols.3 XGetWMProtocols.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreBytes.3 XFetchBuffer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreBytes.3 XFetchBytes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreBytes.3 XRotateBuffers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreBytes.3 XStoreBuffer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreColors.3 XStoreColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStoreColors.3 XStoreNamedColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringListToTextProperty.3 XFreeStringList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringListToTextProperty.3 XTextProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringListToTextProperty.3 XTextPropertyToStringList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringToKeysym.3 XConvertCase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringToKeysym.3 XKeycodeToKeysym.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringToKeysym.3 XKeysymToKeycode.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XStringToKeysym.3 XKeysymToString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSupportsLocale.3 XSetLocaleModifiers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XSynchronize.3 XSetAfterFunction.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTextExtents.3 XQueryTextExtents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTextExtents.3 XQueryTextExtents16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTextExtents.3 XTextExtents16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XTextWidth.3 XTextWidth16.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XUnmapWindow.3 XUnmapSubwindows.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsAllocColor.3 XcmsAllocNamedColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCCCOfColormap.3 XcmsSetCCCOfColormap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELabQueryMaxC.3 XcmsCIELabQueryMaxL.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELabQueryMaxC.3 XcmsCIELabQueryMaxLC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELabQueryMaxC.3 XcmsCIELabQueryMinL.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELuvQueryMaxC.3 XcmsCIELuvQueryMaxL.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELuvQueryMaxC.3 XcmsCIELuvQueryMaxLC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCIELuvQueryMaxC.3 XcmsCIELuvQueryMinL.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsCIELab.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsCIELuv.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsCIEXYZ.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsCIEuvY.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsCIExyY.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsPad.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsRGB.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsRGBi.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsColor.3 XcmsTekHVC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsCreateCCC.3 XcmsFreeCCC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryBlack.3 XcmsQueryBlue.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryBlack.3 XcmsQueryGreen.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryBlack.3 XcmsQueryRed.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryBlack.3 XcmsQueryWhite.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryColor.3 XcmsLookupColor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsQueryColor.3 XcmsQueryColors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsSetWhitePoint.3 XcmsSetWhiteAdjustProc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsStoreColor.3 XcmsStoreColors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsTekHVCQueryMaxC.3 XcmsTekHVCQueryMaxV.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsTekHVCQueryMaxC.3 XcmsTekHVCQueryMaxVC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsTekHVCQueryMaxC.3 XcmsTekHVCQueryMaxVSamples.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XcmsTekHVCQueryMaxC.3 XcmsTekHVCQueryMinV.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawImageString.3 Xutf8DrawImageString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawImageString.3 XwcDrawImageString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawString.3 Xutf8DrawString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawString.3 XwcDrawString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawText.3 Xutf8DrawText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbDrawText.3 XwcDrawText.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbLookupString.3 Xutf8LookupString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbLookupString.3 XwcLookupString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbResetIC.3 Xutf8ResetIC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbResetIC.3 XwcResetIC.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextEscapement.3 Xutf8TextEscapement.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextEscapement.3 XwcTextEscapement.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextExtents.3 Xutf8TextExtents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextExtents.3 XwcTextExtents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 XDefaultString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 XmbTextPropertyToTextList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 Xutf8TextListToTextProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 Xutf8TextPropertyToTextList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 XwcFreeStringList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 XwcTextListToTextProperty.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextListToTextProperty.3 XwcTextPropertyToTextList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextPerCharExtents.3 Xutf8TextPerCharExtents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XmbTextPerCharExtents.3 XwcTextPerCharExtents.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmDestroyDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmGetDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmGetStringDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmLocaleOfDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmPutFileDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetFileDatabase.3 XrmSetDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetResource.3 XrmQGetResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetResource.3 XrmQGetSearchList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmGetResource.3 XrmQGetSearchResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmInitialize.3 XrmOptionDescRec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmInitialize.3 XrmOptionKind.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmInitialize.3 XrmParseCommand.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmInitialize.3 XrmValue.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmMergeDatabases.3 XrmCombineDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmMergeDatabases.3 XrmCombineFileDatabase.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmPutResource.3 XrmPutLineResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmPutResource.3 XrmPutStringResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmPutResource.3 XrmQPutResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmPutResource.3 XrmQPutStringResource.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmUniqueQuark.3 XrmPermStringToQuark.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmUniqueQuark.3 XrmQuarkToString.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmUniqueQuark.3 XrmStringToBindingQuarkList.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmUniqueQuark.3 XrmStringToQuark.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XrmUniqueQuark.3 XrmStringToQuarkList.3

	cd ${STAGEDIR}/${PREFIX}/man/man5 && ${LN} -sf  Compose.5 XCompose.5

.include <bsd.port.mk>
#EOF
