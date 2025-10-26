#
# $Id$
#
PORTNAME=	pixz
CATEGORIES=	archivers
DISTVERSION=	1.0.7
CATEGORIES=	archivers
MASTER_SITES=	https://github.com/vasi/${PORTNAME}/releases/download/v${DISTVERSION}/


MAINTAINER=	onborodin@gmail.com
COMMENT=	Parallel, indexing version of XZ

USES=		pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ENV += LIBARCHIVE_CFLAGS="-I/usr/include"
CONFIGURE_ENV += LIBARCHIVE_LIBS="-larchive"

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/src/pixz.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
#EOF
