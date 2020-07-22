# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/lua-stdlib/Makefile 532522 2020-04-22 21:26:02Z sunpoet $

PORTNAME=	stdlib
PORTVERSION=	41.2.2
DISTVERSIONPREFIX=	release-v
CATEGORIES=	devel
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Standard Lua Libraries

RUN_DEPENDS+=	${LUA_PKGNAMEPREFIX}-stdlib-debug>=0:devel/lua-stdlib-debug@${LUA_FLAVOR}
RUN_DEPENDS+=	${LUA_PKGNAMEPREFIX}-stdlib-normalize>=2.0:devel/lua-stdlib-normalize@${LUA_FLAVOR}

USES=		lua:module

CONFIGURE_ARGS=	--docdir=${DOCSDIR} LUA=${LUA_CMD}
GNU_CONFIGURE=	yes
NO_ARCH=	yes

GH_ACCOUNT=	lua-stdlib
GH_PROJECT=	lua-stdlib
USE_GITHUB=	yes


.include <bsd.port.mk>
