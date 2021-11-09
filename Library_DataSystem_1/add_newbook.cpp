#include "add_newbook.h"
#include "ui_add_newbook.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>

add_newbook::add_newbook( Book*& newBook,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_newbook)
{
    ui->setupUi(this);
    this->newBook=&newBook;
    imageFilePath="none.png";

    connect(ui->btnAddImage, &QPushButton::clicked, this, &add_newbook::confirmImage);

    connect(ui->btnEntrNewBook, &QPushButton::clicked, this, &add_newbook::loadBook);




    ui->cBxGenres->addItem("Adventure");
    ui->cBxGenres->addItem("Biography");
    ui->cBxGenres->addItem("Children");
    ui->cBxGenres->addItem("Comedy");
    ui->cBxGenres->addItem("Fantasy");
    ui->cBxGenres->addItem("Graphic Novel");
    ui->cBxGenres->addItem("Health");
    ui->cBxGenres->addItem("History");
    ui->cBxGenres->addItem("Horror");
    ui->cBxGenres->addItem("How-To");
    ui->cBxGenres->addItem("Life Style");
    ui->cBxGenres->addItem("Romance");
    ui->cBxGenres->addItem("Science Fiction");
    ui->cBxGenres->addItem("Travel");
    ui->cBxGenres->addItem("Young Adult");


    QDir pathDir("./images");
    if(!pathDir.exists())
    {
        QDir().mkdir("./images");
    }
}

add_newbook::~add_newbook()
{
    delete ui;
}


void add_newbook::loadBook()
{
    QString bookid=ui->txtNewIDnum->text();
    QString bookName=ui->txtNewBookTitle->text();
    QString bookAuthor=ui->txtNewAuthor->text();
    QString bookDes=ui->txtDescription->text();
    QString bookPublish=ui->dEpublishDate->text();
    QString bookGenre=ui->cBxGenres->currentText();
    QString bookAvail="Available";
    int bookCopy=ui->sBNumberofBooks->value();
    if(bookName.trimmed()!="" && bookCopy>=1)
    {
        *newBook=new Book(bookName,bookid,  bookAuthor,
                          bookPublish, bookDes,bookCopy, bookGenre,bookAvail,imageFilePath);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Must enter a name for the book ");
        mb.exec();
    }



}



void add_newbook::confirmImage()
{

    QString fileName;
    fileName=QFileDialog::getOpenFileName(this,"Open Image","./","Image File(*.png *.jpg)");

    if(fileName != "")
    {
        int lastSlash=fileName.lastIndexOf("/");
        QString shortName=fileName.right(fileName.size()-lastSlash-1);

        QFile::copy(fileName,"./images/"+shortName);

        QPixmap pixmap("./images/"+shortName);

        ui->imageBox01->setPixmap(pixmap);
        ui->imageBox01->setScaledContents(true);

        imageFilePath="./images/"+shortName;
    }

}
