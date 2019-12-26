#
# $Id$
#
PORTNAME=	icinga
PORTVERSION=	1.13.3
CATEGORIES=	net-mgmt
MASTER_SITES=	https://github.com/Icinga/${PORTNAME}-core/releases/download/v${PORTVERSION}/

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Enterprise grade open source monitoring system based on Nagios

LIB_DEPENDS+=	libdbi.so:data/libdbi
LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libgd.so:graph/libgd

RUN_DEPENDS+=	${LOCALBASE}/libexec/icinga/check_tcp:net/icinga-plugins

USES=		gmake
GNU_CONFIGURE=	yes

USE_RC_SUBR=	icinga

ICINGA_OWNER=	icinga
ICINGA_GROUP=	icinga

ICINGA_OWNER_ID=	185
ICINGA_GROUP_ID=	185

ICINGA_SPOOLDIR=	/var/spool/icinga
ICINGA_LOGDIR=	/var/log/icinga

ICINGA_WWWDIR=	www/icinga
ICINGA_HTMURL=	/icinga
ICINGA_CGIURL=	${ICINGA_HTMURL}/cgi-bin

ICINGA_WWWGROUP=	apache

CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+=		-L${LOCALBASE}/lib

CONFIGURE_ARGS+=	--with-command-user=${ICINGA_OWNER}
CONFIGURE_ARGS+=	--with-command-group=${ICINGA_WWWGROUP}
CONFIGURE_ARGS+=	--with-icinga-user=${ICINGA_OWNER}
CONFIGURE_ARGS+=	--with-icinga-group=${ICINGA_GROUP}
CONFIGURE_ARGS+=	--with-htmurl=${ICINGA_HTMURL}
CONFIGURE_ARGS+=	--with-cgiurl=${ICINGA_CGIURL}
CONFIGURE_ARGS+=	--sbindir=${PREFIX}/${ICINGA_WWWDIR}/cgi-bin
CONFIGURE_ARGS+=	--datarootdir=${PREFIX}/${ICINGA_WWWDIR}
CONFIGURE_ARGS+=	--datadir=${PREFIX}/${ICINGA_WWWDIR}
CONFIGURE_ARGS+=	--sysconfdir=${PREFIX}/etc/icinga
CONFIGURE_ARGS+=	--localstatedir=${ICINGA_SPOOLDIR}
CONFIGURE_ARGS+=	--with-checkresult-dir=${ICINGA_SPOOLDIR}/checkresults
CONFIGURE_ARGS+=	--libexecdir=${PREFIX}/libexec/icinga
CONFIGURE_ARGS+=	--with-plugin-dir=${LOCALBASE}/libexec/icinga
CONFIGURE_ARGS+=	--with-log-dir=${ICINGA_LOGDIR}
CONFIGURE_ARGS+=	--with-httpd-conf=${EXAMPLESDIR}/apache22
CONFIGURE_ARGS+=	--enable-event-broker
CONFIGURE_ARGS+=	--enable-nanosleep

CONFIGURE_ENV=	PERL=${PERL} HOME=${WRKDIR} # prevent creation of .rnd file

INSTALL_TARGET=	install install-config install-eventhandlers install-webconf

PLIST_SUB+=	ICINGA_SPOOLDIR=${ICINGA_SPOOLDIR}
PLIST_SUB+=	ICINGA_LOGDIR=${ICINGA_LOGDIR}
PLIST_SUB+=	ICINGA_WWWDIR=${ICINGA_WWWDIR}
PLIST_SUB+=	ICINGA_OWNER=${ICINGA_OWNER}
PLIST_SUB+=	ICINGA_GROUP=${ICINGA_GROUP}

PLIST_SUB+=	ICINGA_OWNER_ID=${ICINGA_OWNER_ID}
PLIST_SUB+=	ICINGA_GROUP_ID=${ICINGA_GROUP_ID}

PLIST_SUB+=	ICINGA_HTMURL=${ICINGA_HTMURL}
PLIST_SUB+=	ICINGA_CGIURL=${ICINGA_CGIURL}
PLIST_SUB+=	WWWGRP=${WWWGRP}

SUB_FILES=	pkg-message

# XXX: Don't remove PREFIX from SUB_LIST here.
SUB_LIST+=	PREFIX=${PREFIX}
SUB_LIST+=	${PLIST_SUB}


CONFIGURE_ARGS+=	--enable-idoutils
CONFIGURE_ARGS+=	--enable-ssl
CONFIGURE_ARGS+=	--with-dbi-lib=${LOCALBASE}/lib
CONFIGURE_ARGS+=	--with-dbi-inc=${LOCALBASE}/include

INSTALL_TARGET+=	install-idoutils
USE_RC_SUBR+=		ido2db
#CONFIGURE_ARGS+=	--disable-idoutils

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES+= pkg-install pkg-deinstall


post-patch:
	${REINPLACE_CMD} -e 's,/bin/ping,/sbin/ping,' ${WRKSRC}/sample-config/cgi.cfg.in
	${REINPLACE_CMD} -e 's,Linux,${OPSYS},'   ${WRKSRC}/sample-config/icinga.cfg.in
	${REINPLACE_CMD} -e 's,775,755,g; s,664,644,g' ${WRKSRC}/html/Makefile.in
# Use correct make(1) syntax to unbreak parallel builds
	${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} ${REINPLACE_CMD} \
		-E 's#cd (.+) && (make|\$$\(MAKE\))#$$(MAKE) -C \1#'

#pre-install:
#	${STRIP_CMD} ${WRKSRC}/module/idoutils/src/ido2db \
#		${WRKSRC}/module/idoutils/src/log2ido \
#		${WRKSRC}/module/idoutils/src/idomod.so

post-install:
#	${MKDIR} ${STAGEDIR}${PREFIX}/${ICINGA_WWWDIR}/ssi
#	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/idoutils/
#	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/idoutils/config/
	${MKDIR} -p ${STAGEDIR}${EXAMPLESDIR}/idoutils/db
#	cd ${WRKSRC}/module/idoutils/config && ${COPYTREE_SHARE} . \
#		${STAGEDIR}${EXAMPLESDIR}/idoutils/config
	cd ${WRKSRC}/module/idoutils/db && ${COPYTREE_SHARE} . \
		${STAGEDIR}${EXAMPLESDIR}/idoutils/db

.include <bsd.port.mk>
#EOF
