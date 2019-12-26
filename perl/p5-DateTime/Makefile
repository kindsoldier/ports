# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime
PORTVERSION=	1.44
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Date and time object


# Do not add p5-DateTime-Format-Strptime>=1.20.00 to TEST_DEPENDS to avoid cyclic dependency in tinderbox
BUILD_DEPENDS+=	p5-DateTime-Locale>=0.41:perl/p5-DateTime-Locale
BUILD_DEPENDS+=	p5-DateTime-TimeZone>=1.74:perl/p5-DateTime-TimeZone
BUILD_DEPENDS+=	p5-Params-Validate>=1.03:perl/p5-Params-Validate
BUILD_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/DateTime/DateTime.so

.include <bsd.port.mk>
#EOF
