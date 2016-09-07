#!/bin/bash
export PATH=/usr/local/Qt-5.4.0/bin/:$PATH
export OPENSSL_ROOT_DIR=$(brew --prefix openssl)

# Cleanup
cd ~
sudo rm -rf mokapress-v2/build-mac
sudo rm -rf mokapress-v2/install

# Clone the desktop client code
# cd ~
# git clone --recursive https://github.com/owncloud/client.git
# cd client
# git checkout v2.2.3
# git submodule update --recursive

# Build qtkeychain
cd ~/mokapress-v2/client/src/3rdparty/qtkeychain
cmake -DCMAKE_OSX_SYSROOT="/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk" -DCMAKE_OSX_DEPLOYMENT_TARGET=10.8 -DCMAKE_INSTALL_PREFIX=/Users/builder/mokapress-v2/install -DCMAKE_PREFIX_PATH=/Users/builder/Qt/5.4/clang_64 .
sudo make install

# Build the client
cd ~/mokapress-v2
cp osx/dsa_pub.pem client/admin/osx/sparkle/
rm -rf build-mac
mkdir build-mac
cd build-mac
cmake -DCMAKE_OSX_SYSROOT="/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk" -DCMAKE_OSX_DEPLOYMENT_TARGET=10.8 -DCMAKE_INSTALL_PREFIX=/Users/builder/mokapress-v2/install -DCMAKE_PREFIX_PATH=/Users/builder/Qt/5.4/clang_64 -D SPARKLE_INCLUDE_DIR=/Users/builder/Library/Frameworks/Sparkle.framework/ -D SPARKLE_LIBRARY=/Users/builder/Library/Frameworks/Sparkle.framework/ -D OEM_THEME_DIR=/Users/builder/mokapress-v2/mokapresstheme -DWITH_CRASHREPORTER=ON -DMIRALL_VERSION_BUILD=4 ../client
make
sudo make install
sudo ~/mokapress-v2/client/admin/osx/sign_app.sh ~/mokapress-v2/mokapress.app 14C6139C495F80E3086E9912410161BFB41F0578
sudo ./admin/osx/create_mac.sh ../install/ . 3EA9DE660A8EE9ED0852BEEEA29269A22E97D427

# Generate a sparkle signature for the tbz
openssl dgst -sha1 -binary < ~/mokapres-v2/install/*.tbz | openssl dgst -dss1 -sign ~/dsa_priv.pem | openssl enc -base64 > ~/mokapress-v2/sig.txt
sudo mv ~/mokapress-v2/sig.txt ~/mokapress-v2/install/signature.txt
