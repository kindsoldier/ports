# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/rubygem-railties52/Makefile 510464 2019-08-31 21:59:58Z sunpoet $

PORTNAME=	railties
PORTVERSION=	6.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rails internals bootup, plugins, generators, and rake tasks


RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:rails6/rubygem-actionpack \
		rubygem-activesupport>=${PORTVERSION}:rails6/rubygem-activesupport \
		rubygem-method_source>=0:ruby/rubygem-method_source \
		rubygem-rake>=0.8.7:ruby/rubygem-rake \
		rubygem-thor>=0.19.0:ruby/rubygem-thor

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/rails


.include <bsd.port.mk>
