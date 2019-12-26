# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-pyrfc3339/Makefile 473242 2018-06-24 20:18:03Z sunpoet $

PORTNAME=	pyrfc3339
PORTVERSION=	1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyRFC3339-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Generate and parse RFC 3339 timestamps

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:python/py-pytz@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist  distutils
USES=		python

.include <bsd.port.mk>
