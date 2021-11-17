#ifndef PREBOOK_H
#define PREBOOK_H

#include <QDialog>

namespace Ui {
class preBook;
}

class preBook : public QDialog
{
    Q_OBJECT

public:

//    explicit preBook(QWidget *parent = nullptr);

    preBook(QString Title, QString IDBook, QString dueBack, QString IDMember, QString memberName, QString date);

    void setTitle(QString Title);
    void setIDBook(QString IDBook);
    void setDueBack(QString dueBack);
    void setIDMember(QString IDMember);
    void setMemberName(QString memberName);
    void setDate(QString date);

    QString getTitle();
    QString getIDBook();
    QString getDueBack();
    QString getIDMember();
    QString getMemberName();
    QString getDate();


private:
    Ui::preBook *ui;
    QString Title;
    QString IDBook;
    QString dueBack;
    QString IDMember;
    QString memberName;
    QString date;

};

#endif // PREBOOK_H
