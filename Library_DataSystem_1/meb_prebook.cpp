#include "meb_prebook.h"
#include "ui_meb_prebook.h"
#include <QFile>
#include <QTextStream>
#include "prebook.h"
meb_prebook::meb_prebook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meb_prebook)
{


    preBook* newprr=nullptr;
    ui->setupUi(this);

    connect(ui->ItemPrebook, &QListWidget::itemClicked, this, &meb_prebook::whenClicked);

    QFile inputFileBook("prebook.txt");
    inputFileBook.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileBook);

    ui->ItemPrebook->clear();

    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList info=line.split(",");

        ui->ItemPrebook->addItem(info.at(0)+"          "+info.at(1)+"          "+info.at(3)+"          "+info.at(4));

        newprr = new preBook(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5));
        listprr.push_back(newprr);
    }

    in.flush();
    inputFileBook.close();

    ui->ItemPrebook->setCurrentRow(0);
    whenClicked();
}

meb_prebook::~meb_prebook()
{
    delete ui;
}

void meb_prebook::whenClicked()
{
    int index=ui->ItemPrebook->currentRow();
    if (index>=0)
    {
        preBook* newPrr=listprr.at(index);
        ui->lbTitle->setText(newPrr->getTitle());
        ui->lbBID->setText(newPrr->getIDBook());
        ui->lbName->setText(newPrr->getMemberName());
        ui->lbMID->setText(newPrr->getIDMember());
        ui->lbDB->setText(newPrr->getDueBack());
        ui->lbRD->setText(newPrr->getDate());
    }
}
