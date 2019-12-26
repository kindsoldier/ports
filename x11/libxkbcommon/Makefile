# $FreeBSD: head/x11/libxkbcommon/Makefile 490981 2019-01-22 21:03:09Z zeising $

PORTNAME=	libxkbcommon
PORTVERSION=	0.8.0
CATEGORIES=	x11
MASTER_SITES=	http://xkbcommon.org/download/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Keymap handling library for toolkits and window systems

RUN_DEPENDS=	xkeyboard-config>0:xmisc/xkeyboard-config

#XORG_CAT=	lib
USES=		gmake bison tar:xz
GNU_CONFIGURE=  yes

#USE_XORG=	xcb
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--without-doxygen \
		--with-default-rules="xorg" \
		--with-x-locale-root=${PREFIX}/lib/X11/locale \
		--disable-wayland

.include <bsd.port.mk>
