# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-actioncable52/Makefile 510452 2019-08-31 21:58:58Z sunpoet $

PORTNAME=	actioncable
PORTVERSION=	5.2.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrated WebSockets for Rails


RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:rails5/rubygem-actionpack \
		rubygem-nio4r>=2.0:ruby/rubygem-nio4r \
		rubygem-websocket-driver>=0.6.1:rails5/rubygem-websocket-driver

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
