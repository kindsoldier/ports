#
# $Id$
#
PORTNAME=	e2fsprogs
PORTVERSION=	1.46.6
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/v${PORTVERSION}

MAINTAINER=	ziggi@inbox.ru
COMMENT=	Utilities & library to manipulate ext2/3/4 filesystems

USES+=		gmake
USE_CSTD=	gnu89
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-fsck
CONFIGURE_ARGS+= --disable-e2initrd-helper
CONFIGURE_ARGS+= --with-root-prefix='${PREFIX}'
CONFIGURE_ARGS+= --disable-nls

CONFIGURE_ARGS+= --disable-fuse2fs

CPPFLAGS+=	-I${WRKSRC}/lib -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-extract:
	${CHMOD} u+w ${WRKSRC}/po/*.po
	${CHMOD} u+w ${WRKSRC}/po/*.pot
	${CHMOD} u+w ${WRKSRC}/${CONFIGURE_SCRIPT}

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "aarch64"
EXTRA_PATCHES+=	${FILESDIR}/extrapatch-no-sbrk
.endif


post-patch:
	${REINPLACE_CMD} -e 's/ install-doc-libs$$//' ${WRKSRC}/Makefile.in

post-build:
	${CC} ${CPPFLAGS} ${CFLAGS} ${LDFLAGS} -s ${LIBS} \
		-o ${WRKSRC}/fsck_ext2fs ${FILESDIR}/fsck_ext2fs.c

post-install:
	${MKDIR} ${STAGEDIR}/sbin
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man8
	${INSTALL_PROGRAM} ${WRKSRC}/fsck_ext2fs ${STAGEDIR}/sbin
	${INSTALL_MAN} ${FILESDIR}/fsck_ext2fs.8 ${STAGEDIR}${PREFIX}/man/man8
	${INSTALL_PROGRAM} ${WRKSRC}/e2fsck/e2fsck ${STAGEDIR}/sbin

	cd ${WRKSRC}/lib/ext2fs && ${GMAKE} install DESTDIR=${STAGEDIR}
	cd ${WRKSRC}/lib/et && ${GMAKE} install DESTDIR=${STAGEDIR}


.include <bsd.port.post.mk>
#EOF
