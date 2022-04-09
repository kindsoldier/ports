#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXp/Makefile $
#
PORTNAME= 	libXp
PORTVERSION=	1.0.2
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= printproto>=0:xproto/printproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext
#BUILD_DEPENDS+= libXau>=0:x11/libXau

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

PLIST_FILES+=	man/man3/XpCancelDoc.3.gz
PLIST_FILES+=	man/man3/XpCancelJob.3.gz
PLIST_FILES+=	man/man3/XpCancelPage.3.gz
PLIST_FILES+=	man/man3/XpCreateContext.3.gz
PLIST_FILES+=	man/man3/XpDestroyContext.3.gz
PLIST_FILES+=	man/man3/XpEndDoc.3.gz
PLIST_FILES+=	man/man3/XpEndJob.3.gz
PLIST_FILES+=	man/man3/XpEndPage.3.gz
PLIST_FILES+=	man/man3/XpFreePrinterList.3.gz
PLIST_FILES+=	man/man3/XpGetAttributes.3.gz
PLIST_FILES+=	man/man3/XpGetContext.3.gz
PLIST_FILES+=	man/man3/XpGetDocumentData.3.gz
PLIST_FILES+=	man/man3/XpGetImageResolution.3.gz
PLIST_FILES+=	man/man3/XpGetLocaleHinter.3.gz
PLIST_FILES+=	man/man3/XpGetOneAttribute.3.gz
PLIST_FILES+=	man/man3/XpGetPageDimensions.3.gz
PLIST_FILES+=	man/man3/XpGetPdmStartParams.3.gz
PLIST_FILES+=	man/man3/XpGetPrinterList.3.gz
PLIST_FILES+=	man/man3/XpGetScreenOfContext.3.gz
PLIST_FILES+=	man/man3/XpInputSelected.3.gz
PLIST_FILES+=	man/man3/XpPutDocumentData.3.gz
PLIST_FILES+=	man/man3/XpQueryExtension.3.gz
PLIST_FILES+=	man/man3/XpQueryScreens.3.gz
PLIST_FILES+=	man/man3/XpQueryVersion.3.gz
PLIST_FILES+=	man/man3/XpRehashPrinterList.3.gz
PLIST_FILES+=	man/man3/XpSelectInput.3.gz
PLIST_FILES+=	man/man3/XpSetAttributes.3.gz
PLIST_FILES+=	man/man3/XpSetContext.3.gz
PLIST_FILES+=	man/man3/XpSetImageResolution.3.gz
PLIST_FILES+=	man/man3/XpSetLocaleHinter.3.gz
PLIST_FILES+=	man/man3/XpStartDoc.3.gz
PLIST_FILES+=	man/man3/XpStartJob.3.gz
PLIST_FILES+=	man/man3/XpStartPage.3.gz
PLIST_FILES+=	man/man3/libXp.3.gz

.include <bsd.port.mk>
#EOF
