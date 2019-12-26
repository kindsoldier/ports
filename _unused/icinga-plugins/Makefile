#
# $Id$
#
PORTNAME=	icinga-plugins
PORTVERSION=	2.1.1
DISTNAME=	monitoring-plugins-${PORTVERSION}
CATEGORIES=	net-mgmt
MASTER_SITES+=	https://www.monitoring-plugins.org/download/ LOCAL/mat/${PORTNAME}

WRKSRC=		${WRKDIR}/${DISTNAME}


MAINTAINER=	mat@FreeBSD.org
COMMENT=	Monitoring Plugins for Nagios

CONFLICTS_INSTALL=	nagios-plugins-*

LIB_DEPENDS+=	libdbi.so:data/libdbi
LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
USES+=	pgsql

RUN_DEPENDS+=	fping:net/fping
BUILD_DEPENDS+=	fping:net/fping

RUN_DEPENDS+=	dig:net/bind-tools
BUILD_DEPENDS+=	dig:net/bind-tools

BUILD_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP

BUILD_DEPENDS+=	snmpcheck:net/net-snmp
RUN_DEPENDS+=	snmpcheck:net/net-snmp

#LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libiconv.so:text/libiconv

USES+=		gmake
GNU_CONFIGURE=	yes

NAGIOSDIR=	/var/spool/icinga
NAGIOSWWWDIR=	www/icinga
NAGIOSHTMURL=	/icinga
NAGIOSCGIURL=	${NAGIOSHTMURL}/cgi-bin

CONFIGURE_ARGS+= --with-cgiurl=${NAGIOSCGIURL}
CONFIGURE_ARGS+= --sbindir=${PREFIX}/${NAGIOSWWWDIR}/cgi-bin
CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec/icinga
CONFIGURE_ARGS+= --datadir=${PREFIX}/share
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/icinga
CONFIGURE_ARGS+= --localstatedir=${NAGIOSDIR}
CONFIGURE_ARGS+= --with-perl=${PERL}
CONFIGURE_ARGS+= --prefix=${PREFIX}

CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QMAIL_QSTAT= 

CONFIGURE_ARGS+= ac_cv_path_PATH_TO_PING=/sbin/ping
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_PING6=/sbin/ping6
CONFIGURE_ARGS+= --with-ping-command="/sbin/ping -n -c %d %s"
CONFIGURE_ARGS+= --with-ping6-command="/sbin/ping6 -n -c %d %s"
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_SMBCLIENT=${LOCALBASE}/bin/smbclient

CONFIGURE_ARGS+= --disable-nls

CFLAGS+= -DMYSQL_PORT=3306
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/postgresql
LIBS+= 		-L${LOCALBASE}/lib
LDFLAGS+=	-L${LOCALBASE}/lib

#QSTAT_BUILD_DEPENDS=	qstat:games/qstat
#QSTAT_RUN_DEPENDS=	qstat:games/qstat
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QUAKESTAT=
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QSTAT=

CONFIGURE_ARGS+= --with-ipv6
#CONFIGURE_ARGS+= ac_cv_path_PATH_TO_FPING=
#CONFIGURE_ARGS+= ac_cv_path_PATH_TO_FPING6=

#CONFIGURE_ARGS+= ac_cv_path_PATH_TO_SNMPGET=
#CONFIGURE_ARGS+= ac_cv_path_PATH_TO_SNMPGETNEXT=

CONFIGURE_ARGS+= --without-radius
#CONFIGURE_ARGS+= --with-mysql=${LOCALBASE}
CONFIGURE_ARGS+= --with-mysql=${LOCALBASE}
CONFIGURE_ARGS+= --with-pgsql=${LOCALBASE}

CONFIGURE_ARGS+= --without-ldap

CONFIGURE_ARGS+= --with-dbi

CONFIGURE_ARGS+= --with-dig-command=${LOCALBASE}/bin/dig
CONFIGURE_ARGS+= --with-nslookup-command=${LOCALBASE}/bin/nslookup

#SSH_PORTABLE_BUILD_DEPENDS=	${LOCALBASE}/bin/ssh:security/openssh-portable
#SSH_PORTABLE_RUN_DEPENDS:=	${SSH_PORTABLE_BUILD_DEPENDS}
#SSH_PORTABLE_CONFIGURE_ON=	--with-ssh-command=${LOCALBASE}/bin/ssh

.include <bsd.port.options.mk>

#.if ${OSVERSION} > 1000055 && ${PORT_OPTIONS:MDNS_BASE}
#EXTRA_PATCHES+=	${FILESDIR}/extra-patch-dig-to-drill.diff
#CONFIGURE_ARGS+=--with-dig-command=/usr/bin/drill \
#		ac_cv_path_PATH_TO_NSLOOKUP=
#PLIST_SUB+=	CHECK_DNS="@comment "
#.else
#.  if ${PORT_OPTIONS:MDNS_BASE}
#CONFIGURE_ARGS+=	--with-dig-command=/usr/bin/dig \
#			--with-nslookup-command=/usr/bin/nslookup
#.  endif
#PLIST_SUB+=	CHECK_DNS=""
#.endif

_FILES+= check_by_ssh.c
_FILES+= check_disk.c
_FILES+= check_http.c
_FILES+= check_mrtgtraf.c
_FILES+= check_nagios.c
_FILES+= check_ntp.c
_FILES+= check_ntp_peer.c
_FILES+= check_ntp_time.c
_FILES+= check_pgsql.c
_FILES+= check_snmp.c
_FILES+= check_ssh.c
_FILES+= check_swap.c
_FILES+= check_time.c
_FILES+= check_users.c

post-patch:
.for FILE in ${_FILES}
	${REINPLACE_CMD} -e 's|setlocale (LC_ALL, "");|setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");|g' \
	    ${WRKSRC}/plugins/${FILE}
.endfor
	${REINPLACE_CMD} -e 's|chown root|${TRUE}|g' ${WRKSRC}/plugins-root/Makefile.in

.include <bsd.port.mk>
#EOF
