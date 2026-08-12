#
# $Id: Makefile 2383 2009-09-10 22:34:53Z root $
# $URL: file:///usr2/svn/ports5/multimedia-libs/libmad/Makefile $
#
PORTNAME=	libmad
PORTVERSION=	0.15.1b
CATEGORIES=	audio
#MASTER_SITES+=	SF ${MASTER_SITE_SOURCEFORGE} 
MASTER_SITES+=	ftp://ftp.mars.org/pub/mpeg/
MASTER_SITE_SUBDIR=	mad mad/files/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Libmad library (part of MAD project)

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS=	--disable-debugging --enable-sso
CONFIGURE_ARGS+= --enable-accuracy

CONFIGURE_ARGS=	--disable-debugging --enable-sso

post-patch:
	${SED} -e 's|%PREFIX%|${PREFIX}|g ; s|%VERSION%|${PORTVERSION}|g' \
		${FILESDIR}/mad.pc.in > ${WRKDIR}/mad.pc
	${REINPLACE_CMD} -e 's| -fforce-mem||' ${WRKSRC}/configure

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKDIR}/mad.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libmad.so.2 libmad.so

a:
	cd ${WRKSRC} && ${MKDIR} config
	cd ${WRKSRC} && ${ACLOCAL} -I . -I ${LOCALBASE}/share/aclocal
	cd ${WRKSRC} && ${AUTOHEADER}
	cd ${WRKSRC} && ${LIBTOOLIZE} --copy --force
	cd ${WRKSRC} && touch NEWS AUTHORS ChangeLog
	cd ${WRKSRC} && ${AUTOMAKE} --add-missing --copy
	cd ${WRKSRC} && ${AUTOCONF}


.include <bsd.port.mk>
#EOF
