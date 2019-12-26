# $FreeBSD: head/devel/py-zope.ptresource/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.ptresource
PORTVERSION=	3.9.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Page template resource plugin for zope.browserresource

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.browserresource>=0:python/py-zope.browserresource@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.pagetemplate>=0:python/py-zope.pagetemplate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=0:python/py-zope.publisher@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
