# $FreeBSD: head/devel/py-zope.copypastemove/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.copypastemove
PORTVERSION=	3.8.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Copy, Paste, and Move support for content components

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.annotation>=0:python/py-zope.annotation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.container>=0:python/py-zope.container@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.copy>=0:python/py-zope.copy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:python/py-zope.event@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.exceptions>=0:python/py-zope.exceptions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.lifecycleevent>=0:python/py-zope.lifecycleevent@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
