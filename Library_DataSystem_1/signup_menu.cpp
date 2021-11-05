#include "signup_menu.h"
#include "ui_signup_menu.h"
#include <QDateTime>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QRandomGenerator>

signup_menu::signup_menu(Member*& newMember, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup_menu)
{
    ui->setupUi(this);

    this->newMeb = &newMember;

    //Signel and Slots

    connect(ui->btnSignup, &QPushButton::clicked,
           this, &signup_menu::comfirmMember);


    //Adding Gender list

    list.push_back("Male");
    list.push_back("Female");
    list.push_back("Nonbinary");
    list.push_back("Other");

    //View Gender list

    ui->cBxGender->addItems(list);




}

signup_menu::~signup_menu()
{
    delete ui;
}
void signup_menu::comfirmMember()
{

    QString mebName = ui->txtSignUpName->text();
    QString mebUser = ui->txtSignUpUsername->text();
    QString mebPass = ui->txtSignUpPassword->text();
    QString mebEmail = ui->txtSignUpEmail->text();
    QString mebAd = ui->txtSignUpAddress->text();
    QString mebBD = ui->SUSelectDate->text();
    QString mebPh = ui->txtSignUpPh->text();
    QString mebGen = ui->cBxGender->currentText();
    int ranNum = QRandomGenerator::global()->bounded(1000, 5000);
    QString ranString = QString::number(ranNum);


    if(mebName.trimmed() != "" && mebUser.trimmed() != "" && mebPass.trimmed() != "" && mebEmail.trimmed() !="" && mebAd.trimmed() !="")
    {
        *newMeb = new Member(mebName, mebUser, mebPass, mebEmail, mebAd, mebBD, mebGen, mebPh, ranString);
         this->close();

    }
    else
    {
        QMessageBox mb;
        mb.setText("you must finished the form");
        mb.exec();
    }

}
void showTime()
{
    //QDate date = QDate::currentDate();


}





