# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-Sub-Exporter/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Sub-Exporter
PORTVERSION=	0.987
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Sophisticated exporter for custom-built routines

BUILD_DEPENDS=	p5-Data-OptList>=0.100:perl/p5-Data-OptList \
		p5-Params-Util>=0.14:perl/p5-Params-Util \
		p5-Sub-Install>=0.920:perl/p5-Sub-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
