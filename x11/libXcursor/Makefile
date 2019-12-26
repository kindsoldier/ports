#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXcursor/Makefile $
#
PORTNAME= 	libXcursor
PORTVERSION=	1.1.14
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXrender>=0:x11/libXrender
#BUILD_DEPENDS+= libXfixes>=0:x11/libXfixes
BUILD_DEPENDS+= renderproto>=0:xproto/renderproto


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXrender.so:x11/libXrender


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
LIBS+=		-lXrender

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --with-cursorpath=<paths> 


PLIST_FILES+=	man/man3/Xcursor.3.gz

PLIST_FILES+=	man/man3/XcursorCursorsCreate.3.gz
PLIST_FILES+=	man/man3/XcursorCursorsDestroy.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameLoad.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameLoadAllImages.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameLoadCursor.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameLoadImage.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameLoadImages.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameSave.3.gz
PLIST_FILES+=	man/man3/XcursorFilenameSaveImages.3.gz
PLIST_FILES+=	man/man3/XcursorGetDefaultSize.3.gz
PLIST_FILES+=	man/man3/XcursorGetTheme.3.gz
PLIST_FILES+=	man/man3/XcursorImageCreate.3.gz
PLIST_FILES+=	man/man3/XcursorImageDestroy.3.gz
PLIST_FILES+=	man/man3/XcursorImagesCreate.3.gz
PLIST_FILES+=	man/man3/XcursorImagesDestroy.3.gz
PLIST_FILES+=	man/man3/XcursorLibraryLoadCursor.3.gz
PLIST_FILES+=	man/man3/XcursorLibraryLoadCursors.3.gz
PLIST_FILES+=	man/man3/XcursorLibraryLoadImage.3.gz
PLIST_FILES+=	man/man3/XcursorLibraryLoadImages.3.gz
PLIST_FILES+=	man/man3/XcursorSetDefaultSize.3.gz
PLIST_FILES+=	man/man3/XcursorSetTheme.3.gz
PLIST_FILES+=	man/man3/XcursorShapeLoadCursor.3.gz
PLIST_FILES+=	man/man3/XcursorShapeLoadCursors.3.gz
PLIST_FILES+=	man/man3/XcursorShapeLoadImage.3.gz
PLIST_FILES+=	man/man3/XcursorShapeLoadImages.3.gz
PLIST_FILES+=	man/man3/XcursorSupportsARGB.3.gz
PLIST_FILES+=	man/man3/XcursorXcFileLoad.3.gz
PLIST_FILES+=	man/man3/XcursorXcFileLoadAllImages.3.gz
PLIST_FILES+=	man/man3/XcursorXcFileLoadImage.3.gz
PLIST_FILES+=	man/man3/XcursorXcFileLoadImages.3.gz
PLIST_FILES+=	man/man3/XcursorXcFileSave.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorCursorsCreate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorCursorsDestroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameLoad.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameLoadAllImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameLoadCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameLoadImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameLoadImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameSave.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorFilenameSaveImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorGetDefaultSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorGetTheme.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorImageCreate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorImageDestroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorImagesCreate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorImagesDestroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorLibraryLoadCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorLibraryLoadCursors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorLibraryLoadImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorLibraryLoadImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorSetDefaultSize.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorSetTheme.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorShapeLoadCursor.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorShapeLoadCursors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorShapeLoadImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorShapeLoadImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorSupportsARGB.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorXcFileLoad.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorXcFileLoadAllImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorXcFileLoadImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorXcFileLoadImages.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xcursor.3 XcursorXcFileSave.3

.include <bsd.port.mk>
#EOF
