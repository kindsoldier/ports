# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD:ruby/Makefile 450837 2017-09-28 11:01:51Z sunpoet $

PORTNAME=	activemodel
PORTVERSION=	4.2.10
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Toolkit for building modeling frameworks


RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-builder>=3.2.2:ruby/rubygem-builder

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
