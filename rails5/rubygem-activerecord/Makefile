# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/databases/rubygem-activerecord52/Makefile 509816 2019-08-25 18:17:04Z sunpoet $

PORTNAME=	activerecord
PORTVERSION=	5.2.3
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Object-relational mapping layer for Rails MVC Framework

RUN_DEPENDS=	rubygem-activemodel>=${PORTVERSION}:rails5/rubygem-activemodel \
		rubygem-activesupport>=${PORTVERSION}:rails5/rubygem-activesupport
RUN_DEPENDS+=	rubygem-arel>=9.0:ruby/rubygem-arel

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
