#
# $Id$
#
PORTNAME=	nextcloud
PORTVERSION=	12
CATEGORIES=	www
MASTER_SITES=	https://download.nextcloud.com/server/releases/
DISTFILES=  ${PORTNAME}-${PORTVERSION}.zip

MAINTAINER= homeunix7@gmail.com
COMMENT=	A system for the creation and management of personal data.

NO_BUILD=	yes
NO_ARCH=    yes
USES=   zip
WWW_OWNER= www
WWW_GROUP= www
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	${MKDIR} ${STAGEDIR}${WWWDIR}/data
	cd ${WRKSRC} && ${FIND_CMD} . -type f | ${CPIO} -pvd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme

	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF

