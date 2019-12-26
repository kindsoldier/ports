# $FreeBSD: head/editors/libreoffice/Makefile 393431 2015-08-02 16:06:16Z kwm $

PORTNAME=	libreoffice
PORTVERSION=	5.3.3
RCVER=		2
LOVERSION=	${PORTVERSION}.${RCVER}
CATEGORIES=	editors
MAINTAINER=	office@FreeBSD.org

MASTER_SITES+=	http://download.documentfoundation.org/libreoffice/${MASTER_SITE_SUBDIR}/
MASTER_SITES+=	http://dev-www.libreoffice.org/src/:src
MASTER_SITES+=	http://dev-www.libreoffice.org/extern/:ext
MASTER_SITE_SUBDIR=	src/${PORTVERSION}/

ONLY_FOR_ARCHS=	i386 amd64

COMMENT=	Full integrated office productivity suite


LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error

LIB_DEPENDS+=	libnss3.so:crypto/libnss
LIB_DEPENDS+=	libnssutil3.so:crypto/libnss
LIB_DEPENDS+=	libsmime3.so:crypto/libnss
LIB_DEPENDS+=	libssl3.so:crypto/libnss

LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libboost_date_time.so:devel/libboost64
LIB_DEPENDS+=	libboost_filesystem.so:devel/libboost64
LIB_DEPENDS+=	libboost_iostreams.so:devel/libboost64
LIB_DEPENDS+=	libboost_system.so:devel/libboost64
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libicudata.so:devel/libicu
LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	libicuuc.so:devel/libicu

LIB_DEPENDS+=	libnspr4.so:devel/libnspr
LIB_DEPENDS+=	libplc4.so:devel/libnspr
LIB_DEPENDS+=	libplds4.so:devel/libnspr

LIB_DEPENDS+=	libyajl.so:devel/libyajl

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libatk.so:gnome/libatk
LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libharfbuzz-icu.so:gnome/libharfbuzz
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=	libpango.so:gnome/libpango
LIB_DEPENDS+=	libpangocairo.so:gnome/libpango
LIB_DEPENDS+=	libpangoft2.so:gnome/libpango
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

LIB_DEPENDS+=	libGLEW.so:graph/libGLEW
LIB_DEPENDS+=	libGLU.so:graph/libGLU

LIB_DEPENDS+=	libgraphite2.so:graph/libgraphite2

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	liblcms2.so:graph/liblcms2
LIB_DEPENDS+=	libpng16.so:graph/libpng

LIB_DEPENDS+=	libabw.so:libre/libabw
LIB_DEPENDS+=	libcdr.so:libre/libcdr

LIB_DEPENDS+=	libclucene-contribs-lib.so:libre/libclucene
LIB_DEPENDS+=	libclucene-core.so:libre/libclucene
LIB_DEPENDS+=	libclucene-shared.so:libre/libclucene
LIB_DEPENDS+=	libcmis.so:libre/libcmis
LIB_DEPENDS+=	libe-book.so:libre/libe-book
LIB_DEPENDS+=	libetonyek.so:libre/libetonyek
LIB_DEPENDS+=	libexttextcat.so:libre/libexttextcat
LIB_DEPENDS+=	libfreehand.so:libre/libfreehand
LIB_DEPENDS+=	libgltf.so:libre/libgltf
LIB_DEPENDS+=	liblangtag.so:libre/liblangtag
LIB_DEPENDS+=	libmspub.so:libre/libmspub
LIB_DEPENDS+=	libmwaw.so:libre/libmwaw
LIB_DEPENDS+=	libmythes.so:libre/libmythes
LIB_DEPENDS+=	libodfgen.so:libre/libodfgen
LIB_DEPENDS+=	liborcus-parser.so:libre/liborcus
LIB_DEPENDS+=	liborcus.so:libre/liborcus
LIB_DEPENDS+=	libpagemaker.so:libre/libpagemaker
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	libstaroffice.so:libre/libstaroffice
LIB_DEPENDS+=	libvisio.so:libre/libvisio
LIB_DEPENDS+=	libwpd.so:libre/libwpd
LIB_DEPENDS+=	libwpg.so:libre/libwpg
LIB_DEPENDS+=	libwps.so:libre/libwps
LIB_DEPENDS+=	libzmf.so:libre/libzmf
LIB_DEPENDS+=	libgmp.so:math/libgmp

LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi

LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libneon.so:net/libneon

LIB_DEPENDS+=	libcups.so:print/cups-base

