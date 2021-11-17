#ifndef MEB_LOGIN_H
#define MEB_LOGIN_H

#include <QDialog>

namespace Ui {
class meb_login;
}

class meb_login : public QDialog
{
    Q_OBJECT

public:
    explicit meb_login(QWidget *parent = nullptr);
    ~meb_login();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::meb_login *ui;
};

#endif // MEB_LOGIN_H
