# Created by: Viacheslav Mikerov <SlavaMikerov@gmail.com>
# $FreeBSD: head/devel/nlohmann-json/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	json
DISTVERSIONPREFIX=	v
DISTVERSION=	3.6.0
CATEGORIES=	devel
PKGNAMEPREFIX=	libnlohmann-

MAINTAINER=	SlavaMikerov@gmail.com
COMMENT=	JSON library for Modern C++

USES=		cmake compiler:c++11-lib
USE_GITHUB=	yes
GH_ACCOUNT=	nlohmann

NO_BUILD=	yes
NO_ARCH=	yes

CMAKE_ARGS=	-DJSON_BuildTests=OFF

.include <bsd.port.mk>
