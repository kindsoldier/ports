# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD:ruby/Makefile 450839 2017-09-28 11:02:05Z sunpoet $

PORTNAME=	actionview
PORTVERSION=	4.2.10
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rendering framework putting the V in MVC (part of Rails)


RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-builder>=3.1:ruby/rubygem-builder \
		rubygem-erubis>=2.7.0:ruby/rubygem-erubis \
		rubygem-rails-dom-testing1>=1.0.5:ruby/rubygem-rails-dom-testing1 \
		rubygem-rails-html-sanitizer>=1.0.3:ruby/rubygem-rails-html-sanitizer

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
