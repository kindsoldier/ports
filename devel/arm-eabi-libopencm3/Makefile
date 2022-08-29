# $FreeBSD: head/devel/libopencm3/Makefile 459105 2018-01-15 17:47:48Z lev $

PORTNAME=	libopencm3
PORTVERSION=    2020.01.12
DISTNAME=       ${PORTNAME}-${PORTVERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=  ${TARGET}-

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Cortex-M0/M3/M4 runtime library

BUILD_DEPENDS+= ${TARGET}-gcc:devel/${TARGET}-gcc

USE_GITHUB=	yes
GH_ACCOUNT=	libopencm3

GH_TAGNAME= 7daa6f1 

USES=		gmake python:2.7,build shebangfix

SHEBANG_FILES=	scripts/irq2nvic_h scripts/lpcvtcksum

DESTDIRNAME=	STAGEDIR
MAKE_ENV+=	DESTDIR=${STAGEDIR}${PREFIX}
MAKE_ARGS+= V=1

TARGET= arm-eabi
PREFIX= ${LOCALBASE}/${TARGET}

CFLAGS= -Os

do-configure:
	${FIND} ${WRKSRC} -name Makefile -o -name \*.mk -type f | ${XARGS} ${REINPLACE_CMD} -e 's|PREFIX|TARGET|g'
	${FIND} ${WRKSRC} -name Makefile -o -name \*.mk -type f | ${XARGS} ${REINPLACE_CMD} -e 's|arm-none|arm|g'


INCDIR= ${STAGEDIR}/${PREFIX}/include
LIBDIR= ${STAGEDIR}/${PREFIX}/lib

do-install:
	${INSTALL_DATA} -d ${INCDIR}/libopencm3/
	${INSTALL_DATA} -d ${INCDIR}/libopencmsis/
	${INSTALL_DATA} -d ${LIBDIR}
	${CP} -R ${WRKSRC}/include/libopencm3/* ${INCDIR}/libopencm3/
	${CP} -R ${WRKSRC}/include/libopencmsis/* ${INCDIR}/libopencmsis/
	${INSTALL_DATA} -m 0644 ${WRKSRC}/lib/*.a ${LIBDIR}/
	${INSTALL_DATA} -m 0644 ${WRKSRC}/lib/*.ld ${LIBDIR}/
	${INSTALL_DATA} -m 0644 ${WRKSRC}/lib/stm32/*/*.ld ${LIBDIR}/
	${CHMOD} -R a+rX ${LIBDIR}/ ${INCDIR}/

.include <bsd.port.mk>
#EOF
