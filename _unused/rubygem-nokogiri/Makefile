# $FreeBSD: head/textproc/rubygem-nokogiri/Makefile 450224 2017-09-20 16:32:47Z sunpoet $

PORTNAME=	nokogiri
PORTVERSION=	1.8.4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	HTML, XML, SAX, and Reader parser


BUILD_DEPENDS=	rubygem-pkg-config>=1.1.7:ruby/rubygem-pkg-config
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt

CONFIGURE_ARGS=	--use-system-libraries
USE_RUBY=	yes
USES=		gem pkgconfig

PLIST_FILES=	bin/nokogiri

post-install:
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -name '*.o' -o -name '*.so' | ${XARGS} ${STRIP_CMD}
	${RMDIR} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ports/

.include <bsd.port.mk>
