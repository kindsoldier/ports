# Created by: Martin Jackson <mhjacks@swbell.net>
# $FreeBSD: head/devel/py-pyasn1/Makefile 434465 2017-02-20 15:10:27Z sunpoet $

PORTNAME=	pyasn1
PORTVERSION=	0.2.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mhjacks@swbell.net
COMMENT=	ASN.1 toolkit for Python

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

regression-test: build
	cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
