# Created by: Alfred Perlstein <alfred@FreeBSD.org>
# $FreeBSD:perl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-SSLeay
PORTVERSION=	0.72
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to allow p5-libwww LWP to make https connections


BUILD_DEPENDS+=	p5-LWP-Protocol-https>=6.02:perl/p5-LWP-Protocol-https
BUILD_DEPENDS+=	p5-Path-Class>=0.26:perl/p5-Path-Class
BUILD_DEPENDS+=	p5-Try-Tiny>=0.19:perl/p5-Try-Tiny
RUN_DEPENDS=	p5-LWP-Protocol-https>=6.02:perl/p5-LWP-Protocol-https

USES=		perl5
USE_PERL5=	configure
USE_OPENSSL=	yes
CONFIGURE_ARGS=	--no-live-tests

.include <bsd.port.mk>
#EOF
