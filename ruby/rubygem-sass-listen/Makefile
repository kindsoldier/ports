# $FreeBSD: head/textproc/rubygem-sass-listen/Makefile 508639 2019-08-11 16:49:56Z sunpoet $

PORTNAME=	sass-listen
PORTVERSION=	4.0.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Listens to file modifications

RUN_DEPENDS=	rubygem-rb-fsevent>=0.9.4:ruby/rubygem-rb-fsevent \
		rubygem-rb-inotify>=0.9.7:ruby/rubygem-rb-inotify \
		rubygem-rb-kqueue>=0.2:ruby/rubygem-rb-kqueue

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
