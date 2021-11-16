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
    QString mebBD = ui->SUSelectDate->text();
    QString mebGen = ui->cBxGender->currentText();
    QString mebAd = ui->txtSignUpAddress->text();
    QString mebPh = ui->txtSignUpPh->text();
    int ranNum = QRandomGenerator::global()->bounded(1000, 10000);
    QString ranString = QString::number(ranNum);
    QString l1="";
    QString r1="";
    QString l2="";
    QString r2="";
    QString l3="";
    QString r3="";
    float fee=0;


    if(mebName.trimmed() != "" && mebUser.trimmed() != "" && mebPass.trimmed() != "" && mebEmail.trimmed() !="" && mebAd.trimmed() !="")
    {
        *newMeb = new Member(mebName, mebUser, mebPass, mebEmail, mebBD, mebGen, mebAd, mebPh, ranString,l1,l2,l3,r1,r2,r3,fee);
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





