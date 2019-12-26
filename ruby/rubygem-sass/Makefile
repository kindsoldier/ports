# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-sass/Makefile 508784 2019-08-12 19:46:16Z sunpoet $

PORTNAME=	sass
PORTVERSION=	3.7.4
CATEGORIES=	textproc ruby
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sass is an extension of CSS3

RUN_DEPENDS=	rubygem-sass-listen>=4.0.0:ruby/rubygem-sass-listen

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/sass bin/sass-convert bin/scss

SHEBANG_FILES=	extra/sass-spec-ref.sh

.include <bsd.port.mk>
