# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 456260 2017-12-13 20:51:20Z sunpoet $

PORTNAME=	railties
PORTVERSION=	4.2.10
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rails internals bootup, plugins, generators, and rake tasks


RUN_DEPENDS=	rubygem-actionpack4>=${PORTVERSION}:ruby/rubygem-actionpack4 \
		rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-rake>=0.8.7:ruby/rubygem-rake \
		rubygem-thor>=0.18.1:ruby/rubygem-thor

CONFLICTS_INSTALL=	rubygem-railties5 rubygem-railties50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/rails

.include <bsd.port.mk>
