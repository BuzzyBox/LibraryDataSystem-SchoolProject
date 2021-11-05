#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup_menu.h"
#include <QTextOption>
#include <QFile>
#include <QTextStream>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ItemMember->setCurrentRow(0);
    //handleLoadMembers(); //Qfile later on

   connect(ui->actionNew_Member, &QAction::triggered,
         this, &MainWindow::handleNewMember);
   connect(ui->ItemMember, &QListWidget::itemClicked, this, &MainWindow::handMemberClicked);



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

//    if(newMeb != nullptr)
//    {
//        itemMebs.push_back(newMeb);
//        ui->ItemMember->addItem(newMeb->getMebName());

//    }

    if(newMeb!=nullptr)
    {
        itemMebs.push_back(newMeb);

        ui->ItemMember->addItem(newMeb->getMebName()+ "  "+ newMeb->getRandomNo());
    }


}

void MainWindow::handMemberClicked()
{

    int index = ui->ItemMember->currentRow();

    if(index >= 0)
    {
      Member*theMember=itemMebs.at(index);
      ui->lbmebName->setText(theMember->getMebName());
      ui->lbUName->setText(theMember->getUserName());
      ui->lbmebEmail->setText(theMember->getMebEmail());
      ui->lbmebBirthdate->setText(theMember->getMebBirthday());
      ui->lbGen->setText(theMember->getMebGen());
      ui->lbmebPhone->setText(theMember->getMebPh());
      ui->lbmebAdd->setText(theMember->getMebAddress());
    }



}
