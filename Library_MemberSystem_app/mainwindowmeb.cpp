#include "mainwindowmeb.h"
#include "ui_mainwindowmeb.h"
#include "meb_login.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDir>

MainWindowMeb::MainWindowMeb(QString memberID, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowMeb)
{
    ui->setupUi(this);
    this->memberID = memberID;

    QString fileName("member.txt");


    if(QFileInfo::exists(fileName))
    {
        QFile inputFileMember(fileName);

        inputFileMember.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream in(&inputFileMember);


        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList info =line.split(",");


            //Member info

            QString MebID = info.at(8);
            QString MebName = info.at(0);
            QString MebUN = info.at(1);
            QString MebGen = info.at(5);
            QString MebBD = info.at(4);
            QString MebAd = info.at(6);
            QString MebEml = info.at(3);
            QString MebPh = info.at(7);
            QString MbLoan1 = info.at(9);
            QString MbLoan2 = info.at(10);
            QString MbLoan3 = info.at(11);
            QString mbReturn1 = info.at(12);
            QString mbReturn2 = info.at (13);
            QString mbReturn3 = info.at (14);
            QString mBFees = info.at(15);




            if(memberID == MebID)
            {
                ui->lbID->setText(MebID);
                ui->lbmebName->setText(MebName);
                ui->lbUName->setText(MebUN);
                ui->lbGen->setText(MebGen);
                ui->lbmebBirthdate->setText(MebBD);
                ui->lbmebAdd->setText(MebAd);
                ui->lbmebEmail->setText(MebEml);
                ui->lbmebPhone->setText(MebPh);
                ui->lbmebloan1->setText(MbLoan1);
                ui->lbmebloan2->setText(MbLoan2);
                ui->lbmebloan3->setText(MbLoan3);
                ui->lbmebDreturn1->setText(mbReturn1);
                ui->lbmebDreturn2->setText(mbReturn2);
                ui->lbmebDreturn3->setText(mbReturn3);
                ui->lbmebFees->setText(mBFees);



            }



        }



        in.flush();
        inputFileMember.close();
    }






    connect(ui->actionExit, &QAction:: triggered,
            this, &MainWindowMeb::exitApp);


}


MainWindowMeb::~MainWindowMeb()
{
    delete ui;

    for (int i = 0; i<itemMebs.size() ;i++)
    {
        delete itemMebs.at(i);
    }
    itemMebs.clear();
    delete ui;

}


void MainWindowMeb::exitApp()
{
    this->close();
}