LIB_DEPENDS+=	libhunspell.so:text/hunspell
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libraptor2.so:text/libraptor2
LIB_DEPENDS+=	librasqal.so:text/librasqal
LIB_DEPENDS+=	librdf.so:text/libredland
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libexslt.so:text/libxslt
LIB_DEPENDS+=	libxslt.so:text/libxslt
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libpixman.so:x11/libpixman
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib


BUILD_DEPENDS+= gsed:text/gsed
BUILD_DEPENDS+= bison:devel/bison
LIB_DEPENDS+=	libpython3.4m.so:lang/python34


_MAKE_JOBS=	#

GNU_CONFIGURE=	yes
#USE_AUTOTOOLS=	autoconf aclocal
USE_PERL5=	build
#USES=		bison compiler:c++11-lang cpe gmake jpeg perl5 pkgconfig python shared-mime-info tar:xz
USES= tar:xz perl5 compiler:c++11-lang gmake pkgconfig

DISTFILES+=	${PORTNAME}-${LOVERSION}${EXTRACT_SUFX}
DISTFILES+=	${PORTNAME}-help-${LOVERSION}${EXTRACT_SUFX}

EXTRACT_ONLY:=	${DISTFILES}

DIST_SUBDIR=	libreoffice
WRKSRC=		${WRKDIR}/${PORTNAME}-${LOVERSION}

.include <bsd.port.options.mk>

.include <bsd.port.pre.mk>

GNU_CONFIGURE=	yes
USES+=		tar:xz
USES+=		gmake

##CFLAGS+= -I${LOCALBASE}/include
##LDFLAGS+= -L${LOCALBASE}/lib

