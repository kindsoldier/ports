#
# $Id$
#
PORTNAME=	Net-HTTP
PORTVERSION=	6.09
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Low-level HTTP client

BUILD_DEPENDS+=	p5-IO-Socket-SSL>=1.38:perl/p5-IO-Socket-SSL
BUILD_DEPENDS+=	p5-URI>=0:perl/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
