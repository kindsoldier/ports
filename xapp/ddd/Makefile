# Created by: David O'Brien <obrien@NUXI.com>
# $FreeBSD: head/devel/ddd/Makefile 424411 2016-10-21 12:51:40Z mat $

PORTNAME=	ddd
PORTVERSION=	3.3.12
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	sergio@softshark.org
COMMENT=	Data Display Debugger -- a common graphical front-end for GDB/DBX/XDB

USES=		gmake
GNU_CONFIGURE=	yes

CFLAGS+=	-Wno-deprecated
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--with-motif-libraries="${LOCALBASE}" \
		--with-readline-libraries=/usr/lib

PLIST_SUB=	VERSION=${PORTVERSION}

DOCS=		AUTHORS INSTALL PROBLEMS README TIPS TODO \
		doc/html/ddd.html doc/ddd-paper.ps \
		doc/ddd-themes.pdf doc/ddd.pdf
INFO=		ddd ddd-themes


pre-patch:
	${RM}  ${WRKSRC}/ddd/ddd.info*
	${RM} ${WRKSRC}/ddd/ddd-themes.info*

pre-configure:
	${FIND} ${WRKSRC} -name configure | ${XARGS} ${REINPLACE_CMD} -e "s|-O2||"

post-configure:
	${ECHO_CMD} "LIBXM = ${LOCALBASE}/lib/libXm.so" >> ${WRKSRC}/ddd/Makefile

#post-install:
#	${MKDIR} ${STAGEDIR}${DOCSDIR}
#.for file in ${DOCS}
#	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
#.endfor
#	${GZIP_CMD} ${STAGEDIR}${DOCSDIR}/*.ps

check:
	cd ${WRKSRC} ; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} check

.include <bsd.port.mk>
