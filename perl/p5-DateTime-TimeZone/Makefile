PORTNAME=	DateTime-TimeZone
DISTVERSION=	2.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Time zone object base class and factory
WWW=		https://metacpan.org/release/DateTime-TimeZone

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Singleton>=1.03:perl/p5-Class-Singleton \
		p5-Module-Runtime>=0:perl/p5-Module-Runtime \
		p5-namespace-autoclean>=0:perl/p5-namespace-autoclean \
		p5-Params-ValidationCompiler>=0.13:perl/p5-Params-ValidationCompiler \
		p5-Specio>=0:perl/p5-Specio \
		p5-Try-Tiny>=0:perl/p5-Try-Tiny
#TEST_DEPENDS=	p5-DateTime>=1.44:perl/p5-DateTime \
#		p5-Test-Fatal>0:perl/p5-Test-Fatal \
#		p5-Test-Output>0:perl/p5-Test-Output \
#		p5-Test-Requires>0:perl/p5-Test-Requires \
#		p5-Test-Taint>=1.06:perl/p5-Test-Taint

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
