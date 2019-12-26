# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD:perl/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Mail-IMAPClient
PORTVERSION=	3.38
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLOBBES
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module to talk to a IMAP4rev1 (RFC2060) server


RUN_DEPENDS+=	p5-Digest-HMAC>=0:perl/p5-Digest-HMAC
RUN_DEPENDS+=	p5-Parse-RecDescent>=1.94:perl/p5-Parse-RecDescent
RUN_DEPENDS+=	p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL
RUN_DEPENDS+=	p5-Authen-SASL>=0:perl/p5-Authen-SASL

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
#EOF
