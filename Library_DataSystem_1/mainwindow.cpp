#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup_menu.h"
#include "edit_memeber.h"
#include "edit_book.h"
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


   connect(ui->btnSearchMember, &QPushButton::clicked,
            this, &MainWindow::searchMemberDetials);



   connect(ui->actionLoad_Members, &QAction::triggered,
           this, &MainWindow::handleLoadMembers);


   //Exit App

   connect(ui->actionExit, &QAction::triggered,
           this, &MainWindow::exitApp);

   connect(ui->actionAdd_Book, &QAction::triggered,this,&MainWindow::newBookOption);
     connect(ui->ItemBook, &QListWidget::itemClicked,this,&MainWindow::whenBookClicked);
     connect(ui->actionSave_Books, &QAction::triggered,this,&MainWindow::whenBookSaved);
     connect(ui->actionLoad_Books, &QAction::triggered,this,&MainWindow::bookLoaded);
     connect(ui->actionEdit_Existing_Book, &QAction::triggered,this,&MainWindow::editBookOption);
     connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow::searchBook);
      connect(ui->pbRefresh, &QPushButton::clicked, this, &MainWindow::refreshListB);
      connect(ui->pbRefreshM, &QPushButton::clicked, this, &MainWindow::refreshListM);


      bookLoaded();
      ui->ItemBook->setCurrentRow(0);
      whenBookClicked();


      handleLoadMembers();
      ui->ItemMember->setCurrentRow(0);
      handMemberClicked();

      ui->pbRefresh->setHidden(true);
      ui->pbRefreshM->setHidden(true);






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


    for(int i=0;i<bookList.size();i++)
     {
         delete bookList.at(i);
     }
     bookList.clear();
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
void MainWindow::searchMemberDetials()
{
    QString mebSearch = ui->lEditSearchMember->text();

    if(mebSearch != "")
    {
        for(int i = 0; i < ui->ItemMember->count(); i++)
        {
            QListWidgetItem* item = ui->ItemMember->item(i);
            item->setHidden(true);
        }

      QList<QListWidgetItem* > mebList = ui->ItemMember->findItems(mebSearch, Qt::MatchContains);

      for(int i = 0; i < mebList.count(); i++)
      {
          QListWidgetItem* item = mebList.at(i);
          item->setHidden(false);
      }

    }
    else
    {
        for(int i = 0; i < ui->ItemMember->count(); i++)
        {
            QListWidgetItem* item = ui->ItemMember->item(i);
            item->setHidden(false);
        }
    }

}
void MainWindow::refreshListM()
{
    for(int i=0;i<ui->ItemMember->count(); i++)
    {
        QListWidgetItem* item=ui->ItemMember->item(i);
        item->setHidden(false);
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
        out<< listMember->getRandomNo()<<",";
        out<< listMember->getLoan1()<<",";
        out<< listMember->getLoan2()<<",";
        out<< listMember->getLoan3()<<",";
        out<< listMember->getReturn1()<<",";
        out<< listMember->getReturn2()<<",";
        out<< listMember->getReturn3()<<"\n";

    }

    out.flush();
    outputFileMember.close();

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
                                     info.at(4), info.at(5), info.at(6), info.at(7), info.at(8),info.at(9),info.at(10)
                                  ,info.at(11),info.at(12),info.at(13),info.at(14));

        itemMebs.push_back(temp);

    }

    in.flush();
    inputFileMember.close();

}
void MainWindow::newBookOption()
{
    Book*newBook=nullptr;
    add_newbook addNewBook(newBook,nullptr);
    addNewBook.setModal(true);
    addNewBook.exec();

    if(newBook!=nullptr)
    {
        bookList.push_back(newBook);

        ui->ItemBook->addItem(newBook->getTitle()+ "               "+newBook->getbookID() );
    }
}
void MainWindow::editBookOption()
{
    int index=ui->ItemBook->currentRow();
    if(index!=-1)
    {
        Book* currentBook=bookList.at(index);
        if(currentBook!=nullptr)
        {
            edit_book editBook(currentBook, nullptr);
            editBook.exec();
            ui->lbTitle->setText(currentBook->getTitle());

            ui->lbAuthor->setText(currentBook->getAuthor());

            ui->lbDate->setText(currentBook->getDatePublished());

            ui->lbIDNum->setText(currentBook->getbookID());
            ui->lbGenreTxt->setText(currentBook->getGenre());
            ui->lbAvailability->setText(currentBook->getAvail());

            QPixmap pixmap(currentBook->getImageFilePath());

            ui->labBookCover->setPixmap(pixmap);

            ui->labBookCover->setScaledContents(true);

        }
    }
    whenBookSaved();
    bookLoaded();
}


