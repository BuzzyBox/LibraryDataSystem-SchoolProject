#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup_menu.h"
#include "edit_memeber.h"
#include <QTextOption>
#include <QMessageBox>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ItemMember->setCurrentRow(0);

  //Create Member
   connect(ui->actionNew_Member, &QAction::triggered,
         this, &MainWindow::handleNewMember);

  //Edit Member

    connect(ui->actionEdit_Existing_Member, &QAction::triggered,
            this, &MainWindow::handMemberEdited);

   //Member Listwidget
   connect(ui->ItemMember, &QListWidget::itemClicked, this, &MainWindow::handMemberClicked);

   //Save Load Members

   connect(ui->actionSave_Members, &QAction::triggered,
           this, &MainWindow::handleSaveMembers);

   connect(ui->actionLoad_Members, &QAction::triggered,
           this, &MainWindow::handleLoadMembers);


   //Exit App

   connect(ui->actionExit, &QAction::triggered,
           this, &MainWindow::exitApp);


}

MainWindow::~MainWindow()
{
    delete ui;

    for(int i = 0; i < itemMebs.size(); i++)
    {
        delete itemMebs.at(i);
    }
    itemMebs.clear();
    delete ui;


}
void MainWindow::handleNewMember()
{

    Member* newMeb = nullptr;
    signup_menu signup_menu(newMeb, nullptr);
    signup_menu.setModal(true);
    signup_menu.exec();

    if(newMeb!=nullptr)
    {
        itemMebs.push_back(newMeb);

       // ui->ItemMember->addItem(newMeb->getMebName()+ "  "+ newMeb->getRandomNo());

        ui->ItemMember->addItem("ID : "+newMeb->getRandomNo()+ "                    Member : "+ newMeb->getMebName());
    }


}

void MainWindow::handMemberClicked()
{

    int index = ui->ItemMember->currentRow();

    if(index >= 0)
    {
      Member*theMember=itemMebs.at(index);

      if(theMember != nullptr)
        {
      ui->lbmebName->setText(theMember->getMebName());
      ui->lbUName->setText(theMember->getUserName());
      ui->lbmebEmail->setText(theMember->getMebEmail());
      ui->lbmebBirthdate->setText(theMember->getMebBirthday());
      ui->lbGen->setText(theMember->getMebGen());
      ui->lbmebPhone->setText(theMember->getMebPh());
      ui->lbmebAdd->setText(theMember->getMebAddress());
        }

    }

}

void MainWindow::handMemberEdited()
{
    int index = ui->ItemMember->currentRow();

    if(index >= 0)
    {
        Member* currentMeb = itemMebs.at(index);

        if(currentMeb != nullptr)
        {

            edit_memeber edit_meber(currentMeb, nullptr);
            edit_meber.exec();

            //Updating Ui

            ui->lbmebName->setText(currentMeb->getMebName());
            ui->lbUName->setText(currentMeb->getUserName());
            ui->lbmebEmail->setText(currentMeb->getMebEmail());
            ui->lbmebBirthdate->setText(currentMeb->getMebBirthday());
            ui->lbGen->setText(currentMeb->getMebGen());
            ui->lbmebPhone->setText(currentMeb->getMebPh());
            ui->lbmebAdd->setText(currentMeb->getMebAddress());

        }

    }

}

void MainWindow::handleSaveMembers()
 {

    QFile outputFileMember("member.txt");

    outputFileMember.open(QIODevice::WriteOnly |
                          QIODevice::Text);

    QTextStream out(&outputFileMember);


//    for (int i = 0; i < itemMebs.size(); i++)
//    {
//                out<< itemMebs.at(i)->getMebName()<<",";
//                out<< itemMebs.at(i)->getUserName()<<",";
//                out<< itemMebs.at(i)->getMebPass()<<",";
//                out<< itemMebs.at(i)->getMebEmail()<<",";
//                out<< itemMebs.at(i)->getMebBirthday()<<",";
//                out<< itemMebs.at(i)->getMebGen()<<",";
//                out<< itemMebs.at(i)->getMebAddress()<<",";
//                out<< itemMebs.at(i)->getMebPh()<<",";
//                out<< itemMebs.at(i)->getRandomNo()<<"\n";
//    }


    for(Member* listMember:itemMebs)
    {

        out<< listMember->getMebName()<<",";
        out<< listMember->getUserName()<<",";
        out<< listMember->getMebPass()<<",";
        out<< listMember->getMebEmail()<<",";
        out<< listMember->getMebBirthday()<<",";
        out<< listMember->getMebGen()<<",";
        out<< listMember->getMebAddress()<<",";
        out<< listMember->getMebPh()<<",";
        out<< listMember->getRandomNo()<<"\n";

    }

//    out.flush();
//    outputFileMember.close();

 }

void MainWindow::handleLoadMembers()
{
    QFile inputFileMember("member.txt");

    inputFileMember.open(QIODevice::ReadOnly |
                         QIODevice::Text);

    QTextStream in(&inputFileMember);


    for(int i = 0; i < itemMebs.size(); i++)
    {
        delete itemMebs.at(i);
    }

    ui->ItemMember->clear();
    itemMebs.clear();

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList info = line.split(",");

        ui->ItemMember->addItem("ID : "+info.at(8)+ "                    Member : "+ info.at(0));

        Member* temp = new Member(info.at(0), info.at(1), info.at(2), info.at(3),
                                     info.at(4), info.at(5), info.at(6), info.at(7), info.at(8));

        itemMebs.push_back(temp);

    }

    in.flush();
    inputFileMember.close();

}

void MainWindow::exitApp()
{

    this->close();

}
