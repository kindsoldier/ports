# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD:ruby/Makefile 458838 2018-01-12 14:25:05Z sunpoet $

PORTNAME=	multi_json
PORTVERSION=	1.13.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library provide swappable JSON backends


OPTIONS_DEFINE=	JSON JSON_PURE YAJL_RUBY
OPTIONS_DEFAULT=JSON_PURE
JSON_DESC=	JSON implementation as a Ruby extension in C
JSON_PURE_DESC=	JSON implementation in pure Ruby
YAJL_RUBY_DESC=	Yajl JSON stream-based parser library

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

JSON_RUN_DEPENDS=	rubygem-json>=0:ruby/rubygem-json
JSON_PURE_RUN_DEPENDS=	rubygem-json_pure>=0:ruby/rubygem-json_pure
YAJL_RUBY_RUN_DEPENDS=	rubygem-yajl-ruby>=0:ruby/rubygem-yajl-ruby

.include <bsd.port.mk>
