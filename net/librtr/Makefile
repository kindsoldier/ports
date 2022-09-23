# $FreeBSD: head/net-mgmt/rtrlib/Makefile 506661 2019-07-15 13:01:49Z mat $

PORTNAME=       librtr
DISTNAME=	rtrlib
DISTVERSION=	0.8.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net sysutils


MAINTAINER=	freebsd@bodems.net
COMMENT=	Open-source C implementation of the RPKI/Router Protocol client

LIB_DEPENDS=	libssh.so:net/libssh

USES=		cmake gmake
USE_GITHUB=	yes
GH_PROJECT=     rtrlib
GH_ACCOUNT=     rtrlib
USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DRTRLIB_TRANSPORT_SSH=Yes
CMAKE_ARGS+=	-DWITH_BGPSEC=Yes
CMAKE_ARGS+=	-DLIBSSH_LIBRARIES=${LOCALBASE}/lib/libssh.so
CMAKE_ARGS+=	-DLIBSSH_INCLUDE_DIRS=${LOCALBASE}/include


.include <bsd.port.mk>
