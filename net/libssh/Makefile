# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/security/libssh/Makefile 439836 2017-04-30 19:05:00Z johans $

PORTNAME=	libssh
DISTVERSION=	0.8.6
CATEGORIES=	security devel
MASTER_SITES=	https://git.libssh.org/projects/libssh.git/snapshot/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Library implementing the SSH1 and SSH2 protocol

USES=		cmake cpe tar:xz
USE_LDCONFIG=	yes

CMAKE_ARGS= -DWITH_EXAMPLES:BOOL=OFF
CMAKE_ARGS+= -DWITH_GSSAPI:BOOL=OFF
CMAKE_ARGS+= -DWITH_TESTING:BOOL=OFF
CMAKE_ARGS+= -DWITH_ZLIB:BOOL=ON
CMAKE_ARGS+= -DWITH_GCRYPT:BOOL=OFF
CMAKE_ARGS+= -DWITH_STATIC_LIB:BOOL=ON

post-patch:
	${RM} ${PATCH_WRKSRC}/cmake/Modules/UseDoxygen.cmake
	${REINPLACE_CMD} \
		-e 's|LIB_INSTALL_DIR}|CMAKE_INSTALL_PREFIX}/lib|' \
		-e 's|CMAKE_INSTALL_DIR}|CMAKE_INSTALL_DIR}/libssh|' \
		${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e 's| -pedantic-errors||' \
		${WRKSRC}/cmake/Modules/DefineCompilerFlags.cmake

.include <bsd.port.mk>
#EOF

