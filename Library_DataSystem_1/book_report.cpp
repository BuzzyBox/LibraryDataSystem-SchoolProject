#include "book_report.h"
#include "ui_book_report.h"
#include <QFile>
#include <QTextStream>
book_report::book_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_report)
{
    ui->setupUi(this);
    QFile inputFileBook("book.txt");
    inputFileBook.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileBook);

    ui->ItemBook->clear();

    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList info=line.split(",");

        ui->ItemBook->addItem(info.at(0)+ "               "+info.at(1) );

    }
    in.flush();
    inputFileBook.close();
}

book_report::~book_report()
{
    delete ui;
}

