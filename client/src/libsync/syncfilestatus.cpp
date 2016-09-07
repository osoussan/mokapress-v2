/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "syncfilestatus.h"

#include <QDebug>

namespace OCC {
SyncFileStatus::SyncFileStatus()
    :_tag(StatusNone), _sharedWithMe(false)
{
}

SyncFileStatus::SyncFileStatus(SyncFileStatusTag tag)
    :_tag(tag), _sharedWithMe(false)
{

}

void SyncFileStatus::set(SyncFileStatusTag tag)
{
    _tag = tag;
}

SyncFileStatus::SyncFileStatusTag SyncFileStatus::tag()
{
    return _tag;
}

void SyncFileStatus::setSharedWithMe(bool isShared)
{
    _sharedWithMe = isShared;
}

bool SyncFileStatus::sharedWithMe()
{
    return _sharedWithMe;
}

QString SyncFileStatus::toSocketAPIString() const
{
    QString statusString;
    bool canBeShared = true;

    switch(_tag)
    {
    case StatusNone:
        statusString = QLatin1String("NOP");
        canBeShared = false;
        break;
    case StatusSync:
        statusString = QLatin1String("SYNC");
        break;
    case StatusWarning:
        // The protocol says IGNORE, but all implementations show a yellow warning sign.
        statusString = QLatin1String("IGNORE");
        break;
    case StatusUpToDate:
        statusString = QLatin1String("OK");
        break;
    case StatusError:
        statusString = QLatin1String("ERROR");
        break;
    }
    if(canBeShared && _sharedWithMe) {
        statusString += QLatin1String("+SWM");
    }

    return statusString;
}
}
