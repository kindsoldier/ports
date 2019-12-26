# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/devel/py-zope.component/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.component
PORTVERSION=	4.2.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Component Architecture

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.event>=0:python/py-zope.event@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=4.1.0:python/py-zope.interface@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
