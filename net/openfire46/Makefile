# Created by: Nikolay Pavlov <qpadla@gmail.com>

PORTNAME=	openfire
PORTVERSION=	4.6.4
CATEGORIES=	net-im java
MASTER_SITES+=	https://github.com/igniterealtime/${PORTNAME}/archive/refs/tags/
MASTER_SITES+=	LOCAL/pi:maven
DISTFILES=	v${PORTVERSION}.tar.gz

MAINTAINER=	nikita@druba.su
COMMENT=	Enterprise instant messaging server


BUILD_DEPENDS=	mvn:java/maven

DISTFILES+=	FreeBSD-${PORTNAME}-${PORTVERSION}-maven-repository.tar.gz:maven

USES=		cpe
USE_JAVA=	yes
JAVA_VERSION=	1.8+
NO_ARCH=	yes

USE_RC_SUBR=	${PORTNAME}
SUB_FILES+=	pkg-message

WRKSRC=		${WRKDIR}/Openfire-${PORTVERSION}
INSTALL_WRKSRC=	${WRKSRC}/distribution/target/distribution-base/
DATADIR=	${JAVASHAREDIR}/${PORTNAME}
VARLOG=		/var/log/${PORTNAME}
VARDB=		/var/db/${PORTNAME}


MVN=		mvn
MVN_TARGET=	package

MVN_OPTS=	-DskipTests=true
MVN_OPTS+=	-o -Dmaven.repo.local=${WRKDIR}/m2
#MVN_OPTS+=	-U

VARLOG=		/var/log/openfire
VARDB=		/var/db/openfire

ALL_TARGET+=	plugins


SUB_FILES+= 	pkg-install

OPENFIRE_OWNER=	${PORTNAME}
OPENFIRE_GROUP=	${PORTNAME}
OPENFIRE_OWNER_ID=	342
OPENFIRE_GROUP_ID=	342

SUB_LIST+=	OPENFIRE_DBDIR=${VARDB}
SUB_LIST+=	OPENFIRE_LOGDIR=${VARLOG}
SUB_LIST+=	OPENFIRE_ETCDIR=${PREFIX}/etc/${PORTNAME}

SUB_LIST+=	HOME=${DATADIR}

SUB_LIST+= OPENFIRE_OWNER=${OPENFIRE_OWNER}
SUB_LIST+= OPENFIRE_GROUP=${OPENFIRE_GROUP}
SUB_LIST+= OPENFIRE_OWNER_ID=${OPENFIRE_OWNER_ID}
SUB_LIST+= OPENFIRE_GROUP_ID=${OPENFIRE_GROUP_ID}

do-build:
	cd ${WRKSRC} && ${MVN} ${MVN_OPTS} ${MVN_TARGET}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/lib
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${MKDIR} ${STAGEDIR}${VARDB}
	${MKDIR} ${STAGEDIR}${VARLOG}

	cd ${INSTALL_WRKSRC}/lib && ${INSTALL} -m 744 *.jar ${STAGEDIR}${DATADIR}/lib
	cd ${INSTALL_WRKSRC}/lib && ${INSTALL} -m 744 log4j2.xml ${STAGEDIR}${DATADIR}/lib

	cd ${INSTALL_WRKSRC}/resources && \
	    ${FIND} ./database/ ./spank/ | \
	    ${CPIO} -pvdmu -R ${SHAREOWN}:${SHAREGRP} \
	        ${STAGEDIR}${DATADIR}/resources

	cd ${INSTALL_WRKSRC}/plugins/admin && ${FIND} . \
	    | ${CPIO} -pvdmu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DATADIR}/plugins/admin

	${LN} -sf ${ETCDIR} ${STAGEDIR}${DATADIR}/conf
	${LN} -sf ${ETCDIR} ${STAGEDIR}${DATADIR}/resources/security
	${LN} -sf ${VARDB} ${STAGEDIR}${DATADIR}/embedded-db
	${LN} -sf ${VARLOG} ${STAGEDIR}${DATADIR}/logs

	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}

	${INSTALL_DATA} ${INSTALL_WRKSRC}/conf/openfire.xml \
		${STAGEDIR}${EXAMPLESDIR}/openfire.xml.sample
	${INSTALL_DATA} ${INSTALL_WRKSRC}/conf/security.xml \
		${STAGEDIR}${EXAMPLESDIR}/security.xml.sample
	${INSTALL_DATA} ${INSTALL_WRKSRC}/conf/crowd.properties \
		${STAGEDIR}${EXAMPLESDIR}/crowd.properties.sample
	${INSTALL} -m 600 ${INSTALL_WRKSRC}/resources/security/truststore \
		${STAGEDIR}${EXAMPLESDIR}/truststore.sample
	${INSTALL} -m 600 ${INSTALL_WRKSRC}/resources/security/keystore \
		${STAGEDIR}${EXAMPLESDIR}/keystore.sample

.include <bsd.port.mk>
#EOF
