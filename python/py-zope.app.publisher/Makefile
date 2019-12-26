# $FreeBSD: head/devel/py-zope.app.publisher/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.app.publisher
PORTVERSION=	3.10.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Means for configuration of Zope 3 style views and resources

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.browsermenu>=0:python/py-zope.browsermenu@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.browserpage>=0:python/py-zope.browserpage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.browserresource>=0:python/py-zope.browserresource@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>=0:python/py-zope.configuration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.datetime>=0:python/py-zope.datetime@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.ptresource>=0:python/py-zope.ptresource@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=3.12:python/py-zope.publisher@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.componentvocabulary>=0:python/py-zope.componentvocabulary@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
