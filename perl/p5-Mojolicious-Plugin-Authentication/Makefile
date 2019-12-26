# Created by: Mathieu Arnold <mat@FreeBSD.org>
# $FreeBSD: head/www/p5-Mojolicious-Plugin-Authentication/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Mojolicious-Plugin-Authentication
PORTVERSION=	1.32
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mojolicious plugin to make authentication a bit easier

BUILD_DEPENDS=	p5-Mojolicious>=0:perl/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/README.pod

.include <bsd.port.mk>
#EOF
