# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-activejob52/Makefile 509815 2019-08-25 18:16:44Z sunpoet $

PORTNAME=	activejob
PORTVERSION=	6.0.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends


RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:rails6/rubygem-activesupport \
		rubygem-globalid>=0.3.6:rails6/rubygem-globalid

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
