# Created by: ache
# $FreeBSD: head/archivers/unrar/Makefile 412751 2016-04-08 16:27:37Z sunpoet $

PORTNAME=	unrar
PORTVERSION=	5.7.3
CATEGORIES+=	archivers
MASTER_SITES=	http://www.rarlab.com/rar/ LOCAL/sunpoet
DISTNAME=	unrarsrc-${PORTVERSION}


MAINTAINER?=	sunpoet@FreeBSD.org
COMMENT=	Extract, view & test RAR archives

LDFLAGS+=	-lpthread
MAKE_ARGS=	CXX=${CXX} LDFLAGS="${LDFLAGS}" STRIP=${STRIP_CMD}
MAKEFILE=	makefile
USES+=		gmake
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/unrar

CPPFLAGS+=	-DOPENSSL_AES
LDFLAGS+=	-lcrypto

#CPPFLAGS+=	-DWITH_ICONV -I${LOCALBASE}/include
#LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}


do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/unrar ${STAGEDIR}${PREFIX}/bin/
#	${MKDIR} ${STAGEDIR}${DOCSDIR}/
#	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
#EOF
