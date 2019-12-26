# Created by: Sahil Tandon <sahil@tandon.net>
# $FreeBSD: head/net/p5-Socket-GetAddrInfo/Makefile 464053 2018-03-10 09:03:10Z amdmi3 $

PORTNAME=	Socket-GetAddrInfo
PORTVERSION=	0.22
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RFC 2553's getaddrinfo and getnameinfo functions

BUILD_DEPENDS=	p5-ExtUtils-CChecker>=0.06:perl/p5-ExtUtils-CChecker

USES=		perl5 shebangfix
USE_PERL5=	modbuild
SHEBANG_FILES=	bin/getaddrinfo bin/getnameinfo
NO_ARCH=	yes

.include <bsd.port.mk>
