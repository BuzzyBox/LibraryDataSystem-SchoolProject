#ifndef MEB_LOGIN_H
#define MEB_LOGIN_H

#include <QDialog>
#include "member.h"

namespace Ui {
class meb_login;
}

class meb_login : public QDialog
{
    Q_OBJECT

public:
    explicit meb_login(QWidget *parent = nullptr);
    //QString loginName;
    ~meb_login();
    QString memberID;

private slots:
    void on_btnLogin_clicked();

private:
    Ui::meb_login *ui;
};

#endif // MEB_LOGIN_H
