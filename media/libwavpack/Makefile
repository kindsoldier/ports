#
# $Id$
#
PORTNAME=	wavpack
PORTVERSION=	4.70.0
CATEGORIES=	audio
MASTER_SITES=	http://www.wavpack.com/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Compress (and restore) both 16 and 24-bit audio files in .wav format

USES+=		tar:bzip2
USE_DOS2UNIX=	cli/*.[ch] include/*.h src/*.[ch]
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man


FILES=		include/wavpack.h src/unpack3.c src/words.c cli/md5.c

PLIST_FILES+=	man/man1/wavpack.1.gz
PLIST_FILES+=	man/man1/wvgain.1.gz
PLIST_FILES+=	man/man1/wvunpack.1.gz

post-patch:
.for i in ${FILES}
	cd ${WRKSRC} && ${CP} ${i} ${i}.orig && \
		col < ${i}.orig > ${i}
.endfor

.include <bsd.port.mk>
#EOF
