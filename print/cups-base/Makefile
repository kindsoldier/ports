#
# $Id$
#
PORTNAME=	cups
PORTVERSION=	2.1.4
CATEGORIES=	print
PKGNAMESUFFIX=	-base
DISTVERSIONPREFIX=release-
USE_GITHUB=	yes
GH_ACCOUNT=	apple

MAINTAINER=	onborodin@gmail.com
COMMENT=	Common UNIX Printing System: ${COMMENT2}

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi
LIB_DEPENDS+=	libdbus.so:gnome/dbus
RUN_DEPENDS+=	gs:print/ghostscript

USES+=		gmake
GNU_CONFIGURE=	yes
DESTDIRNAME=	DSTROOT


CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
DSOFLAGS=	-Wl,-rpath,${PREFIX}/lib ${LDFLAGS} ${LIBS}
CONFIGURE_ENV=	DSOFLAGS="${DSOFLAGS}"
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --disable-gssapi
CONFIGURE_ARGS+= --with-cups-user=${CUPS_OWNER}
CONFIGURE_ARGS+= --with-cups-group=${CUPS_GROUP}
CONFIGURE_ARGS+= --with-system-groups=${CUPS_SYS_GROUP}
CONFIGURE_ARGS+= --with-docdir=${CUPS_DOCSDIR}
CONFIGURE_ARGS+= --with-menudir=${DESKTOPDIR}
CONFIGURE_ARGS+= --with-domainsocket=${CUPS_SOCKET}
CONFIGURE_ARGS+= --with-cachedir=${CUPS_CACHEDIR}
CONFIGURE_ARGS+= --with-pam-module="unix"
CONFIGURE_ARGS+= --enable-ssl
CONFIGURE_ARGS+= --enable-debug
CONFIGURE_ARGS+= --enable-webif=no

#CONFIGURE_ARGS+=	--disable-gnutls --enable-openssl
#CONFIGURE_ARGS+=	--disable-libusb
#CONFIGURE_ARGS+=	--enable-dbus
#CONFIGURE_ARGS+=	--with-java=${JAVA}
#CONFIGURE_ARGS+=	--with-php=${LOCALBASE}/bin/php-cgi
#CONFIGURE_ARGS+=	--with-printcap=/etc/printcap
#CONFIGURE_ARGS+=	--with-python=${PYTHON_CMD}
CONFIGURE_ARGS+=	--enable-dbus
#CONFIGURE_ARGS+=	--disable-openssl
CONFIGURE_ARGS+=	--disable-gnutls
CONFIGURE_ARGS+=	--disable-pam
CONFIGURE_ARGS+=	--enable-avahi
CONFIGURE_ARGS+=	--enable-libpaper
CONFIGURE_ARGS+=	--enable-libusb
CONFIGURE_ARGS+=	--with-icondir=${PREFIX}/share/icons
CONFIGURE_ARGS+=	--with-perl=${PERL}
CONFIGURE_ARGS+=	--with-printcap=${PREFIX}/etc/printcap
#LIBS+=		-lssp_nonshared


.include <bsd.port.pre.mk>


PKGINSTALL=	${WRKDIR}/pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

USE_RC_SUBR=	cupsd

SUB_FILES= 	pkg-install pkg-deinstall

CUPS_OWNER=	cups
CUPS_GROUP=	cups
CUPS_OWNERID=	193
CUPS_GROUPID=	193

CUPS_SYS_GROUP=	wheel


CUPS_SOCKET=	/var/run/cups.sock

CUPS_RUNDIR=	/var/run/cups
CUPS_STATEDIR=	/var/run/cups
CUPS_LOGDIR=	/var/log/cups
CUPS_CACHEDIR=	/var/cache/cups
CUPS_REQUESTSDIR= /var/spool/cups
CUPS_SPOOLDIR=	/var/spool/cups

CUPS_CONFDIR=	${PREFIX}/etc/cups
CUPS_DOCSDIR=	${PREFIX}/share/cups/docs


CUPS_PDFTOPS=	${LOCALBASE}/bin/pdftops
#WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}


CONFIGURE_ARGS+= --enable-static
#CONFIGURE_ARGS+= --enable-webif
CONFIGURE_ARGS+= --with-logdir=${CUPS_LOGDIR}
CONFIGURE_ARGS+= --with-rundir=${CUPS_RUNDIR}

#########
SUB_LIST+= CUPS_RUNDIR=${CUPS_RUNDIR}
SUB_LIST+= CUPS_LOGDIR=${CUPS_LOGDIR}

SUB_LIST+= CUPS_CACHEDIR=${CUPS_CACHEDIR}
SUB_LIST+= CUPS_STATEDIR=${CUPS_STATEDIR}
SUB_LIST+= CUPS_REQUESTSDIR=${CUPS_REQUESTSDIR}

SUB_LIST+= CUPS_CONFDIR=${CUPS_CONFDIR}
SUB_LIST+= CUPS_SPOOLDIR=${CUPS_SPOOLDIR}

SUB_LIST+= CUPS_OWNER=${CUPS_OWNER}
SUB_LIST+= CUPS_GROUP=${CUPS_GROUP}
SUB_LIST+= CUPS_OWNERID=${CUPS_OWNERID}
SUB_LIST+= CUPS_GROUPID=${CUPS_GROUPID}



post-patch:
	${REINPLACE_CMD} -e 's|htmlview|xdg-open|' ${WRKSRC}/desktop/cups.desktop.in

	${REINPLACE_CMD} -e '/SILENT/d' ${WRKSRC}/Makedefs.in
	${REINPLACE_CMD} -e 's|/etc/cups|${LOCALBASE}/etc/cups|g' ${WRKSRC}/man/*.man*
	${REINPLACE_CMD} -e 's|-lpthreads.*;|${PTHREAD_LIBS};|g' \
		-e 's|/private/etc/pam.d|${LOCALBASE}/etc/pam.d|' \
		-e 's|-D_LARGEFILE64_SOURCE||g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -e 's|\.default|.sample|'\
		${WRKSRC}/cgi-bin/admin.c\
		${WRKSRC}/CHANGES-1.3.txt\
		${WRKSRC}/conf/Makefile\
		${WRKSRC}/packaging/cups.list.in\
		${WRKSRC}/packaging/cups.spec\
		${WRKSRC}/packaging/cups.spec.in
	${REINPLACE_CMD} -e 's,"-g,",' ${WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -e 's,-g",",' ${WRKSRC}/${CONFIGURE_SCRIPT}
a:
	${REINPLACE_CMD} -e 's,dbus-1,dbus,' ${WRKSRC}/${CONFIGURE_SCRIPT}


PORTEXAMPLES+= *

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}

_CONFIG+= cups-files.conf
_CONFIG+= cupsd.conf
_CONFIG+= mime.convs
_CONFIG+= mime.types
_CONFIG+= snmp.conf

post-install:
	${MKDIR} ${EXAMPLESDIR}
.for F in ${_CONFIG}
	${INSTALL_DATA} ${WRKSRC}/conf/${F} ${EXAMPLESDIR}
.endfor
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -f cancel cupscancel
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -f cancel.1 cupscancel.1
	cd ${STAGEDIR}${PREFIX}/man/man8 && ${LN} -sf cupsenable.8 cupsdisable.8
	cd ${STAGEDIR}${PREFIX}/man/man8 && ${LN} -sf cupsaccept.8 cupsreject.8

.include <bsd.port.post.mk>

#EOF
