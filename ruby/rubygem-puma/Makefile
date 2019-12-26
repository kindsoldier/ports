# Created by: Steve Wills <swills@freebsd.org>
# $FreeBSD: head/www/rubygem-puma/Makefile 508793 2019-08-12 19:47:03Z sunpoet $

PORTNAME=	puma
PORTVERSION=	4.3.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast, multithreaded and highly concurrent ruby web server
USES=		gem shebangfix ssl
USE_RUBY=	yes

PLIST_FILES=	bin/puma bin/pumactl

SHEBANG_FILES=	tools/jungle/init.d/run-puma

.include <bsd.port.mk>
