#include "createweb.h"
#include "ui_createweb.h"
#include <QtWidgets>
#include <QFile>

namespace OCC {

CreateWeb::CreateWeb(const QString &sharePath, const QString &localPath, QWidget *parent) :
    QDialog(parent),
    _ui(new Ui::CreateWeb),
    _filePath(sharePath),
    _localPath(localPath)
{
    _ui->setupUi(this);
    QPushButton *okButton = _ui->buttonBox->button( QDialogButtonBox::Ok );
    connect( okButton, SIGNAL(clicked()),SLOT(saveHTML()));
    QFileInfo file = QFileInfo(localPath);
    if (!file.isDir())
    {
        _filePath.truncate(_filePath.lastIndexOf('\\'));
        _localPath.truncate(_localPath.lastIndexOf('\\'));
    }
}

void CreateWeb::saveHTML()
{
    QByteArray ba = QUrl::toPercentEncoding(_filePath);
    QString fileName(ba);
    if (_ui->lineEdit->text().isEmpty())
        return;
    QString filenamepath(QUrl::toPercentEncoding(_ui->lineEdit->text() + QString(".html")));
    QString infoFilePath = _localPath + QString("/") + _ui->lineEdit->text() + QString(".html");
    QString input = tr("<html><meta http-equiv=\"refresh\" content=\"0; url=http://mokapress.com/index.php/apps/editdoc/?filename=%1&dir=%2\" />\n</html>").arg(filenamepath, fileName);
    QFile file(infoFilePath);
    if ( file.open(QIODevice::WriteOnly) )
    {
        QTextStream stream( &file );
        stream << input;
        file.close();
    }
}

CreateWeb::~CreateWeb()
{
    delete _ui;
}

}
