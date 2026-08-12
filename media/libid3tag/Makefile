#
# $Id$
#
PORTNAME=	libid3tag
PORTVERSION=	0.15.1b
CATEGORIES=	audio
#MASTER_SITES+=	${MASTER_SITE_SOURCEFORGE} 
MASTER_SITES+=	ftp://ftp.mars.org/pub/mpeg/
MASTER_SITE_SUBDIR=	mad

MAINTAINER=	onborodin@gmail.com
COMMENT=	ID3 tags library (part of MAD project)

USES+=		gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes

post-patch:
	${REINPLACE_CMD} -e 's|echo aout|echo elf|g' \
	    	${WRKSRC}/configure

post-build:
	cd ${WRKSRC} && CONFIG_FILES=id3tag.pc \
	    CONFIG_HEADERS= ${SH} ./config.status

post-stage:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/id3tag.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig

.include <bsd.port.mk>
#EOF
