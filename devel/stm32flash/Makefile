PORTNAME=	stm32flash
DISTVERSION=	0.7
CATEGORIES=	cad
MASTER_SITES=	SF/${PORTNAME}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Flash program for STM32 using the ST serial bootloader

GNU_CONFIGURE=  yes
USES=		gmake autoreconf

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/stm32flash


.include <bsd.port.mk>
