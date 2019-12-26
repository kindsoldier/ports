#
# $Id$
#
PORTNAME=	Crypt-DES
PORTVERSION=	2.07
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to DES block cipher

BUILD_DEPENDS=	p5-Crypt-CBC>=0:perl/p5-Crypt-CBC
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
PERL_CONFIGURE=	yes
USE_GMAKE=	yes

.include <bsd.port.mk>
#EOF
