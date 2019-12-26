#
# $Id$
#
PORTNAME=	snmp
PORTVERSION=	5.7.3
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/net-${PORTNAME}/net-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	net-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Extendable SNMP implementation


GNU_CONFIGURE=	yes
USES+=		gmake perl5

USE_RC_SUBR=	snmpd snmptrapd

USE_LDCONFIG=	yes
USE_CSTD=	c99

#EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-local:Makefile.in

CFLAGS+=	-D_WANT_IFADDR
CFLAGS+=	-I${LOCALBASE}/include -I${PKG_PREFIX}/include

NET_SNMP_SYS_CONTACT?=	nobody@nowhere
NET_SNMP_SYS_LOCATION?=	somewhere
NET_SNMP_LOGFILE?=	/var/log/snmpd.log
NET_SNMP_PERSISTENTDIR?=/var/net-snmp
#DEFAULT_SNMP_VERSION?=	2
DEFAULT_SNMP_VERSION?=	3
#NET_SNMP_WITH_MIB_MODULE_LIST+=	smux agentx
NET_SNMP_WITH_MIB_MODULE_LIST+=	host disman/event-mib mibII/mta_sendmail mibII/tcpTable ucd-snmp/diskio
NET_SNMP_WITH_MIB_MODULE_LIST+=	if-mib 
NET_SNMP_WITHOUT_MIB_MODULE_LIST+=	mibII/ipv6

CONFIGURE_ARGS+= --with-persistent-directory="${NET_SNMP_PERSISTENTDIR}"
CONFIGURE_ARGS+= --with-sys-contact="${NET_SNMP_SYS_CONTACT}"
CONFIGURE_ARGS+= --with-sys-location="${NET_SNMP_SYS_LOCATION}"
CONFIGURE_ARGS+= --with-default-snmp-version="${DEFAULT_SNMP_VERSION}"
CONFIGURE_ARGS+= --with-logfile="${NET_SNMP_LOGFILE}"
CONFIGURE_ARGS+= --with-mib-modules="${NET_SNMP_WITH_MIB_MODULE_LIST}"
CONFIGURE_ARGS+= --with-out-mib-modules="${NET_SNMP_WITHOUT_MIB_MODULE_LIST}"


CONFIGURE_ARGS+= --with-libs="-lssp_nonshared"
CONFIGURE_ARGS+= --enable-internal-md5
CONFIGURE_ARGS+= --enable-shared 
CONFIGURE_ARGS+= --with-gnu-ld --without-libwrap
CONFIGURE_ARGS+= --with-ldflags="-lm -lkvm -ldevstat -L${PKG_PREFIX}/lib -L${LOCALBASE}/lib ${LCRYPTO}"
CONFIGURE_ARGS+= --disable-embedded-perl
#CONFIGURE_ARGS+= --without-perl-modules
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-mfd-rewrites
CONFIGURE_ARGS+= --with-defaults
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ENV+=	PERLPROG="${PERL}" PSPROG="${PS_CMD}" SED="${SED}" MAKE="${GMAKE}"
MAKE_ARGS+=	MAKE="${GMAKE}"
LDFLAGS+=	-L${LOCALBASE}/lib

SUB_FILES=	pkg-message pkg-install

STARTUP_DIR=	${PREFIX}/etc/rc.d
SCRIPT_FILES=	snmpcheck.def mib2c fixproc ipf-mod.pl traptoemail

CONFLICTS=	ucd-snmp-4.* net-snmp-5.3.*

.include <bsd.port.pre.mk>

.if ${OSVERSION} >= 1200085
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-openssl11
.endif


post-patch:
.for filename in ${SCRIPT_FILES}
	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/local/${filename}
.endfor
	${REINPLACE_CMD} -e 's!utmp_p->ut_name!utmp_p->ut_user!' ${WRKSRC}/agent/mibgroup/host/hr_system.c
	${REINPLACE_CMD} -E -e 's|return pci_lookup_name|disabled broken|g' ${WRKSRC}/configure

post-configure:
	${FIND} ${WRKSRC} -name Makefile | \
		${XARGS} ${REINPLACE_CMD} -E -e '/^INSTALL[ 	]+=/s|$$| -m 755|'
.for hdr in sys/mbuf.h netinet/in_pcb.h netinet/in_var.h netinet/ip6.h pkg.h
	${REINPLACE_CMD} -E -e '\
		s!^.*#undef.*(HAVE_${hdr:tu:S/./_/g:S/\//_/g}).*$$!#define \1 1!g' \
			${WRKSRC}/include/net-snmp/net-snmp-config.h
.endfor

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 config_perror.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 config_pwarn.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 read_config_print_usage.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 read_configs.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 read_premib_configs.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_app_config_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_app_prenetsnmp_mib_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_config_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_const_config_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_mib_handlers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 register_prenetsnmp_mib_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 unregister_all_config_handlers.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 unregister_app_config_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_config_api.3 unregister_config_handler.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 add_mibdir.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 add_module_replacement.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 fprint_description.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 fprint_objid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 get_module_node.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 netsnmp_init_mib.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 netsnmp_read_module.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 print_description.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 print_mib.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 print_objid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 read_all_mibs.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 read_mib.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 read_objid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 shutdown_mib.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snmp_parse_oid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snmp_set_mib_errors.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snmp_set_mib_warnings.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snmp_set_save_descriptions.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snprint_description.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_mib_api.3 snprint_objid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_pdu_api.3 snmp_clone_pdu.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_pdu_api.3 snmp_fix_pdu.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_pdu_api.3 snmp_free_pdu.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_pdu_api.3 snmp_pdu_create.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_async_send.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_close.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_error.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_init.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_open.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_read.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_select_info.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_send.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_session.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_synch_response.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_sess_api.3 snmp_sess_timeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_api_errstring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_async_send.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_close.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_error.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_open.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_perror.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_read.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_select_info.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_send.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_sess_perror.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_synch_response.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_session_api.3 snmp_timeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_trap_api.3 send_easy_trap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_trap_api.3 send_trap_vars.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_trap_api.3 send_v2trap.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 fprint_value.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 fprint_variable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 print_value.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 print_variable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_add_null_var.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_clone_varbind.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_free_var.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_free_varbind.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_pdu_add_variable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_set_var_objid.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_set_var_typed_integer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_set_var_typed_value.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_set_var_value.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snmp_varlist_add_variable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snprint_value.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  netsnmp_varbind_api.3 snprint_variable.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  snmp_alarm.3 snmp_alarm_register.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  snmp_alarm.3 snmp_alarm_register_hr.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  snmp_alarm.3 snmp_alarm_unregister.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  snmptrap.1 snmpinform.1


.include <bsd.port.post.mk>
#EOF
