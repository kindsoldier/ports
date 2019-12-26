# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/dns/public_suffix_list/Makefile 466743 2018-04-07 16:33:58Z sunpoet $

PORTNAME=	public-suffix-list
PORTVERSION=	20180328
CATEGORIES=	dns
DISTNAME=       public_suffix_list

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Public Suffix List by Mozilla

#SLAVEDIRS=	dns/p5-Mozilla-PublicSuffix dns/rubygem-public_suffix dns/rubygem-public_suffix_service

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/public_suffix_list.dat \
		%%DATADIR%%/test_psl.txt

GH_ACCOUNT=	publicsuffix
GH_PROJECT=	list
GH_TAGNAME=	f85ba38
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/public_suffix_list.dat ${WRKSRC}/tests/test_psl.txt ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
