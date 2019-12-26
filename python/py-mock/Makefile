# Created by: jessekempf@gmail.com
# $FreeBSD: head/devel/py-mock/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	mock
PORTVERSION=	2.0.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jessekempf@gmail.com
COMMENT=	Mock unit tests for Python

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=1.3:python/py-pbr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9:python/py-six@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3300
RUN_DEPENDS+=  ${PYTHON_PKGNAMEPREFIX}funcsigs>=0:python/py-funcsigs@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
