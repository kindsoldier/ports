#
# $Id: Makefile 1388 2007-11-03 01:24:57Z root $
# $URL: file:///usr2/svn/ports5/x11/libXxfmisc/Makefile $
#
PORTNAME= 	libXxf86misc
PORTVERSION=	1.0.3
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xf86miscproto>=0:xproto/xf86miscproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext


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

PLIST_FILES+=	man/man3/XF86Misc.3.gz


PLIST_FILES+=	man/man3/XF86MiscGetKbdSettings.3.gz
PLIST_FILES+=	man/man3/XF86MiscGetMouseSettings.3.gz
PLIST_FILES+=	man/man3/XF86MiscGetSaver.3.gz
PLIST_FILES+=	man/man3/XF86MiscQueryExtension.3.gz
PLIST_FILES+=	man/man3/XF86MiscQueryVersion.3.gz
PLIST_FILES+=	man/man3/XF86MiscSetKbdSettings.3.gz
PLIST_FILES+=	man/man3/XF86MiscSetMouseSettings.3.gz
PLIST_FILES+=	man/man3/XF86MiscSetSaver.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscGetKbdSettings.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscGetMouseSettings.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscGetSaver.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscQueryExtension.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscQueryVersion.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscSetKbdSettings.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscSetMouseSettings.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XF86Misc.3 XF86MiscSetSaver.3

.include <bsd.port.mk>
#EOF
