#
# $Id$
#
PORTNAME=	ptools
PORTVERSION=	0.5
CATEGORIES=	sysutils
MASTER_SITES=	http://shewolf.com.pl/ptools/
PKGNAMESUFFIX=	2

MAINTAINER=	tmwalaszek@gmail.com
COMMENT=	Toolset based on Solaris ptools functionality


post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/bin|${STAGEDIR}${PREFIX}/bin|g ; \
		s|gcc|$${CC}|g ; \
		s|555|755|g ; \
		s|-o root -g wheel|${STRIP}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
#EOF
