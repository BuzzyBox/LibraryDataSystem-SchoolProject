#include "welcome_screen.h"
#include "ui_welcome_screen.h"

welcome_screen::welcome_screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcome_screen)
{
    ui->setupUi(this);
}

welcome_screen::~welcome_screen()
{
    delete ui;
}

