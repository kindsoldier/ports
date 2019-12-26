# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-OpenSSL-ECDSA/Makefile 427389 2016-11-29 18:46:21Z mat $

PORTNAME=	Crypt-OpenSSL-ECDSA
PORTVERSION=	0.08
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL ECDSA

BUILD_DEPENDS=	p5-Crypt-OpenSSL-EC>=0.05:perl/p5-Crypt-OpenSSL-EC
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	5.18+ configure
CFLAGS+=	-I${OPENSSLINC}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/OpenSSL/ECDSA/ECDSA.so

.include <bsd.port.mk>
#EOF

