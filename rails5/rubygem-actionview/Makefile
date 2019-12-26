# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-actionview52/Makefile 510436 2019-08-31 21:57:35Z sunpoet $

PORTNAME=	actionview
PORTVERSION=    5.2.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rendering framework putting the V in MVC (part of Rails)


RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:rails5/rubygem-activesupport \
		rubygem-builder>=3.1:ruby/rubygem-builder \
		rubygem-erubi>=1.4:ruby/rubygem-erubi \
		rubygem-rails-dom-testing>=2.0:rails5/rubygem-rails-dom-testing \
		rubygem-rails-html-sanitizer>=1.0.3:rails5/rubygem-rails-html-sanitizer

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
