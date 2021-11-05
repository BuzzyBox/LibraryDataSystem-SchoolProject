#include "edit_memeber.h"
#include "ui_edit_memeber.h"

edit_memeber::edit_memeber(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_memeber)
{
    ui->setupUi(this);
}

edit_memeber::~edit_memeber()
{
    delete ui;
}
