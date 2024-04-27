#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")/.." >/dev/null;
    pwd;
)"

"$PROJECT_DIR/tools/container/build.sh"

cat "$PROJECT_DIR/tools/container/bin/compile.sh" | podman run \
    -i \
    --env KEYBOARD="$1" \
    --rm \
    --volume "$PROJECT_DIR:/workspace:Z" \
    --workdir "/workspace" \
    localhost/qmk_devenv

tput bel
