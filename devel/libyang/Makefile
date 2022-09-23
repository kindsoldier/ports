# $FreeBSD: head/net/libyang/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	libyang
PORTVERSION=	2.0.194
DISTVERSIONPREFIX=	v
#DISTVERSIONSUFFIX=	-r4
CATEGORIES=	net
#PKGNAMESUFFIX=  2

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	YANG data modeling language library

LIB_DEPENDS=	libpcre.so:text/libpcre

USES=	cmake gmake compiler:c++11-lang pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	CESNET

#CMAKE_ARGS+=	-DENABLE_LYD_PRIV=ON

post-install:
	${GZIP_CMD} ${STAGEDIR}${PREFIX}/share/man/man?/*.1

.include <bsd.port.mk>
