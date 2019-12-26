# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/www/p5-Mojolicious-Plugin-SetUserGroup/Makefile 430155 2016-12-31 19:51:34Z adamw $

PORTNAME=	Mojolicious-Plugin-SetUserGroup
PORTVERSION=	0.005
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DBOOK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mojolicious plugin to set unprivileged credentials

BUILD_DEPENDS+=	p5-Mojolicious>=6.0:perl/p5-Mojolicious
BUILD_DEPENDS+=	p5-Unix-Groups>=0:perl/p5-Unix-Groups
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
#EOF
