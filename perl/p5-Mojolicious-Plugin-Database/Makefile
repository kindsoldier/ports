# Created by: Henk van Oers <hvo.pm@xs4all.nl>
# $FreeBSD: head/www/p5-Mojolicious-Plugin-Database/Makefile 416157 2016-05-30 15:33:44Z mat $

PORTNAME=	Mojolicious-Plugin-Database
PORTVERSION=	1.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handling of DBI based connections in Mojolicious

BUILD_DEPENDS=	p5-DBI>=0:perl/p5-DBI
BUILD_DEPENDS=	p5-Mojolicious>=1:perl/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS+=	p5-DBD-SQLite>=0:perl/p5-DBD-SQLite
TEST_DEPENDS+=	p5-Try-Tiny>=0:perl/p5-Try-Tiny

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
