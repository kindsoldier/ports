# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD:ruby/Makefile 462243 2018-02-18 13:38:41Z sunpoet $

PORTNAME=	sass-rails
PORTVERSION=	5.0.7
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sass adapter for the Rails asset pipeline


RUN_DEPENDS=	rubygem-railties4>=4.0.0:ruby/rubygem-railties4 \
		rubygem-sass>=3.1:ruby/rubygem-sass \
		rubygem-sprockets3>=3.0.3:ruby/rubygem-sprockets3 \
		rubygem-sprockets-rails>=2.0:ruby/rubygem-sprockets-rails \
		rubygem-tilt>=1.1:ruby/rubygem-tilt

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
