# Created by: Babak Farrokhi <farrokhi@FreeBSD.org>
# $FreeBSD: head/devel/py-uvloop/Makefile 517121 2019-11-09 10:39:40Z farrokhi $

PORTNAME=	uvloop
PORTVERSION=	0.14.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	farrokhi@FreeBSD.org
COMMENT=	Fast drop-in replacement of asyncio event loop based on libuv

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent distutils


post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/uvloop/loop.so

.include <bsd.port.mk>
