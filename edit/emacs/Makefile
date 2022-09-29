#
# $Id: Makefile 1740 2008-08-30 06:23:54Z root $
#
PORTNAME=	emacs
PORTVERSION=	28.2
CATEGORIES=	editors
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	emacs
DIST_SUBDIR=	gnu
DISTFILES=	${PORTNAME}-${PORTVERSION}${PORTSUBVERION}${EXTRACT_SUFX}

PKGNAMESUFFIX=  -nox

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU editing macros


LIB_DEPENDS+= libxml2.so:text/libxml2
LIB_DEPENDS+= libiconv.so:text/libiconv
#LIB_DEPENDS+= libsysinfo.so:system/libsysinfo

#LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
#LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
#LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

SHARESTAT_DIR=	/var/run

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
CONFIGURE_TARGET= ${MACHINE_ARCH}-pc-freebsd${OSREL:R}
CONFIGURE_ARGS+= --sharedstatedir=${SHARESTAT_DIR}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lgmp

CONFIGURE_ARGS+= --without-dbus
CONFIGURE_ARGS+= --without-gconf
CONFIGURE_ARGS+= --without-gnutls
CONFIGURE_ARGS+= --without-imagemagick

CONFIGURE_ARGS+= --without-x

CONFIGURE_ARGS+= --with-sound=no
CONFIGURE_ARGS+= --with-x-toolkit=no
CONFIGURE_ARGS+= --without-cairo
CONFIGURE_ARGS+= --without-dbus
CONFIGURE_ARGS+= --without-gif
CONFIGURE_ARGS+= --without-gsettings
CONFIGURE_ARGS+= --without-imagemagick
CONFIGURE_ARGS+= --without-jpeg
CONFIGURE_ARGS+= --without-lcms2
CONFIGURE_ARGS+= --without-libotf
CONFIGURE_ARGS+= --without-m17n-flt
CONFIGURE_ARGS+= --without-png
CONFIGURE_ARGS+= --without-rsvg
CONFIGURE_ARGS+= --without-tiff
CONFIGURE_ARGS+= --without-toolkit-scroll-bars
CONFIGURE_ARGS+= --without-xft
CONFIGURE_ARGS+= --without-xim
CONFIGURE_ARGS+= --without-xml2
CONFIGURE_ARGS+= --without-xpm
CONFIGURE_ARGS+= --without-xwidgets


#CONFIGURE_ARGS+= --without-toolkit-scroll-bars
#CONFIGURE_ENV=  ac_cv_header_sys_sysinfo_h=no
CONFIGURE_ENV=	ac_cv_header_sys_sysinfo_h=no

MANCOMPRESSED=	yes

STRIP=	#

#INFO+= ada-mode
INFO+= auth
INFO+= autotype
INFO+= bovine
INFO+= calc
INFO+= ccmode
INFO+= cl
INFO+= dbus
INFO+= dired-x
INFO+= ebrowse
INFO+= ede
INFO+= ediff
INFO+= edt
INFO+= efaq
INFO+= eieio
INFO+= eintr
INFO+= elisp
INFO+= emacs
INFO+= emacs-gnutls
INFO+= emacs-mime
INFO+= epa
INFO+= erc
INFO+= ert
INFO+= eshell
INFO+= eudc
INFO+= flymake
INFO+= forms
INFO+= gnus
INFO+= htmlfontify
INFO+= idlwave
INFO+= info
INFO+= mairix-el
INFO+= message
INFO+= mh-e
INFO+= newsticker
INFO+= nxml-mode
INFO+= org
INFO+= pcl-cvs
INFO+= pgg
INFO+= rcirc
INFO+= reftex
INFO+= remember
INFO+= sasl
INFO+= sc
INFO+= semantic
INFO+= ses
INFO+= sieve
INFO+= smtpmail
INFO+= speedbar
INFO+= srecode
INFO+= tramp
INFO+= url
INFO+= vip
INFO+= viper
INFO+= widget
INFO+= wisent
INFO+= woman

PLIST_SUB+= VERSION=${PORTVERSION} 
PLIST_SUB+= TARGET=${CONFIGURE_TARGET}

PLIST=      ${PKGDIR}/pkg-plist.${ARCH}

FILES= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}

	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' 	${FILES}


post-install:
	cd ${STAGEDIR}${PREFIX}/bin && ${RM} emacs && ${MV} emacs-${PORTVERSION} emacs



.include <bsd.port.mk>

#EOF
