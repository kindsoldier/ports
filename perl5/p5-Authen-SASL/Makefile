#
# $Id$
#
PORTNAME=	Authen-SASL
PORTVERSION=	2.16
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for SASL authentication

RUN_DEPENDS=	p5-Digest-HMAC>0:perl/p5-Digest-HMAC
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV+=	AUTOMATED_TESTING=yes

.include <bsd.port.mk>
#EOF