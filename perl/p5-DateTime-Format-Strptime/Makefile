# Created by: Mathieu Arnold
# $FreeBSD:perl/Makefile 412326 2016-04-01 11:16:32Z sunpoet $

PORTNAME=	DateTime-Format-Strptime
PORTVERSION=	1.67
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format strp and strf time patterns


BUILD_DEPENDS+=	p5-DateTime>=1:perl/p5-DateTime
BUILD_DEPENDS+=	p5-DateTime-Locale>=0.45:perl/p5-DateTime-Locale
BUILD_DEPENDS+=	p5-DateTime-TimeZone>=0.79:perl/p5-DateTime-TimeZone
BUILD_DEPENDS+=	p5-Package-DeprecationManager>=0.15:perl/p5-Package-DeprecationManager
BUILD_DEPENDS+=	p5-Params-Validate>=1.20:perl/p5-Params-Validate
BUILD_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:1.0601,1.0700,1.0701,1.0702,1.0800,1.0900,1.0901,1.1000

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
