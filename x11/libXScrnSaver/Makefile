#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXScrnSaver/Makefile $
#
PORTNAME= 	libXScrnSaver
PORTVERSION=	1.2.2
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= scrnsaverproto>=0:xproto/scrnsaverproto

BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xproto>=0:xproto/xproto


#BUILD_DEPENDS+= libX11>=0:x11/libX11
#BUILD_DEPENDS+= libXext>=0:x11/libXext
#BUILD_DEPENDS+= libXau>=0:x11/libXau
#BUILD_DEPENDS+= libXdmcp>=0:x11/libXdmcp

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

RUN_DEPENDS+= scrnsaverproto>=0:xproto/scrnsaverproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xss.3.gz


PLIST_FILES+=	man/man3/XScreenSaverAllocInfo.3.gz
PLIST_FILES+=	man/man3/XScreenSaverGetRegistered.3.gz
PLIST_FILES+=	man/man3/XScreenSaverQueryExtension.3.gz
PLIST_FILES+=	man/man3/XScreenSaverQueryInfo.3.gz
PLIST_FILES+=	man/man3/XScreenSaverQueryVersion.3.gz
PLIST_FILES+=	man/man3/XScreenSaverRegister.3.gz
PLIST_FILES+=	man/man3/XScreenSaverSelectInput.3.gz
PLIST_FILES+=	man/man3/XScreenSaverSetAttributes.3.gz
PLIST_FILES+=	man/man3/XScreenSaverSuspend.3.gz
PLIST_FILES+=	man/man3/XScreenSaverUnregister.3.gz
PLIST_FILES+=	man/man3/XScreenSaverUnsetAttributes.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverAllocInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverGetRegistered.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverQueryInfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverRegister.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverSelectInput.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverSetAttributes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverSuspend.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverUnregister.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  Xss.3 XScreenSaverUnsetAttributes.3

.include <bsd.port.mk>
#EOF
