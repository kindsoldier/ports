# $FreeBSD: head/devel/llvm80/Makefile 499184 2019-04-17 16:20:06Z brooks $

PORTNAME=	llvm
DISTVERSION=	9.0.0
CATEGORIES=	devel lang
MASTER_SITES=	http://${PRE_}releases.llvm.org/${LLVM_RELEASE}/${RCDIR}
#PKGNAMESUFFIX=	${LLVM_SUFFIX}
DISTNAME=	${PORTNAME}-${DISTVERSION}.src
DISTFILES=	${PORTNAME}-${DISTVERSION}.src${EXTRACT_SUFX}

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	LLVM and Clang

LLVM_RELEASE=	${DISTVERSION:C/rc.*//}
RCDIR=		${DISTVERSION:S/${LLVM_RELEASE}//:C|(rc.*)|\1/|}
PRE_=		${DISTVERSION:C/.*rc.*/pre/:N*[0-9]*}

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}
DATADIR=	${PREFIX}/share/${PORTNAME}

USES=		cmake compiler:c++11-lib perl5 tar:xz shebangfix python:2.7,build

SHEBANG_FILES=	utils/lit/lit.py utils/llvm-lit/llvm-lit.in \
		tools/opt-viewer/optrecord.py \
		tools/opt-viewer/opt-diff.py \
		tools/opt-viewer/opt-stats.py \
		tools/opt-viewer/opt-viewer.py

CMAKE_ARGS=	-DLLVM_BUILD_LLVM_DYLIB=ON 
CMAKE_ARGS=	-DLLVM_LINK_LLVM_DYLIB=ON
CMAKE_ARGS+=	-DLLVM_ENABLE_RTTI=ON
CMAKE_ARGS+=	-DLLVM_DEFAULT_TARGET_TRIPLE=${CONFIGURE_TARGET}
CMAKE_ARGS+=	-DLLVM_HOST_TRIPLE=${CONFIGURE_TARGET}
CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR:PATH="man"
CMAKE_ARGS+=	-DLLVM_PARALLEL_LINK_JOBS=1

CFLAGS+=	-DNDEBUG
CXXFLAGS+=	-DNDEBUG

.include <bsd.port.options.mk>

CONFIGURE_TARGET:=${ARCH:C/amd64/x86_64/:C/arm64/aarch64/}-pc-${OPSYS:tl}${OSREL}${TARGET_ABI}

DISTFILES+=	cfe-${DISTVERSION}.src${EXTRACT_SUFX}
#DISTFILES+=	clang-tools-extra-${DISTVERSION}.src${EXTRACT_SUFX}
DISTFILES+=	lld-${DISTVERSION}.src${EXTRACT_SUFX}

WRKSRC_CLANG= ${WRKDIR}/cfe-${PORTVERSION}.src
#WRKSRC_EXTRA= ${WRKDIR}/clang-tools-extra-${PORTVERSION}.src
WRKSRC_LLD=   ${WRKDIR}/lld-${PORTVERSION}.src

#NATIVE_BACKENDS=X86
#CMAKE_ARGS+=	-DLLVM_TARGETS_TO_BUILD="${NATIVE_BACKENDS}"

post-extract:
	${MV} ${WRKSRC_CLANG} ${PATCH_WRKSRC}/tools/clang
#	${MV} ${WRKSRC_EXTRA} ${PATCH_WRKSRC}/tools/clang/tools/extra
	${MV} ${WRKSRC_LLD} ${PATCH_WRKSRC}/tools/lld

.include <bsd.port.mk>
