# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: head/textproc/py-mako/Makefile 437390 2017-04-01 00:31:09Z wen $

PORTNAME=	mako
PORTVERSION=	1.0.6
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Mako-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Super-fast templating language in Python


BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beaker>=1.1:python/py-beaker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0.9.2:python/py-MarkupSafe@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Babel>0:python/py-babel@${PY_FLAVOR}
RUN_DEPENDS=	${BUILD_DEPENDS}

USES=		python:2.7

USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
