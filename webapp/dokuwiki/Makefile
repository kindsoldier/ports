#
# $Id$
#
PORTNAME=	dokuwiki
PORTVERSION=	${DOKUWIKI_VER:S/-/./g}
CATEGORIES=	www
MASTER_SITES=	http://download.dokuwiki.org/src/dokuwiki/
DISTNAME=	${PORTNAME}-${DOKUWIKI_VER}
EXTRACT_SUFX=	.tgz

DOKUWIKI_VER=	2016-06-26a

MAINTAINER= homeunix7@gmail.com
COMMENT=	A simple and easy to use wiki, no database required

NO_BUILD=	yes
NO_ARCH=	yes

WWW_OWNER= www
WWW_GROUP= www

post-patch:
	${REINPLACE_CMD} -e 's|/usr/bin|${LOCALBASE}/bin|' ${WRKSRC}/bin/*.php
	${FIND} ${WRKSRC} -name '*.orig' -delete
	${RM} ${WRKSRC}/data/deleted.files


do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND_CMD} . | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND_CMD} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme
	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF

