# Created by: Jesper Skriver <jesper@FreeBSD.org>
# $FreeBSD: head/net/p5-Net-SSH-Perl/Makefile 413983 2016-04-25 09:11:25Z sunpoet $

PORTNAME=	Net-SSH-Perl
PORTVERSION=	2.14
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module implementing both the SSH1 and SSH2 protocols

BUILD_DEPENDS+=	p5-Convert-PEM>=0.05:perl/p5-Convert-PEM
BUILD_DEPENDS+=	p5-Crypt-Curve25519>=0.05:perl/p5-Crypt-Curve25519
BUILD_DEPENDS+=	p5-Crypt-DES>0:perl/p5-Crypt-DES
BUILD_DEPENDS+=	p5-Crypt-DH>=0.01:perl/p5-Crypt-DH
BUILD_DEPENDS+=	p5-Crypt-DSA>=0.11:perl/p5-Crypt-DSA
BUILD_DEPENDS+=	p5-Crypt-IDEA>=0:perl/p5-Crypt-IDEA
BUILD_DEPENDS+=	p5-Crypt-RSA>=0:perl/p5-Crypt-RSA
BUILD_DEPENDS+=	p5-CryptX>=0:perl/p5-CryptX
BUILD_DEPENDS+=	p5-Digest-BubbleBabble>=0:perl/p5-Digest-BubbleBabble
BUILD_DEPENDS+=	p5-File-HomeDir>=0:perl/p5-File-HomeDir
BUILD_DEPENDS+=	p5-Math-GMP>=1.04:perl/p5-Math-GMP
BUILD_DEPENDS+=	p5-Math-Pari>=2.001804:perl/p5-Math-Pari
BUILD_DEPENDS+=	p5-String-CRC32>=1.2:perl/p5-String-CRC32
BUILD_DEPENDS+=	p5-Math-BigInt-GMP>=0:perl/p5-Math-BigInt-GMP
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFIGURE_ENV=	PERL_MM_USE_DEFAULT="1"
NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/SSH/Perl/Perl.so

.include <bsd.port.mk>
#EEOF
