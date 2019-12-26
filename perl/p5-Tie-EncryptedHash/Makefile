# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/security/p5-Tie-EncryptedHash/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Tie-EncryptedHash
PORTVERSION=	1.24
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Hashes (and objects based on hashes) with encrypting fields

BUILD_DEPENDS=	p5-Crypt-CBC>=0:perl/p5-Crypt-CBC
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
