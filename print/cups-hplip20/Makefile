#
# $Id$
#
PORTNAME=	hplip
PORTVERSION=	3.20.6
CATEGORIES=	print
MASTER_SITES=	SF
PKGNAMEPREFIX=	cups-


MAINTAINER=	onborodin@gmail.com
COMMENT=	Drivers and utilities for HP Printers and All-in-One devices


LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libcups.so:print/cups-base
LIB_DEPENDS+=	libcupsimage.so:print/cups-base


CONFLICTS=	hpijs-[0-9]*

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-cupsbackenddir=${PREFIX}/libexec/cups/backend
CONFIGURE_ARGS+= --with-cupsfilterdir=${PREFIX}/libexec/cups/filter
CONFIGURE_ARGS+= --with-icondir=${DESKTOPDIR}
CONFIGURE_ARGS+= --with-systraydir=${PREFIX}/etc/xdg/autostart
CONFIGURE_ARGS+= --with-hpppddir=${PREFIX}/share/cups/model/hplip/HP
CONFIGURE_ARGS+= --with-mimedir=${PREFIX}/etc/cups
CONFIGURE_ARGS+= --with-docdir=${DOCSDIR}
CONFIGURE_ARGS+= --with-drvdir=${PREFIX}/share/cups/driver
CPPFLAGS+=	-I${LOCALBASE}/include -pthread
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}  -pthread


#CONFIGURE_ARGS+= --enable-cups11-build
#CONFIGURE_ARGS+= --enable-dbus-build
#CONFIGURE_ARGS+= --enable-fax-build
#CONFIGURE_ARGS+= --enable-gui-build
#CONFIGURE_ARGS+= --enable-hpcups-only-build
#CONFIGURE_ARGS+= --enable-hpijs-only-build
#CONFIGURE_ARGS+= --enable-network-build
#CONFIGURE_ARGS+= --enable-new-hpcups
#CONFIGURE_ARGS+= --enable-policykit
#CONFIGURE_ARGS+= --enable-pp-build
#CONFIGURE_ARGS+= --enable-qt3
#CONFIGURE_ARGS+= --enable-qt4
#CONFIGURE_ARGS+= --enable-scan-build
#CONFIGURE_ARGS+= --enable-shadow-build

CONFIGURE_ARGS+= --disable-dbus-build
CONFIGURE_ARGS+= --disable-doc-build
CONFIGURE_ARGS+= --disable-fax-build

CONFIGURE_ARGS+= --disable-foomatic-drv-install
CONFIGURE_ARGS+= --disable-foomatic-rip-hplip-install
CONFIGURE_ARGS+= --disable-gui-build

CONFIGURE_ARGS+= --enable-hpcups-install
CONFIGURE_ARGS+= --enable-network-build

CONFIGURE_ARGS+= --disable-qt4
CONFIGURE_ARGS+= --disable-scan-build

CONFIGURE_ARGS+= --enable-cups-drv-install
CONFIGURE_ARGS+= --enable-cups-ppd-install

CONFIGURE_ARGS+= --disable-foomatic-ppd-install

CONFIGURE_ARGS+= --disable-hpijs-install
#CONFIGURE_ARGS+= --enable-hpijs-only-build
#CONFIGURE_ARGS+= --enable-hpcups-only-build

CONFIGURE_ARGS+= --enable-lite-build


USES+= gmake
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes


