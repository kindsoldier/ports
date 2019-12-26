# Created by: tobez
# $FreeBSD: head/graphics/p5-GraphViz/Makefile 429640 2016-12-27 18:16:09Z sunpoet $

PORTNAME=	GraphViz
PORTVERSION=	2.24
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	GraphViz - Perl interface to the GraphViz graphing tool

BUILD_DEPENDS=	dot:graph/graphviz \
		p5-IPC-Run>=0.60:perl/p5-IPC-Run \
		p5-Parse-RecDescent>=1.965.001:perl/p5-Parse-RecDescent \
		p5-XML-Twig>=3.52:perl/p5-XML-Twig
RUN_DEPENDS:=	${BUILD_DEPENDS}
BUILD_DEPENDS+=	p5-File-Which>=1.09:perl/p5-File-Which

NO_ARCH=	yes
USES=		perl5 tar:tgz
USE_PERL5=	configure

.include <bsd.port.mk>
