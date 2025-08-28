# Created by: Brian Dean <bsd@FreeBSD.org>
# $FreeBSD: head/devel/avrdude/Makefile 448307 2017-08-19 13:05:17Z bsam $

PORTNAME=	avrdude
PORTVERSION=	6.3
CATEGORIES=	devel
MASTER_SITES=	SAVANNAH/avrdude

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Program for programming the on-chip memory of Atmel AVR CPUs

GNU_CONFIGURE=	yes
USES=		localbase
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
MAKE_JOBS_UNSAFE=	yes

LIB_DEPENDS=	libftdi1.so:devel/libftdi1

post-patch:
	${REINPLACE_CMD} -e 's|-lusb-1.0|-lusb|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e '/LIBS=/ s|-lftdi1*|&-do-not-detect|' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
