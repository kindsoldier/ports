# $FreeBSD: head/www/rubygem-rack/Makefile 499727 2019-04-23 08:05:19Z mfechner $

PORTNAME=	rack
PORTVERSION=	2.0.7
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rack, a Ruby Webserver Interface

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/rackup

SHEBANG_FILES=	test/cgi/test.ru
SHEBANG_LANG=	rackup
rackup_OLD_CMD=	../../bin/rackup
rackup_CMD=	${PREFIX}/bin/rackup

.include <bsd.port.mk>
