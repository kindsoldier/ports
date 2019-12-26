#
# $Id: Makefile 2461 2009-09-16 08:54:13Z root $
# $URL: file:///usr2/svn/ports5/lang/tcl84/Makefile $
#
PORTNAME=	tcl
PORTVERSION=	8.4.19
CATEGORIES=	lang
MASTER_SITES=	SF/tcl/Tcl/${PORTVERSION}
MASTER_SITE_SUBDIR=	tcl
DISTNAME=	${PORTNAME}${PORTVERSION}-src

MAINTAINER=	onborodin@gmail.com
COMMENT=	Tool Command Language

#PATCH_DIST_ARGS=	-d ${WRKDIR}/${DISTNAME} -E ${PATCH_DIST_STRIP}
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}/unix
INSTALLS_SHLIB=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-shared 
#CONFIGURE_ARGS+= --disable-shared 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
#CONFIGURE_ARGS+= --enable-threads

##PLIST_SUB= VERSION="${PORTVERSION_MAJOR:R}"

#post-configure:
#	${REINPLACE_CMD} -e "s|-lc|-pthread|g" ${WRKSRC}/Makefile

#post-install:
#	cd ${PREFIX}/bin; \
#	    ${LN} -sf ${PORTNAME}sh${PORTVERSION_MAJOR} ${PORTNAME}sh
#	cd ${PREFIX}/lib; \
#	    ${LN} -sf lib${PORTNAME}${PORTVERSION_MAJOR}.so lib${PORTNAME}.so
#	cd ${PREFIX}/lib; \
#	    ${LN} -sf lib${PORTNAME}stub${PORTVERSION_MAJOR}.a lib${PORTNAME}stub.a

test:
	cd ${WRKSRC} && ${MAKE} test 


.include <bsd.port.mk>
#EOF
