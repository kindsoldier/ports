PORTNAME=	helm
PORTVERSION=	3.11.3
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Kubernetes Package Manager
WWW=		https://helm.sh

RUN_DEPENDS=	kubectl:kube/kubectl

USES=		cpe go:modules tar:xz

USE_GITHUB=	yes

GH_TUPLE=       \
        AdaLogics:go-fuzz-headers:43070de90fa1:adalogics_go_fuzz_headers/vendor/github.com/AdaLogics/go-fuzz-headers \
        Azure:go-ansiterm:d185dfc1b5a1:azure_go_ansiterm/vendor/github.com/Azure/go-ansiterm \
        BurntSushi:toml:v1.2.1:burntsushi_toml/vendor/github.com/BurntSushi/toml \
        DATA-DOG:go-sqlmock:v1.5.0:data_dog_go_sqlmock/vendor/github.com/DATA-DOG/go-sqlmock \
        MakeNowJust:heredoc:v1.0.0:makenowjust_heredoc/vendor/github.com/MakeNowJust/heredoc \
        Masterminds:goutils:v1.1.1:masterminds_goutils/vendor/github.com/Masterminds/goutils \
        Masterminds:semver:v3.2.0:masterminds_semver_v3/vendor/github.com/Masterminds/semver/v3 \
        Masterminds:sprig:v3.2.3:masterminds_sprig_v3/vendor/github.com/Masterminds/sprig/v3 \
        Masterminds:squirrel:v1.5.3:masterminds_squirrel/vendor/github.com/Masterminds/squirrel \
        Masterminds:vcs:v1.13.3:masterminds_vcs/vendor/github.com/Masterminds/vcs \
        Shopify:logrus-bugsnag:577dee27f20d:shopify_logrus_bugsnag/vendor/github.com/Shopify/logrus-bugsnag \
        asaskevich:govalidator:21a406dcc535:asaskevich_govalidator/vendor/github.com/asaskevich/govalidator \
        beorn7:perks:v1.0.1:beorn7_perks/vendor/github.com/beorn7/perks \
        bshuster-repo:logrus-logstash-hook:v1.0.0:bshuster_repo_logrus_logstash_hook/vendor/github.com/bshuster-repo/logrus-logstash-hook \
        bugsnag:bugsnag-go:b1d153021fcd:bugsnag_bugsnag_go/vendor/github.com/bugsnag/bugsnag-go \
        bugsnag:osext:0dd3f918b21b:bugsnag_osext/vendor/github.com/bugsnag/osext \
        bugsnag:panicwrap:e2c28503fcd0:bugsnag_panicwrap/vendor/github.com/bugsnag/panicwrap \
        cespare:xxhash:v2.2.0:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
        chai2010:gettext-go:v1.0.2:chai2010_gettext_go/vendor/github.com/chai2010/gettext-go \
        containerd:containerd:v1.7.0:containerd_containerd/vendor/github.com/containerd/containerd \
        cpuguy83:go-md2man:v2.0.2:cpuguy83_go_md2man_v2/vendor/github.com/cpuguy83/go-md2man/v2 \
        cyphar:filepath-securejoin:v0.2.3:cyphar_filepath_securejoin/vendor/github.com/cyphar/filepath-securejoin \
        davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
        distribution:distribution:362910506bc2:distribution_distribution_v3/vendor/github.com/distribution/distribution/v3 \
        docker:cli:v20.10.21:docker_cli/vendor/github.com/docker/cli \
        docker:distribution:v2.8.1:docker_distribution/vendor/github.com/docker/distribution \
        docker:go-connections:v0.4.0:docker_go_connections/vendor/github.com/docker/go-connections \
        docker:go-events:e31b211e4f1c:docker_go_events/vendor/github.com/docker/go-events \
        docker:go-metrics:v0.0.1:docker_go_metrics/vendor/github.com/docker/go-metrics \
        docker:go-units:v0.5.0:docker_go_units/vendor/github.com/docker/go-units \
        docker:libtrust:fa567046d9b1:docker_libtrust/vendor/github.com/docker/libtrust \
        emicklei:go-restful:v3.10.1:emicklei_go_restful_v3/vendor/github.com/emicklei/go-restful/v3 \
        evanphx:json-patch:v5.6.0:evanphx_json_patch/vendor/github.com/evanphx/json-patch \
        exponent-io:jsonpath:d6023ce2651d:exponent_io_jsonpath/vendor/github.com/exponent-io/jsonpath \
        fatih:color:v1.13.0:fatih_color/vendor/github.com/fatih/color \
        felixge:httpsnoop:v1.0.3:felixge_httpsnoop/vendor/github.com/felixge/httpsnoop \
        fvbommel:sortorder:v1.0.1:fvbommel_sortorder/vendor/github.com/fvbommel/sortorder \
        go-errors:errors:v1.0.1:go_errors_errors/vendor/github.com/go-errors/errors \
        go-gorp:gorp:v3.0.5:go_gorp_gorp_v3/vendor/github.com/go-gorp/gorp/v3 \
        go-inf:inf:v0.9.1:go_inf_inf/vendor/gopkg.in/inf.v0 \
        go-logr:logr:v1.2.3:go_logr_logr/vendor/github.com/go-logr/logr \
        go-logr:stdr:v1.2.2:go_logr_stdr/vendor/github.com/go-logr/stdr \
        go-openapi:jsonpointer:v0.19.5:go_openapi_jsonpointer/vendor/github.com/go-openapi/jsonpointer \
        go-openapi:jsonreference:v0.20.0:go_openapi_jsonreference/vendor/github.com/go-openapi/jsonreference \
        go-openapi:swag:v0.19.14:go_openapi_swag/vendor/github.com/go-openapi/swag \
        go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
        go-yaml:yaml:v3.0.1:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
        gobwas:glob:v0.2.3:gobwas_glob/vendor/github.com/gobwas/glob \
        gofrs:flock:v0.8.1:gofrs_flock/vendor/github.com/gofrs/flock \
        gogo:protobuf:v1.3.2:gogo_protobuf/vendor/github.com/gogo/protobuf \
        golang:appengine:v1.6.7:golang_appengine/vendor/google.golang.org/appengine \
        golang:crypto:v0.5.0:golang_crypto/vendor/golang.org/x/crypto \
        golang:net:v0.7.0:golang_net/vendor/golang.org/x/net \
        golang:oauth2:v0.4.0:golang_oauth2/vendor/golang.org/x/oauth2 \
        golang:protobuf:v1.5.2:golang_protobuf/vendor/github.com/golang/protobuf \
        golang:sync:v0.1.0:golang_sync/vendor/golang.org/x/sync \
        golang:sys:v0.6.0:golang_sys/vendor/golang.org/x/sys \
        golang:term:v0.5.0:golang_term/vendor/golang.org/x/term \
        golang:text:v0.9.0:golang_text/vendor/golang.org/x/text \
        golang:time:90d013bbcef8:golang_time/vendor/golang.org/x/time \
        gomodule:redigo:v1.8.2:gomodule_redigo/vendor/github.com/gomodule/redigo \
        google:btree:v1.0.1:google_btree/vendor/github.com/google/btree \
        google:gnostic:v0.5.7-v3refs:google_gnostic/vendor/github.com/google/gnostic \
        google:go-cmp:v0.5.9:google_go_cmp/vendor/github.com/google/go-cmp \
        google:go-genproto:7f2fa6fef1f4:google_go_genproto/vendor/google.golang.org/genproto \
        google:gofuzz:v1.2.0:google_gofuzz/vendor/github.com/google/gofuzz \
        google:shlex:e7afc7fbc510:google_shlex/vendor/github.com/google/shlex \
        google:uuid:v1.3.0:google_uuid/vendor/github.com/google/uuid \
        gorilla:handlers:v1.5.1:gorilla_handlers/vendor/github.com/gorilla/handlers \
        gorilla:mux:v1.8.0:gorilla_mux/vendor/github.com/gorilla/mux \
        gosuri:uitable:v0.0.4:gosuri_uitable/vendor/github.com/gosuri/uitable \
        gregjones:httpcache:9cad4c3443a7:gregjones_httpcache/vendor/github.com/gregjones/httpcache \
        grpc:grpc-go:v1.53.0:grpc_grpc_go/vendor/google.golang.org/grpc \
        hashicorp:errwrap:v1.1.0:hashicorp_errwrap/vendor/github.com/hashicorp/errwrap \
        hashicorp:go-multierror:v1.1.1:hashicorp_go_multierror/vendor/github.com/hashicorp/go-multierror \
        hashicorp:golang-lru:v0.5.4:hashicorp_golang_lru/vendor/github.com/hashicorp/golang-lru \
        huandu:xstrings:v1.4.0:huandu_xstrings/vendor/github.com/huandu/xstrings \
        imdario:mergo:v0.3.13:imdario_mergo/vendor/github.com/imdario/mergo \
        inconshreveable:mousetrap:v1.0.1:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
        jmoiron:sqlx:v1.3.5:jmoiron_sqlx/vendor/github.com/jmoiron/sqlx \
        josharian:intern:v1.0.0:josharian_intern/vendor/github.com/josharian/intern \
        json-iterator:go:v1.1.12:json_iterator_go/vendor/github.com/json-iterator/go \
        klauspost:compress:v1.16.0:klauspost_compress/vendor/github.com/klauspost/compress \
        kubernetes-sigs:yaml:v1.3.0:kubernetes_sigs_yaml/vendor/sigs.k8s.io/yaml \
        kubernetes:api:v0.26.2:kubernetes_api/vendor/k8s.io/api \
        kubernetes:apiextensions-apiserver:v0.26.0:kubernetes_apiextensions_apiserver/vendor/k8s.io/apiextensions-apiserver \
        kubernetes:apimachinery:v0.26.2:kubernetes_apimachinery/vendor/k8s.io/apimachinery \
        kubernetes:apiserver:v0.26.2:kubernetes_apiserver/vendor/k8s.io/apiserver \
        kubernetes:cli-runtime:v0.26.0:kubernetes_cli_runtime/vendor/k8s.io/cli-runtime \
        kubernetes:client-go:v0.26.2:kubernetes_client_go/vendor/k8s.io/client-go \
        kubernetes:component-base:v0.26.2:kubernetes_component_base/vendor/k8s.io/component-base \
        kubernetes:kube-openapi:172d655c2280:kubernetes_kube_openapi/vendor/k8s.io/kube-openapi \
        kubernetes:kubectl:v0.26.0:kubernetes_kubectl/vendor/k8s.io/kubectl \
        kubernetes:utils:a5ecb0141aa5:kubernetes_utils/vendor/k8s.io/utils \
        lann:builder:47ae307949d0:lann_builder/vendor/github.com/lann/builder \
        lann:ps:62de8c46ede0:lann_ps/vendor/github.com/lann/ps \
        lib:pq:v1.10.7:lib_pq/vendor/github.com/lib/pq \
        liggitt:tabwriter:89fcab3d43de:liggitt_tabwriter/vendor/github.com/liggitt/tabwriter \
        mailru:easyjson:v0.7.6:mailru_easyjson/vendor/github.com/mailru/easyjson \
        mattn:go-colorable:v0.1.13:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
        mattn:go-isatty:v0.0.17:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
        mattn:go-runewidth:v0.0.9:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
        mattn:go-shellwords:v1.0.12:mattn_go_shellwords/vendor/github.com/mattn/go-shellwords \
        matttproud:golang_protobuf_extensions:v1.0.4:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
        mitchellh:copystructure:v1.2.0:mitchellh_copystructure/vendor/github.com/mitchellh/copystructure \
        mitchellh:go-wordwrap:v1.0.0:mitchellh_go_wordwrap/vendor/github.com/mitchellh/go-wordwrap \
        mitchellh:reflectwalk:v1.0.2:mitchellh_reflectwalk/vendor/github.com/mitchellh/reflectwalk \
        moby:locker:v1.0.1:moby_locker/vendor/github.com/moby/locker \
        moby:moby:v0.7.0:moby_moby_1/vendor/github.com/docker/docker-credential-helpers \
        moby:moby:v20.10.24:moby_moby/vendor/github.com/docker/docker \
        moby:spdystream:v0.2.0:moby_spdystream/vendor/github.com/moby/spdystream \
        moby:term:1aeaba878587:moby_term/vendor/github.com/moby/term \
        modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
        modern-go:reflect2:v1.0.2:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
        monochromegane:go-gitignore:205db1a8cc00:monochromegane_go_gitignore/vendor/github.com/monochromegane/go-gitignore \
        morikuni:aec:v1.0.0:morikuni_aec/vendor/github.com/morikuni/aec \
        munnerz:goautoneg:a7dc8b61c822:munnerz_goautoneg/vendor/github.com/munnerz/goautoneg \
        opencontainers:go-digest:v1.0.0:opencontainers_go_digest/vendor/github.com/opencontainers/go-digest \
        opencontainers:image-spec:3a7f492d3f1b:opencontainers_image_spec/vendor/github.com/opencontainers/image-spec \
        peterbourgon:diskv:v2.0.1:peterbourgon_diskv/vendor/github.com/peterbourgon/diskv \
        phayes:freeport:74d24b5ae9f5:phayes_freeport/vendor/github.com/phayes/freeport \
        pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
        pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
        prometheus:client_golang:v1.14.0:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
        prometheus:client_model:v0.3.0:prometheus_client_model/vendor/github.com/prometheus/client_model \
        prometheus:common:v0.37.0:prometheus_common/vendor/github.com/prometheus/common \
        prometheus:procfs:v0.8.0:prometheus_procfs/vendor/github.com/prometheus/procfs \
        protocolbuffers:protobuf-go:v1.28.1:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
        rubenv:sql-migrate:v1.3.1:rubenv_sql_migrate/vendor/github.com/rubenv/sql-migrate \
        russross:blackfriday:v2.1.0:russross_blackfriday_v2/vendor/github.com/russross/blackfriday/v2 \
        shopspring:decimal:v1.3.1:shopspring_decimal/vendor/github.com/shopspring/decimal \
        sirupsen:logrus:v1.9.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
        spf13:cast:v1.5.0:spf13_cast/vendor/github.com/spf13/cast \
        spf13:cobra:v1.6.1:spf13_cobra/vendor/github.com/spf13/cobra \
        spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
        stretchr:testify:v1.8.2:stretchr_testify/vendor/github.com/stretchr/testify \
        xeipuuv:gojsonpointer:02993c407bfb:xeipuuv_gojsonpointer/vendor/github.com/xeipuuv/gojsonpointer \
        xeipuuv:gojsonreference:bd5ef7bd5415:xeipuuv_gojsonreference/vendor/github.com/xeipuuv/gojsonreference \
        xeipuuv:gojsonschema:v1.2.0:xeipuuv_gojsonschema/vendor/github.com/xeipuuv/gojsonschema \
        xlab:treeprint:v1.1.0:xlab_treeprint/vendor/github.com/xlab/treeprint \
        yvasiyarov:go-metrics:57bccd1ccd43:yvasiyarov_go_metrics/vendor/github.com/yvasiyarov/go-metrics \
        yvasiyarov:gorelic:a9bba5b9ab50:yvasiyarov_gorelic/vendor/github.com/yvasiyarov/gorelic \
        yvasiyarov:newrelic_platform_go:b21fdbd4370f:yvasiyarov_newrelic_platform_go/vendor/github.com/yvasiyarov/newrelic_platform_go


