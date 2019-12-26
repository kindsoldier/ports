# $FreeBSD: head/devel/libgit2/Makefile 491724 2019-01-31 14:13:42Z mfechner $

# Also update devel/libgit2-glib, devel/rubygem-rugged, devel/py-pygit2

PORTNAME=	libgit2
PORTVERSION=	0.28.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Portable, pure C implementation of the Git core

USE_GITHUB=	yes
GH_ACCOUNT=	libgit2

USES=		cmake pathfix pkgconfig python:build
USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DUSE_SSH=ON
CMAKE_ARGS+=	-DTHREADSAFE=ON
CMAKE_ARGS+=	-DCURL=ON

SSH_LIB_DEPENDS=	libssh2.so:net/libssh2
LIB_DEPENDS=	libcurl.so:net/libcurl

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e "/LIBGIT2_PC_REQUIRES.*zlib/ d" ${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e "/LIBGIT2_PC_REQUIRES.*openssl/ d" \
		${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.post.mk>
