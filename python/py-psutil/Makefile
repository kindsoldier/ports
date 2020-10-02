# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: head/sysutils/py-psutil/Makefile 526661 2020-02-21 18:57:16Z sunpoet $

PORTNAME=	psutil
PORTVERSION=	5.7.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Process utilities module for Python

#RUN_DEPENDS=	${PY_ENUM34}
#TEST_DEPENDS=	${PY_IPADDRESS}

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}psutil121

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/psutil/_psutil_bsd.so \
	  ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/psutil/_psutil_posix.so

.include <bsd.port.pre.mk>

#.if ${PYTHON_REL} < 3000
#TEST_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}mock>=0:python/py-mock@${PY_FLAVOR}
#.endif

.include <bsd.port.post.mk>
