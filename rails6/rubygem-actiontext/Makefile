# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/mail/rubygem-actionmailer52/Makefile 510448 2019-08-31 21:58:37Z sunpoet $

PORTNAME=	actiontext
PORTVERSION=	6.0.1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Edit and display rich text in Rails applications


RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:rails6/rubygem-activesupport \
		rubygem-actionpack>=${PORTVERSION}:rails6/rubygem-actionpack \
		rubygem-activerecord>=${PORTVERSION}:rails6/rubygem-activerecord \
		rubygem-actionview>=${PORTVERSION}:rails6/rubygem-actionview \
		rubygem-nokogiri>=0:ruby/rubygem-nokogiri

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
