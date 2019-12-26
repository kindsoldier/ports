# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 465053 2018-03-20 01:31:29Z swills $

PORTNAME=	rails
PORTVERSION=	4.2.10
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	MVC web application framework


RUN_DEPENDS=	rubygem-actionmailer4>=${PORTVERSION}:ruby/rubygem-actionmailer4 \
		rubygem-actionpack4>=${PORTVERSION}:ruby/rubygem-actionpack4 \
		rubygem-actionview4>=${PORTVERSION}:ruby/rubygem-actionview4 \
		rubygem-activejob4>=${PORTVERSION}:ruby/rubygem-activejob4 \
		rubygem-activemodel4>=${PORTVERSION}:ruby/rubygem-activemodel4 \
		rubygem-activerecord4>=${PORTVERSION}:ruby/rubygem-activerecord4 \
		rubygem-activeresource4>=4.0.0:ruby/rubygem-activeresource4 \
		rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-builder>=3.2.2:ruby/rubygem-builder \
		rubygem-bundler>=1.3.0:ruby/rubygem-bundler \
		rubygem-byebug>=5.0.0:ruby/rubygem-byebug \
		rubygem-coffee-rails41>=4.1.1:ruby/rubygem-coffee-rails41 \
		rubygem-execjs>=2.2.1:ruby/rubygem-execjs \
		rubygem-jbuilder>=2.1.3:ruby/rubygem-jbuilder \
		rubygem-jquery-rails>=4.0:ruby/rubygem-jquery-rails \
		rubygem-railties4>=${PORTVERSION}:ruby/rubygem-railties4 \
		rubygem-rake>=10.3:ruby/rubygem-rake \
		rubygem-rdoc>=4.0.2:ruby/rubygem-rdoc \
		rubygem-sass>=3.4.1:ruby/rubygem-sass \
		rubygem-sass-rails-rails4>=5.0.3:ruby/rubygem-sass-rails-rails4 \
		rubygem-sdoc>=0.4.1:ruby/rubygem-sdoc \
		rubygem-spring>=1.1.3:ruby/rubygem-spring \
		rubygem-sqlite3>=1.3.9:ruby/rubygem-sqlite3 \
		rubygem-sprockets3>=3.0.3:ruby/rubygem-sprockets3 \
		rubygem-sprockets-rails>=2.0:ruby/rubygem-sprockets-rails \
		rubygem-thread_safe>=0.3.4:ruby/rubygem-thread_safe \
		rubygem-turbolinks>=2.3.0:ruby/rubygem-turbolinks \
		rubygem-uglifier>=2.5.0:ruby/rubygem-uglifier \
		rubygem-web-console2>=2.1.2:ruby/rubygem-web-console2

NO_ARCH=	yes
USE_RUBY=	yes
USES=		cpe gem

CPE_VENDOR=	rubyonrails
CPE_PRODUCT=	ruby_on_rails

OPTIONS_DEFINE=	MEMCACHE_CLIENT
MEMCACHE_CLIENT_DESC=	MemCache-Client support

MEMCACHE_CLIENT_RUN_DEPENDS=	rubygem-memcache-client>=1.2.0:ruby/rubygem-memcache-client

.include <bsd.port.mk>
