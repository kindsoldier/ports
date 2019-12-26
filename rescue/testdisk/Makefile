#
# $Id$
#
PORTNAME=	testdisk
PORTVERSION=	7.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.cgsecurity.org/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	flz@FreeBSD.org
COMMENT=	Tool to check and undelete partitions

LIB_DEPENDS=	libjpeg.so:graph/libjpeg
#LIB_DEPENDS=	libntfs.so:system/ntfsprogs
LIB_DEPENDS+=	libiconv.so:text/libiconv
BUILD_DEPENDS+=	tune2fs:system/e2fsprogs


USES=		tar:bzip2 gmake
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${PREFIX}/include
CFLAGS+=	-I${PREFIX}/include
LDFLAGS+=	-L${PREFIX}/lib
CONFIGURE_ARGS=	--disable-qt --without-ewf


#CONFIGURE_ARGS+=	--without-iconv
#CONFIGURE_ARGS+=	--without-ext2fs
CONFIGURE_ARGS+=	--without-ntfs3g
#CONFIGURE_ARGS+=	--without-ntfs
CONFIGURE_ARGS+=	--without-reiserfs
CONFIGURE_ARGS+= --with-iconv-lib=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-iconv-includes=${LOCALBASE}/include

CONFIGURE_ARGS+= --with-ntfs-lib=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-ntfs-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --without-uuid

CONFIGURE_ARGS+= --with-ext2fs-lib=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-ext2fs-includes=${LOCALBASE}/include
LDFLAGS+=	-L${PREFIX}/lib -lcom_err
LIBS+=		-L${PREFIX}/lib -lcom_err

post-patch:
	${REINPLACE_CMD} -e 's|/doc/.(PACKAGE)-.(VERSION)|/doc/${PORTNAME}|' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/doc\/testdisk\/html/d' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
