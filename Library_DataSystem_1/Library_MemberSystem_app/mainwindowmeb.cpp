#include "mainwindowmeb.h"
#include "ui_mainwindowmeb.h"
#include "book.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDir>
#include <QFile>

MainWindowMeb::MainWindowMeb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowMeb)
{
    ui->setupUi(this);

    connect(ui->actionExit, &QAction:: triggered,
            this, &MainWindowMeb::exitApp);

    connect(ui->list, &QListWidget::itemClicked,
            this, &MainWindowMeb::whenBookClicked);

    getBookData();
    ui->list->setCurrentRow(0);

}


MainWindowMeb::~MainWindowMeb()
{
   delete ui;

    for (int i = 0; i<bookList.size();i++)
    {
        delete bookList.at(i);
    }
    bookList.clear();
   delete ui;


}

void MainWindowMeb::whenBookClicked()
{
    int index = ui->list->currentRow();



    if(index >= 0)
    {
        Book*newBook = bookList.at(index);

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

void MainWindowMeb::getBookData()
{

    QFile inputFileB("book2.txt");
    inputFileB.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileB);
    ui->list->clear();

    for(int i=0; 1<bookList.size();i++)
    {
        delete bookList.at(i);
    }
    bookList.clear();
    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList info=line.split(",");

        ui->list->addItem(info.at(0)+"              "+ info.at(1)+ "               "+info.at(7));

        Book* temp=new Book(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5).toInt(),info.at(6),info.at(7),info.at(8), info.at(9));

        bookList.push_back(temp);

    }
    in.flush();
    inputFileB.close();






}

void MainWindowMeb::exitApp()
{
    this->close();
}
