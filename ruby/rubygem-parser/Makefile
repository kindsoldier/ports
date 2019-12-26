# $FreeBSD: head/devel/rubygem-parser/Makefile 516468 2019-11-03 17:18:45Z sunpoet $

PORTNAME=	parser
PORTVERSION=	2.6.5.0
CATEGORIES=	devel ruby
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby parser written in pure Ruby

RUN_DEPENDS=	rubygem-ast>=2.4.0:ruby/rubygem-ast

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/ruby-parse bin/ruby-rewrite

.include <bsd.port.mk>
