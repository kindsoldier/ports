#
# $Id$
#
PORTNAME=	Net-DNS
PORTVERSION=	1.06
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the DNS resolver, and dynamic updates


BUILD_DEPENDS+=	p5-Digest-HMAC>=1.03:perl/p5-Digest-HMAC
BUILD_DEPENDS+=	p5-MIME-Base32>=1.01:perl/p5-MIME-Base32

BUILD_DEPENDS+=	p5-Digest-GOST>=0.06:perl/p5-Digest-GOST
BUILD_DEPENDS+=	p5-Net-LibIDN>=0.12:perl/p5-Net-LibIDN
BUILD_DEPENDS+=	p5-IO-Socket-INET6>=2.01:perl/p5-IO-Socket-INET6
BUILD_DEPENDS+=	p5-Digest-BubbleBabble>=0.01:perl/p5-Digest-BubbleBabble

RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFIGURE_ARGS=	--no-IPv6-tests --no-online-tests
NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure


.include <bsd.port.mk>
#EOF
