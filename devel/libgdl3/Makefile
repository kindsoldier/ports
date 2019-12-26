# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/gdl/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gdl
PORTVERSION=	3.28.0
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Components intended to be shared between GNOME development tools

#USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool introspection:build libxml2
USES=		gmake pathfix pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

FILES= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/*.in
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in


post-patch:
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|apr-1-config|apr-config|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|svn_fs-1|svn_fs|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|svn_client-1|svn_client|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|svn_ra-1|svn_ra|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|svn_subr-1|svn_subr|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|svn_delta-1|svn_delta|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|subversion-1|subversion|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|apr-util-1|apr-util|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|apr-1|apr|g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|gtk+-3.0|gtk3|g' ${FILES}
	${REINPLACE_CMD} -e 's|gdl-3.0|gdl3|g' ${FILES}
	${REINPLACE_CMD} -e 's|gdl-3|gdl3|g' ${FILES}

	cd ${WRKSRC} && ${CP} gdl-3.0.pc.in gdl3.pc.in


.include <bsd.port.mk>
