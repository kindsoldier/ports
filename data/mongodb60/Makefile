PORTNAME=	mongodb
DISTVERSIONPREFIX=	r
DISTVERSION=	6.0.4
CATEGORIES=	databases net
PKGNAMESUFFIX=	${DISTVERSION:R:S/.//}

PATCH_SITES=	https://github.com/mongodb/mongo/commit/
PATCHFILES=	c419698b577f7924d2d6fc6bd3f7bd922f1d0dd7.patch:-p1

MAINTAINER=	ronald@FreeBSD.org
COMMENT=	Distributed document-oriented "NoSQL" database (6.0.x Branch)
WWW=		https://docs.mongodb.com/v6.0/

ONLY_FOR_ARCHS=	aarch64 amd64 powerpc64le
ONLY_FOR_ARCHS_REASON=	only ported to amd64, aarch64, and powerpc64le on FreeBSD; upstream supports arm64, ppc64le, s390x, and x86-64

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cheetah3>0:python/py-cheetah3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>0:python/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:python/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pymongo>0:python/py-pymongo@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.11:python/py-yaml@${PY_FLAVOR}

# build depends used while running ${WRKSRC}/src/third_party/mozjs/gen-config.sh
BUILD_DEPENDS+=	autoconf213:devel/autoconf213 gsed:text/gsed

LIB_DEPENDS=	libcurl.so:net/libcurl \
		libicuuc.so:devel/libicu \
		libpcre.so:text/libpcre \
		libsnappy.so:arch/libsnappy \
		libstemmer.so:text/libsnowballstemmer \
		libunwind.so:devel/libunwind \
		libyaml-cpp.so:text/libyaml-cpp \
		libzstd.so:arch/libzstd

USES=		compiler:c++17-lang cpe python:build scons shebangfix
# gmake is used while running ${WRKSRC}/src/third_party/mozjs/gen-config.sh
USES+=		gmake pkgconfig

# mozjs tag comes from ${WRKSRC}/src/third_party/mozjs/get-sources.sh
MOZJS_TAG=	82aac6af18abcd5bf188afbc821779ccb0ca0902

USE_GITHUB=	yes
GH_ACCOUNT=	mongodb mongodb-forks:mozjs
GH_PROJECT=	mongo spidermonkey:mozjs
GH_TAGNAME=	${MOZJS_TAG}:mozjs
USE_RC_SUBR=	mongod

SHEBANG_FILES=	buildscripts/scons.py
python_OLD_CMD=	@python_interpreter@

CFLAGS=-O
CXXFLAGS=-O

MAKE_ARGS=	--cxx-std=17 \
		--libc++ \
		--disable-warnings-as-errors \
		--use-system-icu \
		--use-system-libunwind \
		--use-system-pcre \
		--use-system-snappy \
		--use-system-stemmer \
		--use-system-yaml \
		--use-system-zlib \
		--use-system-zstd \
		-j${MAKE_JOBS_NUMBER} \
		MONGO_VERSION=${DISTVERSION} \
		AR=gar \
		VERBOSE=on


#MAKE_ARGS+=	--experimental-optimization="-sandybridge"
#MAKE_ARGS+=	--opt=off
#MAKE_ARGS+=	--lto=off
#MAKE_ARGS+=	--ssl

.include <bsd.port.pre.mk>

.if ${OSREL} == "12.3"
IGNORE=		does not compile on 12.3, libc++ too old
.endif

ALL_TARGET=	install-devcore #install-all

# This ports is only following the Major Release.
# https://docs.mongodb.com/manual/reference/versioning/
PORTSCOUT=	limit:^6\.0\.

CPE_PRODUCT=	mongodb

.if ${ARCH} == amd64
MOZJS_ARCH=	x86_64
.elif ${ARCH} == powerpc64le
MOZJS_ARCH=	ppc64le
.elif ${ARCH} == aarch64
MOZJS_ARCH=	${ARCH}
.endif

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

post-patch:
	${RM} -rf ${WRKSRC}/src/third_party/icu4c-*
	${RM} -rf ${WRKSRC}/src/third_party/pcre-*
	${RM} -rf ${WRKSRC}/src/third_party/snappy-*
	${RM} -rf ${WRKSRC}/src/third_party/libstemmer_c
	${RM} -rf ${WRKSRC}/src/third_party/unwind
	${RM} -rf ${WRKSRC}/src/third_party/yaml-cpp
	${RM} -rf ${WRKSRC}/src/third_party/zlib-*
	${RM} -rf ${WRKSRC}/src/third_party/zstandard

do-configure:
# Replacement of ${WRKSRC}/src/third_party/mozjs/get-sources.sh
	${LN} -sF ${WRKDIR}/spidermonkey-${MOZJS_TAG} ${WRKSRC}/src/third_party/mozjs/mozilla-release
	cd ${WRKSRC}/src/third_party/mozjs/mozilla-release/js/src && ${LOCALBASE}/bin/autoconf213
	cd ${WRKSRC}/src/third_party/mozjs && PYTHON3="${PYTHON_CMD}" ${SH} ./gen-config.sh ${MOZJS_ARCH} freebsd

do-build:
	${WRKSRC}/buildscripts/scons.py	-C ${WRKSRC} ${MAKE_ARGS}

do-install:
.for f in mongod mongos
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/rpm/mongod.conf ${STAGEDIR}${EXAMPLESDIR}/mongodb.conf.sample
	${RM} ${STAGEDIR}${PREFIX}/bin/resmoke.py

.include <bsd.port.post.mk>
