# Created by: Denis Podolskiy <bytestore@yandex.ru>
# $FreeBSD: head/graphics/jpeg-turbo/Makefile 523792 2020-01-22 06:01:47Z antoine $

PORTNAME=	jpeg
PORTVERSION=    8.${DISTVERSION}
DISTVERSION=	2.0.4
CATEGORIES=	graphics
MASTER_SITES=	SF/lib${DISTNAME}/${PORTVERSION}
DISTNAME=	lib${PORTNAME}-turbo-${DISTVERSION}
PKGNAMEPREFIX=  lib



MAINTAINER=	portmgr@FreeBSD.org
COMMENT?=	SIMD-accelerated JPEG codec which replaces libjpeg

USES=		cmake gmake
USE_LDCONFIG=	yes
CMAKE_ON+=	WITH_JPEG8
CMAKE_ARGS+=	WITH_TURBOJPEG=ON
TEST_TARGET=	test

.include <bsd.port.options.mk>

.if ${ARCH} == i386 || ${ARCH} == amd64
BUILD_DEPENDS+=	nasm:devel/nasm
.endif


.include <bsd.port.mk>
