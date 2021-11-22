#include "edit_book.h"
#include "ui_edit_book.h"

#include <QFileDialog>
#include<QMessageBox>
edit_book::edit_book(Book*& currentBook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_book)
{
    ui->setupUi(this);
    this->currentBook = currentBook;

    if(currentBook!=nullptr)

    {
      ui->leTitle->setText(currentBook->getTitle());
      ui->leAuthor->setText(currentBook->getAuthor());
      ui->leDescription->setText(currentBook->getDescription());
      ui->leID->setText(currentBook->getbookID());
      ui->cBavailability->setCurrentText(currentBook->getAvail());
      ui->cBgenre->setCurrentText(currentBook->getGenre());


      QPixmap pixmap(currentBook->getImageFilePath());
      ui->imageBox->setPixmap(pixmap);
      ui->imageBox->setScaledContents(true);


      QString pdate=currentBook->getDatePublished();
      QDate dateP=QDate::fromString(pdate,"dd/MM/yyyy");
      ui->dEeditPD->setDate(dateP);

if(currentBook->getDueBack()!="")
{
    //This turns string date into Qdate date and displays it
      QString bdate=currentBook->getDueBack();
      QDate dateB=QDate::fromString(bdate,"dd/MM/yyyy");
      ui->dateDue->setDate(dateB);


}
else {
    QDate DatE= QDate::currentDate();
    ui->dateDue->setDate(DatE);
}
ui->sBEditNB->setValue(currentBook->getNumCopy());
imageFilePath=currentBook->getImageFilePath();

    }

        connect(ui->btnSaveEditBook, &QPushButton::clicked,this,&edit_book::confirmUpdateBook);
        connect(ui->bpLoadImage, &QPushButton::clicked,this,&edit_book::loadImage);

        ui->cBavailability->addItem("Available");
        ui->cBavailability->addItem("Not Available");

        ui->cBgenre->addItem("Adventure");
        ui->cBgenre->addItem("Biography");
        ui->cBgenre->addItem("Children");
        ui->cBgenre->addItem("Comedy");
        ui->cBgenre->addItem("Fantasy");
        ui->cBgenre->addItem("Graphic Novel");
        ui->cBgenre->addItem("Health");
        ui->cBgenre->addItem("History");
        ui->cBgenre->addItem("Horror");
        ui->cBgenre->addItem("How-To");
        ui->cBgenre->addItem("Life Style");
        ui->cBgenre->addItem("Romance");
        ui->cBgenre->addItem("Science Fiction");
        ui->cBgenre->addItem("Travel");
        ui->cBgenre->addItem("Young Adult");



}

edit_book::~edit_book()
{
    delete ui;
}
void edit_book::confirmUpdateBook()
{
    QString bookid=ui->leID->text();
    QString bookName=ui->leTitle->text();
    QString bookAuthor=ui->leAuthor->text();
    QString bookDes=ui->leDescription->text();
    QString bookPublish=ui->dEeditPD->text();
    QString bookGenre=ui->cBgenre->currentText();
    QString bookAvail=ui->cBavailability->currentText();
    int bookCopy=ui->sBEditNB->value();
    QString bookBack=ui->dateDue->text();


;
    if(bookName!="")
    {
      currentBook->setbookID(bookid);
      currentBook->setTitle(bookName);
      currentBook->setAuthor(bookAuthor);
      currentBook->setDescription(bookDes);
      currentBook->setDatePublished(bookPublish);
      currentBook->setGenre(bookGenre);
      currentBook->setAvail(bookAvail);
      currentBook->setImageFilePath(imageFilePath);
      currentBook->setDueBack(bookBack);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Must enter a name for the book ");
        mb.exec();
    }

}

void edit_book::loadImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
                                            "Open Image", "./",
                                            "Image Files (*.png *.jpg)");

    if (fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");
        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./images" + shortName);
        QPixmap pixmap("./images/" + shortName);

        ui->imageBox->setPixmap(pixmap);
        ui->imageBox->setScaledContents(true);

        //update internal data
        imageFilePath = "./images" + shortName;
    } //end if

}
