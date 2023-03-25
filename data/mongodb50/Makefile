PORTNAME=	mongodb
DISTVERSIONPREFIX=	r
DISTVERSION=	5.0.14
CATEGORIES=	databases net
MASTER_SITES=	https://fastdl.mongodb.org/src/ \
		http://fastdl.mongodb.org/src/
PKGNAMESUFFIX=	${DISTVERSION:R:S/.//}
DISTNAME=	mongodb-src-${DISTVERSIONPREFIX}${DISTVERSION}

MAINTAINER=	ronald@FreeBSD.org
COMMENT=	Distributed document-oriented "NoSQL" database (5.0.x Branch)
WWW=		https://docs.mongodb.com/v5.0/

ONLY_FOR_ARCHS=	aarch64 amd64 powerpc64le
ONLY_FOR_ARCHS_REASON=	only ported to amd64, aarch64, and powerpc64le on FreeBSD; upstream supports arm64, ppc64le, s390x, and x86-64

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cheetah3>0:python/py-cheetah3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:python/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.11:python/py-yaml@${PY_FLAVOR}

LIB_DEPENDS=	libcurl.so:net/libcurl \
		libicuuc.so:devel/libicu \
		libpcre.so:text/libpcre \
		libsnappy.so:arch/libsnappy \
		libstemmer.so:text/libsnowballstemmer \
		libunwind.so:devel/libunwind \
		libyaml-cpp.so:text/libyaml-cpp \
		libzstd.so:arch/libzstd


USES=		compiler:c++17-lang cpe python:3.5+,build scons shebangfix
USE_RC_SUBR=	mongod

SHEBANG_FILES=	buildscripts/scons.py
python_OLD_CMD=	@python_interpreter@

MAKE_ARGS=	--cxx-std=17 \
		--disable-warnings-as-errors \
		--libc++ \
		--runtime-hardening=on \
		--use-system-libunwind \
		--use-system-pcre \
		--use-system-snappy \
		--use-system-stemmer \
		--use-system-yaml \
		--use-system-zlib \
		--use-system-zstd \
		-j ${MAKE_JOBS_NUMBER} \
		AR=llvm-ar \
		VERBOSE=on


.include <bsd.port.pre.mk>

.if ${ARCH} == aarch64 || ${ARCH} == powerpc64le
EXTRA_PATCHES=	${FILESDIR}/${ARCH}
.endif

ALL_TARGET=	install-core

# This ports is only following the Major Release.
# https://docs.mongodb.com/manual/reference/versioning/
PORTSCOUT=	limit:^5\.0\.

USE_RC_SUBR=	mongod

MONGO_OWNER=	mongodb
MONGO_OWNER_ID=	922
MONGO_GROUP=	mongodb
MONGO_GROUP_ID=	922

SUB_LIST+= MONGO_OWNER=${MONGO_OWNER}
SUB_LIST+= MONGO_GROUP=${MONGO_GROUP}
SUB_LIST+= MONGO_OWNER_ID=${MONGO_OWNER_ID}
SUB_LIST+= MONGO_GROUP_ID=${MONGO_GROUP_ID}

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

SUB_FILES= pkg-install pkg-deinstall


pre-patch:
	${MV} ${WRKSRC}/src/third_party/wiredtiger/src/checksum/power8/crc32.sx \
	    ${WRKSRC}/src/third_party/wiredtiger/src/checksum/power8/crc32.S


post-patch:
	${RM} -rf ${WRKSRC}/src/third_party/pcre-*
	${RM} -rf ${WRKSRC}/src/third_party/snappy-*
	${RM} -rf ${WRKSRC}/src/third_party/unwind
	${RM} -rf ${WRKSRC}/src/third_party/yaml-cpp
	${RM} -rf ${WRKSRC}/src/third_party/zlib-*
	${RM} -rf ${WRKSRC}/src/third_party/zstandard-*

do-build:
	${WRKSRC}/buildscripts/scons.py	-C ${WRKSRC} ${MAKE_ARGS}

do-install:
.for f in mongo mongod mongos
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/rpm/mongod.conf ${STAGEDIR}${EXAMPLESDIR}/mongodb.conf.sample
	${RM} ${STAGEDIR}${PREFIX}/bin/resmoke.py

.include <bsd.port.post.mk>
