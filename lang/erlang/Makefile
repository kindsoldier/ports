# Created by: ruslan@shevchenko.kiev.ua
# $FreeBSD: head/lang/erlang/Makefile 498801 2019-04-13 10:40:56Z olgeni $

PORTNAME=	erlang
DISTVERSIONPREFIX=	OTP-
#DISTVERSION=	19.3.6.13
DISTVERSION=	21.3.8.18
CATEGORIES=	lang parallel java
DIST_SUBDIR=	erlang

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Functional programming language from Ericsson

USES=		autoreconf:build gmake perl5
USE_GITHUB=	yes
GH_PROJECT=	otp
USE_PERL5=	build
USE_RC_SUBR=	epmd

GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=yes

OPTIONS_SUB=	yes
SUB_FILES=	pkg-message
SUB_LIST=	TOOLS_VSN=${TOOLS_VSN}

ERLANG_LIB=	${PORTNAME}
#EI_VSN=	3.9.3
#SNMP_VSN=	5.2.5
#TOOLS_VSN=	2.9.1

EI_VSN=		3.11.3
SNMP_VSN=	5.2.12
TOOLS_VSN=	3.1.0.1


CONFIGURE_ARGS+= --enable-threads
CONFIGURE_ARGS+= --enable-smp-support
CONFIGURE_ARGS+= --enable-kernel-poll
CONFIGURE_ARGS+= --disable-sctp
CONFIGURE_ARGS+= --without-dynamic-trace
CONFIGURE_ARGS+= --without-javac
CONFIGURE_ARGS+= --with-ssl


.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-DMAP_NORESERVE=0
.endif

.if ${ARCH} == i386
MAKE_ARGS+=	ARCH=x86
.endif

.if ${ARCH} == armv6 || ${ARCH} == armv7
MAKE_ARGS+=	ARCH=arm
.endif

pre-configure:
	touch ${WRKSRC}/lib/debugger/SKIP
	touch ${WRKSRC}/lib/et/SKIP
	touch ${WRKSRC}/lib/observer/SKIP
	touch ${WRKSRC}/lib/wx/SKIP

	echo "disabled by port options" > ${WRKSRC}/lib/debugger/SKIP
	echo "disabled by port options" > ${WRKSRC}/lib/et/SKIP
	echo "disabled by port options" > ${WRKSRC}/lib/observer/SKIP
	echo "disabled by port options" > ${WRKSRC}/lib/wx/SKIP


	cd ${WRKSRC} && ./otp_build autoconf


post-build:
	cd ${WRKSRC} && ${MAKE_CMD} docs

post-install:
	${LN} -sf ../lib/${ERLANG_LIB}/lib/erl_interface-${EI_VSN}/bin/erl_call ${STAGEDIR}${PREFIX}/bin/erl_call
	${LN} -sf ../lib/${ERLANG_LIB}/lib/snmp-${SNMP_VSN}/bin/snmpc ${STAGEDIR}${PREFIX}/bin/snmpc
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/gs-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/jinterface-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/odbc-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/debugger-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/et-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/observer-*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/erlang/lib/wx-*

	${ECHO_CMD} "MANPATH ${PREFIX}/lib/erlang/man" > ${WRKDIR}/erlang.conf
	${INSTALL_DATA} ${WRKDIR}/erlang.conf ${STAGEDIR}${PREFIX}/etc/man.d/erlang.conf
	for SECTION in 1 3 4 6 7; do \
		${MKDIR} -p ${STAGEDIR}${PREFIX}/lib/erlang/man/man$${SECTION}; \
	  	${FIND} ${WRKSRC}/erts ${WRKSRC}/lib -type f | ${GREP} doc/man$${SECTION} \
			| ${XARGS} -J % ${CP} -v % ${STAGEDIR}${PREFIX}/lib/erlang/man/man$${SECTION}; \
	done

post-stage:
	${FIND} ${STAGEDIR}${PREFIX}/lib/${ERLANG_LIB}/* -type d -empty -delete
	cd ${STAGEDIR}${PREFIX}; ${FIND} lib/${ERLANG_LIB}/* -type f -o -type l \
		| ${SORT} >> ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX}; ${FIND} ${DOCSDIR_REL}/* -name \*.pdf \
		| ${SORT} >> ${TMPPLIST}

.include <bsd.port.post.mk>
