#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11-org/xdriver-xf86-video-ati/Makefile $
#
PORTNAME= 	xf86-video-ati
PORTVERSION=	19.0.1 #18.1.0 #7.9.0
X11_CATEGORY= 	driver
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11

MAINTAINER= homeunix7@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= xineramaproto>=0:xproto/xineramaproto
BUILD_DEPENDS+= randrproto>=0:xproto/randrproto
BUILD_DEPENDS+= renderproto>=0:xproto/renderproto
BUILD_DEPENDS+= videoproto>=0:xproto/videoproto
BUILD_DEPENDS+= xf86miscproto>=0:xproto/xf86miscproto
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xorg-server>=0:x11/xserver18
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= fontsproto>=0:xproto/fontsproto


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
#CFLAGS+=	-I${LOCALBASE}/include
#LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=--disable-udev
CONFIGURE_ARGS+=--disable-glamor

ONLY_FOR_ARCHS=	i386 amd64
ONLY_FOR_ARCHS_REASON=	KMS is required and currently only available on x86

.include <bsd.port.mk>
#EOF
