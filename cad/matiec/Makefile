#
# $Id$
#
PORTNAME=	matiec
PORTVERSION=	1.0
CATEGORIES=	devel
MASTER_SITES=	https://bitbucket.org/mjsousa/matiec/get/ #default.tar.gz
DISTNAME=       default

WRKSRC= ${WRKDIR}/mjsousa-matiec-0b275a2c7c2b

MAINTAINER=	ports@FreeBSD.org
COMMENT=	IEC SL compiler

USES=		gmake #autoreconf libtool
USE_CSTD=	gnu89
CC=             gcc
CXX=            g++
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-patch:
	cd  ${WRKSRC} && autoreconf -fiv

.include <bsd.port.mk>
#EOF
