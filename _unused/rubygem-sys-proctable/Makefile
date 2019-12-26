# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/sysutils/rubygem-sys-proctable/Makefile 447806 2017-08-11 21:39:17Z sunpoet $

PORTNAME=	sys-proctable
PORTVERSION=	1.1.5
DISTVERSIONSUFFIX=	-universal-freebsd
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface for getting process information


RUN_DEPENDS=	rubygem-ffi>=0:ruby/rubygem-ffi

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

post-install:
	cd ${STAGEDIR}${PREFIX}/lib/ruby/gems/${RUBY_VER}/specifications/ \
	  && cp ${PORTNAME}-${PORTVERSION}-universal-freebsd.gemspec \
	        ${PORTNAME}-${PORTVERSION}.gemspec

.include <bsd.port.mk>
