#
# $Id$
#
PORTNAME=	rename
PORTVERSION=	1.3
CATEGORIES=	sysutils
#MASTER_SITES=	http://mirror2.unixfreunde.de/ \
#		http://freebsd.unixfreunde.de/sources/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Rename multiple files using regular expressions

GNU_CONFIGURE=	yes
USES+=		gmake

post-extract:
	${RM} -f ${WRKSRC}/config.cache

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rename ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/rename.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
#EOF
