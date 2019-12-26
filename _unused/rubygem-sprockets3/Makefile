# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD:ruby/Makefile 473903 2018-07-04 17:25:55Z mfechner $

PORTNAME=	sprockets
PORTVERSION=	3.7.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that preprocesses and concatenates JavaScript files


RUN_DEPENDS=	rubygem-concurrent-ruby>=1.0:ruby/rubygem-concurrent-ruby \
		rubygem-rack16>=1.0:ruby/rubygem-rack16

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

post-install:
	@${RM} ${STAGEDIR}${PREFIX}/bin/sprockets

.include <bsd.port.mk>
