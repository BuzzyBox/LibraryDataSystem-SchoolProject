#include "meb_login.h"
#include "ui_meb_login.h"
#include <QMessageBox>

meb_login::meb_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meb_login)
{
    ui->setupUi(this);
}

meb_login::~meb_login()
{
    delete ui;
}
void meb_login::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if(username == "user" && password == "password")
    {
        this->hide();
        QMessageBox::information(this, "Login", "Welcome to BookNook!");
        this->setResult(QDialog::Accepted);
    }
    else
    {
        QMessageBox::warning(this, "Login", "InCorrect username and password - - Please try again");
        this->setResult(QDialog::Rejected);
    }

}

