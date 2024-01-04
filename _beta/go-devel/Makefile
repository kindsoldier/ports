# Created by: Devon H. O'Dell <devon.odell@gmail.com>
# $FreeBSD: head/lang/go-devel/Makefile 517703 2019-11-15 22:44:58Z dmgk $

PORTNAME=	go
PORTVERSION=	g20191113
CATEGORIES=	lang
MASTER_SITES=	https://github.com/dmgk/go-bootstrap/releases/download/${BOOTSTRAP_TAG}/:bootstrap \
		LOCAL/dmgk:bootstrap
PKGNAMESUFFIX=	-devel
DISTFILES=	go-${OPSYS:tl}-${GOARCH_${ARCH}}${GOARM_${ARCH}}-${BOOTSTRAP_TAG}.tar.xz:bootstrap

MAINTAINER=	dmgk@FreeBSD.org
COMMENT=	Go programming language (development version)

ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386

RUN_DEPENDS=	${RUN_DEPENDS_${ARCH}}
RUN_DEPENDS_aarch64=	binutils>0:devel/binutils

TEST_DEPENDS=	${TEST_DEPENDS_${ARCH}}
TEST_DEPENDS_aarch64=	binutils>0:devel/binutils

USES=		shebangfix tar:xz

USE_GITHUB=	yes
GH_ACCOUNT=	golang
GH_TAGNAME=	498eaee461

SHEBANG_FILES=	misc/wasm/go_js_wasm_exec src/net/http/cgi/testdata/test.cgi
SHEBANG_GLOB=	*.bash *.pl *.sh
SHEBANG_LANG=	sh
sh_OLD_CMD=	/bin/bash "/usr/bin/env bash"
sh_CMD=		${SH}

OPTIONS_DEFINE_i386=	GO387

GO387_DESC=	Do not generate code with SSE2 (for old x86 CPU)
GO387_VARS=	GO386=387

BINARIES=	go gofmt
BOOTSTRAP_TAG=	go1.13beta1-1224-g45b4ed7577

GOARCH_aarch64=	arm64
GOARCH_amd64=	amd64
GOARCH_armv6=	arm
GOARCH_armv7=	arm
GOARCH_i386=	386

GOARM_armv6=	6
GOARM_armv7=	7

post-patch:
	${REINPLACE_CMD} -e 's|^if ulimit -T|false \&\& &|' ${WRKSRC}/src/run.bash
	# Needed only for untagged releases
	${ECHO_CMD} "devel +${GH_TAGNAME}" > ${WRKSRC}/VERSION

do-build:
	cd ${WRKSRC}/src ; ${SETENV} \
		XDG_CACHE_HOME=${WRKDIR} \
		GOROOT_BOOTSTRAP=${WRKDIR}/go-${OPSYS:tl}-${GOARCH_${ARCH}}${GOARM_${ARCH}}-bootstrap \
		GOROOT=${WRKSRC} \
		GOROOT_FINAL=${PREFIX}/lib/go \
		GOBIN= \
		GOOS=${OPSYS:tl} \
		GOARCH=${GOARCH_${ARCH}} \
		GO386=${GO386} \
		GOARM=${GOARM_${ARCH}} \
		${SH} make.bash -v

do-install:
	cd ${WRKSRC} ; \
		${RM} -r .gitattributes .gitignore .github favicon.ico robots.txt \
		pkg/obj pkg/bootstrap pkg/${OPSYS:tl}_${GOARCH_${ARCH}}/cmd
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/go
	${CP} -a ${WRKSRC}/* ${STAGEDIR}${PREFIX}/lib/go
.for fil in ${BINARIES}
	${LN} -sf ../lib/go/bin/${file} ${STAGEDIR}${PREFIX}/bin/${file}
.endfor

do-test:
	cd ${WRKSRC}/src && ${SETENV} \
		GOROOT=${WRKSRC} \
		PATH=${WRKSRC}/bin:${PATH} \
		GOOS=${OPSYS:tl} \
		GOARCH=${GOARCH_${ARCH}} \
		GO386=${GO386} \
		GOARM=${GOARM_${ARCH}} \
		${SH} run.bash

.include <bsd.port.mk>
