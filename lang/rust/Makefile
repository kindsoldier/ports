# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/lang/rust/Makefile 520446 2019-12-19 16:14:48Z tobik $

PORTNAME=	rust
PORTVERSION=	1.40.0
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
DISTFILES+=	${_RUSTC_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:rust_bootstrap
DISTFILES+=	${_RUST_STD_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:rust_bootstrap
DISTFILES+=	${_CARGO_BOOTSTRAP}${BOOTSTRAPS_SUFFIX}${EXTRACT_SUFX}:cargo_bootstrap
DISTFILES+=	${DISTFILES_${ARCH}}

DISTFILES_armv6=	compiler-rt-${COMPILER_RT_VERSION}.src.tar.xz:compiler_rt
DISTFILES_armv7=	compiler-rt-${COMPILER_RT_VERSION}.src.tar.xz:compiler_rt
DIST_SUBDIR=	rust
EXTRACT_ONLY=	${DISTFILES:N*\:*bootstrap:C/:.*//}

MAINTAINER=	rust@FreeBSD.org
COMMENT=	Language with a focus on memory safety and concurrency

ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc64
ONLY_FOR_ARCHS_REASON=	requires prebuilt bootstrap compiler

BUILD_DEPENDS=	cmake:devel/cmake
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libgit2.so:devel/libgit2
LIB_DEPENDS+=	libssh2.so:net/libssh2

USES=		pkgconfig python:3.3+,build ssl tar:xz

PLIST_FILES=	lib/rustlib/components lib/rustlib/rust-installer-version

# See WRKSRC/src/stage0.txt for the date and version values.
BOOTSTRAPS_DATE?=		2019-11-07
RUST_BOOTSTRAP_VERSION?=	1.39.0
CARGO_BOOTSTRAP_VERSION?=	0.40.0
COMPILER_RT_VERSION?=		9.0.0

BOOTSTRAPS_SUFFIX=		${BOOTSTRAPS_SUFFIX_${ARCH}}
CARGO_VENDOR_DIR=		${WRKSRC}/vendor

# Rust's target arch string might be different from *BSD arch strings
_RUST_ARCH_amd64=	x86_64
_RUST_ARCH_i386=	i686
_RUST_TARGET=		${_RUST_ARCH_${ARCH}:U${ARCH}}-unknown-${OPSYS:tl}
_LLVM_TARGET=		${ARCH:C/armv.*/ARM/:S/aarch64/AArch64/:S/powerpc64/PowerPC/}

_RUSTC_BOOTSTRAP=	${BOOTSTRAPS_DATE}/rustc-${RUST_BOOTSTRAP_VERSION}-${_RUST_TARGET}
_RUST_STD_BOOTSTRAP=	${BOOTSTRAPS_DATE}/rust-std-${RUST_BOOTSTRAP_VERSION}-${_RUST_TARGET}
_CARGO_BOOTSTRAP=	${BOOTSTRAPS_DATE}/cargo-${CARGO_BOOTSTRAP_VERSION}-${_RUST_TARGET}

.include <bsd.port.pre.mk>

.if exists(${PATCHDIR}/${ARCH}${BOOTSTRAPS_SUFFIX})
EXTRA_PATCHES+=	${PATCHDIR}/${ARCH}${BOOTSTRAPS_SUFFIX}
.endif

X_PY_ENV+=	HOME="${WRKDIR}"
X_PY_ENV+=	LIBGIT2_SYS_USE_PKG_CONFIG=1
X_PY_ENV+=	LIBSSH2_SYS_USE_PKG_CONFIG=1
X_PY_ENV+=	OPENSSL_DIR="${OPENSSLBASE}"
X_PY_CMD=	${PYTHON_CMD} ${WRKSRC}/x.py

post-extract:
.if ${ARCH} == armv6 || ${ARCH} == armv7
	${LN} -sf ${WRKDIR}/compiler-rt-${COMPILER_RT_VERSION}.src ${WRKSRC}/src/llvm-project/compiler-rt
.endif

post-patch:
	${REINPLACE_CMD} 's,gdb,${LOCALBASE}/bin/gdb,' ${WRKSRC}/src/etc/rust-gdb
	${ECHO_MSG} "Canonical bootstrap date and version before patching:"
	${GREP} -E '^(date|rustc|cargo)' ${WRKSRC}/src/stage0.txt
# If we override the versions and date of the bootstraps (for instance
# on aarch64 where we provide our own bootstraps), we need to update
# places where they are recorded.
	${REINPLACE_CMD} -e 's,^date:.*,date: ${BOOTSTRAPS_DATE},' \
		-e 's,^rustc:.*,rustc: ${RUST_BOOTSTRAP_VERSION},' \
		-e 's,^cargo:.*,cargo: ${CARGO_BOOTSTRAP_VERSION},' \
		${WRKSRC}/src/stage0.txt
	${ECHO_MSG} "Bootstrap date and version after patching:"
	${GREP} -E '^(date|rustc|cargo)' ${WRKSRC}/src/stage0.txt
# Disable vendor checksums
	${REINPLACE_CMD} 's,"files":{[^}]*},"files":{},' ${CARGO_VENDOR_DIR}/*/.cargo-checksum.json

post-patch-SOURCES-off:
# Mimic tools in config.toml with just src excluded
	${REINPLACE_CMD} -e 's/config.tools.*"src".*/false;/' ${WRKSRC}/src/bootstrap/install.rs

CCACHE_VALUE=	false

do-configure:
	${SED} -E \
		-e 's,%PREFIX%,${PREFIX},' \
		-e 's,%SYSCONFDIR%,${PREFIX}/etc,' \
		-e 's,%MANDIR%,${MANPREFIX}/man,' \
		-e 's,%PYTHON_CMD%,${PYTHON_CMD},' \
		-e 's,%CHANNEL%,${PKGNAMESUFFIX:Ustable:S/^-//},' \
		-e 's,%TARGET%,${_RUST_TARGET},' \
		-e 's,%CCACHE%,${CCACHE_VALUE},' \
		-e 's,%CC%,${CC},' \
		-e 's,%CXX%,${CXX},' \
		-e 's,%DOCS%,false,' \
		< ${FILESDIR}/config.toml \
		> ${WRKSRC}/config.toml
# no need to build a crosscompiler for these targets
.if ${ARCH} == aarch64 || ${ARCH} == armv6 || ${ARCH} == armv7 || ${ARCH} == powerpc64
	${REINPLACE_CMD} -e 's,^#targets =.*,targets = "${_LLVM_TARGET}",' \
		-e 's,^#experimental-targets =.*,experimental-targets = "",' \
		${WRKSRC}/config.toml
.endif
	${REINPLACE_CMD} -e 's,%CC%,${CC},g' \
		${WRKSRC}/src/librustc_llvm/build.rs \
		${WRKSRC}/src/bootstrap/native.rs

do-build:
	cd ${WRKSRC} && ${SETENV} ${X_PY_ENV} \
		${X_PY_CMD} build --verbose --config ./config.toml --jobs ${MAKE_JOBS_NUMBER}

do-install:
	cd ${WRKSRC} && \
	${SETENV} ${X_PY_ENV} \
		DESTDIR=${STAGEDIR} \
	${X_PY_CMD} 'install' --verbose --config ./config.toml --jobs ${MAKE_JOBS_NUMBER}

# In post-install, we use the manifests generated during Rust install
# to in turn generate the PLIST. We do that, instead of the regular
# `pkg-plist`, because several libraries have a computed filename based
# on the absolute path of the source files. As it is user-specific, we
# can't know their filename in advance.
#
# Both rustc and Cargo components install the same README.md and LICENSE
# files. The install process backs up the first copy to install the
# second. Thus here, we need to remove those backups. We also need to
# dedup the entries in the generated PLIST, because both components'
# manifests list them.
#
# We fix manpage entries in the generated manifests because Rust
# installs them uncompressed but the Ports framework compresses them.
post-install:
	for f in ${STAGEDIR}${PREFIX}/lib/rustlib/manifest-*; do \
	    ${REINPLACE_CMD} -i '' -E \
	        -e 's|:${STAGEDIR}|:|' \
	        -e 's|(man/man[1-9]/.*\.[0-9])|\1.gz|' \
	        "$$f"; \
	    ${ECHO_CMD} "$${f#${STAGEDIR}}" >> ${TMPPLIST}; \
	    ${AWK} '\
	        /^file:/ { \
	            file=$$0; \
	            sub(/^file:/, "", file); \
	            print file; \
	        } \
	        /^dir:/ { \
	            dir=$$0; \
	            sub(/^dir:/, "", dir); \
	            system("find ${STAGEDIR}" dir " -type f | ${SED} -E -e \"s|${STAGEDIR}||\""); \
	        }' \
	        "$$f" >> ${TMPPLIST}; \
	done
	${RM} -r ${STAGEDIR}${PREFIX}/share/doc/rust/*.old
	${SORT} -u < ${TMPPLIST} > ${TMPPLIST}.uniq
	${MV} ${TMPPLIST}.uniq ${TMPPLIST}
	${RM} \
	    ${STAGEDIR}${PREFIX}/lib/rustlib/install.log \
	    ${STAGEDIR}${PREFIX}/lib/rustlib/uninstall.sh
# FIXME: Static libraries in lib/rustlib/*/lib/*.rlib are not stripped,
# but they contain non-object files which make strip(1) unhappy.
	@${FIND} ${STAGEDIR}${PREFIX}/bin -exec ${FILE} -i {} + | ${AWK} -F: \
		'/executable|sharedlib/ { print $$1 }' | ${XARGS} ${STRIP_CMD}

.include <bsd.port.post.mk>
