# Created by: Murilo Opsfelder <mopsfelder@gmail.com>
# $FreeBSD: head/www/p5-Mojolicious/Makefile 433779 2017-02-10 00:13:51Z adamw $

PORTNAME=	Mojolicious
PORTVERSION=	9.25
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	High-level MVC web framework written in Perl

BUILD_DEPENDS+=	p5-EV>=4:perl/p5-EV
BUILD_DEPENDS+=	p5-IO-Socket-SSL>=1.75:perl/p5-IO-Socket-SSL
RUN_DEPENDS+=   ${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5


.include <bsd.port.pre.mk>

#.if ${PORT_OPTIONS:MIPV6} && ${PERL_LEVEL} < 502111
#BUILD_DEPENDS+=	p5-IO-Socket-IP>=0.37:perl/p5-IO-Socket-IP
#RUN_DEPENDS+=	p5-IO-Socket-IP>=0.37:perl/p5-IO-Socket-IP
#.endif

.include <bsd.port.post.mk>
#EOF
