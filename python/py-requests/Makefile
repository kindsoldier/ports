# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/www/py-requests/Makefile 476584 2018-08-07 09:11:28Z koobs $

PORTNAME=	requests
PORTVERSION=	2.22.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	HTTP library written in Python for human beings

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}chardet>=3.0.2:python/py-chardet@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>=2.5:python/py-idna@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}urllib3>=1.21.1:python/py-urllib3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certifi>=2017.4.17:python/py-certifi@${PY_FLAVOR}

# Actually 2.6-2.7,3.3+
USES=		python
USE_PYTHON=	autoplist  distutils

CONFLICTS_INSTALL=	py*-requests1-*

NO_ARCH=	yes

# Automated tests failinng due to httpbin issue
# https://github.com/kennethreitz/httpbin/issues/403

.include <bsd.port.mk>
