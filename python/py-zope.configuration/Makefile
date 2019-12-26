# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/python/py-zope.configuration/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.configuration
PORTVERSION=	3.8.0
CATEGORIES=	devel textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Configuration Markup Language (ZCML)

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:python/py-zope.i18nmessageid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
