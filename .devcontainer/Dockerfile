FROM quay.io/fedora/fedora:latest

ARG USERNAME=user
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create a user with extended permissions
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --create-home --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && dnf install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME \
	&& mkdir /workspaces \
    && chown $USER_UID:$USER_GID /workspaces

# Create udev rule for QMK supported board
ADD https://raw.githubusercontent.com/qmk/qmk_firmware/master/util/udev/50-qmk.rules /etc/udev/rules.d/

# Prepare the environment
USER $USERNAME
ENV PATH "/home/user/.local/bin:$PATH"
RUN sudo chmod +r /etc/udev/rules.d/50-qmk.rules \
    && sudo dnf install -y git python3 python3-pip \
    && pip install --user qmk
RUN qmk setup -H /workspaces/firmware --yes
WORKDIR /workspaces

