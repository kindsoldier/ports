# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/devel/py-Jinja2/Makefile 534966 2020-05-11 23:51:58Z dbaio $

PORTNAME=	Jinja2
PORTVERSION=	2.10.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX?=

MAINTAINER=	nivit@FreeBSD.org
COMMENT?=	Fast and easy to use stand-alone template engine

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0.23:python/py-MarkupSafe@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

PY2TO3_CMD=	${LOCALBASE}/bin/2to3-${PYTHON_VER}
PY2TO3_ARGS=	--fix=all --no-diffs --nobackups --verbose --write

.include <bsd.port.mk>
