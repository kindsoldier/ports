#
# $Id: Makefile 2195 2009-08-20 23:12:08Z root $
# $URL: file:///usr2/svn/ports5/network-libs/libneon/Makefile $
#
PORTNAME=	neon
PORTVERSION=	0.30.1
CATEGORIES=	www
MASTER_SITES+=	http://www.webdav.org/neon/ 
MASTER_SITES+= 	http://keyserver.kjsl.com/~jharris/distfiles/
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	An HTTP and WebDAV client library for Unix systems

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-xml 
CONFIGURE_ARGS+= --enable-shared 
CONFIGURE_ARGS+= --with-expat 
CONFIGURE_ARGS+= --with-libs=${PREFIX}
CONFIGURE_ARGS+= --without-gssapi
CONFIGURE_ARGS+= --with-ssl=ssl
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --with-ca-bundle=${LOCALBASE}/etc/ca-bundle.crt
CONFIGURE_ARGS+= --without-libproxy
OPENSSL_CONFIGURE_ENV=	ne_cv_libsfor_SSL_library_init=-lssl


post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_add_request_header.3 ne_print_request_header.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_addr_resolve.3 ne_addr_destroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_addr_resolve.3 ne_addr_error.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_addr_resolve.3 ne_addr_first.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_addr_resolve.3 ne_addr_next.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_addr_resolve.3 ne_addr_result.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_append.3 ne_buffer_concat.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_append.3 ne_buffer_zappend.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_clear.3 ne_buffer_altered.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_clear.3 ne_buffer_grow.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_create.3 ne_buffer_ncreate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_buffer_destroy.3 ne_buffer_finish.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_get_error.3 ne_set_error.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_get_response_header.3 ne_response_header_iterate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_cmp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_free.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_parse.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_print.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_raw.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_reverse.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_iaddr_make.3 ne_iaddr_typeof.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_malloc.3 ne_calloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_malloc.3 ne_oom_callback.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_malloc.3 ne_realloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_malloc.3 ne_strdup.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_malloc.3 ne_strndup.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_request_create.3 ne_request_destroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_request_create.3 ne_request_dispatch.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_session_create.3 ne_close_connection.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_session_create.3 ne_session_destroy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_session_proxy.3 ne_session_socks_proxy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_session_proxy.3 ne_session_system_proxy.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_session_proxy.3 ne_set_addrlist.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_request_body_buffer.3 ne_set_request_body_fd.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_request_flag.3 ne_get_request_flag.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_server_auth.3 ne_forget_auth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_server_auth.3 ne_set_proxy_auth.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_session_flag.3 ne_get_session_flag.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_useragent.3 ne_get_scheme.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_useragent.3 ne_get_server_hostport.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_useragent.3 ne_set_connect_timeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_set_useragent.3 ne_set_read_timeout.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_sock_init.3 ne_sock_exit.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_cmp.3 ne_ssl_cert_free.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_identity.3 ne_ssl_cert_issuer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_identity.3 ne_ssl_cert_signedby.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_identity.3 ne_ssl_cert_subject.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_read.3 ne_ssl_cert_export.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_read.3 ne_ssl_cert_import.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_cert_read.3 ne_ssl_cert_write.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_clicert_read.3 ne_ssl_clicert_decrypt.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_clicert_read.3 ne_ssl_clicert_encrypted.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_clicert_read.3 ne_ssl_clicert_free.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_clicert_read.3 ne_ssl_clicert_name.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_clicert_read.3 ne_ssl_clicert_owner.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_readable_dname.3 ne_ssl_dname_cmp.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_ssl_trust_cert.3 ne_ssl_trust_default_ca.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_token.3 ne_qtoken.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_version_match.3 ne_version_string.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ne_xml_create.3 ne_xml_destroy.3

.include <bsd.port.mk>
#EOF
