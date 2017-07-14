/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#ifndef NETWORKJOBS_H
#define NETWORKJOBS_H

#include "abstractnetworkjob.h"

class QUrl;

namespace OCC {

/**
 * @brief The EntityExistsJob class
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT EntityExistsJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit EntityExistsJob(AccountPtr account, const QString &path, QObject* parent = 0);
    void start() Q_DECL_OVERRIDE;

signals:
    void exists(QNetworkReply*);

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;
};

/**
 * @brief The LsColJob class
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT LsColXMLParser : public QObject {
    Q_OBJECT
public:
    explicit LsColXMLParser();

    bool parse(const QByteArray &xml, QHash<QString, qint64> *sizes, const QString& expectedPath);

signals:
    void directoryListingSubfolders(const QStringList &items);
    void directoryListingIterated(const QString &name, const QMap<QString,QString> &properties);
    void finishedWithError(QNetworkReply *reply);
    void finishedWithoutError();

};

class OWNCLOUDSYNC_EXPORT LsColJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit LsColJob(AccountPtr account, const QString &path, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;
    QHash<QString, qint64> _sizes;

    /**
     * Used to specify which properties shall be retrieved.
     *
     * The properties can
     *  - contain no colon: they refer to a property in the DAV: namespace
     *  - contain a colon: and thus specify an explicit namespace,
     *    e.g. "ns:with:colons:bar", which is "bar" in the "ns:with:colons" namespace
     */
    void setProperties(QList<QByteArray> properties);
    QList<QByteArray> properties() const;

signals:
    void directoryListingSubfolders(const QStringList &items);
    void directoryListingIterated(const QString &name, const QMap<QString,QString> &properties);
    void finishedWithError(QNetworkReply *reply);
    void finishedWithoutError();

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;

private:
    QList<QByteArray> _properties;
};

/**
 * @brief The PropfindJob class
 *
 * Setting the desired properties with setProperties() is mandatory.
 *
 * Note that this job is only for querying one item.
 * There is also the LsColJob which can be used to list collections
 *
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT PropfindJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit PropfindJob(AccountPtr account, const QString &path, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;

    /**
     * Used to specify which properties shall be retrieved.
     *
     * The properties can
     *  - contain no colon: they refer to a property in the DAV: namespace
     *  - contain a colon: and thus specify an explicit namespace,
     *    e.g. "ns:with:colons:bar", which is "bar" in the "ns:with:colons" namespace
     */
    void setProperties(QList<QByteArray> properties);
    QList<QByteArray> properties() const;

signals:
    void result(const QVariantMap &values);
    void finishedWithError(QNetworkReply *reply = 0);

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;

private:
    QList<QByteArray> _properties;
};

/**
 * @brief Send a Proppatch request
 *
 * Setting the desired properties with setProperties() is mandatory.
 *
 * WARNING: Untested!
 *
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT ProppatchJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit ProppatchJob(AccountPtr account, const QString &path, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;

    /**
     * Used to specify which properties shall be set.
     *
     * The property keys can
     *  - contain no colon: they refer to a property in the DAV: namespace
     *  - contain a colon: and thus specify an explicit namespace,
     *    e.g. "ns:with:colons:bar", which is "bar" in the "ns:with:colons" namespace
     */
    void setProperties(QMap<QByteArray, QByteArray> properties);
    QMap<QByteArray, QByteArray> properties() const;

signals:
    void success();
    void finishedWithError();

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;

private:
    QMap<QByteArray, QByteArray> _properties;
};

/**
 * @brief The MkColJob class
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT MkColJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit MkColJob(AccountPtr account, const QString &path, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;

signals:
    void finished(QNetworkReply::NetworkError);

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;
};

/**
 * @brief The CheckServerJob class
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT CheckServerJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit CheckServerJob(AccountPtr account, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;

    static QString version(const QVariantMap &info);
    static QString versionString(const QVariantMap &info);
    static bool installed(const QVariantMap &info);

signals:
    void instanceFound(const QUrl&url, const QVariantMap &info);
    void instanceNotFound(QNetworkReply *reply);
    void timeout(const QUrl&url);

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;
    virtual void slotTimeout() Q_DECL_OVERRIDE;
    virtual void metaDataChangedSlot();
    virtual void encryptedSlot();

private:
    bool _subdirFallback;
};


/**
 * @brief The RequestEtagJob class
 */
class OWNCLOUDSYNC_EXPORT RequestEtagJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit RequestEtagJob(AccountPtr account, const QString &path, QObject *parent = 0);
    void start() Q_DECL_OVERRIDE;

signals:
    void etagRetreived(const QString &etag);

private slots:
    virtual bool finished() Q_DECL_OVERRIDE;
};

/**
 * @brief Job to check an API that return JSON
 *
 * Note! you need to be in the connected state before calling this because of a server bug:
 * https://github.com/owncloud/core/issues/12930
 *
 * To be used like this:
 * \code
 * _job = new JsonApiJob(account, QLatin1String("ocs/v1.php/foo/bar"), this);
 * connect(job, SIGNAL(jsonReceived(QVariantMap)), ...)
 * The received QVariantMap is empty in case of error or otherwise is a map as parsed by QtJson
 * \encode
 *
 * @ingroup libsync
 */
class OWNCLOUDSYNC_EXPORT JsonApiJob : public AbstractNetworkJob {
    Q_OBJECT
public:
    explicit JsonApiJob(const AccountPtr &account, const QString &path, QObject *parent = 0);

    /**
     * @brief addQueryParams - add more parameters to the ocs call
     * @param params: list pairs of strings containing the parameter name and the value.
     *
     * All parameters from the passed list are appended to the query. Note
     * that the format=json parameter is added automatically and does not
     * need to be set this way.
     *
     * This function needs to be called before start() obviously.
     */
    void addQueryParams(QList< QPair<QString,QString> > params);

public slots:
    void start() Q_DECL_OVERRIDE;
protected:
    bool finished() Q_DECL_OVERRIDE;
signals:

    /**
     * @brief jsonReceived - signal to report the json answer from ocs
     * @param json - the raw json string
     * @param statusCode - the OCS status code: 100 (!) for success
     */
    void jsonReceived(const QVariantMap &json, int statusCode);

private:
    QList< QPair<QString,QString> > _additionalParams;
};

} // namespace OCC

#endif // NETWORKJOBS_H
