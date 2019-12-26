# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD:ruby/Makefile 466743 2018-04-07 16:33:58Z sunpoet $

PORTNAME=	public_suffix
PORTVERSION=	3.0.2
CATEGORIES=	dns rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby domain name parser based on the Public Suffix List


PATCH_DEPENDS=	public-suffix-list>=0:misc/public-suffix-list

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

post-patch:
	@${CP} ${LOCALBASE}/share/public_suffix_list/public_suffix_list.dat ${WRKSRC}/data/definitions.txt

.include <bsd.port.mk>
