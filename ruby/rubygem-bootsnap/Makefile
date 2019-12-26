# $FreeBSD: head/devel/rubygem-bootsnap/Makefile 510201 2019-08-30 00:04:08Z sunpoet $

PORTNAME=	bootsnap
PORTVERSION=	1.4.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Boot large ruby/rails apps faster


RUN_DEPENDS=	rubygem-msgpack>=1.0<2:ruby/rubygem-msgpack

USES=		gem shebangfix
USE_RUBY=	yes

SHEBANG_FILES=	bin/*

.include <bsd.port.mk>
