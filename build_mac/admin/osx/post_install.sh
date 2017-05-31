#!/bin/sh

osascript << EOF
tell application "Finder"
   activate
   select the last Finder window
	reveal POSIX file "/Applications/mokapress.app"
end tell
EOF

# Always enable the new 10.10 finder plugin if available
if [ -x "$(command -v pluginkit)" ]; then
    # add it to DB. This happens automatically too but we try to push it a bit harder for issue #3463
    pluginkit -a  "/Applications/mokapress.app/Contents/PlugIns/FinderSyncExt.appex/"
    # Since El Capitan we need to sleep #4650
    sleep 10s
    # enable it
    pluginkit -e use -i com.mokapress.desktopclient.FinderSyncExt
fi

exit 0
