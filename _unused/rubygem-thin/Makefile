# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/www/rubygem-thin/Makefile 445402 2017-07-09 10:26:53Z sunpoet $

PORTNAME=	thin
PORTVERSION=	1.7.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast and simple Ruby web server


RUN_DEPENDS=	rubygem-daemons>=1.0.9:ruby/rubygem-daemons \
		rubygem-eventmachine>=1.0.4:ruby/rubygem-eventmachine \
		rubygem-rack>=1.6:ruby/rubygem-rack

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/thin

.include <bsd.port.mk>
