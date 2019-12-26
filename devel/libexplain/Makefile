# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/libexplain/Makefile 395047 2015-08-22 17:48:35Z hrs $

PORTNAME=	libexplain
PORTVERSION=	1.3.${PATCHLEVEL}
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION:R}
DISTNAME=	${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library which may be used to explain Unix and Linux system call errors

BUILD_DEPENDS=	gsed:text/gsed
#RUN_DEPENDS=	lsof:sysutils/lsof

USES=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_header_linux_kd_h=no
ac_cv_prog_SED=${LOCALBASE}/bin/gsed
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

PATCHLEVEL=	D012

.include <bsd.port.mk>
#EOF
