#
# $id$
#
PORTNAME=	XML-Entities
PORTVERSION=	1.0002
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Generic classes for simplistic and perlish handling of XML data

BUILD_DEPENDS+=	p5-HTML-Parser>=0:perl/p5-HTML-Parser
BUILD_DEPENDS+=	p5-libwww>=0:perl/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
#EOF
