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
cmake -DCMAKE_OSX_SYSROOT="/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk" -DCMAKE_OSX_DEPLOYMENT_TARGET=10.8 -DCMAKE_INSTALL_PREFIX=/Users/builder/mokapress-v2/install -DCMAKE_PREFIX_PATH=/Users/builder/Qt/5.4/clang_64 -D SPARKLE_INCLUDE_DIR=/Users/builder/Library/Frameworks/Sparkle.framework/ -D SPARKLE_LIBRARY=/Users/builder/Library/Frameworks/Sparkle.framework/ -D OEM_THEME_DIR=/Users/builder/mokapress-v2/mokapresstheme -DWITH_CRASHREPORTER=ON -DMIRALL_VERSION_BUILD=4 -DCMAKE_BUILD_TYPE=Release ../client
make
sudo make install


# Ajouter une reference rpath aux librairies
sudo cp -rp ~/mokapress-v2/Frameworks/* ~/mokapress-v2/install/mokapress.app/Contents/Frameworks/
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWebKitWidgets.framework/Versions/5/QtWebKitWidgets @executable_path/../Frameworks/QtWebKitWidgets.framework/Versions/5/QtWebKitWidgets ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change  /usr/local/Qt-5.4.0/lib/QtSql.framework/Versions/5/QtSql @executable_path/../Frameworks/QtSql.framework/Versions/5/QtSql ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWebKit.framework/Versions/5/QtWebKit @executable_path/../Frameworks/QtWebKit.framework/Versions/5/QtWebKit ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtXml.framework/Versions/5/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/5/QtXml ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change libmokapresssync.0.dylib @executable_path/../MacOS/libmokapresssync.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change libocsync.0.dylib @executable_path/../MacOS/libocsync.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWidgets.framework/Versions/5/QtWidgets @executable_path/../Frameworks/QtWidgets.framework/Versions/5/QtWidgets ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool  -change /usr/local/Qt-5.4.0/lib/QtNetwork.framework/Versions/5/QtNetwork @executable_path/../Frameworks/QtNetwork.framework/Versions/5/QtNetwork ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtMacExtras.framework/Versions/5/QtMacExtras @executable_path/../Frameworks/QtMacExtras.framework/Versions/5/QtMacExtras ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtGui.framework/Versions/5/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/5/QtGui ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtConcurrent.framework/Versions/5/QtConcurrent @executable_path/../Frameworks/QtConcurrent.framework/Versions/5/QtConcurrent ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change @rpath/Sparkle.framework/Versions/A/Sparkle @executable_path/../Frameworks/Sparkle.framework/Versions/A/Sparkle ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/opt/openssl/lib/libssl.1.0.0.dylib @executable_path/../MacOS/libssl.1.0.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/opt/openssl/lib/libcrypto.1.0.0.dylib @executable_path/../MacOS/libcrypto.1.0.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/lib/libqt5keychain.0.dylib @executable_path/../MacOS/libqt5keychain.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtCore.framework/Versions/5/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/5/QtCore ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress


sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWebKitWidgets.framework/Versions/5/QtWebKitWidgets @executable_path/../Frameworks/QtWebKitWidgets.framework/Versions/5/QtWebKitWidgets ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change  /usr/local/Qt-5.4.0/lib/QtSql.framework/Versions/5/QtSql @executable_path/../Frameworks/QtSql.framework/Versions/5/QtSql ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWebKit.framework/Versions/5/QtWebKit @executable_path/../Frameworks/QtWebKit.framework/Versions/5/QtWebKit ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtXml.framework/Versions/5/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/5/QtXml ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change libocsync.0.dylib @executable_path/../MacOS/libocsync.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtWidgets.framework/Versions/5/QtWidgets @executable_path/../Frameworks/QtWidgets.framework/Versions/5/QtWidgets ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool  -change /usr/local/Qt-5.4.0/lib/QtNetwork.framework/Versions/5/QtNetwork @executable_path/../Frameworks/QtNetwork.framework/Versions/5/QtNetwork ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtMacExtras.framework/Versions/5/QtMacExtras @executable_path/../Frameworks/QtMacExtras.framework/Versions/5/QtMacExtras ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtGui.framework/Versions/5/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/5/QtGui ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtConcurrent.framework/Versions/5/QtConcurrent @executable_path/../Frameworks/QtConcurrent.framework/Versions/5/QtConcurrent ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change @rpath/Sparkle.framework/Versions/A/Sparkle @executable_path/../Frameworks/Sparkle.framework/Versions/A/Sparkle ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/opt/openssl/lib/libssl.1.0.0.dylib @executable_path/../MacOS/libssl.1.0.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/opt/openssl/lib/libcrypto.1.0.0.dylib @executable_path/../MacOS/libcrypto.1.0.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/local/lib/libqt5keychain.0.dylib @executable_path/../MacOS/libqt5keychain.0.dylib ~/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/local/Qt-5.4.0/lib/QtCore.framework/Versions/5/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/5/QtCore ~/mokapress-v2/install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib


sudo ~/mokapress-v2/client/admin/osx/sign_app.sh ~/mokapress-v2/install/mokapress.app 14C6139C495F80E3086E9912410161BFB41F0578
sudo sh ./admin/osx/create_mac.sh ../install/ . 3EA9DE660A8EE9ED0852BEEEA29269A22E97D427

 

# Generate a sparkle signature for the tbz
openssl dgst -sha1 -binary < ~/mokapres-v2/install/*.tbz | openssl dgst -dss1 -sign ~/dsa_priv.pem | openssl enc -base64 > ~/mokapress-v2/sig.txt
sudo mv ~/mokapress-v2/sig.txt ~/mokapress-v2/install/signature.txt
