# Created by: Martin Klaffenboeck <martin.klaffenboeck@gmx.at>
# $FreeBSD: head/databases/zodb3/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zodb
PORTVERSION=	3.10.5
CATEGORIES=	databases
MASTER_SITES=	CHEESESHOP
PKGNAMESUFFIX=	-py${PYTHON_SUFFIX}
DISTNAME=	ZODB3-${PORTVERSION}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Z - Object Database for python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zconfig>=0:python/py-zconfig@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zdaemon>=0:python/py-zdaemon@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}transaction>=1.1.0:python/py-transaction@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zclockfile>=1.0.0:python/py-zclockfile@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.event>=1.0.0:python/py-zope.event@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
