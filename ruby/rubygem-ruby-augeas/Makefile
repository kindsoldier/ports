#
# $Id$
#
PORTNAME=	ruby-augeas
PORTVERSION=	0.5.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for Augeas

LIB_DEPENDS=	libaugeas.so:text/augeas

CONFIGURE_ARGS=	--with-opt-include="${LOCALBASE}/include/libxml2"
USE_RUBY=	yes
USES=		gem pkgconfig


.include <bsd.port.mk>
#EOF
