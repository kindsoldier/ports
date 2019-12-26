# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/devel/py-pip/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pip
PORTVERSION=	9.0.3
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Tool for installing and managing Python packages

NO_ARCH=	yes
USES=		python shebangfix
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

SHEBANG_FILES=	pip/__init__.py

GH_ACCOUNT=	pypa

NO_ARCH=	yes

.include <bsd.port.mk>
