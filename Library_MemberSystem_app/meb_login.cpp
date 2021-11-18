#include "meb_login.h"
#include "ui_meb_login.h"
#include "mainwindowmeb.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

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
    this->memberID = ui->txtID->text();

    QFile loginMeb("member.txt");

    loginMeb.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&loginMeb);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList info = line.split(",");

        QString loginName = info.at(1);
        QString loginPassword = info.at(2);

        if(username == loginName && password == loginPassword)
        {
            this->hide();
            QMessageBox::information(this, "Login", "Welcome to BookNook!");
            this->setResult(QDialog::Accepted);
        }
        else if (username != loginName && password != loginPassword)
        {
            QMessageBox::warning(this, "Login", "InCorrect username and password - - Please try again");
            this->setResult(QDialog::Rejected);
        }

    }

}

