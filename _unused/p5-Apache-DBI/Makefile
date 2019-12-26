#
# $Id$
#
PORTNAME=	Apache-DBI
PORTVERSION=	1.12
CATEGORIES=	www databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI persistent connection, authentication and authorization


BUILD_DEPENDS+=	p5-DBI>=0:perl/p5-DBI
BUILD_DEPENDS+=	apache-mod_perl2>=0:net/apache-mod_perl2
RUN_DEPENDS+=	${BUILD_DEPENDS}

CONFLICTS=	p5-Apache-DBI-mp[12]*

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
