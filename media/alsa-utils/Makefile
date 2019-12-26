# Created by: Aragon Gouveia <aragon@phat.za.net>
# $FreeBSD: head/audio/alsa-utils/Makefile 433954 2017-02-12 17:19:29Z jbeich $

PORTNAME=	alsa-utils
PORTVERSION=	1.1.2
CATEGORIES=	audio
MASTER_SITES=	ftp://ftp.alsa-project.org/pub/utils/ GENTOO

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	ALSA compatibility utils

LIB_DEPENDS=	libasound.so:media/libalsa
RUN_DEPENDS=	${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:media/libalsa-plugins

USES=		gmake localbase shebangfix tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-udev-rules-dir="\$${prefix}/lib/udev"
SHEBANG_FILES=	alsa-info/alsa-info.sh alsaconf/alsaconf.in bat/alsabat-test.sh
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${.CURDIR}/../alsa-lib/files -I${LOCALBASE}/include/alsa

CONFIGURE_ARGS+= --disable-bat
CONFIGURE_ARGS+= --disable-xmlto
CONFIGURE_ARGS+= --disable-nls


post-patch:
	${REINPLACE_CMD} -e '/LIBS/s/-ldl//g; /LIBRT/s/-lrt//g;' \
		${WRKSRC}/configure
#	${REINPLACE_CMD} -e '/x"$$xmlto"/s/= xyes/!= xno/'
#		${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's/	xmlto/	$$(xmlto)/' \
#		${WRKSRC}/alsactl/Makefile.in
	${FIND} -E ${WRKSRC} -type f -regex \
		'.*\.([[:digit:]]|spec\.in|csv|xml)' -exec \
		${REINPLACE_CMD} -i .pathfix.bak \
		-e 's|/usr/share|${PREFIX}/share|g' \
		-e 's|/etc/asound\.conf|${LOCALBASE}&|g' {} +

.include <bsd.port.mk>
