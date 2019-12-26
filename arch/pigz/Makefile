#
# $Id$
#
PORTNAME=	pigz
PORTVERSION=	2.3.1
CATEGORIES=	archivers
MASTER_SITES+=	http://www.zlib.net/pigz/ 
MASTER_SITES+=	http://freebsd.unixfreunde.de/sources/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Parallel GZIP

USES+=	gmake

MAN1=	pigz.1

post-patch:
	${REINPLACE_CMD} -e 's/ -lz/ -lm -lz/g' ${WRKSRC}/Makefile

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
.for FILE in pigz pigzn pigzt unpigz
	${INSTALL_PROGRAM} ${WRKSRC}/${FILE} ${STAGEDIR}${PREFIX}/bin
.endfor
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/pigz.1 ${STAGEDIR}${PREFIX}/man/man1/
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf pigz.1 unpigz.1
.include <bsd.port.mk>
#EOF

