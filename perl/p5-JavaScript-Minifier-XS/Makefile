# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD:perl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	JavaScript-Minifier-XS
PORTVERSION=	0.11
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XS based JavaScript minifier

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/JavaScript/Minifier/XS/XS.so

.include <bsd.port.mk>
#EOF
