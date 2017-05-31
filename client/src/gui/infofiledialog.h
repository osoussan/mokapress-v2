#ifndef INFODIALOG
#define INFODIALOG

#include <QDialog>
#include <QXmlStreamWriter>
#include "accountfwd.h"

namespace OCC {
namespace Ui {
class InfoFileDialog;
}
class InfoFileDialog : public QDialog
{
    Q_OBJECT
public:
    explicit InfoFileDialog(const QString &sharePath, const QString &localPath, QWidget *parent = 0);
    ~InfoFileDialog();

public slots:
    void saveXML();
private:
    Ui::InfoFileDialog *_ui;
    QXmlStreamWriter *_streamInfo;
    QString _infoFilePath;
    QString _output;
    const QString _title;
    const QString _descr1;
    const QString _descr2;
    const QString _descr3;
    const QString _keyword;
};
}

#endif // INFODIALOG

