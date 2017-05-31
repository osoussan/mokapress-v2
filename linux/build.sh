#!/usr/bin/env bash

cd ../client
mkdir build_linux
cd build_linux

cmake .. -DOEM_THEME_DIR=/home/sly/work/Mokapress/mokapress-v2/mokapresstheme
make
sudo make install

cp bin/mokapress ../../linux
