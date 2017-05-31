#!/bin/sh
if [[ ${OC_OEM_SHARE_ICNS} ]]; then
  cp ${OC_OEM_SHARE_ICNS} ${BUILT_PRODUCTS_DIR}/FinderSyncExt.appex/Contents/Resources/app.icns
fi
