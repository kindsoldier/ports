# Created by: Frederic Culot <frederic@culot.org>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Package-DeprecationManager
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Manage deprecation warnings for your distribution


BUILD_DEPENDS+=	p5-Package-Stash>0:perl/p5-Package-Stash
BUILD_DEPENDS+=	p5-Params-Util>0:perl/p5-Params-Util
BUILD_DEPENDS+=	p5-Sub-Install>0:perl/p5-Sub-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF

