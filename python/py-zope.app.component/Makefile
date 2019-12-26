# $FreeBSD: head/devel/py-zope.app.component/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.app.component
PORTVERSION=	3.9.3
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Local Zope Component Support

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.site>=0:python/py-zope.site@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.app.container>=0:python/py-zope.app.container@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.app.pagetemplate>=0:python/py-zope.app.pagetemplate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=3.8:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.deprecation>=0:python/py-zope.deprecation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.exceptions>=0:python/py-zope.exceptions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.formlib>=0:python/py-zope.formlib@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=3.12.0:python/py-zope.publisher@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:python/py-zope.traversing@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.componentvocabulary>=0:python/py-zope.componentvocabulary@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
