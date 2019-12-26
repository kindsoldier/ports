#
# $id$
#
PORTNAME=	XML-SAX-Expat
PORTVERSION=	0.51
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple API for XML

RUN_DEPENDS+=	p5-XML-Parser>=0:perl/p5-XML-Parser
RUN_DEPENDS+=	p5-XML-SAX>=0:perl/p5-XML-SAX
RUN_DEPENDS+=	p5-XML-NamespaceSupport>=0:perl/p5-XML-NamespaceSupport
BUILD_DEPENDS+=	${RUN_DEPENDS}

USES=		perl5 dos2unix
USE_PERL5=	configure
CONFIGURE_ENV=	SKIP_SAX_INSTALL=yes

.include <bsd.port.mk>
#EOF
