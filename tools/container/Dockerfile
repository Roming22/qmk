FROM ghcr.io/qmk/qmk_cli

ADD https://raw.githubusercontent.com/qmk/qmk_firmware/master/util/udev/50-qmk.rules /etc/udev/rules.d/50-qmk.rules
RUN qmk setup -H /qmk_firmware --yes