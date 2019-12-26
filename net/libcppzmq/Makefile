# Created by: Vasil Dimov <vd@FreeBSD.org>
# $FreeBSD: head/net/cppzmq/Makefile 494242 2019-03-01 08:08:14Z tobik $

PORTNAME=	cppzmq
PORTVERSION=	4.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net
PKGNAMEPREFIX=  lib

MAINTAINER=	vd@FreeBSD.org
COMMENT=	C++ bindings for 0MQ

LIB_DEPENDS=	libzmq.so:net/libzmq4

NO_ARCH=	yes
USES=		cmake pkgconfig
CMAKE_ARGS=	--no-warn-unused-cli
CMAKE_ARGS+=	-DCPPZMQ_BUILD_TESTS:BOOL=OFF
CMAKE_ARGS+=	-DCPPZMQ_CMAKECONFIG_INSTALL_DIR:PATH="lib/cmake/${PORTNAME}"
CMAKE_ARGS+=	-Wno-dev

CONFLICTS_INSTALL=	libzmq2

USE_GITHUB=	yes
GH_ACCOUNT=	zeromq

post-patch:
	${SED} -i '.orig' \
		-e 's|ZeroMQ_LIBRARY AND ZeroMQ_STATIC_LIBRARY|ZeroMQ_LIBRARY|' \
		${WRKSRC}/libzmq-pkg-config/FindZeroMQ.cmake

.include <bsd.port.mk>
