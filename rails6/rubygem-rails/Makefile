# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/rubygem-rails52/Makefile 510460 2019-08-31 21:59:38Z sunpoet $

PORTNAME=	rails
PORTVERSION=	6.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Full-stack web application framework


RUN_DEPENDS=	rubygem-actioncable>=${PORTVERSION}:rails6/rubygem-actioncable \
		rubygem-actionmailer>=${PORTVERSION}:rails6/rubygem-actionmailer \
		rubygem-actionpack>=${PORTVERSION}:rails6/rubygem-actionpack \
		rubygem-actionview>=${PORTVERSION}:rails6/rubygem-actionview \
		rubygem-activejob>=${PORTVERSION}:rails6/rubygem-activejob \
		rubygem-activemodel>=${PORTVERSION}:rails6/rubygem-activemodel \
		rubygem-activerecord>=${PORTVERSION}:rails6/rubygem-activerecord \
		rubygem-activestorage>=${PORTVERSION}:rails6/rubygem-activestorage \
		rubygem-activesupport>=${PORTVERSION}:rails6/rubygem-activesupport \
		rubygem-actiontext>=${PORTVERSION}:rails6/rubygem-actiontext \
		rubygem-actionmailbox>=0:rails6/rubygem-actionmailbox \
		rubygem-sprockets-rails>=2.0:rails6/rubygem-sprockets-rails \
		rubygem-bundler>=1.3.0:ruby/rubygem-bundler \
		rubygem-railties>=${PORTVERSION}:rails6/rubygem-railties \
		rubygem-bootsnap>=1.1.0:ruby/rubygem-bootsnap \
		rubygem-jbuilder>=0:rails6/rubygem-jbuilder \
		rubygem-mini_magick>=0:ruby/rubygem-mini_magick \
		rubygem-nokogiri>=1.8.1:ruby/rubygem-nokogiri \
		rubygem-puma>=0:ruby/rubygem-puma \
		rubygem-rake>=11.1:ruby/rubygem-rake \
		rubygem-sass-rails>=0:rails6/rubygem-sass-rails \
		rubygem-spring>=0:ruby/rubygem-spring \
		rubygem-turbolinks>=5:ruby/rubygem-turbolinks \
		rubygem-web-console>=3.3.0:rails6/rubygem-web-console \
		rubygem-thread_safe>=0:ruby/rubygem-thread_safe \
		rubygem-bcrypt>=0:ruby/rubygem-bcrypt \
		rubygem-dalli>=0:ruby/rubygem-dalli \
		rubygem-rack-proxy>=0:ruby/rubygem-rack-proxy \
		rubygem-minitest>=0:ruby/rubygem-minitest \
		rubygem-webpacker>=0:rails6/rubygem-webpacker \
		rubygem-sqlite3>=1.3.6:ruby/rubygem-sqlite3 \
		rubygem-pg>=0:ruby/rubygem-pg \
		rubygem-pagy>=0:ruby/rubygem-pagy


USES=		cpe gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
