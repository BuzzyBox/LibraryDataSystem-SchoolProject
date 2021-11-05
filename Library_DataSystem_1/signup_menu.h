#ifndef SIGNUP_MENU_H
#define SIGNUP_MENU_H
#include "member.h"
#include<QStringList>
#include <QDialog>
#include <QDate>

namespace Ui {
class signup_menu;
}

class signup_menu : public QDialog
{
    Q_OBJECT

public:
    explicit signup_menu(Member*& newMember, QWidget *parent = nullptr);
    ~signup_menu();

    void newMember();
    void comfirmMember();

private slots:
    //void on_dateEdit_userDateChanged(const QDate &date);
    //void showTime();


    //void on_btnSignup_clicked();



private:
    Ui::signup_menu *ui;
    Member** newMeb;
    QStringList list;

};

#endif // SIGNUP_MENU_H
