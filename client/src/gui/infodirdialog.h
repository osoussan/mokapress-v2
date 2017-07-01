#ifndef INFODIRDIALOG_H
#define INFODIRDIALOG_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <vector>
#include "accountfwd.h"

#define NB_LANGUAGE 6

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
    void quit();
private:
    Ui::InfoDirDialog   *_ui;
    QXmlStreamWriter    *_streamInfo;
    QString             _sharePath;
    QString _infoFilePath;
    QString _output;

    std::vector<QString>    readUserLanguages(const QString &file);
    int                     _defaultLanguageIndex = 0;

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

    const QString   _title;
    const QString   _descr;
    const QString   _select;
    const QString   _keyword;

    std::vector<QString>    _oldLanguages;
    unsigned int            _oldLanguagesSize = 0;

    int             _nbelem;

};
}

#endif // INFODIRDIALOG_H
