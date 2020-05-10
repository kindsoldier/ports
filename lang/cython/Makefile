# Created by: Wen Heping <wenhping@gmail.com>
# $FreeBSD: head/lang/cython/Makefile 527314 2020-02-28 00:46:10Z jrm $

PORTNAME=	cython
PORTVERSION=	0.29.15
CATEGORIES=	lang python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Cython-${PORTVERSION}

MAINTAINER=	vmagerya@gmail.com
COMMENT=	Compiler for Writing C Extensions for the Python Language

USES=		python
USE_PYTHON=	allflavors autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/Cython \
		-name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
