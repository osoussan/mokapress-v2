#ifndef CONFIG_H
#define CONFIG_H

/* #undef USE_INOTIFY */
/* #undef WITH_QTKEYCHAIN */
/* #undef WITH_CRASHREPORTER */
#define CRASHREPORTER_EXECUTABLE "mokapress_crash_reporter"
#define SOCKETAPI_TEAM_IDENTIFIER_PREFIX ""

#define APPLICATION_DOMAIN mokapress.com
#define THEME_CLASS MokapressTheme
#define THEME_INCLUDE /home/user/mokapresstheme/mokapress.h

#define APPLICATION_NAME "Mokapress"
#define APPLICATION_VENDOR "Mokapress"
#define APPLICATION_REV_DOMAIN "com.mokapress.desktopclient"
#define APPLICATION_SHORTNAME "Mokapress"
#define APPLICATION_EXECUTABLE "mokapress"
#define APPLICATION_UPDATE_URL "https://mokapress.com/client/"

#define ZLIB_FOUND TRUE

#define SYSCONFDIR "config"
#define SHAREDIR "share"

#endif
