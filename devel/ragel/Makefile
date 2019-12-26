# Created by: ijliao
# $FreeBSD: head/devel/ragel/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	ragel
PORTVERSION=	6.9
CATEGORIES=	devel
MASTER_SITES=	http://www.colm.net/files/${PORTNAME}/

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Compile regular languages into executable C/C++ code

USES=	gmake
GNU_CONFIGURE=	yes

PORTEXAMPLES=   *

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ragel/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/test; ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
#EOF
