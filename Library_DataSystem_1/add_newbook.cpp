#include "add_newbook.h"
#include "ui_add_newbook.h"

add_newbook::add_newbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_newbook)
{
    ui->setupUi(this);
}

add_newbook::~add_newbook()
{
    delete ui;
}
