#include "book_report.h"
#include "ui_book_report.h"
#include <QFile>
#include <QTextStream>
#include <QString>
book_report::book_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_report)
{
   ui->setupUi(this);

   connect(ui->btnAA, &QPushButton::clicked, this, &book_report::bookAvail);
   connect(ui->btnNA, &QPushButton::clicked, this, &book_report::bookNotAvail);
   connect(ui->pbRefresh, &QPushButton::clicked, this,&book_report::bookList );
   bookList();
}

book_report::~book_report()
{
    delete ui;
}
void book_report::bookList()
{

    QFile inputFileBook("book.txt");
    inputFileBook.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileBook);

    ui->ItemBook->clear();

    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList info=line.split(",");

        ui->ItemBook->addItem("Title : "+info.at(0)+ "\n"+"ID No : "+info.at(1)+"\n"+"Availability : "+ info.at(7)+"\n");

    }
    in.flush();
    inputFileBook.close();
}
void:: book_report::bookAvail()
{
    QString searchA = "Not Available";

    QList<QListWidgetItem*>list=ui->ItemBook->findItems(searchA,Qt::MatchContains);
    for(int i=0; i< ui->ItemBook->count();i++)
    {
        QListWidgetItem* item=ui->ItemBook->item(i);
        item->setHidden(false);
    }
    for(QListWidgetItem*item:list)
    {
        item->setHidden(true);
    }


}
void:: book_report::bookNotAvail()
{
    QString searchNA = "Not Available";

    QList<QListWidgetItem*>list=ui->ItemBook->findItems(searchNA,Qt::MatchContains);
    for(int i=0; i< ui->ItemBook->count();i++)
    {
        QListWidgetItem* item=ui->ItemBook->item(i);
        item->setHidden(true);
    }
    for(QListWidgetItem*item:list)
    {
        item->setHidden(false);
    }


}

