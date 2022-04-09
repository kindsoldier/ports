#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libdmx/Makefile $
#
PORTNAME= 	libdmx
PORTVERSION=	1.1.3
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= dmxproto>=0:xproto/dmxproto

#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext

#BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+= xproto>=0:xproto/xproto


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include -DHAVE__XEATDATAWORDS=1
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/DMX.3.gz
PLIST_FILES+=	man/man3/DMXAddInput.3.gz
PLIST_FILES+=	man/man3/DMXAddScreen.3.gz
PLIST_FILES+=	man/man3/DMXChangeDesktopAttributes.3.gz
PLIST_FILES+=	man/man3/DMXChangeScreensAttributes.3.gz
PLIST_FILES+=	man/man3/DMXForceWindowCreation.3.gz
PLIST_FILES+=	man/man3/DMXGetDesktopAttributes.3.gz
PLIST_FILES+=	man/man3/DMXGetInputAttributes.3.gz
PLIST_FILES+=	man/man3/DMXGetInputCount.3.gz
PLIST_FILES+=	man/man3/DMXGetScreenAttributes.3.gz
PLIST_FILES+=	man/man3/DMXGetScreenCount.3.gz
PLIST_FILES+=	man/man3/DMXGetWindowAttributes.3.gz
PLIST_FILES+=	man/man3/DMXQueryExtension.3.gz
PLIST_FILES+=	man/man3/DMXQueryVersion.3.gz
PLIST_FILES+=	man/man3/DMXRemoveInput.3.gz
PLIST_FILES+=	man/man3/DMXRemoveScreen.3.gz
PLIST_FILES+=	man/man3/DMXSync.3.gz


.include <bsd.port.mk>
#EOF
