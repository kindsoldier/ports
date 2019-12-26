# Created by: elbarto@ArcadeBSD.org
# $FreeBSD: head/comms/dfu-programmer/Makefile 430671 2017-01-05 22:58:30Z jbeich $

PORTNAME=	dfu-programmer
PORTVERSION=	0.5.5
CATEGORIES=	comms
MASTER_SITES=	SF

MAINTAINER=	byu17@uclive.ac.nz
COMMENT=	Device Firmware Update based USB programmer for Atmel chips

GNU_CONFIGURE=	yes
LIBS+=		-lusb

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/docs/${PORTNAME}.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
