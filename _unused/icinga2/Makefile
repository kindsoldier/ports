# $FreeBSD: head/net-mgmt/icinga2/Makefile 512350 2019-09-19 15:31:10Z lme $

PORTNAME=	icinga2
DISTVERSIONPREFIX=	v
DISTVERSION=	2.11.2
CATEGORIES=	net-mgmt

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Monitoring and management system for hosts, services and networks

LIB_DEPENDS=	libboost_system.so:devel/libboost64
RUN_DEPENDS=	bash>=0:lang/bash

LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
USES+=	pgsql


USES=		alias bison gmake cmake:insource compiler:c++0x ssl
USE_GITHUB=	yes
GH_ACCOUNT=	icinga

USE_LDCONFIG=	yes

USE_RC_SUBR=	${PORTNAME}

RUN_DEPENDS+=	nagios-plugins>=2.0:net/nagios-plugins
RUN_DEPENDS+=	nagios-snmp-plugins>=1.0:net/nagios-snmp-plugins


ICINGA2_OWNER=	icinga2
ICINGA2_GROUP=	icinga2

ICINGA2_OWNER_ID=	485
ICINGA2_GROUP_ID=	485

LOCALSTATEDIR=	/var
LOGDIR=/var/log/${PORTNAME}

CFLAGS+= -I${LOCALBASE}/boost70/include
CXXFLAGS+= -I${LOCALBASE}/boost70/include
LDFLAGS+= -I${LOCALBASE}/boost70/lib

CMAKE_ARGS+=	-DBoost_INCLUDE_DIR=${LOCALBASE}/boost70/include
CMAKE_ARGS+=	-DBoost_LIBRARY_DIRS=${LOCALBASE}/boost70/lib

#CMAKE_ARGS+=	-DBUILD_TESTING=OFF

CMAKE_ARGS+=	-DICINGA2_USER=${ICINGA2_OWNER}
CMAKE_ARGS+=	-DICINGA2_GROUP=${ICINGA2_GROUP}
CMAKE_ARGS+=	-DICINGA2_COMMAND_USER=${ICINGA2_OWNER}
CMAKE_ARGS+=	-DICINGA2_COMMAND_GROUP=${ICINGA2_OWNER}
CMAKE_ARGS+=	-DICINGA2_PLUGINDIR=${LOCALBASE}/libexec/nagios
CMAKE_ARGS+=	-DICINGA2_RUNDIR=/var/run
CMAKE_ARGS+=	-DCMAKE_INSTALL_SYSCONFDIR=${PREFIX}/etc
CMAKE_ARGS+=	-DCMAKE_INSTALL_LOCALSTATEDIR=${LOCALSTATEDIR}
CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR=${MANPREFIX}/man
CMAKE_ARGS+=	-DCMAKE_EXE_LINKER_FLAGS=${PREFIX}/lib/icinga2
CMAKE_ARGS+=	-DCMAKE_MODULE_LINKER_FLAGS=${PREFIX}/lib/icinga2
CMAKE_ARGS+=	-DCMAKE_SHARED_LINKER_FLAGS=${PREFIX}/lib/icinga2
CMAKE_ARGS+=	-DCMAKE_STATIC_LINKER_FLAGS=${PREFIX}/lib/icinga2

CMAKE_ARGS+=	-DICINGA2_WITH_PGSQL=ON
CMAKE_ARGS+=	-DICINGA2_WITH_MYSQL=ON


ICINGA2_SPOOLDIR= ${LOCALSTATEDIR}/spool/icinga2
ICINGA2_LOGDIR= ${LOCALSTATEDIR}/log/icinga2

SUB_LIST+=	ICINGA2_SPOOLDIR=${ICINGA2_SPOOLDIR}
SUB_LIST+=	ICINGA2_LOGDIR=${ICINGA2_LOGDIR}

SUB_LIST+=	ICINGA2_OWNER=${ICINGA2_OWNER}
SUB_LIST+=	ICINGA2_GROUP=${ICINGA2_GROUP}

SUB_LIST+=	ICINGA2_OWNER_ID=${ICINGA2_OWNER_ID}
SUB_LIST+=	ICINGA2_GROUP_ID=${ICINGA2_GROUP_ID}

SUB_FILES=	pkg-message pkg-install pkg-deinstall 

.include <bsd.port.options.mk>

pre-install:
	cd ${WRKSRC}/etc/icinga2/conf.d && ${REINPLACE_CMD} 's,[Ll]inux,FreeBSD,g' \
	    groups.conf services.conf hosts.conf
	cd ${WRKSRC}/etc && for file in $$(${FIND} . -type f -name "*.conf"); \
	    do ${CP} $$file $$file.sample; \
	done
	cd ${WRKSRC}/etc/icinga2/scripts && for file in $$(${FIND} . -type f -name "*.sh"); do \
	    ${CP} $$file $$file.sample; \
	done

post-install:
#	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/newsyslog/
#	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}-newsyslog.conf ${STAGEDIR}${EXAMPLESDIR}/newsyslog/${PORTNAME}.conf
#	${MKDIR} ${STAGEDIR}${PREFIX}/share/vim/vimfiles
#	cd ${WRKSRC}/tools/syntax/vim && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/share/vim/vimfiles
#	cd ${STAGEDIR}${PREFIX}/etc && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}/etc

.include <bsd.port.mk>
