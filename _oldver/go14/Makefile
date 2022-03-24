# $FreeBSD: head/lang/go14/Makefile 451721 2017-10-10 21:31:30Z linimon $

PORTNAME=	go14
PORTVERSION=	1.4.3
CATEGORIES=	lang
MASTER_SITES=	http://golang.org/dl/
DISTNAME=	go${PORTVERSION}.src

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Go programming language

USES=		compiler shebangfix
SHEBANG_LANG=	perl sh
SHEBANG_FILES=	src/*.bash
SHEBANG_FILES+=	src/cmd/go/*.bash
SHEBANG_FILES+=	doc/progs/run
SHEBANG_FILES+=	doc/articles/wiki/*.bash
SHEBANG_FILES+=	test/bench/shootout/timing.sh
SHEBANG_FILES+=	misc/nacl/*_exec misc/benchcmp
SHEBANG_FILES+=	src/net/http/cgi/testdata/*.cgi
SHEBANG_FILES+=	src/regexp/syntax/*.pl
SHEBANG_FILES+=	lib/codereview/*.sh
sh_OLD_CMD=	/usr/bin/env bash
sh_CMD=		${SH}
WRKSRC=		${WRKDIR}/go

ONLY_FOR_ARCHS=		amd64 armv6 armv7 i386

.include <bsd.port.pre.mk>

.if ${ARCH} == i386
GOARCH=386
GOOBJ=8
.elif ${ARCH} == amd64
GOARCH=amd64
GOOBJ=6
.elif ${ARCH} == armv6 || ${ARCH} == armv7
GOARCH=arm
GOOBJ=5
.else
IGNORE=		unknown arch ${ARCH}
.endif

PLIST_SUB+=	ARCH=${GOARCH} GOOBJ=${GOOBJ}

post-patch:
	cd ${WRKSRC} && ${FIND} . -name '*.orig' -delete

do-build:
	cd ${WRKSRC}/src && \
		CC=${CC} \
		GOROOT=${WRKSRC} GOROOT_FINAL=${PREFIX}/go14 \
		GOBIN= GOARCH=${GOARCH} GOOS=${OPSYS:tl} \
		CGO_ENABLED=0 \
		${SH} make.bash

do-install:
	${CP} -a ${WRKSRC} ${STAGEDIR}${PREFIX}/go14

regression-test: build
	cd ${WRKSRC}/src && GOROOT=${WRKSRC} PATH=${WRKSRC}/bin:${PATH} ${SH} run.bash --no-rebuild --banner

.include <bsd.port.post.mk>
#EOF
