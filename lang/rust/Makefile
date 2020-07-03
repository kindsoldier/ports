# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/lang/rust/Makefile 520446 2019-12-19 16:14:48Z tobik $

PORTNAME=	rust
PORTVERSION=	1.44.1
CATEGORIES=	lang
MASTER_SITES+=	https://static.rust-lang.org/dist/:src
MASTER_SITES+=	https://static.rust-lang.org/dist/:rust_bootstrap
MASTER_SITES+=	LOCAL/tobik/rust:rust_bootstrap
MASTER_SITES+=	https://static.rust-lang.org/dist/:cargo_bootstrap
MASTER_SITES+=	LOCAL/tobik/rust:cargo_bootstrap
MASTER_SITES+=	https://releases.llvm.org/${COMPILER_RT_VERSION}/:compiler_rt
MASTER_SITES+=	https://github.com/llvm/llvm-project/releases/download/llvmorg-${COMPILER_RT_VERSION}/:compiler_rt

DISTNAME=	${PORTNAME}c-${PORTVERSION}-src

DISTFILES=	${NIGHTLY_SUBDIR}${DISTNAME}${EXTRACT_SUFX}:src
DISTFILES+=	${X_RUSTC_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:rust_bootstrap
DISTFILES+=	${X_RUST_STD_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:rust_bootstrap
DISTFILES+=	${X_CARGO_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:cargo_bootstrap
DISTFILES+=	${DISTFILES_${ARCH}}

DISTFILES_armv6=	compiler-rt-${COMPILER_RT_VERSION}.src.tar.xz:compiler_rt
DISTFILES_armv7=	compiler-rt-${COMPILER_RT_VERSION}.src.tar.xz:compiler_rt
DIST_SUBDIR=	rust
#EXTRACT_ONLY=	${DISTFILES:N*\:*bootstrap:C/:.*//}

MAINTAINER=	rust@FreeBSD.org
COMMENT=	Language with a focus on memory safety and concurrency

ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc64
ONLY_FOR_ARCHS_REASON=	requires prebuilt bootstrap compiler

BUILD_DEPENDS=	cmake:devel/cmake
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libgit2.so:devel/libgit2
LIB_DEPENDS+=	libssh2.so:net/libssh2


MAKE_ENV+=	LIBGIT2_SYS_USE_PKG_CONFIG=1 LIBSSH2_SYS_USE_PKG_CONFIG=1 \


USES=		pkgconfig python:3.3+,build ssl tar:xz

PLIST_FILES=	lib/rustlib/components lib/rustlib/rust-installer-version

# See WRKSRC/src/stage0.txt for the date and version values.
#BOOTSTRAPS_DATE?=		2019-11-07
#RUST_BOOTSTRAP_VERSION?=	1.39.0
#CARGO_BOOTSTRAP_VERSION?=	0.40.0
COMPILER_RT_VERSION?=		9.0.0

BOOTSTRAPS_DATE=		2020-05-07
RUST_BOOTSTRAP_VERSION=		1.43.1
CARGO_BOOTSTRAP_VERSION=	0.44.0


BOOTSTRAPS_SUFFIX=		${BOOTSTRAPS_SUFFIX_${ARCH}}
CARGO_VENDOR_DIR=		${WRKSRC}/vendor

# Rust's target arch string might be different from *BSD arch strings
X_RUST_ARCH_amd64=	x86_64
X_RUST_ARCH_i386=	i686
X_RUST_ARCH=	${ARCH:S/amd64/x86_64/:S/i386/i686/}
X_RUST_TARGET=		${X_RUST_ARCH_${ARCH}:U${ARCH}}-unknown-${OPSYS:tl}
X_LLVM_TARGET=		${ARCH:C/armv.*/ARM/:S/aarch64/AArch64/:S/powerpc64/PowerPC/}

X_RUSTC_BOOTSTRAP=	${BOOTSTRAPS_DATE}/rustc-${RUST_BOOTSTRAP_VERSION}-${X_RUST_TARGET}
X_RUST_STD_BOOTSTRAP=	${BOOTSTRAPS_DATE}/rust-std-${RUST_BOOTSTRAP_VERSION}-${X_RUST_TARGET}
X_CARGO_BOOTSTRAP=	${BOOTSTRAPS_DATE}/cargo-${CARGO_BOOTSTRAP_VERSION}-${X_RUST_TARGET}

X_RUST_TARGETS=		${_RUST_TARGET}


.include <bsd.port.pre.mk>

.if exists(${PATCHDIR}/${ARCH}${BOOTSTRAPS_SUFFIX})
EXTRA_PATCHES+=	${PATCHDIR}/${ARCH}${BOOTSTRAPS_SUFFIX}
.endif

MAKE_ENV+=	HOME="${WRKDIR}"
MAKE_ENV+=	LIBGIT2_SYS_USE_PKG_CONFIG=1
MAKE_ENV+=	LIBSSH2_SYS_USE_PKG_CONFIG=1
MAKE_ENV+=	OPENSSL_DIR="${OPENSSLBASE}"

BUILD_COMMAND=	${PYTHON_CMD} ${WRKSRC}/x.py

#post-extract:
#.if ${ARCH} == armv6 || ${ARCH} == armv7
#	${LN} -sf ${WRKDIR}/compiler-rt-${COMPILER_RT_VERSION}.src ${WRKSRC}/src/llvm-project/compiler-rt
#.endif

post-patch:
#	${REINPLACE_CMD} 's,gdb,${LOCALBASE}/bin/gdb,' ${WRKSRC}/src/etc/rust-gdb
#	${ECHO_MSG} "Canonical bootstrap date and version before patching:"
#	${GREP} -E '^(date|rustc|cargo)' ${WRKSRC}/src/stage0.txt
## If we override the versions and date of the bootstraps (for instance
## on aarch64 where we provide our own bootstraps), we need to update
## places where they are recorded.
#	${REINPLACE_CMD} -e 's,^date:.*,date: ${BOOTSTRAPS_DATE},' \
#		-e 's,^rustc:.*,rustc: ${RUST_BOOTSTRAP_VERSION},' \
#		-e 's,^cargo:.*,cargo: ${CARGO_BOOTSTRAP_VERSION},' \
#		${WRKSRC}/src/stage0.txt
#	${ECHO_MSG} "Bootstrap date and version after patching:"
#	${GREP} -E '^(date|rustc|cargo)' ${WRKSRC}/src/stage0.txt
# Disable vendor checksums
#	${REINPLACE_CMD} 's,"files":{[^}]*},"files":{},' ${CARGO_VENDOR_DIR}/*/.cargo-checksum.json


post-patch:
	${REINPLACE_CMD} 's,gdb,${LOCALBASE}/bin/gdb,' ${WRKSRC}/src/etc/rust-gdb
	${REINPLACE_CMD} 's,"files":{[^}]*},"files":{},' \
		${CARGO_VENDOR_DIR}/*/.cargo-checksum.json

#CCACHE_VALUE=	false
#
#do-configure:
#	${SED} -E \
#		-e 's,%PREFIX%,${PREFIX},' \
#		-e 's,%SYSCONFDIR%,${PREFIX}/etc,' \
#		-e 's,%MANDIR%,${MANPREFIX}/man,' \
#		-e 's,%PYTHON_CMD%,${PYTHON_CMD},' \
#		-e 's,%CHANNEL%,${PKGNAMESUFFIX:Ustable:S/^-//},' \
#		-e 's,%TARGET%,${X_RUST_TARGET},' \
#		-e 's,%CCACHE%,${CCACHE_VALUE},' \
#		-e 's,%CC%,${CC},' \
#		-e 's,%CXX%,${CXX},' \
#		-e 's,%DOCS%,false,' \
#		< ${FILESDIR}/config.toml > ${WRKSRC}/config.toml
#
# no need to build a crosscompiler for these targets
#.if ${ARCH} == aarch64 || ${ARCH} == armv6 || ${ARCH} == armv7 || ${ARCH} == powerpc64
#	${REINPLACE_CMD} -e 's,^#targets =.*,targets = "${X_LLVM_TARGET}",' \
#		-e 's,^#experimental-targets =.*,experimental-targets = "",' \
#		${WRKSRC}/config.toml
#.endif
#	${REINPLACE_CMD} -e 's,%CC%,${CC},g' \
#		${WRKSRC}/src/librustc_llvm/build.rs \
#		${WRKSRC}/src/bootstrap/native.rs

bootstrap:
	cd ${WRKDIR}/cargo-${CARGO_BOOTSTRAP_VERSION}-${X_RUST_ARCH}-unknown-${OPSYS:tl} && \
	    ${SH} install.sh --disable-ldconfig --prefix=${WRKDIR}/bootstrap --verbose
	cd ${WRKDIR}/rust-std-${RUST_BOOTSTRAP_VERSION}-${X_RUST_ARCH}-unknown-${OPSYS:tl} && \
	    ${SH} install.sh --disable-ldconfig --prefix=${WRKDIR}/bootstrap --verbose
	cd ${WRKDIR}/rustc-${RUST_BOOTSTRAP_VERSION}-${X_RUST_ARCH}-unknown-${OPSYS:tl} && \
	    ${SH} install.sh --disable-ldconfig --prefix=${WRKDIR}/bootstrap --verbose



do-configure:
# Check that the running kernel has COMPAT_FREEBSD11 required by lang/rust post-ino64
#	${SETENV} CC="${CC}" OPSYS="${OPSYS}" \
#		OSVERSION="${OSVERSION}" WRKDIR="${WRKDIR}" \
#		${SH} ${SCRIPTSDIR}/rust-compat11-canary.sh
.for component in cargo rust-std rustc
	cd ${WRKDIR}/${component}-*-${OPSYS:tl} && \
		${SH} install.sh --disable-ldconfig --prefix=${WRKDIR}/bootstrap \
		--verbose
.endfor
	${ECHO_CMD} '[build]' > ${WRKSRC}/config.toml
	${ECHO_CMD} 'vendor=true' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'extended=true' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'python="${PYTHON_CMD}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'docs=false' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'verbose=2' >> ${WRKSRC}/config.toml

	${ECHO_CMD} 'target=[${X_RUST_TARGETS:@.target.@"${.target.}"@:ts,}]' >> ${WRKSRC}/config.toml

	${ECHO_CMD} 'cargo="${WRKDIR}/bootstrap/bin/cargo"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'rustc="${WRKDIR}/bootstrap/bin/rustc"' >> ${WRKSRC}/config.toml

	${ECHO_CMD} '[install]' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'prefix="${PREFIX}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'sysconfdir="${PREFIX}/etc"' >> ${WRKSRC}/config.toml

	${ECHO_CMD} '[rust]' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'channel="stable"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'default-linker="${CC}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'verbose-tests=true' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'lld=false' >> ${WRKSRC}/config.toml
	${ECHO_CMD} '[llvm]' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'ccache=false' >> ${WRKSRC}/config.toml
#	${ECHO_CMD} 'ninja=true' >> ${WRKSRC}/config.toml

.for target in ${X_RUST_TARGETS}
	${ECHO_CMD} '[target.${target}]' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'ar="${AR}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'cc="${CC}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'cxx="${CXX}"' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'linker="${CC}"' >> ${WRKSRC}/config.toml
.endfor
	${ECHO_CMD} '[dist]' >> ${WRKSRC}/config.toml
	${ECHO_CMD} 'src-tarball=false' >> ${WRKSRC}/config.toml
	${REINPLACE_CMD} 's,%CC%,${CC},g' \
		${WRKSRC}/src/librustc_llvm/build.rs \
		${WRKSRC}/src/bootstrap/native.rs


do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} \
		${BUILD_COMMAND} build --verbose --config ./config.toml --jobs ${MAKE_JOBS_NUMBER}

do-install:
	cd ${WRKSRC} && \
	${SETENV} ${MAKE_ENV} DESTDIR=${STAGEDIR} \
		${BUILD_COMMAND} 'install' --verbose --config ./config.toml --jobs ${MAKE_JOBS_NUMBER}

post-install:
	${GZIP_CMD} ${STAGEDIR}${PREFIX}/share/man/man1/*.1
	${RM} ${STAGEDIR}${PREFIX}/lib/rustlib/etc/*.py
	cd ${STAGEDIR} && ${RM} -rf share/doc/rust/
	${RM} ${STAGEDIR}${PREFIX}/lib/rustlib/install.log
	${RM} ${STAGEDIR}${PREFIX}/lib/rustlib/manifest-*
	${RM} ${STAGEDIR}${PREFIX}/lib/rustlib/uninstall.sh

	${FIND} ${STAGEDIR}${PREFIX} -not -type d | \
		${SED} -E -e 's,^${STAGEDIR}${PREFIX}/,,' >> ${TMPPLIST}

.include <bsd.port.post.mk>
