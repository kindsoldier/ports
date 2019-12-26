# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/security/py-certbot/Makefile 472084 2018-06-09 19:59:15Z miwi $

PORTNAME=	certbot
PORTVERSION=	${ACME_VERSION}
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
#PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Let's Encrypt client #'

ACME_VERSION=	0.26.1


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}acme>=${ACME_VERSION}:python/py-acme@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configargparse>=0.9.3:python/py-configargparse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configobj>0:python/py-configobj@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cryptography>=1.2:python/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}parsedatetime>=1.3:python/py-parsedatetime@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>0:python/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyrfc3339>0:python/py-pyrfc3339@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>0:python/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools>=1.0:python/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:python/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ipaddress>0:python/py-ipaddress@${PY_FLAVOR}

#RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}enum34>0:python/py-enum34@${PY_FLAVOR}


BUILD_DEPENDS= ${RUN_DEPENDS}

# Actually 2.7,3.3+
USES=		python:3.6
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

post-patch:
	${REINPLACE_CMD} \
		-e 's|/etc/|${LOCALBASE}/etc/|' \
		-e 's|/var/lib|/var/db|' \
		${WRKSRC}/${PORTNAME}/constants.py

.include <bsd.port.mk>
