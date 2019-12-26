#
# $Id: Makefile 1740 2008-08-30 06:23:54Z root $
#
PORTNAME=	emacs
PORTVERSION=	26.1
CATEGORIES=	editors
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	emacs
DIST_SUBDIR=	gnu
DISTFILES=	${PORTNAME}-${PORTVERSION}${PORTSUBVERION}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU editing macros


LIB_DEPENDS+= libxml2.so:text/libxml2
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libsysinfo.so:system/libsysinfo

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

SHARESTAT_DIR=	/var/run

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
CONFIGURE_TARGET= ${MACHINE_ARCH}-pc-freebsd${OSREL:R}
CONFIGURE_ARGS+= --sharedstatedir=${SHARESTAT_DIR}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lsysinfo

CONFIGURE_ARGS+= --without-dbus
CONFIGURE_ARGS+= --without-gconf
CONFIGURE_ARGS+= --without-gnutls
CONFIGURE_ARGS+= --without-imagemagick
#CONFIGURE_ARGS+= --without-libotf
#CONFIGURE_ARGS+= --without-rsvg
#CONFIGURE_ARGS+= --without-xft
#CONFIGURE_ARGS+= --without-xml2

.include <bsd.port.pre.mk>

CONFIGURE_ARGS+= --with-x
CONFIGURE_ARGS+= --with-x-toolkit=gtk2
CONFIGURE_ARGS+= --without-xpm
CONFIGURE_ARGS+= --with-jpeg
CONFIGURE_ARGS+= --with-tiff
CONFIGURE_ARGS+= --with-gif
CONFIGURE_ARGS+= --with-png
CONFIGURE_ARGS+= --without-xim
#CONFIGURE_ARGS+= --without-toolkit-scroll-bars
#CONFIGURE_ENV=  ac_cv_header_sys_sysinfo_h=no
MANCOMPRESSED=	yes

STRIP=	#

INFO+= ada-mode
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

post-install:
	cd ${STAGEDIR}${PREFIX}/bin && ${RM} emacs && ${MV} emacs-${PORTVERSION} emacs


.include <bsd.port.post.mk>

#EOF
