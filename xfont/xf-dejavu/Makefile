#
# $Id$
#
PORTNAME=	dejavu
PORTVERSION=	2.37
CATEGORIES=	x11-fonts
#MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-fonts-ttf-${PORTVERSION}
PKGNAMEPREFIX=	xf-
MASTER_SITES=	https://github.com/dejavu-fonts/dejavu-fonts/releases/download/version_${PORTVERSION:R}_${PORTVERSION:E}/


RUN_DEPENDS+= mkfontscale:xutil/mkfontscale
RUN_DEPENDS+= mkfontdir:xutil/mkfontdir
RUN_DEPENDS+= fc-cache:x11/libfontconfig
BUILD_DEPENDS+= ${RUN_DEPENDS}


MAINTAINER=	onborodin@gmail.com
COMMENT=	Bitstream Vera Fonts clone with a wider range of characters

NO_BUILD=	yes
USES+=		tar:bzip2

FONTS_DIR=	${PREFIX}/share/fonts/X11/TTF
FC_CONF_DIR=	${PREFIX}/etc/fonts

PLIST_SUB+= FCDIR_REL="etc/fonts/conf.avail"
PLIST_SUB+= FCDIR_LINKS="etc/fonts/conf.d"
PLIST_SUB+= FONTSDIR_REL="share/fonts/X11/TTF"

do-install:
	${MKDIR} ${STAGEDIR}${FONTS_DIR} 
	${MKDIR} ${STAGEDIR}${FC_CONF_DIR}/conf.avail
	${MKDIR} ${STAGEDIR}${FC_CONF_DIR}/conf.d
	${INSTALL_DATA} ${WRKSRC}/fontconfig/*.conf ${STAGEDIR}${FC_CONF_DIR}/conf.avail
	${INSTALL_DATA} ${WRKSRC}/ttf/*.ttf ${STAGEDIR}${FONTS_DIR}
	cd ${STAGEDIR}${FC_CONF_DIR}/conf.d && ${LN} -fs ../conf.avail/*dejavu*.conf .

#post-install:
#	${LOCALBASE}/bin/fc-cache -f -v ${FONTS_DIR}
#	${LOCALBASE}/bin/mkfontdir ${FONTS_DIR}
#	${LOCALBASE}/bin/mkfontscale ${FONTS_DIR}

.include <bsd.port.mk>
#EOF
