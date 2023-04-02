#!/bin/bash
set -o errexit
set -o nounset
set -o pipefail

PROJECT_DIR="$(
    cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null;
    pwd;
)"

DRIVE="/run/media/$USER/RPI-RP2"
while true; do
    if [ -e "$DRIVE" ]; then
        FIRMWARE=$(find "$PROJECT_DIR" -name \*."uf2" | head -1)
        echo -n "[$(date  +"%H:%M:%S")] Flashing $FIRMWARE: "
        cp "$FIRMWARE" "$DRIVE"
        while [ -e "$DRIVE" ]; do
            echo -n "."
            sleep 1
        done
        echo "OK"
        tput bel
    fi
    sleep 1
done
