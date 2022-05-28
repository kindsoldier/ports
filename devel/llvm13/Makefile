# $FreeBSD: head/devel/llvm80/Makefile 499184 2019-04-17 16:20:06Z brooks $

PORTNAME=	llvm
DISTVERSION=	13.0.1
CATEGORIES=	devel lang
#MASTER_SITES=	http://${PRE_}releases.llvm.org/${LLVM_RELEASE}/${RCDIR}
#DISTNAME=	${PORTNAME}-${DISTVERSION}.src
#DISTFILES=	${PORTNAME}-${DISTVERSION}.src${EXTRACT_SUFX}


MASTER_SITES=   https://github.com/llvm/llvm-project/releases/download/llvmorg-${DISTVERSION:S/rc/-rc/}/ \
                https://${PRE_}releases.llvm.org/${LLVM_RELEASE}/${RCDIR}
PKGNAMESUFFIX=  ${LLVM_SUFFIX}
DISTNAME=       llvm-project-${DISTVERSION}.src
DISTFILES=      llvm-project-${DISTVERSION}.src${EXTRACT_SUFX}


MAINTAINER=	brooks@FreeBSD.org
COMMENT=	LLVM and Clang

LLVM_RELEASE=	${DISTVERSION:C/rc.*//}
RCDIR=		${DISTVERSION:S/${LLVM_RELEASE}//:C|(rc.*)|\1/|}
PRE_=		${DISTVERSION:C/.*rc.*/pre/:N*[0-9]*}

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}
DATADIR=	${PREFIX}/share/${PORTNAME}

USES=		cmake compiler:c++11-lib perl5 tar:xz shebangfix python:3.6,build

SHEBANG_FILES=  \
                clang-tools-extra/clang-include-fixer/find-all-symbols/tool/run-find-all-symbols.py \
                clang-tools-extra/clang-tidy/tool/clang-tidy-diff.py \
                clang-tools-extra/clang-tidy/tool/run-clang-tidy.py \
                clang/tools/clang-format/clang-format-diff.py \
                clang/tools/clang-format/git-clang-format \
                clang/tools/scan-build-py/bin/analyze-build \
                clang/tools/scan-build-py/bin/intercept-build \
                clang/tools/scan-build-py/bin/scan-build \
                clang/tools/scan-build-py/libexec/analyze-cc \
                clang/tools/scan-build-py/libexec/analyze-c++ \
                clang/tools/scan-build-py/libexec/intercept-cc \
                clang/tools/scan-build-py/libexec/intercept-c++ \
                clang/tools/scan-view/bin/scan-view \
                clang/utils/hmaptool/hmaptool \
                llvm/tools/opt-viewer/opt-diff.py \
                llvm/tools/opt-viewer/opt-stats.py \
                llvm/tools/opt-viewer/opt-viewer.py \
                llvm/tools/opt-viewer/optrecord.py \
                llvm/utils/lit/lit.py \
                llvm/utils/llvm-lit/llvm-lit.in


CMAKE_ARGS=	-DLLVM_ENABLE_PROJECTS="clang;libcxx"
CMAKE_ARGS+=	-DLLVM_BUILD_LLVM_DYLIB=ON 
CMAKE_ARGS+=	-DLLVM_LINK_LLVM_DYLIB=ON
CMAKE_ARGS+=	-DLLVM_ENABLE_RTTI=ON
CMAKE_ARGS+=	-DLLVM_DEFAULT_TARGET_TRIPLE=${CONFIGURE_TARGET}
CMAKE_ARGS+=	-DLLVM_HOST_TRIPLE=${CONFIGURE_TARGET}
CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR:PATH="man"
CMAKE_ARGS+=	-DLLVM_PARALLEL_LINK_JOBS=1
CMAKE_ARGS+=	-DLLVM_ENABLE_Z3_SOLVER=OFF
CFLAGS+=	-DNDEBUG
CXXFLAGS+=	-DNDEBUG

CMAKE_SOURCE_PATH=      ${WRKSRC}/llvm

.include <bsd.port.options.mk>

CONFIGURE_TARGET:=${ARCH:C/amd64/x86_64/:C/arm64/aarch64/}-pc-${OPSYS:tl}${OSREL}${TARGET_ABI}

.include <bsd.port.mk>
