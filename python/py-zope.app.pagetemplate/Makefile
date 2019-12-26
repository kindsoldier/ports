# $FreeBSD: head/devel/py-zope.app.pagetemplate/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.app.pagetemplate
PORTVERSION=	3.11.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	PageTemplate integration for Zope 3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.browserpage>=3.12.0:python/py-zope.browserpage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>=0:python/py-zope.configuration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.dublincore>=0:python/py-zope.dublincore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.pagetemplate>=3.5.0:python/py-zope.pagetemplate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.size>=0:python/py-zope.size@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.tales>=0:python/py-zope.tales@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:python/py-zope.traversing@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
