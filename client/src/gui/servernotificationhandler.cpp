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

#include "servernotificationhandler.h"
#include "accountstate.h"
#include "capabilities.h"
#include "json.h"
#include "networkjobs.h"

namespace OCC
{

ServerNotificationHandler::ServerNotificationHandler(QObject *parent)
    : QObject(parent)
{

}

void ServerNotificationHandler::slotFetchNotifications(AccountState *ptr)
{
    // check connectivity and credentials
    if( !( ptr && ptr->isConnected() && ptr->account() &&
           ptr->account()->credentials() &&
           ptr->account()->credentials()->ready() ) ) {
        deleteLater();
        return;
    }
    // check if the account has notifications enabled. If the capabilities are
    // not yet valid, its assumed that notifications are available.
    if( ptr->account()->capabilities().isValid() ) {
        if( ! ptr->account()->capabilities().notificationsAvailable() ) {
            qDebug() << Q_FUNC_INFO << "Account" << ptr->account()->displayName() << "does not have notifications enabled.";
            deleteLater();
            return;
        }
    }

    // if the previous notification job has finished, start next.
    _notificationJob = new JsonApiJob( ptr->account(), QLatin1String("ocs/v2.php/apps/notifications/api/v1/notifications"), this );
    QObject::connect(_notificationJob.data(), SIGNAL(jsonReceived(QVariantMap, int)),
                     this, SLOT(slotNotificationsReceived(QVariantMap, int)));
    _notificationJob->setProperty("AccountStatePtr", QVariant::fromValue<AccountState*>(ptr));

    _notificationJob->start();
}

void ServerNotificationHandler::slotNotificationsReceived(const QVariantMap& json, int statusCode)
{
    if( statusCode != 200 ) {
        qDebug() << Q_FUNC_INFO << "Notifications failed with status code " << statusCode;
        deleteLater();
        return;
    }

    auto notifies = json.value("ocs").toMap().value("data").toList();

    AccountState* ai = qvariant_cast<AccountState*>(sender()->property("AccountStatePtr"));

    ActivityList list;

    foreach( auto element, notifies ) {
        Activity a;
        auto json   = element.toMap();
        a._type     = Activity::NotificationType;
        a._accName  = ai->account()->displayName();
        a._id       = json.value("notification_id").toLongLong();
        a._subject  = json.value("subject").toString();
        a._message  = json.value("message").toString();
        QString s   = json.value("link").toString();
        if( !s.isEmpty() ) {
            a._link     = QUrl(s);
        }
        a._dateTime = json.value("datetime").toDateTime();

        auto actions = json.value("actions").toList();
        foreach( auto action, actions) {
            auto actionJson = action.toMap();
            ActivityLink al;
            al._label = QUrl::fromPercentEncoding(actionJson.value("label").toByteArray());
            al._link  = actionJson.value("link").toString();
            al._verb  = actionJson.value("type").toByteArray();
            al._isPrimary = actionJson.value("primary").toBool();

            a._links.append(al);
        }
        list.append(a);
    }
    emit newNotificationList( list );

    deleteLater();
}

}
