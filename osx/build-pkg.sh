#!/bin/bash
export PATH=/usr/local/Qt-5.4.0/bin/:$PATH
export OPENSSL_ROOT_DIR=$(brew --prefix openssl)
cd ../build-mac

# Ajouter une reference rpath aux librairies


sudo cp /usr/lib/libssl.1.0.0.dylib ../install/mokapress.app/Contents/MacOS/.

#LibSSL
sudo install_name_tool -change /usr/lib/libssl.1.0.0.dylib @executable_path/../MacOS/libssl.1.0.0.dylib ../install/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib
sudo install_name_tool -change /usr/lib/libssl.1.0.0.dylib @executable_path/../MacOS/libssl.1.0.0.dylib ../install/mokapress.app/Contents/MacOS/mokapress
sudo install_name_tool -change /usr/lib/libssl.1.0.0.dylib @executable_path/../MacOS/libssl.1.0.0.dylib ../install/mokapress.app/Contents/MacOS/mokapresscmd


sudo ~/mokapress-v2/client/admin/osx/sign_app.sh ~/mokapress-v2/install/mokapress.app 14C6139C495F80E3086E9912410161BFB41F0578
sudo sh ./admin/osx/create_mac.sh ../install/ . 3EA9DE660A8EE9ED0852BEEEA29269A22E97D427

 

# Generate a sparkle signature for the tbz
openssl dgst -sha1 -binary < ~/mokapres-v2/install/*.tbz | openssl dgst -dss1 -sign ~/dsa_priv.pem | openssl enc -base64 > ~/mokapress-v2/sig.txt
sudo mv ~/mokapress-v2/sig.txt ~/mokapress-v2/install/signature.txt
