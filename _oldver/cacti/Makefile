#
# $Id$
#
PORTNAME=	cacti
PORTVERSION=	1.2.7
CATEGORIES=	net-mgmt www
MASTER_SITES=	http://www.cacti.net/downloads/

MAINTAINER=	ports1@FreeBSD.org
COMMENT=	Web-driven graphing interface for RRDTool

RUN_DEPENDS+=	rrdtool:data/rrdtool
RUN_DEPENDS+=	xf-dejavu>=0:xfont/xf-dejavu

NO_BUILD=	yes

SHEBANG_FILES=	scripts/3com_cable_modem.pl \
		scripts/diskfree.pl \
		scripts/linux_memory.pl \
		scripts/loadavg.pl \
		scripts/loadavg_multi.pl \
		scripts/ping.pl \
		scripts/query_unix_partitions.pl \
		scripts/unix_processes.pl \
		scripts/unix_tcp_connections.pl \
		scripts/unix_users.pl \
		scripts/weatherbug.pl \
		scripts/webhits.pl

CACTI_DIR?=	www/cacti

CACTI_OWNER?=	cacti
CACTI_GROUP?=	cacti
CACTI_OWNER_ID=	107
CACTI_GROUP_ID=	107

CACTI_LOGDIR=	/var/log/cacti
CACTI_DBDIR=	/var/db/cacti

SITEDISTVERSION=	${PORTVERSION:S/${PATCHLEVEL}$//}
WRKSRC=		${WRKDIR}/${PORTNAME}-${SITEDISTVERSION}


SUB_LIST+=	CACTI_DIR="${CACTI_DIR}"

SUB_LIST+=	CACTI_DBDIR="${CACTI_DBDIR}"
SUB_LIST+=	CACTI_LOGDIR="${CACTI_LOGDIR}"
SUB_LIST+=	CACTI_OWNER="${CACTI_OWNER}"
SUB_LIST+=	CACTI_GROUP="${CACTI_GROUP}"

SUB_LIST+=	CACTI_OWNER_ID="${CACTI_OWNER_ID}"
SUB_LIST+=	CACTI_GROUP_ID="${CACTI_GROUP_ID}"


SUB_LIST+=	PREFIX=${PREFIX}
SUB_LIST+=	WWWDIR=${WWWDIR}


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES+= pkg-install pkg-deinstall pkg-message

post-patch:
	${FIND} ${WRKSRC} -name \*.orig -delete
	${MV} ${WRKSRC}/include/config.php ${WRKSRC}/include/config.php.sample
	${RM} -r ${WRKSRC}/log ${WRKSRC}/rra


do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*.orig' -delete


.include <bsd.port.mk>
#EOF
