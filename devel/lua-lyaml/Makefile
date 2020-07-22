# Created by: Yarema <yds@Necessitu.de>
# $FreeBSD: head/textproc/lua-lyaml/Makefile 531700 2020-04-14 15:49:36Z mat $

PORTNAME=	lyaml
PORTVERSION=	6.2.4
DISTVERSIONPREFIX=v
CATEGORIES=	textproc
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	yds@Necessitu.de
COMMENT=	LibYAML binding for Lua

LIB_DEPENDS=	libyaml.so:text/libyaml

USES=		lua:module

USE_GITHUB=	yes
GH_ACCOUNT=	gvvaughan
GH_PROJECT=	${PORTNAME}

CFLAGS+=	-pedantic -Wall -Qunused-arguments -fPIC -DPIC -std=c99
CFLAGS+=	-fno-strict-aliasing -isystem ${LOCALBASE}/include
CFLAGS+=	-I${LUA_INCDIR} -DVERSION=\"${PORTVERSION}\" -DNDEBUG
CFLAGS+=	-D_FORTIFY_SOURCE=2 -D_BSD_SOURCE -D__BSD_VISIBLE
LDFLAGS+=	-shared -L${LOCALBASE}/lib

do-build:
	cd ${WRKSRC}/ext/yaml && \
		${CC} ${CFLAGS} ${LDFLAGS} -lyaml -o yaml.so \
		yaml.c emitter.c parser.c scanner.c

do-install:
	@${MKDIR} ${STAGEDIR}${LUA_MODLIBDIR} ${STAGEDIR}${LUA_MODSHAREDIR}/${PORTNAME}
	${INSTALL_LIB} ${WRKSRC}/ext/yaml/yaml.so ${STAGEDIR}${LUA_MODLIBDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}/*.lua ${STAGEDIR}${LUA_MODSHAREDIR}/${PORTNAME}

.include <bsd.port.mk>
