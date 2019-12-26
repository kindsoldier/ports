# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-RSA/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-RSA
PORTVERSION=	1.99
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RSA public-key cryptosystem

RUN_DEPENDS+=	p5-Class-Loader>=2.00:perl/p5-Class-Loader
RUN_DEPENDS+=	p5-Convert-ASCII-Armour>=0:perl/p5-Convert-ASCII-Armour
RUN_DEPENDS+=	p5-Crypt-CBC>=0:perl/p5-Crypt-CBC
RUN_DEPENDS+=	p5-Crypt-Primes>=0.38:perl/p5-Crypt-Primes
RUN_DEPENDS+=	p5-Crypt-Random>=0.34:perl/p5-Crypt-Random
RUN_DEPENDS+=	p5-Data-Buffer>=0:perl/p5-Data-Buffer
RUN_DEPENDS+=	p5-Digest-MD2>=0:perl/p5-Digest-MD2
RUN_DEPENDS+=	p5-Digest-SHA1>=0:perl/p5-Digest-SHA1
RUN_DEPENDS+=	p5-Math-Pari>=2.001804:perl/p5-Math-Pari
RUN_DEPENDS+=	p5-Sort-Versions>=0:perl/p5-Sort-Versions
RUN_DEPENDS+=	p5-Crypt-Blowfish>=0:perl/p5-Crypt-Blowfish
RUN_DEPENDS+=	p5-Tie-EncryptedHash>=0:perl/p5-Tie-EncryptedHash
BUILD_DEPENDS+= ${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
