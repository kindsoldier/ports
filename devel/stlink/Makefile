# $FreeBSD: head/devel/stlink/Makefile 454590 2017-11-21 08:36:26Z mat $

PORTNAME=	stlink
PORTVERSION=	1.4.0
CATEGORIES=	devel

MAINTAINER=	lev@FreeBSD.org
COMMENT=	STM32 ST-Link JTAG variant tools

USE_GITHUB=	yes
GH_ACCOUNT=	texane

USES=		cmake pkgconfig
USE_LDCONFIG=	yes

PORTDOCS=	README.md tested-boards.md tutorial.md

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/README.md
	${INSTALL_DATA} ${WRKSRC}/doc/tested-boards.md ${STAGEDIR}${DOCSDIR}/tested-boards.md
	${INSTALL_DATA} ${WRKSRC}/doc/tutorial.md ${STAGEDIR}${DOCSDIR}/tutorial.md

.include <bsd.port.mk>
