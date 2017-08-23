/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#ifndef VERSION_H
#define VERSION_H

#define GIT_SHA1 "d9a423c79ed55680b37caa5f5b65a3d4e00232ba"

#define MIRALL_STRINGIFY(s) MIRALL_TOSTRING(s)
#define MIRALL_TOSTRING(s) #s

/* MIRALL version */
#define MIRALL_VERSION_MAJOR 2
#define MIRALL_VERSION_MINOR 2
#define MIRALL_VERSION_PATCH 3
#define MIRALL_VERSION_BUILD 0

#define MIRALL_VERSION       2.2.3
#define MIRALL_VERSION_FULL  2.2.3.0

#define MIRALL_VERSION_STRING "2.2.3"

#endif // VERSION_H
