#include "edit_book.h"
#include "ui_edit_book.h"

edit_book::edit_book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_book)
{
    ui->setupUi(this);
}

edit_book::~edit_book()
{
    delete ui;
}
