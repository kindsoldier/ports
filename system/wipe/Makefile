#
# $Id$
#
PORTNAME=	wipe
PORTVERSION=	2.3.1
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	File and block device wiping utility

USES=		tar:bzip2
GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -e 's|@CFLAGS@|${CFLAGS}|' ${WRKSRC}/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
#EOF

