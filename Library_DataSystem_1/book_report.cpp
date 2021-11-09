#include "book_report.h"
#include "ui_book_report.h"

book_report::book_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_report)
{
    ui->setupUi(this);
}

book_report::~book_report()
{
    delete ui;
}
