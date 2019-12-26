# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD:ruby/Makefile 461903 2018-02-15 12:46:55Z sunpoet $

PORTNAME=	activesupport
PORTVERSION=	4.2.10
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Utility classes and extension that are required by Rails MVC Framework


RUN_DEPENDS=	rubygem-i18n>=0.7:ruby/rubygem-i18n \
		rubygem-minitest>=5.1:ruby/rubygem-minitest \
		rubygem-thread_safe>=0.3.4:ruby/rubygem-thread_safe \
		rubygem-tzinfo>=1.1:ruby/rubygem-tzinfo

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
