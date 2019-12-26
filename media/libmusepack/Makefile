#
# $Id$
#
PORTNAME=	musepack
PORTVERSION=	2011.08.10
CATEGORIES=	audio
MASTER_SITES=	http://files.musepack.net/source/
DISTNAME=	${PORTNAME}_src_r475
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Decoder, encoder and replaygain for musepack (mpc)

CONFLICTS=	libmpcdec-[0-9]*

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake


#USE_AUTOTOOLS=	aclocal:110 autoheader:262 libtoolize automake:110 autoconf:262 libtool:22
#ACLOCAL_ARGS=	-I. -I ${LOCALBASE}/share/aclocal
#AUTOMAKE_ARGS=	--add-missing

.include <bsd.port.pre.mk>


post-patch:
	${CHMOD} a+x ${WRKSRC}/configure
	${CHMOD} a+x ${WRKSRC}/install-sh
	${LN} -sf ${WRKSRC} ${WRKSRC}/config 

_pre-configure:
	cd ${WRKSRC} && ${MKDIR} config
	cd ${WRKSRC} && ${ACLOCAL} -I . -I ${LOCALBASE}/share/aclocal
	cd ${WRKSRC} && ${AUTOHEADER}
	cd ${WRKSRC} && ${LIBTOOLIZE} --copy --force
	cd ${WRKSRC} && ${AUTOMAKE} --add-missing --copy
	cd ${WRKSRC} && ${AUTOCONF}

.include <bsd.port.post.mk>
#EOF
