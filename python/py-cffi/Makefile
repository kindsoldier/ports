# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-cffi/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	cffi
PORTVERSION=	1.14.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Foreign Function Interface for Python calling C code

LIB_DEPENDS=	libffi.so:devel/libffi
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycparser>=2.10:python/py-pycparser@${PY_FLAVOR}

# Actually 2.6-2.7,3.2-3.5
USES=		localbase python compiler
USE_PYTHON=	autoplist distutils

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1100000
.if ${COMPILER_TYPE:Mclang}
CFLAGS+=	-Wno-shift-negative-value
.endif
.endif

#post-install:
#	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/_cffi_backend.so

.include <bsd.port.post.mk>
