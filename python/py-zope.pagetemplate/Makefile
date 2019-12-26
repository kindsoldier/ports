# $FreeBSD: head/devel/py-zope.pagetemplate/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.pagetemplate
PORTVERSION=	3.6.3
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Page Templates

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:python/py-zope.component@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.security>=0:python/py-zope.security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.tal>=0:python/py-zope.tal@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.tales>=0:python/py-zope.tales@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:python/py-zope.i18n@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:python/py-zope.traversing@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
