# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-pbr/Makefile 498530 2019-04-10 06:18:31Z antoine $

PORTNAME=	pbr
PORTVERSION=	3.1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python Build Reasonableness

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>0:python/py-pip@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python shebangfix
USE_PYTHON=	autoplist concurrent distutils
SHEBANG_FILES=	pbr/tests/testpackage/setup.py

.include <bsd.port.mk>
