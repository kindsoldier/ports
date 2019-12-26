# Created by: Simon Barner <barner@gmx.de>
# $FreeBSD: head/devel/valgrind/Makefile 493761 2019-02-24 13:56:44Z novel $

PORTNAME=	valgrind
PORTVERSION=	3.10.1.20160113
DISTVERSIONPREFIX=	freebsd-
CATEGORIES=	devel
MASTER_SITES+=	https://bitbucket.org/${BB_ACCOUNT}/${BB_PROJECT}/get/${BB_COMMIT}.tar.gz?dummy=/
MASTER_SITES+=	http://mirror.shatow.net/freebsd/${PORTNAME}/

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Memory debugging and profiling tool

BB_COMMIT=	ce1acb28953f
BB_ACCOUNT=	stass
BB_PROJECT=	valgrind-freebsd

ONLY_FOR_ARCHS=	i386 amd64

BUILD_DEPENDS=    docbook-xsl>=0:text/docbook-xsl xsltproc:text/libxslt

USES=		pathfix pkgconfig gmake perl5 shebangfix autoreconf
USE_PERL5=	build
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
SHEBANG_FILES=	callgrind/callgrind_annotate.in callgrind/callgrind_control.in


EXTRA_PATCHES+=	${FILESDIR}/accept4_syscall.patch:-p1
EXTRA_PATCHES+=	${FILESDIR}/jail_syscalls.patch:-p1
EXTRA_PATCHES+=	${FILESDIR}/kldload_syscalls.patch:-p1
EXTRA_PATCHES+=	${FILESDIR}/missing_fcntls.patch:-p1

WRKSRC=		${WRKDIR}/${BB_ACCOUNT}-${BB_PROJECT}-${BB_COMMIT}

CONFIGURE_ENV+=	ac_cv_path_PERL=${PERL}

PLIST=	${PKGDIR}/pkg-plist.${ARCH}


.include <bsd.port.options.mk>

.if ${OSVERSION} > 1200030
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-ino64:-p1
.endif

.if ${ARCH} == "amd64"
CONFIGURE_ARGS+= --enable-only64bit
.endif

post-build:
	cd ${WRKSRC}/docs && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} man-pages

.include <bsd.port.mk>
