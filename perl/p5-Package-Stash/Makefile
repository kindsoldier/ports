# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Package-Stash
PORTVERSION=	0.37
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DOY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Routines for manipulating stashes


BUILD_DEPENDS+=	p5-Dist-CheckConflicts>=0.02:perl/p5-Dist-CheckConflicts
BUILD_DEPENDS+=	p5-Module-Implementation>=0.06:perl/p5-Module-Implementation
BUILD_DEPENDS+=	p5-Package-Stash-XS>=0.22:perl/p5-Package-Stash-XS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
