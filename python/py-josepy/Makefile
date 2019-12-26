# Created by: Carlos J Puga Medina <cpm@FreeBSD.org>
# $FreeBSD: head/security/py-josepy/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	josepy
PORTVERSION=	1.1.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	JOSE protocol implementation in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=0.8:python/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=0.13:python/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9.0:python/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist  distutils

NO_ARCH=	yes

.include <bsd.port.mk>
