# Created by: Simun Mikecin <numisemis@yahoo.com>
# $FreeBSD: head/net/p5-Net-SCP-Expect/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	Net-SCP-Expect
PORTVERSION=	0.16
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	numisemis@yahoo.com
COMMENT=	Perl5 wrapper for scp that allows passwords via Expect

BUILD_DEPENDS=	p5-Expect>=1.14:perl/p5-Expect \
		p5-Net-IPv6Addr>=0:perl/p5-Net-IPv6Addr \
		p5-Term-ReadPassword>=0.01:perl/p5-Term-ReadPassword
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
