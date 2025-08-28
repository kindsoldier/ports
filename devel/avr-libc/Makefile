# Created by: Joerg Wunsch <joerg@FreeBSD.org>
# $FreeBSD: head/devel/avr-libc/Makefile 436507 2017-03-19 17:19:55Z antoine $

PORTNAME=	avr-libc
PORTVERSION=	2.0.0
CATEGORIES=	devel
MASTER_SITES=	SAVANNAH

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	C and math library for the Atmel AVR controller family

TARGET=avr

BUILD_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils
BUILD_DEPENDS+=	${TARGET}-gcc:devel/${TARGET}-gcc

.include <bsd.port.options.mk>

USES=		tar:bzip2 gmake
HAS_CONFIGURE=	yes

CONFIGURE_ENV=	CC="avr-gcc -ffunction-sections -fdata-sections" PREFIX=${PREFIX}
CONFIGURE_ARGS=	--build=`./config.guess` --host=avr --prefix=${PREFIX}
CFLAGS+= 


post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s,examples,,' ${WRKSRC}/doc/Makefile.in

do-install:
	cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install

.include <bsd.port.mk>
#EOF
