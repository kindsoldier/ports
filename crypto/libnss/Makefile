# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/security/nss/Makefile 439231 2017-04-23 16:11:22Z jbeich $

PORTNAME=	nss
PORTVERSION=	3.47.1
CATEGORIES=	security
MASTER_SITES=	MOZILLA/security/${PORTNAME}/releases/${DISTNAME:tu:C/[-.]/_/g}_RTM/src
PKGNAMEPREFIX=  lib

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Libraries to support development of security-enabled applications

BUILD_DEPENDS+=	zip:arch/zip
BUILD_DEPENDS+=	sqlite>=3.7.15:data/sqlite3
LIB_DEPENDS+=	libnspr4.so:devel/libnspr
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/nss

MAKE_JOBS_UNSAFE=	yes
#USE_LDCONFIG=	${PREFIX}/lib/nss
USES=		gmake perl5
USE_PERL5=	build
MAKE_ENV+=	LIBRARY_PATH="${LOCALBASE}/lib"
MAKE_ENV+=	SQLITE_INCLUDE_DIR="${LOCALBASE}/include"
MAKE_ENV+=	FREEBL_LOWHASH=1
MAKE_ENV+=	NSS_DISABLE_GTESTS=1
MAKE_ENV+=	NSS_USE_SYSTEM_SQLITE=1
MAKE_ENV+=      NSS_ENABLE_WERROR=0
MAKE_ENV+=      DEBUG=0

#MAKE_ENV+= CC_IS_CLANG=0
CFLAGS+=	-I${LOCALBASE}/include/nspr

SUB_FILES=	nss-config nss.pc
SUB_LIST=	PORTVERSION=${PORTVERSION}

DIST=		${WRKSRC:H}/dist

EXTRACT_AFTER_ARGS=--exclude */lib/zlib --exclude */lib/dbm --exclude */lib/sqlite

#INSTALL_BINS+=	certcgi
INSTALL_BINS+=	certutil
INSTALL_BINS+=	cmsutil
INSTALL_BINS+=	crlutil
INSTALL_BINS+=	derdump
INSTALL_BINS+=	makepqg
INSTALL_BINS+=	mangle
INSTALL_BINS+=	modutil
INSTALL_BINS+=	ocspclnt
INSTALL_BINS+=	oidcalc
INSTALL_BINS+=	p7content
INSTALL_BINS+=	p7env
INSTALL_BINS+=	p7sign
INSTALL_BINS+=	p7verify
INSTALL_BINS+=	pk12util
INSTALL_BINS+=	rsaperf
INSTALL_BINS+=	shlibsign
INSTALL_BINS+=	signtool
INSTALL_BINS+=	signver
INSTALL_BINS+=	ssltap
INSTALL_BINS+=	strsclnt
INSTALL_BINS+=	symkeyutil
INSTALL_BINS+=	vfychain
INSTALL_BINS+=	vfyserv

.include <bsd.port.options.mk>

MAKE_ENV+=	BUILD_OPT=1
BINS=		${DIST}/${OPSYS}${OSREL}_OPT.OBJ

.if ${OPSYS} == FreeBSD && ${ARCH} == amd64
CC+=	-B${LOCALBASE}/bin
.endif

check regression-test test:
	cd ${WRKSRC}/tests;	\
		${SETENV} PATH="${BINS}/bin:${PATH}" \
		    LD_LIBRARY_PATH="${BINS}/lib" \
		    ${MAKE_ENV}	\
			./all.sh
	if ${GREP} -Fh '>Failed<'	\
	    ${WRKSRC:H}/tests_results/security/*/results.html; then	\
		echo "Some tests have failed. Let ${MAINTAINER} know.";	\
		exit 1;	\
	else	\
		echo "All tests succeeded. Good news.";	\
	fi

post-patch:
	${REINPLACE_CMD} '/NSS_DEFAULT_SYSTEM/s,/etc,${PREFIX}&,' \
		${WRKSRC}/lib/sysinit/nsssysinit.c
	cd ${WRKSRC} && \
		${FIND} . -name "*.c" -o -name "*.h" | \
		${XARGS} ${REINPLACE_CMD} -e 's|"nspr.h"|<nspr.h>|'
#	${FIND} ${WRKSRC}/tests -name '*.sh' | ${XARGS} ${GREP} -l -F '/bin/bash' | \
#		${XARGS} ${REINPLACE_CMD} -e 's|#! */bin/bash|#!${SH}|'

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/nss/nss ${STAGEDIR}${PREFIX}/lib
	${FIND} ${DIST}/public/nss -type l \
		-exec ${INSTALL_DATA} {} ${STAGEDIR}${PREFIX}/include/nss/nss \;
	${INSTALL_LIB} ${BINS}/lib/*.so \
		${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${BINS}/lib/libcrmf.a \
		${STAGEDIR}${PREFIX}/lib
.for bin in ${INSTALL_BINS}
	${INSTALL_PROGRAM} ${BINS}/bin/${bin} \
		${STAGEDIR}${PREFIX}/bin
.endfor
	${INSTALL_SCRIPT} ${WRKDIR}/nss-config ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKDIR}/nss.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig

.include <bsd.port.mk>
