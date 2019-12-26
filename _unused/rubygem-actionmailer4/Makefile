# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 473813 2018-07-03 09:37:35Z amdmi3 $

PORTNAME=	actionmailer
PORTVERSION=	4.2.10
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby


RUN_DEPENDS=	rubygem-actionpack4>=${PORTVERSION}:ruby/rubygem-actionpack4 \
		rubygem-actionview4>=${PORTVERSION}:ruby/rubygem-actionview4 \
		rubygem-activejob4>=${PORTVERSION}:ruby/rubygem-activejob4 \
		rubygem-mail>=2.6.1:ruby/rubygem-mail \
		rubygem-rails-dom-testing1>=1.0.5:ruby/rubygem-rails-dom-testing1

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

.include <bsd.port.mk>