CPPFLAGS+=	-isystem ${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib



.if ${OPSYS} == FreeBSD
.if (${OSVERSION} >= 1200000 && ${OSVERSION} < 1200003) || \
    (${OSVERSION} >= 1100500 && ${OSVERSION} < 1100501) || \
    (${OSVERSION} >= 1100000 && ${OSVERSION} < 1100122) || \
    ${OSVERSION} < 1003506
EXTRA_PATCHES=	${PATCHDIR}/extrapatch-vcl_inc_unx_gtk_gtkinst.hxx \
		${PATCHDIR}/extrapatch-vcl_unx_gtk_gtkinst.cxx
.endif
.endif # FreeBSD

CONFIGURE_ARGS+= --disable-gstreamer-1-0
CONFIGURE_ARGS+= --disable-postgresql-sdbc
CONFIGURE_ARGS+= --without-gssapi 
CONFIGURE_ARGS+= --without-krb5
CONFIGURE_ARGS+= --without-doxygen

CONFIGURE_ARGS+= --enable-systray
CONFIGURE_ARGS+= --enable-cups
CONFIGURE_ARGS+= --enable-dbus
CONFIGURE_ARGS+= --disable-dconf

#CONFIGURE_ARGS+= --disable-scripting-javascript


CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --disable-epm
#CONFIGURE_ARGS+= --disable-fetch-external
CONFIGURE_ARGS+= --disable-gnome-vfs
CONFIGURE_ARGS+= --disable-kde
CONFIGURE_ARGS+= --disable-kdeab
CONFIGURE_ARGS+= --disable-mergelibs
CONFIGURE_ARGS+= --disable-online-update
CONFIGURE_ARGS+= --disable-packagekit
CONFIGURE_ARGS+= --enable-cairo-canvas
CONFIGURE_ARGS+= --enable-graphite
CONFIGURE_ARGS+= --enable-python=system
CONFIGURE_ARGS+= --enable-release-build
CONFIGURE_ARGS+= --exec-prefix=${PREFIX}
CONFIGURE_ARGS+= --with-alloc=system
CONFIGURE_ARGS+= --with-boost=${LOCALBASE}
CONFIGURE_ARGS+= --with-build-version="FreeBSD ports ${PKGVERSION}"
CONFIGURE_ARGS+= --with-external-dict-dir=${LOCALBASE}/share/hunspell
CONFIGURE_ARGS+= --with-external-hyph-dir=${LOCALBASE}/share/hyphen
CONFIGURE_ARGS+= --with-external-tar=${DISTDIR}/${DIST_SUBDIR}
CONFIGURE_ARGS+= --with-external-thes-dir=${LOCALBASE}/share/mythes
CONFIGURE_ARGS+= --with-gnu-patch=${LOCALBASE}/bin/gpatch
CONFIGURE_ARGS+= --with-os-version=${OSVERSION}
CONFIGURE_ARGS+= --with-parallelism=${MAKE_JOBS_NUMBER}

CONFIGURE_ARGS+= --with-system-curl
CONFIGURE_ARGS+= --with-system-dicts
CONFIGURE_ARGS+= --with-system-libs
CONFIGURE_ARGS+= --with-system-libxml

#CONFIGURE_ARGS+= --with-system-opencollada
#CONFIGURE_ARGS+= --with-system-ucpp

CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-vendor="FreeBSD ports"
CONFIGURE_ARGS+= --without-fonts
CONFIGURE_ARGS+= --without-myspell-dicts
CONFIGURE_ARGS+= --without-system-npapi-headers

CONFIGURE_ARGS+= --with-system-clucene
CONFIGURE_ARGS+= --with-system-libcd=no
CONFIGURE_ARGS+= --with-system-odbc=no
CONFIGURE_ARGS+= --disable-firebird-sdbc

CONFIGURE_ARGS+= --with-system-openldap=no
CONFIGURE_ARGS+= --with-system-nss=yes
CONFIGURE_ARGS+= --with-system-openssl
CONFIGURE_ARGS+= --with-system-sane=no
CONFIGURE_ARGS+= --with-system-altlinuxhyph=no
CONFIGURE_ARGS+= --with-system-mythes
CONFIGURE_ARGS+= --disable-coinmp
CONFIGURE_ARGS+= --disable-lpsolve
CONFIGURE_ARGS+= --disable-gtk3
CONFIGURE_ARGS+= --with-system-libgltf

CONFIGURE_ARGS+= --disable-report-builder
CONFIGURE_ARGS+= --disable-scripting-beanshell
CONFIGURE_ARGS+= --without-junit
CONFIGURE_ARGS+= --disable-collada
CONFIGURE_ARGS+= --enable-verbose

CONFIGURE_ARGS+= --enable-python=no
CONFIGURE_ARGS+= --with-java=no
#CONFIGURE_ARGS+= --with-jdk-home=${LOCALBASE}/openjdk8

CONFIGURE_ENV+=	DMAKE=${LOCALBASE}/bin/dmake

#CONFIGURE_ENV+= FIREBIRD_CFLAGS="-isystem ${LOCALBASE}/include"
#CONFIGURE_ENV+= FIREBIRD_LIBS="-L${LOCALBASE}/lib -lfbembed"

CONFIGURE_ENV+= GNUTAR="${TAR}"
CONFIGURE_ENV+= GPERF=${LOCALBASE}/bin/gperf

#CONFIGURE_ENV+= OPENCOLLADA_CFLAGS="${COLLADA_CFLAGS}"
#CONFIGURE_ENV+= OPENCOLLADA_LIBS="${COLLADA_LIBS}"

#PYTHON_VERSION= python3.4

CONFIGURE_ENV+= PYTHON_CFLAGS="`${PYTHON_VERSION}-config --cflags`"
CONFIGURE_ENV+= PYTHON_LIBS="`${PYTHON_VERSION}-config --libs`"

MAKE_ENV+=	CXXFLAGS_WARN="${CXXFLAGS_WARN}"
_MAKE_ENV+=	GNUSED=${LOCALBASE}/bin/gsed
MAKE_ENV+=	DISPLAY=#


CFLAGS+= -I${LOCALBASE}/include
CPPFLAGS+= -I${LOCALBASE}/include
#CPPFLAGS+= -isystem ${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib -lm


#CONFIGURE_ARGS+= --with-system-altlinuxhyph=no
#CONFIGURE_ARGS+= --with-system-apache-commons=no
#CONFIGURE_ARGS+= --with-system-apr=no
#CONFIGURE_ARGS+= --with-system-beanshell=no
#CONFIGURE_ARGS+= --with-system-bluez=no
#CONFIGURE_ARGS+= --with-system-boost=no
#CONFIGURE_ARGS+= --with-system-bzip2=no
#CONFIGURE_ARGS+= --with-system-cairo=no
#CONFIGURE_ARGS+= --with-system-clucene=no
#CONFIGURE_ARGS+= --with-system-coinmp=no
#CONFIGURE_ARGS+= --with-system-collada2gltf=no
#CONFIGURE_ARGS+= --with-system-cppunit=no
#CONFIGURE_ARGS+= --with-system-curl=no
#CONFIGURE_ARGS+= --with-system-expat=no
#CONFIGURE_ARGS+= --with-system-firebird=no
#CONFIGURE_ARGS+= --with-system-glew=no
#CONFIGURE_ARGS+= --with-system-glm=no
#CONFIGURE_ARGS+= --with-system-glyphy=no
#CONFIGURE_ARGS+= --with-system-graphite=no
#CONFIGURE_ARGS+= --with-system-harfbuzz=no
#CONFIGURE_ARGS+= --with-system-headers=no
#CONFIGURE_ARGS+= --with-system-hsqldb=no
#CONFIGURE_ARGS+= --with-system-hunspell=no
#CONFIGURE_ARGS+= --with-system-icu-for-build=yes/no/force=no
#CONFIGURE_ARGS+= --with-system-icu=no
#CONFIGURE_ARGS+= --with-system-jfreereport=no
#CONFIGURE_ARGS+= --with-system-jpeg=no
#CONFIGURE_ARGS+= --with-system-lcms2=no
#CONFIGURE_ARGS+= --with-system-libabw=no
#CONFIGURE_ARGS+= --with-system-libatomic_ops=no
#CONFIGURE_ARGS+= --with-system-libcdr=no
#CONFIGURE_ARGS+= --with-system-libcmis=no
#CONFIGURE_ARGS+= --with-system-libebook=no
#CONFIGURE_ARGS+= --with-system-libeot=no
#CONFIGURE_ARGS+= --with-system-libetonyek=no
#CONFIGURE_ARGS+= --with-system-libexttextcat=no
#CONFIGURE_ARGS+= --with-system-libfreehand=no
#CONFIGURE_ARGS+= --with-system-libgltf=no
#CONFIGURE_ARGS+= --with-system-liblangtag=no
#CONFIGURE_ARGS+= --with-system-libmspub=no
#CONFIGURE_ARGS+= --with-system-libmwaw=no
#CONFIGURE_ARGS+= --with-system-libodfgen=no
#CONFIGURE_ARGS+= --with-system-libpagemaker=no
#CONFIGURE_ARGS+= --with-system-libpng=no
#CONFIGURE_ARGS+= --with-system-librevenge=no
#CONFIGURE_ARGS+= --with-system-libs=no
#CONFIGURE_ARGS+= --with-system-libvisio=no
#CONFIGURE_ARGS+= --with-system-libwpd=no
#CONFIGURE_ARGS+= --with-system-libwpg=no
#CONFIGURE_ARGS+= --with-system-libwps=no
#CONFIGURE_ARGS+= --with-system-libxml=no
#CONFIGURE_ARGS+= --with-system-lpsolve=no
#CONFIGURE_ARGS+= --with-system-mariadb=no
#CONFIGURE_ARGS+= --with-system-mdds=no
#CONFIGURE_ARGS+= --with-system-mysql-cppconn=no
#CONFIGURE_ARGS+= --with-system-mythes=no
#CONFIGURE_ARGS+= --with-system-neon=no
#CONFIGURE_ARGS+= --with-system-nss=no
#CONFIGURE_ARGS+= --with-system-odbc=no
#CONFIGURE_ARGS+= --with-system-opencollada=no
#CONFIGURE_ARGS+= --with-system-openldap=no
#CONFIGURE_ARGS+= --with-system-openssl=no
#CONFIGURE_ARGS+= --with-system-orcus=no
#CONFIGURE_ARGS+= --with-system-poppler=no
#CONFIGURE_ARGS+= --with-system-postgresql=no
#CONFIGURE_ARGS+= --with-system-redland=no
#CONFIGURE_ARGS+= --with-system-rhino=no
#CONFIGURE_ARGS+= --with-system-sane=no
#CONFIGURE_ARGS+= --with-system-serf=no
#CONFIGURE_ARGS+= --with-system-ucpp=no
#CONFIGURE_ARGS+= --with-system-zlib=no
#CONFIGURE_ARGS+= --without-system-dicts=no
#CONFIGURE_ARGS+= --without-system-jars=no




FILES=  ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's|pixman-1|pixman|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonobo-2.0|bonobo|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonobo-activation-2.0|bonobo-activation|g'	${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-sanity-check-2|gconf-sanity-check|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconfd-2|gconfd|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gtk-x11-2.0|gtk-x11|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' ${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g'	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-2.0|gnome|g'	${FILES}
	${REINPLACE_CMD} -e 's|gnome-2|gnome|g'	${FILES}
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' ${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgtop-2.0|libgtop|g'	${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|soup-2.4|soup|g' 	${FILES}
	${REINPLACE_CMD} -e 's|soup-gnome-2.4|soup-gnome|g' 	${FILES}
	${REINPLACE_CMD} -e 's|unique-1.0|unique|g'	${FILES}
	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g' ${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${FILES}

	${REINPLACE_CMD} -e "s,libabw-0.1,libabw,g" ${FILES}
	${REINPLACE_CMD} -e "s,libcdr-0.1,libcdr,g" ${FILES}
	${REINPLACE_CMD} -e "s,libetonyek-0.1,libetonyek,g" ${FILES}
	${REINPLACE_CMD} -e "s,libfreehand-0.1,libfreehand,g" ${FILES}
	${REINPLACE_CMD} -e "s,libodfgen-0.1,libodfgen,g" ${FILES}
	${REINPLACE_CMD} -e "s,librevenge-0.0,librevenge,g" ${FILES}
	${REINPLACE_CMD} -e "s,libvisio-0.1,libvisio,g" ${FILES}
	${REINPLACE_CMD} -e "s,libwpd-0.10,libwpd,g" ${FILES}
	${REINPLACE_CMD} -e "s,libwpg-0.3,libwpg,g" ${FILES}
	${REINPLACE_CMD} -e "s,libwps-0.3,libwps,g" ${FILES}

	${REINPLACE_CMD} -e "s,libe-book-0.1,libe-book,g" ${FILES}
	${REINPLACE_CMD} -e "s,libcmis-0.4,libcmis,g" ${FILES}
	${REINPLACE_CMD} -e "s,libmspub-0.1,libmspub,g" ${FILES}
	${REINPLACE_CMD} -e "s,libmwaw-0.3,libmwaw,g" ${FILES}
	${REINPLACE_CMD} -e "s,liborcus-0.8,liborcus,g" ${FILES}
	${REINPLACE_CMD} -e "s,mythes-1.2,mythes,g" ${FILES}

	${REINPLACE_CMD} -e "s,libpagemaker-0.0,libpagemaker,g" ${FILES}
	${REINPLACE_CMD} -e "s,libcmis-0.5,libcmis,g" ${FILES}
	${REINPLACE_CMD} -e "s,libwps-0.4,libwps,g" ${FILES}
	${REINPLACE_CMD} -e "s,liborcus-0.12,liborcus,g" ${FILES}
	${REINPLACE_CMD} -e "s,gltf-0.0,gltf,g" ${FILES}


	${REINPLACE_CMD} -e "s,mdds-1.2,mdds,g" ${FILES}

	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
	    ${WRKSRC}/shell/source/unix/exec/shellexec.cxx

	${REINPLACE_CMD} -e "s,zmf-0.0,zmf,g" ${FILES}
	${REINPLACE_CMD} -e "s,staroffice-0.0,staroffice,g" ${FILES}


#MAKE_ENV+=	CXXFLAGS_WARN="${CXXFLAGS_WARN}"
_MAKE_ENV+=	GNUSED=${LOCALBASE}/bin/gsed
#_MAKE_ENV+=	DISPLAY=

#CONFIGURE_ENV+= CC=clang
#CONFIGURE_ENV+= CXX=clang+
#CONFIGURE_ENV+= CPP=clang-cpp

do-build:
	cd ${WRKSRC} && ${SETENV} ${_MAKE_ENV} gmake

#	cd ${WRKSRC} && PYTHONPATH=.:${LOCALBASE}/lib/python3.4/:${LOCALBASE}/lib/python3.4/lib-dynload/ \
#	    gmake \
#		CC='clang  -DLIBCPP_VERSION=4000 -DBOOST_GCC_VERSION=40500   -D_WCHAR_H_CPLUSPLUS_98_CONFORMANCE_=1 -I/usr/local/include' \
#		CXX='clang++  -DLIBCPP_VERSION=4000 -DBOOST_GCC_VERSION=40500  -D_WCHAR_H_CPLUSPLUS_98_CONFORMANCE_=1 -I/usr/local/include' \
#		PARALLELISM=4 build GNUSED=gsed

INSTALL_TARGET=install distro-pack-install

do-install:
	cd ${WRKSRC} && gmake ${INSTALL_TARGET} DESTDIR=${STAGEDIR}

	${MKDIR} ${STAGEDIR}${PREFIX}/etc/xdg/autostart
	${INSTALL_DATA} ${STAGEDIR}${PREFIX}/lib/libreoffice/share/xdg/qstart.desktop \
	    ${STAGEDIR}${PREFIX}/etc/xdg/autostart/libreoffice-qstart.desktop

	${MKDIR} ${STAGEDIR}${PREFIX}/lib/libreoffice/program/wizards/ui
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/libreoffice/share/uno_packages/cache/uno_packages
	${TOUCH} ${STAGEDIR}${PREFIX}/lib/libreoffice/program/wizards/ui/.keepme
	${TOUCH} ${STAGEDIR}${PREFIX}/lib/libreoffice/share/uno_packages/cache/uno_packages/.keepme

.include <bsd.port.post.mk>

#EOF
