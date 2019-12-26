# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-OpenSSL-EC/Makefile 421599 2016-09-09 06:39:18Z marino $

PORTNAME=	Crypt-OpenSSL-EC
PORTVERSION=	1.01
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIKEM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL EC (Elliptic Curves) library

BUILD_DEPENDS=	p5-Crypt-OpenSSL-Bignum>=0.04:perl/p5-Crypt-OpenSSL-Bignum
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${OPENSSLINC}

.include <bsd.port.mk>
#EOF
