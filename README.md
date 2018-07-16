# Ergodox-EZ-Setup

This project is designed for the Ergodox EZ which uses the [qmk](https://github.com/qmk/qmk_firmware)
firmware. 

## Context
My never ending quest to have the perfect keyboard layout.

## How to compile
### Manually (Not Recommended)
1. Clone the [qmk_firmware](https://github.com/qmk/qmk_firmware) repo.
2. Make a folder in `keyboards/ergodox_ez/keymaps/`
3. Move source files to the new folder
4. Go back to the `qmk_firmware` root
5. Run `make ergodox_ez:<folder name>`
6. Using the `.hex` file, follow [these directions](https://www.youtube.com/watch?v=9PyiGUO9_KQ) to
flash your Ergodox

### Docker (Highly Recommended)
This assumes that you have Docker installed.

Just run `docker-compose up` and the `.hex` file will automagically be made for you! Any time you 
edit the `keymap.c` file, just rerun `docker-compose up` to recompile it.

If there are any new updates to the	`qmk_firmware` repo, just run a `docker-compose build`.

Only if you edit the Dockerfile, then you need to run a `docker-compose build`... but if you're
editing the Dockerfile, then you already know that.

#### Docker FAQ
##### Why does it take so long to run?
If it is your first time running it, Docker will be creating the environment in order to compile the
keymap. After your first time, every recompile should take a couple of seconds.

##### Why didn't you just publish an image to Dockerhub and save us a bunch of time?
This image is literally only used once, so it isn't very beneficial to publish it. Also, qmk is a
live repository, and it is easier to do a `docker-compose build`, which will run relatively fast
because of how docker caches, than it is to publish a new image for every release of `qmk`.

## Current Layout
Please refer to my [keymap](https://github.com/agupta231/Ergodox-EZ-Setup/blob/master/keymap.pdf) to
see what the current layout of the keyboard is. To see the different revisions of the layout, please
see the releases section.

## Keystroke Heatmap
TODO

## Keymap Features
TODO
