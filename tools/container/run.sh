#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")/../.." >/dev/null;
    pwd;
)"

podman run -it \
    --rm \
    --volume "$PROJECT_DIR:/workspace:z" \
    --workdir "/workspace" \
    localhost/qmk_devenv "$@"
