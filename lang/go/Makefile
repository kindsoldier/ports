# Created by: Devon H. O'Dell <devon.odell@gmail.com>
# $FreeBSD: head/lang/go/Makefile 470619 2018-05-22 14:32:09Z jlaffaye $

PORTNAME=	go
PORTVERSION=	1.17.6
CATEGORIES=	lang
MASTER_SITES=	https://golang.org/dl/
MASTER_SITES+=	https://github.com/dmgk/go-bootstrap/releases/download/${BOOTSTRAP_TAG}/:bootstrap \
MASTER_SITES+=	LOCAL/dmgk:bootstrap
DISTFILES=      go${PORTVERSION}.src.tar.gz
DISTFILES+=     ${BOOTSTRAP_NAME}.tar.xz:bootstrap

.include <bsd.port.pre.mk>


BOOTSTRAP_NAME= go-${OPSYS:tl}-${GOARCH}${GOARM}-${BOOTSTRAP_TAG}
BOOTSTRAP_TAG=	go1.14


.if ${ARCH} == amd64
GOARCH=amd64
.elif ${ARCH} == i386
GOARCH=386
.elif ${ARCH} == armv6
GOARCH=arm
GOARM=6
.elif ${ARCH} == armv7
GOARCH=arm
GOARM=7
.elif ${ARCH} == aarch64
GOARCH=arm64
.else
IGNORE=		unknown arch ${ARCH}
.endif

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Go programming language

#BUILD_DEPENDS=	go14>=1.4:lang/go14
RUN_DEPENDS= bash:lang/bash

USES=		shebangfix
SHEBANG_LANG=	sh perl
SHEBANG_FILES+=	misc/wasm/go_js_wasm_exec
SHEBANG_FILES+=	src/net/http/cgi/testdata/test.cgi
SHEBANG_GLOB=	*.bash *.pl *.sh

#sh_OLD_CMD=	/bin/bash "/usr/bin/env bash"
#sh_CMD=		${SH}

WRKSRC=		${WRKDIR}/go
ONLY_FOR_ARCHS=	i386 amd64 armv6 armv7 aarch64

USE_LOCALE=en_US.UTF-8
EXTRACT_CMD=	${SETENV} LC_ALL=en_US.UTF-8 ${TAR}

post-patch:
	cd ${WRKSRC} && ${FIND} . -name '*.orig' -delete
	${REINPLACE_CMD} -e 's|^if ulimit -T|false \&\& &|' ${WRKSRC}/src/run.bash

#BOOTSTRAP_GO = ${LOCALBASE}/go14
BOOTSTRAP_GO = ${WRKDIR}/${BOOTSTRAP_NAME}

do-build:
	cd ${WRKSRC}/src ; ${SETENV} \
		XDG_CACHE_HOME=${WRKDIR} \
		GOROOT_BOOTSTRAP=${BOOTSTRAP_GO} \
		GOROOT=${WRKSRC} \
		GOROOT_FINAL=${PREFIX}/go \
		GOBIN= \
		GOOS=${OPSYS:tl} \
		GOARCH=${GOARCH} \
		GO386=${GO386} \
		GOARM=${GOARM} \
		CC=${CC} \
		${LOCALBASE}/bin/bash make.bash -v

#	cd ${WRKSRC}/src && \
#		GOROOT=${WRKSRC} GOROOT_FINAL=${PREFIX}/lib/go \
#		GOROOT_BOOTSTRAP=${BOOTSTRAP_GO} \
#		GOBIN= GOARCH=${GOARCH} GOOS=${OPSYS:tl} \
#		GO386=${GO386} GOARM=${GOARM} CGO_ENABLED=1 \
#		${SH} make.bash -v
	${RM} -r ${WRKSRC}/pkg/obj \
	    ${WRKSRC}/pkg/bootstrap \
	    ${WRKSRC}/pkg/${OPSYS:tl}_${GOARCH}/cmd

do-install:
	cd ${WRKSRC} && \
	    ${RM} -r .gitattributes .gitignore .github favicon.ico robots.txt \
	    pkg/obj pkg/bootstrap pkg/${OPSYS:tl}_${GOARCH_${ARCH}}/cmd

	${CP} -a ${WRKSRC} ${STAGEDIR}${PREFIX}/lib
.for f in go gofmt
	${LN} -sf ../lib/go/bin/${f} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/go/bin/*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/go/pkg/tool/*/*

.include <bsd.port.post.mk>
#EOF
