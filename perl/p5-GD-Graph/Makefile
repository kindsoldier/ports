# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD:perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	GD-Graph
PORTVERSION=	1.52
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	GDGraph-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Graph plotting module for perl5


BUILD_DEPENDS+=	p5-GD>=0:perl/p5-GD
BUILD_DEPENDS+=	p5-GD-TextUtil>=0:perl/p5-GD-TextUtil
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
