#
# $Id$
#
PORTNAME=	mediawiki
PORTVERSION=	1.26.3
CATEGORIES=	www
MASTER_SITES=	http://releases.wikimedia.org/mediawiki/${PORTVERSION:R}/

MAINTAINER= homeunix7@gmail.com
COMMENT=	A simple and easy to use wiki


NO_BUILD=	yes
NO_ARCH=	yes

USES=		shebangfix
SHEBANG_FILES+=	maintenance/dev/*.sh
SHEBANG_FILES+=	maintenance/hiphop/run-server
SHEBANG_FILES+=	maintenance/postgres/*.pl
SHEBANG_FILES+=	maintenance/storage/make-blobs
SHEBANG_FILES+=	includes/limit.sh
SHEBANG_LANG=	hhvm
hhvm_OLD_CMD=	/usr/bin/hhvm
hhvm_CMD=	${LOCALBASE}/bin/hhvm # not installed by anything yet

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