void MainWindow::whenBookClicked()
{
    int index=ui->ItemBook->currentRow();

    if(index>=0)
    {
        Book*newBook=bookList.at(index);


        ui->lbTitle->setText(newBook->getTitle());

        ui->lbAuthor->setText(newBook->getAuthor());

        ui->lbDate->setText(newBook->getDatePublished());

        ui->lbIDNum->setText(newBook->getbookID());
        ui->lbGenreTxt->setText(newBook->getGenre());
        ui->lbAvailability->setText(newBook->getAvail());

        QPixmap pixmap(newBook->getImageFilePath());

        ui->labBookCover->setPixmap(pixmap);

        ui->labBookCover->setScaledContents(true);

    }
}
void MainWindow::whenBookSaved()
{
    QFile outputFileBook("book.txt");
    outputFileBook.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&outputFileBook);
    for(int i=0;i<bookList.size();i++)
    {
        out<<bookList.at(i)->getTitle()<<",";
        out<<bookList.at(i)->getbookID()<<",";
        out<<bookList.at(i)->getAuthor()<<",";
        out<<bookList.at(i)->getDatePublished()<<",";
        out<<bookList.at(i)->getDescription()<<",";
        out<<bookList.at(i)->getNumCopy()<<",";
        out<<bookList.at(i)->getGenre()<<",";
        out<<bookList.at(i)->getAvail()<<",";
        out<<bookList.at(i)->getImageFilePath()<<"\n";

    }
    out.flush();
    outputFileBook.close();

}

void MainWindow::bookLoaded()
{
    QFile inputFileBook("book.txt");
    inputFileBook.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileBook);

    ui->ItemBook->clear();
    for(int i=0;i<bookList.size();i++)
    {
        delete bookList.at(i);
    }
    bookList.clear();
    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList info=line.split(",");

        ui->ItemBook->addItem(info.at(0)+ "               "+info.at(1) );
        Book* temp=new Book(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5).toInt(),info.at(6),info.at(7),info.at(8));
        bookList.push_back(temp);
    }
    in.flush();
    inputFileBook.close();
}
void MainWindow::searchBook()
{
    QString search=ui->lEditSearchBook1->text();
    if(search!="")
    {
        ui->pbRefresh->setHidden(false);
        QList<QListWidgetItem*>list=ui->ItemBook->findItems(search,Qt::MatchContains);
        for(int i=0; i< ui->ItemBook->count();i++)
        {
            QListWidgetItem* item=ui->ItemBook->item(i);
            item->setHidden(true);
        }
        for(QListWidgetItem*item:list)
        {
            item->setHidden(false);
        }
    } else
    {
        for(int i=0;i<ui->ItemBook->count(); i++)
        {
            QListWidgetItem* item=ui->ItemBook->item(i);
            item->setHidden(false);
        }
    }
}


void MainWindow::refreshListB()
{
    for(int i=0;i<ui->ItemBook->count(); i++)
    {
        QListWidgetItem* item=ui->ItemBook->item(i);
        item->setHidden(false);
    }
}




void MainWindow::exitApp()
{

    this->close();

}