#
# $Id$
#
PORTNAME=	websvn
PORTVERSION=	2.3.3
CATEGORIES=	devel www
MASTER_SITES=	http://websvn.tigris.org/files/documents/1380/49056/


MAINTAINER= homeunix7@gmail.com
COMMENT=	Subversion repository web frontend


NO_BUILD=	yes
NO_ARCH=	yes

WWW_OWNER= www
WWW_GROUP= www


do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND} . | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme

	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}

	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}



.include <bsd.port.mk>
#EOF
