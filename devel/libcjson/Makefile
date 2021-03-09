# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/libcjson/Makefile 547687 2020-09-05 21:28:44Z sunpoet $

PORTNAME=	libcjson
PORTVERSION=	1.7.14
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ultralightweight JSON parser in ANSI C

USES=		cmake gmake compiler:c11

CMAKE_ON=	BUILD_SHARED_AND_STATIC_LIBS ENABLE_CJSON_UTILS ENABLE_TARGET_EXPORT
CMAKE_OFF=	ENABLE_CUSTOM_COMPILER_FLAGS
USE_CSTD=	c11

GH_ACCOUNT=	DaveGamble
GH_PROJECT=	cJSON
USE_GITHUB=	yes

.include <bsd.port.mk>
