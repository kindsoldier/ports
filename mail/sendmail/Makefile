# $FreeBSD: head/mail/sendmail/Makefile 402187 2015-11-21 19:31:02Z dinoex $

PORTNAME=	sendmail
PORTVERSION=	8.15.2
CATEGORIES=	mail
MASTER_SITES=	ftp://ftp.sendmail.org/pub/sendmail/
PKGNAMESUFFIX?=	${TLS_SUFFIX}${SASL_SUFFIX}${LDAP_SUFFIX}${BDB_SUFFIX}${PKGNAMESUFFIX2}
DISTNAME=	${PORTNAME}.${PORTVERSION}

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Reliable, highly configurable mail transfer agent with utilities

USES=		cpe uidfix
MAKE_ARGS+=	UBINOWN=${UID}
MAKE_ARGS+=	UBINGRP=${GID}
MAKE_ARGS+=	SBINOWN=${UID}
MAKE_ARGS+=	SBINGRP=${GID}
MAKE_ARGS+=	GBINOWN=${UID}
MAKE_ARGS+=	GBINGRP=${GID} 
MAKE_ARGS+=	MANOWN=${UID}
MAKE_ARGS+=	MANGRP=${GID}
MAKE_ARGS+=	LIBMODE=0644
MAKE_ARGS+=	UBINMODE=0755
MAKE_ARGS+=	GBINMODE=2755
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PKGMESSAGE=	${WRKSRC}/pkg-message

WCONF=		${WRKSRC}/devtools/Site
LMAN1=		mailq.1 newaliases.1 vacation.1
LMAN5=		aliases.5
LMAN8=		sendmail.8 mailstats.8 makemap.8 praliases.8 smrsh.8 \
		mail.local.8 rmail.8 editmap.8

#SENDMAIL=	${PREFIX}/sbin/sendmail
#BASEMAIL=	/usr/libexec/sendmail/sendmail
MILTER_SOVER=	6

SITE=	${FILESDIR}/site.config.m4.pre4
SITE+=	${FILESDIR}/site.config.m4
SITE+=	${FILESDIR}/site.config.m4.ipv6
SITE+=	${FILESDIR}/site.config.m4.sasl2
#SITE+=	${FILESDIR}/site.config.m4.ldap

SITE+=	${FILESDIR}/site.config.m4.milter

SITE+=	${FILESDIR}/site.config.m4.ssl
SITE+=	${FILESDIR}/site.config.m4.tls
#SITE+=	${FILESDIR}/site.config.m4.local


SED_SCRIPT=	-e "s,\`-O\',\`${CFLAGS}\'," -e 's,%%CC%%,${CC},' -e 's,%%LD%%,${LD},'
SED_SCRIPT+=	-e "s,-DNIS ,,"

SENDMAIL_SPOOLDIR=	/var/spool/clientmqueue
SENDMAIL_CSPOOLDIR=	/var/spool/mqueue

SENDMAIL_SYSCONFDIR=	${PREFIX}/etc/mail

SENDMAIL_OWNER=	smmsp
SENDMAIL_GROUP=	smmsp
SENDMAIL_OWNERID=	25
SENDMAIL_GROUPID=	25

#USE_RC_SUBR= sendmail.sh

SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+=	SENDMAIL_OWNER=${SENDMAIL_OWNER}
SUB_LIST+=	SENDMAIL_GROUP=${SENDMAIL_GROUP}
SUB_LIST+=	SENDMAIL_OWNERID=${SENDMAIL_OWNERID}
SUB_LIST+=	SENDMAIL_GROUPID=${SENDMAIL_GROUPID}
SUB_LIST+=	SENDMAIL_SPOOLDIR=${SENDMAIL_SPOOLDIR}
SUB_LIST+=	SENDMAIL_CSPOOLDIR=${SENDMAIL_CSPOOLDIR}
SUB_LIST+=	SENDMAIL_SYSCONFDIR=${SENDMAIL_SYSCONFDIR}

post-patch:
	cat ${PKGDIR}/pkg-message | ${SED} -e "s,%%PREFIX%%,${PREFIX},g" \
		-e "s,%%LOCALBASE%%,${LOCALBASE},g" \
		-e "s,%%PORTSDIR%%,${PORTSDIR},g" \
		 > ${WRKSRC}/pkg-message

	${CP} -pR ${WRKSRC}/libmilter ${WRKSRC}/libsharedmilter
	${CP} ${FILESDIR}/sharedlibrary.m4 \
		${WRKSRC}/devtools/M4/UNIX/sharedlibrary.m4
	${REINPLACE_CMD} -e 's,`library,`sharedlibrary,' \
		${WRKSRC}/libsharedmilter/Makefile.m4

do-configure:
	${REINPLACE_CMD} ${SED_SCRIPT} ${WRKSRC}/devtools/OS/FreeBSD

	cat ${SITE} | ${SED} -e "s,%%PREFIX%%,${PREFIX},g" \
		-e "s,%%LOCALBASE%%,${LOCALBASE},g" > ${WCONF}/site.config.m4

#	${ECHO_CMD} 'APPENDDEF(`conf_sendmail_ENVDEF'\'', `-DSOCKETMAP'\'')' \
#		>> ${WCONF}/site.config.m4
#	${ECHO_CMD} 'APPENDDEF(`conf_sendmail_ENVDEF'\'', `-DPICKY_HELO_CHECK'\'')' \
#		>> ${WCONF}/site.config.m4

