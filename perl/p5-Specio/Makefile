PORTNAME=	Specio
PORTVERSION=	0.48
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Type constraints and coercions for Perl
WWW=		https://metacpan.org/release/Specio

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Devel-StackTrace>=0:perl/p5-Devel-StackTrace
RUN_DEPENDS+=	p5-Eval-Closure>=0:perl/p5-Eval-Closure
RUN_DEPENDS+=	p5-MRO-Compat>=0:perl/p5-MRO-Compat
RUN_DEPENDS+=	p5-Module-Runtime>=0:perl/p5-Module-Runtime
RUN_DEPENDS+=	p5-Role-Tiny>=1.003003:perl/p5-Role-Tiny
RUN_DEPENDS+=	p5-Sub-Quote>=0:perl/p5-Sub-Quote
RUN_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny

#TEST_DEPENDS=	p5-Test-Fatal>=0:perl/p5-Test-Fatal \
#		p5-Test-Needs>=0:perl/p5-Test-Needs \
#		p5-namespace-autoclean>=0:perl/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
