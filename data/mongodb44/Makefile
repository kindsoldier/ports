PORTNAME=	mongodb
DISTVERSIONPREFIX=	r
DISTVERSION=	4.4.18
CATEGORIES=	databases net
MASTER_SITES=	https://fastdl.mongodb.org/src/ \
		http://fastdl.mongodb.org/src/
PKGNAMESUFFIX=	${DISTVERSION:R:S/.//}
DISTNAME=	mongodb-src-${DISTVERSIONPREFIX}${DISTVERSION}

MAINTAINER=	ronald@FreeBSD.org
COMMENT=	Distributed document-oriented "NoSQL" database (4.4.x Branch)
WWW=		https://docs.mongodb.com/v4.4/

ONLY_FOR_ARCHS=	aarch64 amd64 powerpc64le
ONLY_FOR_ARCHS_REASON=	only ported to amd64, aarch64, and powerpc64le on FreeBSD; upstream supports arm64, ppc64le, s390x, and x86-64

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cheetah3>0:python/py-cheetah3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.11:python/py-yaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:python/py-psutil@${PY_FLAVOR}
LIB_DEPENDS=	libpcre.so:text/libpcre \
		libcurl.so:net/libcurl \
		libsnappy.so:arch/libsnappy

USES=		compiler:c++17-lang cpe python:3.5+,build scons
USE_RC_SUBR=	mongod

PORTSCOUT=	limit:^4\.4\.

MAKE_ARGS=	--use-system-zlib \
		--use-system-pcre \
		--use-system-snappy \
		--libc++ \
		--cxx-std=17 \
		--runtime-hardening=on \
		-j ${MAKE_JOBS_NUMBER} \
		--disable-warnings-as-errors \
		VERBOSE=on \
		AR=llvm-ar


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


.include <bsd.port.pre.mk>

.if ${ARCH} == aarch64 || ${ARCH} == powerpc64le
EXTRA_PATCHES=	${FILESDIR}/${ARCH}
.endif

ALL_TARGET=	install-core

pre-patch:
	${MV} ${WRKSRC}/src/third_party/wiredtiger/src/checksum/power8/crc32.sx \
	    ${WRKSRC}/src/third_party/wiredtiger/src/checksum/power8/crc32.S

do-install:
.for f in mongo mongod mongos
	${INSTALL_PROGRAM} ${WRKSRC}/build/install${PREFIX}/bin/${f} ${STAGEDIR}${PREFIX}/bin
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/rpm/mongod.conf ${STAGEDIR}${EXAMPLESDIR}/mongodb.conf.sample

.include <bsd.port.post.mk>
