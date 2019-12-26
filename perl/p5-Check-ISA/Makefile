# Created by: chinsan
# $FreeBSD: head/devel/p5-Check-ISA/Makefile 435013 2017-02-28 09:44:55Z sunpoet $

PORTNAME=	Check-ISA
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MANWAR
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DWIM, correct checking of an object's class #'

RUN_DEPENDS=	p5-Sub-Exporter>=0:perl/p5-Sub-Exporter
BUILD_DEPENDS:=	${RUN_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
