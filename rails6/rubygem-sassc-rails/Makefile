# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-sassc-rails-rails52/Makefile 513350 2019-09-30 11:15:39Z sunpoet $

PORTNAME=	sassc-rails
PORTVERSION=	2.1.2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrate SassC-Ruby into Rails


RUN_DEPENDS=	rubygem-railties>=4.0.0:rails6/rubygem-railties \
		rubygem-sassc>=2.0:ruby/rubygem-sassc \
		rubygem-sprockets-rails>=0:rails6/rubygem-sprockets-rails \
		rubygem-sprockets>=3.0:rails6/rubygem-sprockets \
		rubygem-tilt>=0:ruby/rubygem-tilt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