# Mirrors for the following packages are not currently known, please look them up and handle these tuples manually:
#       ::8dd3e2ee1dd5:group_name/vendor/go.starlark.net (from go.starlark.net@8dd3e2ee1dd5)
#       ::f223a00ba0e2:group_name/vendor/sigs.k8s.io/json (from sigs.k8s.io/json@f223a00ba0e2)
#       ::v0.12.1:group_name/vendor/sigs.k8s.io/kustomize/api (from sigs.k8s.io/kustomize/api@v0.12.1)
#       ::v0.13.9:group_name/vendor/sigs.k8s.io/kustomize/kyaml (from sigs.k8s.io/kustomize/kyaml@v0.13.9)
#       ::v1.14.0:group_name/vendor/go.opentelemetry.io/otel (from go.opentelemetry.io/otel@v1.14.0)
#       ::v1.14.0:group_name/vendor/go.opentelemetry.io/otel/trace (from go.opentelemetry.io/otel/trace@v1.14.0)
#       ::v1.2.2:group_name/vendor/oras.land/oras-go (from oras.land/oras-go@v1.2.2)
#       ::v2.90.1:group_name/vendor/k8s.io/klog/v2 (from k8s.io/klog/v2@v2.90.1)
#       ::v4.2.3:group_name/vendor/sigs.k8s.io/structured-merge-diff/v4 (from sigs.k8s.io/structured-merge-diff/v4@v4.2.3)


GO_PKGNAME=	k8s.io/helm
GO_BUILDFLAGS=	-ldflags="-X helm.sh/helm/v3/internal/version.version=v${PORTVERSION} \
		-X helm.sh/helm/v3/internal/version.gitCommit=835b7334cfe2e5e27870ab3ed4135f136eecc704"
GO_TARGET=	./cmd/${PORTNAME}

post-extract:
	cd ${WRKSRC} && ${GO_CMD} mod vendor


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${STAGEDIR}${PREFIX}/bin/helm completion bash > ${STAGEDIR}${PREFIX}/share/bash-completion/completions/helm

.include <bsd.port.mk>
