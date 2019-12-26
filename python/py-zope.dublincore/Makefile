# $FreeBSD: head/devel/py-zope.dublincore/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.dublincore
PORTVERSION=	3.8.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Dublin Core implementation

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:python/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.lifecycleevent>=0:python/py-zope.lifecycleevent@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
