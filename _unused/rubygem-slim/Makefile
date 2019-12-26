# $FreeBSD: head/devel/rubygem-slim/Makefile 440376 2017-05-07 21:26:54Z sunpoet $

PORTNAME=	slim
PORTVERSION=	3.0.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Template language whose goal is reduce the syntax to essential parts


RUN_DEPENDS=	rubygem-temple>=0.7.6:ruby/rubygem-temple \
		rubygem-tilt>=1.3.3:ruby/rubygem-tilt

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/slimrb

.include <bsd.port.mk>
