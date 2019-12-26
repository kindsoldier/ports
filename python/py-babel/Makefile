# Created by: Dryice Liu<dryice@dryice.name>
# $FreeBSD: head/devel/py-babel/Makefile 415560 2016-05-20 17:06:47Z olivierd $

PORTNAME=	Babel
PORTVERSION=	2.3.4
CATEGORIES=	devel python
MASTER_SITES=	https://pypi.io/packages/source/B/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gaod@hychen.org
COMMENT=	Collection of tools for internationalizing Python applications

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:python/py-pytz@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist  distutils
NO_ARCH=	yes


.include <bsd.port.mk>
