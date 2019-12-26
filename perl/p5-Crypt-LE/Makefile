# $FreeBSD: head/security/p5-Crypt-LE/Makefile 439536 2017-04-27 09:44:02Z des $

PORTNAME=	Crypt-LE
PORTVERSION=	0.23
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	des@FreeBSD.org
COMMENT=	Let's Encrypt API interfacing module

RUN_DEPENDS=	p5-Convert-ASN1>=0:perl/p5-Convert-ASN1 \
		p5-Crypt-Format>=0:perl/p5-Crypt-Format \
		p5-Crypt-OpenSSL-RSA>=0:perl/p5-Crypt-OpenSSL-RSA \
		p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL \
		p5-JSON-MaybeXS>=0:perl/p5-JSON-MaybeXS \
		p5-Log-Log4perl>=0:perl/p5-Log-Log4perl \
		p5-Net-SSLeay>=0:perl/p5-Net-SSLeay \
		p5-URI>=0:perl/p5-URI

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes


post-install:
	cd ${STAGEDIR}${PREFIX}/bin && ${MV} le.pl crypt-le

.include <bsd.port.mk>
#EOF

