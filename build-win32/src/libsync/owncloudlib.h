
#ifndef OWNCLOUDSYNC_EXPORT_H
#define OWNCLOUDSYNC_EXPORT_H

#ifdef OWNCLOUD_BUILT_AS_STATIC
#  define OWNCLOUDSYNC_EXPORT
#  define MOKAPRESSSYNC_NO_EXPORT
#else
#  ifndef OWNCLOUDSYNC_EXPORT
#    ifdef mokapresssync_EXPORTS
        /* We are building this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MOKAPRESSSYNC_NO_EXPORT
#    define MOKAPRESSSYNC_NO_EXPORT 
#  endif
#endif

#ifndef MOKAPRESSSYNC_DEPRECATED
#  define MOKAPRESSSYNC_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOKAPRESSSYNC_DEPRECATED_EXPORT
#  define MOKAPRESSSYNC_DEPRECATED_EXPORT OWNCLOUDSYNC_EXPORT MOKAPRESSSYNC_DEPRECATED
#endif

#ifndef MOKAPRESSSYNC_DEPRECATED_NO_EXPORT
#  define MOKAPRESSSYNC_DEPRECATED_NO_EXPORT MOKAPRESSSYNC_NO_EXPORT MOKAPRESSSYNC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOKAPRESSSYNC_NO_DEPRECATED
#    define MOKAPRESSSYNC_NO_DEPRECATED
#  endif
#endif

#endif
