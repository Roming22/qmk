#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")/../.." >/dev/null;
    pwd;
)"

# When using podman, a lot of space is required on /tmp.
# The creation of the image then fails with "no space left on device".
# Using the home directory of the user should solve this issue in most cases.
TMPDIR="$(TMPDIR="$HOME" mktemp -d)"
export TMPDIR

podman build -f "$PROJECT_DIR/.devcontainer/Dockerfile" -t qmk_devenv "$PROJECT_DIR"

rm -rf "$TMPDIR"
