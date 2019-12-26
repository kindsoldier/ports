#
# $Id$
#
PORTNAME=	faac
PORTVERSION=	1.28
CATEGORIES=	audio
#MASTER_SITES+=	http://downloads.sourceforge.net/faac/
#MASTER_SITES+=	http://downloads.sourceforge.net/project/faac/faac-src/faac-1.28/
#MASTER_SITE_SUBDIR=	faac
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-src/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib


MAINTAINER=	onborodin@gmail.com
COMMENT=	MPEG-2 and MPEG-4 AAC audio encoder

USE_DOS2UNIX=	yes
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-portbld-freebsd${OSREL}
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CONFIGURE_ARGS+= --without-mp4v2
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

PLIST_FILES+=	man/man1/faac.1.gz


_USES+=	perl5

_BUILD_DEPENS+=	automake:devel/automake
_BUILD_DEPENS+=	autoconf:devel/autoconf
_BUILD_DEPENS+=	libtool:devel/libtool

_post-patch:
	${FIND} ${WRKSRC} -type f | ${XARGS} ${PERL} -pi -e "s|\r\n|\n|"  
	cd ${WRKSRC} && ${ACLOCAL} -I . -I ${LOCALBASE}/share/aclocal
	cd ${WRKSRC} && ${AUTOHEADER} 
	cd ${WRKSRC} && ${LIBTOOLIZE} --copy --force
	cd ${WRKSRC} && ${AUTOMAKE} --add-missing
	cd ${WRKSRC} && ${AUTOCONF}

.include <bsd.port.mk>
#EOF
