#
# $Id$
#
PORTNAME=	twolame
PORTVERSION=	0.3.13
CATEGORIES=	audio
MASTER_SITES+=	http://downloads.sourceforge.net/twolame/
#MASTER_SITES+=	${MASTER_SITE_SOURCEFORGE}
#MASTER_SITES+=	http://www.ecs.soton.ac.uk/~njh/twolame/
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX+= lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	MPEG Audio Layer 2 encoder

LIB_DEPENDS+=	libsndfile.so:media/libsndfile

USES+=		gmake
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

PLIST_FILES+=	man/man1/twolame.1.gz

post-patch:
	${REINPLACE_CMD} -e 's| -O3||g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
