# Created by: Jan Hornyak <pav@oook.cz>
# $FreeBSD: head/net/luasocket/Makefile 531700 2020-04-14 15:49:36Z mat $

PORTNAME=	luasocket
DISTVERSIONPREFIX=	v
DISTVERSION=	3.0-rc1
CATEGORIES=	net
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Socket support for the Lua language

USE_GITHUB=	yes
GH_ACCOUNT=	diegonehab

MAKE_ARGS=	LUAV=${LUA_VER}
USES=		gmake lua:module pkgconfig
INSTALL_TARGET=	install-unix

CFLAGS+=	`pkgconf --cflags lua${LUA_VER}` \
		-DLUA_COMPAT_APIINTCASTS
LDFLAGS+=	-shared  `pkgconf --libs lua${LUA_VER}`

post-extract:
	${MV} ${WRKSRC}/makefile ${WRKSRC}/Makefile
	${MV} ${WRKSRC}/src/makefile ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} -e 's|gcc|${CC}|g' ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} -e 's|CFLAGS=|CFLAGS\+=|g' ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} -e 's|LDFLAGS=|LDFLAGS\+=|g' ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} -e 's/prefix/PREFIX/g' ${WRKSRC}/src/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${LUA_MODLIBDIR:S|^${LOCALBASE}|${PREFIX}|}/*/*.so

.include <bsd.port.mk>
