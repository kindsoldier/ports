# Created by: Joerg Wunsch <joerg@FreeBSD.org>
# $FreeBSD: head/devel/avr-gdb/Makefile 428144 2016-12-08 17:40:41Z tijl $

PORTNAME=	gdb
PORTVERSION=	7.10
CATEGORIES=	devel
MASTER_SITES=	GNU
PKGNAMEPREFIX=	${TARGET}-
DISTNAME=	gdb-${PORTVERSION}

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	GNU GDB for the ${TARGET} target

USES=		gmake tar:xz
LIB_DEPENDS=	libexpat.so:text/libexpat


TARGET=arm-eabi

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--target=${TARGET} 
CONFIGURE_ARGS+= --program-prefix=${TARGET} 
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --disable-werror

pre-configure:
	cd ${WRKSRC} && ${RM} -r dejagnu expect tcl texinfo

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdb/gdb \
		${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}${PORTNAME}
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/gdb/doc/gdb.1 \
		${STAGEDIR}${PREFIX}/man/man1/${PKGNAMEPREFIX}${PORTNAME}.1


.include <bsd.port.mk>
