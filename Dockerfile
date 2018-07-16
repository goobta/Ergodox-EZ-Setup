FROM ubuntu
MAINTAINER Ankur Gupta <github.com/agupta231>

RUN apt-get update && \
		apt-get upgrade -y && \
		apt-get install -y gcc \
										   unzip \
											 wget \
											 zip \
											 gcc-avr \
											 binutils-avr \
											 avr-libc \
											 dfu-programmer \
											 dfu-util \
											 gcc-arm-none-eabi \
											 binutils-arm-none-eabi \
											 libnewlib-arm-none-eabi \
											 make \
											 git-core

RUN cd / && \
		git clone https://github.com/qmk/qmk_firmware && \
		mkdir -p qmk_firmware/keyboards/ergodox_ez/keymaps/agupta

WORKDIR /qmk_firmware
CMD make ergodox_ez:agupta && cp ergodox_ez_agupta.hex keyboards/ergodox_ez/keymaps/agupta
