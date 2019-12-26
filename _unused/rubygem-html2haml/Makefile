# Created by: Horia Racoviceanu <horia@racoviceanu.com>
# $FreeBSD: head/www/rubygem-html2haml/Makefile 439894 2017-05-01 12:47:45Z sunpoet $

PORTNAME=	html2haml
PORTVERSION=	2.2.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Converts HTML into Haml


RUN_DEPENDS=	rubygem-erubis>=2.7.0:ruby/rubygem-erubis \
		rubygem-haml>=4.0:ruby/rubygem-haml \
		rubygem-nokogiri>=1.6.0:ruby/rubygem-nokogiri \
		rubygem-ruby_parser>=3.5:ruby/rubygem-ruby_parser

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/html2haml

.include <bsd.port.mk>
