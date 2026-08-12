#
# $Id: Makefile 1600 2008-08-19 23:03:25Z ziggi $
# $URL: file:///usr2/svn/ports5/multimedia-libs/libao/Makefile $
#
PORTNAME=	libao
PORTVERSION=	1.2.0
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/ao/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Portable audio output library

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --disable-arts
CONFIGURE_ARGS+= --disable-nas
CONFIGURE_ARGS+= --disable-esd
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

PLIST_FILES+=	man/man5/libao.conf.5.gz

post-patch:
	${REINPLACE_CMD} -e 's|plugins-$$PLUGIN_VERSION|plugins|' \
	    ${WRKSRC}/configure ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/SUBDIRS/s|doc||' \
	    ${WRKSRC}/Makefile.in


.include <bsd.port.mk>
#EOF

