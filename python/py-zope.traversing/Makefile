# $FreeBSD: head/devel/py-zope.traversing/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.traversing
PORTVERSION=	3.14.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Resolving paths in the object hierarchy

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:python/py-zope.i18n@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.proxy>3.4.2:python/py-zope.proxy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=0:python/py-zope.publisher@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=3.7.0:python/py-zope.location@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
