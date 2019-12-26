# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: head/archivers/zstd/Makefile 507069 2019-07-21 20:46:03Z sunpoet $

PORTNAME=	zstd
PORTVERSION=	1.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	archivers
PKGNAMEPREFIX=  lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Zstandard - Fast real-time compression algorithm

#OPTIONS_DEFINE=	LZ4
#OPTIONS_DEFAULT=LZ4

USES=		gmake

ALL_TARGET=	default
USE_LDCONFIG=	yes

GH_ACCOUNT=	facebook
USE_GITHUB=	yes

LIB_DEPENDS=	liblz4.so:arch/liblz4

post-patch:
	${REINPLACE_CMD} -e 's|INSTALL_|BSD_&|' ${WRKSRC}/lib/Makefile ${WRKSRC}/programs/Makefile

.include <bsd.port.mk>
