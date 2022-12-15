PORTNAME=	B-Hooks-EndOfScope
PORTVERSION=	0.26
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Execute code after a scope finished compilation
WWW=		https://metacpan.org/release/B-Hooks-EndOfScope

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS+=	p5-Module-Implementation>=0.05:perl/p5-Module-Implementation
#RUN_DEPENDS+=	p5-Sub-Exporter-Progressive>=0.001006:perl/p5-Sub-Exporter-Progressive
#RUN_DEPENDS+=	p5-Variable-Magic>=0.48:perl/p5-Variable-Magic

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
