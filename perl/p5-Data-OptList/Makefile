# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-Data-OptList/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Data-OptList
PORTVERSION=	0.110
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and validate simple name/value option pairs

BUILD_DEPENDS=	p5-Params-Util>=0.14:perl/p5-Params-Util \
		p5-Sub-Install>=0.92:perl/p5-Sub-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
