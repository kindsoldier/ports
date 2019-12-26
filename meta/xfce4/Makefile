#
# $Id$
#
PORTNAME=	xfce4
PORTVERSION=	1.0
CATEGORIES=	x11

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	meta-port X11 

USES=	metaport

RUN_DEPENDS+= update-desktop-database:xfce/desktop-file-utils
RUN_DEPENDS+= xdg-open:xfce/xdg-utils
RUN_DEPENDS+= iso-codes>=0:misc/iso-codes

RUN_DEPENDS+= gtk-update-icon-cache:gnome/libgtk2

RUN_DEPENDS+= xfwm4:xfce/xfce4-wm
RUN_DEPENDS+= xfdesktop:xfce/xfce4-desktop
RUN_DEPENDS+= xfce4-panel:xfce/xfce4-panel
RUN_DEPENDS+= startxfce4:xfce/xfce4-session
RUN_DEPENDS+= xfce4-accessibility-settings:xfce/xfce4-settings

RUN_DEPENDS+= Thunar:xfce/xfce4-thunar

RUN_DEPENDS+= libgtk-xfce-engine>=0:xfce/libgtk-xfce-engine
RUN_DEPENDS+= libgtk-engines2>=0:gnome/libgtk-engines2

RUN_DEPENDS+= gnome-icon-theme-symbolic>=0:misc/gnome-icon-theme-symbolic
RUN_DEPENDS+= gnome-icon-theme>=0:misc/gnome-icon-theme
RUN_DEPENDS+= gnome-icon-theme-extras>=0:misc/gnome-icon-theme-extras
RUN_DEPENDS+= hicolor-icon-theme>=0:misc/hicolor-icon-theme

RUN_DEPENDS+= xfce4-wm-themes>=0:xfce/xfce4-wm-themes
RUN_DEPENDS+= shared-mime-info>=0:misc/shared-mime-info

RUN_DEPENDS+= tango-icon-theme>=0:misc/tango-icon-theme
RUN_DEPENDS+= tango-icon-theme-extras>=0:misc/tango-icon-theme-extras

RUN_DEPENDS+= xfce4-appfinder:xfce/xfce4-appfinder
RUN_DEPENDS+= xfce4-notifyd-config:xfce/xfce4-notifyd

RUN_DEPENDS+= globaltime:xfce/xfce4-orage

RUN_DEPENDS+= parole:xfce/xfce4-parole
RUN_DEPENDS+= ristretto:xfce/xfce4-ristretto
RUN_DEPENDS+= squeeze:xfce/xfce4-squeeze
RUN_DEPENDS+= xfce4-taskmanager:xfce/xfce4-taskmanager
RUN_DEPENDS+= xfce4-terminal:xfce/xfce4-terminal

RUN_DEPENDS+= xfce4-clipman:xfce/xfce4-clipman-plugin
RUN_DEPENDS+= xfce4-notes:xfce/xfce4-notes-plugin

RUN_DEPENDS+= xfce4-screenshooter:xfce/xfce4-screenshooter-plugin
RUN_DEPENDS+= xfce4-xkb-plugin>=0:xfce/xfce4-xkb-plugin
RUN_DEPENDS+= xfce4-datetime-plugin>=0:xfce/xfce4-datetime-plugin
RUN_DEPENDS+= xfce4-cpugraph-plugin>=0:xfce/xfce4-cpugraph-plugin
#RUN_DEPENDS+= xfce4-netload-plugin=>0:xfce/xfce4-netload-plugin
RUN_DEPENDS+= xfce4-wavelan-plugin>=0:xfce/xfce4-wavelan-plugin
RUN_DEPENDS+= xfce4-systemload-plugin>=0:xfce/xfce4-systemload-plugin


.include <bsd.port.mk>
#EOF