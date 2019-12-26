# Created by: lesi@FreeBSD.org
# $FreeBSD: head/x11-drivers/xf86-video-intel/Makefile 488160 2018-12-23 00:56:25Z jbeich $

PORTNAME=	xf86-video-intel
PORTVERSION=	2.99.917.20181203
CATEGORIES=	x11-drivers
MASTER_SITES=	http://cgit.freedesktop.org/xorg/driver/${PORTNAME}/snapshot/
DISTNAME=	${PORTNAME}-${COMMIT_ID}
COMMIT_ID=	e5ff8e1828f97891c819c919d7115c6e18b2eb1f

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Driver for Intel integrated graphics chipsets

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	Intel integrated GPU only exists in Intel x86 processors/chipsets

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+= fontsproto>=0:xproto/fontsproto
BUILD_DEPENDS+= randrproto>=0:xproto/randrproto
BUILD_DEPENDS+= renderproto>=0:xproto/renderproto
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xextproto>=0:xproto/xextproto
BUILD_DEPENDS+= xineramaproto>=0:xproto/xineramaproto
BUILD_DEPENDS+= xorg-server>=0:x11/xserver18
BUILD_DEPENDS+= xproto>=0:xproto/xproto
BUILD_DEPENDS+= libX11>=0:x11/libX11
BUILD_DEPENDS+= libXvMC>=0:x11/libXvMC
#BUILD_DEPENDS+= ${RUN_DEPENDS}

LIB_DEPENDS+=	libX11-xcb.so:x11/libX11
LIB_DEPENDS+=	libX11.so:x11/libX11

LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXv.so:x11/libXv
LIB_DEPENDS+=	libXvMC.so:x11/libXvMC

LIB_DEPENDS+=	libdrm.so:system/libdrm
LIB_DEPENDS+=	libdrm_intel.so:system/libdrm

LIB_DEPENDS+=	libpciaccess.so:system/libpciaccess
LIB_DEPENDS+=	libpixman.so:x11/libpixman

LIB_DEPENDS+=	libxcb-dri2.so:x11/libxcb
LIB_DEPENDS+=	libxcb.so:x11/libxcb

LIB_DEPENDS+=	libxcb-util.so:x11/libxcb-util


USE_LDCONFIG=	yes

USES+=		autoreconf gmake
GNU_CONFIGURE=	yes
USES+=		tar:bzip2

CONFIGURE_ARGS+=	--disable-udev
CONFIGURE_ARGS=	--with-default-accel=sna
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

post-patch:
	${REINPLACE_CMD} -e 's,pixman-1,pixman,g' ${WRKSRC}/configure.ac

USES+=		tar:bzip2
USES+=		gmake cpe
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
