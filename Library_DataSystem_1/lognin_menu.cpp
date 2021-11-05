#include "lognin_menu.h"
#include "ui_lognin_menu.h"
#include <QMessageBox>
lognin_menu::lognin_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lognin_menu)
{
    ui->setupUi(this);
}

lognin_menu::~lognin_menu()
{
    delete ui;
}

void lognin_menu::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if (username == "admin" && password == "1234")
    {
        this->hide();
        QMessageBox::information(this, "Login", "Correct Username and Password");
        this->setResult(QDialog::Accepted);
    }
    else
    {
        QMessageBox::warning(this, "Login", "InCorrect Username and Password - Try Again");
        this->setResult(QDialog::Rejected);
    }
}

