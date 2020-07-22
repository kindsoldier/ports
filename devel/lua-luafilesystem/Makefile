# Created by: Kelly Hays <kelly.hays@jkhfamily.org>
# $FreeBSD: head/devel/luafilesystem/Makefile 531700 2020-04-14 15:49:36Z mat $

#PORTNAME=       lfs
PORTNAME=	luafilesystem
DISTVERSIONPREFIX=	v
DISTVERSION=	1_7_0
PORTVERSION=	${DISTVERSION:S/_/./g}
CATEGORIES=	devel
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}-

MAINTAINER=	fiziologus@gmail.com
COMMENT=	Library to access directory structure and file attributes

USES=		lua:module

USE_GITHUB=	yes
GH_ACCOUNT=	keplerproject

ALL_TARGET=	lib

MAKE_ARGS+=	INCS="-I${LUA_INCDIR}"

post-patch:
	${REINPLACE_CMD} -e \
		"s|%%PREFIX%%|${PREFIX}| ; \
		s|%%MODLIBDIR%%|${LUA_MODLIBDIR}| ; \
		s|%%INCDIR%%|${LUA_INCDIR}|" ${WRKSRC}/config

.include <bsd.port.mk>
