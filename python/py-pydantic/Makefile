# $FreeBSD: head/devel/py-pydantic/Makefile 542167 2020-07-14 00:45:25Z yuri $

PORTNAME=	pydantic
DISTVERSION=	1.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Data validation and settings management using python 3.6 type hinting


py36_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dataclasses>=0.6:python/py-dataclasses@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
