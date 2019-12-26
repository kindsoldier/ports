# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-activestorage52/Makefile 510449 2019-08-31 21:58:42Z sunpoet $

PORTNAME=	activestorage
PORTVERSION=	6.0.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Attach cloud and local files in Rails applications

RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:rails6/rubygem-actionpack \
		rubygem-activerecord>=${PORTVERSION}:rails6/rubygem-activerecord \
		rubygem-activejob>=${PORTVERSION}:rails6/rubygem-activejob \
		rubygem-marcel>=0.3.1:ruby/rubygem-marcel

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes


.include <bsd.port.mk>
