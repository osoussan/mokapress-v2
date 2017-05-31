#ifndef INFODIRDIALOG_H
#define INFODIRDIALOG_H

#include <QDialog>
#include <QXmlStreamWriter>
#include "accountfwd.h"

namespace OCC {
namespace Ui {
class InfoDirDialog;
}

class InfoDirDialog : public QDialog
{
    Q_OBJECT
public:
    explicit InfoDirDialog(const QString &sharePath, const QString &localPath, QWidget *parent = 0);
    ~InfoDirDialog();
public slots:
    void saveXML2();
private:
    Ui::InfoDirDialog *_ui;
    QXmlStreamWriter *_streamInfo;
    QString _infoFilePath;
    QString _output;
    const QString _title;
    const QString _descr;
    const QString _keyword;
    const QString _select;
};
}

#endif // INFODIRDIALOG_H
