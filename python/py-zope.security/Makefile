# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/security/py-zope.security/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	zope.security
PORTVERSION=	3.9.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Security Framework

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:python/py-zope.location@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.proxy>3.4.2:python/py-zope.proxy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}RestrictedPython>=0:python/py-RestrictedPython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>=0:python/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>=0:python/py-zope.configuration@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
