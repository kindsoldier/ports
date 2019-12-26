# Created by: Dirk Froemberg <dirk@FreeBSD.org>
# $FreeBSD: head/security/openssl/Makefile 520514 2019-12-20 15:06:52Z brnrd $

PORTNAME=	openssl
PORTVERSION=	1.0.2u
CATEGORIES=	security devel
MASTER_SITES=	http://www.openssl.org/source/ \
		ftp://ftp.cert.dfn.de/pub/tools/net/openssl/source/
DIST_SUBDIR=	${PORTNAME}-${DISTVERSION:C/[a-z]$//}
PKGNAMESUFFIX=	10

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	SSL and crypto library

CFLAGS+= -Werror -Qunused-arguments

CONFIGURE_ARGS+= no-gmp 
CONFIGURE_ARGS+= no-asm 
CONFIGURE_ARGS+= enable-ec_nistp_64_gcc_128 
CONFIGURE_ARGS+= enable-md2 
CONFIGURE_ARGS+= no-padlock 
CONFIGURE_ARGS+= enable-rc5 
CONFIGURE_ARGS+= enable-rfc3779 
CONFIGURE_ARGS+= sctp 
CONFIGURE_ARGS+= shared 
CONFIGURE_ARGS+= enable-ssl2 
CONFIGURE_ARGS+= enable-ssl3 
CONFIGURE_ARGS+= threads 
CONFIGURE_ARGS+= zlib 
CONFIGURE_ARGS+= zlib-dynamic

post-patch:
	${REINPLACE_CMD} -e 's|m4 -B 8192|m4|g' \
		${WRKSRC}/crypto/des/Makefile
	${REINPLACE_CMD} -e 's|SHLIB_VERSION_NUMBER "1.0.0"|SHLIB_VERSION_NUMBER "${OPENSSL_SHLIBVER}"|' \
		${WRKSRC}/crypto/opensslv.h
	${REINPLACE_CMD} -e 's|\^GNU ld|GNU|' ${WRKSRC}/Makefile.shared

#post-patch-MAN3-off:
#	${GREP} -L openssl_manual_section ${WRKSRC}/doc/crypto/*.pod | ${XARGS} ${RM}
#	${REINPLACE_CMD} -e 's|pod doc/ssl/\*\.pod|pod|' ${WRKSRC}/Makefile.org


PREFIX=${LOCALBASE}/openssl10
OPENSSLDIR= ${PREFIX}/etc/ssl

OPENSSL_SHLIBVER=10

do-configure:
	${REINPLACE_CMD} -e "s|options 386|options|" ${WRKSRC}/config
	cd ${WRKSRC} \
	&& ${SETENV} CC="${CC}" FREEBSDCC="${CC}" CFLAGS="${CFLAGS}" PERL="${PERL}" \
	./config --prefix=${PREFIX} --openssldir=${OPENSSLDIR}\
		--install_prefix=${STAGEDIR} \
		-L${PREFIX}/lib ${CONFIGURE_ARGS}

post-configure:
	${REINPLACE_CMD} \
		-e 's|^MANDIR=.*$$|MANDIR=$$(PREFIX)/man|' \
		-e 's|LIBVERSION=[^ ]* |LIBVERSION=${OPENSSL_SHLIBVER} |' \
		${WRKSRC}/Makefile

post-install:
	${INSTALL} ${WRKSRC}/libssl.so.10 ${STAGEDIR}${PREFIX}/lib/
	${INSTALL} ${WRKSRC}/libcrypto.so.10 ${STAGEDIR}${PREFIX}/lib/

#post-install-SHARED-on:
#	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/openssl \
#	${STAGEDIR}${PREFIX}/lib/lib*.so.${OPENSSL_SHLIBVER} \
#	${STAGEDIR}${PREFIX}/lib/engines/lib*.so

#post-install-DOCS-on:
#	${MKDIR} ${STAGEDIR}${DOCSDIR}
#	${INSTALL_DATA} ${WRKSRC}/doc/openssl.txt ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
