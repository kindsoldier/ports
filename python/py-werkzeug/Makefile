# Created by: Moggie <moggie@elasticmind.net>
# $FreeBSD: head/www/py-werkzeug/Makefile 530318 2020-04-02 12:04:28Z sunpoet $

PORTNAME=	werkzeug
PORTVERSION=	1.0.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Werkzeug-${DISTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python utilities collection for building WSGI applications


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>=16.0:python/py-openssl@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

#WATCHDOG_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}watchdog>=0.8:devel/py-watchdog@${PY_FLAVOR}

.include <bsd.port.mk>
