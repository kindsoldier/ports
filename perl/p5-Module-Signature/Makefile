# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/security/p5-Module-Signature/Makefile 423558 2016-10-09 00:52:23Z wen $

PORTNAME=	Module-Signature
PORTVERSION=	0.83
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module signature file manipulation

BUILD_DEPENDS=	p5-Module-Install>=0:perl/p5-Module-Install

BUILD_DEPENDS=	p5-PAR-Dist>=0:perl/p5-PAR-Dist
BUILD_DEPENDS+=	gpgv:crypto/gnupg
BUILD_DEPENDS+=	gpgv2:crypto/gnupg2
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFIGURE_ENV=	PERL_MM_USE_DEFAULT="yes"
NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
