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

#include <QtCore>
#include <QAbstractListModel>
#include <QWidget>
#include <QIcon>

#include "account.h"
#include "accountstate.h"
#include "accountmanager.h"
#include "folderman.h"
#include "accessmanager.h"
#include "activityitemdelegate.h"

#include "activitydata.h"
#include "activitylistmodel.h"

namespace OCC {

ActivityListModel::ActivityListModel(QWidget *parent)
    :QAbstractListModel(parent)
{
}

QVariant ActivityListModel::data(const QModelIndex &index, int role) const
{
    Activity a;

    if (!index.isValid())
        return QVariant();

    a = _finalList.at(index.row());
    AccountStatePtr ast = AccountManager::instance()->account(a._accName);
    QStringList list;

    switch (role) {
    case ActivityItemDelegate::PathRole:
        list = FolderMan::instance()->findFileInLocalFolders(a._file, ast->account());
        if( list.count() > 0 ) {
            return QVariant(list.at(0));
        }
        // File does not exist anymore? Let's try to open its path
        list = FolderMan::instance()->findFileInLocalFolders(QFileInfo(a._file).path(), ast->account());
        if( list.count() > 0 ) {
            return QVariant(list.at(0));
        }
        return QVariant();
        break;
    case ActivityItemDelegate::ActionIconRole:
        return QVariant(); // FIXME once the action can be quantified, display on Icon
        break;
    case ActivityItemDelegate::UserIconRole:
        return QIcon(QLatin1String(":/client/resources/account.png"));
        break;
    case Qt::ToolTipRole:
    case ActivityItemDelegate::ActionTextRole:
        return a._subject;
        break;
    case ActivityItemDelegate::LinkRole:
        return a._link;
        break;
    case ActivityItemDelegate::AccountRole:
        return a._accName;
        break;
    case ActivityItemDelegate::PointInTimeRole:
        return Utility::timeAgoInWords(a._dateTime);
        break;
    case ActivityItemDelegate::AccountConnectedRole:
        return (ast && ast->isConnected());
        break;
    default:
        return QVariant();

    }
    return QVariant();

}

int ActivityListModel::rowCount(const QModelIndex&) const
{
    return _finalList.count();
}

// current strategy: Fetch 100 items per Account
// ATTENTION: This method is const and thus it is not possible to modify
// the _activityLists hash or so. Doesn't make it easier...
bool ActivityListModel::canFetchMore(const QModelIndex& ) const
{
    if( _activityLists.count() == 0 ) return true;

    for(auto i = _activityLists.begin() ; i != _activityLists.end(); ++i) {
        AccountState *ast = i.key();
        if( ast && ast->isConnected() ) {
            ActivityList activities = i.value();
            if( activities.count() == 0 &&
                    ! _currentlyFetching.contains(ast) ) {
                return true;
            }
        }
    }

    return false;
}

void ActivityListModel::startFetchJob(AccountState* s)
{
    if( !s->isConnected() ) {
        return;
    }
    JsonApiJob *job = new JsonApiJob(s->account(), QLatin1String("ocs/v1.php/cloud/activity"), this);
    QObject::connect(job, SIGNAL(jsonReceived(QVariantMap, int)),
                     this, SLOT(slotActivitiesReceived(QVariantMap, int)));
    job->setProperty("AccountStatePtr", QVariant::fromValue<AccountState*>(s));

    QList< QPair<QString,QString> > params;
    params.append(qMakePair(QString::fromLatin1("page"),     QString::fromLatin1("0")));
    params.append(qMakePair(QString::fromLatin1("pagesize"), QString::fromLatin1("100")));
    job->addQueryParams(params);

    _currentlyFetching.insert(s);
    qDebug() << Q_FUNC_INFO << "Start fetching activities for " << s->account()->displayName();
    job->start();
}

void ActivityListModel::slotActivitiesReceived(const QVariantMap& json, int statusCode)
{
    auto activities = json.value("ocs").toMap().value("data").toList();

    ActivityList list;
    AccountState* ast = qvariant_cast<AccountState*>(sender()->property("AccountStatePtr"));
    _currentlyFetching.remove(ast);

    foreach( auto activ, activities ) {
        auto json = activ.toMap();

        Activity a;
        a._type = Activity::ActivityType;
        a._accName  = ast->account()->displayName();
        a._id       = json.value("id").toLongLong();
        a._subject  = json.value("subject").toString();
        a._message  = json.value("message").toString();
        a._file     = json.value("file").toString();
        a._link     = json.value("link").toUrl();
        a._dateTime = json.value("date").toDateTime();
        list.append(a);
    }

    _activityLists[ast] = list;

    emit activityJobStatusCode(ast, statusCode);

    combineActivityLists();
}


void ActivityListModel::combineActivityLists()
{
    ActivityList resultList;

    foreach( ActivityList list, _activityLists.values() ) {
        resultList.append(list);
    }

    std::sort( resultList.begin(), resultList.end() );

    beginResetModel();
    _finalList.clear();
    endResetModel();

    beginInsertRows(QModelIndex(), 0, resultList.count());
    _finalList = resultList;
    endInsertRows();
}

void ActivityListModel::fetchMore(const QModelIndex &)
{
    QList<AccountStatePtr> accounts = AccountManager::instance()->accounts();

    foreach (const AccountStatePtr& asp, accounts) {

        if( !_activityLists.contains(asp.data()) && asp->isConnected() ) {
            _activityLists[asp.data()] = ActivityList();
            startFetchJob(asp.data());
        }
    }
}

void ActivityListModel::slotRefreshActivity(AccountState *ast)
{
    if(ast && _activityLists.contains(ast)) {
        _activityLists.remove(ast);
    }
    startFetchJob(ast);
}

void ActivityListModel::slotRemoveAccount(AccountState *ast )
{
    if( _activityLists.contains(ast) ) {
        int i = 0;
        const QString accountToRemove = ast->account()->displayName();

        QMutableListIterator<Activity> it(_finalList);

        while (it.hasNext()) {
            Activity activity = it.next();
            if( activity._accName == accountToRemove ) {
                beginRemoveRows(QModelIndex(), i, i+1);
                it.remove();
                endRemoveRows();
            }
        }
        _activityLists.remove(ast);
        _currentlyFetching.remove(ast);
    }
}

}
