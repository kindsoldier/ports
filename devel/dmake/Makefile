#
# $Id$
#
PORTNAME=	dmake
PORTVERSION=	4.12.2
CATEGORIES=	devel
MASTER_SITES=	http://dmake.apache-extras.org.codespot.com/files/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Another hyper make utility

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --datarootdir=${DATADIR}


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/dmake.tf ${STAGEDIR}${PREFIX}/man/man1/dmake.1

.include <bsd.port.mk>
#EOF
