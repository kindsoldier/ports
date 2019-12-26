# Created by: Pakhom Golynga <pg@pakhom.spb.ru>
# $FreeBSD: head/net-mgmt/zabbix42-server/Makefile 514235 2019-10-10 16:45:41Z dbaio $

PORTNAME=	zabbix
PORTVERSION=	4.2.7
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/zabbix/ZABBIX%20Latest%20Stable/${PORTVERSION}
PKGNAMESUFFIX=	-server
DISTNAME=	zabbix-${PORTVERSION}

MAINTAINER=	pg@pakhom.spb.ru
COMMENT=	Enterprise-class open source distributed monitoring (${PKGNAMESUFFIX:S/^-//})

LIB_DEPENDS+=	libevent.so:devel/libevent
LIB_DEPENDS=	libssh2.so:security/libssh2
LIB_DEPENDS=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libnetsnmp.so:net/net-snmp

RUN_DEPENDS+=	fping:net/fping
RUN_DEPENDS+=	nmap:net/nmap
RUN_DEPENDS+=	sudo:system/sudo

#LIB_DEPENDS=	libgnutls.so:security/gnutls
#LIB_DEPENDS=	libiksemel.so:textproc/iksemel
#LIB_DEPENDS=	libodbc.so:databases/unixODBC
#LIB_DEPENDS=	libOpenIPMI.so:sysutils/openipmi
#USES+=		compiler:c11 mysql

#USERS=		zabbix
#GROUPS=		zabbix

USES+= pkgconfig iconv ssl gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

ETCDIR= ${PREFIX}/etc

MAKE_ARGS+=	ARCH=freebsd
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-server
CONFIGURE_ARGS+= --enable-agent
CONFIGURE_ARGS+= --sysconfdir=${ETCDIR}
CONFIGURE_ARGS+= --datadir=${ETCDIR}
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --with-iconv=${ICONV_PREFIX}
CONFIGURE_ARGS+= --with-libcurl
CONFIGURE_ARGS+= --with-libevent=${LOCALBASE}
CONFIGURE_ARGS+= --with-libxml2
CONFIGURE_ARGS+= --with-net-snmp
CONFIGURE_ARGS+= --with-openssl
CONFIGURE_ARGS+= --with-postgresql
CONFIGURE_ARGS+= --with-ssh2
CONFIGURE_ARGS+= --without-gnutls
CONFIGURE_ARGS+= --without-jabber
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --without-openipmi
CONFIGURE_ARGS+= --without-oracle
CONFIGURE_ARGS+= --without-sqlite3
CONFIGURE_ARGS+= --without-unixodbc

USE_RC_SUBR=	zabbix_server zabbix_agentd
SUB_FILES=	pkg-message

.include <bsd.port.pre.mk>

post-patch:
	${GREP} -rl "/etc/zabbix" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e 's#/usr/local/etc#${ETCDIR}#g'

	${REINPLACE_CMD} -e 's#/usr/sbin/fping#${LOCALBASE}/sbin/fping#g' \
		${WRKSRC}/conf/zabbix_*.conf \
		${WRKSRC}/src/zabbix_proxy/proxy.c \
		${WRKSRC}/src/zabbix_server/server.c

	${REINPLACE_CMD} -e 's#/tmp/zabbix_server.pid#/var/run/zabbix/zabbix_server.pid#g' \
		${WRKSRC}/conf/zabbix_server.conf \
		${WRKSRC}/src/zabbix_server/server.c

	${REINPLACE_CMD} -e 's#/tmp/zabbix_proxy.pid#/var/run/zabbix/zabbix_proxy.pid#g' \
		${WRKSRC}/conf/zabbix_proxy.conf \
		${WRKSRC}/src/zabbix_proxy/proxy.c
	${REINPLACE_CMD} -e 's#/tmp/zabbix_agentd.pid#/var/run/zabbix/zabbix_agentd.pid#g' \
		${WRKSRC}/conf/zabbix_agentd.conf \
		${WRKSRC}/src/zabbix_agent/zabbix_agentd.c

	${REINPLACE_CMD} -e 's#/tmp/zabbix_java.pid#/var/run/zabbix/zabbix_java.pid#g' \
		${WRKSRC}/src/zabbix_java/settings.sh

.for d in mysql postgresql
	${REINPLACE_CMD} \
		-e 's|/usr/bin/traceroute|/usr/sbin/traceroute|g' \
		-e 's|sudo /usr/bin/nmap|sudo ${LOCALBASE}/bin/nmap|g' \
		${WRKSRC}/database/${d}/data.sql
.endfor
	${FIND} ${WRKSRC} -type f \( -name '*.bak' -or -name '*.orig' \) \
		-exec ${RM} {} +


post-install:
#.if ${ZABBIX_BUILD} == "java"
#	${MV} ${STAGEDIR}${PREFIX}/sbin/zabbix_java/settings.sh \
#		${STAGEDIR}${PREFIX}/sbin/zabbix_java/settings.sh.sample
#	@${MKDIR} ${STAGEDIR}/var/run/zabbix
#.endif

#.if ${ZABBIX_BUILD} != "agent" && ${ZABBIX_BUILD} != "java"
	${MKDIR} ${STAGEDIR}${DATADIR}/server/database
#	${RM} ${WRKSRC}/database/*/Makefile*
	cd ${WRKSRC}/database/ && \
		${COPYTREE_SHARE} "mysql postgresql" \
		${STAGEDIR}${DATADIR}/server/database/
	${CP} ${STAGEDIR}${ETCDIR}/zabbix_server.conf \
		${STAGEDIR}${ETCDIR}/zabbix_server.conf.sample
#.endif

#.if ${ZABBIX_BUILD} == "agent"
	${CP} ${STAGEDIR}${ETCDIR}/zabbix_agentd.conf \
		${STAGEDIR}${ETCDIR}/zabbix_agentd.conf.sample
#.endif

	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC}/frontends/php && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.post.mk>
