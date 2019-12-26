#
# $Id$
#
PORTNAME=	wildfly
PORTVERSION=	9.0.2
CATEGORIES=	java www
MASTER_SITES=	http://download.jboss.org/wildfly/${WILDFLY_VERSION}/
DISTNAME=	wildfly-${WILDFLY_VERSION}
PKGNAMESUFFIX=	${PORTVERSION:R:R}

MAINTAINER=	yerenkow@gmail.com
COMMENT=	Replacement for JBoss Application Server


USE_RC_SUBR=	wildfly${PORTVER}
USE_JAVA=	yes
JAVA_VERSION=	1.7+
VAR_DIR=	/var
LOG_DIR=	${VAR_DIR}/log/${PORTNAME}${PORTVER}
PID_FILE=	${VAR_DIR}/run/${PORTNAME}${PORTVER}.pid
WILDFLY_VERSION=${PORTVERSION}.Final
SUB_FILES=	pkg-message

WF_OWNER=	www
WF_GROUP=	www

SUB_LIST+=	APP_SHORTNAME=wildfly${PORTVER}
SUB_LIST+=	OWNER=${WF_OWNER}
SUB_LIST+=	GROUP=${WF_GROUP}
SUB_LIST+=	APP_HOME=${PREFIX}/wildfly${PORTVER}
SUB_LIST+=	PID_FILE=${PID_FILE}
SUB_LIST+=	LOG_DIR=${LOG_DIR}

PLIST_SUB+=	APP_HOME=${PREFIX}/wildfly${PORTVER}


CONFIG_FILES+=	appclient/configuration/appclient.xml
CONFIG_FILES+=	appclient/configuration/logging.properties
CONFIG_FILES+=	domain/configuration/application-roles.properties
CONFIG_FILES+=	domain/configuration/application-users.properties
CONFIG_FILES+=	domain/configuration/default-server-logging.properties
CONFIG_FILES+=	domain/configuration/domain.xml
CONFIG_FILES+=	domain/configuration/host-master.xml
CONFIG_FILES+=	domain/configuration/host-slave.xml
CONFIG_FILES+=	domain/configuration/host.xml
CONFIG_FILES+=	domain/configuration/logging.properties
CONFIG_FILES+=	domain/configuration/mgmt-groups.properties
CONFIG_FILES+=	domain/configuration/mgmt-users.properties
CONFIG_FILES+=	standalone/configuration/application-roles.properties
CONFIG_FILES+=	standalone/configuration/application-users.properties
CONFIG_FILES+=	standalone/configuration/logging.properties
CONFIG_FILES+=	standalone/configuration/mgmt-groups.properties
CONFIG_FILES+=	standalone/configuration/mgmt-users.properties
CONFIG_FILES+=	standalone/configuration/standalone-full-ha.xml
CONFIG_FILES+=	standalone/configuration/standalone-full.xml
CONFIG_FILES+=	standalone/configuration/standalone-ha.xml
CONFIG_FILES+=	standalone/configuration/standalone.xml

PORTVER=	${PORTVERSION:R:R}

post-patch:
	${RM} ${WRKSRC}/bin/add-user.sh.orig

do-build:
	${RM} ${WRKSRC}/bin/*.bat
	${RM} ${WRKSRC}/bin/*.ps1
	${RM} -rf ${WRKSRC}/bin/service
	${RM} -rf ${WRKSRC}/bin/init.d

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/wildfly${PORTVER}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/wildfly${PORTVER}
	${RMDIR} ${STAGEDIR}${PREFIX}/wildfly${PORTVER}/.installation
.for FILE in ${CONFIG_FILES}
	${MV} ${STAGEDIR}${PREFIX}/wildfly${PORTVER}/${FILE} \
		${STAGEDIR}${PREFIX}/wildfly${PORTVER}/${FILE}.sample
.endfor

#	${FIND} ${STAGEDIR}${PREFIX}/wildfly${PORTVER} -name '*.sh' | ${XARGS} ${CHMOD} 555
#	cd ${STAGEDIR}${PREFIX}/wildfly${PORTVER} && ${CHOWN} -R www:www .

.include <bsd.port.mk>
#EOF
