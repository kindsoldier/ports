# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/devel/p5-Cache-Cache/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Cache-Cache
PORTVERSION=	1.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Cache interface

BUILD_DEPENDS=	p5-Cache>=0:perl/p5-Cache \
		p5-Digest-SHA1>=2.02:perl/p5-Digest-SHA1 \
		p5-Error>=0.15:perl/p5-Error \
		p5-IPC-ShareLite>=0.09:perl/p5-IPC-ShareLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
