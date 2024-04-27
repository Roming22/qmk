set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="/workspace"
BUILD_DIR="$PROJECT_DIR/build"
QMK_DIR="/qmk_firmware"

mkdir -p "$BUILD_DIR"
ln -sf "$PROJECT_DIR/keyboards/"* "$QMK_DIR/keyboards/"

KEYBOARD="${1:-$KEYBOARD}"
KEYMAP="${2:-${KEYMAP:-default}}"
qmk info -kb "$KEYBOARD" -m
qmk lint -kb "$KEYBOARD"
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"  # --env CONVERT_TO=kb2040
echo "Compilation successful"

for EXT in bin hex uf2; do
    find "$BUILD_DIR" -name \*."$EXT" -delete
    find "$QMK_DIR/.build" -name \*."$EXT" -exec mv \{\} "$BUILD_DIR" \;
done