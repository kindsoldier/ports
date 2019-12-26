# $FreeBSD: head/devel/py-zope.tales/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.tales
PORTVERSION=	3.5.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Template Application Language Expression Syntax (TALES)

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.tal>=0:python/py-zope.tal@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
