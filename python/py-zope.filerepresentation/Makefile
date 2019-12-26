# $FreeBSD: head/devel/py-zope.filerepresentation/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.filerepresentation
PORTVERSION=	3.6.1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	File-system Representation Interfaces

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:python/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:python/py-zope.schema@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
#EOF
