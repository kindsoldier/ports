#
# $Id$
#
PORTNAME=	monit
PORTVERSION=	5.26.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.mmonit.com/monit/dist/

MAINTAINER=	martinp@tildeslash.com
COMMENT=	Unix system management and proactive monitoring

GNU_CONFIGURE=	yes
USES=		bison gmake
USE_RC_SUBR=	monit

SUB_FILES=	pkg-message

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL} -m 600 ${WRKSRC}/monitrc ${STAGEDIR}${EXAMPLESDIR}/monitrc.sample

.include <bsd.port.mk>
