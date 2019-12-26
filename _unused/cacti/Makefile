#
# $Id$
#
PORTNAME=	cacti
PORTVERSION=	1.1.37
CATEGORIES=	net-mgmt www
MASTER_SITES=	http://www.cacti.net/downloads/


#http://docs.cacti.net/_media/plugin:realtime-v0.5-2.tgz
#http://docs.cacti.net/_media/plugin:monitor-v1.3-1.tgz
#http://runningoffatthemouth.com/dpdiscover-latest.tgz
#http://docs.cacti.net/_media/plugin:boost-v5.1-1.tgz
#http://docs.cacti.net/_media/plugin:dsstats-v1.4-1.tgz
#http://docs.cacti.net/_media/plugin:mikrotik_v1.0.tar.gz
#http://runningoffatthemouth.com/dpdiscover-latest.tgz


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Web-driven graphing interface for RRDTool

#RUN_DEPENDS=	rrdtool:${PORTSDIR}/data/rrdtool

NO_BUILD=	yes


SHEBANG_FILES+=	scripts/3com_cable_modem.pl
SHEBANG_FILES+=	scripts/diskfree.pl
SHEBANG_FILES+=	scripts/linux_memory.pl
SHEBANG_FILES+=	scripts/loadavg.pl
SHEBANG_FILES+=	scripts/loadavg_multi.pl
SHEBANG_FILES+=	scripts/ping.pl
SHEBANG_FILES+=	scripts/query_unix_partitions.pl
SHEBANG_FILES+=	scripts/unix_processes.pl
SHEBANG_FILES+=	scripts/unix_tcp_connections.pl
SHEBANG_FILES+=	scripts/unix_users.pl
SHEBANG_FILES+=	scripts/weatherbug.pl
SHEBANG_FILES+=	scripts/webhits.pl


CACTI_DIR?=	www/cacti

CACTI_OWNER?=	cacti
CACTI_GROUP?=	cacti
CACTI_OWNER_ID=	107
CACTI_GROUP_ID=	107

CACTI_LOGDIR=	/var/log/cacti
CACTI_DBDIR=	/var/db/cacti

SITEDISTVERSION=	${PORTVERSION:S/${PATCHLEVEL}$//}
WRKSRC=		${WRKDIR}/${PORTNAME}-${SITEDISTVERSION}


PLIST_SUB+=	CACTI_DIR="${CACTI_DIR}"

PLIST_SUB+=	CACTI_DBDIR="${CACTI_DBDIR}"
PLIST_SUB+=	CACTI_LOGDIR="${CACTI_LOGDIR}"
PLIST_SUB+=	CACTI_OWNER="${CACTI_OWNER}"
PLIST_SUB+=	CACTI_GROUP="${CACTI_GROUP}"

PLIST_SUB+=	CACTI_OWNER_ID="${CACTI_OWNER_ID}"
PLIST_SUB+=	CACTI_GROUP_ID="${CACTI_GROUP_ID}"

SUB_LIST+=	${PLIST_SUB}

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES+= pkg-install pkg-deinstall pkg-message

post-patch:
	${FIND} ${WRKSRC} -name \*.orig -delete
	${MV} ${WRKSRC}/include/config.php ${WRKSRC}/include/config.php.sample
	${RM} -r ${WRKSRC}/log ${WRKSRC}/rra


do-install:
#	${MKDIR} -p ${STAGEDIR}${PREFIX}/${CACTI_DIR}
#	${CP} -R ${WRKSRC}/* ${STAGEDIR}${PREFIX}/${CACTI_DIR}
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
