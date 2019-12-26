#
# $Id$
#
PORTNAME=	tools
PORTVERSION=	1.0
CATEGORIES=	devel net

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	meta-port X11 

USES=		metaport


RUN_DEPENDS+= gmake:devel/gmake
LIB_DEPENDS+= libiconv.so:text/libiconv
RUN_DEPENDS+= bash:lang/bash

RUN_DEPENDS+= perl5:lang/perl526
RUN_DEPENDS+= python2:lang/python27

LIB_DEPENDS+= libintl.so:devel/gettext
RUN_DEPENDS+= vim:edit/vim

RUN_DEPENDS+= gcp:system/gcoreutils
#RUN_DEPENDS+= rename:system/rename
RUN_DEPENDS+= sudo:system/sudo
RUN_DEPENDS+= tmux:system/tmux


RUN_DEPENDS+= autoconf:devel/autoconf
RUN_DEPENDS+= automake:devel/automake
RUN_DEPENDS+= bison:devel/bison
#RUN_DEPENDS+= :devel/intltool
LIB_DEPENDS+= libreadline.so:devel/libreadline
RUN_DEPENDS+= libtool:devel/libtool
#RUN_DEPENDS+= pkg-config:devel/pkg-config


RUN_DEPENDS+= gawk:text/gawk
RUN_DEPENDS+= gdiff:text/gdiffutils
RUN_DEPENDS+= gfind:text/gfindutils
RUN_DEPENDS+= ggrep:text/ggrep
RUN_DEPENDS+= gm4:text/gm4
RUN_DEPENDS+= gpatch:text/gpatch
RUN_DEPENDS+= gsed:text/gsed
#RUN_DEPENDS+= libpcre.so:text/libpcre
#RUN_DEPENDS+= libxml2:text/libxml2
#RUN_DEPENDS+= recode:text/recode



RUN_DEPENDS+= gcpio:arch/gcpio
RUN_DEPENDS+= gtar:arch/gtar
#RUN_DEPENDS+= :arch/liblzo2
#RUN_DEPENDS+= :arch/libzzip
RUN_DEPENDS+= lzop:arch/lzop
#RUN_DEPENDS+= pigz:arch/pigz
#RUN_DEPENDS+= pixz:arch/pixz
#RUN_DEPENDS+= unrar:arch/unrar
RUN_DEPENDS+= unzip:arch/unzip
RUN_DEPENDS+= zip:arch/zip

RUN_DEPENDS+= fping:net/fping
RUN_DEPENDS+= lynx:net/lynx
RUN_DEPENDS+= mtr:net/mtr
RUN_DEPENDS+= nmap:net/nmap
RUN_DEPENDS+= wget:net/wget

RUN_DEPENDS+= svn:devel/subversion


.include <bsd.port.mk>
#EOF
