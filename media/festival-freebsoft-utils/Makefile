#
# $Id$
#
PORTNAME=	festival-freebsoft-utils
PORTVERSION=	0.10
CATEGORIES=	audio accessibility
MASTER_SITES=	http://www.freebsoft.org/pub/projects/${PORTNAME}/

MAINTAINER=	avilla@FreeBSD.org
COMMENT=	Festival utilities focused on interaction with Speech Dispatcher

RUN_DEPENDS+=	festival:media/festival
RUN_DEPENDS+=	sox:media/sox
NO_BUILD=	yes
INFO=		${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/festival/lib
	cd ${WRKSRC} && ${INSTALL_DATA} *.scm ${STAGEDIR}${PREFIX}/share/festival/lib
	cd ${WRKSRC}/doc && ${INSTALL_MAN} ${PORTNAME}.info ${STAGEDIR}${PREFIX}/${INFO_PATH}
#	${MKDIR} ${STAGEDIR}${DOCSDIR}
#.for f in ${PORTDOCS}
#	${INSTALL_MAN} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
#.endfor

.include <bsd.port.mk>
#EOF
