# $FreeBSD: head/devel/py-zope.app.container/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.app.container
PORTVERSION=	3.9.1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Container

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.browser>=0:python/py-zope.browser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.container>=0:python/py-zope.container@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.copypastemove>=0:python/py-zope.copypastemove@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.dublincore>=3.7:python/py-zope.dublincore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:python/py-zope.event@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.exceptions>=0:python/py-zope.exceptions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:python/py-zope.i18n@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.lifecycleevent>=0:python/py-zope.lifecycleevent@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=3.12:python/py-zope.publisher@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.size>=0:python/py-zope.size@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:python/py-zope.traversing@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.app.publisher>=0:python/py-zope.app.publisher@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
