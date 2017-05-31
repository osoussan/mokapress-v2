#include "infodirdialog.h"
#include "ui_infodirdialog.h"
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
#include <QtWidgets>
#endif

namespace OCC {
InfoDirDialog::InfoDirDialog(const QString &infoPath, const QString &localPath, QWidget *parent):
    QDialog(parent),
    _ui(new Ui::InfoDirDialog),
    _title("title"),
    _descr("descr"),
    _select("select"),
    _keyword("keyword")
{
 _ui->setupUi(this);
 const QString &before = QString("Mokapress");
 const QString &after = QString("Mokapress/.config");
 _infoFilePath = const_cast<QString&>(localPath).replace(before, after) + QString("/info.xml");
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
                     _ui->TitleLineEdit->setText(value);
                     value = attr.value(_descr).toString();
                     _ui->descrTextEdit->setText(value);
                     value = attr.value(_select).toString();
                     _ui->selectComboBox->setCurrentIndex(_ui->selectComboBox->findText(value));
                     value = attr.value(_keyword).toString();
                     _ui->keywordLineEdit_2->setText(value);
                 }
           }
          file.close();
      }
 }
 _streamInfo = new QXmlStreamWriter(&_output);
 _streamInfo->setAutoFormatting(true);
 _streamInfo->writeStartDocument();
 QPushButton *okButton = _ui->buttonBox2->button( QDialogButtonBox::Ok );
 connect( okButton, SIGNAL(clicked()),SLOT(saveXML2()));

}

void InfoDirDialog::saveXML2()
{
 const QString &document("document");
 _streamInfo->writeStartElement(document);
 _streamInfo->writeAttribute(_title, _ui->TitleLineEdit->text());
 _streamInfo->writeAttribute(_descr, _ui->descrTextEdit->toPlainText());
 _streamInfo->writeAttribute(_select, _ui->selectComboBox->currentText());
 _streamInfo->writeAttribute(_keyword, _ui->keywordLineEdit_2->text());
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

InfoDirDialog::~InfoDirDialog()
{
 delete _ui;
}
}


