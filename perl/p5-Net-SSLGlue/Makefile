# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD:perl/Makefile 412761 2016-04-08 16:28:25Z sunpoet $

PORTNAME=	Net-SSLGlue
PORTVERSION=	1.057
CATEGORIES=	security net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add/extend SSL support for common perl modules


BUILD_DEPENDS=	p5-IO-Socket-SSL>=1.190:perl/p5-IO-Socket-SSL
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
#EOF
