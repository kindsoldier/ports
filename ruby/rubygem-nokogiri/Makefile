# $FreeBSD: head/textproc/rubygem-nokogiri/Makefile 508867 2019-08-13 20:51:27Z sunpoet $

PORTNAME=	nokogiri
PORTVERSION=	1.10.5
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	HTML, XML, SAX, and Reader parser

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error

LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt
RUN_DEPENDS=	rubygem-pkg-config>=1.1.7:ruby/rubygem-pkg-config
LIB_DEPENDS+=   libiconv.so:text/libiconv
LIB_DEPENDS+=   libintl.so:devel/gettext

USES=		gem pkgconfig
USE_RUBY=	yes

CONFIGURE_ARGS=	--use-system-libraries

PLIST_FILES=	bin/nokogiri

post-install:
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -name '*.o' -o -name '*.so' | ${XARGS} ${STRIP_CMD}
	${RMDIR} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ports/

.include <bsd.port.mk>
