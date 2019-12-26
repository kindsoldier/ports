# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-Primes/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-Primes
PORTVERSION=	0.50
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provable Prime Number Generator suitable for Cryptographic Applications

BUILD_DEPENDS+=	p5-Crypt-Random>=0:perl/p5-Crypt-Random
BUILD_DEPENDS+=	p5-Math-Pari>=0:perl/p5-Math-Pari
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
