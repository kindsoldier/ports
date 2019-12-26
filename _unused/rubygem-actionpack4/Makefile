# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD:ruby/Makefile 450841 2017-09-28 11:02:20Z sunpoet $

PORTNAME=	actionpack
PORTVERSION=	4.2.10
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Action Controller and Action View of Rails MVC Framework


RUN_DEPENDS=	rubygem-actionview4>=${PORTVERSION}:ruby/rubygem-actionview4 \
		rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-rack16>=1.6:ruby/rubygem-rack16 \
		rubygem-rack-test>=0.6.2:ruby/rubygem-rack-test \
		rubygem-rails-dom-testing1>=1.0.5:ruby/rubygem-rails-dom-testing1 \
		rubygem-rails-html-sanitizer>=1.0.2:ruby/rubygem-rails-html-sanitizer

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
