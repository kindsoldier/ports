# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD:ruby/Makefile 456756 2017-12-19 18:21:24Z sunpoet $

PORTNAME=	rails-dom-testing
PORTVERSION=	1.0.9
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Analyse and compare DOMs using Nokogiri


RUN_DEPENDS=	rubygem-activesupport4>=4.2.0:ruby/rubygem-activesupport4 \
		rubygem-nokogiri>=1.6:ruby/rubygem-nokogiri \
		rubygem-rails-deprecated_sanitizer>=1.0.1:ruby/rubygem-rails-deprecated_sanitizer

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
