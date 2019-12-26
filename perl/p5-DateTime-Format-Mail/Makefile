# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime-Format-Mail
PORTVERSION=	0.30.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert between DateTime and RFC2822/822 formats

RUN_DEPENDS+=	p5-Params-Validate>=0:perl/p5-Params-Validate
RUN_DEPENDS+=	p5-DateTime>=0:perl/p5-DateTime
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
#EOF
