# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/www/p5-Mojolicious-Plugin-TtRenderer/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Mojolicious-Plugin-TtRenderer
PORTVERSION=	1.57
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Template-toolkit renderer for Mojolicious

BUILD_DEPENDS=	p5-Mojolicious>=6.33:perl/p5-Mojolicious \
		p5-Template-Toolkit>=2.18:perl/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
