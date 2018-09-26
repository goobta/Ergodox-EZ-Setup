#!/bin/sh

docker build -t ergodox_ez .
docker run --rm -v `pwd`:/qmk_firmware/keyboards/ergodox_ez/keymaps/agupta/:Z ergodox_ez
