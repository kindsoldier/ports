# Created by: demon@FreeBSD.org
# $FreeBSD: head/math/glm/Makefile 409329 2016-02-22 10:17:45Z rakuco $

PORTNAME=	glm
PORTVERSION=	0.9.7.3
CATEGORIES=	math graphics
PKGNAMEPREFIX=  lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ mathematics library for software based on the OpenGL GLSL

USE_GITHUB=	yes
GH_ACCOUNT=	g-truc

NO_ARCH=	yes
NO_BUILD=	yes

CMAKE_ARGS=	-DGLM_TEST_ENABLE:BOOL=OFF
USES=		cmake

.include <bsd.port.mk>
