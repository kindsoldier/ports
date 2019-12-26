# $FreeBSD: head/devel/py-zope.publisher/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.publisher
PORTVERSION=	3.13.1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Publishes Python objects on the web

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.proxy>=0:python/py-zope.proxy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.testing>=0:python/py-zope.testing@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>=0:python/py-zope.configuration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.browser>=0:python/py-zope.browser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.contenttype>=3.5:python/py-zope.contenttype@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:python/py-zope.event@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.exceptions>=0:python/py-zope.exceptions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:python/py-zope.i18n@${PY_FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
#EOF
