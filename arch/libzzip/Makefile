#
# $Id$
#
DISTNAME=	zziplib-${PORTVERSION}
PORTNAME=	libzzip
PORTVERSION=	0.13.62
CATEGORIES=	devel
#MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}13/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library to provide transparent read access to zipped files

BUILD_DEPENDS=	zip:arch/zip

USES=		gmake pathfix python:2.7,build tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_XMLTO=":"
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+=  --disable-sdl


.include <bsd.port.mk>
#EOF

