#ifndef CREATEWEB_H
#define CREATEWEB_H

#include <QDialog>
#include "accountfwd.h"

namespace OCC {
    namespace Ui {
        class CreateWeb;
    }
    class CreateWeb : public QDialog
    {
    Q_OBJECT
    public:
        CreateWeb(const QString &sharePath, const QString &localPath, QWidget *parent = 0);
        ~CreateWeb();
    public slots:
        void saveHTML();
    private:
        Ui::CreateWeb *_ui;
        QString _filePath;
        QString _localPath;
    };
}

#endif // CREATEWEB_H
