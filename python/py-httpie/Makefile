# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/www/py-httpie/Makefile 522866 2020-01-13 08:27:10Z ale $

PORTNAME=	httpie
PORTVERSION=	2.0.0
CATEGORIES=	www
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Command line HTTP client

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.22.0:python/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=2.5.2:python/py-pygments@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	jakubroztocil

NO_ARCH=	yes

.include <bsd.port.mk>
