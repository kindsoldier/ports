#
# $Id$
#
PORTNAME=	pixz
PORTVERSION=	1.0.7
CATEGORIES=	archivers
MASTER_SITES=	SF/pixz
EXTRACT_SUFX=	.tar.gz

MAINTAINER=	onborodin@gmail.com
COMMENT=	Parallel, indexing version of XZ

#LICENSE=	BSD
#LICENSE_FILE=	${WRKSRC}/LICENSE

SUB_FILES=	Makefile
MAKE_ENV+=	PTHREAD_LIBS="-pthread"

CFLAGS+=	-pthread


.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800505 || (${OSVERSION} >= 900000 && ${OSVERSION} < 900012)
LIB_DEPENDS+=	lzma:archivers/xz
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

post-extract: apply-slist
	${INSTALL_DATA} ${WRKDIR}/Makefile ${WRKSRC}
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.1 ${WRKSRC}

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1


.include <bsd.port.post.mk>
#EOF
