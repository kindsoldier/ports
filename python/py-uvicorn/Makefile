# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-uvicorn/Makefile 540462 2020-06-26 08:45:28Z sunpoet $

PORTNAME=	uvicorn
PORTVERSION=	0.11.5
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Lightning-fast ASGI server

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=7<8:python/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}h11>=0.8<0.10:python/py-h11@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}httptools>=0.1<0.2:python/py-httptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}uvloop>=0.14.0:python/py-uvloop@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}websockets>=8<9:python/py-websockets@${PY_FLAVOR}
#RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}watchgod>=0.6<0.7:devel/py-watchgod@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes


.include <bsd.port.mk>
