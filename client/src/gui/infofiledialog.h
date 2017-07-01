#ifndef INFODIALOG
#define INFODIALOG

#include <QDialog>
#include <QXmlStreamWriter>
#include <vector>

#include "accountfwd.h"

#define NB_LANGUAGE 6

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
    void quit();
private:

    std::vector<QString>    readUserLanguages(const QString &file);
    int                     _defaultLanguageIndex = 0;

    Ui::InfoFileDialog      *_ui;
    QXmlStreamWriter        *_streamInfo;
    QString                 _sharePath;
    QString                 _infoFilePath;
    QString                 _output;

    const QString           _title;
    const QString           _descr1;
    const QString           _descr2;
    const QString           _descr3;
    const QString           _keywords;

    std::vector<QString>    _languages;
    std::vector<QString>    _allLanguagesCodes;
    std::vector<QString>    _languagesCodes;

    void setXmlValuesTabOne(QXmlStreamAttributes attr);
    void setXmlValuesTabTwo(QXmlStreamAttributes attr);
    void setXmlValuesTabThree(QXmlStreamAttributes attr);
    void setXmlValuesTabFour(QXmlStreamAttributes attr);
    void setXmlValuesTabFive(QXmlStreamAttributes attr);

    void saveXmlTabOne();
    void saveXmlTabTwo();
    void saveXmlTabThree();
    void saveXmlTabFour();
    void saveXmlTabFive();

    std::vector<QString>    _oldLanguages;

    int _nbelem;
};
}

#endif // INFODIALOG

