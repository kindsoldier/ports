# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD:perl/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Email-Simple
PORTVERSION=	2.210
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple parsing of RFC2822 message format and headers


BUILD_DEPENDS=	p5-Email-Date-Format>=0:perl/p5-Email-Date-Format
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
#EOF
