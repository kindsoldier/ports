#
# $Id$
#
PORTNAME=	libdrm
PORTVERSION=	2.4.85
CATEGORIES=	graphics x11
MASTER_SITES=	http://dri.freedesktop.org/libdrm/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Userspace interface to kernel Direct Rendering Module services

LIB_DEPENDS+=	libpciaccess.so:system/libpciaccess
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs

BUILD_DEPENDS+= docbook-xsl>=1.7:text/docbook-xsl
BUILD_DEPENDS+= dtd-docbook-xml42>=1.0:text/dtd-docbook-xml42


GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
USES+=		gmake

.include <bsd.port.pre.mk>

ONLY_FOR_ARCHS= amd64

CONFIGURE_ARGS+=--enable-libkms
CONFIGURE_ARGS+=--disable-vmwgfx
CONFIGURE_ARGS+= --enable-intel
CONFIGURE_ARGS+= --enable-radeon

.include <bsd.port.post.mk>
#EOF

