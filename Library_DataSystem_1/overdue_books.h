#ifndef OVERDUE_BOOKS_H
#define OVERDUE_BOOKS_H

#include <QDialog>
#include<QVector>
#include "member.h"
namespace Ui {
class overdue_books;
}

class overdue_books : public QDialog
{
    Q_OBJECT

public:
    explicit overdue_books(QWidget *parent = nullptr);
    ~overdue_books();

    void whenClick();

private:
    Ui::overdue_books *ui;
    QVector<Member*> itemMebb;
};

#endif // OVERDUE_BOOKS_H
