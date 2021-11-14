#include "mainwindowmeb.h"
#include "ui_mainwindowmeb.h"
#include "book.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QResource>
#include <QDir>
#include <QFileDialog>

MainWindowMeb::MainWindowMeb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowMeb)
{
    ui->setupUi(this);

    connect(ui->actionExit, &QAction:: triggered,
            this, &MainWindowMeb::exitApp);

    connect(ui->ItemBook, &QListWidget::itemClicked,
            this, &MainWindowMeb::whenBookClicked);

    getBookData();
    ui->ItemBook->setCurrentRow(0);







}


MainWindowMeb::~MainWindowMeb()
{
    delete ui;

    for (int i = 0; i<booklist.size();i++)
    {
        delete booklist.at(i);
    }
    booklist.clear();
    delete ui;


}

void MainWindowMeb::whenBookClicked()
{
    int index = ui->ItemBook->currentRow();

//    QString fileName;
//    fileName = QFileDialog::getOpenFileName(this,"Open Image","./","Image File(*.png *.jpg");

//    if(fileName != "")
//    {
//        int lastSlash = fileName.lastIndexOf("/");
//        QString shortName = fileName.right(fileName.size()-lastSlash-1);

//        QFile::copy(fileName,"./images/"+shortName);
//        QPixmap pixmap("./images/"+shortName);
//        ui->labBookCover->setPixmap(pixmap);
//        ui->labBookCover->setScaledContents(true);

//        imageFilePath = "./images/"+shortName;

//    }



    if(index >= 0)
    {
        Book*newBook = booklist.at(index);

        ui->lbTitle->setText(newBook->getTitle());
        ui->lbAuthor->setText(newBook->getAuthor());

        ui->lbDate->setText(newBook->getDatePublished());

        ui->lbIDNum->setText(newBook->getbookID());
        ui->lbGenreTxt->setText(newBook->getGenre());
        ui->lbAvailability->setText(newBook->getAvail());
        //ui->lbDateBack->setText(newBook->getDueBack());

        QPixmap pixmap(newBook->getImageFilePath());

        ui->labBookCover->setPixmap(pixmap);

        ui->labBookCover->setScaledContents(true);

    }


}

void MainWindowMeb::getBookData()
{

    //C:\Users\Buzzy\Documents\QtCode\build-Library_DataSystem_1-Desktop_Qt_6_2_0_MinGW_64_bit-Debug



    QDir Bookdir("C:/Documents");

    QString findbooks;

    findbooks = Bookdir.relativeFilePath("/build-Library_DataSystem_1-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/book.txt");

    QFile loadBook(findbooks);








//      QString loadBook;("./book.txt");
//      QFile loadB(loadBook);




              if(!loadBook.open(QIODevice::ReadOnly|QIODevice::Text))
              {

                  QMessageBox::warning(this,"BookNook Library", "Cannot find books");

              }

             loadBook.open(QIODevice::ReadOnly|QIODevice::Text);
             QTextStream in(&loadBook);


              ui->ItemBook->clear();
              for(int i = 0; i < booklist.size(); i++)
              {
                  delete booklist.at(i);
              }
              booklist.clear();

              while(!in.atEnd())
              {
                  QString line = in.readLine();
                  QStringList info = line.split(",");

                  ui->ItemBook->addItem(info.at(0)+ "               "+info.at(1) );
                  Book* temp = new Book(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5).toInt(),info.at(6),info.at(7),info.at(8), info.at(9));
                  booklist.push_back(temp);

              }



              in.flush();
              loadBook.close();


//    QFile bookFile(":/resources/res/book.txt");


//        if(!bookFile.open(QIODevice::ReadOnly|QIODevice::Text))
//        {

//            QMessageBox::warning(this,"BookNook Library", "Cannot find books");

//        }

//        bookFile.open(QIODevice::ReadOnly|QIODevice::Text);
//        QTextStream in(&bookFile);


//        ui->ItemBook->clear();
//        for(int i = 0; i < booklist.size(); i++)
//        {
//            delete booklist.at(i);
//        }
//        booklist.clear();

//        while(!in.atEnd())
//        {
//            QString line = in.readLine();
//            QStringList info = line.split(",");

//            ui->ItemBook->addItem(info.at(0)+ "               "+info.at(1) );
//            Book* temp = new Book(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5).toInt(),info.at(6),info.at(7),info.at(8), info.at(9));
//            booklist.push_back(temp);

//        }



//        in.flush();
//        bookFile.close();







//D:\Users\270121466\Documents\build-Library_DataSystem_1-Desktop_Qt_5_12_11_MinGW_64_bit-Debug

//    QString fileBook("book.txt");


//    if(!bookFile.open(QIODevice::ReadOnly | QIODevice:: Text))
//    {
//        QMessageBox::warning(this,"BookNook Library", "Cannot find books");
//    }

//    if(QFileInfo::exists(fileBook))
//    {

//        QFile bookFile(fileBook);
//        bookFile.open(QIODevice::ReadOnly|QIODevice::Text);
//        QTextStream in(&bookFile);


//        ui->ItemBook->clear();
//        for(int i = 0; i < booklist.size(); i++)
//        {
//            delete booklist.at(i);
//        }
//        booklist.clear();

//        while(!in.atEnd())
//        {
//            QString line = in.readLine();
//            QStringList info = line.split(",");

//            ui->ItemBook->addItem(info.at(0)+ "               "+info.at(1) );
//            Book* temp = new Book(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5).toInt(),info.at(6),info.at(7),info.at(8), info.at(9));
//            booklist.push_back(temp);

//        }



//        in.flush();
//        bookFile.close();


//    }
//    else
//    {
//         QMessageBox::warning(this,"BookNook Library", "Cannot find books");
//    }


}

void MainWindowMeb::exitApp()
{
    this->close();
}
