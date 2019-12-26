# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/rubygem-rails2/Makefile 510460 2019-08-31 21:59:38Z sunpoet $

PORTNAME=	rails
PORTVERSION=	5.2.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Full-stack web application framework

RUN_DEPENDS=	rubygem-actioncable>=${PORTVERSION}:rails5/rubygem-actioncable \
		rubygem-actionmailer>=${PORTVERSION}:rails5/rubygem-actionmailer \
		rubygem-actionpack>=${PORTVERSION}:rails5/rubygem-actionpack \
		rubygem-actionview>=${PORTVERSION}:rails5/rubygem-actionview \
		rubygem-activejob>=${PORTVERSION}:rails5/rubygem-activejob \
		rubygem-activemodel>=${PORTVERSION}:rails5/rubygem-activemodel \
		rubygem-activerecord>=${PORTVERSION}:rails5/rubygem-activerecord \
		rubygem-activestorage>=${PORTVERSION}:rails5/rubygem-activestorage \
		rubygem-activesupport>=${PORTVERSION}:rails5/rubygem-activesupport \
		rubygem-railties>=${PORTVERSION}:rails5/rubygem-railties \
                \
		rubygem-web-console>=3.3.0:rails5/rubygem-web-console \
		rubygem-sprockets-rails>=2.0:rails5/rubygem-sprockets-rails \
		rubygem-sass-rails>=5.1:rails5/rubygem-sass-rails \
		rubygem-sprockets>=3.7:rails5/rubygem-sprockets \
		rubygem-webpacker>=0:rails5/rubygem-webpacker \
		rubygem-jbuilder>=0:rails5/rubygem-jbuilder \
                \
		rubygem-bundler>=1.3.0:ruby/rubygem-bundler \
		rubygem-bootsnap>=1.1.0:ruby/rubygem-bootsnap \
		rubygem-mini_magick>=0:ruby/rubygem-mini_magick \
		rubygem-nokogiri>=1.8.1:ruby/rubygem-nokogiri \
		rubygem-puma>=0:ruby/rubygem-puma \
		rubygem-rake>=11.1:ruby/rubygem-rake \
		rubygem-spring>=0:ruby/rubygem-spring \
		rubygem-turbolinks>=5:ruby/rubygem-turbolinks \
		rubygem-uglifier>=4.2:ruby/rubygem-uglifier \
		rubygem-rb-fsevent>=0.10:ruby/rubygem-rb-fsevent \
		rubygem-sass-listen>=4.0.0:ruby/rubygem-sass-listen \
		rubygem-sass>=3.7.4:ruby/rubygem-sass \
		rubygem-rb-inotify>=0.10:ruby/rubygem-rb-inotify \
		rubygem-faker>=2.7:ruby/rubygem-faker \
		rubygem-execjs>=2.7:ruby/rubygem-execjs \
		rubygem-thread_safe>=0:ruby/rubygem-thread_safe \
		rubygem-bcrypt>=0:ruby/rubygem-bcrypt \
		rubygem-dalli>=0:ruby/rubygem-dalli \
		rubygem-pagy>=0:ruby/rubygem-pagy \
		rubygem-rack-proxy>=0:ruby/rubygem-rack-proxy \
		rubygem-minitest>=0:ruby/rubygem-minitest \
		rubygem-sqlite3>=1.3.6:ruby/rubygem-sqlite3 \
		rubygem-pg>=0:ruby/rubygem-pg

#		rubygem-byebug>=0:ruby/rubygem-byebug \
#		rubygem-capybara>=2.15:ruby/rubygem-capybara \
#		rubygem-chromedriver-helper>=0:ruby/rubygem-chromedriver-helper \
#		rubygem-coffee-rails>=0:ruby/rubygem-coffee-rails \
#		rubygem-selenium-webdriver>=0:ruby/rubygem-selenium-webdriver \

USES=		cpe gem
USE_RUBY=	yes

NO_ARCH=	yes

CPE_VENDOR=	rubyonrails
CPE_PRODUCT=	ruby_on_rails


.include <bsd.port.mk>
