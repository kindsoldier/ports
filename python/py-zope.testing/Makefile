# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-zope.testing/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.testing
PORTVERSION=	4.1.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope testing helpers

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.exceptions>=0:python/py-zope.exceptions@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
