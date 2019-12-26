#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/libXv/Makefile $
#
PORTNAME= 	libXv
PORTVERSION=	1.0.10
X11_CATEGORY= 	lib
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= videoproto>=0:xproto/videoproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXext>=0:x11/libXext


BUILD_DEPENDS+= xextproto>=0:xproto/xextproto

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext

RUN_DEPENDS+= videoproto>=0:xproto/videoproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man3/Xv.3.gz
PLIST_FILES+=	man/man3/XvCreateImage.3.gz
PLIST_FILES+=	man/man3/XvFreeAdaptorInfo.3.gz
PLIST_FILES+=	man/man3/XvFreeEncodingInfo.3.gz
PLIST_FILES+=	man/man3/XvGetPortAttribute.3.gz
PLIST_FILES+=	man/man3/XvGetStill.3.gz
PLIST_FILES+=	man/man3/XvGetVideo.3.gz
PLIST_FILES+=	man/man3/XvGrabPort.3.gz
PLIST_FILES+=	man/man3/XvListImageFormats.3.gz
PLIST_FILES+=	man/man3/XvPortNotify.3.gz
PLIST_FILES+=	man/man3/XvPutImage.3.gz
PLIST_FILES+=	man/man3/XvPutStill.3.gz
PLIST_FILES+=	man/man3/XvPutVideo.3.gz
PLIST_FILES+=	man/man3/XvQueryAdaptors.3.gz
PLIST_FILES+=	man/man3/XvQueryBestSize.3.gz
PLIST_FILES+=	man/man3/XvQueryEncodings.3.gz
PLIST_FILES+=	man/man3/XvQueryExtension.3.gz
PLIST_FILES+=	man/man3/XvQueryPortAttributes.3.gz
PLIST_FILES+=	man/man3/XvSelectPortNotify.3.gz
PLIST_FILES+=	man/man3/XvSelectVideoNotify.3.gz
PLIST_FILES+=	man/man3/XvSetPortAttribute.3.gz
PLIST_FILES+=	man/man3/XvStopVideo.3.gz
PLIST_FILES+=	man/man3/XvUngrabPort.3.gz
PLIST_FILES+=	man/man3/XvVideoNotify.3.gz
PLIST_FILES+=	man/man3/XvShmCreateImage.3.gz
PLIST_FILES+=	man/man3/XvShmPutImage.3.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XvCreateImage.3 XvShmCreateImage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  XvPutImage.3 XvShmPutImage.3

.include <bsd.port.mk>
#EOF
