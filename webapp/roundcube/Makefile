#
# $Id$
#
PORTNAME=	roundcube
DISTVERSION=	1.2.1
CATEGORIES=	    mail www
MASTER_SITES=	SF/${PORTNAME}mail/${PORTNAME}mail/${PORTVERSION}
MASTER_SITES=	https://github.com/roundcube/roundcubemail/releases/download/${PORTVERSION}/
#roundcubemail-1.2.1-complete.tar.gz
DISTNAME=	${PORTNAME}mail-${DISTVERSION}-complete


MAINTAINER?=	ziggi@inbox.ru
COMMENT=	Fully skinnable XHTML/CSS webmail written in PHP

WRKSRC=		${WRKDIR}/${PORTNAME}mail-${PORTVERSION}


NO_BUILD=	yes
NO_ARCH=	yes

WWW_OWNER= www
WWW_GROUP= www

post-patch:
	${RM} ${WRKSRC}/bin/*.sh
	cd ${WRKSRC} && ${MV} SQL sql

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
