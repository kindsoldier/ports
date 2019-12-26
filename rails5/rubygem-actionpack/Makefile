# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/www/rubygem-actionpack52/Makefile 510456 2019-08-31 21:59:18Z sunpoet $

PORTNAME=	actionpack
PORTVERSION=	5.2.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Action Controller and Action View of Rails MVC Framework

RUN_DEPENDS=	rubygem-actionview>=${PORTVERSION}:rails5/rubygem-actionview \
		rubygem-activesupport>=${PORTVERSION}:rails5/rubygem-activesupport \
		rubygem-rack>=2.0:ruby/rubygem-rack \
		rubygem-rack-test>=0.6.3:ruby/rubygem-rack-test \
		rubygem-rails-dom-testing>=2.0:rails5/rubygem-rails-dom-testing \
		rubygem-rails-html-sanitizer>=1.2.0:rails5/rubygem-rails-html-sanitizer

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
