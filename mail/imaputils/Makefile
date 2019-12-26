# Created by: Mikhail T. (m.tsatsenko@gmail.com)
# $FreeBSD: head/mail/imaputils/Makefile 453939 2017-11-10 22:44:42Z tcberner $

PORTNAME=	imaputils
DISTVERSION=	1.0.5
CATEGORIES=	mail

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Number of tools and scripts for use with IMAP servers

USES=		perl5 shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	mtsatsenko

USE_PERL5=	configure
NO_BUILD=	yes
SHEBANG_FILES=	bin/*

RUN_DEPENDS+=	p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL
RUN_DEPENDS+=	p5-Unicode-IMAPUtf7>=0:perl/p5-Unicode-IMAPUtf7

.include <bsd.port.mk>
