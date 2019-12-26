# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/security/p5-Crypt-PKCS10/Makefile 425654 2016-11-08 00:59:32Z wen $

PORTNAME=	Crypt-PKCS10
PORTVERSION=	1.8002
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Parse PKCS #10 certificate requests

BUILD_DEPENDS+=	p5-Convert-ASN1>=0.27:perl/p5-Convert-ASN1
BUILD_DEPENDS+=	p5-Module-Signature>=0:perl/p5-Module-Signature
BUILD_DEPENDS+=	p5-Digest-MD4>=0:perl/p5-Digest-MD4
BUILD_DEPENDS+=	p5-Digest-MD2>=0:perl/p5-Digest-MD2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
#EOF
