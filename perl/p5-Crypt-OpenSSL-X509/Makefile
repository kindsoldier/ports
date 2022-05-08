# Created by: kftseng@iyard.org
# $FreeBSD: head/security/p5-Crypt-OpenSSL-X509/Makefile 427552 2016-12-02 11:58:21Z mat $

PORTNAME=	Crypt-OpenSSL-X509
PORTVERSION=	1.913
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
#DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL X509 API

USES=		perl5
USE_PERL5=	configure
#MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/OpenSSL/X509/X509.so

.include <bsd.port.mk>
#EOF
