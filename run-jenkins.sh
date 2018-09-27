#!/bin/sh

docker build -t ergodox_ez:jenkins -f Dockerfile.jenkins .
docker run --rm  ergodox_ez:jenkins
