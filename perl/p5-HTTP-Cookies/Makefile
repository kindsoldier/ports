#
# $Id$
#
PORTNAME=	HTTP-Cookies
PORTVERSION=	6.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTTP Cookie jars

BUILD_DEPENDS+=	p5-HTTP-Date>=6:perl/p5-HTTP-Date
BUILD_DEPENDS+=	p5-HTTP-Message>=6:perl/p5-HTTP-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS=	p5-libwww-5*

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
