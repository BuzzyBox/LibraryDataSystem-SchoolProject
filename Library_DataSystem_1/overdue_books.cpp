#include "overdue_books.h"
#include "ui_overdue_books.h"
#include "member.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDate>

overdue_books::overdue_books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::overdue_books)
{
    ui->setupUi(this);
    QFile inputFileMember("member.txt");
    inputFileMember.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&inputFileMember);

    Member* newMeme=nullptr;
    ui->ItemMember->clear();

    while(!in.atEnd())
    {

        QDate curDate=QDate::currentDate();

     QString line=in.readLine();
     QStringList info=line.split(",");
        QDate f1 = QDate::fromString(info.at(12));
        QDate f2 = QDate::fromString(info.at(13));
        QDate f3 = QDate::fromString(info.at(14));

        int book01= f1.daysTo(curDate);
        int book02= f2.daysTo(curDate);
        int book03= f3.daysTo(curDate);
        if (book01>0)
        {
            ui->ItemMember->addItem(info.at(9)+"          "+info.at(12)+"          "+info.at(8)+"          "+info.at(0));
            newMeme = new Member(info.at(0), info.at(1), info.at(2), info.at(3),
                                info.at(4), info.at(5), info.at(6), info.at(7), info.at(8),info.at(9),info.at(10)
                             ,info.at(11),info.at(12),info.at(13),info.at(14), info.at(15).toFloat());

        }
        else if (book02>0)
        {
            ui->ItemMember->addItem(info.at(10)+"          "+info.at(13)+"          "+info.at(8)+"          "+info.at(0));
            newMeme = new Member(info.at(0), info.at(1), info.at(2), info.at(3),
                                info.at(4), info.at(5), info.at(6), info.at(7), info.at(8),info.at(9),info.at(10)
                             ,info.at(11),info.at(12),info.at(13),info.at(14), info.at(15).toFloat());
        }
        else if (book03>0)
        {
            ui->ItemMember->addItem(info.at(11)+"          "+info.at(14)+"          "+info.at(8)+"          "+info.at(0));
            newMeme = new Member(info.at(0), info.at(1), info.at(2), info.at(3),
                                info.at(4), info.at(5), info.at(6), info.at(7), info.at(8),info.at(9),info.at(10)
                             ,info.at(11),info.at(12),info.at(13),info.at(14), info.at(15).toFloat());
        }

        itemMebb.push_back(newMeme);

    }
    in.flush();
    inputFileMember.close();
     connect(ui->ItemMember, &QListWidget::itemClicked,this,&overdue_books::whenClick);
}

overdue_books::~overdue_books()
{
    delete ui;
}
void overdue_books::whenClick()
{
    int index=ui->ItemMember->currentRow();
    if(index>=0)
    {
        Member*newMem=itemMebb.at(index);

        ui->lbMebID->setText(newMem->getRandomNo());
        ui->lbName->setText(newMem->getMebName());
        ui->title01->setText(newMem->getLoan1());
        ui->date01->setText(newMem->getReturn1());
        ui->title02->setText(newMem->getLoan2());
        ui->date02->setText(newMem->getReturn2());
        ui->title03->setText(newMem->getLoan3());
        ui->date03->setText(newMem->getReturn3());
        QString fee= QString::number(newMem->getFees());
        ui->lbFees->setText(fee);

    }
}
