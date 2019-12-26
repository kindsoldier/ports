#
# $Id$
#
PORTNAME=	HTML-Tree
PORTVERSION=	5.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Collection of modules to manipulate HTML syntax trees

BUILD_DEPENDS=	p5-HTML-Parser>=3.46:perl/p5-HTML-Parser \
		p5-HTML-Tagset>=3.02:perl/p5-HTML-Tagset
RUN_DEPENDS:=	${BUILD_DEPENDS}

#NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
#EOF
