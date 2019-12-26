#
# $Id$
#
PORTNAME=	mpd
DISTVERSION=	5.8
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/Mpd5/Mpd-${PORTVERSION}
DIST_SUBDIR=	mpd5


MAINTAINER=	onborodin@gmail.com
COMMENT=	Multi-link PPP daemon based on netgraph(4)

#LIB_DEPENDS+=	libpdel.so:net/libpdel
LIB_DEPENDS+=	libexpat.so:text/libexpat


HAS_CONFIGURE=	yes
CONFIGURE_WRKSRC=	${WRKSRC}/src
MAKE_ENV+= LC_ALL=C

#DOCSDIR=	share/doc/${PORTNAME}
MAKE_ENV+= DOCSDIR=${PREFIX}/${DOCSDIR}
SUB_LIST+= DOCSDIR=${DOCSDIR}

MANCOMPRESSED=	maybe
USE_RC_SUBR+= mpd.sh

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/sbin
	${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man8

PORTEXAMPLES=	*

post-stage:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/conf/mpd*.sample ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
#EOF
