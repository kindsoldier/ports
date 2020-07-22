# Created by: GreenDog <fiziologus@gmail.com>
# $FreeBSD: head/lang/lua53/Makefile 478429 2018-08-30 04:05:07Z danfe $

PORTNAME=	lua
DISTVERSION=	5.3.5
CATEGORIES=	lang
MASTER_SITES=	https://www.lua.org/ftp/
PKGNAMESUFFIX=	53

MAINTAINER=	russ.haley@gmail.com
COMMENT=	Powerful, efficient, lightweight, embeddable scripting language

LUA_VER=	5.3
USE_LDCONFIG=	yes

MAKE_ARGS=	__MAKE_CONF=${NONEXISTENT}
BUILD_WRKSRC=	${WRKSRC}/src
LUA_PREFIX=	${PREFIX}

LUA_CMD=	lua${LUA_VER}
LUAC_CMD=	luac${LUA_VER}
LUA_INCDIR=	${LUA_PREFIX}/include/lua/${LUA_VER}
LUA_LIBDIR=	${LUA_PREFIX}/lib

LUA_LIB_STATIC=	liblua${LUA_VER}.a
LUA_LIB_SHARED=	liblua${LUA_VER}.so.0
LUA_PC_FILE=	lua${LUA_VER}.pc

ALL_TARGET=bsd

#EXTRA_PATCHES=	${PATCHDIR}/extra-patch-assert
#CPPFLAGS=	-DLUA_USE_APICHECK

#LIBEDIT_DL_USES=	libedit
#LIBEDIT_DL_CPPFLAGS=	-DLUA_USE_READLINE_DL

#CPPFLAGS=	-DLUA_USE_READLINE
#LIBS=		-ledit

CPPFLAGS+=	-DLUA_USE_READLINE
LIBS+=		-lreadline -L${LOCALBASE}/lib
CFLAGS+=	-fPIC -I${LOCALBASE}/include
#NO_STRICT_ALIASING=yes
MAKE_ARGS+= CC="${CC}"
MAKE_ARGS+= MYCFLAGS="${CPPFLAGS} ${CFLAGS}"
MAKE_ARGS+= MYLDFLAGS="${LDFLAGS}"
MAKE_ARGS+= MYLIBS="${LIBS}"

MAKE_ARGS+= LUA_T=${LUA_CMD}
MAKE_ARGS+= LUAC_T=${LUAC_CMD}

MAKE_ARGS+= LUA_A=${LUA_LIB_STATIC}
MAKE_ARGS+= LUA_SO=${LUA_LIB_SHARED}
MAKE_ARGS+= LUA_SONAME=${LUA_LIB_SHARED}

MAKE_ARGS+= TO_BIN="${LUA_CMD} ${LUAC_CMD}"
MAKE_ARGS+= TO_LIB="${LUA_LIB_SHARED} ${LUA_LIB_STATIC}"

MAKE_ARGS+= INSTALL_TOP=${STAGEDIR}${PREFIX}
MAKE_ARGS+= INSTALL_INC=${STAGEDIR}${LUA_INCDIR}
MAKE_ARGS+= INSTALL_EXEC="${INSTALL_PROGRAM}"

SUB_FILES= ${LUA_PC_FILE}
SUB_LIST+= VERSION=${PORTVERSION}
SUB_LIST+= INCLUDEDIR=${LUA_INCDIR}
SUB_LIST+= LIBDIR=${LUA_LIBDIR}
SUB_LIST+= SONAME=lua${LUA_VER}

#post-patch:
#	${REINPLACE_CMD} -e "/LUA_ROOT/s,/usr/local,${LUA_PREFIX}," ${WRKSRC}/src/luaconf.h
#	${REINPLACE_CMD} -e "s,readline/,editline/,g ; /history\.h/d" ${WRKSRC}/src/lua.c
#	${REINPLACE_CMD} -e "/^#def.*LUA_READLINE_LIBPATH/s,/usr/local,${LOCALBASE}," \
#		${WRKSRC}/src/lua.c

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${LUA_LIB_SHARED}
	${INSTALL_DATA} ${STAGEDIR}${PREFIX}/man/man1/lua.1 ${STAGEDIR}${PREFIX}/man/man1/${LUA_CMD}.1
	${INSTALL_DATA} ${STAGEDIR}${PREFIX}/man/man1/luac.1 ${STAGEDIR}${PREFIX}/man/man1/${LUAC_CMD}.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf lua${LUA_VER}.1 lua.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf luac${LUA_VER}.1 luac.1
	${MKDIR} -p ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKDIR}/${LUA_PC_FILE} ${STAGEDIR}${PREFIX}/lib/pkgconfig/
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf liblua${LUA_VER}.so.0 liblua${LUA_VER}.so
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf lua${LUA_VER} lua
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf luac${LUA_VER} luac


.include <bsd.port.mk>
