# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/devel/py-funcsigs/Makefile 437250 2017-03-29 23:36:36Z sunpoet $

PORTNAME=	funcsigs
PORTVERSION=	1.0.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python function signatures from PEP362

NO_ARCH=	yes
USE_PYTHON=	autoplist  distutils
USES=		python

do-test:
	cd ${WRKSRC}/ && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
