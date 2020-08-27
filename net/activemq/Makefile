# $FreeBSD: head/net/activemq/Makefile 537020 2020-05-30 00:30:39Z tobik $

PORTNAME=	activemq
PORTVERSION=	5.15.7
CATEGORIES=	net java
MASTER_SITES=	APACHE/${PORTNAME}/${PORTVERSION}:amq
MASTER_SITES+=  https://jdbc.postgresql.org/download/:postgres

AMQ_DISTFILE=	apache-${PORTNAME}-${PORTVERSION}-bin.tar.gz
PG_DISTFILE=    postgresql-42.2.14.jar

DISTFILES=      ${AMQ_DISTFILE}:amq ${PG_DISTFILE}:postgres

#EXTRACT_SUFX=	-bin.tar.gz
DISTNAME=       apache-${PORTNAME}-${PORTVERSION} 

EXRACT_ONLY=   ${AMQ_DISTFILE}

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Messaging and Integration Patterns provider

USES=		cpe
CPE_VENDOR=	apache
USE_JAVA=	yes
USE_RC_SUBR=	activemq
#JAVA_VERSION=	11

NO_ARCH=	yes
NO_BUILD=	yes

#USERS=		activemq
#GROUPS=		activemq

do-install:
	${RM} ${WRKSRC}/conf/log4j.properties.orig
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR} 
	${MKDIR} ${STAGEDIR}${ETCDIR}/activemq
	cd ${WRKSRC}/conf && for F in *; do \
		${INSTALL_DATA} ${WRKSRC}/conf/$$F ${STAGEDIR}${EXAMPLESDIR}/$$F.sample; \
	done
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/activemq* ${STAGEDIR}${DATADIR}/bin
	${RLN} ${STAGEDIR}${DATADIR}/bin/activemq ${STAGEDIR}${PREFIX}/bin
	${RLN} ${STAGEDIR}${DATADIR}/bin/activemq-diag ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/bin/activemq.jar ${WRKSRC}/bin/wrapper.jar \
		${STAGEDIR}${DATADIR}/bin
	${MKDIR} ${STAGEDIR}/var/db/activemq
	${RLN} ${STAGEDIR}/var/db/activemq ${STAGEDIR}${DATADIR}/data
	${RLN} ${STAGEDIR}${ETCDIR} ${STAGEDIR}${DATADIR}/conf
	cd ${WRKSRC} && ${COPYTREE_SHARE} "lib webapps webapps-demo" \
		${STAGEDIR}${DATADIR}

	${INSTALL_DATA} ${DISTDIR}/${PG_DISTFILE}  ${STAGEDIR}${DATADIR}/lib

#	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}
#	${RLN} ${STAGEDIR}${EXAMPLESDIR} ${STAGEDIR}${DATADIR}/examples


RUN_DIR=	${VAR_DIR}/run/${PORTNAME}
DB_DIR=		${VAR_DIR}/db/${PORTNAME}
CONF_DIR= 	${PREFIX}/etc/${PORTNAME}


OWNER=	activemq
GROUP=	activemq
OWNER_ID=	929
GROUP_ID=	929

PKGINSTALL=	${WRKDIR}/pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

SUB_FILES= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

SUB_LIST+= CONF_DIR=${CONF_DIR}

SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= DB_DIR=${DB_DIR}



.include <bsd.port.mk>
