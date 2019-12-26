# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/mail/rubygem-actionmailer52/Makefile 510448 2019-08-31 21:58:37Z sunpoet $

PORTNAME=	actionmailer
PORTVERSION=	5.2.3
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby


RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:rails5/rubygem-actionpack \
		rubygem-actionview>=${PORTVERSION}:rails5/rubygem-actionview \
		rubygem-activejob>=${PORTVERSION}:rails5/rubygem-activejob \
		rubygem-mail>=2.5.4:ruby/rubygem-mail \
		rubygem-rails-dom-testing>=2.0:rails5/rubygem-rails-dom-testing

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
