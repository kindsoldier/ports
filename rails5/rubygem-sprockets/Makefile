# Created by: Mikhail T. <m.tsatsenko@gmail.com>
# $FreeBSD: head/devel/rubygem-sprockets/Makefile 476080 2018-07-31 23:50:08Z sunpoet $

PORTNAME=	sprockets
PORTVERSION=    3.7.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG


MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that preprocesses and concatenates JavaScript files


RUN_DEPENDS=	rubygem-rack>=1.0:ruby/rubygem-rack \
		rubygem-concurrent-ruby>=1.0:ruby/rubygem-concurrent-ruby

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/sprockets

.include <bsd.port.mk>
