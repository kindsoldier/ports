# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Pegex/Makefile 431576 2017-01-15 15:21:38Z sunpoet $

PORTNAME=	Pegex
PORTVERSION=	0.63
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Acmeist PEG Parser Framework

BUILD_DEPENDS+=	p5-JSON-XS>=0:perl/p5-JSON-XS
BUILD_DEPENDS+=	p5-YAML-LibYAML>=0:perl/p5-YAML-LibYAML
BUILD_DEPENDS+=	p5-File-ShareDir-Install>=0.06:perl/p5-File-ShareDir-Install
RUN_DEPENDS+=	${BUILD_DEPENDS}

PORTSCOUT=	limit:^[0-9\.]*$$

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF
