# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime-Locale
PORTVERSION=	1.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Localization support for DateTime


BUILD_DEPENDS+=	p5-Dist-CheckConflicts>=0.02:perl/p5-Dist-CheckConflicts
BUILD_DEPENDS+=	p5-List-MoreUtils>=0:perl/p5-List-MoreUtils
BUILD_DEPENDS+=	p5-Params-Validate>=0:perl/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
