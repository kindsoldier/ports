# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/sysutils/fatback/Makefile 428725 2016-12-17 12:31:49Z ehaupt $

PORTNAME=	fatback
PORTVERSION=	1.3
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Recover deleted files from FAT filesystems

GNU_CONFIGURE=	yes
INFO=		fatback-manual
EXTRACT_AFTER_ARGS=	--exclude 'getopt*' --exclude 'set[yl].c'

post-patch:
	${REINPLACE_CMD} -e "s/-Werror//g" ${WRKSRC}/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/fatback-manual.info ${STAGEDIR}${PREFIX}/${INFO_PATH}
	${MKDIR} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
#EOF
