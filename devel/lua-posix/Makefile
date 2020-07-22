# Created by: Andrew Turner <andrew+ports@fubar.geek.nz>
# $FreeBSD: head/devel/lua-posix/Makefile 531700 2020-04-14 15:49:36Z mat $

PORTNAME=	posix
PORTVERSION=	34.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Lua bindings for POSIX APIs

RUN_DEPENDS=	${LUA_PKGNAMEPREFIX}-stdlib-normalize>=0:devel/lua-stdlib-normalize@${LUA_FLAVOR}

USES=		lua:module shebangfix
SHEBANG_FILES=	build-aux/luke

USE_GITHUB=	yes
GH_ACCOUNT=	luaposix
GH_PROJECT=	luaposix

do-build:
	@cd ${WRKSRC} && build-aux/luke all \
		CFLAGS="${CFLAGS}" \
		LUA="${LOCALBASE}/bin/${LUA_CMD}" \
		LUA_INCDIR="${LUA_INCDIR}" \
		PREFIX="${PREFIX}" \
		version="${PORTVERSION}"

do-install:
	cd ${WRKSRC} && build-aux/luke install \
		INST_LIBDIR="${STAGEDIR}${LUA_MODLIBDIR}" \
		INST_LUADIR="${STAGEDIR}${LUA_MODSHAREDIR}"

post-install:
	${FIND} ${STAGEDIR}${LUA_MODLIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
