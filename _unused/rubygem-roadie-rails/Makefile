# $FreeBSD:ruby/Makefile 466673 2018-04-06 16:28:00Z sunpoet $

PORTNAME=	roadie-rails
PORTVERSION=	1.3.0
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Helper for generating HTML mails in Rails applications


RUN_DEPENDS=	rubygem-railties4>=3.0:ruby/rubygem-railties4 \
		rubygem-roadie>=3.1:ruby/rubygem-roadie

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	setup.sh

.include <bsd.port.mk>
