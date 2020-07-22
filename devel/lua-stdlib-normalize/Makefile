# $FreeBSD: head/devel/lua-stdlib-normalize/Makefile 532503 2020-04-22 18:57:29Z tcberner $

PORTNAME=	stdlib-normalize
PORTVERSION=	2.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	sasaki@fcc.ad.jp
COMMENT=	Collection of normalized lua functions

RUN_DEPENDS=	${LUA_PKGNAMEPREFIX}-stdlib-debug>=0:devel/lua-stdlib-debug@${LUA_FLAVOR}

NO_ARCH=	yes
USES=		lua:module

USE_GITHUB=	yes
GH_ACCOUNT=	lua-stdlib
GH_PROJECT=	normalize

do-install:
	@${MKDIR} ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize
	${INSTALL_DATA} ${WRKSRC}/lib/std/normalize/_base.lua ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize
	${INSTALL_DATA} ${WRKSRC}/lib/std/normalize/_strict.lua ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize
	${INSTALL_DATA} ${WRKSRC}/lib/std/normalize/_typecheck.lua ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize
	${INSTALL_DATA} ${WRKSRC}/lib/std/normalize/init.lua ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize
	${INSTALL_DATA} ${WRKSRC}/lib/std/normalize/version.lua ${STAGEDIR}${LUA_MODSHAREDIR}/std/normalize

.include <bsd.port.mk>
#EOF
