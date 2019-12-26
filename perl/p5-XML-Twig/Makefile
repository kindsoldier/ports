#
# $Id$
#
PORTNAME=	XML-Twig
PORTVERSION=	3.52
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Process huge XML documents by chunks via a tree interface

BUILD_DEPENDS+=	p5-HTML-Tree>=3.13:perl/p5-HTML-Tree
BUILD_DEPENDS+=	p5-Text-Iconv>=0:perl/p5-Text-Iconv
BUILD_DEPENDS+=	p5-Tie-IxHash>=0:perl/p5-Tie-IxHash
BUILD_DEPENDS+=	p5-XML-Parser>=0:perl/p5-XML-Parser
BUILD_DEPENDS+=	p5-XML-XPath>=0:perl/p5-XML-XPath
BUILD_DEPENDS+=	p5-libwww>=0:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-y

.include <bsd.port.mk>
#EOF
