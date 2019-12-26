# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Daemon/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	HTTP-Daemon
PORTVERSION=	6.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple HTTP server class

BUILD_DEPENDS=	p5-HTTP-Date>=6:perl/p5-HTTP-Date \
		p5-HTTP-Message>=6:perl/p5-HTTP-Message \
		p5-LWP-MediaTypes>=6:perl/p5-LWP-MediaTypes
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
