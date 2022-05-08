# Created by: Mosconi <mosconi.rmg@gmail.com>
# $FreeBSD: head/security/p5-Crypt-OpenSSL-CA/Makefile 427389 2016-11-29 18:46:21Z mat $

PORTNAME=	Crypt-OpenSSL-CA
PORTVERSION=	0.91
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL CA API

BUILD_DEPENDS=	p5-Convert-ASN1>=0.02:perl/p5-Convert-ASN1 \
		p5-Devel-Leak>=0:perl/p5-Devel-Leak \
		p5-File-Slurp>=0:perl/p5-File-Slurp \
		p5-IPC-Run>=0:perl/p5-IPC-Run \
		p5-Inline>=0.40:perl/p5-Inline \
		p5-Inline-C>=0:perl/p5-Inline-C \
		p5-Net-SSLeay>=1.25:perl/p5-Net-SSLeay
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
#CONFIGURE_ARGS=	--openssl-cflags=-L${OPENSSLINC} --openssl-ldflags="-I${OPENSSLLIB} ${OPENSSL_LDFLAGS}"

.include <bsd.port.mk>
#EOF
