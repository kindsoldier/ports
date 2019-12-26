#
# $ID$
#
PORTNAME=	HTTP-Message
PORTVERSION=	6.11
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Representation of HTTP style messages

BUILD_DEPENDS+=	p5-Encode-Locale>=1:perl/p5-Encode-Locale
BUILD_DEPENDS+=	p5-HTTP-Date>=6:perl/p5-HTTP-Date
BUILD_DEPENDS+=	p5-IO-HTML>=0:perl/p5-IO-HTML
BUILD_DEPENDS+=	p5-LWP-MediaTypes>=6:perl/p5-LWP-MediaTypes
BUILD_DEPENDS+=	p5-URI>=1.10:perl/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/lib/HTTP/Headers.pm.orig

.include <bsd.port.mk>
#EOF
