# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 440818 2017-05-13 12:13:32Z sunpoet $

PORTNAME=	activeresource
PORTVERSION=	4.1.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Coherent wrapper object-relational mapping for REST web services


RUN_DEPENDS=	rubygem-activemodel4>=${PORTVERSION}:ruby/rubygem-activemodel4 \
		rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-rails-observers>=0.1.1:ruby/rubygem-rails-observers

PORTSCOUT=	limit:^4\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
