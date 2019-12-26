#
# $Id$
#
PORTNAME=	monitoring-plugins
PORTVERSION=	2.2
DISTNAME=	monitoring-plugins-${PORTVERSION}
CATEGORIES=	net-mgmt
MASTER_SITES+=	https://www.monitoring-plugins.org/download/ LOCAL/mat/${PORTNAME}

WRKSRC=		${WRKDIR}/${DISTNAME}

MAINTAINER=	mat@FreeBSD.org
COMMENT=	Monitoring Plugins for Nagios

CONFLICTS_INSTALL=	nagios-plugins-*

BUILD_DEPENDS+=	dig:net/bind-tools
BUILD_DEPENDS+=	fping:net/fping
BUILD_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
BUILD_DEPENDS+=	snmpcheck:net/net-snmp

LIB_DEPENDS+=	libdbi.so:data/libdbi
LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
USES+=	pgsql
LIB_DEPENDS+=	libintl.so:devel/gettext

RUN_DEPENDS+=	${BUILD_DEPNDS}

USES+=		gmake
GNU_CONFIGURE=	yes

NAGIOSDIR=	/var/spool/icinga
NAGIOSWWWDIR=	www/icinga
NAGIOSHTMURL=	/icinga
NAGIOSCGIURL=	${NAGIOSHTMURL}/cgi-bin

CONFIGURE_ARGS+= --with-cgiurl=${NAGIOSCGIURL}
CONFIGURE_ARGS+= --sbindir=${PREFIX}/${NAGIOSWWWDIR}/cgi-bin
CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec/nagios
CONFIGURE_ARGS+= --datadir=${PREFIX}/share
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/nagios
CONFIGURE_ARGS+= --localstatedir=${NAGIOSDIR}
CONFIGURE_ARGS+= --with-perl=${PERL}
CONFIGURE_ARGS+= --prefix=${PREFIX}

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/postgresql
LIBS+=		-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-dbi
CONFIGURE_ARGS+= --with-ipv6

CONFIGURE_ARGS+= ac_cv_path_PATH_TO_FPING6=""
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_FPING=""
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_PING6=/sbin/ping6
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_PING=/sbin/ping
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QMAIL_QSTAT=/var/qmail/bin/qmail-qstat
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QSTAT=""
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_QUAKESTAT=""
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_SMBCLIENT=""
CONFIGURE_ARGS+= ac_cv_path_PATH_TO_SUDO=${LOCALBASE}/bin/sudo

CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-radius

CONFIGURE_ARGS+= --with-mysql=${LOCALBASE}
CONFIGURE_ARGS+= --with-pgsql=${LOCALBASE}

CONFIGURE_ARGS+= --with-dig-command=${LOCALBASE}/bin/dig
CONFIGURE_ARGS+= --with-nslookup-command=${LOCALBASE}/bin/nslookup
CONFIGURE_ARGS+= --with-ping6-command="/sbin/ping6 -n -X %d -c %d %s"
CONFIGURE_ARGS+= --with-ping-command="/sbin/ping -n -t %d -c %d %s"

.include <bsd.port.options.mk>

#EXTRA_PATCHES+=	${FILESDIR}/extra-patch-dig-to-drill.diff
#CONFIGURE_ARGS+=--with-dig-command=/usr/bin/drill ac_cv_path_PATH_TO_NSLOOKUP=""

post-patch:
	${REINPLACE_CMD} -e 's|chown root|${TRUE}|g' ${WRKSRC}/plugins-root/Makefile.in

.include <bsd.port.mk>
#EOF
