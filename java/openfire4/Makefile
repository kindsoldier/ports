#
# $Id$
#
PORTNAME=	openfire
PORTVERSION=	4.2.4
CATEGORIES=	net-im java
MASTER_SITES=	http://download.igniterealtime.org/openfire/
DISTNAME=	${PORTNAME}_src_${PORTVERSION:S/./_/g}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Enterprise instant messaging server

RUN_DEPENDS=	${JAVAJARDIR}/slf4j-api.jar:java/slf4j

#OPTIONS_DEFINE=	DOCS PLUGINS
#OPTIONS_DEFAULT=PLUGINS
#PLUGINS_DESC=	Install bundled plugins

USES=		dos2unix
DOS2UNIX_FILES=	src/java/org/jivesoftware/openfire/server/ServerDialback.java
USE_LDCONFIG=	yes
USE_ANT=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.8

ALL_TARGET=	openfire
USE_RC_SUBR=	openfire
SUB_FILES+=	pkg-message


WRKSRC=		${WRKDIR}/${PORTNAME}_src
BUILD_WRKSRC=	${WRKSRC}/build
INSTALL_WRKSRC=	${WRKSRC}/target/openfire
DATADIR=	${JAVASHAREDIR}/${PORTNAME}
PORTDOCS=	*
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


.include <bsd.port.options.mk>

PORTDOCS=	*
PORTEXAMPLES=	*

RES+= resources/i18n/openfire_i18n_ru_RU.properties
RES+= src/i18n/openfire_i18n_ru_RU.properties
RES+= src/plugins/candy/src/i18n/candy_i18n_ru_RU.properties
RES+= src/plugins/certificateManager/src/i18n/certificatemanager_i18n_ru_RU.properties
RES+= src/plugins/clientControl/src/i18n/clientcontrol_i18n_ru_RU.properties
RES+= src/plugins/inverse/src/i18n/inverse_i18n_ru_RU.properties
RES+= src/plugins/jingleNodes/src/i18n/jinglenodes_i18n_ru_RU.properties
RES+= src/plugins/kraken/src/i18n/kraken_i18n_ru_RU.properties
RES+= src/plugins/monitoring/src/i18n/monitoring_i18n_ru_RU.properties
RES+= src/plugins/motd/src/i18n/motd_i18n_ru_RU.properties
RES+= src/plugins/nodejs/src/i18n/nodejs_i18n_ru_RU.properties
RES+= src/plugins/sip/src/i18n/sip_i18n_ru_RU.properties
RES+= src/plugins/packetFilter/src/i18n/packetfilter_i18n_ru_RU.properties
RES+= src/plugins/rayo/src/i18n/rayo_i18n_ru_RU.properties
RES+= src/plugins/registration/src/i18n/registration_i18n_ru_RU.properties
RES+= src/plugins/search/src/i18n/search_i18n_ru_RU.properties
RES+= src/plugins/stunserver/src/i18n/stunserver_i18n_ru_RU.properties



a:
	cd ${WRKSRC} && ${FIND} . -name '*i18n_ru_RU.properties'

post-patch:
	cd ${WRKSRC} && for res in ${RES}; do \
	    ${CP} $$res $$res.orig; \
	    ${LOCALBASE}/bin/native2ascii -encoding utf8 $$res.orig $$res; \
	done

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/lib
	${MKDIR} ${STAGEDIR}${ETCDIR}
#	${MKDIR} ${STAGEDIR}${VARDB}
#	${MKDIR} ${STAGEDIR}${VARLOG}

	cd ${INSTALL_WRKSRC}/lib && ${INSTALL} -m 744 *.jar ${STAGEDIR}${DATADIR}/lib
	cd ${INSTALL_WRKSRC}/lib && ${INSTALL} -m 744 log4j.xml ${STAGEDIR}${DATADIR}/lib

	cd ${INSTALL_WRKSRC}/resources && \
	    ${FIND} . \! -path ./security\* \! -path ./nativeAuth\* | \
	    ${CPIO} -pvdmu -R ${SHAREOWN}:${SHAREGRP} \
	        ${STAGEDIR}${DATADIR}/resources

#	always install admin interface
	cd ${INSTALL_WRKSRC}/plugins/admin && ${FIND} . \
	   | ${CPIO} -pvdmu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DATADIR}/plugins/admin

	${LN} -sf ${ETCDIR} ${STAGEDIR}${DATADIR}/conf
	${LN} -sf ${ETCDIR} ${STAGEDIR}${DATADIR}/resources/security
	${LN} -sf ${VARDB} ${STAGEDIR}${DATADIR}/embedded-db
	${LN} -sf ${VARLOG} ${STAGEDIR}${DATADIR}/logs


	cd ${INSTALL_WRKSRC}/plugins && ${FIND} . \
	    | ${CPIO} -pvdmu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DATADIR}/plugins

	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}

	${INSTALL_DATA} ${INSTALL_WRKSRC}/conf/openfire.xml \
		${STAGEDIR}${EXAMPLESDIR}/openfire.xml.sample
	${INSTALL} -m 600 ${INSTALL_WRKSRC}/resources/security/truststore \
		${STAGEDIR}${EXAMPLESDIR}/truststore.sample
	${INSTALL} -m 600 ${INSTALL_WRKSRC}/resources/security/keystore \
		${STAGEDIR}${EXAMPLESDIR}/keystore.sample
	${INSTALL_DATA} ${INSTALL_WRKSRC}/conf/security.xml \
		${STAGEDIR}${EXAMPLESDIR}/security.xml.sample


.include <bsd.port.mk>
#EOF
