#
# $Id$
#
PORTNAME=	liba52
PORTVERSION=	0.7.4
CATEGORIES=	audio
MASTER_SITES=	http://liba52.sourceforge.net/files/
DISTNAME=	a52dec-${PORTVERSION:S/.b/b/}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A free library for decoding ATSC A/52 streams, aka AC-3

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-oss
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB=	yes 
CFLAGS+=        -fPIC

PLIST_FILES+=	man/man1/a52dec.1.gz
PLIST_FILES+=	man/man1/extract_a52.1.gz

HEADER_FILES=	liba52/a52_internal.h


post-install:
.for file in ${HEADER_FILES}
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/include/a52dec/
.endfor

.include <bsd.port.mk>
#EOF
