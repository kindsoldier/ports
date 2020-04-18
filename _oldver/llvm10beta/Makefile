# $FreeBSD: head/devel/llvm80/Makefile 499184 2019-04-17 16:20:06Z brooks $

PORTNAME=	llvm
PORTVERSION=	${LLVM_MAJOR}.0.${SNAPDATE}
CATEGORIES=	devel lang

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	LLVM and Clang

USE_GITHUB=	yes
GH_PROJECT=	llvm-project
GH_ACCOUNT=	llvm
GH_TAGNAME=	${LLVM_PROJECT_COMMIT}
LLVM_MAJOR=	10
LLVM_RELEASE=	${LLVM_MAJOR}.0.0
SNAPDATE=	20200103
LLVM_PROJECT_COMMIT=		add743b4348095c0d2e407c7a2b8a87a5f8194b0

USES=		cmake gmake compiler:c++11-lib perl5 tar:xz shebangfix python:3.6,build

SHEBANG_FILES=	llvm/utils/lit/lit.py \
		llvm/utils/llvm-lit/llvm-lit.in \
		llvm/tools/opt-viewer/optrecord.py \
		llvm/tools/opt-viewer/opt-diff.py \
		llvm/tools/opt-viewer/opt-stats.py \
		llvm/tools/opt-viewer/opt-viewer.py


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

LLVM_ENABLE_PROJECTS+=	clang
LLVM_ENABLE_PROJECTS+=	compiler-rt
LLVM_ENABLE_PROJECTS+=	lld

CMAKE_ARGS+=	-DLLVM_ENABLE_PROJECTS="${LLVM_ENABLE_PROJECTS:ts;}"

WRKSRC= ${WRKDIR}/llvm-project-${LLVM_PROJECT_COMMIT}
CMAKE_SOURCE_PATH=	${WRKSRC}/llvm

.include <bsd.port.mk>
