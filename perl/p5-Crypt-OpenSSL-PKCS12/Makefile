# $FreeBSD: head/security/p5-Crypt-OpenSSL-PKCS10/Makefile 424377 2016-10-21 05:29:32Z pi $

PORTNAME=	Crypt-OpenSSL-PKCS12
PORTVERSION=	0.7
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	xxxx@FreeBSD.org
COMMENT=	Perl extension for OpenSSL PKCS12 API

BUILD_DEPENDS=	p5-Crypt-OpenSSL-RSA>=0:perl/p5-Crypt-OpenSSL-RSA
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 
USE_PERL5=	configure
#MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

.include <bsd.port.mk>
#EOF
