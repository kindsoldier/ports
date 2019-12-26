# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: head/databases/p5-DBIx-Abstract/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Abstract
PORTVERSION=	1.010
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	nistor@snickers.org
COMMENT=	DBIx::Abstract - DBI SQL abstraction

BUILD_DEPENDS=	p5-Check-ISA>=0:perl/p5-Check-ISA 
BUILD_DEPENDS+=	p5-DBI>=0:perl/p5-DBI
RUN_DEPENDS=	${BUILD_DEPENDS}
#TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
