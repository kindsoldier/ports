# $FreeBSD: head/security/py-certbot-apache/Makefile 472085 2018-06-09 20:04:59Z miwi $

PORTNAME=	certbot-apache
PORTVERSION=	${ACME_VERSION}
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Apache plugin for Certbot


ACME_VERSION=	0.26.1


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}acme>=${ACME_VERSION}:python/py-acme@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certbot>=${ACME_VERSION}:python/py-certbot@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>0:python/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-augeas>0:python/py-python-augeas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:python/py-zope.interface@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist  distutils

NO_ARCH=	yes

.include <bsd.port.mk>
