#
# $Id: Makefile 1789 2008-09-18 19:37:33Z root $
#
PORTNAME=	cdrtools
CATEGORIES=	sysutils audio

MASTER_SITES+=	MASTER_SITES=	SF/${PORTNAME}
#MASTER_SITES+=	http://ftp.berlios.de/pub/cdrecord/alpha/
#MASTER_SITES+=	http://ftp.berlios.de/pub/cdrecord/
PORTVERSION_MAJOR= 3.01
PORTVERSION=	${PORTVERSION_MAJOR}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Cdrecord and cdda2wav (CD-DA ripper) allow you to record CD-R's

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv


WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION_MAJOR}
USES+=		gmake tar:bz2
MAKE_ARGS+= INS_BASE="${PREFIX}" 
MAKE_ARGS+= LDOPTX="-L${LOCALBASE}/lib -lcam" 
MAKE_ARGS+= CONFFLAGS=${CONFIGURE_TARGET}
MAKE_ENV+=  COPTX="-DBSD_SCSI_SENSE_BUG ${CFLAGS} -I${LOCALBASE}/include" 

MAKE_ARGS+= CC='${CC} -I${WRKSRC}/libparanoia'
CONFIGURE_ENV+= CC='${CC} -I${WRKSRC}/libparanoia'

MAKE_JOBS_UNSAFE=	yes


#CC= gcc
#CONFIGURE_TARGET=arm-freebsd
#CONFIGURE_TARGET=i686-freebsd

CDRTLSTARGET=	${ARCH}-${OPSYS:tl}-cc
CDRTLSXARCH!=	uname -m



post-extract:
.for i in config.guess config.sub
.  for j in autoconf conf cdda2wav
	${CP} -fp ${PORTSDIR}/Templates/${i} ${WRKSRC}/${j}
.  endfor
.endfor
	${RM} ${WRKSRC}/TARGETS/55scgskeleton
	${RM} ${WRKSRC}/TARGETS/55rscsi
	${RM} ${WRKSRC}/TARGETS/55btcflash

	cd ${WRKSRC}/RULES && ${LN} -s i386-freebsd-cc.rul arm-freebsd-cc.rul
	cd ${WRKSRC}/RULES && ${LN} -s i386-freebsd-cc.rul arm-freebsd-clang.rul

	cd ${WRKSRC}/RULES && ${LN} -s i386-freebsd-cc.rul amd64-freebsd-cc.rul
	cd ${WRKSRC}/RULES && ${LN} -s i386-freebsd-cc.rul amd64-freebsd-clang.rul

	${LN} -sf ${WRKSRC}/RULES/i386-freebsd-cc.rul \
		${WRKSRC}/RULES/${CDRTLSXARCH}-${OPSYS:tl}-cc.rul


#	cd ${WRKSRC}/RULES && ${LN} -s i386-freebsd-gcc.rul arm-freebsd-gcc.rul
	touch ${WRKSRC}/RULES/rules.in0
	${RM} ${WRKSRC}/TARGETS/55btcflash


#.for i in config.guess config.sub
#.for j in autoconf conf cdda2wav
#	${CP} -fp ${PORTSDIR}/Templates/${i} ${WRKSRC}/${j}
#.endfor
#.endfor

.if ${CDRTLSXARCH} != "i386"
	${LN} -sf ${WRKSRC}/RULES/i386-freebsd-cc.rul \
		${WRKSRC}/RULES/${CDRTLSXARCH}-${OPSYS:tl}-cc.rul
.endif



post-install:
	cd ${WRKSRC}/libsiconv/tables && ${GMAKE} ninstall DESTDIR=${STAGEDIR}

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  isoinfo.8 devdump.8 
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  isoinfo.8 isovfy.8 
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  isoinfo.8 isodump.8 
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  mkisofs.8 mkhybrid.8

.include <bsd.port.mk>
#EOF
