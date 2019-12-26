# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-fugit/Makefile 510349 2019-08-31 07:57:18Z sunpoet $

PORTNAME=	fugit
PORTVERSION=	1.3.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Time tools for flor and the floraison project

RUN_DEPENDS=	rubygem-et-orbi>=1.1.8:ruby/rubygem-et-orbi \
		rubygem-raabro>=1.1:ruby/rubygem-raabro

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

# Disable rdoc
OPTIONS_EXCLUDE=DOCS

.include <bsd.port.mk>
