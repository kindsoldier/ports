# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 430539 2017-01-04 05:35:20Z swills $

PORTNAME=	coffee-rails
PORTVERSION=	4.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX?=	41

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Coffee Script adapter for the Rails asset pipeline


RUN_DEPENDS?=	rubygem-coffee-script>=2.2.0:ruby/rubygem-coffee-script \
		rubygem-railties4>=4.0.0:ruby/rubygem-railties4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PORTSCOUT=	limit:^4\.1\.

.include <bsd.port.mk>
