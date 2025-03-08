#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

SCRIPT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null;
    pwd;
)"
PROJECT_DIR="$(
    cd "$SCRIPT_DIR/../.." >/dev/null;
    pwd;
)"

# When using podman, a lot of space is required on /tmp.
# The creation of the image then fails with "no space left on device".
# Using the home directory of the user should solve this issue in most cases.
TMPDIR="$(TMPDIR="$HOME" mktemp -d)"
export TMPDIR

podman build -f "$SCRIPT_DIR/Dockerfile" -t qmk_devenv "$PROJECT_DIR"

rm -rf "$TMPDIR"
