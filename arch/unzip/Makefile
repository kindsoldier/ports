#
# $Id: Makefile 2181 2009-08-17 14:49:00Z ziggi $
#
PORTNAME=	unzip
PORTVERSION=	6.0
CATEGORIES?=	archivers
#MASTER_SITES+=	ftp://ftp.info-zip.org/pub/infozip/src/ 
#MASTER_SITES+=  ${MASTER_SITE_TEX_CTAN:S,%SUBDIR%,tools/zip/info-zip/src/,}
#DISTNAME=	${PORTNAME}552
#MASTER_SITES=	${MASTER_SITE_SOURCEFORGE}
#MASTER_SITE_SUBDIR=	infozip infozip/files
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//g}
CATEGORIES=	archivers

MAINTAINER=	onborodin@gmail.com
COMMENT=	List, test and extract compressed files in a ZIP archive

.include <bsd.port.pre.mk>


ALL_TARGET?=	bsd

.if ${ARCH} == "amd64"
ALL_TARGET=		bsd
.elif ${ARCH} == "i386"
ALL_TARGET=	freebsd
.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
ALL_TARGET=	bsd
.endif



MAKEFILE=	unix/Makefile
USES+=		gmake
CFLAGS=		-O2

LOCAL_UNZIP=	${CFLAGS} -DLARGE_FILE_SUPPORT -DUNICODE_SUPPORT -DUTF8_MAYBE_NATIVE -DHAVE_DIRENT_H -DHAVE_TERMIOS_H -D_MBCS

MAKE_ENV=	LOCAL_UNZIP="${LOCAL_UNZIP}" D_USE_BZ2=-DUSE_BZIP2 L_BZ2=-lbz2

do-configure:
	cd ${BUILD_WRKSRC} && ${LN} -sf ${MAKEFILE} .

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/bin
	${MKDIR} -p ${STAGEDIR}${PREFIX}/man/man1
.for file in funzip unzip unzipsfx
	${INSTALL_PROGRAM} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/bin
.endfor
	${LN} -sf unzip ${STAGEDIR}${PREFIX}/bin/zipinfo
	${INSTALL_SCRIPT} ${WRKSRC}/unix/zipgrep ${STAGEDIR}${PREFIX}/bin
.for f in funzip.1 unzip.1 unzipsfx.1 zipgrep.1 zipinfo.1 
	${INSTALL_MAN} ${WRKSRC}/man/${f} ${STAGEDIR}${PREFIX}/man/man1
.endfor


.include <bsd.port.post.mk>
#EOF
