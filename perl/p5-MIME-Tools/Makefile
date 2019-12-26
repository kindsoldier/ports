#
#
#
PORTNAME=	MIME-Tools
PORTVERSION=	5.507
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DSKOLL
PKGNAMEPREFIX=	p5-
DISTNAME=	MIME-tools-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set of perl5 modules for MIME

BUILD_DEPENDS+=	p5-Convert-BinHex>=0:perl/p5-Convert-BinHex
BUILD_DEPENDS+=	p5-Mail-Tools>=1.05:perl/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
