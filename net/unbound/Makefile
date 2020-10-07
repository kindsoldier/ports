#
# $Id$
#
PORTNAME=	unbound
PORTVERSION=	1.11.0
CATEGORIES=	dns
MASTER_SITES=	http://unbound.net/downloads/

MAINTAINER=	sem@FreeBSD.org
COMMENT=	Validating, recursive, and caching DNS resolver

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libldns.so:net/libldns
LIB_DEPENDS+=	libevent.so:devel/libevent
BUILD_DEPENDS+= libtool:devel/libtool

USES+=		 gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-ssl=/usr
CONFIGURE_ARGS+= --with-libexpat=${LOCALBASE}
USE_LDCONFIG=	yes

USE_RC_SUBR=	unbound

CONFIGURE_ARGS+= --with-libevent

UB_RUNDIR=	/var/unbound

CONFIGURE_ARGS+= --with-conf-file=${UB_RUNDIR}/unbound.conf
CONFIGURE_ARGS+= --with-run-dir=${UB_RUNDIR}
CONFIGURE_ARGS+= --with-chroot-dir=${UB_RUNDIR}
CONFIGURE_ARGS+= --with-pidfile=${UB_RUNDIR}/unbound.pid
CONFIGURE_ARGS+= --with-rootkey-file=${UB_RUNDIR}/root.key
CONFIGURE_ARGS+= --with-rootcert-file=filename
CONFIGURE_ARGS+= --with-username=${UB_OWNER}

UB_OWNER=	${PORTNAME}
UB_GROUP=	${PORTNAME}
UB_OWNER_ID=	59
UB_GROUP_ID=	59

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall unbound

SUB_LIST+= UB_OWNER=${UB_OWNER}
SUB_LIST+= UB_GROUP=${UB_GROUP}
SUB_LIST+= UB_OWNER_ID=${UB_OWNER_ID}
SUB_LIST+= UB_GROUP_ID=${UB_GROUP_ID}

SUB_LIST+= UB_RUNDIR=${UB_RUNDIR}


post-patch:
	${MKDIR} ${WRKSRC}/balancer
	${RM} ${WRKSRC}/util/configlexer.c

post-install:
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_cancel.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_add_ta.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_add_ta_file.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_async.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_config.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_create.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_data_add.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_data_remove.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_debuglevel.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_debugout.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_delete.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_get_option.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_hosts.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_print_local_zones.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_resolvconf.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_set_fwd.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_set_option.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_trustedkeys.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_zone_add.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_ctx_zone_remove.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_fd.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_poll.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_process.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_resolve.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_resolve_async.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_resolve_free.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_result.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_strerror.3
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf libunbound.3 ub_wait.3

.include <bsd.port.mk>
#EOF
