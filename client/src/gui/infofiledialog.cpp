

#include "infofiledialog.h"
#include "ui_infofiledialog.h"
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
#include <QtWidgets>
#endif


namespace OCC {
InfoFileDialog::InfoFileDialog(const QString &infoPath, const QString &localPath, QWidget *parent):
    QDialog(parent),
    _ui(new Ui::InfoFileDialog),
    _title("title"),
    _descr1("descr1"),
    _descr2("descr2"),
    _descr3("descr3"),
    _keyword("keyword")

{
    _ui->setupUi(this);
    const QString &before = QString("Mokapress");
    const QString &after = QString("Mokapress/.config");
    _infoFilePath = const_cast<QString&>(localPath).replace(before, after) + QString(".xml");
    QFileInfo infoFileInfo(_infoFilePath);
    if (infoFileInfo.exists())
    {
         QFile file(_infoFilePath);
         if ( file.open(QIODevice::ReadOnly) )
         {
             QTextStream stream( &file );
             QString output = stream.readAll();
             QXmlStreamReader xml(output);
             while (!xml.atEnd()) {
                    xml.readNext();
                    if (xml.isStartElement())
                    {
                        QXmlStreamAttributes attr = xml.attributes();
                        QString value = attr.value(_title).toString();
                        _ui->titleLineEdit->setText(value);
                        value = attr.value(_descr1).toString();
                        _ui->descriptionTextEdit->setText(value);
                        value = attr.value(_descr2).toString();
                        _ui->description2TextEdit->setText(value);
                        value = attr.value(_descr3).toString();
                        _ui->description3TextEdit->setText(value);
                        value = attr.value(_keyword).toString();
                        _ui->keywordLineEdit->setText(value);
                    }
              }
             file.close();
         }
    }
    _streamInfo = new QXmlStreamWriter(&_output);
    _streamInfo->setAutoFormatting(true);
    _streamInfo->writeStartDocument();
    QPushButton *okButton = _ui->buttonBox->button( QDialogButtonBox::Ok );
    connect( okButton, SIGNAL(clicked()),SLOT(saveXML()));

}

void InfoFileDialog::saveXML()
{
    const QString &document("document");
    _streamInfo->writeStartElement(document);
    _streamInfo->writeAttribute(_title, _ui->titleLineEdit->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit->toPlainText());
    _streamInfo->writeAttribute(_keyword, _ui->keywordLineEdit->text());
    _streamInfo->writeEndElement();
    _streamInfo->writeEndDocument();
    QFile file(_infoFilePath);
    if ( file.open(QIODevice::WriteOnly) )
    {
        QTextStream stream( &file );
        stream << _output;
        file.close();
    }
}

InfoFileDialog::~InfoFileDialog()
{
    delete _ui;
}
}
