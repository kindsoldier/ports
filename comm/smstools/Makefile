#
# $Id$
#
PORTNAME=	smstools
PORTVERSION=	3.1.15
CATEGORIES=	comms
MASTER_SITES=	http://smstools3.kekekasvi.com/packages/
DISTNAME=	smstools3-${PORTVERSION}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	SMS Gateway software for GSM modems and mobile phones

CONFLICTS=	gnokii-[0-9]* smstools-2.* sendsms-[0-9]*

WRKSRC=		${WRKDIR}/smstools3

USES=		gmake shebangfix

SHEBANG_FILES=	scripts/hex2dec scripts/hex2bin
SHEBANG_LANG=	awk
awk_OLD_CMD=	/bin/gawk
awk_CMD=	${LOCALBASE}/bin/awk
USE_RC_SUBR=	smsd

SMS_SPOOLDIR=	/var/spool/sms
SMS_LOGDIR=	/var/log/smsd
SMS_RUNDIR=	/var/run/smsd

SMSD_OWNER=	uucp
SMSD_GROUP=	dialer

SUB_LIST+=	SMS_SPOOLDIR=${SMS_SPOOLDIR}
SUB_LIST+=	SMS_LOGDIR=${SMS_LOGDIR}
SUB_LIST+=	SMS_RUNDIR=${SMS_RUNDIR}
SUB_LIST+=	SMSD_OWNER=${SMSD_OWNER}
SUB_LIST+=	SMSD_GROUP=${SMSD_GROUP}

SUB_FILES=	pkg-install pkg-deinstall

CFLAGS+=	-DNOSTATS
SMSTOOLS_DEFAULT_COMPORT=	/dev/cuau0

post-patch:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
			-e 's|%%STAGEDIR%%|${STAGEDIR}|g' \
		${WRKSRC}/Makefile ${WRKSRC}/install.sh ${WRKSRC}/src/smsd_cfg.h
	${REINPLACE_CMD} -e 's,^override,\toverride,g' ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} -e 's|/dev/ttyS0|${SMSTOOLS_DEFAULT_COMPORT}|g' \
			-e 's|%%SMSD_OWNER%%|${SMSD_OWNER}|' \
			-e 's|%%SMSD_GROUP%%|${SMSD_GROUP}|' \
		${WRKSRC}/examples/smsd.conf.easy \
		${WRKSRC}/examples/smsd.conf.full \
		${WRKSRC}/examples/smsd.conf.non-root
	${REINPLACE_CMD} 's|/bin/bash|/bin/sh|g' \
		${WRKSRC}/scripts/*

PORTEXAMPLES=	*

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/smsd
	${MKDIR} ${STAGEDIR}${DATADIR}
	for file in $$(${FIND} ${WRKSRC}/scripts -type f ! -name 'README' ! -name '*.bak'); do \
		${INSTALL_SCRIPT} $$file ${STAGEDIR}${DATADIR}/; \
	done
.for FILE in sendsms sms2html sms2unicode unicode2sms
	${LN} -sf ${DATADIR}/${FILE} ${STAGEDIR}${PREFIX}/bin/${FILE}
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/smsd.conf.easy ${STAGEDIR}${EXAMPLESDIR}/smsd.conf.sample

#	${MKDIR} ${STAGEDIR}${DOCSDIR}/slideshow
#	${INSTALL_DATA} ${WRKSRC}/doc/*.html ${STAGEDIR}${DOCSDIR}/
#	${INSTALL_DATA} ${WRKSRC}/doc/slideshow/* ${STAGEDIR}${DOCSDIR}/slideshow
#	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}

#	for file in $$(${FIND} ${WRKSRC}/examples -type f ! -name 'README'); do \
#		${INSTALL_DATA} $$file ${STAGEDIR}${EXAMPLESDIR}; \
#	done

#	${MKDIR} ${STAGEDIR}${SPOOLDIR}/incoming 
#	${MKDIR} ${STAGEDIR}${SPOOLDIR}/outgoing 
#	${MKDIR} ${STAGEDIR}${SPOOLDIR}/checked 
#	${MKDIR} ${STAGEDIR}${LOGDIR}
#	${MKDIR} ${STAGEDIR}${PIDDIR}

.include <bsd.port.mk>
#EOF
