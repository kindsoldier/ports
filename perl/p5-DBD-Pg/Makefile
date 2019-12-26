#
# $Id$
#
PORTNAME=	DBD-Pg
PORTVERSION=	3.5.3
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides access to PostgreSQL databases through the DBI

USES+=	pgsql
BUILD_DEPENDS=	p5-DBI>=1.614:perl/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-stage:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/DBD/Pg/Pg.so

.include <bsd.port.mk>
#EOF
