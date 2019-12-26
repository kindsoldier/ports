# Created by: Daniel Roethlisberger <daniel@roe.ch>
# $FreeBSD: head/www/rubygem-sinatra/Makefile 441035 2017-05-16 18:21:55Z sunpoet $

PORTNAME=	sinatra
PORTVERSION=	2.0.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Classy web development framework in ruby


RUN_DEPENDS=	rubygem-mustermann>=1.0:ruby/rubygem-mustermann \
		rubygem-rack>=2.0:ruby/rubygem-rack \
		rubygem-rack-protection>=2.0.0:ruby/rubygem-rack-protection \
		rubygem-tilt>=2.0:ruby/rubygem-tilt \
		rubygem-thin>=0:ruby/rubygem-thin \
		rubygem-haml>=0:ruby/rubygem-haml \
		rubygem-builder>=0:ruby/rubygem-builder


NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
