#
# $Id: Makefile 2619 2009-09-27 20:12:17Z root $
# $URL: file:///usr2/svn/ports5/devel/pkg-config/Makefile $
#
PORTNAME=	pkg-config
PORTVERSION=	0.25
CATEGORIES=	devel
MASTER_SITES=	http://pkgconfig.freedesktop.org/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A utility to retrieve information about installed libraries

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-pc-path=${LOCALBASE}/lib/pkgconfig
CONFIGURE_ARGS+= --disable-threads
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

post-patch:
	${REINPLACE_CMD} -e 's|install-data-am: install-dist_docDATA|install-data-am: |' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
