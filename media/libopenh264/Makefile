# $FreeBSD: head/multimedia/openh264/Makefile 536182 2020-05-22 02:28:22Z jbeich $

PORTNAME=	openh264
DISTVERSIONPREFIX=v
DISTVERSION=	2.1.1
CATEGORIES=	multimedia
PKGNAMEPREFIX=  lib

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Cisco implementation of H.264 codec

USE_GITHUB=	yes
GH_ACCOUNT=	cisco

USES=		gmake
USE_LDCONFIG=	yes
MAKE_ARGS=	PREFIX="${PREFIX}"
MAKE_ARGS+=	OS=bsd ARCH="${ARCH:S/amd64/x86_64/}"
MAKE_ARGS+=	CCASFLAGS='$$(CFLAGS) ${ASFLAGS}'
MAKE_ARGS+=	CFLAGS_OPT="" CFLAGS_DEBUG=""
ALL_TARGET=	all
LDFLAGS_i386=	-Wl,-znotext

post-patch:
	${REINPLACE_CMD} -e '/gtest-targets\.mk/d' \
		${WRKSRC}/Makefile

pre-build:
	${LN} -sf ${LOCALBASE}/lib/libgtest.so ${WRKSRC}/libgtest.a

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so.*

.include <bsd.port.mk>
