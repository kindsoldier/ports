#
# $Id$
#
PORTNAME=	vimbamin
PORTVERSION=	3.0.15
CATEGORIES=	www
MASTER_SITES= https://github.com/opensolutions/ViMbAdmin/archive/
DISTFILES=  ${PORTVERSION}.tar.gz

MAINTAINER= homeunix7@gmail.com
COMMENT=	Virtual Mailbox Administration 

NO_BUILD=	yes
NO_ARCH=    yes
WWW_OWNER= www
WWW_GROUP= www
WRKSRC=		${WRKDIR}/ViMbAdmin-${PORTVERSION}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND} . | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -name '*.orig' -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -name '.git*' -type f -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -name '.hello-*' -type f -delete
	cd ${STAGEDIR}${PREFIX}/www && ${FIND_CMD} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme
	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}

.include <bsd.port.mk>
#EOF

