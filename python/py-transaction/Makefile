# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/python/py-transaction/Makefile 416695 2016-06-10 21:31:59Z cs $

PORTNAME=	transaction
PORTVERSION=	1.6.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Transaction management for Python

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.5.2:python/py-zope.interface@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

post-build:
	${FIND} ${WRKSRC}/ -name '*~' -delete 

.include <bsd.port.mk>
#EOF
