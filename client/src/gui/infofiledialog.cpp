
#include "configfile.h"
#include "infofiledialog.h"
#include "ui_infofiledialog.h"
#include "theme.h"

#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
#include <QtWidgets>
#endif


namespace OCC {
InfoFileDialog::InfoFileDialog(const QString &sharePath, const QString &localPath, QWidget *parent):
    QDialog(parent),
    _ui(new Ui::InfoFileDialog),
    _title("title"),
    _descr1("descr1"),
    _descr2("descr2"),
    _descr3("descr3"),
    _keywords("keywords")
{
    _ui->setupUi(this);

    _sharePath = sharePath; //useless for now, keeping it in case of

    ConfigFile  cfgFile;

    _languages = readUserLanguages(cfgFile.userLanguages());

    if (_languages.size() <= 5) {
        _nbelem = _languages.size();
    } else {
        _nbelem = 5;
    }

    for (int i = 0; i != 5; ++i) {
        if (i < _nbelem) {
            _ui->tabWidget->setTabText(i, _languages.at(i));
            if (_languages.at(i) == "French") {
                _languagesCodes.push_back("fr");
                _ui->tabWidget->setTabWhatsThis(i, "frtab");
            } else if (_languages.at(i) == "English") {
                _languagesCodes.push_back("en");
                _ui->tabWidget->setTabWhatsThis(i, "entab");
            } else if (_languages.at(i) == "German") {
                _languagesCodes.push_back("de");
                _ui->tabWidget->setTabWhatsThis(i, "detab");
            } else if (_languages.at(i) == "Spanish") {
                _languagesCodes.push_back("es");
                _ui->tabWidget->setTabWhatsThis(i, "estab");
            } else if (_languages.at(i) == "Chinese") {
                _languagesCodes.push_back("zh");
                _ui->tabWidget->setTabWhatsThis(i, "zhtab");
            } else if (_languages.at(i) == "Dutch") {
                _languagesCodes.push_back("nl");
                _ui->tabWidget->setTabWhatsThis(i, "nltab");
            }
            _ui->tabWidget->setCurrentIndex(_defaultLanguageIndex);
        } else {
            int delay = 5 - i;
            while (delay > 0) {
                _ui->tabWidget->removeTab(i);
                --delay;
            }
        }
    }

    _allLanguagesCodes.push_back("fr");
    _allLanguagesCodes.push_back("en");
    _allLanguagesCodes.push_back("de");
    _allLanguagesCodes.push_back("es");
    _allLanguagesCodes.push_back("zh");
    _allLanguagesCodes.push_back("nl");

    Theme   *theme = Theme::instance();

    const QString &before = QString(theme->getLocalFolderName());
    const QString &after = QString(theme->getLocalFolderName() + "/.config");
    _infoFilePath = const_cast<QString&>(localPath).replace(before, after) + QString(".xml");

    qDebug() << "_infoFilePath : " << _infoFilePath;

    QFileInfo infoFileInfo(_infoFilePath);

    if (infoFileInfo.exists()) {
         QFile file(_infoFilePath);
         if ( file.open(QIODevice::ReadOnly) ) {

             QTextStream stream( &file );
             QString output = stream.readAll();
             QXmlStreamReader xml(output);

             unsigned int i = 0;
             QString document("document");
             QString languageTab("languageTab");
             bool nextok = false;
             bool multilanguage = false;

             while (!xml.atEnd()) {

                 xml.readNext();
                 QXmlStreamAttributes attr = xml.attributes();

                 if (xml.qualifiedName() == "main" || xml.name() == "main") {
                    multilanguage = true;
                 }

                 //If it's a multilanguage form
                 if (multilanguage) {

                     QString nextLang;
                     if (i < _languagesCodes.size()) {
                         nextLang = _languagesCodes.at(i);
                     } else {
                         nextLang = QString::fromStdString("");
                     }
                     if (xml.isStartElement()) {

                         //Check if language key
                         if (xml.qualifiedName() == languageTab || xml.name() == languageTab) {
                             QXmlStreamAttributes langattr = xml.attributes();
                             if (langattr.value("language").toString() == nextLang) {
                                 nextok = true;
                             }
                         }

                         if (xml.qualifiedName() == document || xml.name() == document) {

                             if (nextok) {
                                 switch (i) {
                                     case 0:
                                         setXmlValuesTabOne(attr);
                                         ++i;
                                         nextok = false;
                                         break;
                                     case 1:
                                         setXmlValuesTabTwo(attr);
                                         ++i;
                                         nextok = false;
                                         break;
                                     case 2:
                                         setXmlValuesTabThree(attr);
                                         ++i;
                                         nextok = false;
                                         break;
                                     case 3:
                                         setXmlValuesTabFour(attr);
                                         ++i;
                                         nextok = false;
                                         break;
                                     case 4:
                                         setXmlValuesTabFive(attr);
                                         ++i;
                                         nextok = false;
                                         break;
                                     default:
                                         break;
                                 }
                             } else {
                                 _oldLanguages.push_back(attr.value(_title).toString());
                                 _oldLanguages.push_back(attr.value(_descr1).toString());
                                 _oldLanguages.push_back(attr.value(_descr2).toString());
                                 _oldLanguages.push_back(attr.value(_descr3).toString());
                                 _oldLanguages.push_back(attr.value(_keywords).toString());
                             }
                         }
                     }
                 } else {
                     //If it's not a multilanguage form
                     if (xml.isStartElement() && xml.qualifiedName() == document) {
                         switch (_defaultLanguageIndex) {
                             case 0:
                                 setXmlValuesTabOne(attr);
                                 break;
                             case 1:
                                 setXmlValuesTabTwo(attr);
                                 break;
                             case 2:
                                 setXmlValuesTabThree(attr);
                                 break;
                             case 3:
                                 setXmlValuesTabFour(attr);
                                 break;
                             case 4:
                                 setXmlValuesTabFive(attr);
                                 break;
                             default:
                                 break;
                         }
                     }
                 }
            }
            file.close();
         }
    }
    _streamInfo = new QXmlStreamWriter(&_output);
    _streamInfo->setAutoFormatting(true);
    _streamInfo->writeStartDocument();
    QPushButton *okButton = _ui->buttonBox->button(QDialogButtonBox::Ok);
    QPushButton *cancelButton = _ui->buttonBox->button(QDialogButtonBox::Cancel);
    connect(okButton, SIGNAL(clicked()),SLOT(saveXML()));
    connect(cancelButton, SIGNAL(clicked()),SLOT(quit()));

}

void InfoFileDialog::setXmlValuesTabOne(QXmlStreamAttributes attr) {
    QString value = attr.value(_title).toString();
    _ui->titleLineEdit_1->setText(value);
    value = attr.value(_descr1).toString();
    _ui->descriptionTextEdit_1->setText(value);
    value = attr.value(_descr2).toString();
    _ui->description2TextEdit_1->setText(value);
    value = attr.value(_descr3).toString();
    _ui->description3TextEdit_1->setText(value);
    value = attr.value(_keywords).toString();
    _ui->keywordLineEdit_1->setText(value);
    return;
}

void InfoFileDialog::setXmlValuesTabTwo(QXmlStreamAttributes attr) {
    QString value = attr.value(_title).toString();
    _ui->titleLineEdit_2->setText(value);
    value = attr.value(_descr1).toString();
    _ui->descriptionTextEdit_2->setText(value);
    value = attr.value(_descr2).toString();
    _ui->description2TextEdit_2->setText(value);
    value = attr.value(_descr3).toString();
    _ui->description3TextEdit_2->setText(value);
    value = attr.value(_keywords).toString();
    _ui->keywordLineEdit_2->setText(value);
    return;
}

void InfoFileDialog::setXmlValuesTabThree(QXmlStreamAttributes attr) {
    QString value = attr.value(_title).toString();
    _ui->titleLineEdit_3->setText(value);
    value = attr.value(_descr1).toString();
    _ui->descriptionTextEdit_3->setText(value);
    value = attr.value(_descr2).toString();
    _ui->description2TextEdit_3->setText(value);
    value = attr.value(_descr3).toString();
    _ui->description3TextEdit_3->setText(value);
    value = attr.value(_keywords).toString();
    _ui->keywordLineEdit_3->setText(value);
    return;
}

void InfoFileDialog::setXmlValuesTabFour(QXmlStreamAttributes attr) {
    QString value = attr.value(_title).toString();
    _ui->titleLineEdit_4->setText(value);
    value = attr.value(_descr1).toString();
    _ui->descriptionTextEdit_4->setText(value);
    value = attr.value(_descr2).toString();
    _ui->description2TextEdit_4->setText(value);
    value = attr.value(_descr3).toString();
    _ui->description3TextEdit_4->setText(value);
    value = attr.value(_keywords).toString();
    _ui->keywordLineEdit_4->setText(value);
    return;
}

void InfoFileDialog::setXmlValuesTabFive(QXmlStreamAttributes attr) {
    QString value = attr.value(_title).toString();
    _ui->titleLineEdit_5->setText(value);
    value = attr.value(_descr1).toString();
    _ui->descriptionTextEdit_5->setText(value);
    value = attr.value(_descr2).toString();
    _ui->description2TextEdit_5->setText(value);
    value = attr.value(_descr3).toString();
    _ui->description3TextEdit_5->setText(value);
    value = attr.value(_keywords).toString();
    _ui->keywordLineEdit_5->setText(value);
    return;
}

std::vector<QString> InfoFileDialog::readUserLanguages(const QString &file) {

    std::vector<QString>    vec;
    QFile   languages(file);
    if (languages.open(QIODevice::ReadOnly)) {
        int index = 0;
        while (!languages.atEnd()) {
            QString line = QString::fromUtf8(languages.readLine());
            line.chop(1);
            if (!line.isEmpty() && !line.startsWith("#")) {
                if (line.startsWith("++")) {
                    line = line.mid(2);
                    vec.push_back(line);
                    //Add default language index to class
                    _defaultLanguageIndex = index;
                } else if (line.startsWith('+')) {
                    line = line.mid(1);
                    vec.push_back(line);
                    ++index;
                }
            }
        }
    }
    return vec;
}

void InfoFileDialog::saveXML()
{
    std::vector<QString> languages;

    const QString &main_balise("main");
    _streamInfo->writeStartElement(main_balise);

    unsigned int indexTab = 0;
    unsigned int indexOldLanguages = 0;
    for (int i = 0; i != NB_LANGUAGE; ++i) {

        const QString &language_key("languageTab");
        const QString &document("document");
        _streamInfo->writeStartElement(language_key);
        _streamInfo->writeAttribute("language", _allLanguagesCodes.at(i));
        _streamInfo->writeStartElement(document);

        if (indexTab < _languagesCodes.size() && _allLanguagesCodes.at(i) == _languagesCodes.at(indexTab)) {
            switch (indexTab) {
                case 0:
                    saveXmlTabOne();
                    ++indexTab;
                    break;
                case 1:
                    saveXmlTabTwo();
                    ++indexTab;
                    break;
                case 2:
                    saveXmlTabThree();
                    ++indexTab;
                    break;
                case 3:
                    saveXmlTabFour();
                    ++indexTab;
                    break;
                case 4:
                    saveXmlTabFive();
                    ++indexTab;
                    break;
                default:
                    break;
            }
        } else {
            if (_oldLanguages.size() != 0 && indexOldLanguages < _oldLanguages.size()) {
                _streamInfo->writeAttribute(_title, _oldLanguages.at(indexOldLanguages++));
                _streamInfo->writeAttribute(_descr1, _oldLanguages.at(indexOldLanguages++));
                _streamInfo->writeAttribute(_descr2, _oldLanguages.at(indexOldLanguages++));
                _streamInfo->writeAttribute(_descr3, _oldLanguages.at(indexOldLanguages++));
                _streamInfo->writeAttribute(_keywords, _oldLanguages.at(indexOldLanguages++));
            } else {
                _streamInfo->writeAttribute(_title, "");
                _streamInfo->writeAttribute(_descr1, "");
                _streamInfo->writeAttribute(_descr2, "");
                _streamInfo->writeAttribute(_descr3, "");
                _streamInfo->writeAttribute(_keywords, "");
            }
        }

        _streamInfo->writeEndElement();
        _streamInfo->writeEndElement();

    }
    _streamInfo->writeEndElement();
    _streamInfo->writeEndDocument();
    QFile file(_infoFilePath);
    if ( file.open(QIODevice::WriteOnly) )
    {
        QTextStream stream( &file );
        stream << _output;
        file.close();
    }
    InfoFileDialog::close();
}

void InfoFileDialog::saveXmlTabOne() {

    _streamInfo->writeAttribute(_title, _ui->titleLineEdit_1->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit_1->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit_1->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit_1->toPlainText());
    _streamInfo->writeAttribute(_keywords, _ui->keywordLineEdit_1->text());
}

void InfoFileDialog::saveXmlTabTwo() {
    _streamInfo->writeAttribute(_title, _ui->titleLineEdit_2->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit_2->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit_2->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit_2->toPlainText());
    _streamInfo->writeAttribute(_keywords, _ui->keywordLineEdit_2->text());
}

void InfoFileDialog::saveXmlTabThree() {
    _streamInfo->writeAttribute(_title, _ui->titleLineEdit_3->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit_3->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit_3->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit_3->toPlainText());
    _streamInfo->writeAttribute(_keywords, _ui->keywordLineEdit_3->text());}

void InfoFileDialog::saveXmlTabFour() {
    _streamInfo->writeAttribute(_title, _ui->titleLineEdit_4->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit_4->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit_4->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit_4->toPlainText());
    _streamInfo->writeAttribute(_keywords, _ui->keywordLineEdit_4->text());}

void InfoFileDialog::saveXmlTabFive() {
    _streamInfo->writeAttribute(_title, _ui->titleLineEdit_5->text());
    _streamInfo->writeAttribute(_descr1, _ui->descriptionTextEdit_5->toPlainText());
    _streamInfo->writeAttribute(_descr2, _ui->description2TextEdit_5->toPlainText());
    _streamInfo->writeAttribute(_descr3, _ui->description3TextEdit_5->toPlainText());
    _streamInfo->writeAttribute(_keywords, _ui->keywordLineEdit_5->text());
}

void InfoFileDialog::quit() {
    InfoFileDialog::close();
}

InfoFileDialog::~InfoFileDialog() {
    delete _ui;
}

}
