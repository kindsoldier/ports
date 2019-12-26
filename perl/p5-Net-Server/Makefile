#
# $Id$
#
PORTNAME=	Net-Server
PORTVERSION=	2.008
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Configurable base class for writing internet servers in Perl

BUILD_DEPENDS=	p5-IO-Multiplex>=1.01:perl/p5-IO-Multiplex
BUILD_DEPENDS=	p5-Socket6>=0.23:perl/p5-Socket6
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF

