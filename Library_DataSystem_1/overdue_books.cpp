#include "overdue_books.h"
#include "ui_overdue_books.h"

overdue_books::overdue_books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::overdue_books)
{
    ui->setupUi(this);
}

overdue_books::~overdue_books()
{
    delete ui;
}
