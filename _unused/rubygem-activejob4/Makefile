# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD:ruby/Makefile 450840 2017-09-28 11:02:12Z sunpoet $

PORTNAME=	activejob
PORTVERSION=	4.2.10
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends


RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:ruby/rubygem-activesupport4 \
		rubygem-globalid>=0.3.0:ruby/rubygem-globalid

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