#	${ECHO_CMD} 'APPENDDEF(`confENVDEF'\'', `-DSM_CONF_SHM=0'\'')' \
#		>> ${WCONF}/site.config.m4
#	${ECHO_CMD} 'APPENDDEF(`confENVDEF'\'', `-DSM_CONF_SEM=0'\'')' \
#		>> ${WCONF}/site.config.m4
#	${ECHO_CMD} 'APPENDDEF(`confENVDEF'\'', `-DLA_TYPE=LA_ZERO'\'')' \
#		>> ${WCONF}/site.config.m4

#	${ECHO_CMD} 'APPENDDEF(`conf_libmilter_ENVDEF'\'', `-DSM_CONF_POLL=1'\'')' \
#		>> ${WCONF}/site.config.m4
#	${ECHO_CMD}  'APPENDDEF(`conf_libmilter_ENVDEF'\'', `-D_FFR_WORKERS_POOL=1'\'')' \
#		>> ${WCONF}/site.config.m4

post-build:
	cd ${WRKSRC}/doc/op && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} op.txt

	cd ${BUILD_WRKSRC}/libmilter && ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${ALL_TARGET}

	cd ${BUILD_WRKSRC}/libsharedmilter && ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${ALL_TARGET}

post-install:
	cd ${WRKSRC}/mail.local && ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} force-install
	cd ${WRKSRC}/rmail && ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} force-install

	${MKDIR} ${STAGEDIR}${PREFIX}/include/libmilter
	${INSTALL_DATA} \
		${WRKSRC}/include/libmilter/mfapi.h \
		${WRKSRC}/include/libmilter/mfdef.h \
		    ${STAGEDIR}${PREFIX}/include/libmilter/
	${INSTALL_DATA} \
	    ${WRKSRC}/obj.`${WRKSRC}/devtools/bin/Build -A`/libmilter/libmilter.a \
	    ${STAGEDIR}${PREFIX}/lib/

	${INSTALL_LIB} \
	    ${WRKSRC}/obj.`${WRKSRC}/devtools/bin/Build -A`/libsharedmilter/libmilter.so \
		${STAGEDIR}${PREFIX}/lib/libmilter.so.${MILTER_SOVER}
	${LN} -sf libmilter.so.${MILTER_SOVER} \
		${STAGEDIR}${PREFIX}/lib/libmilter.so

.for M in ${LMAN8}
	${INSTALL_MAN} ${WRKSRC}/*/${M} ${STAGEDIR}${MANPREFIX}/man/man8
.endfor
.for M in ${LMAN5}
	${INSTALL_MAN} ${WRKSRC}/*/${M} ${STAGEDIR}${MANPREFIX}/man/man5
.endfor
.for M in ${LMAN1}
	${INSTALL_MAN} ${WRKSRC}/*/${M} ${STAGEDIR}${MANPREFIX}/man/man1
.endfor
	${MKDIR} ${STAGEDIR}${PREFIX}/share/sendmail
	${TAR} -C ${WRKSRC} -cf - cf | \
		${TAR} -C ${STAGEDIR}${PREFIX}/share/sendmail -xf -


mailer.base:
	@${SED} \
	-e "s=^sendmail[ 	]*/.*$$=sendmail	${BASEMAIL}=" \
	-e "s=^send-mail[ 	]*/.*$$=send-mail	${BASEMAIL}=" \
	-e "s=^mailq[ 	]*/.*$$=mailq		${BASEMAIL}=" \
	-e "s=^newaliases[ 	]*/.*$$=newaliases	${BASEMAIL}=" \
	-e "s=^hoststat[ 	]*/.*$$=hoststat	${BASEMAIL}=" \
	-e "s=^purgestat[ 	]*/.*$$=purgestat	${BASEMAIL}=" \
	 ${DESTDIR}/etc/mail/mailer.conf > ${DESTDIR}/etc/mail/mailer.conf.new
	${MV} ${DESTDIR}/etc/mail/mailer.conf.new \
		${DESTDIR}/etc/mail/mailer.conf

mailer.conf:
	@${SED} \
	-e "s=^sendmail[ 	]*/.*$$=sendmail	${SENDMAIL}=" \
	-e "s=^send-mail[ 	]*/.*$$=send-mail	${SENDMAIL}=" \
	-e "s=^mailq[ 	]*/.*$$=mailq		${SENDMAIL}=" \
	-e "s=^newaliases[ 	]*/.*$$=newaliases	${SENDMAIL}=" \
	-e "s=^hoststat[ 	]*/.*$$=hoststat	${SENDMAIL}=" \
	-e "s=^purgestat[ 	]*/.*$$=purgestat	${SENDMAIL}=" \
	 ${DESTDIR}/etc/mail/mailer.conf > ${DESTDIR}/etc/mail/mailer.conf.new
	${MV} ${DESTDIR}/etc/mail/mailer.conf.new \
		${DESTDIR}/etc/mail/mailer.conf

# create sumbit.cf on older systems
#
submit.cf:	${DESTDIR}/etc/mail/submit.cf

${DESTDIR}/etc/mail/submit.mc:
	${INSTALL_DATA} ${PREFIX}/share/sendmail/cf/cf/submit.mc \
		${DESTDIR}/etc/mail/submit.mc

${DESTDIR}/etc/mail/submit.cf:	${DESTDIR}/etc/mail/submit.mc
	cd ${DESTDIR}/etc/mail && ${MAKE} \
		SENDMAIL_CF_DIR=${PREFIX}/share/sendmail/cf \
		SENDMAIL_MC=submit

tls-install:
	${SETENV} DESTDIR=${DESTDIR} FILESDIR=${FILESDIR} \
		${SH} ${FILESDIR}/tls-install.sh

.include <bsd.port.mk>
#EOF
