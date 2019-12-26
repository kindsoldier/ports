#
# $Id$
#
PORTNAME=	pgbouncer
PORTVERSION=	1.7.2
CATEGORIES=	databases
#MASTER_SITES+=	http://pgfoundry.org/frs/download.php/3393/
#MASTER_SITES+=	https://pgbouncer.github.io/downloads/files/${PORTVERSION}/
MASTER_SITES+=	http://pgbouncer.github.io/downloads/files/${PORTVERSION}/


MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Lightweight connection pooler for PostgreSQL

LIB_DEPENDS=	libevent.so:devel/libevent
BUILD_DEPENDS+=	${LOCALBASE}/bin/gsed:text/gsed

#PORTSCOUT=	site:http://pgfoundry.org/frs/?group_id=1000258

PGBOUNCER_OWNER=		pgbouncer
PGBOUNCER_GROUP=		pgbouncer

PGBOUNCER_OWNER_ID=	254
PGBOUNCER_GROUP_ID=	254


USE_RC_SUBR=	pgbouncer

GNU_CONFIGURE=	yes
USES=		gmake

CONFIGURE_ARGS=	--with-libevent=${LOCALBASE} --enable-evdns
CONFIGURE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}" \
		PTHREAD_LIBS="${PTHREAD_LIBS}"

PGBOUNCER_OWNER=	pgbouncer
PGBOUNCER_GROUP=	pgbouncer

PGBOUNCER_RUNDIR=	/var/run/pgbouncer
PGBOUNCER_LOGDIR=	/var/log/pgbouncer

SUB_LIST+=	PGBOUNCER_OWNER="${PGBOUNCER_OWNER}" 
SUB_LIST+=	PGBOUNCER_GROUP="${PGBOUNCER_GROUP}"

SUB_LIST+=	PGBOUNCER_OWNER_ID="${PGBOUNCER_OWNER_ID}" 
SUB_LIST+=	PGBOUNCER_GROUP_ID="${PGBOUNCER_GROUP_ID}"

SUB_LIST+=	PGBOUNCER_LOGDIR="${PGBOUNCER_LOGDIR}" 
SUB_LIST+=	PGBOUNCER_RUNDIR="${PGBOUNCER_RUNDIR}"
SUB_LIST+=	PGBOUNCER_RUNDIR="${PGBOUNCER_RUNDIR}"


PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install


PORTEXAMPLES=	*

post-patch:
	${REINPLACE_CMD} -e "s|= pgbouncer.log|= ${PGBOUNCER_LOGDIR}/pgbouncer.log|g" \
		-e "s|= pgbouncer.pid|= ${PGBOUNCER_RUNDIR}/pgbouncer.pid|g" \
		${WRKSRC}/etc/pgbouncer.ini
	${REINPLACE_CMD} -e "s|sed -n|${LOCALBASE}/bin/gsed -n|g" \
		${WRKSRC}/lib/find_modules.sh

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pgbouncer ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/doc/pgbouncer.1 ${STAGEDIR}${PREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/doc/pgbouncer.5 ${STAGEDIR}${PREFIX}/man/man5/
#	${INSTALL_DATA} ${WRKSRC}/etc/pgbouncer.ini \
#		${STAGEDIR}${PREFIX}/etc/pgbouncer.ini.sample
#	${INSTALL_DATA} ${WRKSRC}/etc/userlist.txt \
#		${STAGEDIR}${PREFIX}/etc/pgbouncer.users.sample
#	${MKDIR} ${STAGEDIR}${PGBOUNCER_RUNDIR} \
#		${STAGEDIR}${PGBOUNCER_LOGDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/etc/*.ini ${STAGEDIR}${EXAMPLESDIR}


.include <bsd.port.mk>
#EOF