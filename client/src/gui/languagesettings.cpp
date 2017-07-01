#include <QFileInfo>
#include <QFile>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QInputDialog>
#include <QDebug>
#include <QRadioButton>

#include "languagesettings.h"
#include "configfile.h"
#include "ui_languagesettings.h"

namespace OCC {

static int LanguageCol = 0;
static int ActivateCol = 1;

LanguageSettings::LanguageSettings(QWidget *parent) :
    QDialog(parent),
    _ui(new Ui::LanguageSettings)
{
    _ui->setupUi(this);

    ConfigFile  cfgFile;

    if (readUserLanguages(cfgFile.userLanguages()) == -1) {
        addPattern("French", true);
        addPattern("English", false);
        addPattern("German", false);
        addPattern("Spanish", false);
        addPattern("Dutch", false);
        addPattern("Chinese", false);
    }

    connect(this, SIGNAL(accepted()), SLOT(slotUpdateLocalLanguageList()));

}

LanguageSettings::~LanguageSettings() {
    delete _ui;
}

int LanguageSettings::readUserLanguages(const QString &file) {

    QFile languages(file);
    if (languages.open(QIODevice::ReadOnly)) {
        int i = 0;
        int index = 0;
        while (!languages.atEnd()) {
            QString line = QString::fromUtf8(languages.readLine());
            line.chop(1);
            if (!line.isEmpty() && !line.startsWith("#")) {
                //bool deletable = false;
                bool activated = false;
                if (line.startsWith("++")) {
                    activated = true;
                    index = i;
                    line = line.mid(2);
                } else if (line.startsWith('+')) {
                    activated = true;
                    line = line.mid(1);
                }
                addPattern(line, activated);
            }
            ++i;
        }
        _ui->comboBox->setCurrentIndex(index);
    } else {
        return -1;
    }
    return 0;
}

int LanguageSettings::addPattern(const QString &language, bool checked)
{
    int newRow = _ui->tableWidget->rowCount();
    _ui->tableWidget->setRowCount(newRow + 1);

    QTableWidgetItem *languageItem = new QTableWidgetItem;
    languageItem->setText(language);
    _ui->tableWidget->setItem(newRow, LanguageCol, languageItem);

    QTableWidgetItem *activateItem = new QTableWidgetItem;
    activateItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    activateItem->setCheckState(checked ? Qt::Checked : Qt::Unchecked);
    _ui->tableWidget->setItem(newRow, ActivateCol, activateItem);

    _ui->comboBox->addItem(language);
    return newRow;
}

void LanguageSettings::slotUpdateLocalLanguageList() {

    ConfigFile cfgFile;
    QString languageFile = cfgFile.userLanguages();
    QFile languages(languageFile);
    if (languages.open(QIODevice::WriteOnly)) {

        for (int row = 0; row < _ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *languageItem = _ui->tableWidget->item(row, LanguageCol);
            QTableWidgetItem *activateItem = _ui->tableWidget->item(row, ActivateCol);
            QByteArray prepend;
            if (languageItem->flags() & Qt::ItemIsEnabled) {
                if (activateItem->checkState() == Qt::Checked) {
                    prepend = "+";
                }
                if (_ui->comboBox->currentText() == languageItem->text()) {
                    prepend = "++";
                    if (activateItem->checkState() == Qt::Unchecked) {
                        activateItem->setCheckState(Qt::Checked);
                    }
                }
            }
            languages.write(prepend + languageItem->text().toUtf8() + '\n');
            qDebug() << prepend + languageItem->text().toUtf8();
        }
    } else {
        QMessageBox::warning(this, tr("Could not open file"),
                             tr("Cannot write changes to '%1'.").arg("languages"));
    }
    languages.close();
}

}


