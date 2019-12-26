#
# $Id$
#
PORTNAME=	icinga-plugins-snmp
PORTVERSION=	1.1.1
CATEGORIES=	net-mgmt
DISTFILES=	nagios-snmp-plugins.1.1.1.tgz:snmp
MASTER_SITES+=	http://nagios.manubulon.com/:snmp

WRKSRC=		${WRKDIR}/nagios_plugins

MAINTAINER=	mat@FreeBSD.org
COMMENT=	SNMP Monitoring Plugins for Nagios

RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
RUN_DEPENDS+=	snmpcheck:net/net-snmp
RUN_DEPENDS+=	${LOCALBASE}/libexec/icinga/utils.pm:net/icinga-plugins

do-build:
	${REINPLACE_CMD} -e 's,/usr/bin/perl,/usr/local/bin/perl,' \
	    ${WRKSRC}/*.pl
	${REINPLACE_CMD} -e 's,/usr/local/nagios/libexec,/usr/local/libexec/icinga,' \
	    ${WRKSRC}/*.pl
	${REINPLACE_CMD} -e 's,Net::SNMP->VERSION < 4,Net::SNMP->VERSION lt 4,' \
	    ${WRKSRC}/*.pl

_PL+= check_snmp_boostedge
_PL+= check_snmp_cpfw
_PL+= check_snmp_css
_PL+= check_snmp_css_main
_PL+= check_snmp_env
_PL+= check_snmp_int
_PL+= check_snmp_linkproof_nhr
_PL+= check_snmp_load
_PL+= check_snmp_mem
_PL+= check_snmp_nsbox
_PL+= check_snmp_process
_PL+= check_snmp_storage
_PL+= check_snmp_vrrp
_PL+= check_snmp_win


do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/icinga
.for P in ${_PL}
	${INSTALL_SCRIPT} ${WRKSRC}/${P}.pl ${STAGEDIR}${PREFIX}/libexec/icinga/${P}
.endfor

.include <bsd.port.mk>
#EOF
