# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/py-websockets/Makefile 510414 2019-08-31 20:07:10Z ehaupt $

PORTNAME=	websockets
PORTVERSION=	8.0.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Implementation of the WebSocket Protocol (RFC 6455 & 7692)

USES=		python:3.4+
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/websockets/speedups.so

.include <bsd.port.mk>