post-patch:
	${REINPLACE_CMD} -e 's|-ldld||g;' \
		-e 's|-ldl||g' \
		-e 's,-lusb-1.0,-lusb,g' \
		-e 's,libusb-1.0/libusb.h,libusb.h,g' \
		${WRKSRC}/configure \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/[[:space:]]install-dist_rulesDATA/ s,install-dist_rulesDATA,,' \
		-e '/[[:space:]]install-dist_rulessystemDATA/ s,install-dist_rulessystemDATA,,' \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's,/etc/hp,${PREFIX}&,g' \
		-e 's,/etc/cups,${LOCALBASE}&,g' \
		-e 's,/etc/init.d,${LOCALBASE}/etc/rc.d,g' \
		-e 's,/etc/sane.d,${LOCALBASE}&,g' \
		-e 's,/usr/share,${LOCALBASE}/share,g' \
		-e 's,/usr/include,${LOCALBASE}/include,g' \
		${WRKSRC}/Makefile.in \
		${WRKSRC}/base/codes.py \
		${WRKSRC}/base/g.py \
		${WRKSRC}/base/password.py \
		${WRKSRC}/base/pkit.py \
		${WRKSRC}/base/queues.py \
		${WRKSRC}/base/services.py \
		${WRKSRC}/base/utils.py \
		${WRKSRC}/check.py \
		${WRKSRC}/fax/backend/hpfax.py \
		${WRKSRC}/fax/coverpages.py \
		${WRKSRC}/fax/filters/pstotiff \
		${WRKSRC}/hplip.list.in \
		${WRKSRC}/installer/core_install.py \
		${WRKSRC}/installer/dcheck.py \
		${WRKSRC}/installer/pluginhandler.py \
		${WRKSRC}/logcapture.py \
		${WRKSRC}/prnt/cups.py \
		${WRKSRC}/prnt/filters/hpps \
		${WRKSRC}/prnt/hpcups/HPCupsFilter.cpp \
		${WRKSRC}/prnt/hpijs/globals.cpp \
		${WRKSRC}/prnt/hpijs/hpcupsfax.cpp \
		${WRKSRC}/prnt/hpijs/hpijs.cpp \
		${WRKSRC}/ui/devmgr4.py \
		${WRKSRC}/ui4/devmgr5.py \
		${WRKSRC}/ui5/devmgr5.py
	${REINPLACE_CMD} -e 's/umask(0)/umask(0o022)/' \
		-e 's/umask(0o111)/umask(0o133)/' \
		${WRKSRC}/base/os_utils.py \
		${WRKSRC}/base/validation.py \
		${WRKSRC}/fax/backend/hpfax.py \
		${WRKSRC}/hpdio.py \
		${WRKSRC}/installer/pluginhandler.py



_post-patch:
	${REINPLACE_CMD} -e 's,-lpthread,${PTHREAD_LIBS},g' \
		-e 's|-ldld||g; s|-ldl||g' \
		${WRKSRC}/configure \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/[[:space:]]install-dist_rulesDATA/ s,install-dist_rulesDATA,,' \
		-e '/[[:space:]]install-hplip_confDATA/ s,install-hplip_confDATA,,' \
		${WRKSRC}/Makefile.in
#	${REINPLACE_CMD} -e 's,/etc/hp,${PREFIX}&,g' \
#		-e 's,/etc/cups,${LOCALBASE}&,g' \
#		-e 's,/etc/init.d,${LOCALBASE}/etc/rc.d,g' \
#		-e 's,/etc/sane.d,${LOCALBASE}&,g' \
#		-e 's,/usr/share,${LOCALBASE}/share,g' \
#		-e 's,/usr/include,${LOCALBASE}/include,g' \
#		${FILES4FIX:S,^,${WRKSRC}/,}
	${REINPLACE_CMD} -e 's,%USB_INCLUDE%,${USB_INCLUDE},' \
		${WRKSRC}/installer/core_install.py
	${REINPLACE_CMD} -e '/[[:space:]]install-docDATA/ s|install-docDATA||' \
		${WRKSRC}/Makefile.in

_post-install:
#	${INSTALL_DATA} ${WRKSRC}/hplip-systray.desktop ${PREFIX}/etc/xdg/autostart/hplip-systray.desktop
#	${MKDIR} ${PREFIX}/etc/hp
#	${INSTALL_DATA} ${WRKSRC}/hplip.conf ${EXAMPLESDIR}/hplip.conf.sample
#	if [ ! -f ${PREFIX}/etc/hp/hplip.conf ]; then \
#		${INSTALL_DATA} ${PREFIX}/etc/hp/hplip.conf.sample \
#			${PREFIX}/etc/hp/hplip.conf; \
#	fi
#	@${CAT} ${PKGMESSAGE}
	cd ${STAGEDIR}${PREFIX}/share/cups/model/hplip/HP && ${GZIP_CMD} -d *.gz
#	${INSTALL_SCRIPT}  ${WRKSRC}/prnt/hpijs/foomatic-rip-hplip  \
#		${PREFIX}/libexec/cups/filter/foomatic-rip-hplip
	${REINPLACE_CMD} -e 's,foomatic-rip-hplip,foomatic-rip,g' ${STAGEDIR}${PREFIX}/share/cups/model/hplip/HP/*.ppd

.include <bsd.port.mk>
