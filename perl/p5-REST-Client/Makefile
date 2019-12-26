#
# $Id$
#
PORTNAME=	REST-Client
PORTVERSION=	273
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	michelle@sorbs.net
COMMENT=	Simple client for interacting with RESTful http/https resources

BUILD_DEPENDS+=	p5-Crypt-SSLeay>0:perl/p5-Crypt-SSLeay
BUILD_DEPENDS+=	p5-URI>0:perl/p5-URI
BUILD_DEPENDS+=	p5-libwww>0:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
