# Created by: Olivier Duchateau
# $FreeBSD: head/security/py-itsdangerous/Makefile 498757 2019-04-12 20:59:02Z sunpoet $

PORTNAME=	itsdangerous
PORTVERSION=	0.24
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Various helpers to pass data in untrusted environments

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}simplejson>=3.0:python/py-simplejson@${PY_FLAVOR}

.include <bsd.port.mk>
