# $FreeBSD: head/devel/py-zope.annotation/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.annotation
PORTVERSION=	3.5.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Object annotation mechanism

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.proxy>=0:python/py-zope.proxy@${PY_FLAVOR} \
		zodb${PYTHON_PKGNAMESUFFIX}>=0:python/zodb3

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
