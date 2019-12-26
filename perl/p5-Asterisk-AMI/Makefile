#
# $Id$
#
PORTNAME=	Asterisk-AMI
PORTVERSION=	0.2.8
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GREENBEAN
PKGNAMEPREFIX=	p5-
DISTNAME=	Asterisk-AMI-v${PORTVERSION}

#http://search.cpan.org/CPAN/authors/id/G/GR/GREENBEAN/Asterisk-AMI-v0.2.8.tar.gz

BUILD_DEPENDS+=	p5-AnyEvent>=0:perl/p5-AnyEvent
RUN_DEPENDS+=	${BUILD_DEPENDS}


MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asterisk AMI library

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
