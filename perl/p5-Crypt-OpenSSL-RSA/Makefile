# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: head/security/p5-Crypt-OpenSSL-RSA/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	Crypt-OpenSSL-RSA
PORTVERSION=	0.30 #28
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to RSA encode and decode strings using OpenSSL

BUILD_DEPENDS+= p5-Crypt-OpenSSL-Guess>=0.11:perl/p5-Crypt-OpenSSL-Guess
BUILD_DEPENDS+=	p5-Crypt-OpenSSL-Bignum>=0:perl/p5-Crypt-OpenSSL-Bignum
BUILD_DEPENDS+=	p5-Crypt-OpenSSL-Random>=0:perl/p5-Crypt-OpenSSL-Random
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAKE_ARGS=	PASTHRU_INC=-I${OPENSSLINC}

regression-test: build
	cd ${WRKSRC}/ && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_ARGS} test

.include <bsd.port.mk>
