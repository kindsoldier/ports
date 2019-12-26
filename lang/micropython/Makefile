# $FreeBSD: head/lang/micropython/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	micropython
PORTVERSION=	1.9.4
#DISTVERSIONPREFIX=	v
CATEGORIES=	lang python
MASTER_SITES=   http://micropython.org/resources/source/ #micropython-1.9.4.tar.xz


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of the Python language for microcontrollers

#LIB_DEPENDS=	libffi.so:devel/libffi

USES=		gmake pkgconfig python:3.4+,build shebangfix tar:xz
#USE_GITHUB=	yes

PLIST_FILES=	bin/micropython

BROKEN_armv6=	fails to assemble: error: invalid operand for instruction
BROKEN_armv7=	fails to assemble: error: invalid operand for instruction

WRKSRC_SUBDIR=	ports/unix
#PATCH_DIR=      ${WRKSRC}/../../
PATCH_WRKSRC= ${WRKDIR}/${PORTNAME}-${PORTVERSION}


SHEBANG_FILES=	../../tools/make-frozen.py
MAKE_ARGS+=	V=1
MAKE_ENV+=	PYTHON=${PYTHON_CMD} CFLAGS_EXTRA="${CPPFLAGS} ${CFLAGS}"

#post-patch:
#	${REINPLACE_CMD} -e 's|-Werror||;/^COPT =/d; \
#		s|ls -1 -v|ls -1|' ${WRKSRC}/Makefile
#	${REINPLACE_CMD} -e 's|re_exec|mp_re_exec|' \
#		${WRKSRC}/../extmod/modure.c
#	${REINPLACE_CMD} -e 's|AS =|AS ?=|;s|LD =|LD ?=|; \
#		s|CC =|CC ?=|;s|PYTHON =|PYTHON ?=|' \
#		${WRKSRC}/../py/mkenv.mk
#	${REINPLACE_CMD} -e 's|libc\.so\.6|libc\.so\.7|;' \
#		${WRKSRC}/../tests/unix/ffi_callback.py \
#		${WRKSRC}/../tests/unix/ffi_float.py

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/micropython ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
