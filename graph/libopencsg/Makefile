# Created by: Michael Reifenberger <mr@FreeBSD.org>
# $FreeBSD: head/graphics/opencsg/Makefile 516845 2019-11-05 22:16:14Z zeising $

PORTNAME=	opencsg
PORTVERSION=	1.4.2
CATEGORIES=	graphics
MASTER_SITES=	http://www.opencsg.org/
DISTNAME=	OpenCSG-${PORTVERSION}
PKGNAMEPREFIX=  lib

MAINTAINER=	mr@FreeBSD.org
COMMENT=	Constructive Solid Geometry rendering library

LIB_DEPENDS+= libGL.so:graph/libmesa
LIB_DEPENDS+= libglapi.so:graph/libmesa
LIB_DEPENDS+= libGLEW.so:graph/libGLEW

USES=		compiler:c++11-lang gmake
WRKSRC=		${WRKDIR}/${DISTNAME}/src

DESTDIRNAME=    INSTALL_ROOT

do-configure:
	cd ${WRKSRC} && qmake .


.include <bsd.port.mk>
