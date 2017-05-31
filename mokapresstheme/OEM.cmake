set( APPLICATION_NAME       "Mokapress" )
set( APPLICATION_EXECUTABLE "mokapress" )
set( APPLICATION_DOMAIN     "mokapress.com" )
set( APPLICATION_VENDOR     "Mokapress" )
set( APPLICATION_UPDATE_URL "https://mokapress.com/client/" CACHE string "URL for updater" )

set( THEME_CLASS            "MokapressTheme" )
set( APPLICATION_REV_DOMAIN "com.mokapress.desktopclient" )
set( WIN_SETUP_BITMAP_PATH  "${OEM_THEME_DIR}/win" )

set( MAC_INSTALLER_BACKGROUND_FILE "${OEM_THEME_DIR}/osx/installer-background.png" CACHE STRING "The MacOSX installer background image")

set( THEME_INCLUDE          "${OEM_THEME_DIR}/mokapress.h" )
# set( APPLICATION_LICENSE    "${OEM_THEME_DIR}/license.txt )

option( WITH_CRASHREPORTER "Build crashreporter" OFF )
set( CRASHREPORTER_SUBMIT_URL "https://crash-reports.owncloud.com/submit" CACHE string "URL for crash reporter" )
set( CRASHREPORTER_ICON ":/owncloud-icon.png" )

if(CPACK_GENERATOR MATCHES "NSIS")
    SET( CPACK_PACKAGE_ICON  "{OEM_THEME_DIR}/win/installer.ico" ) # Set installer icon
endif(CPACK_GENERATOR MATCHES "NSIS")
