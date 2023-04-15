#
# $Id$
#
PORTNAME=	poweradmin
PORTVERSION=	2.2.2 #3.4.2
CATEGORIES=	www
MASTER_SITES= https://sourceforge.net/projects/poweradmin/files/v${PORTVERSION}/
DISTFILES+= v${PORTVERSION}.tar.gz

MAINTAINER= homeunix7@gmail.com
COMMENT=	A web-based control panel for PowerDNS

NO_BUILD=	yes
NO_ARCH=    yes

WWW_OWNER= www
WWW_GROUP= www

#WRKSRC = ${WRKDIR}/poweradmin-poweradmin-8aad93f
WRKSRC = ${WRKDIR}/poweradmin-poweradmin-bc3ea8b

do-install:
	mkdir -p ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND} . -type f | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme
	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF

