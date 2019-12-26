# $FreeBSD: head/www/py-requests-toolbelt/Makefile 470427 2018-05-19 19:26:26Z miwi $

PORTNAME=	requests-toolbelt
DISTVERSION=	0.8.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Utility belt for advanced users of python-requests

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>2.0.1:python/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
