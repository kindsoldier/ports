#
# $Id$
#
PORTNAME=	poweradmin
PORTVERSION=	2.1.7
CATEGORIES=	www
MASTER_SITES= https://sourceforge.net/projects/poweradmin/files/
DISTFILES+= ${PORTNAME}-${PORTVERSION}.tgz

MAINTAINER= homeunix7@gmail.com
COMMENT=	A web-based control panel for PowerDNS

NO_BUILD=	yes
NO_ARCH=    yes

WWW_OWNER= www
WWW_GROUP= www

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND_CMD} . -type f | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme
	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF

