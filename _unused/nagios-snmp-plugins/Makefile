#
# $Id$
#
PORTNAME=	nagios-snmp-plugins
PORTVERSION=	1.1.1
CATEGORIES=	net-mgmt
DISTFILES=	nagios-snmp-plugins.1.1.1.tgz:snmp
MASTER_SITES+=	http://nagios.manubulon.com/:snmp

WRKSRC=		${WRKDIR}/nagios_plugins

MAINTAINER=	mat@FreeBSD.org
COMMENT=	SNMP Monitoring Plugins for Nagios

RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
RUN_DEPENDS+=	snmpcheck:net/net-snmp
RUN_DEPENDS+=	nagios-plugins>=0:net/nagios-plugins

PLUGIN_LIST+= check_snmp_boostedge
PLUGIN_LIST+= check_snmp_cpfw
PLUGIN_LIST+= check_snmp_css
PLUGIN_LIST+= check_snmp_css_main
PLUGIN_LIST+= check_snmp_env
PLUGIN_LIST+= check_snmp_int
PLUGIN_LIST+= check_snmp_linkproof_nhr
PLUGIN_LIST+= check_snmp_load
PLUGIN_LIST+= check_snmp_mem
PLUGIN_LIST+= check_snmp_nsbox
PLUGIN_LIST+= check_snmp_process
PLUGIN_LIST+= check_snmp_storage
PLUGIN_LIST+= check_snmp_vrrp
PLUGIN_LIST+= check_snmp_win


do-build:
	${REINPLACE_CMD} -e 's,/usr/bin/perl,/usr/local/bin/perl,' \
	    ${WRKSRC}/*.pl
	${REINPLACE_CMD} -e 's,/usr/local/nagios/libexec,/usr/local/libexec/nagios,' \
	    ${WRKSRC}/*.pl
	${REINPLACE_CMD} -e 's,Net::SNMP->VERSION < 4,Net::SNMP->VERSION lt 4,' \
	    ${WRKSRC}/*.pl

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
.for PLUGIN in ${PLUGIN_LIST}
	${INSTALL_SCRIPT} ${WRKSRC}/${PLUGIN}.pl ${STAGEDIR}${PREFIX}/libexec/nagios/${PLUGIN}
.endfor

.include <bsd.port.mk>
#EOF
