# $FreeBSD: head/devel/libunistring/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	libunistring
PORTVERSION=	0.9.10
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	takefu@airport.fm
COMMENT=	Unicode string library

USES=		charsetfix gmake tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
INFO=		${PORTNAME}

CONFIGURE_ARGS=	--disable-static

.ifdef QEMU_EMULATING
# XXX bug 224740: configure hangs: GSlice: failed to allocate 496 bytes (alignment: 512)
CONFIGURE_ENV+=	gl_cv_func_printf_enomem=no
.endif

.include <bsd.port.mk>
