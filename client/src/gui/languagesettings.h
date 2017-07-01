#ifndef LANGUAGESETTINGS_H
#define LANGUAGESETTINGS_H

#include <QDialog>

class QListWidgetItem;

namespace OCC {

namespace Ui {
class LanguageSettings;
}

class LanguageSettings : public QDialog
{
    Q_OBJECT
public:
    explicit LanguageSettings(QWidget *parent = 0);
    ~LanguageSettings();

private slots:
    void        slotUpdateLocalLanguageList();

private:
    int         addPattern(const QString &language, bool);
    int         readUserLanguages(const QString &file);

    Ui::LanguageSettings *_ui;
};
}

#endif // LANGUAGESETTINGS_H
