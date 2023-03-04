#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null;
    pwd;
)"
QMK_DIR="/workspaces/firmware"

set -x
ln -sf /workspaces/qmk/keyboards/* /workspaces/firmware/keyboards/
reset
qmk compile -kb "$1" -km default
for EXT in bin hex uf2; do
    find "$PROJECT_DIR" -name \*."$EXT" -delete
    find "$QMK_DIR" -name \*."$EXT" -exec mv \{\} "$PROJECT_DIR" \;
done
