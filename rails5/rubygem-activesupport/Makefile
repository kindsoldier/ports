# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-activesupport52/Makefile 515789 2019-10-27 11:31:05Z sunpoet $

PORTNAME=	activesupport
PORTVERSION=	5.2.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Utility classes and extension that are required by Rails MVC Framework

RUN_DEPENDS=	rubygem-concurrent-ruby>=1.1.5:ruby/rubygem-concurrent-ruby \
		rubygem-i18n>=0.7:ruby/rubygem-i18n \
		rubygem-minitest>=5.1:ruby/rubygem-minitest \
		rubygem-tzinfo>=1.1:ruby/rubygem-tzinfo \
		rubygem-zeitwerk>=0:ruby/rubygem-zeitwerk

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
