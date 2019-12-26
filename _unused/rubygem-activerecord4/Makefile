# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 450838 2017-09-28 11:01:59Z sunpoet $

PORTNAME=	activerecord
PORTVERSION=	4.2.10
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-relational mapping layer for Rails MVC Framework


RUN_DEPENDS=	rubygem-activemodel4>=${PORTVERSION}:ruby/rubygem-activemodel4 \
		rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-arel6>=6.0:ruby/rubygem-arel6

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
