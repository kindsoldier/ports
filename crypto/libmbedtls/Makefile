# $FreeBSD: head/security/mbedtls/Makefile 499363 2019-04-19 14:47:05Z tijl $

PORTNAME=	mbedtls
PORTVERSION=	2.16.1
DISTVERSIONPREFIX=${PORTNAME}-
CATEGORIES=	security devel
PKGNAMEPREFIX=  lib

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	SSL/TLS and cryptography library

USE_GITHUB=	yes
GH_ACCOUNT=	ARMmbed

ALL_TARGET=	no_test
TEST_TARGET=	test
MAKE_ENV=	SHARED=1
USES=		gmake tar:tgz
USE_LDCONFIG=	yes

post-patch:
	${RM} ${WRKSRC}/include/mbedtls/*.orig
	${REINPLACE_CMD} \
		-e 's/PREFIX/NAMEPREFIX/' \
		-e 's/$$(DESTDIR)/&$$(PREFIX)/' \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} 's/-fpic//' ${WRKSRC}/library/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so

.include <bsd.port.mk>
