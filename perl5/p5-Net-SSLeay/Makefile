#
# $Id$
#
PORTNAME=	Net-SSLeay
PORTVERSION=	1.82
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to SSL

USES=		perl5 shebangfix
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/SSLeay/SSLeay.so

.include <bsd.port.mk>
#EOF
