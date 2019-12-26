# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD:perl/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Email-MessageID
PORTVERSION=	1.406
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate world unique message-ids


BUILD_DEPENDS=	p5-Email-Address>=1.80:perl/p5-Email-Address
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
