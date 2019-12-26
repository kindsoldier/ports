# $FreeBSD: head/net-im/purple-facebook/Makefile 462014 2018-02-16 13:46:32Z swills $

PORTNAME=	rust
PORTVERSION=	1.35.0
CATEGORIES=	devel
#DISTFILES=	${PORTNAME}-${PORTVERSION}.txz
#MASTER_SITES=   https://pkg.freebsd.org/FreeBSD:11:amd64/latest/All/
#PKGNAMESUFFIX=  -bin

MASTER_SITES=   https://static.rust-lang.org/dist/
DISTFILES=      ${PORTNAME}-${PORTVERSION}-x86_64-unknown-freebsd.tar.gz

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Rust compiler

NO_BUILD=       yes

WRKSRC=         ${WRKDIR}/${PORTNAME}-${PORTVERSION}-x86_64-unknown-freebsd

do-install:
#	cd  ${WRKSRC} && ${FIND} usr/local/bin | ${CPIO} -pvd ${STAGEDIR}
#	cd  ${WRKSRC} && ${FIND} usr/local/lib | ${CPIO} -pvd ${STAGEDIR}
#	cd  ${WRKSRC} && ${FIND} usr/local/man | ${CPIO} -pvd ${STAGEDIR}
	cd  ${WRKSRC} && bash ./install.sh --verbose --prefix=${STAGEDIR}/${PREFIX}
	${MKDIR} ${STAGEDIR}/${PREFIX}/man/man1
	${MV} ${STAGEDIR}/${PREFIX}/share/man/man1/* ${STAGEDIR}/${PREFIX}/man/man1/
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/libmap.d/
	${ECHO} "libgit2.so.28   libgit2.so.0" > ${STAGEDIR}/${PREFIX}/etc/libmap.d/rust
	${ECHO} "libcurl.so.4    libcurl.so.7" >> ${STAGEDIR}/${PREFIX}/etc/libmap.d/rust


.include <bsd.port.mk>
#EOF
